/**
 * nhl_07_recomp - Recompiled code chunk 89
 * Functions: 250 (0x000C0790 - 0x000C79E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000C0790
 * Original: 0x000C0790 - 0x000C07AE (30 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0790(void)
{

loc_000C0790: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    edx = eax + ecx + -16;
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C07ABu); RECOMP_ABI_CALL(0x0002B2BBu, sub_0002B2BB); /* call 0x0002B2BB */

loc_000C07AB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000C07C0
 * Original: 0x000C07C0 - 0x000C07E3 (35 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C07C0(void)
{

loc_000C07C0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = ecx + edx + -16;
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C07E0u); RECOMP_ABI_CALL(0x0002509Bu, sub_0002509B); /* call 0x0002509B */

loc_000C07E0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C07F0
 * Original: 0x000C07F0 - 0x000C087E (142 bytes, 35 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C07F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C07F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    PUSH32(esp, esi);
    esi = eax + ecx + -16;
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C080Fu); RECOMP_ABI_CALL(0x0002B2BBu, sub_0002B2BB); /* call 0x0002B2BB */

loc_000C080F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    ecx = MEM32(0x8EB32C);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C0846u); RECOMP_ABI_CALL(0x0002509Bu, sub_0002509B); /* call 0x0002509B */

loc_000C0846: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, 0x3D086595);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C0877u); RECOMP_ABI_CALL(0x0001CE50u, sub_0001CE50); /* call 0x0001CE50 */

loc_000C0877: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000C08B0
 * Original: 0x000C08B0 - 0x000C093E (142 bytes, 37 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C08B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000C08B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    PUSH32(esp, esi);
    esi = eax + ecx + -16;
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C08CCu); RECOMP_ABI_CALL(0x0002B2BBu, sub_0002B2BB); /* call 0x0002B2BB */

loc_000C08CC: ;
    ecx = MEM32(esp + 0x10);
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C4070); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C093Au); RECOMP_ABI_CALL(0x00031189u, sub_00031189); /* call 0x00031189 */

loc_000C093A: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C0970
 * Original: 0x000C0970 - 0x000C0EA5 (1333 bytes, 343 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0970(void)
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

loc_000C0970: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 1;
    edi = edi;

loc_000C0980: ;
    ebx = esi;
    ebp = 1;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xF);
    /* nop */

loc_000C0990: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C099Au); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C099A: ;
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, eax);
    eax = ebx + ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C09ABu); RECOMP_ABI_CALL(0x0002509Bu, sub_0002509B); /* call 0x0002509B */

loc_000C09AB: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C0990; /* jl: less (signed <) */

loc_000C09B1: ;
    ebp = 1;

loc_000C09B6: ;
    ecx = MEM32(edi + 0x30);
    eax = ebp + 1;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000C09C7u); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C09C7: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000C09D5u); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C09D5: ;
    ecx = MEM32(esp + 0x14);
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C4070); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = ebx + ebp + -15;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB32C);
    edx = ebx + ebp + -16;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C0A4Bu); RECOMP_ABI_CALL(0x00017D4Cu, sub_00017D4C); /* call 0x00017D4C */

loc_000C0A4B: ;
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C09B6; /* jl: less (signed <) */

loc_000C0A58: ;
    ecx = MEM32(edi + 0x30);
    eax = esi + 1;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000C0A6Au); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C0A6A: ;
    ecx = MEM32(0x8EB32C);
    ebp = eax;
    eax = ebx + -15;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C0A7Bu); RECOMP_ABI_CALL(0x0002B2BBu, sub_0002B2BB); /* call 0x0002B2BB */

loc_000C0A7B: ;
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C4070); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB32C);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebp);
    eax = ebx + -15;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C0AE9u); RECOMP_ABI_CALL(0x00031189u, sub_00031189); /* call 0x00031189 */

loc_000C0AE9: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C0AF8u); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C0AF8: ;
    ecx = MEM32(0x8EB32C);
    ebp = eax;
    eax = ebx + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C0B09u); RECOMP_ABI_CALL(0x0002B2BBu, sub_0002B2BB); /* call 0x0002B2BB */

loc_000C0B09: ;
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C4070); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB32C);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebp);
    eax = ebx + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C0B77u); RECOMP_ABI_CALL(0x00031189u, sub_00031189); /* call 0x00031189 */

loc_000C0B77: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C0B82u); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C0B82: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    ebp = esi + esi * 2;
    ebp = ebp * 4 + 0x8EB330;
    MEM32(ebp) = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C0DFB; /* jne: not equal / not zero */

loc_000C0BA6: ;
    MEM32(esp + 0x10) = esi;
    /* nop */

loc_000C0BB0: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000C0BBFu); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C0BBF: ;
    ecx = MEM32(0x8EB32C);
    ebp = eax;
    eax = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C0BD2u); RECOMP_ABI_CALL(0x0002B2BBu, sub_0002B2BB); /* call 0x0002B2BB */

loc_000C0BD2: ;
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C4070); /* mulss */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB32C);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C0C42u); RECOMP_ABI_CALL(0x00031189u, sub_00031189); /* call 0x00031189 */

loc_000C0C42: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000C0BB0; /* jl: less (signed <) */

loc_000C0C54: ;
    ebp = 1;
    /* nop */

loc_000C0C60: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C0C6Eu); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C0C6E: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000C0C7Cu); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C0C7C: ;
    ecx = MEM32(esp + 0x10);
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C4070); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = ebx + ebp + -1;
    PUSH32(esp, eax);
    ecx = ebx + ebp + -16;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, 0x000C0CF2u); RECOMP_ABI_CALL(0x00017D4Cu, sub_00017D4C); /* call 0x00017D4C */

loc_000C0CF2: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C0C60; /* jl: less (signed <) */

loc_000C0CFC: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C0980; /* jl: less (signed <) */

loc_000C0D09: ;
    eax = MEM32(0x8EB340);
    ecx = MEM32(0x8EB344);
    edx = MEM32(0x8EB33C);
    MEM32(esp + 0x58) = eax;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    eax = MEM32(0x8EB388);
    MEM32(esp + 0x5C) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    ecx = MEM32(0x8EB38C);
    MEM32(esp + 0x4C) = eax;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEM32(esp + 0x50) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    xmm3 = XMM_SCALAR(MEMF(0x8EB34C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(0x8EB350) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x8EB358)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(0x8EB35C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x8EB364)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(0x8EB368) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x8EB370)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(0x8EB374) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x8EB37C)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(0x8EB384);
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    POP32(esp, ebp);
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x3C) = edx;
    MEMF(0x8EB380) = xmm3.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C0DFB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C0C54; /* jne: not equal / not zero */

loc_000C0E04: ;
    ebx = 1;
    /* nop */

loc_000C0E10: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, 0x000C0E1Bu); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C0E1B: ;
    ecx = MEM32(0x8EB32C);
    ebp = ebx + 0x59;
    PUSH32(esp, ebp);
    esi = eax;
    PUSH32(esp, 0x000C0E2Cu); RECOMP_ABI_CALL(0x0002B2BBu, sub_0002B2BB); /* call 0x0002B2BB */

loc_000C0E2C: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C4070); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB32C);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000C0E96u); RECOMP_ABI_CALL(0x00031189u, sub_00031189); /* call 0x00031189 */

loc_000C0E96: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C0E10; /* jl: less (signed <) */

loc_000C0EA0: ;
    goto loc_000C0CFC;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C0C00
 * Original: 0x000C0C00 - 0x000C0EA5 (677 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0C00(void)
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

loc_000C0C00: ;
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C4070); /* mulss */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB32C);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C0C42u); RECOMP_ABI_CALL(0x00031189u, sub_00031189); /* call 0x00031189 */

loc_000C0C42: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000C0BB0(); return; } /* jl: less (signed <) */

loc_000C0C54: ;
    ebp = 1;
    /* nop */

loc_000C0C60: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C0C6Eu); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C0C6E: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000C0C7Cu); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C0C7C: ;
    ecx = MEM32(esp + 0x10);
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C4070); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = ebx + ebp + -1;
    PUSH32(esp, eax);
    ecx = ebx + ebp + -16;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, 0x000C0CF2u); RECOMP_ABI_CALL(0x00017D4Cu, sub_00017D4C); /* call 0x00017D4C */

loc_000C0CF2: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C0C60; /* jl: less (signed <) */

loc_000C0CFC: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000C0980(); return; } /* jl: less (signed <) */

loc_000C0D09: ;
    eax = MEM32(0x8EB340);
    ecx = MEM32(0x8EB344);
    edx = MEM32(0x8EB33C);
    MEM32(esp + 0x58) = eax;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    eax = MEM32(0x8EB388);
    MEM32(esp + 0x5C) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    ecx = MEM32(0x8EB38C);
    MEM32(esp + 0x4C) = eax;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEM32(esp + 0x50) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    xmm3 = XMM_SCALAR(MEMF(0x8EB34C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(0x8EB350) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x8EB358)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(0x8EB35C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x8EB364)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(0x8EB368) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x8EB370)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(0x8EB374) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x8EB37C)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(0x8EB384);
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    POP32(esp, ebp);
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x3C) = edx;
    MEMF(0x8EB380) = xmm3.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    ebx = 1;
    /* nop */

loc_000C0E10: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, 0x000C0E1Bu); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C0E1B: ;
    ecx = MEM32(0x8EB32C);
    ebp = ebx + 0x59;
    PUSH32(esp, ebp);
    esi = eax;
    PUSH32(esp, 0x000C0E2Cu); RECOMP_ABI_CALL(0x0002B2BBu, sub_0002B2BB); /* call 0x0002B2BB */

loc_000C0E2C: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C4070); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB32C);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000C0E96u); RECOMP_ABI_CALL(0x00031189u, sub_00031189); /* call 0x00031189 */

loc_000C0E96: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C0E10; /* jl: less (signed <) */

loc_000C0EA0: ;
    goto loc_000C0CFC;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C1000
 * Original: 0x000C1000 - 0x000C1226 (550 bytes, 143 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1000(void)
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

loc_000C1000: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000C121F; /* jne: not equal / not zero */

loc_000C1012: ;
    eax = MEM32(esp + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(0x7ABD7C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca > _fcb)) goto loc_000C121F; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_000C1028: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB0)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, ebp);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0xC) = ebp;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    ebx = 1;
    PUSH32(esp, esi);
    /* nop */

loc_000C1070: ;
    esi = 1;

loc_000C1075: ;
    ecx = MEM32(0x8EB32C);
    eax = esi + ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C1084u); RECOMP_ABI_CALL(0x0002B2BBu, sub_0002B2BB); /* call 0x0002B2BB */

loc_000C1084: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x40);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C10BA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000C10A9: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    goto loc_000C10C6;

loc_000C10BA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_000C10C6: ;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEM32(esp + 0x1C) = edx;
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x18) = ecx;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    MEM32(esp + 0x20) = eax;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C115F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000C1151: ;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = esi;

loc_000C115F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C1075; /* jl: less (signed <) */

loc_000C1169: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x68 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C1070; /* jl: less (signed <) */

loc_000C1176: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(0x7ABD68)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000C121C; /* ja: above (unsigned >) */

loc_000C118E: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C121C; /* jne: not equal / not zero */

loc_000C1197: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C121C; /* je: equal / zero */

loc_000C11A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C121C; /* je: equal / zero */

loc_000C11A5: ;
    esi = MEM32(esp + 0x48);
    edx = esi;
    ebx = MEM32(edx);
    ecx = edi + 0x10;
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(ecx + 8) = ebx;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x4C);
    ebx = MEM32(edx);
    ecx = edi + 0x20;
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(ecx + 8) = ebx;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(edi + 2) = LO8(ecx);
    MEM8(edi + 3) = LO8(eax);
    MEM8(edi) = 1;
    MEM32(edi + 0x34) = 0;
    ecx = MEM32(0x8FC1D0);
    PUSH32(esp, 0x000C1200u); RECOMP_ABI_CALL(0x000296FAu, sub_000296FA); /* call 0x000296FA */

loc_000C1200: ;
    edx = MEM32(eax + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x7B8E28)); /* movss */
    MEM32(edi + 8) = edx;
    MEM8(edi + 4) = 0;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C121C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 4)) */

loc_000C1218: ;
    MEM8(edi + 4) = 1;

loc_000C121C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000C121F: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C12B0
 * Original: 0x000C12B0 - 0x000C12BF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C12B0(void)
{

loc_000C12B0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x000C12BCu); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_000C12BC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C12D0
 * Original: 0x000C12D0 - 0x000C138F (191 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C12D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C12D0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C1303; /* je: equal / zero */

loc_000C12E1: ;
    esi = 0x78;
    goto loc_000C12F0;

    /* nop */
    /* nop */

loc_000C12F0: ;
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, 0x3D088889);
    PUSH32(esp, 0x000C1300u); RECOMP_ABI_CALL(0x00026A5Eu, sub_00026A5E); /* call 0x00026A5E */

loc_000C1300: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C12F0; /* jne: not equal / not zero */

loc_000C1303: ;
    edi = MEM32(0x8EB328);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 1;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000C1314: ;
    esi = 1;
    /* nop */

loc_000C1320: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1349; /* je: equal / zero */

loc_000C1328: ;
    ecx = MEM32(0x8EB32C);
    eax = ebx + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C1337u); RECOMP_ABI_CALL(0x0002B2BBu, sub_0002B2BB); /* call 0x0002B2BB */

loc_000C1337: ;
    edx = MEM32(eax);
    ecx = edi;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;

loc_000C1349: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000C1357u); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C1357: ;
    edx = edi;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    MEM32(eax + 8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000C1320; /* jl: less (signed <) */

loc_000C1372: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x68 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C1314; /* jl: less (signed <) */

loc_000C137B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x30);
    PUSH32(esp, 0x000C1387u); RECOMP_ABI_CALL(0x00013067u, sub_00013067); /* call 0x00013067 */

loc_000C1387: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C13C0
 * Original: 0x000C13C0 - 0x000C143A (122 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C13C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C13C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x8EB328);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    ebp = 1;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    /* nop */

loc_000C13E0: ;
    esi = 1;

loc_000C13E5: ;
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, edi);
    eax = ebx + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C13F5u); RECOMP_ABI_CALL(0x0002509Bu, sub_0002509B); /* call 0x0002509B */

loc_000C13F5: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000C1403u); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C1403: ;
    edx = edi;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    MEM32(eax + 8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000C13E5; /* jl: less (signed <) */

loc_000C141E: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x68 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C13E0; /* jl: less (signed <) */

loc_000C1427: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00013067(); return; /* tail jmp 0x00013067 */

}

/**
 * sub_000C1460
 * Original: 0x000C1460 - 0x000C180B (939 bytes, 250 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C1460: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C146Cu); RECOMP_ABI_CALL(0x00019F7Fu, sub_00019F7F); /* call 0x00019F7F */

loc_000C146C: ;
    esi = MEM32(esp + 0x34);
    edx = (uint32_t)(int32_t)SMEM8(esi + 2);
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    ebx = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(esp + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000C1551; /* jne: not equal / not zero */

loc_000C1487: ;
    edx = ebx + 2;
    ebp = ebx + -2;
    MEM32(esp + 0x10) = edx;
    ebx = 0xF;

loc_000C1496: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    ecx = ebp;
    if (CMP_G(_fas, _fbs)) goto loc_000C14A2; /* jg: greater (signed >) */

loc_000C149D: ;
    ecx = 1;

loc_000C14A2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    eax = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000C14AE; /* jl: less (signed <) */

loc_000C14A9: ;
    eax = 0xF;

loc_000C14AE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C1540; /* jge: greater or equal (signed >=) */

loc_000C14B6: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ebx + ecx + -16;
    edi = eax;
    edi = edi;

loc_000C14C0: ;
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C14CCu); RECOMP_ABI_CALL(0x0002B2BBu, sub_0002B2BB); /* call 0x0002B2BB */

loc_000C14CC: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AD448); /* subss */
    ecx = MEM32(0x8EB32C);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C1505u); RECOMP_ABI_CALL(0x0002509Bu, sub_0002509B); /* call 0x0002509B */

loc_000C1505: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x3D086595);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB32C);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C4078)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C1538u); RECOMP_ABI_CALL(0x0001CE50u, sub_0001CE50); /* call 0x0001CE50 */

loc_000C1538: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C14C0; /* jne: not equal / not zero */

loc_000C153C: ;
    edx = MEM32(esp + 0x10);

loc_000C1540: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C1496; /* jl: less (signed <) */

loc_000C154C: ;
    goto loc_000C1712;

loc_000C1551: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C1716; /* jne: not equal / not zero */

loc_000C1559: ;
    eax = edx + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C1618; /* jge: greater or equal (signed >=) */

loc_000C1564: ;
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = ecx + ebx + -16;
    MEM32(esp + 0x10) = eax;

loc_000C1573: ;
    edi = ebx + 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C1602; /* jge: greater or equal (signed >=) */

loc_000C157E: ;
    esi = ebp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000C1582: ;
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C158Eu); RECOMP_ABI_CALL(0x0002B2BBu, sub_0002B2BB); /* call 0x0002B2BB */

loc_000C158E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7B8E28); /* subss */
    ecx = MEM32(0x8EB32C);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C15C7u); RECOMP_ABI_CALL(0x0002509Bu, sub_0002509B); /* call 0x0002509B */

loc_000C15C7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, 0x3D086595);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C4074)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C15FAu); RECOMP_ABI_CALL(0x0001CE50u, sub_0001CE50); /* call 0x0001CE50 */

loc_000C15FA: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C1582; /* jne: not equal / not zero */

loc_000C15FE: ;
    edx = MEM32(esp + 0x14);

loc_000C1602: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000C1573; /* jne: not equal / not zero */

loc_000C1614: ;
    esi = MEM32(esp + 0x34);

loc_000C1618: ;
    ecx = edx + -2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000C1625; /* jg: greater (signed >) */

loc_000C1620: ;
    ecx = 1;

loc_000C1625: ;
    eax = edx + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C1632; /* jl: less (signed <) */

loc_000C162D: ;
    eax = 8;

loc_000C1632: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C1716; /* jge: greater or equal (signed >=) */

loc_000C163A: ;
    edx = ebx + 3;
    ebp = ebx + -3;
    ebx = ecx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xF);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_000C1650: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    ecx = ebp;
    if (CMP_G(_fas, _fbs)) goto loc_000C165C; /* jg: greater (signed >) */

loc_000C1657: ;
    ecx = 1;

loc_000C165C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    eax = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000C1668; /* jl: less (signed <) */

loc_000C1663: ;
    eax = 0xF;

loc_000C1668: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C1700; /* jge: greater or equal (signed >=) */

loc_000C1670: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ebx + ecx + -16;
    edi = eax;
    goto loc_000C1680;

    /* nop */

loc_000C1680: ;
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C168Cu); RECOMP_ABI_CALL(0x0002B2BBu, sub_0002B2BB); /* call 0x0002B2BB */

loc_000C168C: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AD448); /* subss */
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, esi);
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C16C5u); RECOMP_ABI_CALL(0x0002509Bu, sub_0002509B); /* call 0x0002509B */

loc_000C16C5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, 0x3D086595);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C4078)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C16F8u); RECOMP_ABI_CALL(0x0001CE50u, sub_0001CE50); /* call 0x0001CE50 */

loc_000C16F8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C1680; /* jne: not equal / not zero */

loc_000C16FC: ;
    edx = MEM32(esp + 0x14);

loc_000C1700: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000C1650; /* jne: not equal / not zero */

loc_000C1712: ;
    esi = MEM32(esp + 0x34);

loc_000C1716: ;
    ecx = MEM32(0x8EB328);
    eax = esi;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(esi + 8);
    esi = MEM32(0x8EB328);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1A4);
    ebx = ecx + esi + 0x4F8;
    MEM32(esp + 0x10) = 0x3C;
    goto loc_000C1760;

loc_000C1751: ;
    esi = MEM32(0x8EB328);
    goto loc_000C1760;

    /* nop */

loc_000C1760: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000C1770;

    /* nop */
    /* nop */

loc_000C1770: ;
    edi = 1;

loc_000C1775: ;
    ecx = MEM32(0x8EB32C);
    edx = edi + ebp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C1784u); RECOMP_ABI_CALL(0x0002B2BBu, sub_0002B2BB); /* call 0x0002B2BB */

loc_000C1784: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi); /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB82C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    MEM8(esp + 0x34) = LO8(ecx);
    MEM8(esp + 0x35) = LO8(edx);
    MEM16(esp + 0x36) = LO16(eax);
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C1775; /* jl: less (signed <) */

loc_000C17DF: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x68 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C1770; /* jl: less (signed <) */

loc_000C17E7: ;
    ecx = MEM32(0x8EB32C);
    PUSH32(esp, 0x3D088889);
    PUSH32(esp, 0x000C17F7u); RECOMP_ABI_CALL(0x00026A5Eu, sub_00026A5E); /* call 0x00026A5E */

loc_000C17F7: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C1751; /* jne: not equal / not zero */

loc_000C1801: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C1900
 * Original: 0x000C1900 - 0x000C1924 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1900: ;
    eax = MEM32(0x8EB328);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(eax) = LO8(ebx);
    MEM32(eax + 8) = ebx;
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax + 5) = LO8(ebx);
    MEM8(eax + 6) = LO8(ebx);
    PUSH32(esp, 0x000C191Eu); RECOMP_ABI_CALL(0x00019F7Fu, sub_00019F7F); /* call 0x00019F7F */

loc_000C191E: ;
    MEM8(esi + 0xC) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C1930
 * Original: 0x000C1930 - 0x000C1943 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1930: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 6) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C1950
 * Original: 0x000C1950 - 0x000C1985 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1950: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 6) = LO8(ecx);
    edx = eax + 0xC;
    ecx = 0x69;
    /* nop */

loc_000C1970: ;
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C1970; /* jne: not equal / not zero */

loc_000C1984: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C19A0
 * Original: 0x000C19A0 - 0x000C1A21 (129 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C19A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C19A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x420);
    MEM32(esi) = 0x7C407C;
    ecx = MEM32(0x8EAD9C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C19BBu); RECOMP_ABI_CALL(0x0003630Au, sub_0003630A); /* call 0x0003630A */

loc_000C19BB: ;
    ecx = MEM32(esi + 0x40C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C19CB; /* je: equal / zero */

loc_000C19C5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000C19CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C19C9u); } /* indirect call */
    }

loc_000C19CB: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C19D8; /* je: equal / zero */

loc_000C19D2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000C19D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C19D6u); } /* indirect call */
    }

loc_000C19D8: ;
    ecx = esi + 0x80;
    PUSH32(esp, 0x000C19E3u); RECOMP_ABI_CALL(0x0001A48Eu, sub_0001A48E); /* call 0x0001A48E */

loc_000C19E3: ;
    ecx = MEM32(0x8EB32C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C19FD; /* je: equal / zero */

loc_000C19ED: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000C19F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C19F1u); } /* indirect call */
    }

loc_000C19F3: ;
    MEM32(0x8EB32C) = 0;

loc_000C19FD: ;
    eax = MEM32(0x8EB328);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1A19; /* je: equal / zero */

loc_000C1A06: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C1A0Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C1A0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8EB328) = 0;

loc_000C1A19: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A7EE(); return; /* tail jmp 0x0002A7EE */

}

/**
 * sub_000C1A50
 * Original: 0x000C1A50 - 0x000C1A71 (33 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1A50: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000C1A6Eu); RECOMP_ABI_CALL(0x000259BFu, sub_000259BF); /* call 0x000259BF */

loc_000C1A6E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C1A80
 * Original: 0x000C1A80 - 0x000C1AB0 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1A80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000C1A89u); RECOMP_ABI_CALL(0x00027F99u, sub_00027F99); /* call 0x00027F99 */

loc_000C1A89: ;
    eax = MEM32(0x8EB328);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM8(eax) = LO8(ebx);
    MEM32(eax + 8) = ebx;
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax + 5) = LO8(ebx);
    MEM8(eax + 6) = LO8(ebx);
    PUSH32(esp, 0x000C1AA8u); RECOMP_ABI_CALL(0x00019F7Fu, sub_00019F7F); /* call 0x00019F7F */

loc_000C1AA8: ;
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C1AC0
 * Original: 0x000C1AC0 - 0x000C1B34 (116 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000C1AC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7C3F60); /* comiss */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C1B23; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7C3F60)) */

loc_000C1AD2: ;
    PUSH32(esp, 0x1F1);
    PUSH32(esp, 0x7C4098);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x000C1AE3u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_000C1AE3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C1B23; /* jne: not equal / not zero */

loc_000C1AEA: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    PUSH32(esp, 0x41200000);
    ecx = edi;
    PUSH32(esp, 0x000C1AFAu); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_000C1AFA: ;
    xmm1 = XMM_SCALAR(MEMF(0x899234)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C4094)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000C1B13; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000C1B0F: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_000C1B13: ;
    MEMF(edi + 0xC4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x424) = 0;
    POP32(esp, edi);

loc_000C1B23: ;
    SET_LO8(ecx, MEM8(esi + 0x424));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C1B60
 * Original: 0x000C1B60 - 0x000C1BEC (140 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1B60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 0x20);
    eax = ebx + 0x30;
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = ecx;
    edx = MEM32(eax + 4);
    PUSH32(esp, 4);
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000C1B94u); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_000C1B94: ;
    PUSH32(esp, 4);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000C1BA2u); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_000C1BA2: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x60)); /* movss */
    PUSH32(esp, 4);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C1BBBu); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_000C1BBB: ;
    eax = MEM32(edi + 0x420);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1BD6; /* je: equal / zero */

loc_000C1BC6: ;
    ecx = MEM32(0x8EAD9C);
    ecx = MEM32(ecx + eax * 4 + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C1BD6u); RECOMP_ABI_CALL(0x00017EBEu, sub_00017EBE); /* call 0x00017EBE */

loc_000C1BD6: ;
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000C1BE3u); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_000C1BE3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C1C10
 * Original: 0x000C1C10 - 0x000C1C82 (114 bytes, 35 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000C1C10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x8EB344;
    esi = 7;

loc_000C1C24: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000C1C2Cu); RECOMP_ABI_CALL(0x0002B2BBu, sub_0002B2BB); /* call 0x0002B2BB */

loc_000C1C2C: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7C3F68); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C1C70; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000C1C5D: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C1C70u); RECOMP_ABI_CALL(0x0002509Bu, sub_0002509B); /* call 0x0002509B */

loc_000C1C70: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x70 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C1C24; /* jl: less (signed <) */

loc_000C1C7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C1CA0
 * Original: 0x000C1CA0 - 0x000C1DDD (317 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1CA0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    SET_LO8(eax, MEM8(esp + 4));
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM8(esi + 5) = LO8(ebx);
    MEM8(esi + 6) = LO8(ebx);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x34) = ebx;
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi + 0xC) = LO8(ebx);
    _fa = (uint32_t)(MEM32(0x8EB328)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EB328), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C1D22; /* jne: not equal / not zero */

loc_000C1CFC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x6768);
    PUSH32(esp, 0x000C1D07u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000C1D07: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1D1C; /* je: equal / zero */

loc_000C1D0E: ;
    ecx = eax;
    PUSH32(esp, 0x000C1D15u); RECOMP_ABI_CALL(0x00013431u, sub_00013431); /* call 0x00013431 */

loc_000C1D15: ;
    MEM32(0x8EB328) = eax;
    goto loc_000C1D22;

loc_000C1D1C: ;
    MEM32(0x8EB328) = ebx;

loc_000C1D22: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C40B8)); /* movss */
    _fa = (uint32_t)(MEM32(0x8EB32C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EB32C), ebx (32-bit) */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C40B4)); /* movss */
    MEM32(esp + 0x14) = 0x9A;
    MEM32(esp + 0x18) = 0x133;
    MEM32(esp + 0x1C) = 0x147;
    MEM32(esp + 0x20) = 2;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = 0x1C0B3;
    MEM32(esp + 0x30) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000C1DCC; /* jne: not equal / not zero */

loc_000C1D72: ;
    ecx = MEM32(0x9092A0);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    edx = MEM32(ecx);
    PUSH32(esp, 0x30);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000C1D8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C1D8Du); } /* indirect call */
    }

loc_000C1D8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1DB5; /* je: equal / zero */

loc_000C1D93: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000C1D9Fu); RECOMP_ABI_CALL(0x00018F53u, sub_00018F53); /* call 0x00018F53 */

loc_000C1D9F: ;
    edx = MEM32(esp + 0x38);
    MEM32(0x8EB32C) = eax;
    MEM32(esi + 0x38) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000C1DB5: ;
    eax = MEM32(esp + 0x38);
    MEM32(0x8EB32C) = ebx;
    MEM32(esi + 0x38) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000C1DCC: ;
    ecx = MEM32(esp + 0x38);
    MEM32(esi + 0x38) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C1E30
 * Original: 0x000C1E30 - 0x000C23C5 (1429 bytes, 348 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1E30(void)
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

loc_000C1E30: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x38);
    ecx = MEM32(eax * 4 + 0x8E8F88);
    eax = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    ecx = MEM32(edx);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x44) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x54) = edx;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x000C1E83u); RECOMP_ABI_CALL(0x0002447Fu, sub_0002447F); /* call 0x0002447F */

loc_000C1E83: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = 0x8FC5D8;
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x000C1EA7u); RECOMP_ABI_CALL(0x0002E691u, sub_0002E691); /* call 0x0002E691 */

loc_000C1EA7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7ABD78); /* addss */
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    ecx = esp + 0x58;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    ecx = 0x8FC5D8;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x000C1F01u); RECOMP_ABI_CALL(0x0002447Fu, sub_0002447F); /* call 0x0002447F */

loc_000C1F01: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = 0x8FC5D8;
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x000C1F25u); RECOMP_ABI_CALL(0x0002E691u, sub_0002E691); /* call 0x0002E691 */

loc_000C1F25: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7ABD78); /* addss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    edx = esp;
    eax = MEM32(esp + 0x58);
    ecx = MEM32(esp + 0x5C);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x60);
    MEM32(edx + 4) = ecx;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = 0x8FC5D8;
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x000C1F79u); RECOMP_ABI_CALL(0x0002447Fu, sub_0002447F); /* call 0x0002447F */

loc_000C1F79: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = 0x8FC5D8;
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x000C1F9Du); RECOMP_ABI_CALL(0x0002E691u, sub_0002E691); /* call 0x0002E691 */

loc_000C1F9D: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x24); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x24); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C209F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x18)) */

loc_000C204C: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x24); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000C20F0;

loc_000C209F: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x24); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_000C20F0: ;
    xmm3 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C22AD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AA840)) */

loc_000C2112: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x24); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x24); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C2214; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_000C21C1: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x24); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000C2265;

loc_000C2214: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x24); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_000C2265: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7C3F74)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm3; /* movaps */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C22AD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000C227F: ;
    xmm1 = XMM_SCALAR(MEMF(0x7C40C0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C228F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000C228C: ;
    xmm0 = xmm1; /* movaps */

loc_000C228F: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C40BC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C3F68); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    goto loc_000C22B5;

loc_000C22AD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_000C22B5: ;
    edx = MEM32(esp + 0x64);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABD64); /* mulss */
    MEM8(ebp + 0xC) = 1;
    edi = MEM32(0x8EB328);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 8) (32-bit) */
    MEMF(0x899230) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000C22F2; /* je: equal / zero */

loc_000C22D8: ;
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000C22E4u); RECOMP_ABI_CALL(0x0001462Eu, sub_0001462E); /* call 0x0001462E */

loc_000C22E4: ;
    xmm0 = XMM_SCALAR(MEMF(0x899230)); /* movss */
    edi = MEM32(0x8EB328);

loc_000C22F2: ;
    ecx = MEM32(esp + 0x68);
    _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1A4);
    esi = ecx + edi + 0x4F8;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x68) = 1;
    ebx = 1;
    goto loc_000C2330;

loc_000C2318: ;
    xmm0 = XMM_SCALAR(MEMF(0x899230)); /* movss */
    ebx = 1;
    goto loc_000C2330;

loc_000C2327: ;
    xmm0 = XMM_SCALAR(MEMF(0x899230)); /* movss */
    /* nop */

loc_000C2330: ;
    edx = (uint32_t)(int32_t)SMEM8(esi);
    eax = (uint32_t)(int32_t)SMEM8(esi + 1);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x68);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi); /* addss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 4); /* addss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(ebp + 0x30);
    PUSH32(esp, ebx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 8); /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000C2381u); RECOMP_ABI_CALL(0x000333DFu, sub_000333DF); /* call 0x000333DF */

loc_000C2381: ;
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x60);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x64);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000C2327; /* jl: less (signed <) */

loc_000C23A1: ;
    eax = MEM32(esp + 0x68);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(esp + 0x68) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000C2318; /* jl: less (signed <) */

loc_000C23B3: ;
    ecx = MEM32(ebp + 0x30);
    PUSH32(esp, 0x000C23BBu); RECOMP_ABI_CALL(0x00013067u, sub_00013067); /* call 0x00013067 */

loc_000C23BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C2530
 * Original: 0x000C2530 - 0x000C25CA (154 bytes, 50 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C2530: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    eax = esp + 0xC;
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    MEM8(esp + 0x10) = LO8(ebx);
    MEM32(esp + 0x18) = ebx;
    MEM8(esp + 0x11) = LO8(ebx);
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x16) = LO8(ebx);
    PUSH32(esp, 0x000C255Du); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_000C255D: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + 0xC;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(0x8FC604)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC604), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C2576; /* je: equal / zero */

loc_000C256D: ;
    _fa = (uint32_t)(MEM8(0x907E70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x907E70), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C25C2; /* jne: not equal / not zero */

loc_000C2576: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 8), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C25B3; /* je: equal / zero */

loc_000C257C: ;
    ecx = MEM32(0x8FC1D0);
    PUSH32(esp, 0x000C2587u); RECOMP_ABI_CALL(0x000296FAu, sub_000296FA); /* call 0x000296FA */

loc_000C2587: ;
    ecx = MEM32(eax + 0x20);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(edx + 4) = ecx;
    ecx = esi;
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x000C25ABu); RECOMP_ABI_CALL(0x00036B7Au, sub_00036B7A); /* call 0x00036B7A */

loc_000C25AB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000C25B3: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xC), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C25C2; /* je: equal / zero */

loc_000C25B8: ;
    ecx = esi;
    PUSH32(esp, 0x000C25BFu); RECOMP_ABI_CALL(0x00019F7Fu, sub_00019F7F); /* call 0x00019F7F */

loc_000C25BF: ;
    MEM8(esi + 0xC) = LO8(ebx);

loc_000C25C2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C25F0
 * Original: 0x000C25F0 - 0x000C27C9 (473 bytes, 117 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C25F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C25F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000C2600u); RECOMP_ABI_CALL(0x00018071u, sub_00018071); /* call 0x00018071 */

loc_000C2600: ;
    ebp = MEM32(esp + 0x18);
    ebx = esi + 0x40;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x000C260Fu); RECOMP_ABI_CALL(0x000334CAu, sub_000334CA); /* call 0x000334CA */

loc_000C260F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi) = 0x7C407C;
    MEM32(esi + 0x84) = 5;
    MEM32(esi + 0x88) = 0;
    MEM32(esi + 0x8C) = 1;
    MEM8(esi + 0x90) = 0;
    MEM8(esi + 0x91) = 0;
    MEM32(esi + 0x80) = 0x7AA7C4;
    eax = esi + 0xC0;
    ecx = 0x10;

loc_000C2661: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C2661; /* jne: not equal / not zero */

loc_000C267A: ;
    ecx = esi + 0x1D0;
    MEMF(esi + 0x1C0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1CC) = xmm1.f[0]; /* movss */
    eax = ecx + 0x18;
    edx = 0x10;
    goto loc_000C26B0;

    /* nop */

loc_000C26B0: ;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(eax + -20) = xmm0.f[0]; /* movss */
    MEMF(eax + -16) = xmm0.f[0]; /* movss */
    MEMF(eax + -12) = xmm1.f[0]; /* movss */
    MEMF(eax + -8) = xmm0.f[0]; /* movss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C26B0; /* jne: not equal / not zero */

loc_000C26DF: ;
    MEMF(esi + 0x410) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x414) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x418) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x41C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0xD0);
    MEM32(esi + 0x420) = 0xFFFFFFFFu;
    MEM8(esi + 0x424) = 1;
    MEM32(esi + 0x28) = 4;
    PUSH32(esp, 0x000C2723u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000C2723: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C2734; /* je: equal / zero */

loc_000C272A: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x000C2732u); RECOMP_ABI_CALL(0x00037E4Eu, sub_00037E4E); /* call 0x00037E4E */

loc_000C2732: ;
    goto loc_000C2736;

loc_000C2734: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C2736: ;
    ecx = esi;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x000C2740u); RECOMP_ABI_CALL(0x000266ADu, sub_000266AD); /* call 0x000266AD */

loc_000C2740: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000C2748u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C2745u); } /* indirect call */
    }

loc_000C2748: ;
    ecx = esi;
    PUSH32(esp, 0x000C274Fu); RECOMP_ABI_CALL(0x00027E45u, sub_00027E45); /* call 0x00027E45 */

loc_000C274F: ;
    edi = MEM32(esi + 0x20);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000C2759u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C2756u); } /* indirect call */
    }

loc_000C2759: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C2765u); RECOMP_ABI_CALL(0x000229EAu, sub_000229EA); /* call 0x000229EA */

loc_000C2765: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0x40C) = eax;
    PUSH32(esp, 0x000C2776u); RECOMP_ABI_CALL(0x00019863u, sub_00019863); /* call 0x00019863 */

loc_000C2776: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000C277Eu); RECOMP_ABI_CALL(0x0002E8DAu, sub_0002E8DA); /* call 0x0002E8DA */

loc_000C277E: ;
    ecx = MEM32(0x8EAD9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C278Au); RECOMP_ABI_CALL(0x00026455u, sub_00026455); /* call 0x00026455 */

loc_000C278A: ;
    MEM32(esi + 0x420) = eax;
    ecx = MEM32(0x8FCBB0);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC54);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edx = eax + ecx + 0x1208;
    MEM32(esi + 0x70) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000C27B5; /* jne: not equal / not zero */

loc_000C27AC: ;
    ecx = ebx;
    PUSH32(esp, 0x000C27B3u); RECOMP_ABI_CALL(0x00022E3Bu, sub_00022E3B); /* call 0x00022E3B */

loc_000C27B3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */

loc_000C27B5: ;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C27C0u); RECOMP_ABI_CALL(0x0001F58Du, sub_0001F58D); /* call 0x0001F58D */

loc_000C27C0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000C2840
 * Original: 0x000C2840 - 0x000C285E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C2840: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000C2848u); RECOMP_ABI_CALL(0x00030E0Au, sub_00030E0A); /* call 0x00030E0A */

loc_000C2848: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C2858; /* je: equal / zero */

loc_000C284F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C2855u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C2855: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C2858: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C2870
 * Original: 0x000C2870 - 0x000C2A9A (554 bytes, 168 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C2870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000C2870: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    eax = esp + 0x44;
    ebx = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C28D9u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_000C28D9: ;
    PUSH32(esp, 4);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C28E7u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_000C28E7: ;
    PUSH32(esp, 4);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C28F5u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_000C28F5: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 4);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C2906u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_000C2906: ;
    PUSH32(esp, 4);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C2914u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_000C2914: ;
    PUSH32(esp, 4);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C2922u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_000C2922: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x899234)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm6 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C297F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000C297A: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000C299E; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_000C297F: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C298A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000C2984: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_000C299E;

loc_000C298A: ;
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000C299E; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm7.f[0]) */

loc_000C299A: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_000C299E: ;
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C29AC; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000C29A7: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000C29CB; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_000C29AC: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C29B7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000C29B1: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_000C29CB;

loc_000C29B7: ;
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000C29CB; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000C29C7: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_000C29CB: ;
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C29D9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000C29D4: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000C29F8; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_000C29D9: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C29E4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000C29DE: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_000C29F8;

loc_000C29E4: ;
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000C29F8; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000C29F4: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_000C29F8: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    ecx = MEM32(ebx + 0x20);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = ecx;
    eax = esp;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C2A0C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000C2A07: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000C2A2B; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_000C2A0C: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C2A17; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000C2A11: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_000C2A2B;

loc_000C2A17: ;
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000C2A2B; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000C2A27: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_000C2A2B: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C2A50u); RECOMP_ABI_CALL(0x00022B61u, sub_00022B61); /* call 0x00022B61 */

loc_000C2A50: ;
    ecx = MEM32(esp + 0x20);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C2A5Eu); RECOMP_ABI_CALL(0x00026A90u, sub_00026A90); /* call 0x00026A90 */

loc_000C2A5E: ;
    eax = MEM32(ebx + 0x420);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C2A83; /* je: equal / zero */

loc_000C2A69: ;
    edx = MEM32(ebp + 0x10);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EAD9C);
    ecx = MEM32(ecx + eax * 4 + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C2A83u); RECOMP_ABI_CALL(0x000121D5u, sub_000121D5); /* call 0x000121D5 */

loc_000C2A83: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C2A91u); RECOMP_ABI_CALL(0x0001892Cu, sub_0001892C); /* call 0x0001892C */

loc_000C2A91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C2B30
 * Original: 0x000C2B30 - 0x000C2B34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2B30(void)
{

loc_000C2B30: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2B40
 * Original: 0x000C2B40 - 0x000C2B44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2B40(void)
{

loc_000C2B40: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2B50
 * Original: 0x000C2B50 - 0x000C2B54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2B50(void)
{

loc_000C2B50: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2B60
 * Original: 0x000C2B60 - 0x000C2B64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2B60(void)
{

loc_000C2B60: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2B70
 * Original: 0x000C2B70 - 0x000C2B74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2B70(void)
{

loc_000C2B70: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2B80
 * Original: 0x000C2B80 - 0x000C2B84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2B80(void)
{

loc_000C2B80: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2B90
 * Original: 0x000C2B90 - 0x000C2B94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2B90(void)
{

loc_000C2B90: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2BA0
 * Original: 0x000C2BA0 - 0x000C2BD5 (53 bytes, 16 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2BA0(void)
{

loc_000C2BA0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_000C2BF0
 * Original: 0x000C2BF0 - 0x000C2BF3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2BF0(void)
{

loc_000C2BF0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2C00
 * Original: 0x000C2C00 - 0x000C2C04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2C00(void)
{

loc_000C2C00: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2C10
 * Original: 0x000C2C10 - 0x000C2C14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2C10(void)
{

loc_000C2C10: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2C20
 * Original: 0x000C2C20 - 0x000C2C24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2C20(void)
{

loc_000C2C20: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2C30
 * Original: 0x000C2C30 - 0x000C2C34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2C30(void)
{

loc_000C2C30: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2C40
 * Original: 0x000C2C40 - 0x000C2C44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2C40(void)
{

loc_000C2C40: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2C50
 * Original: 0x000C2C50 - 0x000C2C6A (26 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C2C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C2C50: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C2C65; /* je: equal / zero */

loc_000C2C57: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000C2C5Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000C2C5Du); } /* indirect call */
    }

loc_000C2C5F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000C2C65: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C2C70
 * Original: 0x000C2C70 - 0x000C2C8F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C2C70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C2C8E; /* jne: not equal / not zero */

loc_000C2C7A: ;
    PUSH32(esp, 0x142);
    PUSH32(esp, 0x7C4848);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000C2C8Bu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_000C2C8B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C2C8E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C2CA0
 * Original: 0x000C2CA0 - 0x000C2D37 (151 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C2CA0: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x21);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edi + 0xC));
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(edi + 0x10);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = edx;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(edi + 0x14);
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000C2D16; /* je: equal / zero */

loc_000C2CEA: ;
    edi = MEM32(0x8E97D8);
    PUSH32(esp, 0x152);
    PUSH32(esp, 0x7C4848);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0x000C2D04u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_000C2D04: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C2D16; /* jle: less or equal (signed <=) */

loc_000C2D0B: ;
    esi = esi + esi * 2;
    MEM32(esp + 0x10) = 0xF;

loc_000C2D16: ;
    PUSH32(esp, 0x15A);
    PUSH32(esp, 0x7C4848);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C2D26u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_000C2D26: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2D60
 * Original: 0x000C2D60 - 0x000C2D7A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C2D60: ;
    eax = MEM32(0x8EB070);
    ecx = MEM32(eax + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C2D79; /* jne: not equal / not zero */

loc_000C2D6F: ;
    ecx = 0x8B2228;
    g_seh_ebp = ebp; sub_00023B60(); return; /* tail jmp 0x00023B60 */

loc_000C2D79: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C2D80
 * Original: 0x000C2D80 - 0x000C2DBE (62 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C2D80: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    edx = MEM32(0x8EB070);
    ecx = MEM32(edx + 0x90);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(eax * 4 + 0x8EB064);
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C2DBD; /* je: equal / zero */

loc_000C2DAD: ;
    PUSH32(esp, 0x000C2DB2u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_000C2DB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C2DBD; /* je: equal / zero */

loc_000C2DB6: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00028E49(); return; /* tail jmp 0x00028E49 */

loc_000C2DBD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C2DD0
 * Original: 0x000C2DD0 - 0x000C2E06 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C2DD0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(0x8EB070);
    eax = MEM32(eax + 0x90);
    if (CMP_EQ(_fa, _fb)) goto loc_000C2DE9; /* je: equal / zero */

loc_000C2DE6: ;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C2DE9: ;
    eax = MEM32(eax * 4 + 0x8EB064);
    _fa = (uint32_t)(MEM8(eax + 0x20)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x20), 0x32 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C2E05; /* jge: greater or equal (signed >=) */

loc_000C2DF6: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C2E05; /* je: equal / zero */

loc_000C2DFE: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0003703E(); return; /* tail jmp 0x0003703E */

loc_000C2E05: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C2E20
 * Original: 0x000C2E20 - 0x000C2E7C (92 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C2E20: ;
    eax = MEM32(0x8EB070);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x8C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x899B74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x899B74) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C2E41; /* jne: not equal / not zero */

loc_000C2E39: ;
    _fa = (uint32_t)(MEM32(0x8EB3B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EB3B4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C2E79; /* je: equal / zero */

loc_000C2E41: ;
    ecx = edi;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x7C4564);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C2E6C; /* je: equal / zero */

loc_000C2E51: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C2E6C; /* je: equal / zero */

loc_000C2E57: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C2E62; /* jne: not equal / not zero */

loc_000C2E5C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000C2E5Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000C2E5Du); } /* indirect call */
    }

loc_000C2E5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C2E62: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C2E57; /* jne: not equal / not zero */

loc_000C2E6C: ;
    MEM32(0x899B74) = edi;
    MEM32(0x8EB3B4) = ebx;
    POP32(esp, esi);

loc_000C2E79: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C2EA0
 * Original: 0x000C2EA0 - 0x000C2EA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2EA0(void)
{

loc_000C2EA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C2EB0
 * Original: 0x000C2EB0 - 0x000C2ECE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C2EB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x000C2EBDu); RECOMP_ABI_CALL(0x00029EF2u, sub_00029EF2); /* call 0x00029EF2 */

loc_000C2EBD: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x000C2EC5u); RECOMP_ABI_CALL(0x000237F5u, sub_000237F5); /* call 0x000237F5 */

loc_000C2EC5: ;
    ecx = MEM32(esi + 0x20);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000253A7(); return; /* tail jmp 0x000253A7 */

}

/**
 * sub_000C2EE0
 * Original: 0x000C2EE0 - 0x000C2F6D (141 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C2EE0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    esi = MEM32(edi);
    ecx = MEM32(esi + 0x20);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x14;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C2F17u); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_000C2F17: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    ecx = MEM32(esi + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = esp + 0x24;
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C2F37u); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_000C2F37: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0xC) = edx;
    eax = MEM32(eax + 8);
    ecx = esp + 8;
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x000C2F67u); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_000C2F67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C2F90
 * Original: 0x000C2F90 - 0x000C2FF4 (100 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2F90(void)
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

loc_000C2F90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C2F9Du); RECOMP_ABI_CALL(0x00018099u, sub_00018099); /* call 0x00018099 */

loc_000C2F9D: ;
    ecx = MEM32(edi + 0x44);
    ebx = eax;
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x899688;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000C2FAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C2FACu); } /* indirect call */
    }

loc_000C2FAF: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    ecx = MEM32(0x899688);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C2FEE; /* je: equal / zero */

loc_000C2FC4: ;
    ebx = MEM32(ebx + 0x24);
    edx = MEM32(esp + 0x14);
    goto loc_000C2FD0;

    /* nop */

loc_000C2FD0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C2FE3; /* jne: not equal / not zero */

loc_000C2FD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C2FE3; /* jl: less (signed <) */

loc_000C2FD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000C2FE3; /* jg: greater (signed >) */

loc_000C2FDE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C2FEE; /* je: equal / zero */

loc_000C2FE3: ;
    ecx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C2FD0; /* jne: not equal / not zero */

loc_000C2FEE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C3010
 * Original: 0x000C3010 - 0x000C30EE (222 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C3010: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x1000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C3021u); RECOMP_ABI_CALL(0x0002EC68u, sub_0002EC68); /* call 0x0002EC68 */

loc_000C3021: ;
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000C306B; /* je: equal / zero */

loc_000C3039: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(0x8EB070);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C4560)); /* movss */
    eax = MEM32(ecx + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000C306B; /* jne: not equal / not zero */

loc_000C305D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C4550)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_000C306B: ;
    edx = MEM32(esp + 0xC);
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000C307Bu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000C307B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000C3088; /* je: equal / zero */

loc_000C3083: ;
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000C3088: ;
    ecx = MEM32(esi * 4 + 0x8EB064);
    edx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C30BD; /* je: equal / zero */

loc_000C3096: ;
    edx = MEM32(ecx + 0x30);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(ecx + 0x30) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C30A7; /* je: equal / zero */

loc_000C30A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C30BD; /* jne: not equal / not zero */

loc_000C30A7: ;
    edx = MEM32(esi * 4 + 0x8EB064);
    ecx = MEM32(edx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C30BB; /* je: equal / zero */

loc_000C30B6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C30BD; /* jne: not equal / not zero */

loc_000C30BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C30BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ecx = MEM32(esi * 4 + 0x8EB064);
    MEM32(ecx + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C30D1; /* je: equal / zero */

loc_000C30CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C30EB; /* jne: not equal / not zero */

loc_000C30D1: ;
    edx = MEM32(esi * 4 + 0x8EB064);
    ecx = MEM32(0x8E97AC);
    MEM32(edx + 0x30) = ecx;
    edx = MEM32(esi * 4 + 0x8EB064);
    MEM32(edx + 0x2C) = eax;

loc_000C30EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C305D
 * Original: 0x000C305D - 0x000C30EE (145 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C305D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C305D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C4550)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000C307Bu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000C307B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000C3088; /* je: equal / zero */

loc_000C3083: ;
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000C3088: ;
    ecx = MEM32(esi * 4 + 0x8EB064);
    edx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C30BD; /* je: equal / zero */

loc_000C3096: ;
    edx = MEM32(ecx + 0x30);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(ecx + 0x30) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C30A7; /* je: equal / zero */

loc_000C30A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C30BD; /* jne: not equal / not zero */

loc_000C30A7: ;
    edx = MEM32(esi * 4 + 0x8EB064);
    ecx = MEM32(edx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C30BB; /* je: equal / zero */

loc_000C30B6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C30BD; /* jne: not equal / not zero */

loc_000C30BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C30BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ecx = MEM32(esi * 4 + 0x8EB064);
    MEM32(ecx + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C30D1; /* je: equal / zero */

loc_000C30CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C30EB; /* jne: not equal / not zero */

loc_000C30D1: ;
    edx = MEM32(esi * 4 + 0x8EB064);
    ecx = MEM32(0x8E97AC);
    MEM32(edx + 0x30) = ecx;
    edx = MEM32(esi * 4 + 0x8EB064);
    MEM32(edx + 0x2C) = eax;

loc_000C30EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C3130
 * Original: 0x000C3130 - 0x000C3168 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C3130: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C3167; /* jl: less (signed <) */

loc_000C313E: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C314Cu); RECOMP_ABI_CALL(0x00016F50u, sub_00016F50); /* call 0x00016F50 */

loc_000C314C: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C3164u); RECOMP_ABI_CALL(0x00032D31u, sub_00032D31); /* call 0x00032D31 */

loc_000C3164: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C3167: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C3180
 * Original: 0x000C3180 - 0x000C325A (218 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C3180: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8E97C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C3258; /* jne: not equal / not zero */

loc_000C318E: ;
    eax = MEM32(0x8EB070);
    eax = MEM32(eax + 0x90);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C31B0; /* je: equal / zero */

loc_000C31A9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C31B7; /* jne: not equal / not zero */

loc_000C31AE: ;
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C31B0: ;
    esi = MEM32(eax * 4 + 0x8EB064);

loc_000C31B7: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C31C1u); RECOMP_ABI_CALL(0x0002244Au, sub_0002244A); /* call 0x0002244A */

loc_000C31C1: ;
    SET_LO8(edx, MEM8(esi + 0x20));
    SET_LO8(ebx, LO8(eax));
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esi + 0x20) = LO8(edx);
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2710 (32-bit) */
    SET_LO8(eax, LO8(edx));
    if (CMP_NE(_fa, _fb)) goto loc_000C31E1; /* jne: not equal / not zero */

loc_000C31DB: ;
    MEM8(esi + 0x20) = 0;
    goto loc_000C31E9;

loc_000C31E1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C31E9; /* jge: greater or equal (signed >=) */

loc_000C31E5: ;
    MEM8(esi + 0x20) = 1;

loc_000C31E9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x28) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x28 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C31F0; /* jle: less or equal (signed <=) */

loc_000C31EE: ;
    SET_LO8(ebx, 0x28);

loc_000C31F0: ;
    eax = MEM32(esi);
    SET_LO8(eax, MEM8(eax + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C3226; /* jl: less (signed <) */

loc_000C31FC: ;
    edx = SX8(LO8(eax));
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C320Au); RECOMP_ABI_CALL(0x00016F50u, sub_00016F50); /* call 0x00016F50 */

loc_000C320A: ;
    edx = MEM32(eax);
    ecx = SX8(LO8(ebx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C3223u); RECOMP_ABI_CALL(0x00032D31u, sub_00032D31); /* call 0x00032D31 */

loc_000C3223: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C3226: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax);
    SET_LO8(eax, MEM8(eax + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_L(_fas, _fbs)) goto loc_000C3258; /* jl: less (signed <) */

loc_000C3238: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C3246u); RECOMP_ABI_CALL(0x00016F50u, sub_00016F50); /* call 0x00016F50 */

loc_000C3246: ;
    eax = MEM32(eax);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C3255u); RECOMP_ABI_CALL(0x00032D31u, sub_00032D31); /* call 0x00032D31 */

loc_000C3255: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C3258: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C3290
 * Original: 0x000C3290 - 0x000C3314 (132 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C3290: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1F8);
    PUSH32(esp, 0x7C4848);
    PUSH32(esp, 0x640);
    PUSH32(esp, 0x000C32A7u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_000C32A7: ;
    edi = MEM32(esp + 0x20);
    esi = MEM32(edi + 0xC);
    ebx = eax;
    ecx = esi + -1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000C32F2; /* ja: above (unsigned >) */

loc_000C32BD: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0xC3314); /* switch: 4 entries, 2 targets */
    if (_jt == 0x000C32C4u) goto loc_000C32C4;
    if (_jt == 0x000C32E2u) goto loc_000C32E2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000C32C4: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x2B8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax = MEM32(0x8E9794);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000C32F2;

loc_000C32E2: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x2B8);
    _fb = (uint32_t)(MEM32(0x8E9790)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x8E9790);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C32F2: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C32F9; /* je: equal / zero */

loc_000C32F7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C32F9: ;
    _fa = (uint32_t)(MEM32(0x8E97C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8E97C0), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C3304; /* je: equal / zero */

loc_000C3302: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C3304: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    POP32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    eax = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C3350
 * Original: 0x000C3350 - 0x000C33D0 (128 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C3350: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x226);
    PUSH32(esp, 0x7C4848);
    PUSH32(esp, 0x640);
    PUSH32(esp, 0x000C3365u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_000C3365: ;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 0xC);
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C3398; /* jl: less (signed <) */

loc_000C3378: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000C3398; /* jg: greater (signed >) */

loc_000C337D: ;
    eax = MEM32(0x8E9794);
    eax = eax + eax * 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 0x2B8);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax + edx + 0x1E;

loc_000C3398: ;
    edx = MEM32(0x8E97C0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C33A4; /* jne: not equal / not zero */

loc_000C33A2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C33A4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    POP32(esp, esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000C33D0
 * Original: 0x000C33D0 - 0x000C3423 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C33D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C33D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x249);
    PUSH32(esp, 0x7C4848);
    PUSH32(esp, 0x640);
    PUSH32(esp, 0x000C33E5u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_000C33E5: ;
    esi = eax;
    eax = MEM32(esp + 0x18);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C340C; /* jle: less or equal (signed <=) */

loc_000C33F7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000C340C; /* jg: greater (signed >) */

loc_000C33FC: ;
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x2B8);
    _fb = (uint32_t)(MEM32(0x8E9798)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(0x8E9798);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C340C: ;
    eax = MEM32(0x8E97C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C3417; /* jne: not equal / not zero */

loc_000C3415: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C3417: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    POP32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C3440
 * Original: 0x000C3440 - 0x000C34E2 (162 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3440(void)
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

loc_000C3440: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8EB070);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C34D0; /* jne: not equal / not zero */

loc_000C344F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C345Du); RECOMP_ABI_CALL(0x00018099u, sub_00018099); /* call 0x00018099 */

loc_000C345D: ;
    ebp = eax;
    eax = MEM32(0x8E97C0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C34C1; /* je: equal / zero */

loc_000C346B: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000C3473u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C3470u); } /* indirect call */
    }

loc_000C3473: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    ebx = eax;
    _fa = (uint32_t)(MEM32(0x899688)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x899688), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C34C1; /* je: equal / zero */

loc_000C3488: ;
    esi = 0x8996A0;
    /* nop */

loc_000C3490: ;
    eax = MEM32(esi + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x24) (32-bit) */
    ecx = esi + -24;
    if (CMP_NE(_fa, _fb)) goto loc_000C34B6; /* jne: not equal / not zero */

loc_000C349B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + -20) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C34B6; /* jl: less (signed <) */

loc_000C34A0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + -16) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000C34B6; /* jg: greater (signed >) */

loc_000C34A5: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C34B6; /* je: equal / zero */

loc_000C34AB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000C34AFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000C34ADu); } /* indirect call */
    }

loc_000C34AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C34D2; /* jne: not equal / not zero */

loc_000C34B6: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C3490; /* jne: not equal / not zero */

loc_000C34C1: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C34C9u); RECOMP_ABI_CALL(0x00028E62u, sub_00028E62); /* call 0x00028E62 */

loc_000C34C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000C34D0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000C34D2: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C34D9u); RECOMP_ABI_CALL(0x00028E62u, sub_00028E62); /* call 0x00028E62 */

loc_000C34D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C3510
 * Original: 0x000C3510 - 0x000C378D (637 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C3510: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ebp = MEM32(esi * 4 + 0x8EB064);
    PUSH32(esp, edi);
    edi = esi;
    edi = edi ^ 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(edi * 4 + 0x8EB064);
    ecx = ebx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x7C4564);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C3571; /* je: equal / zero */

loc_000C3547: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C3571; /* je: equal / zero */

loc_000C354D: ;
    /* nop */

loc_000C3550: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC3180) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC3180 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C3564; /* je: equal / zero */

loc_000C3558: ;
    ecx = MEM32(eax + 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C3550; /* jne: not equal / not zero */

loc_000C3562: ;
    goto loc_000C3571;

loc_000C3564: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000C356Bu); RECOMP_ABI_CALL(0x0002244Au, sub_0002244A); /* call 0x0002244A */

loc_000C356B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = SX8(LO8(eax));

loc_000C3571: ;
    eax = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000C359A; /* jg: greater (signed >) */

loc_000C357D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000C3580: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x7C486C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax * 4 + 0x7C486C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C3593; /* je: equal / zero */

loc_000C3589: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C3580; /* jl: less (signed <) */

loc_000C3591: ;
    goto loc_000C359A;

loc_000C3593: ;
    ebx = MEM32(eax * 4 + 0x7C4870);

loc_000C359A: ;
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x7C4558) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7C4558;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C361E; /* jne: not equal / not zero */

loc_000C35A8: ;
    edx = MEM32(eax);

loc_000C35AA: ;
    ecx = MEM32(eax + 4);

loc_000C35AD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x14) = ecx;
    esi = esi + ebx * 2;
    esi = MEM32(esi * 4 + 0x7C4488);
    ecx = edi + ebx * 2;
    ecx = MEM32(ecx * 4 + 0x7C4488);
    edi = MEM32(0x8EB064);
    MEM32(edi + 0x24) = esi;
    esi = MEM32(0x8EB068);
    MEM32(esi + 0x24) = ecx;
    ecx = MEM32(0x8EB064);
    esi = MEM32(ecx);
    ecx = MEM32(0x8EB068);
    edi = MEM32(ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(0x8EB070);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000C3638; /* jne: not equal / not zero */

loc_000C3604: ;
    ecx = MEM32(eax + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C362A; /* je: equal / zero */

loc_000C360E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD44C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_000C3638;

loc_000C361E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    edx = MEM32(eax + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000C35AA; /* jne: not equal / not zero */

loc_000C3626: ;
    ecx = MEM32(eax);
    goto loc_000C35AD;

loc_000C362A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C4550)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_000C3638: ;
    eax = MEM32(eax + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000C3664; /* jne: not equal / not zero */

loc_000C364A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C3655; /* jne: not equal / not zero */

loc_000C364F: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_000C3655: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C3664; /* jne: not equal / not zero */

loc_000C3659: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C3664; /* jne: not equal / not zero */

loc_000C365E: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_000C3664: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7AD448)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000C367C; /* jne: not equal / not zero */

loc_000C3671: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C367C; /* jne: not equal / not zero */

loc_000C3676: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_000C367C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C368F; /* jne: not equal / not zero */

loc_000C3681: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x13 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C368C; /* jne: not equal / not zero */

loc_000C3686: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_000C368C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */

loc_000C368F: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB82C)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000C36AA; /* jne: not equal / not zero */

loc_000C3699: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C36AA; /* jne: not equal / not zero */

loc_000C369E: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_000C36AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C36C0; /* jne: not equal / not zero */

loc_000C36AF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C36C0; /* jne: not equal / not zero */

loc_000C36B4: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_000C36C0: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(eax);
    ebp = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = ecx & 0xFFFFFFFBu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1EB4C);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000C36ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C36E9u); } /* indirect call */
    }

loc_000C36EC: ;
    esi = MEM32(esi + 0x54);
    MEM32(esi) = MEM32(esi) | 4;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(edi + 0x54);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = ecx & 0xFFFFFFFBu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12199);
    PUSH32(esp, 0x1EB4C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000C3721u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C371Eu); } /* indirect call */
    }

loc_000C3721: ;
    edi = MEM32(edi + 0x54);
    ebp = MEM32(edi);
    eax = MEM32(esp + 0x20);
    ebp = ebp | 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = ebp;
    edx = MEM32(0x8EB070);
    MEM32(edx + 0x90) = eax;
    ecx = MEM32(0x8EB070);
    MEM32(ecx + 0x8C) = ebx;
    edx = MEM32(0x8EB070);
    MEM32(edx + 0x94) = 0xFFFFFFFFu;
    eax = MEM32(0x8EB070);
    MEM32(eax + 0x9C) = 0x3E7;
    eax = MEM32(0x8EB064);
    esi = MEM32(eax + 0x28);
    ecx = 0xFFFFEFFFu;
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x28) = esi;
    eax = MEM32(0x8EB068);
    edx = MEM32(eax + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebp);
    MEM32(eax + 0x28) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C3830
 * Original: 0x000C3830 - 0x000C394A (282 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3830(void)
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

loc_000C3830: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000C3840u); RECOMP_ABI_CALL(0x00018099u, sub_00018099); /* call 0x00018099 */

loc_000C3840: ;
    ebp = eax;
    eax = MEM32(0x8EB070);
    ecx = MEM32(eax + 0x94);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C393C; /* jne: not equal / not zero */

loc_000C3859: ;
    eax = MEM32(ebp + 0x28);
    eax = eax & 0xFFFFEFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C3868u); RECOMP_ABI_CALL(0x0002EC68u, sub_0002EC68); /* call 0x0002EC68 */

loc_000C3868: ;
    esi = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C390C; /* je: equal / zero */

loc_000C3878: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000C3881u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C387Eu); } /* indirect call */
    }

loc_000C3881: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C38A9; /* jne: not equal / not zero */

loc_000C3895: ;
    ecx = MEM32(edi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000C389Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C389Au); } /* indirect call */
    }

loc_000C389D: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    ecx = eax;

loc_000C38A9: ;
    edx = MEM32(esi + 0x10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0 = XMM_SCALAR(MEMF(edx + 0x7C4560)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebx);
    if (CMP_G(_fas, _fbs)) goto loc_000C38D5; /* jg: greater (signed >) */

loc_000C38CA: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_000C3934;

loc_000C38D5: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    eax = MEM32(0x8EB070);
    MEM32(eax + 0x98) = edx;
    edx = MEM32(esi + 0x10);
    eax = MEM32(0x8EB070);
    MEM32(eax + 0x94) = edx;
    edx = MEM32(0x8EB070);
    POP32(esp, edi);
    eax = esi;
    MEM32(edx + 0x9C) = ecx;
    POP32(esp, esi);
    MEM32(ebp + 0x28) = 0;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000C390C: ;
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C393C; /* je: equal / zero */

loc_000C3914: ;
    PUSH32(esp, 0x1000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C391Fu); RECOMP_ABI_CALL(0x0002EC68u, sub_0002EC68); /* call 0x0002EC68 */

loc_000C391F: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C393C; /* je: equal / zero */

loc_000C3929: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, edx);

loc_000C3934: ;
    PUSH32(esp, 0x000C3939u); RECOMP_ABI_CALL(0x0002ED99u, sub_0002ED99); /* call 0x0002ED99 */

loc_000C3939: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C393C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(ebp + 0x28) = 0;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C3990
 * Original: 0x000C3990 - 0x000C3A23 (147 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3990(void)
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

loc_000C3990: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8EB064);
    ecx = MEM32(0x8EB068);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000C39ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C39A9u); } /* indirect call */
    }

loc_000C39AC: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    esi = eax;
    eax = MEM32(0x8EB070);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000C39CEu); RECOMP_ABI_CALL(0x00027AA3u, sub_00027AA3); /* call 0x00027AA3 */

loc_000C39CE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C39D4u); RECOMP_ABI_CALL(0x0002D354u, sub_0002D354); /* call 0x0002D354 */

loc_000C39D4: ;
    ebx = MEM32(0x8EB070);
    edx = MEM32(ebx + 0x94);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C3A0E; /* je: equal / zero */

loc_000C39E8: ;
    ecx = MEM32(ebx + 0x9C);
    eax = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000C3A0E; /* jg: greater (signed >) */

loc_000C39F6: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C3A0E; /* jne: not equal / not zero */

loc_000C39FE: ;
    eax = MEM32(ebx + 0x98);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C3A0Bu); RECOMP_ABI_CALL(0x0002ED99u, sub_0002ED99); /* call 0x0002ED99 */

loc_000C3A0B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C3A0E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C3A14u); RECOMP_ABI_CALL(0x0001C1FDu, sub_0001C1FD); /* call 0x0001C1FD */

loc_000C3A14: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000C3A1Au); RECOMP_ABI_CALL(0x0001C1FDu, sub_0001C1FD); /* call 0x0001C1FD */

loc_000C3A1A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C3A50
 * Original: 0x000C3A50 - 0x000C3A6E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C3A50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000C3A58u); RECOMP_ABI_CALL(0x00020C3Au, sub_00020C3A); /* call 0x00020C3A */

loc_000C3A58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C3A68; /* je: equal / zero */

loc_000C3A5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C3A65u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C3A65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C3A68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C3A80
 * Original: 0x000C3A80 - 0x000C3AE7 (103 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C3A80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000C3A8Eu); RECOMP_ABI_CALL(0x0002FB31u, sub_0002FB31); /* call 0x0002FB31 */

loc_000C3A8E: ;
    SET_LO8(ecx, MEM8(edi + 0x1C));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x1C));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi + 0x1C) = MEM16(esi + 0x1C) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(esi + 0x1C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + 0x1C));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x1C));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = ecx & 0x7E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 0x1C) = LO16(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x1C));
    SET_LO16(eax, LO16(eax) ^ LO16(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    eax = eax & 0x1F80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 0x1C) = LO16(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + 0x1C));
    SET_LO16(ecx, LO16(ecx) ^ LO16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    eax = esi;
    ecx = ecx & 0x1FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(ecx, LO16(ecx) ^ MEM16(edi + 0x1C));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM16(esi + 0x1C) = LO16(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C3B00
 * Original: 0x000C3B00 - 0x000C3B06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3B00(void)
{

loc_000C3B00: ;
    eax = 0x899BB4;
    esp += 4; return; /* ret */

}

/**
 * sub_000C3B10
 * Original: 0x000C3B10 - 0x000C3B16 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3B10(void)
{

loc_000C3B10: ;
    eax = 0x899BE8;
    esp += 4; return; /* ret */

}

/**
 * sub_000C3B20
 * Original: 0x000C3B20 - 0x000C3B56 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C3B20: ;
    ecx = MEM32(0x8EB3B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C3B55; /* je: equal / zero */

loc_000C3B2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C3B30u); RECOMP_ABI_CALL(0x00035F36u, sub_00035F36); /* call 0x00035F36 */

loc_000C3B30: ;
    ecx = MEM32(0x8EB3B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C3B4A; /* je: equal / zero */

loc_000C3B3C: ;
    PUSH32(esp, 0x000C3B41u); RECOMP_ABI_CALL(0x00020C3Au, sub_00020C3A); /* call 0x00020C3A */

loc_000C3B41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C3B47u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C3B47: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C3B4A: ;
    MEM32(0x8EB3B8) = 0;
    POP32(esp, esi);

loc_000C3B55: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C3B70
 * Original: 0x000C3B70 - 0x000C3F53 (995 bytes, 313 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C3B70(void)
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

loc_000C3B70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax * 4 + 0x8F0040);
    ebx = MEM32(edi);
    esi = ecx;
    MEM8(esi + 0x3E) = 0;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C3BA0; /* jne: not equal / not zero */

loc_000C3B92: ;
    ecx = MEM32(ebx + 4);
    SET_LO8(eax, MEM8(ecx + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C3BA0; /* je: equal / zero */

loc_000C3B9C: ;
    MEM8(esi + 0x3E) = 1;

loc_000C3BA0: ;
    edx = MEM32(esi + 0x1C);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFFFF7u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x32) = 0;
    MEM32(esi + 0x1C) = edx;
    SET_LO16(edx, MEM16(0x89616A));
    MEM16(esi + 0x4A) = LO16(edx);
    SET_LO8(eax, MEM8(ebp + 0x39));
    MEM8(esi + 0x44) = LO8(eax);
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C3BCC; /* je: equal / zero */

loc_000C3BC6: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000C3BCF;

loc_000C3BCC: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000C3BCF: ;
    MEM8(esi + 0x45) = LO8(eax);
    PUSH32(esp, 0x000C3BD7u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000C3BD7: ;
    MEM8(esi + 0x30) = LO8(eax);
    SET_LO8(ecx, MEM8(0x896177));
    MEM8(esi + 0x38) = LO8(ecx);
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    eax = MEM32(eax + 0x30);
    MEM32(esi + 0x60) = eax;
    MEMF(esi + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    edx = MEM32(0x8BFE50);
    ecx = 0x8BFE50;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000C3C14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C3C11u); } /* indirect call */
    }

loc_000C3C14: ;
    MEM32(esi + 0x58) = eax;
    eax = MEM32(edi + 0x10);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x5C) = ecx;
    eax = MEM32(edi + 0x10);
    SET_LO16(ecx, MEM16(eax + 2));
    MEM16(esi + 0x4C) = LO16(ecx);
    edx = MEM32(ebp + 0x230);
    SET_LO16(eax, ZX8(MEM8(edx + 2)));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esi + 0x50) = LO16(eax);
    ecx = MEM32(edi + 0x10);
    SET_LO16(edx, MEM16(ecx + 4));
    MEM16(esi + 0x4E) = LO16(edx);
    PUSH32(esp, 0x000C3C52u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000C3C52: ;
    ecx = eax;
    PUSH32(esp, 0x000C3C59u); RECOMP_ABI_CALL(0x0001457Fu, sub_0001457F); /* call 0x0001457F */

loc_000C3C59: ;
    MEM16(esi + 0x48) = LO16(eax);
    eax = MEM32(0x8EACE4);
    SET_LO8(ecx, MEM8(eax + 0x28));
    MEM8(esi + 0x43) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x132));
    MEM8(esi + 0x42) = LO8(edx);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0xD2);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0xD2);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    MEM8(esi + 0x33) = LO8(edx);
    ecx = MEM32(0x8EACE4);
    PUSH32(esp, 0x000C3C94u); RECOMP_ABI_CALL(0x0003264Cu, sub_0003264C); /* call 0x0003264C */

loc_000C3C94: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x35) = LO8(eax);
    MEM8(esi + 0x36) = 0;
    SET_LO8(eax, MEM8(edi + 0x132));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000C3CB4u); RECOMP_ABI_CALL(0x00024E2Fu, sub_00024E2F); /* call 0x00024E2F */

loc_000C3CB4: ;
    MEM8(esi + 0x40) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x132));
    eax = MEM32(esp + 0x20);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C3CCFu); RECOMP_ABI_CALL(0x00024E2Fu, sub_00024E2F); /* call 0x00024E2F */

loc_000C3CCF: ;
    SET_LO8(ecx, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0);
    MEM8(esi + 0x41) = LO8(eax);
    MEM8(esi + 0x31) = LO8(ecx);
    PUSH32(esp, 0x000C3CE5u); RECOMP_ABI_CALL(0x00013CE7u, sub_00013CE7); /* call 0x00013CE7 */

loc_000C3CE5: ;
    ecx = MEM32(esi + 0x1C);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFFBu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C3D1F; /* je: equal / zero */

loc_000C3CF5: ;
    SET_LO16(edx, MEM16(eax + 0xC));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x3E) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x3E (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C3D07; /* jne: not equal / not zero */

loc_000C3CFF: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x1C) = ecx;
    goto loc_000C3D1F;

loc_000C3D07: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x24 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C3D1F; /* jne: not equal / not zero */

loc_000C3D0D: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 0x1C));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = edx;

loc_000C3D1F: ;
    PUSH32(esp, 0x000C3D24u); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_000C3D24: ;
    eax = MEM32(eax * 4 + 0x8E8EB8);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C3D51; /* jne: not equal / not zero */

loc_000C3D31: ;
    PUSH32(esp, 0x000C3D36u); RECOMP_ABI_CALL(0x0002B135u, sub_0002B135); /* call 0x0002B135 */

loc_000C3D36: ;
    eax = SX16(LO16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000C3D4D; /* jl: less (signed <) */

loc_000C3D3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000C3D47; /* jle: less or equal (signed <=) */

loc_000C3D42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C3D4D; /* jne: not equal / not zero */

loc_000C3D47: ;
    MEM8(esi + 0x32) = 1;
    goto loc_000C3D51;

loc_000C3D4D: ;
    MEM8(esi + 0x32) = 0;

loc_000C3D51: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0x000C3D5Cu); RECOMP_ABI_CALL(0x000121B2u, sub_000121B2); /* call 0x000121B2 */

loc_000C3D5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esi + 0x37) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000C3D7C; /* je: equal / zero */

loc_000C3D63: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x132);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000C3D71u); RECOMP_ABI_CALL(0x0002D435u, sub_0002D435); /* call 0x0002D435 */

loc_000C3D71: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000C3D7C; /* jle: less or equal (signed <=) */

loc_000C3D78: ;
    MEM8(esi + 0x37) = 0;

loc_000C3D7C: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1A5E0);
    xmm0 = XMM_SCALAR(MEMF(0x7AD3D4)); /* movss */
    ecx = eax;
    eax = 0x21195767;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (((0xF) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((0xF) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xF) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x54) = eax;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0x20);
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C3DD2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x34)) */

loc_000C3DC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000C3DD2; /* jge: greater or equal (signed >=) */

loc_000C3DCE: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) | 8;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000C3DD2: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x20) = ebp;
    SET_LO8(ecx, MEM8(edi + 0x132));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x3F) = LO8(ecx);
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x000C3DF2u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_000C3DF2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C3DFD; /* je: equal / zero */

loc_000C3DF6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x24) = eax;
    goto loc_000C3E06;

loc_000C3DFD: ;
    eax = MEM32(edi + 0x20);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(edi + 0x24);

loc_000C3E06: ;
    MEM32(esi + 0x28) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x34) = LO8(edx);
    PUSH32(esp, 0x000C3E18u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000C3E18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C3E20; /* jne: not equal / not zero */

loc_000C3E1C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000C3E30;

loc_000C3E20: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0xD2);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0xD2);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000C3E30: ;
    MEM8(esi + 0x46) = LO8(eax);
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7ABD78); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C3E4E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7ABD78)) */

loc_000C3E4A: ;
    SET_LO8(eax, 1);
    goto loc_000C3E50;

loc_000C3E4E: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000C3E50: ;
    MEM8(esi + 0x3B) = LO8(eax);
    PUSH32(esp, 0x000C3E58u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_000C3E58: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esi + 0x3A) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000C3E86; /* je: equal / zero */

loc_000C3E63: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000C3E6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C3E67u); } /* indirect call */
    }

loc_000C3E6A: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C3E71u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_000C3E71: ;
    fp_push(MEMF(0x7B1D98)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000C3E86; /* jbe: below or equal (unsigned <=) */

loc_000C3E82: ;
    SET_LO8(eax, 1);
    goto loc_000C3E88;

loc_000C3E86: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000C3E88: ;
    MEM8(esi + 0x3C) = LO8(eax);
    PUSH32(esp, 0x000C3E90u); RECOMP_ABI_CALL(0x0002B135u, sub_0002B135); /* call 0x0002B135 */

loc_000C3E90: ;
    ebp = MEM32(esi + 0x1C);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 6 (16-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = ebp;
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x1C) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_000C3EC8; /* jne: not equal / not zero */

loc_000C3EAE: ;
    _fa = (uint32_t)(MEM16(0x8E9614)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x8E9614), 6 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C3EC8; /* jne: not equal / not zero */

loc_000C3EB8: ;
    _fa = (uint32_t)(MEM16(0x8E9612)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x8E9612), 3 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C3EC8; /* jne: not equal / not zero */

loc_000C3EC2: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x1C) = eax;

loc_000C3EC8: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000C3F1A; /* je: equal / zero */

loc_000C3ECE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x24);
    ecx = 0x8978E8;
    MEM32(esp + 0x34) = 0x2D;
    PUSH32(esp, 0x000C3EEDu); RECOMP_ABI_CALL(0x0002A582u, sub_0002A582); /* call 0x0002A582 */

loc_000C3EED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C3F16; /* je: equal / zero */

loc_000C3EF1: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000C3F16; /* jle: less or equal (signed <=) */

loc_000C3EF9: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3A);
    ecx = 0x8978E8;
    PUSH32(esp, 0x000C3F12u); RECOMP_ABI_CALL(0x0002A582u, sub_0002A582); /* call 0x0002A582 */

loc_000C3F12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C3F1A; /* jne: not equal / not zero */

loc_000C3F16: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000C3F1A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C3F3F; /* je: equal / zero */

loc_000C3F1E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C3F24u); RECOMP_ABI_CALL(0x00012B58u, sub_00012B58); /* call 0x00012B58 */

loc_000C3F24: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C3F3F; /* je: equal / zero */

loc_000C3F2B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x39) = LO8(eax);
    MEM8(esi + 0x3D) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_000C3F3F: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x39) = LO8(eax);
    MEM8(esi + 0x3D) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C4050
 * Original: 0x000C4050 - 0x000C4067 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4050: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x1E;
    MEM32(eax) = 0x7C4D20;
    esp += 4; return; /* ret */

}

/**
 * sub_000C4070
 * Original: 0x000C4070 - 0x000C4076 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4070(void)
{

loc_000C4070: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000C4080
 * Original: 0x000C4080 - 0x000C4086 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4080(void)
{

loc_000C4080: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_000C4090
 * Original: 0x000C4090 - 0x000C40B1 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4090: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x000C409Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000C409C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C40AD; /* je: equal / zero */

loc_000C40A3: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000C40ABu); RECOMP_ABI_CALL(0x0001B258u, sub_0001B258); /* call 0x0001B258 */

loc_000C40AB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C40AD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C40C0
 * Original: 0x000C40C0 - 0x000C412B (107 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C40C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C40C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000C40CEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000C40CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x1C));
    MEM32(esi) = 0x7C4D20;
    SET_LO8(eax, LO8(eax) ^ MEM8(edi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi + 0x1C) = MEM16(esi + 0x1C) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(esi + 0x1C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + 0x1C));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x1C));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = ecx & 0x7E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 0x1C) = LO16(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x1C));
    SET_LO16(eax, LO16(eax) ^ LO16(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    eax = eax & 0x1F80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 0x1C) = LO16(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + 0x1C));
    SET_LO16(ecx, LO16(ecx) ^ LO16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    eax = esi;
    ecx = ecx & 0x1FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(ecx, LO16(ecx) ^ MEM16(edi + 0x1C));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM16(esi + 0x1C) = LO16(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4150
 * Original: 0x000C4150 - 0x000C418D (61 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4150: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM16(esi + 0xC) = 0x1E;
    MEM32(esi) = 0x7C4D30;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    MEM16(esi + 0x34) = 0x3B;
    MEM32(esi + 0x28) = 0x7B1E00;
    PUSH32(esp, 0x000C4186u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_000C4186: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C41A0
 * Original: 0x000C41A0 - 0x000C41E6 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C41A0(void)
{

loc_000C41A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    ecx = 0x899BB4;
    PUSH32(esp, 0x000C41B0u); RECOMP_ABI_CALL(0x0002FB31u, sub_0002FB31); /* call 0x0002FB31 */

loc_000C41B0: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    MEM8(0x899BD0) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x1D));
    MEM8(0x899BD1) = LO8(ecx);
    edx = MEM32(esi + 0x20);
    MEM32(0x899BD4) = edx;
    eax = MEM32(esi + 0x24);
    MEM32(0x899BD8) = eax;
    ecx = MEM32(esi + 0x28);
    MEM32(0x899BDC) = ecx;
    edx = MEM32(esi + 0x2C);
    MEM32(0x899BE0) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C4200
 * Original: 0x000C4200 - 0x000C4255 (85 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x000C420Fu); RECOMP_ABI_CALL(0x0002DC2Du, sub_0002DC2D); /* call 0x0002DC2D */

loc_000C420F: ;
    eax = MEM32(esi + 0x20);
    MEM32(ebx + 0x20) = eax;
    ecx = MEM32(esi + 0x24);
    MEM32(ebx + 0x24) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + 0x28;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000C4229u); RECOMP_ABI_CALL(0x0002FB31u, sub_0002FB31); /* call 0x0002FB31 */

loc_000C4229: ;
    SET_LO8(edx, MEM8(esi + 0x1C));
    MEM8(edi + 0x1C) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0x1D));
    MEM8(edi + 0x1D) = LO8(eax);
    ecx = MEM32(esi + 0x20);
    MEM32(edi + 0x20) = ecx;
    edx = MEM32(esi + 0x24);
    MEM32(edi + 0x24) = edx;
    eax = MEM32(esi + 0x28);
    MEM32(edi + 0x28) = eax;
    ecx = MEM32(esi + 0x2C);
    MEM32(edi + 0x2C) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4270
 * Original: 0x000C4270 - 0x000C4280 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4270(void)
{

loc_000C4270: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = 0x899BE8;
    PUSH32(esp, 0x000C427Fu); RECOMP_ABI_CALL(0x0001B0FFu, sub_0001B0FF); /* call 0x0001B0FF */

loc_000C427F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C4290
 * Original: 0x000C4290 - 0x000C4745 (1205 bytes, 310 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4290: ;
    eax = MEM32(0x8EB3B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4742; /* jne: not equal / not zero */

loc_000C429D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000C42A6u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000C42A6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C42B6; /* je: equal / zero */

loc_000C42AD: ;
    ecx = eax;
    PUSH32(esp, 0x000C42B4u); RECOMP_ABI_CALL(0x0002F104u, sub_0002F104); /* call 0x0002F104 */

loc_000C42B4: ;
    goto loc_000C42B8;

loc_000C42B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C42B8: ;
    PUSH32(esp, 0xEB);
    PUSH32(esp, 0x5A);
    ecx = eax;
    MEM32(0x8EB3B8) = eax;
    PUSH32(esp, 0x000C42CBu); RECOMP_ABI_CALL(0x000260B3u, sub_000260B3); /* call 0x000260B3 */

loc_000C42CB: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3268D);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000C42DFu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C42DF: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4300; /* je: equal / zero */

loc_000C42E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4300; /* je: equal / zero */

loc_000C42EC: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2E173);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000C4300u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4300: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x14C69);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x000C4314u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4314: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x23926);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x000C4328u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4328: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2F87F);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x000C433Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C433C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x22FEE);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000C4350u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4350: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x21428);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x000C4364u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4364: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2F2A8);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x000C4378u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4378: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x218BA);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x000C438Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C438C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x143EA);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x000C43A0u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C43A0: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x36535);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x000C43B4u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C43B4: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34B7C);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x000C43C8u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C43C8: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x275EE);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000C43DCu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C43DC: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x33F8D);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000C43F0u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C43F0: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x23165);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x000C4404u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4404: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2A69A);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x000C4418u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4418: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x32C4B);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000C442Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C442C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2F870);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000C4440u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4440: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0x14264);
    PUSH32(esp, 0x39);
    PUSH32(esp, 0x000C4454u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4454: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2A1A4);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000C4468u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4468: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x136B1);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x000C447Cu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C447C: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x36062);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000C4490u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4490: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4515; /* je: equal / zero */

loc_000C4499: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4515; /* je: equal / zero */

loc_000C449D: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x161B3);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000C44B1u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C44B1: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x29727);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000C44C5u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C44C5: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x17207);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000C44D9u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C44D9: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F763);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000C44EDu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C44ED: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1D94F);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000C4501u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4501: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x37EE9);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000C4515u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4515: ;
    PUSH32(esp, 0x000C451Au); RECOMP_ABI_CALL(0x000321F6u, sub_000321F6); /* call 0x000321F6 */

loc_000C451A: ;
    PUSH32(esp, 0x000C451Fu); RECOMP_ABI_CALL(0x00030D1Fu, sub_00030D1F); /* call 0x00030D1F */

loc_000C451F: ;
    PUSH32(esp, 0x000C4524u); RECOMP_ABI_CALL(0x0001F808u, sub_0001F808); /* call 0x0001F808 */

loc_000C4524: ;
    PUSH32(esp, 0x000C4529u); RECOMP_ABI_CALL(0x0003201Bu, sub_0003201B); /* call 0x0003201B */

loc_000C4529: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2B9B4);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000C453Du); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C453D: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x26D7E);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x000C4551u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4551: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x12E8C);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000C4565u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4565: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x27779);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x000C4579u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4579: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x28BAB);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x000C458Du); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C458D: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x23DCC);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x000C45A1u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C45A1: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x219B9);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x000C45B5u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C45B5: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1EF70);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x000C45C9u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C45C9: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x25C0D);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x000C45DDu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C45DD: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x202FD);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x000C45F1u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C45F1: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x12D97);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x000C4605u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4605: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2E4A7);
    PUSH32(esp, 0x26);
    PUSH32(esp, 0x000C4619u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4619: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2DA89);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000C462Du); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C462D: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245FB);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000C4641u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4641: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x21874);
    PUSH32(esp, 8);
    PUSH32(esp, 0x000C4655u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4655: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2C29C);
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0x36);
    PUSH32(esp, 0x000C4669u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4669: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x278FA);
    PUSH32(esp, 0x25);
    PUSH32(esp, 0x000C467Du); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C467D: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x361DE);
    PUSH32(esp, 0x37);
    PUSH32(esp, 0x000C4691u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4691: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x378A4);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x000C46A5u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C46A5: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x26BD5);
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x000C46B9u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C46B9: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x27A7B);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x000C46CDu); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C46CD: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1CFD1);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x000C46E1u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C46E1: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x33254);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x000C46F5u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C46F5: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1BFFA);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x000C4709u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4709: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1E83B);
    PUSH32(esp, 0x31);
    PUSH32(esp, 0x000C471Du); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C471D: ;
    ecx = MEM32(0x8EB3B8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x31BB6);
    PUSH32(esp, 0x27);
    PUSH32(esp, 0x000C4731u); RECOMP_ABI_CALL(0x00032EF8u, sub_00032EF8); /* call 0x00032EF8 */

loc_000C4731: ;
    eax = MEM32(0x8EB3B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C473Cu); RECOMP_ABI_CALL(0x000325B1u, sub_000325B1); /* call 0x000325B1 */

loc_000C473C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000C4742: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C4880
 * Original: 0x000C4880 - 0x000C4891 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4880: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x7C51AC;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000C48A0
 * Original: 0x000C48A0 - 0x000C48A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C48A0(void)
{

loc_000C48A0: ;
    MEM32(ecx) = 0x7C51AC;
    esp += 4; return; /* ret */

}

/**
 * sub_000C48B0
 * Original: 0x000C48B0 - 0x000C48B9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C48B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C48B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000C48C0
 * Original: 0x000C48C0 - 0x000C48E8 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C48C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C48C0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    eax = 4;
    if (CMP_NE(_fa, _fb)) goto loc_000C48DA; /* jne: not equal / not zero */

loc_000C48CF: ;
    esi = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C48DA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000C48E5; /* jne: not equal / not zero */

loc_000C48E0: ;
    eax = 3;

loc_000C48E5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4900
 * Original: 0x000C4900 - 0x000C4904 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4900(void)
{

loc_000C4900: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_000C4910
 * Original: 0x000C4910 - 0x000C4920 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4910(void)
{

loc_000C4910: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0xC);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4930
 * Original: 0x000C4930 - 0x000C4953 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4930: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = 0x7C51B8;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000C4960
 * Original: 0x000C4960 - 0x000C4964 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4960(void)
{

loc_000C4960: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    esp += 4; return; /* ret */

}

/**
 * sub_000C4970
 * Original: 0x000C4970 - 0x000C4974 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4970(void)
{

loc_000C4970: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_000C4980
 * Original: 0x000C4980 - 0x000C4984 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4980(void)
{

loc_000C4980: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_000C4990
 * Original: 0x000C4990 - 0x000C499A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4990(void)
{

loc_000C4990: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C49A0
 * Original: 0x000C49A0 - 0x000C49AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C49A0(void)
{

loc_000C49A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C49B0
 * Original: 0x000C49B0 - 0x000C49BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C49B0(void)
{

loc_000C49B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C49C0
 * Original: 0x000C49C0 - 0x000C49C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C49C0(void)
{

loc_000C49C0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_000C49D0
 * Original: 0x000C49D0 - 0x000C49D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C49D0(void)
{

loc_000C49D0: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_000C49E0
 * Original: 0x000C49E0 - 0x000C49E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C49E0(void)
{

loc_000C49E0: ;
    MEM32(ecx) = 0x7C51AC;
    esp += 4; return; /* ret */

}

/**
 * sub_000C49F0
 * Original: 0x000C49F0 - 0x000C49F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C49F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C49F0: ;
    g_seh_ebp = ebp; sub_00023F89(); return; /* tail jmp 0x00023F89 */

}

/**
 * sub_000C4A00
 * Original: 0x000C4A00 - 0x000C4A0F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4A00: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4A20
 * Original: 0x000C4A20 - 0x000C4A88 (104 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C4A20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = esi;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ebp = ecx;
    PUSH32(esp, 0x000C4A3Au); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000C4A3A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4A7F; /* je: equal / zero */

loc_000C4A41: ;
    PUSH32(esp, edi);
    ecx = esi + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = eax + 4;
    MEM32(eax) = esi;
    eax = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000C4A75; /* jl: less (signed <) */

loc_000C4A50: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000C4A54: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax) = 0x7C51B8;
    MEM8(eax + 0xC) = LO8(ebx);
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C4A54; /* jne: not equal / not zero */

loc_000C4A75: ;
    MEM32(ebp + 0x14) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000C4A7F: ;
    POP32(esp, esi);
    MEM32(ebp + 0x14) = ebx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4AB0
 * Original: 0x000C4AB0 - 0x000C4B0B (91 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4AB0: ;
    SET_LO8(edx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000C4AF1; /* je: equal / zero */

loc_000C4ABC: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, edi);
    edi = esi + -4;
    eax = ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000C4ADC; /* js: sign (negative) */

loc_000C4ACD: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi;

loc_000C4AD0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x7C51AC;
    if ((_fa != 0)) goto loc_000C4AD0; /* jne: not equal / not zero */

loc_000C4ADC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C4AEA; /* je: equal / zero */

loc_000C4AE1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C4AE7u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C4AE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C4AEA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000C4AF1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    MEM32(esi) = 0x7C51AC;
    if (TEST_Z(_fa, _fb)) goto loc_000C4B05; /* je: equal / zero */

loc_000C4AFC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C4B02u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C4B02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C4B05: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4B30
 * Original: 0x000C4B30 - 0x000C4B50 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4B30: ;
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4B4F; /* je: equal / zero */

loc_000C4B37: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000C4B48; /* je: equal / zero */

loc_000C4B41: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000C4B47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C4B45u); } /* indirect call */
    }

loc_000C4B47: ;
    esp += 4; return; /* ret */

loc_000C4B48: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C4B4Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C4B4E: ;
    POP32(esp, ecx);

loc_000C4B4F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C4B60
 * Original: 0x000C4B60 - 0x000C4B6E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4B60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4B69; /* jne: not equal / not zero */

loc_000C4B68: ;
    esp += 4; return; /* ret */

loc_000C4B69: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    esp += 4; return; /* ret */

}

/**
 * sub_000C4B80
 * Original: 0x000C4B80 - 0x000C4B91 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4B80(void)
{

loc_000C4B80: ;
    SET_LO8(eax, MEM8(esp + 4));
    edx = MEM32(esp + 8);
    MEM8(ecx + 0xC) = LO8(eax);
    MEM32(ecx + 0x14) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000C4BA0
 * Original: 0x000C4BA0 - 0x000C4BBB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4BA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4BA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM8(ecx + 0xC) = LO8(eax);
    MEM32(ecx + 0x14) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x18) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000C4BD0
 * Original: 0x000C4BD0 - 0x000C4BEF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4BD0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7C51AC;
    if (TEST_Z(_fa, _fb)) goto loc_000C4BE9; /* je: equal / zero */

loc_000C4BE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C4BE6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C4BE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C4BE9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4C00
 * Original: 0x000C4C00 - 0x000C4C29 (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4C00(void)
{

loc_000C4C00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x33);
    esi = ecx;
    PUSH32(esp, 0x000C4C0Fu); RECOMP_ABI_CALL(0x0001B398u, sub_0001B398); /* call 0x0001B398 */

loc_000C4C0F: ;
    ecx = esi;
    MEM32(esi) = 0x7C51C4;
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0x000C4C23u); RECOMP_ABI_CALL(0x00023F89u, sub_00023F89); /* call 0x00023F89 */

loc_000C4C23: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4C40
 * Original: 0x000C4C40 - 0x000C4C6B (43 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7C51C4;
    PUSH32(esp, 0x000C4C4Eu); RECOMP_ABI_CALL(0x0002935Du, sub_0002935D); /* call 0x0002935D */

loc_000C4C4E: ;
    ecx = esi;
    PUSH32(esp, 0x000C4C55u); RECOMP_ABI_CALL(0x00018CA1u, sub_00018CA1); /* call 0x00018CA1 */

loc_000C4C55: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C4C65; /* je: equal / zero */

loc_000C4C5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C4C62u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C4C62: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C4C65: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4C80
 * Original: 0x000C4C80 - 0x000C4C9E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C4C80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4C91; /* jne: not equal / not zero */

loc_000C4C88: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00026716(); return; /* tail jmp 0x00026716 */

loc_000C4C91: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00026716(); return; /* tail jmp 0x00026716 */

}

/**
 * sub_000C4CB0
 * Original: 0x000C4CB0 - 0x000C4CD7 (39 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4CB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4CBC; /* jne: not equal / not zero */

loc_000C4CB8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000C4CC0;

loc_000C4CBC: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x39);

loc_000C4CC0: ;
    ecx = MEM32(ecx + 0xC);
    eax = edx + edx * 2;
    eax = MEM32(ecx + eax * 4 + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4CD3; /* jne: not equal / not zero */

loc_000C4CD1: ;
    eax = esi;

loc_000C4CD3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4CE0
 * Original: 0x000C4CE0 - 0x000C4D34 (84 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4CE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4CEC; /* jne: not equal / not zero */

loc_000C4CE8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000C4CF0;

loc_000C4CEC: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x39);

loc_000C4CF0: ;
    ecx = MEM32(ecx + 0xC);
    eax = edx + edx * 2;
    edx = ecx + eax * 4;
    ecx = MEM32(edx + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4D2E; /* je: equal / zero */

loc_000C4D03: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    PUSH32(esp, esi);
    esi = 4;
    if (CMP_NE(_fa, _fb)) goto loc_000C4D1B; /* jne: not equal / not zero */

loc_000C4D0E: ;
    esi = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax;

loc_000C4D1B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4D25; /* jne: not equal / not zero */

loc_000C4D20: ;
    esi = 3;

loc_000C4D25: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    POP32(esp, esi);
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C4D30; /* je: equal / zero */

loc_000C4D2E: ;
    eax = edi;

loc_000C4D30: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000C4D50
 * Original: 0x000C4D50 - 0x000C4D64 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4D50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4D5C; /* jne: not equal / not zero */

loc_000C4D59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000C4D5C: ;
    eax = MEM32(eax * 4 + 0x8E8EB8);
    esp += 4; return; /* ret */

}

/**
 * sub_000C4D70
 * Original: 0x000C4D70 - 0x000C4D9E (46 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C4D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4D70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4D7C; /* je: equal / zero */

loc_000C4D78: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);

loc_000C4D7C: ;
    ecx = MEM32(ecx + 0xC);
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 4 + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4D99; /* je: equal / zero */

loc_000C4D8A: ;
    SET_LO8(ecx, MEM8(eax + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4D99; /* je: equal / zero */

loc_000C4D91: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000C4D99: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4DB0
 * Original: 0x000C4DB0 - 0x000C4DD2 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4DB0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4DBE; /* je: equal / zero */

loc_000C4DBA: ;
    edx = (uint32_t)(int32_t)SMEM8(edx + 0x39);

loc_000C4DBE: ;
    ecx = MEM32(ecx + 0xC);
    edx = edx + edx * 2;
    ecx = MEM32(ecx + edx * 4 + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4DCF; /* je: equal / zero */

loc_000C4DCC: ;
    eax = MEM32(ecx + 0x14);

loc_000C4DCF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4DE0
 * Original: 0x000C4DE0 - 0x000C4E0B (43 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4DE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4DEF; /* je: equal / zero */

loc_000C4DEB: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);

loc_000C4DEF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C4DF5u); RECOMP_ABI_CALL(0x0001965Bu, sub_0001965B); /* call 0x0001965B */

loc_000C4DF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4E05; /* je: equal / zero */

loc_000C4DFA: ;
    eax = MEM32(eax * 4 + 0x8E8EB8);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000C4E05: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4E20
 * Original: 0x000C4E20 - 0x000C4E44 (36 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C4E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4E20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C4E2Cu); RECOMP_ABI_CALL(0x000341E5u, sub_000341E5); /* call 0x000341E5 */

loc_000C4E2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4E3F; /* je: equal / zero */

loc_000C4E30: ;
    SET_LO8(ecx, MEM8(eax + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4E3F; /* je: equal / zero */

loc_000C4E37: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000C4E3F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4E50
 * Original: 0x000C4E50 - 0x000C4E74 (36 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C4E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4E50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C4E5Cu); RECOMP_ABI_CALL(0x000341E5u, sub_000341E5); /* call 0x000341E5 */

loc_000C4E5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4E6F; /* je: equal / zero */

loc_000C4E60: ;
    SET_LO8(ecx, MEM8(eax + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4E6F; /* je: equal / zero */

loc_000C4E67: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000C4E6F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4E80
 * Original: 0x000C4E80 - 0x000C4E95 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000C4E80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C4E8Cu); RECOMP_ABI_CALL(0x000341E5u, sub_000341E5); /* call 0x000341E5 */

loc_000C4E8C: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4EA0
 * Original: 0x000C4EA0 - 0x000C4EB5 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000C4EA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C4EACu); RECOMP_ABI_CALL(0x000341E5u, sub_000341E5); /* call 0x000341E5 */

loc_000C4EAC: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4EC0
 * Original: 0x000C4EC0 - 0x000C4EE3 (35 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C4EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4EC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C4ECCu); RECOMP_ABI_CALL(0x000341E5u, sub_000341E5); /* call 0x000341E5 */

loc_000C4ECC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4EDE; /* je: equal / zero */

loc_000C4ED0: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4EDE; /* jne: not equal / not zero */

loc_000C4ED6: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000C4EDE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4EF0
 * Original: 0x000C4EF0 - 0x000C4F13 (35 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C4EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4EF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C4EFCu); RECOMP_ABI_CALL(0x000341E5u, sub_000341E5); /* call 0x000341E5 */

loc_000C4EFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4F0E; /* je: equal / zero */

loc_000C4F00: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4F0E; /* jne: not equal / not zero */

loc_000C4F06: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000C4F0E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4F20
 * Original: 0x000C4F20 - 0x000C4F43 (35 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C4F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4F20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C4F2Cu); RECOMP_ABI_CALL(0x000341E5u, sub_000341E5); /* call 0x000341E5 */

loc_000C4F2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4F3E; /* je: equal / zero */

loc_000C4F30: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4F3E; /* jne: not equal / not zero */

loc_000C4F36: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000C4F3E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4F50
 * Original: 0x000C4F50 - 0x000C4F73 (35 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C4F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4F50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C4F5Cu); RECOMP_ABI_CALL(0x000341E5u, sub_000341E5); /* call 0x000341E5 */

loc_000C4F5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4F6E; /* je: equal / zero */

loc_000C4F60: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4F6E; /* jne: not equal / not zero */

loc_000C4F66: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000C4F6E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4F80
 * Original: 0x000C4F80 - 0x000C4FA4 (36 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4F80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4F8C; /* je: equal / zero */

loc_000C4F88: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);

loc_000C4F8C: ;
    ecx = MEM32(ecx + 0xC);
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 4 + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4FA1; /* je: equal / zero */

loc_000C4F9A: ;
    edx = MEM32(esp + 8);
    MEM32(eax + 0x1C) = edx;

loc_000C4FA1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000C4FB0
 * Original: 0x000C4FB0 - 0x000C4FD4 (36 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4FB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4FBC; /* je: equal / zero */

loc_000C4FB8: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);

loc_000C4FBC: ;
    ecx = MEM32(ecx + 0xC);
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 4 + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4FD1; /* je: equal / zero */

loc_000C4FCA: ;
    edx = MEM32(esp + 8);
    MEM32(eax + 0x18) = edx;

loc_000C4FD1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000C4FE0
 * Original: 0x000C4FE0 - 0x000C500A (42 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4FE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4FEC; /* je: equal / zero */

loc_000C4FE8: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);

loc_000C4FEC: ;
    ecx = MEM32(ecx + 0xC);
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 4 + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) edx = eax; /* cmovne */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5007; /* je: equal / zero */

loc_000C5004: ;
    eax = MEM32(edx + 0x1C);

loc_000C5007: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5020
 * Original: 0x000C5020 - 0x000C504A (42 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5020: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C502C; /* je: equal / zero */

loc_000C5028: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);

loc_000C502C: ;
    ecx = MEM32(ecx + 0xC);
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 4 + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) edx = eax; /* cmovne */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5047; /* je: equal / zero */

loc_000C5044: ;
    eax = MEM32(edx + 0x18);

loc_000C5047: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5060
 * Original: 0x000C5060 - 0x000C5120 (192 bytes, 80 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C5060: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebp = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000C5076; /* jne: not equal / not zero */

loc_000C5072: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000C507A;

loc_000C5076: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);

loc_000C507A: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000C5082u); RECOMP_ABI_CALL(0x0001965Bu, sub_0001965B); /* call 0x0001965B */

loc_000C5082: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C508E; /* je: equal / zero */

loc_000C5087: ;
    edi = MEM32(eax * 4 + 0x8E8EB8);

loc_000C508E: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C50D6; /* jne: not equal / not zero */

loc_000C5096: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C50CD; /* je: equal / zero */

loc_000C509E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C50A6; /* jne: not equal / not zero */

loc_000C50A2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000C50AA;

loc_000C50A6: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);

loc_000C50AA: ;
    edx = MEM32(ebp + 0xC);
    eax = eax + eax * 2;
    eax = MEM32(edx + eax * 4 + 8);
    edx = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) ecx = eax; /* cmovne */
    eax = MEM32(esp + 0x24);
    MEM8(ecx + 0xC) = 1;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x10) = edx;

loc_000C50CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_000C50D6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C50DE; /* jne: not equal / not zero */

loc_000C50DA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000C50E2;

loc_000C50DE: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);

loc_000C50E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C50EA; /* je: equal / zero */

loc_000C50E6: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);

loc_000C50EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x000C50F3u); RECOMP_ABI_CALL(0x00023CB4u, sub_00023CB4); /* call 0x00023CB4 */

loc_000C50F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5117; /* je: equal / zero */

loc_000C50F7: ;
    SET_LO8(edx, MEM8(esp + 0x20));
    MEM8(eax + 0xC) = LO8(edx);
    edx = MEM32(esp + 0x24);
    POP32(esp, edi);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x18);
    POP32(esp, esi);
    SET_LO8(ecx, 1);
    POP32(esp, ebp);
    MEM32(eax + 0x10) = edx;
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_000C5117: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000C5150
 * Original: 0x000C5150 - 0x000C51A2 (82 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5150: ;
    edx = MEM32(esp + 8);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_000C5184; /* je: equal / zero */

loc_000C515F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5167; /* jne: not equal / not zero */

loc_000C5163: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000C516B;

loc_000C5167: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x39);

loc_000C516B: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    edx = edx + edx * 2;
    edx = MEM32(edi + edx * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000C5184; /* je: equal / zero */

loc_000C517B: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000C519E; /* jne: not equal / not zero */

loc_000C5184: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5194; /* jne: not equal / not zero */

loc_000C5188: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C5190u); RECOMP_ABI_CALL(0x0001F70Eu, sub_0001F70E); /* call 0x0001F70E */

loc_000C5190: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000C5194: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C519Eu); RECOMP_ABI_CALL(0x0001F70Eu, sub_0001F70E); /* call 0x0001F70E */

loc_000C519E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000C51C0
 * Original: 0x000C51C0 - 0x000C5276 (182 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C51C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000C51C0: ;
    eax = MEM32(edi);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x18);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C5246; /* jle: less or equal (signed <=) */

loc_000C51D1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000C5246; /* jg: greater (signed >) */

loc_000C51D6: ;
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x7C5654);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x000C51E7u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_000C51E7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C51F5; /* jne: not equal / not zero */

loc_000C51F2: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C51F5: ;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5246; /* jne: not equal / not zero */

loc_000C51FF: ;
    edx = (uint32_t)(int32_t)SMEM16(0x896160);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000C5246; /* jg: greater (signed >) */

loc_000C520A: ;
    PUSH32(esp, 0x000C520Fu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000C520F: ;
    ecx = eax;
    PUSH32(esp, 0x000C5216u); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_000C5216: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5272; /* je: equal / zero */

loc_000C521A: ;
    SET_LO8(eax, MEM8(edi + 0x132));
    _fa = (uint32_t)(MEM8(0x8E93B0)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8E93B0), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C525E; /* jne: not equal / not zero */

loc_000C5228: ;
    ecx = MEM32(0x8E9390);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C524A; /* jne: not equal / not zero */

loc_000C5232: ;
    ecx = MEM32(0x8E93A8);
    xmm0 = XMM_SCALAR(MEMF(0x7C5650)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C525E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_000C5246: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C524A: ;
    edx = MEM32(0x8E93A8);
    xmm0 = XMM_SCALAR(MEMF(0x7BC460)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 4); /* comiss */
    if ((_fca > _fcb)) goto loc_000C5246; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx + 4)) */

loc_000C525E: ;
    ecx = MEM32(0x8E9380);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 6);
    eax = SX8(LO8(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5246; /* je: equal / zero */

loc_000C5272: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C52B0
 * Original: 0x000C52B0 - 0x000C5302 (82 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C52B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C52B0: ;
    _fa = (uint32_t)(MEM32(0x8E960C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8E960C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C52FF; /* je: equal / zero */

loc_000C52B9: ;
    eax = MEM32(0x8E9390);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C52FF; /* je: equal / zero */

loc_000C52C2: ;
    SET_LO8(eax, MEM8(eax + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x132)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x132) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C52FF; /* jne: not equal / not zero */

loc_000C52CD: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C52FF; /* je: equal / zero */

loc_000C52D4: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000C52DEu); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000C52DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C52FF; /* je: equal / zero */

loc_000C52E2: ;
    SET_LO8(eax, MEM8(esi + 0x132));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(0x8E93BA));
    if (CMP_NE(_fa, _fb)) goto loc_000C52F8; /* jne: not equal / not zero */

loc_000C52F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C52FF; /* jne: not equal / not zero */

loc_000C52F5: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000C52F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C52FF; /* jne: not equal / not zero */

loc_000C52FC: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000C52FF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C5320
 * Original: 0x000C5320 - 0x000C5452 (306 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5320(void)
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

loc_000C5320: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x132);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C5332u); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_000C5332: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C53AC; /* jle: less or equal (signed <=) */

loc_000C5339: ;
    SET_LO8(eax, MEM8(edi + 0xD3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C534A; /* je: equal / zero */

loc_000C5343: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C537C; /* je: equal / zero */

loc_000C534A: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C538E; /* jne: not equal / not zero */

loc_000C5351: ;
    PUSH32(esp, 0x000C5356u); RECOMP_ABI_CALL(0x0002AFF0u, sub_0002AFF0); /* call 0x0002AFF0 */

loc_000C5356: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C538E; /* je: equal / zero */

loc_000C535A: ;
    PUSH32(esp, 0x000C535Fu); RECOMP_ABI_CALL(0x0001ED4Au, sub_0001ED4A); /* call 0x0001ED4A */

loc_000C535F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C538E; /* je: equal / zero */

loc_000C5363: ;
    SET_LO8(eax, MEM8(eax + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x132)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 0x132) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C537C; /* jne: not equal / not zero */

loc_000C536E: ;
    ecx = MEM32(edi);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x18);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000C538E; /* jne: not equal / not zero */

loc_000C537C: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x132);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C538Bu); RECOMP_ABI_CALL(0x00034415u, sub_00034415); /* call 0x00034415 */

loc_000C538B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C538E: ;
    SET_LO8(eax, MEM8(edi + 0xD5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5450; /* je: equal / zero */

loc_000C539C: ;
    MEM8(edi + 0xD5) = 0;
    MEM8(edi + 0xD3) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000C53AC: ;
    PUSH32(esp, 0x000C53B1u); RECOMP_ABI_CALL(0x000C51C0u, sub_000C51C0); /* call 0x000C51C0 */

loc_000C53B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C541C; /* je: equal / zero */

loc_000C53B5: ;
    ecx = edi;
    PUSH32(esp, 0x000C53BCu); RECOMP_ABI_CALL(0x00015CF9u, sub_00015CF9); /* call 0x00015CF9 */

loc_000C53BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(0x8EADA0);
    if (CMP_EQ(_fa, _fb)) goto loc_000C53D5; /* je: equal / zero */

loc_000C53C6: ;
    PUSH32(esp, 0x000C53CBu); RECOMP_ABI_CALL(0x0002BFA9u, sub_0002BFA9); /* call 0x0002BFA9 */

loc_000C53CB: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    goto loc_000C53E0;

loc_000C53D5: ;
    PUSH32(esp, 0x000C53DAu); RECOMP_ABI_CALL(0x0002BFA9u, sub_0002BFA9); /* call 0x0002BFA9 */

loc_000C53DA: ;
    fp_push(MEMF(0x7AA840)); /* fld float */

loc_000C53E0: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000C541C; /* jbe: below or equal (unsigned <=) */

loc_000C53E6: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5450; /* je: equal / zero */

loc_000C53ED: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x132);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C53FCu); RECOMP_ABI_CALL(0x00034415u, sub_00034415); /* call 0x00034415 */

loc_000C53FC: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x132);
    ecx = MEM32(eax * 4 + 0x8F6A6C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax * 4 + 0x8F6A6C) = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000C541C: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5450; /* jne: not equal / not zero */

loc_000C5423: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x132);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C5432u); RECOMP_ABI_CALL(0x00034415u, sub_00034415); /* call 0x00034415 */

loc_000C5432: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x132);
    ecx = MEM32(eax * 4 + 0x8F6A6C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFF7FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax * 4 + 0x8F6A6C) = ecx;

loc_000C5450: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C54A0
 * Original: 0x000C54A0 - 0x000C55C6 (294 bytes, 88 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C54A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000C54A0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000C54ABu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000C54AB: ;
    ecx = eax;
    PUSH32(esp, 0x000C54B2u); RECOMP_ABI_CALL(0x0002085Cu, sub_0002085C); /* call 0x0002085C */

loc_000C54B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C55C1; /* jne: not equal / not zero */

loc_000C54BA: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C55C1; /* je: equal / zero */

loc_000C54C5: ;
    SET_LO8(eax, MEM8(esi + 0xD5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000C5511; /* je: equal / zero */

loc_000C54D0: ;
    PUSH32(esp, 0x000C54D5u); RECOMP_ABI_CALL(0x000C52B0u, sub_000C52B0); /* call 0x000C52B0 */

loc_000C54D5: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x132);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM8(esp + 0x13) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    PUSH32(esp, 0x000C54F0u); RECOMP_ABI_CALL(0x00034415u, sub_00034415); /* call 0x00034415 */

loc_000C54F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5511; /* jne: not equal / not zero */

loc_000C54F8: ;
    _fa = (uint32_t)(MEM8(esp + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xB), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5511; /* jne: not equal / not zero */

loc_000C54FE: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5511; /* jne: not equal / not zero */

loc_000C5505: ;
    MEM8(esi + 0xD3) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C5511: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000C5518u); RECOMP_ABI_CALL(0x000C52B0u, sub_000C52B0); /* call 0x000C52B0 */

loc_000C5518: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5532; /* je: equal / zero */

loc_000C551C: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5532; /* je: equal / zero */

loc_000C5523: ;
    _fa = (uint32_t)(MEM32(0x8E9390)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8E9390), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5532; /* je: equal / zero */

loc_000C552B: ;
    ebx = 1;
    goto loc_000C5575;

loc_000C5532: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x132);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C553Fu); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_000C553F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000C55C0; /* jg: greater (signed >) */

loc_000C5546: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x000C554Eu); RECOMP_ABI_CALL(0x000C51C0u, sub_000C51C0); /* call 0x000C51C0 */

loc_000C554E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000C55C0; /* jne: not equal / not zero */

loc_000C5553: ;
    SET_LO8(ecx, MEM8(0x8E93B0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x132)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x132) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C55C0; /* jne: not equal / not zero */

loc_000C5561: ;
    edx = MEM32(0x8E93A8);
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C55C0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000C5575: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x132);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C558Au); RECOMP_ABI_CALL(0x00034415u, sub_00034415); /* call 0x00034415 */

loc_000C558A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C55C0; /* je: equal / zero */

loc_000C5591: ;
    ecx = esp + 0xC;
    MEM8(esi + 0xD3) = 1;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0xC) = 0x7ABE10;
    MEM16(esp + 0x18) = 0x17;
    PUSH32(esp, 0x000C55C0u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000C55C0: ;
    POP32(esp, ebx);

loc_000C55C1: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C5610
 * Original: 0x000C5610 - 0x000C5619 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C5610: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000C54A0(); return; /* tail jmp 0x000C54A0 */

}

/**
 * sub_000C5620
 * Original: 0x000C5620 - 0x000C5637 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5620: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, 0x000C562Bu); RECOMP_ABI_CALL(0x0001E804u, sub_0001E804); /* call 0x0001E804 */

loc_000C562B: ;
    ecx = esp;
    PUSH32(esp, 0x000C5633u); RECOMP_ABI_CALL(0x00035234u, sub_00035234); /* call 0x00035234 */

loc_000C5633: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C5640
 * Original: 0x000C5640 - 0x000C564B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5640: ;
    edx = MEM32(ecx + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_000C5650
 * Original: 0x000C5650 - 0x000C5654 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5650(void)
{

loc_000C5650: ;
    eax = ecx + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5660
 * Original: 0x000C5660 - 0x000C566D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5660(void)
{

loc_000C5660: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1D4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5670
 * Original: 0x000C5670 - 0x000C5677 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5670(void)
{

loc_000C5670: ;
    eax = MEM32(ecx + 0x1D4);
    esp += 4; return; /* ret */

}

/**
 * sub_000C5680
 * Original: 0x000C5680 - 0x000C5689 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5680(void)
{

loc_000C5680: ;
    eax = ecx;
    MEM32(eax) = 0x7C5AE4;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5690
 * Original: 0x000C5690 - 0x000C56D0 (64 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5690: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_000C56BE; /* je: equal / zero */

loc_000C569F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7C5AF8);
    ecx = edi;
    PUSH32(esp, 0x000C56ACu); RECOMP_ABI_CALL(0x00020717u, sub_00020717); /* call 0x00020717 */

loc_000C56AC: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000C56B7u); RECOMP_ABI_CALL(0x000259C4u, sub_000259C4); /* call 0x000259C4 */

loc_000C56B7: ;
    ecx = edi;
    PUSH32(esp, 0x000C56BEu); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_000C56BE: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C56CB; /* je: equal / zero */

loc_000C56C5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C56CBu); RECOMP_ABI_CALL(0x00032430u, sub_00032430); /* call 0x00032430 */

loc_000C56CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C56E0
 * Original: 0x000C56E0 - 0x000C56E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C56E0(void)
{

loc_000C56E0: ;
    MEM32(ecx + 0x1C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000C56F0
 * Original: 0x000C56F0 - 0x000C570B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C56F0(void)
{

loc_000C56F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C5702u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_000C5702: ;
    MEM32(esi + 0x1C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C5720
 * Original: 0x000C5720 - 0x000C5769 (73 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5720: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_000C575F; /* je: equal / zero */

loc_000C572F: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000C5735u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5732u); } /* indirect call */
    }

loc_000C5735: ;
    edx = MEM32(edi);
    ecx = edi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000C573Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C573Bu); } /* indirect call */
    }

loc_000C573E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    POP32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_000C5752; /* jle: less or equal (signed <=) */

loc_000C5743: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000C574Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5749u); } /* indirect call */
    }

loc_000C574B: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000C5752: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C575F; /* je: equal / zero */

loc_000C5759: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000C575Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C575Du); } /* indirect call */
    }

loc_000C575F: ;
    MEM32(esi + 0x24) = edi;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5780
 * Original: 0x000C5780 - 0x000C5799 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5780: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5797; /* je: equal / zero */

loc_000C578A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000C5790u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C578Eu); } /* indirect call */
    }

loc_000C5790: ;
    MEM32(esi + 0x24) = 0;

loc_000C5797: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C57A0
 * Original: 0x000C57A0 - 0x000C57A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C57A0(void)
{

loc_000C57A0: ;
    MEM32(ecx) = 0x7C5AE4;
    esp += 4; return; /* ret */

}

/**
 * sub_000C57B0
 * Original: 0x000C57B0 - 0x000C57B3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C57B0(void)
{

loc_000C57B0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C57C0
 * Original: 0x000C57C0 - 0x000C57C3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C57C0(void)
{

loc_000C57C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C57D0
 * Original: 0x000C57D0 - 0x000C57D3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C57D0(void)
{

loc_000C57D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C57E0
 * Original: 0x000C57E0 - 0x000C57F0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C57E0(void)
{

loc_000C57E0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5800
 * Original: 0x000C5800 - 0x000C5801 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5800(void)
{

loc_000C5800: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5810
 * Original: 0x000C5810 - 0x000C581B (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5810(void)
{

loc_000C5810: ;
    eax = ecx;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000C581Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5817u); } /* indirect call */
    }

loc_000C581A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5820
 * Original: 0x000C5820 - 0x000C582A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5820(void)
{

loc_000C5820: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5830
 * Original: 0x000C5830 - 0x000C5839 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5830(void)
{

loc_000C5830: ;
    eax = ecx;
    MEM32(eax) = 0x7C5B08;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5840
 * Original: 0x000C5840 - 0x000C5847 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5840(void)
{

loc_000C5840: ;
    MEM32(ecx) = 0x7C5AE4;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5850
 * Original: 0x000C5850 - 0x000C5859 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5850(void)
{

loc_000C5850: ;
    eax = ecx;
    MEM32(eax) = 0x7C5B1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5860
 * Original: 0x000C5860 - 0x000C5867 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5860(void)
{

loc_000C5860: ;
    MEM32(ecx) = 0x7C5AE4;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5870
 * Original: 0x000C5870 - 0x000C5877 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5870(void)
{

loc_000C5870: ;
    MEM32(ecx) = 0x7C5AE4;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5880
 * Original: 0x000C5880 - 0x000C589F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5880: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7C5AE4;
    if (TEST_Z(_fa, _fb)) goto loc_000C5899; /* je: equal / zero */

loc_000C5890: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C5896u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C5896: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C5899: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C58B0
 * Original: 0x000C58B0 - 0x000C58CF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C58B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C58B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7C5AE4;
    if (TEST_Z(_fa, _fb)) goto loc_000C58C9; /* je: equal / zero */

loc_000C58C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C58C6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C58C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C58C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C58E0
 * Original: 0x000C58E0 - 0x000C58FF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C58E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C58E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7C5AE4;
    if (TEST_Z(_fa, _fb)) goto loc_000C58F9; /* je: equal / zero */

loc_000C58F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C58F6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C58F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C58F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5910
 * Original: 0x000C5910 - 0x000C593B (43 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5910: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x14) = LO8(ecx);
    MEM32(esi + 0x18) = ecx;
    ecx = esi;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x000C5935u); RECOMP_ABI_CALL(0x0002520Du, sub_0002520D); /* call 0x0002520D */

loc_000C5935: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5950
 * Original: 0x000C5950 - 0x000C5965 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C5950: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(ecx + 0x14) = LO8(eax);
    MEM32(ecx + 8) = 0;
    MEM32(ecx + 0x18) = eax;
    g_seh_ebp = ebp; sub_00013FC1(); return; /* tail jmp 0x00013FC1 */

}

/**
 * sub_000C5970
 * Original: 0x000C5970 - 0x000C599E (46 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5970: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esi + 0x14) = LO8(eax);
    MEM32(esi + 8) = 0;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x000C5988u); RECOMP_ABI_CALL(0x00013FC1u, sub_00013FC1); /* call 0x00013FC1 */

loc_000C5988: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C5998; /* je: equal / zero */

loc_000C598F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C5995u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C5995: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C5998: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C59B0
 * Original: 0x000C59B0 - 0x000C59D7 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C59B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C59B0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C59B3: ;
    ecx = MEM32(esi + 0x8EB3C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C59C3; /* je: equal / zero */

loc_000C59BD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000C59C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C59C1u); } /* indirect call */
    }

loc_000C59C3: ;
    MEM32(esi + 0x8EB3C0) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C59B3; /* jl: less (signed <) */

loc_000C59D5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C59E0
 * Original: 0x000C59E0 - 0x000C5A35 (85 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C59E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C59E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000C59F0: ;
    esi = MEM32(ebx + 0x8EB3C0);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5A1C; /* je: equal / zero */

loc_000C59FD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7C5AF8);
    ecx = edi;
    PUSH32(esp, 0x000C5A0Au); RECOMP_ABI_CALL(0x00020717u, sub_00020717); /* call 0x00020717 */

loc_000C5A0A: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000C5A15u); RECOMP_ABI_CALL(0x000259C4u, sub_000259C4); /* call 0x000259C4 */

loc_000C5A15: ;
    ecx = edi;
    PUSH32(esp, 0x000C5A1Cu); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_000C5A1C: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5A29; /* je: equal / zero */

loc_000C5A23: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C5A29u); RECOMP_ABI_CALL(0x00032430u, sub_00032430); /* call 0x00032430 */

loc_000C5A29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C59F0; /* jl: less (signed <) */

loc_000C5A31: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C5A50
 * Original: 0x000C5A50 - 0x000C5A64 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5A50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5A5C; /* jne: not equal / not zero */

loc_000C5A59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000C5A5C: ;
    eax = MEM32(eax * 4 + 0x8EB3C0);
    esp += 4; return; /* ret */

}

/**
 * sub_000C5A70
 * Original: 0x000C5A70 - 0x000C5AD0 (96 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5A70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 8;
    PUSH32(esp, esi);
    goto loc_000C5A80;

    /* nop */

loc_000C5A80: ;
    edx = MEM32(ecx + 0x8EB3B8);
    esi = MEM32(edx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5A8E; /* je: equal / zero */

loc_000C5A8D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C5A8E: ;
    edx = MEM32(ecx + 0x8EB3BC);
    esi = MEM32(edx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5A9C; /* je: equal / zero */

loc_000C5A9B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C5A9C: ;
    edx = MEM32(ecx + 0x8EB3C0);
    esi = MEM32(edx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5AAA; /* je: equal / zero */

loc_000C5AA9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C5AAA: ;
    edx = MEM32(ecx + 0x8EB3C4);
    esi = MEM32(edx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5AB8; /* je: equal / zero */

loc_000C5AB7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C5AB8: ;
    edx = MEM32(ecx + 0x8EB3C8);
    esi = MEM32(edx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5AC6; /* je: equal / zero */

loc_000C5AC5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C5AC6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x44 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C5A80; /* jl: less (signed <) */

loc_000C5ACE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C5AF0
 * Original: 0x000C5AF0 - 0x000C5B3C (76 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5AFF; /* je: equal / zero */

loc_000C5AFA: ;
    PUSH32(esp, 0x000C5AFFu); RECOMP_ABI_CALL(0x00024AF6u, sub_00024AF6); /* call 0x00024AF6 */

loc_000C5AFF: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5B0E; /* je: equal / zero */

loc_000C5B06: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000C5B0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5B0Bu); } /* indirect call */
    }

loc_000C5B0E: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5B3A; /* je: equal / zero */

loc_000C5B15: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000C5B1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5B17u); } /* indirect call */
    }

loc_000C5B1A: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000C5B22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5B1Fu); } /* indirect call */
    }

loc_000C5B22: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5B3A; /* je: equal / zero */

loc_000C5B26: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5B3A; /* je: equal / zero */

loc_000C5B2D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000C5B33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5B31u); } /* indirect call */
    }

loc_000C5B33: ;
    MEM32(esi + 0x24) = 0;

loc_000C5B3A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C5B50
 * Original: 0x000C5B50 - 0x000C5B60 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5B50(void)
{

loc_000C5B50: ;
    eax = ecx;
    MEM32(eax) = 0x7C5B30;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5B70
 * Original: 0x000C5B70 - 0x000C5B7A (10 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5B70(void)
{

loc_000C5B70: ;
    MEM32(ecx + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5B80
 * Original: 0x000C5B80 - 0x000C5B8A (10 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5B80(void)
{

loc_000C5B80: ;
    MEM32(ecx + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5B90
 * Original: 0x000C5B90 - 0x000C5BAF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5B90: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7C5AE4;
    if (TEST_Z(_fa, _fb)) goto loc_000C5BA9; /* je: equal / zero */

loc_000C5BA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C5BA6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C5BA6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C5BA9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5BC0
 * Original: 0x000C5BC0 - 0x000C5BD0 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5BC0(void)
{

loc_000C5BC0: ;
    eax = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x7C5B44;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5BE0
 * Original: 0x000C5BE0 - 0x000C5BE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5BE0(void)
{

loc_000C5BE0: ;
    MEM32(ecx) = 0x7C5AE4;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5BF0
 * Original: 0x000C5BF0 - 0x000C5C00 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5BF0(void)
{

loc_000C5BF0: ;
    eax = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x7C5B58;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5C10
 * Original: 0x000C5C10 - 0x000C5C17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5C10(void)
{

loc_000C5C10: ;
    MEM32(ecx) = 0x7C5AE4;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5C20
 * Original: 0x000C5C20 - 0x000C5C3F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5C20: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7C5AE4;
    if (TEST_Z(_fa, _fb)) goto loc_000C5C39; /* je: equal / zero */

loc_000C5C30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C5C36u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C5C36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C5C39: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5C50
 * Original: 0x000C5C50 - 0x000C5C6F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5C50: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7C5AE4;
    if (TEST_Z(_fa, _fb)) goto loc_000C5C69; /* je: equal / zero */

loc_000C5C60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C5C66u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C5C66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C5C69: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5C80
 * Original: 0x000C5C80 - 0x000C5CF1 (113 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5C80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = ebx;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = 0x7C5B44;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x14) = 0x7C5B58;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    MEM32(esi + 0x1C) = 0x7C5B08;
    MEM32(esi + 0x20) = 0x7C5B1C;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x30) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_000C5CDB; /* je: equal / zero */

loc_000C5CCF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C5CD5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C5CD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ebx;

loc_000C5CDB: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5CE9; /* je: equal / zero */

loc_000C5CDF: ;
    ecx = esi;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x000C5CE9u); RECOMP_ABI_CALL(0x00020CBCu, sub_00020CBC); /* call 0x00020CBC */

loc_000C5CE9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5D10
 * Original: 0x000C5D10 - 0x000C5D3D (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5D2A; /* je: equal / zero */

loc_000C5D1A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C5D20u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C5D20: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_000C5D2A: ;
    eax = 0x7C5AE4;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C5D50
 * Original: 0x000C5D50 - 0x000C5D91 (65 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5D50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5D6A; /* je: equal / zero */

loc_000C5D5A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C5D60u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C5D60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_000C5D6A: ;
    eax = 0x7C5AE4;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0xC) = eax;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C5D8B; /* je: equal / zero */

loc_000C5D82: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C5D88u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C5D88: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C5D8B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5DB0
 * Original: 0x000C5DB0 - 0x000C5E94 (228 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000C5DB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000C5DCA; /* je: equal / zero */

loc_000C5DC1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000C5DC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5DC5u); } /* indirect call */
    }

loc_000C5DC7: ;
    MEM32(esi + 0x24) = ebx;

loc_000C5DCA: ;
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5DF0; /* je: equal / zero */

loc_000C5DD1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = edi;
    MEM8(edi + 0x14) = LO8(eax);
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0x18) = eax;
    PUSH32(esp, 0x000C5DE4u); RECOMP_ABI_CALL(0x00013FC1u, sub_00013FC1); /* call 0x00013FC1 */

loc_000C5DE4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C5DEAu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C5DEA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = ebx;

loc_000C5DF0: ;
    edi = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5E27; /* je: equal / zero */

loc_000C5DF7: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5E0A; /* je: equal / zero */

loc_000C5DFE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C5E04u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C5E04: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = ebx;

loc_000C5E0A: ;
    eax = 0x7C5AE4;
    PUSH32(esp, edi);
    MEM32(edi + 0x20) = eax;
    MEM32(edi + 0x1C) = eax;
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 0xC) = eax;
    PUSH32(esp, 0x000C5E21u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C5E21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = ebx;

loc_000C5E27: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x899CD0)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM8(esi + 4) = LO8(ebx);
    MEM8(esi + 5) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(ebx);
    MEM8(esi + 0xE) = LO8(ebx);
    MEM8(esi + 0xF) = LO8(ebx);
    MEM8(esi + 0x10) = LO8(ebx);
    MEM32(esi + 0x11) = ecx;
    MEM8(esi + 0x15) = LO8(ecx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C5E66; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000C5E61: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000C5E76;

loc_000C5E66: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000C5E76; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000C5E72: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_000C5E76: ;
    ecx = esp + 0xC;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C5E84u); RECOMP_ABI_CALL(0x0001E804u, sub_0001E804); /* call 0x0001E804 */

loc_000C5E84: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x000C5E8Du); RECOMP_ABI_CALL(0x00035234u, sub_00035234); /* call 0x00035234 */

loc_000C5E8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C5ED0
 * Original: 0x000C5ED0 - 0x000C5F5B (139 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5ED0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x000C5ED9u); RECOMP_ABI_CALL(0x000362A6u, sub_000362A6); /* call 0x000362A6 */

loc_000C5ED9: ;
    edi = MEM32(esp + 0xC);
    MEM32(ebx + 0x20) = edi;
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5F56; /* jne: not equal / not zero */

loc_000C5EE7: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x000C5EF3u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000C5EF3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5F04; /* je: equal / zero */

loc_000C5EFA: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x000C5F02u); RECOMP_ABI_CALL(0x00035301u, sub_00035301); /* call 0x00035301 */

loc_000C5F02: ;
    goto loc_000C5F06;

loc_000C5F04: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C5F06: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x1C);
    MEM32(ebx + 0x28) = eax;
    PUSH32(esp, 0x000C5F16u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000C5F16: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5F50; /* je: equal / zero */

loc_000C5F1F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x10) = 0;
    MEM8(esi + 0x14) = LO8(eax);
    MEM32(esi + 8) = 0;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x000C5F47u); RECOMP_ABI_CALL(0x0002520Du, sub_0002520D); /* call 0x0002520D */

loc_000C5F47: ;
    MEM32(ebx + 0x2C) = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000C5F50: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x2C) = esi;
    POP32(esp, esi);

loc_000C5F56: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5F80
 * Original: 0x000C5F80 - 0x000C5F91 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5F80(void)
{

loc_000C5F80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000C5F88u); RECOMP_ABI_CALL(0x000362A6u, sub_000362A6); /* call 0x000362A6 */

loc_000C5F88: ;
    MEM32(esi + 0x20) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C5FA0
 * Original: 0x000C5FA0 - 0x000C5FED (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5FA0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5FEB; /* je: equal / zero */

loc_000C5FA9: ;
    _fa = (uint32_t)(MEM32(edi + 0x1D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1D4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5FEB; /* jne: not equal / not zero */

loc_000C5FB2: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000C5FC0;

    /* nop */
    edi = edi;

loc_000C5FC0: ;
    eax = MEM32(esi * 4 + 0x8EB3C0);
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5FD7; /* je: equal / zero */

loc_000C5FCE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C5FC0; /* jl: less (signed <) */

loc_000C5FD4: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000C5FD7: ;
    ecx = MEM32(esi * 4 + 0x8EB3C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C5FE4u); RECOMP_ABI_CALL(0x000261C6u, sub_000261C6); /* call 0x000261C6 */

loc_000C5FE4: ;
    MEM32(edi + 0x1D4) = esi;
    POP32(esp, esi);

loc_000C5FEB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C6000
 * Original: 0x000C6000 - 0x000C6075 (117 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C6000: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6070; /* je: equal / zero */

loc_000C600C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x1D4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C606F; /* je: equal / zero */

loc_000C6018: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx * 4 + 0x8EB3C0);
    ecx = edi;
    PUSH32(esp, 0x000C6027u); RECOMP_ABI_CALL(0x000362A6u, sub_000362A6); /* call 0x000362A6 */

loc_000C6027: ;
    MEM32(edi + 0x20) = 0;
    eax = MEM32(ebx * 4 + 0x8EB3C0);
    ecx = MEM32(esi + 0x28);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x1D4) = 0xFFFFFFFFu;
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000C606F; /* jne: not equal / not zero */

loc_000C604A: ;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(eax * 4 + 0x8F0040);
    ecx = MEM32(ecx);
    PUSH32(esp, 0x000C605Du); RECOMP_ABI_CALL(0x00026680u, sub_00026680); /* call 0x00026680 */

loc_000C605D: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000C6066u); RECOMP_ABI_CALL(0x0001E804u, sub_0001E804); /* call 0x0001E804 */

loc_000C6066: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000C606Fu); RECOMP_ABI_CALL(0x00035234u, sub_00035234); /* call 0x00035234 */

loc_000C606F: ;
    POP32(esp, ebx);

loc_000C6070: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C60A0
 * Original: 0x000C60A0 - 0x000C612D (141 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C60A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C60A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_000C60B0: ;
    eax = MEM32(ebx + 0x8EB3C0);
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C610F; /* je: equal / zero */

loc_000C60BD: ;
    esi = eax;
    edi = MEM32(esi + 0x20);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C60C9u); RECOMP_ABI_CALL(0x000362A6u, sub_000362A6); /* call 0x000362A6 */

loc_000C60C9: ;
    MEM32(esi + 0x20) = 0;
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x1D4) = 0xFFFFFFFFu;
    if (CMP_NE(_fa, _fb)) goto loc_000C610F; /* jne: not equal / not zero */

loc_000C60E1: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    ecx = MEM32(ebx + 0x8EB3C0);
    eax = MEM32(edx * 4 + 0x8F0040);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C60FDu); RECOMP_ABI_CALL(0x00026680u, sub_00026680); /* call 0x00026680 */

loc_000C60FD: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C6106u); RECOMP_ABI_CALL(0x0001E804u, sub_0001E804); /* call 0x0001E804 */

loc_000C6106: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C610Fu); RECOMP_ABI_CALL(0x00035234u, sub_00035234); /* call 0x00035234 */

loc_000C610F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C60B0; /* jl: less (signed <) */

loc_000C6117: ;
    ecx = MEM32(0x8E8F58);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C6123u); RECOMP_ABI_CALL(0x0002F488u, sub_0002F488); /* call 0x0002F488 */

loc_000C6123: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C6150
 * Original: 0x000C6150 - 0x000C6187 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C6150: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x7C5B6C;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    ecx = esi + 0x30;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    PUSH32(esp, 0x000C6178u); RECOMP_ABI_CALL(0x0001E804u, sub_0001E804); /* call 0x0001E804 */

loc_000C6178: ;
    ecx = esi;
    MEM32(esi + 0x1C) = edi;
    PUSH32(esp, 0x000C6182u); RECOMP_ABI_CALL(0x000362A6u, sub_000362A6); /* call 0x000362A6 */

loc_000C6182: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C61A0
 * Original: 0x000C61A0 - 0x000C6237 (151 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C61A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C61A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x24);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(edi) = 0x7C5B6C;
    if (CMP_EQ(_fa, _fb)) goto loc_000C61BD; /* je: equal / zero */

loc_000C61B4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000C61BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C61B8u); } /* indirect call */
    }

loc_000C61BA: ;
    MEM32(edi + 0x24) = ebx;

loc_000C61BD: ;
    esi = MEM32(edi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C61F4; /* je: equal / zero */

loc_000C61C4: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C61D7; /* je: equal / zero */

loc_000C61CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C61D1u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C61D1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ebx;

loc_000C61D7: ;
    eax = 0x7C5AE4;
    PUSH32(esp, esi);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x000C61EEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C61EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x28) = ebx;

loc_000C61F4: ;
    esi = MEM32(edi + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C621A; /* je: equal / zero */

loc_000C61FB: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    MEM8(esi + 0x14) = LO8(eax);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x000C620Eu); RECOMP_ABI_CALL(0x00013FC1u, sub_00013FC1); /* call 0x00013FC1 */

loc_000C620E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C6214u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C6214: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x2C) = ebx;

loc_000C621A: ;
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(0x9016AC);
    PUSH32(esp, 0x000C6229u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_000C6229: ;
    MEM32(edi + 0x1C) = ebx;
    ecx = edi + 0x30;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00035234(); return; /* tail jmp 0x00035234 */

}

/**
 * sub_000C6260
 * Original: 0x000C6260 - 0x000C6271 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6260(void)
{

loc_000C6260: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000C6268u); RECOMP_ABI_CALL(0x000362A6u, sub_000362A6); /* call 0x000362A6 */

loc_000C6268: ;
    MEM32(esi + 0x20) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C6280
 * Original: 0x000C6280 - 0x000C62DA (90 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C6280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C6287: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x000C628Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000C628F: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C62C6; /* je: equal / zero */

loc_000C6298: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x7C5B6C;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    ecx = esi + 0x30;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    PUSH32(esp, 0x000C62BAu); RECOMP_ABI_CALL(0x0001E804u, sub_0001E804); /* call 0x0001E804 */

loc_000C62BA: ;
    ecx = esi;
    MEM32(esi + 0x1C) = ebx;
    PUSH32(esp, 0x000C62C4u); RECOMP_ABI_CALL(0x000362A6u, sub_000362A6); /* call 0x000362A6 */

loc_000C62C4: ;
    goto loc_000C62C8;

loc_000C62C6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C62C8: ;
    MEM32(edi + 0x8EB3C0) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C6287; /* jl: less (signed <) */

loc_000C62D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C62F0
 * Original: 0x000C62F0 - 0x000C632D (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C62F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C62F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000C6300;

    /* nop */
    /* nop */

loc_000C6300: ;
    edi = MEM32(esi + 0x8EB3C0);
    ecx = edi;
    PUSH32(esp, 0x000C630Du); RECOMP_ABI_CALL(0x000362A6u, sub_000362A6); /* call 0x000362A6 */

loc_000C630D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3C (32-bit) */
    MEM32(edi + 0x20) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_000C6300; /* jl: less (signed <) */

loc_000C631C: ;
    eax = MEM32(0x8E8F58);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C6327u); RECOMP_ABI_CALL(0x0002F488u, sub_0002F488); /* call 0x0002F488 */

loc_000C6327: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C6340
 * Original: 0x000C6340 - 0x000C635E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C6340: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000C6348u); RECOMP_ABI_CALL(0x00018490u, sub_00018490); /* call 0x00018490 */

loc_000C6348: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C6358; /* je: equal / zero */

loc_000C634F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C6355u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000C6355: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C6358: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C6370
 * Original: 0x000C6370 - 0x000C6397 (39 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6370(void)
{

loc_000C6370: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000C63A0
 * Original: 0x000C63A0 - 0x000C63C6 (38 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C63A0(void)
{

loc_000C63A0: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000C63D0
 * Original: 0x000C63D0 - 0x000C63F2 (34 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C63D0(void)
{

loc_000C63D0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C6400
 * Original: 0x000C6400 - 0x000C6422 (34 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6400(void)
{

loc_000C6400: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C6430
 * Original: 0x000C6430 - 0x000C6443 (19 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6430(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000C6430: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C6450
 * Original: 0x000C6450 - 0x000C6454 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6450(void)
{

loc_000C6450: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_000C6460
 * Original: 0x000C6460 - 0x000C6490 (48 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6460(void)
{

loc_000C6460: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000C64A0
 * Original: 0x000C64A0 - 0x000C64AC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C64A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C64A0: ;
    edx = MEM32(ecx + 0x58);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000C64B0
 * Original: 0x000C64B0 - 0x000C64B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C64B0(void)
{

loc_000C64B0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000C64C0
 * Original: 0x000C64C0 - 0x000C6583 (195 bytes, 66 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C64C0(void)
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

loc_000C64C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8F6A68);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 6 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_000C6532; /* je: equal / zero */

loc_000C64E3: ;
    eax = MEM32(esi + 0xF0);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6532; /* je: equal / zero */

loc_000C64F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6532; /* je: equal / zero */

loc_000C64F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6532; /* je: equal / zero */

loc_000C64FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6532; /* je: equal / zero */

loc_000C64FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6532; /* je: equal / zero */

loc_000C6504: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6532; /* je: equal / zero */

loc_000C6509: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6532; /* je: equal / zero */

loc_000C650E: ;
    ecx = MEM32(0x899D2C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x44A58000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C6522u); RECOMP_ABI_CALL(0x0001FA2Eu, sub_0001FA2E); /* call 0x0001FA2E */

loc_000C6522: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6532; /* je: equal / zero */

loc_000C6529: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_000C6532: ;
    eax = MEM32(0x8F6A68);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C6579; /* je: equal / zero */

loc_000C653C: ;
    edx = MEM32(esi + 0xF0);
    eax = MEM32(edx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6559; /* je: equal / zero */

loc_000C654A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6559; /* je: equal / zero */

loc_000C654F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6559; /* je: equal / zero */

loc_000C6554: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C6579; /* jne: not equal / not zero */

loc_000C6559: ;
    eax = MEM32(0x899D30);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C6569u); RECOMP_ABI_CALL(0x0001FA2Eu, sub_0001FA2E); /* call 0x0001FA2E */

loc_000C6569: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6579; /* je: equal / zero */

loc_000C6570: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_000C6579: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C65C0
 * Original: 0x000C65C0 - 0x000C65C9 (9 bytes, 2 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C65C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000C65C0: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C65D0
 * Original: 0x000C65D0 - 0x000C65D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C65D0(void)
{

loc_000C65D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C65E0
 * Original: 0x000C65E0 - 0x000C667E (158 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C65E0(void)
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

loc_000C65E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    xmm4 = XMM_SCALAR(MEMF(0x899D0C)); /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    ecx = MEM32(ecx + 0x10);
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x899D08)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C666D; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_000C6648: ;
    xmm6 = xmm4; /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] / xmm6.f[0]; /* divss */
    _fca = xmm5.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C666D; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm3.f[0]) */

loc_000C6668: ;
    MEMF(esp) = xmm5.f[0]; /* movss */

loc_000C666D: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6677; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000C6672: ;
    MEMF(esp) = xmm5.f[0]; /* movss */

loc_000C6677: ;
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C66B0
 * Original: 0x000C66B0 - 0x000C6764 (180 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C66B0(void)
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

loc_000C66B0: ;
    SET_LO8(eax, MEM8(0x8EB40C));
    ecx = 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000C66DD; /* jne: not equal / not zero */

loc_000C66C1: ;
    eax = MEM32(0x8EB40C);
    xmm0 = XMM_SCALAR(MEMF(0x7B9810)); /* movss */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8EB40C) = eax;
    MEMF(0x8EB408) = xmm0.f[0]; /* movss */

loc_000C66DD: ;
    eax = MEM32(esp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C66F0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000C66EE: ;
    goto loc_000C66F8;

loc_000C66F0: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */

loc_000C66F8: ;
    xmm2 = XMM_SCALAR(MEMF(0x8EB408)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000C6758; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_000C6705: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(0x7AA840)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000C6758; /* ja: above (unsigned >) */

loc_000C6729: ;
    xmm2 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6738; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000C6733: ;
    xmm1 = xmm2; /* movaps */
    goto loc_000C673F;

loc_000C6738: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_000C673F: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C674F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000C674A: ;
    xmm0 = xmm2; /* movaps */
    goto loc_000C6753;

loc_000C674F: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_000C6753: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C675E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000C6758: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C675E: ;
    SET_LO8(eax, LO8(ecx));
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
 * sub_000C67A0
 * Original: 0x000C67A0 - 0x000C6864 (196 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C67A0(void)
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

loc_000C67A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    edx = MEM32(esp + 8);
    eax = MEM32(ecx + 0xC);
    xmm5 = XMM_SCALAR(MEMF(0x899D0C)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x899D08)); /* movss */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm3 = XMM_SCALAR(MEMF(eax + edx + 8)); /* movss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm6.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C683D; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm0.f[0]) */

loc_000C6815: ;
    xmm7 = xmm5; /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm4.f[0] = xmm4.f[0] / xmm7.f[0]; /* divss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C683D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_000C6838: ;
    MEMF(esp) = xmm2.f[0]; /* movss */

loc_000C683D: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C685D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000C6842: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C685D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm6.f[0]) */

loc_000C6858: ;
    MEMF(esp) = xmm6.f[0]; /* movss */

loc_000C685D: ;
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C68A0
 * Original: 0x000C68A0 - 0x000C6963 (195 bytes, 55 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C68A0(void)
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

loc_000C68A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm5.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000C694A; /* jne: not equal / not zero */

loc_000C68B5: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(esp + 8);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    ecx = MEM32(eax + 0x10);
    xmm4 = XMM_SCALAR(MEMF(0x899D0C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x899D08)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6936; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_000C6918: ;
    xmm6 = xmm4; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm6.f[0]; /* divss */
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6936; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm2.f[0]) */

loc_000C6933: ;
    xmm2 = xmm5; /* movaps */

loc_000C6936: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C693E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000C693B: ;
    xmm2 = xmm5; /* movaps */

loc_000C693E: ;
    MEMF(esp) = xmm2.f[0]; /* movss */

loc_000C6943: ;
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_000C694A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C6943; /* jge: greater or equal (signed >=) */

loc_000C6950: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C695Fu); RECOMP_ABI_CALL(0x00012B26u, sub_00012B26); /* call 0x00012B26 */

loc_000C695F: ;
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C69A0
 * Original: 0x000C69A0 - 0x000C69F2 (82 bytes, 35 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C69A0(void)
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

loc_000C69A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000C69B9u); RECOMP_ABI_CALL(0x00016712u, sub_00016712); /* call 0x00016712 */

loc_000C69B9: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(0x7AA840)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000C69EC; /* jnp: not parity */

loc_000C69CB: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000C69DEu); RECOMP_ABI_CALL(0x00014E26u, sub_00014E26); /* call 0x00014E26 */

loc_000C69DE: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(0x7AA840)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */

loc_000C69EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C6A10
 * Original: 0x000C6A10 - 0x000C6BE4 (468 bytes, 132 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6A10(void)
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

loc_000C6A10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x899D10)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6A77; /* jb: below (unsigned <) (xmm1.f[0] vs xmm4.f[0]) */

loc_000C6A72: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000C6A9F; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000C6A77: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6A85; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_000C6A7C: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2 = xmm1; /* movaps */
    goto loc_000C6A9C;

loc_000C6A85: ;
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000C6A9C; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000C6A98: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_000C6A9C: ;
    xmm1 = xmm2; /* movaps */

loc_000C6A9F: ;
    xmm3 = XMM_SCALAR(MEMF(0x7C5FF4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000C6AB0; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_000C6AAC: ;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_000C6AB0: ;
    xmm2 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(0x7C5FF0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000C6AC4; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_000C6AC0: ;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_000C6AC4: ;
    eax = MEM32(ecx + 0x20);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x60); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6AD6; /* jb: below (unsigned <) (xmm1.f[0] vs xmm4.f[0]) */

loc_000C6AD1: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000C6B04; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000C6AD6: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6AE1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_000C6ADB: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_000C6B04;

loc_000C6AE1: ;
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6AF6; /* jb: below (unsigned <) (xmm1.f[0] vs xmm5.f[0]) */

loc_000C6AED: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    goto loc_000C6B04;

loc_000C6AF6: ;
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm1 = xmm5; /* movaps */

loc_000C6B04: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E999C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7D0); /* mulss */
    edx = MEM32(esp + 0x20);
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95EC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6B6C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000C6B2A: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6B46; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000C6B2F: ;
    eax = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x8F95F4)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_000C6B46: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000C6BB8; /* jnp: not parity */

loc_000C6B55: ;
    ecx = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_000C6B6C: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6B92; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_000C6B71: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0x8F95F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C6B80u); RECOMP_ABI_CALL(0x0002F109u, sub_0002F109); /* call 0x0002F109 */

loc_000C6B80: ;
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_000C6B92: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000C6BB8; /* jnp: not parity */

loc_000C6BA1: ;
    eax = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_000C6BB8: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F95F4)); /* movss */
    esi = MEM32(esp + 0x20);
    MEMF(esi) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000C6BCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C6BCAu); } /* indirect call */
    }

loc_000C6BCD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6BDD; /* je: equal / zero */

loc_000C6BD1: ;
    ecx = esi;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x000C6BDDu); RECOMP_ABI_CALL(0x0002651Du, sub_0002651D); /* call 0x0002651D */

loc_000C6BDD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C6C60
 * Original: 0x000C6C60 - 0x000C6E1D (445 bytes, 115 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6C60(void)
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

loc_000C6C60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = ecx;
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x24) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    ecx = MEM32(esp);
    MEM32(edx) = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi);
    MEM32(edx + 8) = ecx;
    eax = MEM32(0x895AB0);
    ecx = MEM32(eax);
    eax = MEM32(0x8EADA0);
    _fb = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C6CF5; /* jge: greater or equal (signed >=) */

loc_000C6CE5: ;
    MEM32(edx + 0xC) = 0x899DC0;
    MEM32(edx + 0x10) = 0x899E40;
    goto loc_000C6D28;

loc_000C6CF5: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    eax = esp;
    PUSH32(esp, edx);
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000C6D03u); RECOMP_ABI_CALL(0x000312F6u, sub_000312F6); /* call 0x000312F6 */

loc_000C6D03: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6D1A; /* je: equal / zero */

loc_000C6D0A: ;
    MEM32(edx + 0xC) = 0x899D80;
    MEM32(edx + 0x10) = 0x899E20;
    goto loc_000C6D28;

loc_000C6D1A: ;
    MEM32(edx + 0xC) = 0x899D40;
    MEM32(edx + 0x10) = 0x899E00;

loc_000C6D28: ;
    eax = MEM32(esi);
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    POP32(esp, esi);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    ecx = MEM32(esp);
    fp_top() = -fp_top(); /* fchs */
    MEM32(edx + 0x1C) = ecx;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    MEM32(edx + 0x20) = eax;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp);
    MEM32(edx + 0x2C) = ecx;
    ecx = MEM32(edx + 0x10);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    MEM32(edx + 0x30) = eax;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    eax = MEM32(esp);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEM32(edx + 0x14) = eax;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 4);
    MEM32(edx + 0x18) = ecx;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 4); /* addss */
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(edx + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    ecx = MEM32(esp);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM32(edx + 0x28) = eax;
    MEM32(edx + 0x24) = ecx;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    MEMF(edx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 4); /* addss */
    MEMF(edx + 0x28) = xmm0.f[0]; /* movss */
    eax = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C6E90
 * Original: 0x000C6E90 - 0x000C7078 (488 bytes, 138 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6E90(void)
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

loc_000C6E90: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    xmm4 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 0x28); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x18); /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x24); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x14); /* subss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    PUSH32(esp, edi);
    edi = 4;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6F0B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_000C6EF9: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    goto loc_000C6F3A;

loc_000C6F0B: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C7032; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000C6F2A: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;

loc_000C6F3A: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x899D10)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6F60; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000C6F5B: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000C6F7F; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000C6F60: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6F6B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000C6F65: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000C6F7F;

loc_000C6F6B: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000C6F7F; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000C6F7B: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000C6F7F: ;
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6F95; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000C6F90: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000C6FB1; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000C6F95: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C6FA0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000C6F9A: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000C6FB1;

loc_000C6FA0: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000C6FB1; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000C6FAD: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000C6FB1: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C6FC6u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_000C6FC6: ;
    eax = MEM32(esi + 0xC);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B43AC); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x30); /* addss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C701B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000C6FF5: ;
    esi = MEM32(esi + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000C7000: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi); /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000C7025; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_000C7012: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C7000; /* jl: less (signed <) */

loc_000C701B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000C7025: ;
    edi = eax + 1;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000C7032: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi); /* subss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C701B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000C706E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C7100
 * Original: 0x000C7100 - 0x000C74FF (1023 bytes, 280 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7100(void)
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

loc_000C7100: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x114));
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x8F6A27));
    PUSH32(esp, ebp);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000C711F; /* je: equal / zero */

loc_000C711B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C713D; /* jne: not equal / not zero */

loc_000C711F: ;
    edi = MEM32(esp + 0x120);
    SET_LO8(eax, MEM8(edi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000C7144; /* jl: less (signed <) */

loc_000C7130: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x114)) >> 32) & 1);
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_000C713D: ;
    edi = MEM32(esp + 0x120);

loc_000C7144: ;
    eax = MEM32(esp + 0x124);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x58;
    MEM32(esp + 0x48) = ebp;
    MEM32(esp + 0x4C) = ebp;
    MEM32(esp + 0x50) = ebp;
    MEM32(esp + 0x54) = ebp;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000C716Bu); RECOMP_ABI_CALL(0x0002EFFBu, sub_0002EFFB); /* call 0x0002EFFB */

loc_000C716B: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    edx = MEM32(ecx * 4 + 0x8F0040);
    ecx = MEM32(edx + 4);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x34)) >> 32) & 1);
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000C7183u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000C7183: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000C72C8; /* je: equal / zero */

loc_000C718D: ;
    ebp = 3;

loc_000C7192: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000C72AF; /* je: equal / zero */

loc_000C719A: ;
    ecx = esi;
    PUSH32(esp, 0x000C71A1u); RECOMP_ABI_CALL(0x0001867Au, sub_0001867A); /* call 0x0001867A */

loc_000C71A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C71AE; /* jne: not equal / not zero */

loc_000C71A5: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C72AF; /* jne: not equal / not zero */

loc_000C71AE: ;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, 0x000C71BEu); RECOMP_ABI_CALL(0x00016D7Au, sub_00016D7A); /* call 0x00016D7A */

loc_000C71BE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000C722B; /* jle: less or equal (signed <=) */

loc_000C71C4: ;
    eax = MEM32(esi + 0x20);
    xmm3 = XMM_SCALAR(MEMF(0x7C5F2C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esp + 0x54;
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C7225u); RECOMP_ABI_CALL(0x00016D7Au, sub_00016D7A); /* call 0x00016D7A */

loc_000C7225: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000C722B; /* jge: greater or equal (signed >=) */

loc_000C7229: ;
    edi = eax;

loc_000C722B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000C72A8; /* jge: greater or equal (signed >=) */

loc_000C7230: ;
    edx = MEM32(esp + 0x128);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C7244u); RECOMP_ABI_CALL(0x00016712u, sub_00016712); /* call 0x00016712 */

loc_000C7244: ;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x7AA840)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000C7276; /* jnp: not parity */

loc_000C7258: ;
    eax = MEM32(esp + edi * 4 + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x000C726Eu); RECOMP_ABI_CALL(0x00014E26u, sub_00014E26); /* call 0x00014E26 */

loc_000C726E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_000C7276: ;
    edx = MEM32(esp + edi * 4 + 0x40);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = esp + edi * 4 + 0x40;
    eax = edx + edi * 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    MEMF(esp + eax + 0xD4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C72A8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000C729E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + eax + 0x84) = esi;
    MEM32(ecx) = edx;

loc_000C72A8: ;
    edi = MEM32(esp + 0x128);

loc_000C72AF: ;
    PUSH32(esp, 1);
    ecx = esi + 0x218;
    PUSH32(esp, 0x000C72BCu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000C72BC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C7192; /* jne: not equal / not zero */

loc_000C72C6: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C72C8: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 0x40;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = eax;
    /* nop */

loc_000C72E0: ;
    edx = MEM32(eax);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000C73BF; /* jle: less or equal (signed <=) */

loc_000C72EC: ;
    MEM32(esp + 0x1C) = edx;
    edi = ecx;
    goto loc_000C7300;

    /* nop */
    goto loc_000C7300;

    /* nop */

loc_000C7300: ;
    xmm0 = XMM_SCALAR(MEMF(esp + edi + 0xD4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    MEMF(esp + esi * 4 + 0x28) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C7392; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000C7318: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C732A; /* jne: not equal / not zero */

loc_000C731D: ;
    eax = MEM32(esp + edi + 0x84);
    MEM32(esp + 0x14) = eax;
    goto loc_000C7390;

loc_000C732A: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + ebx * 4 + 0x28); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C733E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + ebx * 4 + 0x28)) */

loc_000C7331: ;
    ecx = MEM32(esp + edi + 0x84);
    MEM32(esp + 0x14) = ecx;
    goto loc_000C7390;

loc_000C733E: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + ebx * 4 + 0x28); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000C7392; /* jp: parity */

loc_000C7349: ;
    ebp = MEM32(esp + edi + 0x84);
    edx = MEM32(esp + 0x128);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C735Eu); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_000C735E: ;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x130);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + eax * 4 + 0x8C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C737Du); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_000C737D: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000C7392; /* jbe: below or equal (unsigned <=) */

loc_000C738C: ;
    MEM32(esp + 0x14) = ebp;

loc_000C7390: ;
    ebx = esi;

loc_000C7392: ;
    eax = MEM32(esp + 0x1C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000C7300; /* jl: less (signed <) */

loc_000C73A2: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C74EE; /* jne: not equal / not zero */

loc_000C73AE: ;
    edi = MEM32(esp + 0x128);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C73BF: ;
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x14)) >> 32) & 1);
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(5)) >> 32) & 1);
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x50 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000C72E0; /* jl: less (signed <) */

loc_000C73E1: ;
    eax = MEM32(edi + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7C5FF8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C74EE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7C5FF8)) */

loc_000C73F9: ;
    SET_LO8(eax, MEM8(esp + 0x134));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C74EE; /* jne: not equal / not zero */

loc_000C7408: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x8F00FC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000C741Eu); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000C741E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000C74EE; /* je: equal / zero */

loc_000C7428: ;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, 0x000C7438u); RECOMP_ABI_CALL(0x00016D7Au, sub_00016D7A); /* call 0x00016D7A */

loc_000C7438: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000C74EE; /* je: equal / zero */

loc_000C7441: ;
    ecx = MEM32(esi + 0x20);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x38); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7C3A04)); /* movss */
    if ((_fca > _fcb)) goto loc_000C745D; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(ecx + 0x38)) */

loc_000C7455: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C3A00)); /* movss */

loc_000C745D: ;
    eax = MEM32(edi + 0x20);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x899D10)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C74AF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000C74AA: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000C74CB; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_000C74AF: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C74BA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000C74B4: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_000C74CB;

loc_000C74BA: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000C74CB; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000C74C7: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_000C74CB: ;
    edx = MEM32(esp + 0x130);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C74EAu); RECOMP_ABI_CALL(0x0001261Cu, sub_0001261C); /* call 0x0001261C */

loc_000C74EA: ;
    MEM32(esp + 0x14) = eax;

loc_000C74EE: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x114)) >> 32) & 1);
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C7600
 * Original: 0x000C7600 - 0x000C7622 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7600(void)
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

loc_000C7600: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000C761D; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000C7617: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_000C761D: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C7630
 * Original: 0x000C7630 - 0x000C7652 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7630(void)
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

loc_000C7630: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000C764D; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000C7647: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_000C764D: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C7660
 * Original: 0x000C7660 - 0x000C7690 (48 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7660(void)
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

loc_000C7660: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C7674; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000C7671: ;
    xmm0 = xmm1; /* movaps */

loc_000C7674: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000C768B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000C7685: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_000C768B: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C76A0
 * Original: 0x000C76A0 - 0x000C76BB (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000C76A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000C76A0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_top()); /* fmul st(0), st(0) */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C76D0
 * Original: 0x000C76D0 - 0x000C7700 (48 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C76D0(void)
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

loc_000C76D0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C76E4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000C76E1: ;
    xmm0 = xmm1; /* movaps */

loc_000C76E4: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000C76FB; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000C76F5: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_000C76FB: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C7710
 * Original: 0x000C7710 - 0x000C7733 (35 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7710(void)
{

loc_000C7710: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C7740
 * Original: 0x000C7740 - 0x000C7764 (36 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7740(void)
{

loc_000C7740: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C7770
 * Original: 0x000C7770 - 0x000C7794 (36 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7770(void)
{

loc_000C7770: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C77A0
 * Original: 0x000C77A0 - 0x000C77E7 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000C77A0(void)
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

loc_000C77A0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B9808); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C77B8; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7B9808)) */

loc_000C77B0: ;
    fp_push(MEMF(0x7C6000)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000C77B8: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B9804)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C77CD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000C77C5: ;
    fp_push(MEMF(0x7C64D8)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000C77CD: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_top()); /* fmul st(0), st(0) */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C7800
 * Original: 0x000C7800 - 0x000C7807 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7800(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000C7800: ;
    fp_push(MEMF(ecx + 0x2E8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C7810
 * Original: 0x000C7810 - 0x000C7817 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7810(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000C7810: ;
    fp_push(MEMF(ecx + 0x350)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C7820
 * Original: 0x000C7820 - 0x000C7827 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7820(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000C7820: ;
    fp_push(MEMF(ecx + 0x35C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C7830
 * Original: 0x000C7830 - 0x000C7837 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7830(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000C7830: ;
    fp_push(MEMF(ecx + 0x360)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C7840
 * Original: 0x000C7840 - 0x000C7849 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7840(void)
{

loc_000C7840: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C7850
 * Original: 0x000C7850 - 0x000C785E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7850(void)
{

loc_000C7850: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C7870
 * Original: 0x000C7870 - 0x000C7874 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7870(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000C7870: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C7880
 * Original: 0x000C7880 - 0x000C788D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C7880: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000C7890
 * Original: 0x000C7890 - 0x000C78A7 (23 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7890(void)
{

loc_000C7890: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C78B0
 * Original: 0x000C78B0 - 0x000C78B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C78B0(void)
{

loc_000C78B0: ;
    eax = ecx + 0x248;
    esp += 4; return; /* ret */

}

/**
 * sub_000C78C0
 * Original: 0x000C78C0 - 0x000C78C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C78C0(void)
{

loc_000C78C0: ;
    eax = ecx + 0x248;
    esp += 4; return; /* ret */

}

/**
 * sub_000C78D0
 * Original: 0x000C78D0 - 0x000C78D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C78D0(void)
{

loc_000C78D0: ;
    eax = ecx + 0x3BC;
    esp += 4; return; /* ret */

}

/**
 * sub_000C78E0
 * Original: 0x000C78E0 - 0x000C78E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C78E0(void)
{

loc_000C78E0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C78F0
 * Original: 0x000C78F0 - 0x000C78F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C78F0(void)
{

loc_000C78F0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7900
 * Original: 0x000C7900 - 0x000C7904 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7900(void)
{

loc_000C7900: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7910
 * Original: 0x000C7910 - 0x000C7913 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7910(void)
{

loc_000C7910: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7920
 * Original: 0x000C7920 - 0x000C7924 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7920(void)
{

loc_000C7920: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7930
 * Original: 0x000C7930 - 0x000C7934 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7930(void)
{

loc_000C7930: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7940
 * Original: 0x000C7940 - 0x000C7944 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7940(void)
{

loc_000C7940: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7950
 * Original: 0x000C7950 - 0x000C7954 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7950(void)
{

loc_000C7950: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7960
 * Original: 0x000C7960 - 0x000C7964 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7960(void)
{

loc_000C7960: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7970
 * Original: 0x000C7970 - 0x000C7974 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7970(void)
{

loc_000C7970: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7980
 * Original: 0x000C7980 - 0x000C7984 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7980(void)
{

loc_000C7980: ;
    SET_LO8(eax, MEM8(ecx + 0xD));
    esp += 4; return; /* ret */

}

/**
 * sub_000C7990
 * Original: 0x000C7990 - 0x000C7994 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7990(void)
{

loc_000C7990: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000C79A0
 * Original: 0x000C79A0 - 0x000C79A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C79A0(void)
{

loc_000C79A0: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000C79B0
 * Original: 0x000C79B0 - 0x000C79B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C79B0(void)
{

loc_000C79B0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000C79C0
 * Original: 0x000C79C0 - 0x000C79C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C79C0(void)
{

loc_000C79C0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000C79D0
 * Original: 0x000C79D0 - 0x000C79D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C79D0(void)
{

loc_000C79D0: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    esp += 4; return; /* ret */

}

/**
 * sub_000C79E0
 * Original: 0x000C79E0 - 0x000C79E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C79E0(void)
{

loc_000C79E0: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}
