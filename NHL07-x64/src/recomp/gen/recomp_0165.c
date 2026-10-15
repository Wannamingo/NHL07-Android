/**
 * nhl_07_recomp - Recompiled code chunk 165
 * Functions: 250 (0x00332C10 - 0x003393E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00332C10
 * Original: 0x00332C10 - 0x00332D4E (318 bytes, 68 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332C10: ;
    eax = MEM32(esp + 4);
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x3A00)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x3A04)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x7C404C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x82A1D4); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x7AD340)); /* movss */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00332C43: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    edx = 2;

loc_00332C50: ;
    edi = edx + -2;
    xmm2.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x3A04); /* subss */
    edi = edx + -1;
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] - MEMF(ecx + 0x3A00); /* subss */
    MEMF(eax + -12) = xmm2.f[0]; /* movss */
    MEMF(eax + -20) = xmm5.f[0]; /* movss */
    MEMF(eax + -16) = xmm3.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x3A04); /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] - MEMF(ecx + 0x3A00); /* subss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + -8) = xmm5.f[0]; /* movss */
    MEMF(eax + -4) = xmm3.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x3A04); /* subss */
    edi = edx + 1;
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] - MEMF(ecx + 0x3A00); /* subss */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm5.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x3A04); /* subss */
    edi = edx + 2;
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] - MEMF(ecx + 0x3A00); /* subss */
    MEMF(eax + 0x18) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x3A04); /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] - MEMF(ecx + 0x3A00); /* subss */
    MEMF(eax + 0x1C) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm2.f[0]; /* movss */
    edi = edx + -2;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00332C50; /* jle: less or equal (signed <=) */

loc_00332D3F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00332C43; /* jle: less or equal (signed <=) */

loc_00332D49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00332DA0
 * Original: 0x00332DA0 - 0x00332ECC (300 bytes, 94 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00332DA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7ABD7C)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(0x7BA41C)); /* movss */
    edi = eax;
    MEM32(esp + 0x10) = edi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    esi = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00332E7E; /* jl: less (signed <) */

loc_00332DE2: ;
    xmm2 = XMM_SCALAR(MEMF(0x7C404C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x82A1D4)); /* movss */
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = esi;
    /* nop */

loc_00332E00: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    if (CMP_L(_fas, _fbs)) goto loc_00332E30; /* jl: less (signed <) */

loc_00332E0E: ;
    edx = MEM32(esp + 0x10);

loc_00332E12: ;
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm3.f[0]; /* movss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00332E12; /* jle: less or equal (signed <=) */

loc_00332E2B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00332E62; /* jg: greater (signed >) */

loc_00332E30: ;
    edi = eax + eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + ebp;
    edx = esi + edx * 8;
    esi = esi + edi * 8;
    edi = 0x41;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00332E47: ;
    ecx = MEM32(esi);
    MEM32(edx) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(edx + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00332E47; /* jne: not equal / not zero */

loc_00332E5A: ;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);

loc_00332E62: ;
    ecx = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x208;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x41;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00332E00; /* jle: less or equal (signed <=) */

loc_00332E78: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20 (32-bit) */
    POP32(esp, ebp);
    if (CMP_G(_fas, _fbs)) goto loc_00332EC3; /* jg: greater (signed >) */

loc_00332E7E: ;
    edx = edi + edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x208);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x208);
    edi = 0x21;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00332EA0: ;
    ecx = edx;
    esi = 0x41;

loc_00332EA7: ;
    ebx = MEM32(ecx);
    MEM32(eax) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(eax + 4) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00332EA7; /* jne: not equal / not zero */

loc_00332EBA: ;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x208;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00332EA0; /* jne: not equal / not zero */

loc_00332EC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00332F20
 * Original: 0x00332F20 - 0x00332F4A (42 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332F20(void)
{

loc_00332F20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 2);
    MEM32(esi + 0x1C) = ecx;
    PUSH32(esp, 0x00332F31u); RECOMP_ABI_CALL(0x005589ADu, sub_005589AD); /* call 0x005589AD */

loc_00332F31: ;
    ecx = MEM32(esi + 0x10);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00332F46u); RECOMP_ABI_CALL(0x0055A6ACu, sub_0055A6AC); /* call 0x0055A6AC */

loc_00332F46: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00332F60
 * Original: 0x00332F60 - 0x00332F6D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332F60(void)
{

loc_00332F60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xE0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00332F70
 * Original: 0x00332F70 - 0x00332F78 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332F70(void)
{

loc_00332F70: ;
    eax = ecx;
    MEM16(eax) = 0xFFFF;
    esp += 4; return; /* ret */

}

/**
 * sub_00332F80
 * Original: 0x00332F80 - 0x00332F8B (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332F80(void)
{

loc_00332F80: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00332F90
 * Original: 0x00332F90 - 0x00332F9D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332F90(void)
{

loc_00332F90: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xAC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00332FA0
 * Original: 0x00332FA0 - 0x00332FA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332FA0(void)
{

loc_00332FA0: ;
    eax = MEM32(ecx + 0xAC);
    esp += 4; return; /* ret */

}

/**
 * sub_00332FB0
 * Original: 0x00332FB0 - 0x00332FB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332FB0(void)
{

loc_00332FB0: ;
    SET_LO8(eax, MEM8(ecx + 0x48));
    esp += 4; return; /* ret */

}

/**
 * sub_00332FC0
 * Original: 0x00332FC0 - 0x00332FD2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332FC0(void)
{

loc_00332FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00332FC8u); RECOMP_ABI_CALL(0x00033FB5u, sub_00033FB5); /* call 0x00033FB5 */

loc_00332FC8: ;
    MEM32(esi) = 0x82A1D8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00332FE0
 * Original: 0x00332FE0 - 0x00332FEB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00332FE0: ;
    MEM32(ecx) = 0x82A1D8;
    g_seh_ebp = ebp; sub_000186A7(); return; /* tail jmp 0x000186A7 */

}

/**
 * sub_00332FF0
 * Original: 0x00332FF0 - 0x00333014 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332FF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82A1D8;
    PUSH32(esp, 0x00332FFEu); RECOMP_ABI_CALL(0x000186A7u, sub_000186A7); /* call 0x000186A7 */

loc_00332FFE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033300E; /* je: equal / zero */

loc_00333005: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033300Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033300B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033300E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00333020
 * Original: 0x00333020 - 0x00333029 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333020(void)
{

loc_00333020: ;
    eax = ecx;
    MEM32(eax) = 0x82A0C0;
    esp += 4; return; /* ret */

}

/**
 * sub_00333030
 * Original: 0x00333030 - 0x00333092 (98 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00333030: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x82A218;
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM8(eax + 0x4C) = LO8(ecx);
    MEM8(eax + 0x4D) = LO8(ecx);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = edx;
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x70) = ecx;
    MEMF(eax + 0x7C) = xmm0.f[0]; /* movss */
    MEM32(eax + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003330B0
 * Original: 0x003330B0 - 0x003330B7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003330B0(void)
{

loc_003330B0: ;
    eax = MEM32(ecx + 0x3C);
    MEM32(ecx + 0x74) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003330C0
 * Original: 0x003330C0 - 0x003330EC (44 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003330C0(void)
{

loc_003330C0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x44) = xmm1.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00333100
 * Original: 0x00333100 - 0x0033315A (90 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333100(void)
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

loc_00333100: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00333125; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0033311E: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 4; return; /* ret */

loc_00333125: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0xC); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB1C8); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00333145; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033313E: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 4; return; /* ret */

loc_00333145: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) - fp_top()); /* fsubr dword ptr [0x7a9980] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00333170
 * Original: 0x00333170 - 0x00333205 (149 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333170(void)
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

loc_00333170: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x78); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00333192; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0033318B: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_00333192: ;
    xmm1 = XMM_SCALAR(MEMF(0x829354)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00333200; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033319F: ;
    eax = MEM32(0x8BFE68);
    edx = MEM32(0x8BFE60);
    ecx = 0x8BFE60;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003331B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003331B3u); } /* indirect call */
    }

loc_003331B6: ;
    _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_003331CB; /* jge: greater or equal (signed >=) */

loc_003331C5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_003331CB: ;
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 4)); /* fidiv dword ptr [esp + 4] */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8298C8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x78); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_003331FB; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_003331F8: ;
    xmm0 = xmm1; /* movaps */

loc_003331FB: ;
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */

loc_00333200: ;
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
 * sub_00333230
 * Original: 0x00333230 - 0x0033329D (109 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333230(void)
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

loc_00333230: ;
    xmm0 = XMM_SCALAR(MEMF(0x829354)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x78); /* comiss */
    if ((_fca > _fcb)) goto loc_00333298; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0x78)) */

loc_00333244: ;
    eax = MEM32(0x8BFE68);
    edx = MEM32(0x8BFE60);
    ecx = 0x8BFE60;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033325Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00333258u); } /* indirect call */
    }

loc_0033325B: ;
    _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00333270; /* jge: greater or equal (signed >=) */

loc_0033326A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00333270: ;
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 4)); /* fidiv dword ptr [esp + 4] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00333293; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00333290: ;
    xmm0 = xmm1; /* movaps */

loc_00333293: ;
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */

loc_00333298: ;
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
 * sub_003332C0
 * Original: 0x003332C0 - 0x003332E5 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003332C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003332C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0x11;
    /* nop */

loc_003332D0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003332D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003332D6u); } /* indirect call */
    }

loc_003332D9: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x84;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003332D0; /* jne: not equal / not zero */

loc_003332E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003332F0
 * Original: 0x003332F0 - 0x00333315 (37 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003332F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003332F0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x84);
    edx = MEM32(eax + ecx + 0x74);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x78);
    MEM32(ecx + 4) = edx;
    SET_LO8(eax, MEM8(eax + 0x4D));
    MEM8(ecx + 8) = LO8(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00333320
 * Original: 0x00333320 - 0x0033373E (1054 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00333320: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8FCB78) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x30) = ecx;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(eax + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(eax + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(eax + 0x80, xmm0); /* movaps */
    SET_LO8(edx, MEM8(0x8FCB7E));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x8FCB7D));
    MEM8(esp + 8) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8FCB7C));
    MEM8(esp + 4) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8C4650));
    MEM8(eax + 0x253) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 4));
    MEM8(eax + 0x252) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    MEM8(eax + 0x251) = LO8(ebx);
    MEM8(eax + 0x250) = LO8(edx);
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x34) = ecx;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(eax + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(eax + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(eax + 0xB0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(eax + 0xC0, xmm0); /* movaps */
    SET_LO8(ebx, MEM8(0x8FCB7D));
    SET_LO8(edx, MEM8(0x8FCB7E));
    MEM8(esp + 8) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8FCB7C));
    MEM8(esp + 4) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8C4650));
    MEM8(eax + 0x257) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 4));
    MEM8(eax + 0x256) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    MEM8(eax + 0x255) = LO8(ebx);
    MEM8(eax + 0x254) = LO8(edx);
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x38) = ecx;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(eax + 0xD0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(eax + 0xE0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(eax + 0xF0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(eax + 0x100, xmm0); /* movaps */
    SET_LO8(ebx, MEM8(0x8FCB7D));
    SET_LO8(edx, MEM8(0x8FCB7E));
    MEM8(esp + 8) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8FCB7C));
    MEM8(esp + 4) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8C4650));
    MEM8(eax + 0x25B) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 4));
    MEM8(eax + 0x25A) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    MEM8(eax + 0x259) = LO8(ebx);
    MEM8(eax + 0x258) = LO8(edx);
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x3C) = ecx;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(eax + 0x110, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    PUSH32(esp, esi);
    XMM_STORE(eax + 0x120, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(eax + 0x130, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(eax + 0x140, xmm0); /* movaps */
    SET_LO8(ebx, MEM8(0x8FCB7D));
    SET_LO8(edx, MEM8(0x8FCB7E));
    MEM8(esp + 0xC) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8FCB7C));
    MEM8(esp + 8) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8C4650));
    MEM8(eax + 0x25F) = LO8(ebx);
    MEM8(eax + 0x25C) = LO8(edx);
    SET_LO8(ebx, MEM8(esp + 8));
    MEM8(eax + 0x25E) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    MEM8(eax + 0x25D) = LO8(ebx);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x40) = ecx;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(eax + 0x150, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(eax + 0x160, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(eax + 0x170, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(eax + 0x180, xmm0); /* movaps */
    SET_LO8(ebx, MEM8(0x8FCB7D));
    SET_LO8(edx, MEM8(0x8FCB7E));
    MEM8(esp + 0xC) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8FCB7C));
    MEM8(esp + 8) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8C4650));
    MEM8(eax + 0x263) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    MEM8(eax + 0x262) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    MEM8(eax + 0x261) = LO8(ebx);
    MEM8(eax + 0x260) = LO8(edx);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x44) = ecx;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(eax + 0x190, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(eax + 0x1A0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(eax + 0x1B0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(eax + 0x1C0, xmm0); /* movaps */
    SET_LO8(ebx, MEM8(0x8FCB7D));
    SET_LO8(edx, MEM8(0x8FCB7E));
    MEM8(esp + 0xC) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8FCB7C));
    MEM8(esp + 8) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8C4650));
    MEM8(eax + 0x267) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    MEM8(eax + 0x266) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    MEM8(eax + 0x265) = LO8(ebx);
    MEM8(eax + 0x264) = LO8(edx);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x48) = ecx;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(eax + 0x1D0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(eax + 0x1E0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(eax + 0x1F0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(eax + 0x200, xmm0); /* movaps */
    SET_LO8(ebx, MEM8(0x8FCB7D));
    SET_LO8(edx, MEM8(0x8FCB7E));
    MEM8(esp + 0xC) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8FCB7C));
    MEM8(esp + 8) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8C4650));
    MEM8(eax + 0x26B) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    MEM8(eax + 0x26A) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    MEM8(eax + 0x269) = LO8(ebx);
    MEM8(eax + 0x268) = LO8(edx);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x4C) = ecx;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(eax + 0x210, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(eax + 0x220, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(eax + 0x230, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(eax + 0x240, xmm0); /* movaps */
    SET_LO8(ebx, MEM8(0x8FCB7D));
    SET_LO8(edx, MEM8(0x8FCB7E));
    MEM8(esp + 0xC) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8FCB7C));
    MEM8(esp + 8) = LO8(ebx);
    SET_LO8(ebx, MEM8(0x8C4650));
    MEM8(eax + 0x26F) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    MEM8(eax + 0x26E) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    MEM8(eax + 0x26C) = LO8(edx);
    MEM8(eax + 0x26D) = LO8(ebx);
    edx = eax + 0x278;
    esi = 7;
    /* nop */

loc_00333730: ;
    MEM8(edx) = LO8(ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00333730; /* jne: not equal / not zero */

loc_00333738: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00333850
 * Original: 0x00333850 - 0x00333889 (57 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00333850: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0033385Bu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0033385B: ;
    edi = eax;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 8;

loc_00333865: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033387E; /* je: equal / zero */

loc_0033386B: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00333878u); RECOMP_ABI_CALL(0x0055E398u, sub_0055E398); /* call 0x0055E398 */

loc_00333878: ;
    MEM32(esi) = 0;

loc_0033387E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00333865; /* jne: not equal / not zero */

loc_00333884: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003338A0
 * Original: 0x003338A0 - 0x003338BE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003338A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003338A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003338A8u); RECOMP_ABI_CALL(0x00019EC1u, sub_00019EC1); /* call 0x00019EC1 */

loc_003338A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003338B8; /* je: equal / zero */

loc_003338AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003338B5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003338B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003338B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003338D0
 * Original: 0x003338D0 - 0x00333902 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003338D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003338D0: ;
    ecx = MEM32(0x8FCB78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00333901; /* je: equal / zero */

loc_003338DA: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00333901; /* jl: less (signed <) */

loc_003338E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00333901; /* jge: greater or equal (signed >=) */

loc_003338E7: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, 0x20);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    eax = eax + ecx + 0x278;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003338FEu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003338FE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00333901: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00333910
 * Original: 0x00333910 - 0x00333935 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00333910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00333910: ;
    ecx = MEM32(0x8FCB78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00333932; /* je: equal / zero */

loc_0033391A: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00333932; /* jl: less (signed <) */

loc_00333922: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00333932; /* jge: greater or equal (signed >=) */

loc_00333927: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0x278;
    esp += 4; return; /* ret */

loc_00333932: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00333940
 * Original: 0x00333940 - 0x00333961 (33 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00333940: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0033394Du); RECOMP_ABI_CALL(0x000258DEu, sub_000258DE); /* call 0x000258DE */

loc_0033394D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;
    MEM8(esi + 0x48) = LO8(eax);
    MEM32(esi) = 0x82A22C;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00333970
 * Original: 0x00333970 - 0x00333977 (7 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333970(void)
{

loc_00333970: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00333980
 * Original: 0x00333980 - 0x0033398D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333980(void)
{

loc_00333980: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x44) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00333990
 * Original: 0x00333990 - 0x0033399A (10 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333990(void)
{

loc_00333990: ;
    MEM32(ecx + 0x44) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003339A0
 * Original: 0x003339A0 - 0x003339A3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003339A0(void)
{

loc_003339A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003339B0
 * Original: 0x003339B0 - 0x00333A84 (212 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003339B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003339B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x82A25C;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = LO8(ecx);
    edx = eax + 4;
    MEM32(edx + 0x14) = ecx;
    MEM8(edx + 0x18) = LO8(ecx);
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0xF4) = ecx;
    MEM32(eax + 0xF8) = ecx;
    MEM32(eax + 0xFC) = ecx;
    MEM32(eax + 0x100) = ecx;
    MEM32(eax + 0x104) = ecx;
    MEM32(eax + 0x108) = ecx;
    MEM32(eax + 0x10C) = ecx;
    MEM32(eax + 0x110) = ecx;
    MEM32(eax + 0x114) = ecx;
    MEM32(eax + 0x118) = ecx;
    MEM32(eax + 0x124) = ecx;
    MEM32(eax + 0x11C) = ecx;
    MEM32(eax + 0x128) = ecx;
    MEM32(eax + 0x120) = ecx;
    MEM32(eax + 0x12C) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x130) = ecx;
    MEM32(eax + 0x80) = ecx;
    MEM32(eax + 0xF0) = ecx;
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x134) = ecx;
    MEM8(eax + 0x148) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00333AC0
 * Original: 0x00333AC0 - 0x00333ACA (10 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333AC0(void)
{

loc_00333AC0: ;
    MEM8(ecx + 0x148) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00333AD0
 * Original: 0x00333AD0 - 0x00333AD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333AD0(void)
{

loc_00333AD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00333AE0
 * Original: 0x00333AE0 - 0x00333B3D (93 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00333AE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = 1;
    PUSH32(esp, 0x00333AF1u); RECOMP_ABI_CALL(0x00019872u, sub_00019872); /* call 0x00019872 */

loc_00333AF1: ;
    PUSH32(esp, 3);
    esi = eax;
    PUSH32(esp, 0x8243D4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00333B00u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_00333B00: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00333B2F; /* je: equal / zero */

loc_00333B07: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x7FFED0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00333B14u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_00333B14: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00333B2F; /* je: equal / zero */

loc_00333B1B: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x8243BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00333B28u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_00333B28: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00333B36; /* jne: not equal / not zero */

loc_00333B2F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00333B36: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00333B60
 * Original: 0x00333B60 - 0x00333B67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333B60(void)
{

loc_00333B60: ;
    eax = MEM32(ecx + 0x780);
    esp += 4; return; /* ret */

}

/**
 * sub_00333B70
 * Original: 0x00333B70 - 0x00333B9C (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00333B70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00333B8Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00333B8A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00333B92u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_00333B92: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00333B9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00333B97u); } /* indirect call */
    }

loc_00333B9A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00333BB0
 * Original: 0x00333BB0 - 0x00333BDE (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00333BB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00333BCAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00333BCA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00333BD2u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_00333BD2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00333BDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00333BD9u); } /* indirect call */
    }

loc_00333BDC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00333BF0
 * Original: 0x00333BF0 - 0x00333C05 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00333BF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 0x3A)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x3A), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00333C02; /* je: equal / zero */

loc_00333BFA: ;
    SET_LO8(eax, MEM8(eax + 0xC));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_00333C02: ;
    SET_LO8(eax, 2);
    esp += 4; return; /* ret */

}

/**
 * sub_00333C10
 * Original: 0x00333C10 - 0x00333C19 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333C10(void)
{

loc_00333C10: ;
    eax = ecx;
    MEM32(eax) = 0x82A268;
    esp += 4; return; /* ret */

}

/**
 * sub_00333C20
 * Original: 0x00333C20 - 0x00333D3C (284 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00333C20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0xAC);
    ecx = MEM32(0x8FCAD8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    edx = MEM32(ecx);
    SET_LO8(ecx, MEM8(eax + edx + 0x3A));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00333C4E; /* je: equal / zero */

loc_00333C45: ;
    SET_LO8(eax, MEM8(eax + 0xC));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_00333C50;

loc_00333C4E: ;
    SET_LO8(eax, 2);

loc_00333C50: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB8)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xB8), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00333D37; /* je: equal / zero */

loc_00333C5C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + 0x91;
    PUSH32(esp, edi);
    MEM8(ebp + 0xB8) = LO8(eax);
    edi = ebp + 0x84;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = 3;
    /* nop */

loc_00333C80: ;
    SET_LO8(eax, MEM8(ecx + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    SET_LO8(ebx, MEM8(ecx));
    if (CMP_EQ(_fa, _fb)) goto loc_00333CCE; /* je: equal / zero */

loc_00333C89: ;
    SET_LO8(ecx, MEM8(ebp + 0xB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00333CB4; /* je: equal / zero */

loc_00333C94: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00333CB4; /* je: equal / zero */

loc_00333C98: ;
    esi = SX8(LO8(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00333CCE; /* jl: less (signed <) */

loc_00333C9F: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x00333CA6u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00333CA6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00333CCE; /* jae: above or equal (unsigned >=) */

loc_00333CAA: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00333CB2u); RECOMP_ABI_CALL(0x0001686Bu, sub_0001686B); /* call 0x0001686B */

loc_00333CB2: ;
    goto loc_00333CCE;

loc_00333CB4: ;
    esi = SX8(LO8(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00333CCE; /* jl: less (signed <) */

loc_00333CBB: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x00333CC2u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00333CC2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00333CCE; /* jae: above or equal (unsigned >=) */

loc_00333CC6: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00333CCEu); RECOMP_ABI_CALL(0x0001BB22u, sub_0001BB22); /* call 0x0001BB22 */

loc_00333CCE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00333D17; /* je: equal / zero */

loc_00333CD3: ;
    SET_LO8(eax, MEM8(ebp + 0xB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00333CFD; /* je: equal / zero */

loc_00333CDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00333CFD; /* je: equal / zero */

loc_00333CE1: ;
    esi = SX8(LO8(ebx));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00333D17; /* jl: less (signed <) */

loc_00333CE8: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x00333CEFu); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00333CEF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00333D17; /* jae: above or equal (unsigned >=) */

loc_00333CF3: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00333CFBu); RECOMP_ABI_CALL(0x0001686Bu, sub_0001686B); /* call 0x0001686B */

loc_00333CFB: ;
    goto loc_00333D17;

loc_00333CFD: ;
    esi = SX8(LO8(ebx));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00333D17; /* jl: less (signed <) */

loc_00333D04: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x00333D0Bu); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00333D0B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00333D17; /* jae: above or equal (unsigned >=) */

loc_00333D0F: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00333D17u); RECOMP_ABI_CALL(0x0001BB22u, sub_0001BB22); /* call 0x0001BB22 */

loc_00333D17: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00333C80; /* jne: not equal / not zero */

loc_00333D34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00333D37: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00333D90
 * Original: 0x00333D90 - 0x00333E14 (132 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00333D90: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = esi;
    MEM32(esp + 4) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00333E0D; /* jle: less or equal (signed <=) */

loc_00333DAC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = esi + 0x84;

loc_00333DB5: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0xA);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00333DC8u); RECOMP_ABI_CALL(0x0003270Fu, sub_0003270F); /* call 0x0003270F */

loc_00333DC8: ;
    ebp = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00333DF4; /* jle: less or equal (signed <=) */

loc_00333DD0: ;
    esi = MEM32(esp + edi * 4 + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00333DEB; /* jl: less (signed <) */

loc_00333DD8: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x00333DDFu); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00333DDF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00333DEB; /* jae: above or equal (unsigned >=) */

loc_00333DE3: ;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00333DEBu); RECOMP_ABI_CALL(0x0001686Bu, sub_0001686B); /* call 0x0001686B */

loc_00333DEB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00333DD0; /* jl: less (signed <) */

loc_00333DF0: ;
    esi = MEM32(esp + 0x14);

loc_00333DF4: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xB0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00333DB5; /* jl: less (signed <) */

loc_00333E0A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00333E0D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00333E40
 * Original: 0x00333E40 - 0x00333EC4 (132 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00333E40: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = esi;
    MEM32(esp + 4) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00333EBD; /* jle: less or equal (signed <=) */

loc_00333E5C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = esi + 0x84;

loc_00333E65: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0xA);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00333E78u); RECOMP_ABI_CALL(0x0003270Fu, sub_0003270F); /* call 0x0003270F */

loc_00333E78: ;
    ebp = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00333EA4; /* jle: less or equal (signed <=) */

loc_00333E80: ;
    esi = MEM32(esp + edi * 4 + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00333E9B; /* jl: less (signed <) */

loc_00333E88: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x00333E8Fu); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00333E8F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00333E9B; /* jae: above or equal (unsigned >=) */

loc_00333E93: ;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00333E9Bu); RECOMP_ABI_CALL(0x0001BB22u, sub_0001BB22); /* call 0x0001BB22 */

loc_00333E9B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00333E80; /* jl: less (signed <) */

loc_00333EA0: ;
    esi = MEM32(esp + 0x14);

loc_00333EA4: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xB0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00333E65; /* jl: less (signed <) */

loc_00333EBA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00333EBD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00333EF0
 * Original: 0x00333EF0 - 0x00333EFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333EF0(void)
{

loc_00333EF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xB4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00333F00
 * Original: 0x00333F00 - 0x00333F2E (46 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00333F00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00333F29; /* je: equal / zero */

loc_00333F0C: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00333F10: ;
    eax = MEM32(esi * 4 + 0x8C4654);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00333F1Fu); RECOMP_ABI_CALL(0x0002C98Bu, sub_0002C98B); /* call 0x0002C98B */

loc_00333F1F: ;
    MEM8(esi + edi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00333F10; /* jl: less (signed <) */

loc_00333F28: ;
    POP32(esp, esi);

loc_00333F29: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00333F40
 * Original: 0x00333F40 - 0x0033407C (316 bytes, 112 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00333F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00333F40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x82A29C);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x00333F53u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_00333F53: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00333F64; /* je: equal / zero */

loc_00333F5A: ;
    POP32(esp, edi);
    eax = 0x28;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00333F64: ;
    PUSH32(esp, 0x82A290);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00333F6Fu); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_00333F6F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00333F80; /* je: equal / zero */

loc_00333F76: ;
    POP32(esp, edi);
    eax = 0x2E;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00333F80: ;
    PUSH32(esp, 0x82A284);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00333F8Bu); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_00333F8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00333F9C; /* je: equal / zero */

loc_00333F92: ;
    POP32(esp, edi);
    eax = 0x2F;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00333F9C: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x82A278);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00333FAAu); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_00333FAA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00333FBB; /* je: equal / zero */

loc_00333FB1: ;
    POP32(esp, edi);
    eax = 0x29;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00333FBB: ;
    PUSH32(esp, 0x82A26C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00333FC6u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_00333FC6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00333FE1; /* je: equal / zero */

loc_00333FCD: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00333FD6u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_00333FD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x29) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x29;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00333FE1: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x7E8D50);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00333FF6u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_00333FF6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00334002; /* je: equal / zero */

loc_00333FFD: ;
    ebp = 0x12;

loc_00334002: ;
    PUSH32(esp, 0x7DE674);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033400Du); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0033400D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00334026; /* jne: not equal / not zero */

loc_00334014: ;
    PUSH32(esp, 0x829C38);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033401Fu); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0033401F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033402B; /* je: equal / zero */

loc_00334026: ;
    ebx = 0x14;

loc_0033402B: ;
    PUSH32(esp, 0x829C4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00334036u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_00334036: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00334042; /* je: equal / zero */

loc_0033403D: ;
    edi = 1;

loc_00334042: ;
    PUSH32(esp, 0x829C44);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033404Du); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0033404D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00334059; /* je: equal / zero */

loc_00334054: ;
    edi = 2;

loc_00334059: ;
    PUSH32(esp, 0x829C3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00334064u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_00334064: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00334070; /* je: equal / zero */

loc_0033406B: ;
    edi = 3;

loc_00334070: ;
    eax = ebx + ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003340D0
 * Original: 0x003340D0 - 0x003341B0 (224 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003340D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003340D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x40;
    PUSH32(esp, 0x7E8D50);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003340E2u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_003340E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003340F6; /* je: equal / zero */

loc_003340E9: ;
    MEM32(edi + 0x130) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003340F6: ;
    PUSH32(esp, 0x7E9DA4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00334101u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_00334101: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00334115; /* je: equal / zero */

loc_00334108: ;
    MEM32(edi + 0x130) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334115: ;
    PUSH32(esp, 0x82A29C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00334120u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_00334120: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00334134; /* je: equal / zero */

loc_00334127: ;
    MEM32(edi + 0x130) = 2;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334134: ;
    PUSH32(esp, 0x82A290);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033413Fu); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0033413F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00334153; /* je: equal / zero */

loc_00334146: ;
    MEM32(edi + 0x130) = 3;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334153: ;
    PUSH32(esp, 0x82A284);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033415Eu); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0033415E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00334172; /* je: equal / zero */

loc_00334165: ;
    MEM32(edi + 0x130) = 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334172: ;
    PUSH32(esp, 0x82A278);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033417Du); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0033417D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00334191; /* je: equal / zero */

loc_00334184: ;
    MEM32(edi + 0x130) = 5;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334191: ;
    PUSH32(esp, 0x82A26C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033419Cu); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0033419C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x130) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003341F0
 * Original: 0x003341F0 - 0x00334323 (307 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003341F0(void)
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

loc_003341F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, edi);
    eax = 1;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x8FCB8C);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0xC0);
    esi = ecx + 0x50;
    ecx = 0x10;
    edi = esp + 0x50;
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
    ecx = MEM32(eax + 0xC0);
    esi = ecx + 0x90;
    ecx = 0x10;
    edi = esp + 0x90;
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
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00334285u); RECOMP_ABI_CALL(0x00557980u, sub_00557980); /* call 0x00557980 */

loc_00334285: ;
    ecx = MEM32(ebp + 0xC);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00334297u); RECOMP_ABI_CALL(0x00012B99u, sub_00012B99); /* call 0x00012B99 */

loc_00334297: ;
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003342ADu); RECOMP_ABI_CALL(0x00012B99u, sub_00012B99); /* call 0x00012B99 */

loc_003342AD: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AD428); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003342D9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AD428)) */

loc_003342BC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x30, xmm1); /* movaps */

loc_003342D9: ;
    eax = MEM32(esp + 0x18);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003342EB; /* jge: greater or equal (signed >=) */

loc_003342E5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_003342EB: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x30) / fp_top()); /* fdivr dword ptr [esp + 0x30] */
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00334305; /* jge: greater or equal (signed >=) */

loc_003342FF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00334305: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x34) / fp_top()); /* fdivr dword ptr [esp + 0x34] */
    eax = MEM32(ebp + 8);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = ecx;
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
 * sub_00334370
 * Original: 0x00334370 - 0x003343C9 (89 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334370: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00334378u); RECOMP_ABI_CALL(0x00033FB5u, sub_00033FB5); /* call 0x00033FB5 */

loc_00334378: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8C0);
    MEM32(esi) = 0x82A2A8;
    PUSH32(esp, 0x0033438Au); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0033438A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7F0108)); /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi + 0x10) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 0x40) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003343E0
 * Original: 0x003343E0 - 0x003343FA (26 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003343E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003343E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003343F0u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_003343F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00334400
 * Original: 0x00334400 - 0x00334401 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334400(void)
{

loc_00334400: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00334410
 * Original: 0x00334410 - 0x00334411 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334410(void)
{

loc_00334410: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00334420
 * Original: 0x00334420 - 0x00334421 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334420(void)
{

loc_00334420: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00334430
 * Original: 0x00334430 - 0x00334449 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00334430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334430: ;
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00334446; /* jl: less (signed <) */

loc_00334437: ;
    ecx = MEM32(0x8FCAD8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00334446: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00334450
 * Original: 0x00334450 - 0x00334453 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00334450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334450: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00334460
 * Original: 0x00334460 - 0x00334463 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00334460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334460: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00334470
 * Original: 0x00334470 - 0x00334473 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00334470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334470: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00334480
 * Original: 0x00334480 - 0x00334483 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334480: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00334490
 * Original: 0x00334490 - 0x00334493 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334490: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003344A0
 * Original: 0x003344A0 - 0x003344B8 (24 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003344A0(void)
{

loc_003344A0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003344C0
 * Original: 0x003344C0 - 0x003344F8 (56 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003344C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003344C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    MEM32(esi) = 0x82A2A8;
    PUSH32(esp, 0x003344D2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003344D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi) = 0x82A1D8;
    PUSH32(esp, 0x003344E2u); RECOMP_ABI_CALL(0x000186A7u, sub_000186A7); /* call 0x000186A7 */

loc_003344E2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003344F2; /* je: equal / zero */

loc_003344E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003344EFu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003344EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003344F2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00334510
 * Original: 0x00334510 - 0x00334526 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334510: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00334530
 * Original: 0x00334530 - 0x00334546 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334530: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00334550
 * Original: 0x00334550 - 0x00334751 (513 bytes, 188 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00334550: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1F (32-bit) */
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_A(_fa, _fb)) goto loc_0033474B; /* ja: above (unsigned >) */

loc_00334564: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x334754); /* switch: 32 entries, 24 targets */
    if (_jt == 0x0033456Bu) goto loc_0033456B;
    if (_jt == 0x00334578u) goto loc_00334578;
    if (_jt == 0x00334585u) goto loc_00334585;
    if (_jt == 0x00334593u) goto loc_00334593;
    if (_jt == 0x0033459Bu) goto loc_0033459B;
    if (_jt == 0x003345A3u) goto loc_003345A3;
    if (_jt == 0x003345C4u) goto loc_003345C4;
    if (_jt == 0x003345DBu) goto loc_003345DB;
    if (_jt == 0x003345F2u) goto loc_003345F2;
    if (_jt == 0x00334609u) goto loc_00334609;
    if (_jt == 0x00334620u) goto loc_00334620;
    if (_jt == 0x00334637u) goto loc_00334637;
    if (_jt == 0x0033464Eu) goto loc_0033464E;
    if (_jt == 0x00334665u) goto loc_00334665;
    if (_jt == 0x0033467Cu) goto loc_0033467C;
    if (_jt == 0x00334693u) goto loc_00334693;
    if (_jt == 0x003346AAu) goto loc_003346AA;
    if (_jt == 0x003346C1u) goto loc_003346C1;
    if (_jt == 0x003346D8u) goto loc_003346D8;
    if (_jt == 0x003346EFu) goto loc_003346EF;
    if (_jt == 0x00334706u) goto loc_00334706;
    if (_jt == 0x0033471Du) goto loc_0033471D;
    if (_jt == 0x00334734u) goto loc_00334734;
    if (_jt == 0x0033474Bu) goto loc_0033474B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0033456B: ;
    ecx = MEM32(0x8C465C);
    PUSH32(esp, 0x7E05CC);
    goto loc_003345AF;

loc_00334578: ;
    ecx = MEM32(0x8C4660);
    PUSH32(esp, 0x7E05CC);
    goto loc_003345AF;

loc_00334585: ;
    ecx = MEM32(ecx * 4 + 0x8C465C);
    PUSH32(esp, 0x7E05CC);
    goto loc_003345AF;

loc_00334593: ;
    ecx = MEM32(0x8C465C);
    goto loc_003345AA;

loc_0033459B: ;
    ecx = MEM32(0x8C4660);
    goto loc_003345AA;

loc_003345A3: ;
    ecx = MEM32(ecx * 4 + 0x8C4640);

loc_003345AA: ;
    PUSH32(esp, 0x82A638);

loc_003345AF: ;
    edx = MEM32(0x8C4CA0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003345BDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003345BD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003345C4: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A610);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003345D4u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003345D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003345DB: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A5E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003345EBu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003345EB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003345F2: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A5B4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00334602u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00334602: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334609: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A588);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00334619u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00334619: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334620: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A55C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00334630u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00334630: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334637: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A530);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00334647u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00334647: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033464E: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A508);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033465Eu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0033465E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334665: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A4DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00334675u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00334675: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033467C: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A4B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033468Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0033468C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334693: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A47C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003346A3u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003346A3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003346AA: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A448);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003346BAu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003346BA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003346C1: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A414);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003346D1u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003346D1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003346D8: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A3E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003346E8u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003346E8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003346EF: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A3AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003346FFu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003346FF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334706: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A378);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00334716u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00334716: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033471D: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A344);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033472Du); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0033472D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334734: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A310);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00334744u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00334744: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033474B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00334880
 * Original: 0x00334880 - 0x003349CC (332 bytes, 128 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00334880: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_A(_fa, _fb)) goto loc_003349C6; /* ja: above (unsigned >) */

loc_00334894: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3349CC); /* switch: 13 entries, 13 targets */
    if (_jt == 0x0033489Bu) goto loc_0033489B;
    if (_jt == 0x003348B2u) goto loc_003348B2;
    if (_jt == 0x003348C9u) goto loc_003348C9;
    if (_jt == 0x003348E0u) goto loc_003348E0;
    if (_jt == 0x003348F7u) goto loc_003348F7;
    if (_jt == 0x0033490Eu) goto loc_0033490E;
    if (_jt == 0x00334925u) goto loc_00334925;
    if (_jt == 0x0033493Cu) goto loc_0033493C;
    if (_jt == 0x00334953u) goto loc_00334953;
    if (_jt == 0x0033496Au) goto loc_0033496A;
    if (_jt == 0x00334981u) goto loc_00334981;
    if (_jt == 0x00334998u) goto loc_00334998;
    if (_jt == 0x003349AFu) goto loc_003349AF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0033489B: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A84C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003348ABu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003348AB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003348B2: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A824);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003348C2u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003348C2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003348C9: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A7F8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003348D9u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003348D9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003348E0: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A7D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003348F0u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003348F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003348F7: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A7A4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00334907u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00334907: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033490E: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A778);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033491Eu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0033491E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334925: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A74C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00334935u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00334935: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033493C: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A720);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033494Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0033494C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334953: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A6F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00334963u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00334963: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033496A: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A6C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033497Au); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0033497A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334981: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A69C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00334991u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00334991: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00334998: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A670);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003349A8u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003349A8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003349AF: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A644);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003349BFu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003349BF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003349C6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00334A60
 * Original: 0x00334A60 - 0x00334AF4 (148 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334A60: ;
    _fb = (uint32_t)(0x304) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x304;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00334A6Bu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00334A6B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    edi = edi;

loc_00334A70: ;
    SET_LO8(ebx, MEM8(edx + 0x829930));
    MEM8(esp + edx + 0x208) = LO8(ebx);
    MEM8(esp + edx + 0x108) = LO8(ebx);
    MEM8(esp + edx + 8) = LO8(ebx);
    SET_LO8(ebx, MEM8(edx + 0x829931));
    MEM8(esp + edx + 0x209) = LO8(ebx);
    MEM8(esp + edx + 0x109) = LO8(ebx);
    MEM8(esp + edx + 9) = LO8(ebx);
    SET_LO8(ebx, MEM8(edx + 0x829932));
    MEM8(esp + edx + 0x20A) = LO8(ebx);
    MEM8(esp + edx + 0x10A) = LO8(ebx);
    MEM8(esp + edx + 0xA) = LO8(ebx);
    SET_LO8(ebx, MEM8(edx + 0x829933));
    MEM8(esp + edx + 0x20B) = LO8(ebx);
    MEM8(esp + edx + 0x10B) = LO8(ebx);
    MEM8(esp + edx + 0xB) = LO8(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00334A70; /* jl: less (signed <) */

loc_00334ADB: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00334AECu); RECOMP_ABI_CALL(0x0055DEE1u, sub_0055DEE1); /* call 0x0055DEE1 */

loc_00334AEC: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x304) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x304;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00334B20
 * Original: 0x00334B20 - 0x00334B83 (99 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00334B20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x82A878);
    ecx = esi;
    PUSH32(esp, 0x00334B31u); RECOMP_ABI_CALL(0x0002BE46u, sub_0002BE46); /* call 0x0002BE46 */

loc_00334B31: ;
    ecx = esi;
    PUSH32(esp, 0x00334B38u); RECOMP_ABI_CALL(0x0001A96Bu, sub_0001A96B); /* call 0x0001A96B */

loc_00334B38: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00334B31; /* jne: not equal / not zero */

loc_00334B3C: ;
    ecx = esi;
    PUSH32(esp, 0x00334B43u); RECOMP_ABI_CALL(0x0002AB9Fu, sub_0002AB9F); /* call 0x0002AB9F */

loc_00334B43: ;
    PUSH32(esp, 0x7FBF0C);
    ecx = esi;
    PUSH32(esp, 0x00334B4Fu); RECOMP_ABI_CALL(0x0002BE46u, sub_0002BE46); /* call 0x0002BE46 */

loc_00334B4F: ;
    /* nop */

loc_00334B50: ;
    ecx = esi;
    PUSH32(esp, 0x00334B57u); RECOMP_ABI_CALL(0x0001A96Bu, sub_0001A96B); /* call 0x0001A96B */

loc_00334B57: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00334B50; /* jne: not equal / not zero */

loc_00334B5B: ;
    ecx = esi;
    PUSH32(esp, 0x00334B62u); RECOMP_ABI_CALL(0x0002AB9Fu, sub_0002AB9F); /* call 0x0002AB9F */

loc_00334B62: ;
    PUSH32(esp, 0x7FBF14);
    ecx = esi;
    PUSH32(esp, 0x00334B6Eu); RECOMP_ABI_CALL(0x0002BE46u, sub_0002BE46); /* call 0x0002BE46 */

loc_00334B6E: ;
    edi = edi;

loc_00334B70: ;
    ecx = esi;
    PUSH32(esp, 0x00334B77u); RECOMP_ABI_CALL(0x0001A96Bu, sub_0001A96B); /* call 0x0001A96B */

loc_00334B77: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00334B70; /* jne: not equal / not zero */

loc_00334B7B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002AB9F(); return; /* tail jmp 0x0002AB9F */

}

/**
 * sub_00334BA0
 * Original: 0x00334BA0 - 0x00334BDF (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334BA0: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x20C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    ecx = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00334BB9u); RECOMP_ABI_CALL(0x00014C5Fu, sub_00014C5F); /* call 0x00014C5F */

loc_00334BB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00334BDC; /* jbe: below or equal (unsigned <=) */

loc_00334BBD: ;
    /* nop */

loc_00334BC0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00334BC8u); RECOMP_ABI_CALL(0x00014B2Eu, sub_00014B2E); /* call 0x00014B2E */

loc_00334BC8: ;
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00334BD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00334BCDu); } /* indirect call */
    }

loc_00334BD0: ;
    ecx = edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00334BD8u); RECOMP_ABI_CALL(0x00014C5Fu, sub_00014C5F); /* call 0x00014C5F */

loc_00334BD8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00334BC0; /* jb: below (unsigned <) */

loc_00334BDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00334BF0
 * Original: 0x00334BF0 - 0x00334C09 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334BF0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00334C03; /* je: equal / zero */

loc_00334BFA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00334C00u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00334C00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00334C03: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00334C10
 * Original: 0x00334C10 - 0x00334C35 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334C10: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8FCBB0);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x11;

loc_00334C20: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00334C29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00334C26u); } /* indirect call */
    }

loc_00334C29: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x84;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00334C20; /* jne: not equal / not zero */

loc_00334C32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00334C40
 * Original: 0x00334C40 - 0x00334C61 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334C40: ;
    eax = MEM32(0x8FCA90);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00334C47: ;
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ~edx;
    edx = edx | 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00334C47; /* jl: less (signed <) */

loc_00334C5B: ;
    MEM32(0x8FCA90) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00334C70
 * Original: 0x00334C70 - 0x00334C8B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334C70: ;
    eax = MEM32(0x8FCA90);
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00334C8A; /* jne: not equal / not zero */

loc_00334C7E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00334C8A; /* jne: not equal / not zero */

loc_00334C82: ;
    eax = eax | 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8FCA90) = eax;

loc_00334C8A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00334CA0
 * Original: 0x00334CA0 - 0x00334D1C (124 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334CA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD380)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00334CB5; /* jne: not equal / not zero */

loc_00334CB2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00334CB5: ;
    esi = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00334CCAu); RECOMP_ABI_CALL(0x0001C950u, sub_0001C950); /* call 0x0001C950 */

loc_00334CCA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00334CD6; /* je: equal / zero */

loc_00334CD1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00334D19; /* jne: not equal / not zero */

loc_00334CD6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00334CFC; /* je: equal / zero */

loc_00334CDC: ;
    eax = MEM32(0x8FCA90);
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    POP32(esp, edi);
    POP32(esp, esi);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8FCA90) = eax;
    esp += 4; return; /* ret */

loc_00334CFC: ;
    eax = 1;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(0x8FCA90);
    eax = ~eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | 0xFFFFFFCFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8FCA90) = ecx;

loc_00334D19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00334D40
 * Original: 0x00334D40 - 0x00334D56 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00334D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00334D40: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00334D53; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_00334D4D: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00334D53: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00334D60
 * Original: 0x00334D60 - 0x00334DE3 (131 bytes, 54 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334D60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00334D6Cu); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_00334D6C: ;
    ecx = eax;
    PUSH32(esp, 0x00334D73u); RECOMP_ABI_CALL(0x00020A3Cu, sub_00020A3C); /* call 0x00020A3C */

loc_00334D73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00334DD0; /* je: equal / zero */

loc_00334D77: ;
    ebx = MEM32(esp + 0x14);
    goto loc_00334D80;

    /* nop */

loc_00334D80: ;
    PUSH32(esp, 0x82A884);
    ecx = eax;
    PUSH32(esp, 0x00334D8Cu); RECOMP_ABI_CALL(0x00576A02u, sub_00576A02); /* call 0x00576A02 */

loc_00334D8C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00334DBE; /* je: equal / zero */

loc_00334D92: ;
    ecx = esi;
    PUSH32(esp, 0x00334D99u); RECOMP_ABI_CALL(0x0056BC9Au, sub_0056BC9A); /* call 0x0056BC9A */

loc_00334D99: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00334DA3u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_00334DA3: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00334DAEu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00334DAE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_00334DD7; /* je: equal / zero */

loc_00334DB9: ;
    PUSH32(esp, 0x00334DBEu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00334DBE: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00334DC5u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_00334DC5: ;
    ecx = eax;
    PUSH32(esp, 0x00334DCCu); RECOMP_ABI_CALL(0x00020A3Cu, sub_00020A3C); /* call 0x00020A3C */

loc_00334DCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00334D80; /* jne: not equal / not zero */

loc_00334DD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00334DD7: ;
    PUSH32(esp, 0x00334DDCu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00334DDC: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00334E10
 * Original: 0x00334E10 - 0x00334E16 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334E10(void)
{

loc_00334E10: ;
    eax = MEM32(0x8FCB94);
    esp += 4; return; /* ret */

}

/**
 * sub_00334E20
 * Original: 0x00334E20 - 0x00334E26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334E20(void)
{

loc_00334E20: ;
    eax = MEM32(0x8FCB8C);
    esp += 4; return; /* ret */

}

/**
 * sub_00334E30
 * Original: 0x00334E30 - 0x00334E36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334E30(void)
{

loc_00334E30: ;
    eax = MEM32(0x8FCB90);
    esp += 4; return; /* ret */

}

/**
 * sub_00334E40
 * Original: 0x00334E40 - 0x00334F1F (223 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00334E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x8FCB90) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00334F19; /* je: equal / zero */

loc_00334E5E: ;
    eax = MEM32(0x8FCB8C);
    ecx = MEM32(eax + 0xC0);
    esi = ecx + 0x50;
    ecx = 0x10;
    edi = esp + 0x60;
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
    ecx = MEM32(eax + 0xC0);
    esi = ecx + 0x90;
    ecx = 0x10;
    edi = esp + 0xA0;
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
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8FCA8C);
    PUSH32(esp, 0x8FCA9C);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00334EBFu); RECOMP_ABI_CALL(0x00557980u, sub_00557980); /* call 0x00557980 */

loc_00334EBF: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0xE8;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00334ED9u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_00334ED9: ;
    ecx = 0x10;
    esi = eax;
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
    xmm0 = XMM_MEM(esp + 0x2C); /* movaps */
    XMM_STORE(0x8FCC40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x3C); /* movaps */
    XMM_STORE(0x8FCC50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x4C); /* movaps */
    XMM_STORE(0x8FCC60, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x5C); /* movaps */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(0x8FCC70, xmm0); /* movaps */

loc_00334F19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00334E4F
 * Original: 0x00334E4F - 0x00334F1F (208 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334E4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00334E4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x8FCB90) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00334F19; /* je: equal / zero */

loc_00334E5E: ;
    eax = MEM32(0x8FCB8C);
    ecx = MEM32(eax + 0xC0);
    esi = ecx + 0x50;
    ecx = 0x10;
    edi = esp + 0x60;
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
    ecx = MEM32(eax + 0xC0);
    esi = ecx + 0x90;
    ecx = 0x10;
    edi = esp + 0xA0;
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
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8FCA8C);
    PUSH32(esp, 0x8FCA9C);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC0);
    PUSH32(esp, 0x00334EBFu); RECOMP_ABI_CALL(0x00557980u, sub_00557980); /* call 0x00557980 */

loc_00334EBF: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0xE8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00334ED9u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_00334ED9: ;
    ecx = 0x10;
    esi = eax;
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
    xmm0 = XMM_MEM(esp + 0x2C); /* movaps */
    XMM_STORE(0x8FCC40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x3C); /* movaps */
    XMM_STORE(0x8FCC50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x4C); /* movaps */
    XMM_STORE(0x8FCC60, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x5C); /* movaps */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(0x8FCC70, xmm0); /* movaps */

loc_00334F19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00334E52
 * Original: 0x00334E52 - 0x00334F1F (205 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334E52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00334E52: ;
    PUSH32(esp, edi);
    MEM32(0x8FCB90) = eax;
    if (_flags /* je: equal / zero */) goto loc_00334F19;

loc_00334E5E: ;
    eax = MEM32(0x8FCB8C);
    ecx = MEM32(eax + 0xC0);
    esi = ecx + 0x50;
    ecx = 0x10;
    edi = esp + 0x60;
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
    ecx = MEM32(eax + 0xC0);
    esi = ecx + 0x90;
    ecx = 0x10;
    edi = esp + 0xA0;
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
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8FCA8C);
    PUSH32(esp, 0x8FCA9C);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC0);
    PUSH32(esp, 0x00334EBFu); RECOMP_ABI_CALL(0x00557980u, sub_00557980); /* call 0x00557980 */

loc_00334EBF: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0xE8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00334ED9u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_00334ED9: ;
    ecx = 0x10;
    esi = eax;
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
    xmm0 = XMM_MEM(esp + 0x2C); /* movaps */
    XMM_STORE(0x8FCC40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x3C); /* movaps */
    XMM_STORE(0x8FCC50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x4C); /* movaps */
    XMM_STORE(0x8FCC60, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x5C); /* movaps */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(0x8FCC70, xmm0); /* movaps */

loc_00334F19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00334F60
 * Original: 0x00334F60 - 0x00334F66 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334F60(void)
{

loc_00334F60: ;
    eax = 0x8FCC40;
    esp += 4; return; /* ret */

}

/**
 * sub_00334F70
 * Original: 0x00334F70 - 0x00334F76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334F70(void)
{

loc_00334F70: ;
    eax = MEM32(0x8FCA9C);
    esp += 4; return; /* ret */

}

/**
 * sub_00334F80
 * Original: 0x00334F80 - 0x00334F86 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00334F80(void)
{

loc_00334F80: ;
    eax = MEM32(0x8FCA8C);
    esp += 4; return; /* ret */

}

/**
 * sub_00334F90
 * Original: 0x00334F90 - 0x00334FE6 (86 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00334F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00334F90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x8FCC40);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00334FACu); RECOMP_ABI_CALL(0x00012B99u, sub_00012B99); /* call 0x00012B99 */

loc_00334FAC: ;
    esi = MEM32(eax);
    ecx = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx = ecx;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(eax + 8);
    MEM32(edx + 8) = esi;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0xC); /* divss */
    xmm1 = XMM_MEM(ecx); /* movaps */
    POP32(esp, esi);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(ecx, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00335000
 * Original: 0x00335000 - 0x00335150 (336 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00335000(void)
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

loc_00335000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x8FCB90);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335019u); RECOMP_ABI_CALL(0x000330B5u, sub_000330B5); /* call 0x000330B5 */

loc_00335019: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335020u); RECOMP_ABI_CALL(0x00018E31u, sub_00018E31); /* call 0x00018E31 */

loc_00335020: ;
    edx = MEM32(0x8B54C8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = eax;
    eax = MEM32(0x8B54C0);
    ecx = 0x10;
    edi = esp + 0x50;
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
    ecx = MEM32(0x8B54C4);
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C4074)); /* movss */
    ecx = esp + 0x50;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x8B54CC);
    edx = esp + 0x44;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335091u); RECOMP_ABI_CALL(0x00012B99u, sub_00012B99); /* call 0x00012B99 */

loc_00335091: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(eax + 0xC);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    MEM32(esp + 0x34) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003350BFu); RECOMP_ABI_CALL(0x00012B99u, sub_00012B99); /* call 0x00012B99 */

loc_003350BF: ;
    edx = MEM32(eax);
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    eax = MEM32(eax + 0xC);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x34;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033512Au); RECOMP_ABI_CALL(0x00018288u, sub_00018288); /* call 0x00018288 */

loc_0033512A: ;
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esp + 0x30);
    ecx = MEM32(ebp + 8);
    eax = MEM32(esp + 0x34);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(ecx + 8) = edx;
    POP32(esp, edi);
    MEM32(ecx + 0xC) = eax;
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
 * sub_003351B0
 * Original: 0x003351B0 - 0x003351D1 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003351B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003351B0: ;
    eax = MEM32(0x8FC604);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003351CB; /* je: equal / zero */

loc_003351BA: ;
    _fa = (uint32_t)(MEM8(0x907E70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x907E70), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003351CB; /* je: equal / zero */

loc_003351C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003351CB; /* je: equal / zero */

loc_003351C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_003351CB: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003351E0
 * Original: 0x003351E0 - 0x00335203 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003351E0(void)
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

loc_003351E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x8FCB94);
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003351F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003351F2u); } /* indirect call */
    }

loc_003351F5: ;
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 4)); /* fidiv dword ptr [esp + 4] */
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
 * sub_00335210
 * Original: 0x00335210 - 0x0033521E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335210: ;
    PUSH32(esp, 0x00335215u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00335215: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 4)); }
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00335230
 * Original: 0x00335230 - 0x00335248 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335230(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00335230: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00335236u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00335236: ;
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7A9EC4)); /* fmul dword ptr [0x7a9ec4] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00335250
 * Original: 0x00335250 - 0x00335274 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335250: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00335252: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x8C4CF0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 0x8C4CF0) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033526D; /* je: equal / zero */

loc_0033525A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00335252; /* jl: less (signed <) */

loc_00335260: ;
    eax = ZX8(LO8(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00335269u); RECOMP_ABI_CALL(0x005CC667u, sub_005CC667); /* call 0x005CC667 */

loc_00335269: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0033526D: ;
    SET_LO8(eax, MEM8(eax + 0x8C4CA4));
    esp += 4; return; /* ret */

}

/**
 * sub_00335280
 * Original: 0x00335280 - 0x003352AC (44 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335280: ;
    SET_LO8(edx, MEM8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = eax;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003352A0; /* je: equal / zero */

loc_0033528B: ;
    goto loc_00335290;

    /* nop */

loc_00335290: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003352A0; /* jg: greater (signed >) */

loc_00335295: ;
    SET_LO8(edx, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335290; /* jne: not equal / not zero */

loc_0033529D: ;
    /* nop */

loc_003352A0: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi) = LO8(edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003352A0; /* jne: not equal / not zero */

loc_003352AA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003352C0
 * Original: 0x003352C0 - 0x00335379 (185 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003352C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003352C0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x10;
    edi = esp + 0xC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    SET_LO8(ecx, MEM8(ebp));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edx = ebp;
    eax = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_003352F0; /* je: equal / zero */

loc_003352E2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003352F0; /* jg: greater (signed >) */

loc_003352E7: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003352E2; /* jne: not equal / not zero */

loc_003352EF: ;
    /* nop */

loc_003352F0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003352F0; /* jne: not equal / not zero */

loc_003352FA: ;
    SET_LO8(eax, MEM8(ebp));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335355; /* je: equal / zero */

loc_00335303: ;
    edi = ebp;

loc_00335305: ;
    SET_LO8(ecx, MEM8(edi));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00335310: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x8C4CF0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 0x8C4CF0) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335340; /* je: equal / zero */

loc_00335318: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00335310; /* jl: less (signed <) */

loc_0033531E: ;
    eax = ZX8(LO8(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00335327u); RECOMP_ABI_CALL(0x005CC667u, sub_005CC667); /* call 0x005CC667 */

loc_00335327: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033532A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335348; /* jne: not equal / not zero */

loc_0033532E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335348; /* je: equal / zero */

loc_00335332: ;
    _fa = (uint32_t)(MEM8(esp + esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + esi + 0xB), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033534D; /* je: equal / zero */

loc_00335339: ;
    MEM8(esp + esi + 0xC) = 0x20;
    goto loc_0033534C;

loc_00335340: ;
    SET_LO8(eax, MEM8(eax + 0x8C4CA4));
    goto loc_0033532A;

loc_00335348: ;
    MEM8(esp + esi + 0xC) = LO8(eax);

loc_0033534C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033534D: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335305; /* jne: not equal / not zero */

loc_00335355: ;
    MEM8(esp + esi + 0xC) = 0;
    esi = MEM32(esp + 0x54);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0033536Au); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0033536A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + ebp + -1) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003353B0
 * Original: 0x003353B0 - 0x0033543E (142 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003353B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003353B0: ;
    eax = MEM32(0x8FCBA8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033543A; /* jne: not equal / not zero */

loc_003353BC: ;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003353CAu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_003353CA: ;
    ecx = eax;
    PUSH32(esp, 0x003353D1u); RECOMP_ABI_CALL(0x0055D4AAu, sub_0055D4AA); /* call 0x0055D4AA */

loc_003353D1: ;
    edx = MEM32(esp);
    PUSH32(esp, 0x8FCBA8);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003353E6u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_003353E6: ;
    ecx = eax;
    PUSH32(esp, 0x003353EDu); RECOMP_ABI_CALL(0x0055D26Du, sub_0055D26D); /* call 0x0055D26D */

loc_003353ED: ;
    ecx = MEM32(esp);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003353FCu); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_003353FC: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00335406u); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_00335406: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FCBA8);
    PUSH32(esp, 0x0033541Bu); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_0033541B: ;
    ecx = MEM32(0x8FCBA8);
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00335435u); RECOMP_ABI_CALL(0x00557D90u, sub_00557D90); /* call 0x00557D90 */

loc_00335435: ;
    eax = MEM32(0x8FCBA8);

loc_0033543A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00335470
 * Original: 0x00335470 - 0x00335498 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335470: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8FCBA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335496; /* je: equal / zero */

loc_0033547A: ;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00335485u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00335485: ;
    ecx = eax;
    PUSH32(esp, 0x0033548Cu); RECOMP_ABI_CALL(0x0055D588u, sub_0055D588); /* call 0x0055D588 */

loc_0033548C: ;
    MEM32(0x8FCBA8) = 0;

loc_00335496: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003354B0
 * Original: 0x003354B0 - 0x0033554C (156 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003354B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003354B0: ;
    eax = MEM32(0x8FCBAC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335548; /* jne: not equal / not zero */

loc_003354C0: ;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003354CEu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_003354CE: ;
    ecx = eax;
    PUSH32(esp, 0x003354D5u); RECOMP_ABI_CALL(0x0055D4AAu, sub_0055D4AA); /* call 0x0055D4AA */

loc_003354D5: ;
    edx = MEM32(esp);
    PUSH32(esp, 0x8FCBAC);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003354EAu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_003354EA: ;
    ecx = eax;
    PUSH32(esp, 0x003354F1u); RECOMP_ABI_CALL(0x0055D26Du, sub_0055D26D); /* call 0x0055D26D */

loc_003354F1: ;
    ecx = MEM32(esp);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00335500u); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_00335500: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033550Au); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_0033550A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FCBAC);
    PUSH32(esp, 0x0033551Fu); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_0033551F: ;
    ecx = MEM32(0x8FCBAC);
    PUSH32(esp, 0x447A0000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3FAAAAAB);
    PUSH32(esp, 0x41A00000);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00335543u); RECOMP_ABI_CALL(0x00557A00u, sub_00557A00); /* call 0x00557A00 */

loc_00335543: ;
    eax = MEM32(0x8FCBAC);

loc_00335548: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00335580
 * Original: 0x00335580 - 0x003355A8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335580: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8FCBAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003355A6; /* je: equal / zero */

loc_0033558A: ;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00335595u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00335595: ;
    ecx = eax;
    PUSH32(esp, 0x0033559Cu); RECOMP_ABI_CALL(0x0055D588u, sub_0055D588); /* call 0x0055D588 */

loc_0033559C: ;
    MEM32(0x8FCBAC) = 0;

loc_003355A6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003355C0
 * Original: 0x003355C0 - 0x003355CB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003355C0(void)
{

loc_003355C0: ;
    eax = ZX8(MEM8(esp + 4));
    MEM32(0x8FCB14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003355D0
 * Original: 0x003355D0 - 0x003355DB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003355D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003355D0: ;
    eax = MEM32(0x8FCB14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_003355E0
 * Original: 0x003355E0 - 0x003355ED (13 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003355E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003355E0: ;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_0001EE26(); return; /* tail jmp 0x0001EE26 */

}

/**
 * sub_003355F0
 * Original: 0x003355F0 - 0x003355FA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003355F0(void)
{

loc_003355F0: ;
    eax = ecx;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00335600
 * Original: 0x00335600 - 0x00335601 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335600(void)
{

loc_00335600: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00335610
 * Original: 0x00335610 - 0x0033566D (93 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335610(void)
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

loc_00335610: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = ZX8(MEM8(edi + 3));
    MEM32(esp + 0x10) = eax;
    esi = ecx;
    ecx = ZX8(MEM8(ebx + 3));
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, 0x00335648u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00335648: ;
    MEM8(esi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(ebx + 2));
    SET_LO8(edx, MEM8(edi + 2));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 2) = LO8(edx);
    SET_LO8(ecx, MEM8(ebx + 1));
    SET_LO8(eax, MEM8(edi + 1));
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 1) = LO8(eax);
    SET_LO8(ecx, MEM8(edi));
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + MEM8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00335690
 * Original: 0x00335690 - 0x0033574C (188 bytes, 57 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335690(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00335690: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = ZX8(MEM8(edi + 3));
    MEM32(esp + 0x10) = eax;
    esi = ecx;
    ecx = ZX8(MEM8(ebx + 3));
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, 0x003356CCu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003356CC: ;
    MEM8(esi + 3) = LO8(eax);
    edx = ZX8(MEM8(edi + 2));
    eax = ZX8(MEM8(ebx + 2));
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, 0x003356F4u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003356F4: ;
    MEM8(esi + 2) = LO8(eax);
    ecx = ZX8(MEM8(edi + 1));
    edx = ZX8(MEM8(ebx + 1));
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, 0x0033571Cu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0033571C: ;
    MEM8(esi + 1) = LO8(eax);
    eax = ZX8(MEM8(edi));
    ecx = ZX8(MEM8(ebx));
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, 0x00335742u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00335742: ;
    fp_pop(); /* fstp st(0) */
    POP32(esp, edi);
    MEM8(esi) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00335780
 * Original: 0x00335780 - 0x003357E8 (104 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335780(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00335780: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(esi + 3));
    MEM32(esp + 4) = eax;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0xC)); /* fmul dword ptr [edi + 0xc] */
    PUSH32(esp, 0x0033579Du); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0033579D: ;
    ecx = ZX8(MEM8(esi + 2));
    MEM32(esp + 0x10) = ecx;
    MEM8(esi + 3) = LO8(eax);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    PUSH32(esp, 0x003357B3u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003357B3: ;
    edx = ZX8(MEM8(esi + 1));
    MEM32(esp + 0x10) = edx;
    MEM8(esi + 2) = LO8(eax);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    PUSH32(esp, 0x003357CAu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003357CA: ;
    MEM8(esi + 1) = LO8(eax);
    eax = ZX8(MEM8(esi));
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    PUSH32(esp, 0x003357E0u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003357E0: ;
    POP32(esp, edi);
    MEM8(esi) = LO8(eax);
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
 * sub_00335810
 * Original: 0x00335810 - 0x00335877 (103 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335810(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00335810: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(esi + 3));
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    PUSH32(esp, 0x00335829u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00335829: ;
    ecx = ZX8(MEM8(esi + 2));
    MEM32(esp + 4) = ecx;
    MEM8(esi + 3) = LO8(eax);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    PUSH32(esp, 0x00335841u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00335841: ;
    edx = ZX8(MEM8(esi + 1));
    MEM32(esp + 4) = edx;
    MEM8(esi + 2) = LO8(eax);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    PUSH32(esp, 0x00335859u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00335859: ;
    MEM8(esi + 1) = LO8(eax);
    eax = ZX8(MEM8(esi));
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    PUSH32(esp, 0x00335870u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00335870: ;
    MEM8(esi) = LO8(eax);
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
 * sub_00335890
 * Original: 0x00335890 - 0x003358F1 (97 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335890: ;
    eax = MEM32(esp + 4);
    edx = ZX8(MEM8(eax + 3));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 3));
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    esi = ZX8(MEM8(ecx + 2));
    _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ecx + 3) = LO8(edx);
    edx = ZX8(MEM8(eax + 2));
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    esi = ZX8(MEM8(ecx + 1));
    _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ecx + 2) = LO8(edx);
    edx = ZX8(MEM8(eax + 1));
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ecx + 1) = LO8(edx);
    eax = ZX8(MEM8(eax));
    edx = ZX8(MEM8(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ecx) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00335910
 * Original: 0x00335910 - 0x00335971 (97 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335910(void)
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

loc_00335910: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335940; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_00335923: ;
    eax = ZX8(MEM8(esi + 3));
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    PUSH32(esp, 0x00335938u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00335938: ;
    MEM8(esi + 3) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00335940: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esi + 3));
    ecx = ZX8(LO8(ebx));
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x7FE8B4) - fp_top()); /* fsubr dword ptr [0x7fe8b4] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7A9980)); /* fsub dword ptr [0x7a9980] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    PUSH32(esp, 0x00335966u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00335966: ;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM8(esi + 3) = LO8(eax);
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
 * sub_00335990
 * Original: 0x00335990 - 0x00335A5F (207 bytes, 62 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335990(void)
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

loc_00335990: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003359EE; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_003359A3: ;
    eax = ZX8(MEM8(esi + 2));
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    PUSH32(esp, 0x003359B8u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003359B8: ;
    ecx = ZX8(MEM8(esi + 1));
    MEM32(esp + 4) = ecx;
    MEM8(esi + 2) = LO8(eax);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    PUSH32(esp, 0x003359D0u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003359D0: ;
    edx = ZX8(MEM8(esi));
    MEM32(esp + 4) = edx;
    MEM8(esi + 1) = LO8(eax);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    PUSH32(esp, 0x003359E7u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003359E7: ;
    MEM8(esi) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_003359EE: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esi + 2));
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7A9980)); /* fsub dword ptr [0x7a9980] */
    eax = ZX8(LO8(ebx));
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x7FE8B4) - fp_top()); /* fsubr dword ptr [0x7fe8b4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x00335A14u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00335A14: ;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(esi + 1));
    ecx = ZX8(LO8(ebx));
    MEM32(esp + 0x10) = ecx;
    MEM8(esi + 2) = LO8(eax);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x7FE8B4) - fp_top()); /* fsubr dword ptr [0x7fe8b4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x00335A34u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00335A34: ;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(esi));
    edx = ZX8(LO8(ebx));
    MEM32(esp + 0x10) = edx;
    MEM8(esi + 1) = LO8(eax);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x7FE8B4) - fp_top()); /* fsubr dword ptr [0x7fe8b4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x00335A53u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00335A53: ;
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM8(esi) = LO8(eax);
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
 * sub_00335AA0
 * Original: 0x00335AA0 - 0x00335AEC (76 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335AA0(void)
{

loc_00335AA0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    edx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0xC); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 4); /* addss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 8); /* addss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00335B00
 * Original: 0x00335B00 - 0x00335B86 (134 bytes, 30 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335B00(void)
{

loc_00335B00: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 8) = xmm2.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00335BB0
 * Original: 0x00335BB0 - 0x00335C20 (112 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335BB0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00335BB0: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335BC7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00335BC2: ;
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */

loc_00335BC7: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335BD4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00335BD0: ;
    MEMF(ecx) = xmm0.f[0]; /* movss */

loc_00335BD4: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335BE3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00335BDE: ;
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */

loc_00335BE3: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335BF2; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00335BED: ;
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */

loc_00335BF2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335C00; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_00335BFB: ;
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */

loc_00335C00: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335C09; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_00335C05: ;
    MEMF(ecx) = xmm0.f[0]; /* movss */

loc_00335C09: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335C14; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_00335C0F: ;
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */

loc_00335C14: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335C1F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 8)) */

loc_00335C1A: ;
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */

loc_00335C1F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00335C40
 * Original: 0x00335C40 - 0x00335CAF (111 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00335C40: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335C51; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00335C4E: ;
    xmm1 = xmm0; /* movaps */

loc_00335C51: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335C5E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00335C5B: ;
    xmm1 = xmm0; /* movaps */

loc_00335C5E: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00335C82; /* jp: parity */

loc_00335C73: ;
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_00335C82: ;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00335CD0
 * Original: 0x00335CD0 - 0x00335D11 (65 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335CD0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00335CD0: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335CF4; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00335CE3: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_00335CF4: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0xC); /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 0xC); /* addss */
    MEMF(ecx + 0xC) = xmm2.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00335D30
 * Original: 0x00335D30 - 0x00335DAC (124 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335D30(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00335D30: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335D69; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00335D43: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_00335D69: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 4); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 4) = xmm2.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00335DD0
 * Original: 0x00335DD0 - 0x00335DD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335DD0(void)
{

loc_00335DD0: ;
    eax = MEM32(0x8FCBB0);
    esp += 4; return; /* ret */

}

/**
 * sub_00335DE0
 * Original: 0x00335DE0 - 0x00335DE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335DE0(void)
{

loc_00335DE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00335DF0
 * Original: 0x00335DF0 - 0x00335F4A (346 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335DF0(void)
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

loc_00335DF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_00335E12; /* jle: less or equal (signed <=) */

loc_00335E09: ;
    ecx = ebx;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_00335E12: ;
    xmm0 = XMM_SCALAR(MEMF(0x82A898)); /* movss */
    edi = MEM32(esp + 0x18);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00335E91; /* jl: less (signed <) */

loc_00335E2B: ;
    edx = ebx + -3;
    ecx = edi + 4;

loc_00335E31: ;
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335E45; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00335E3A: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + -4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335E45; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + -4)) */

loc_00335E40: ;
    xmm0 = xmm2; /* movaps */
    esi = eax;

loc_00335E45: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335E5B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00335E4F: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335E5B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 4)) */

loc_00335E55: ;
    xmm0 = xmm2; /* movaps */
    esi = eax + 1;

loc_00335E5B: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335E71; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00335E65: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335E71; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 0xC)) */

loc_00335E6B: ;
    xmm0 = xmm2; /* movaps */
    esi = eax + 2;

loc_00335E71: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335E87; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00335E7B: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335E87; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 0x14)) */

loc_00335E81: ;
    xmm0 = xmm2; /* movaps */
    esi = eax + 3;

loc_00335E87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00335E31; /* jl: less (signed <) */

loc_00335E91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00335EBC; /* jge: greater or equal (signed >=) */

loc_00335E95: ;
    ecx = edi + eax * 8 + 4;
    /* nop */

loc_00335EA0: ;
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335EB4; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00335EA9: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + -4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00335EB4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + -4)) */

loc_00335EAF: ;
    xmm0 = xmm2; /* movaps */
    esi = eax;

loc_00335EB4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00335EA0; /* jl: less (signed <) */

loc_00335EBC: ;
    xmm0 = XMM_SCALAR(MEMF(0x82A894)); /* movss */
    edx = esi;
    MEM32(ebp + esi * 4) = 0;
    edi = edi;

loc_00335ED0: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00335F3C; /* jle: less or equal (signed <=) */

loc_00335EDF: ;
    /* nop */

loc_00335EE0: ;
    _fa = (uint32_t)(MEM32(ebp + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + eax * 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335F21; /* jne: not equal / not zero */

loc_00335EE7: ;
    fp_push(MEMF(edi + eax * 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + edx * 8)); /* fsub dword ptr [edi + edx*8] */
    fp_push(MEMF(edi + eax * 8 + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + edx * 8 + 4)); /* fsub dword ptr [edi + edx*8 + 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00335F21; /* jbe: below or equal (unsigned <=) */

loc_00335F13: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    ecx = eax;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_00335F21: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00335EE0; /* jl: less (signed <) */

loc_00335F26: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335F3C; /* je: equal / zero */

loc_00335F2B: ;
    eax = MEM32(esp + 0x10);
    MEM32(ebp + ecx * 4) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx;
    MEM32(esp + 0x10) = eax;
    goto loc_00335ED0;

loc_00335F3C: ;
    POP32(esp, edi);
    MEM32(ebp + esi * 4) = 0;
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
 * sub_00335F45
 * Original: 0x00335F45 - 0x00335F4A (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335F45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00335F45: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00335F46
 * Original: 0x00335F46 - 0x00335F4A (4 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335F46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00335F46: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00335FA0
 * Original: 0x00335FA0 - 0x003360F5 (341 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00335FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00335FA0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x72C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x72C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    ecx = 0x99;
    goto loc_00335FC0;

    /* nop */

loc_00335FC0: ;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00335FC0; /* jne: not equal / not zero */

loc_00335FCF: ;
    ebp = MEM32(esp + 0x740);
    ebx = MEM32(ebp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033605D; /* jl: less (signed <) */

loc_00335FE0: ;
    ecx = MEM32(ebp);
    edi = ebx + -3;
    ecx = esi + ecx * 4 + 0x910;
    /* nop */

loc_00335FF0: ;
    edx = MEM32(ecx + -4);
    edx = edx + edx * 2;
    ebp = MEM32(esi + edx * 4 + 0xC);
    edx = esi + edx * 4;
    edx = MEM32(edx + 0x14);
    MEM32(esp + eax * 8 + 0x14) = edx;
    edx = MEM32(ecx);
    edx = edx + edx * 2;
    edx = esi + edx * 4;
    MEM32(esp + eax * 8 + 0x10) = ebp;
    ebp = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x14);
    MEM32(esp + eax * 8 + 0x1C) = edx;
    edx = MEM32(ecx + 4);
    edx = edx + edx * 2;
    edx = esi + edx * 4;
    MEM32(esp + eax * 8 + 0x18) = ebp;
    ebp = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x14);
    MEM32(esp + eax * 8 + 0x24) = edx;
    edx = MEM32(ecx + 8);
    edx = edx + edx * 2;
    edx = esi + edx * 4;
    MEM32(esp + eax * 8 + 0x20) = ebp;
    ebp = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x14);
    MEM32(esp + eax * 8 + 0x28) = ebp;
    MEM32(esp + eax * 8 + 0x2C) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00335FF0; /* jl: less (signed <) */

loc_00336056: ;
    ebp = MEM32(esp + 0x740);

loc_0033605D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033608F; /* jge: greater or equal (signed >=) */

loc_00336061: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi + ecx * 4 + 0x90C;
    /* nop */

loc_00336070: ;
    ecx = MEM32(edx);
    ecx = ecx + ecx * 2;
    edi = MEM32(esi + ecx * 4 + 0xC);
    ecx = esi + ecx * 4;
    ecx = MEM32(ecx + 0x14);
    MEM32(esp + eax * 8 + 0x10) = edi;
    MEM32(esp + eax * 8 + 0x14) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00336070; /* jl: less (signed <) */

loc_0033608F: ;
    PUSH32(esp, ebx);
    edx = esp + 0x4DC;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003360A2u); RECOMP_ABI_CALL(0x00014A5Cu, sub_00014A5C); /* call 0x00014A5C */

loc_003360A2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003360CA; /* jle: less or equal (signed <=) */

loc_003360AB: ;
    ecx = MEM32(ebp);
    ecx = esi + ecx * 4 + 0x90C;

loc_003360B5: ;
    edx = MEM32(esp + eax * 4 + 0x4D8);
    edi = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + edx * 4 + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_003360B5; /* jl: less (signed <) */

loc_003360CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003360E8; /* jle: less or equal (signed <=) */

loc_003360D0: ;
    ecx = MEM32(ebp);
    edx = MEM32(esp + eax * 4 + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + ecx * 4 + 0x90C) = edx;
    ecx = MEM32(ebp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003360D0; /* jl: less (signed <) */

loc_003360E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x72C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x72C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336150
 * Original: 0x00336150 - 0x0033618F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00336150: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = MEM32(0x8FCBB4);
    edx = eax + eax * 2;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(ecx + edx * 4 + 4)); /* movss */
    edx = eax + eax * 2;
    xmm1 = XMM_SCALAR(MEMF(ecx + edx * 4 + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00336180; /* jp: parity */

loc_0033617D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00336180: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033618B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00336185: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0033618B: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_003361A0
 * Original: 0x003361A0 - 0x003361C0 (32 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003361A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003361A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + eax * 8 + 0xC0C);
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + edx * 4 + 0x90C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003361D0
 * Original: 0x003361D0 - 0x003361EE (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003361D0(void)
{

loc_003361D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x829C64);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003361E9u); RECOMP_ABI_CALL(0x0055B805u, sub_0055B805); /* call 0x0055B805 */

loc_003361E9: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00336200
 * Original: 0x00336200 - 0x00336220 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336200(void)
{

loc_00336200: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x829C64);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033621Du); RECOMP_ABI_CALL(0x0055B890u, sub_0055B890); /* call 0x0055B890 */

loc_0033621D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336230
 * Original: 0x00336230 - 0x00336250 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336230(void)
{

loc_00336230: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x829C64);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033624Du); RECOMP_ABI_CALL(0x0055BACEu, sub_0055BACE); /* call 0x0055BACE */

loc_0033624D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336260
 * Original: 0x00336260 - 0x00336269 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336260(void)
{

loc_00336260: ;
    eax = ecx;
    MEM32(eax) = 0x829E64;
    esp += 4; return; /* ret */

}

/**
 * sub_00336270
 * Original: 0x00336270 - 0x003362A2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336270: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00336280; /* jge: greater or equal (signed >=) */

loc_00336279: ;
    ecx = 1;
    goto loc_0033628A;

loc_00336280: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033628A; /* jle: less or equal (signed <=) */

loc_00336285: ;
    ecx = 6;

loc_0033628A: ;
    eax = MEM32(esp + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx * 4 + 0x82A9EC)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx * 4 + 0x82A9EC))); }
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ecx * 4 + 0x8C4D3C);
    eax = MEM32(eax + edx * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003362B0
 * Original: 0x003362B0 - 0x003362ED (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003362B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003362B0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003362D7; /* je: equal / zero */

loc_003362C0: ;
    edx = MEM32(eax + 4);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82AA0C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003362D3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003362D3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003362D7: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82AA0C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003362E9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003362E9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00336300
 * Original: 0x00336300 - 0x003363DF (223 bytes, 67 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336300: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00336310u); RECOMP_ABI_CALL(0x0059DE73u, sub_0059DE73); /* call 0x0059DE73 */

loc_00336310: ;
    eax = MEM32(esp + 0xA8);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x82AA18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00336327u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00336327: ;
    esi = MEM32(esp + 0xB8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x0033633Bu); RECOMP_ABI_CALL(0x0059E1E4u, sub_0059E1E4); /* call 0x0059E1E4 */

loc_0033633B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033638D; /* je: equal / zero */

loc_0033633F: ;
    edx = MEM32(esp + 0xB4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(edx) = eax;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00336368u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00336365u); } /* indirect call */
    }

loc_00336368: ;
    ecx = MEM32(esp + 0xB0);
    PUSH32(esp, eax);
    MEM32(ecx) = eax;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0033637Cu); RECOMP_ABI_CALL(0x0059DF4Fu, sub_0059DF4F); /* call 0x0059DF4F */

loc_0033637C: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00336385u); RECOMP_ABI_CALL(0x0059DEB2u, sub_0059DEB2); /* call 0x0059DEB2 */

loc_00336385: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0033638D: ;
    edx = MEM32(0x8FC1D0);
    ecx = MEM32(edx + 0xE8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB8);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, edx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003363B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003363B4u); } /* indirect call */
    }

loc_003363B7: ;
    ecx = MEM32(esp + 0xB4);
    MEM32(ecx) = eax;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003363CAu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003363CA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    ecx = esp + 4;
    PUSH32(esp, 0x003363D7u); RECOMP_ABI_CALL(0x0059DEB2u, sub_0059DEB2); /* call 0x0059DEB2 */

loc_003363D7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00336420
 * Original: 0x00336420 - 0x00336425 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336420: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336430
 * Original: 0x00336430 - 0x00336435 (5 bytes, 2 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336430: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00336440
 * Original: 0x00336440 - 0x00336443 (3 bytes, 1 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336440(void)
{

loc_00336440: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00336450
 * Original: 0x00336450 - 0x00336462 (18 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336450: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0033645Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00336457u); } /* indirect call */
    }

loc_0033645A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336470
 * Original: 0x00336470 - 0x003364C8 (88 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336470: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8FCA98);
    xmm0 = XMM_SCALAR(MEMF(0x7AD380)); /* movss */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00336488; /* jne: not equal / not zero */

loc_00336485: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00336488: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00336498u); RECOMP_ABI_CALL(0x0001C950u, sub_0001C950); /* call 0x0001C950 */

loc_00336498: ;
    edx = MEM32(0x8FCA98);
    xmm0 = XMM_SCALAR(MEMF(0x7AD380)); /* movss */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003364B4; /* jne: not equal / not zero */

loc_003364B1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_003364B4: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x003364C4u); RECOMP_ABI_CALL(0x0001C950u, sub_0001C950); /* call 0x0001C950 */

loc_003364C4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003364E0
 * Original: 0x003364E0 - 0x00336505 (37 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003364E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003364E0: ;
    eax = MEM32(0x8FCBB0);
    ecx = MEM32(eax + 0xD00);
    edx = MEM32(0x8FCA90);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8FCA90) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336510
 * Original: 0x00336510 - 0x00336580 (112 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336510: ;
    ecx = MEM32(0x8FCBB0);
    _fb = (uint32_t)(0xB94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 8;

loc_00336521: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033657C; /* jne: not equal / not zero */

loc_00336526: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00336521; /* jl: less (signed <) */

loc_0033652F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00336531: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(0x8FCA90);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x8FCA90) = eax;
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00336579; /* jns: not sign (positive) */

loc_0033654F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x550);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00336561u); RECOMP_ABI_CALL(0x0001C26Bu, sub_0001C26B); /* call 0x0001C26B */

loc_00336561: ;
    eax = MEM32(edi);
    ecx = MEM32(esi + 0x550);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x550) = ecx;
    POP32(esp, esi);

loc_00336579: ;
    esp += 8; return; /* ret 4 */

loc_0033657C: ;
    SET_LO8(eax, 1);
    goto loc_00336531;

}

/**
 * sub_003365A0
 * Original: 0x003365A0 - 0x003365B2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003365A0(void)
{

loc_003365A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003365AAu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003365AA: ;
    ecx = eax;
    PUSH32(esp, 0x003365B1u); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_003365B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003365C0
 * Original: 0x003365C0 - 0x003365C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003365C0(void)
{

loc_003365C0: ;
    eax = MEM32(0x8FCBB8);
    esp += 4; return; /* ret */

}

/**
 * sub_003365D0
 * Original: 0x003365D0 - 0x003365EB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003365D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003365D0: ;
    ecx = MEM32(0x8FCBB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003365EA; /* je: equal / zero */

loc_003365DA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003365E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003365DEu); } /* indirect call */
    }

loc_003365E0: ;
    MEM32(0x8FCBB8) = 0;

loc_003365EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00336600
 * Original: 0x00336600 - 0x0033662A (42 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336600(void)
{

loc_00336600: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 2);
    MEM32(esi + 0x1C) = ecx;
    PUSH32(esp, 0x00336611u); RECOMP_ABI_CALL(0x005589ADu, sub_005589AD); /* call 0x005589AD */

loc_00336611: ;
    ecx = MEM32(esi + 0x10);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00336626u); RECOMP_ABI_CALL(0x0055A6ACu, sub_0055A6AC); /* call 0x0055A6AC */

loc_00336626: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336640
 * Original: 0x00336640 - 0x00336647 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336640(void)
{

loc_00336640: ;
    eax = MEM32(ecx + 0xE4);
    esp += 4; return; /* ret */

}

/**
 * sub_00336650
 * Original: 0x00336650 - 0x003367A3 (339 bytes, 115 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00336650: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DFAA0);
    esi = ecx;
    PUSH32(esp, 0x00336666u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00336666: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0033669C; /* jne: not equal / not zero */

loc_0033666D: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00336676u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_00336676: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xD0) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00336689; /* jg: greater (signed >) */

loc_00336684: ;
    eax = 0x40;

loc_00336689: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0xD0) = eax;
    PUSH32(esp, 0x00336697u); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_00336697: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0033669C: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7DFA98);
    PUSH32(esp, 0x003366AAu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_003366AA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003366E0; /* jne: not equal / not zero */

loc_003366B1: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003366BAu); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_003366BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xD4) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_003366CD; /* jg: greater (signed >) */

loc_003366C8: ;
    eax = 0x40;

loc_003366CD: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0xD4) = eax;
    PUSH32(esp, 0x003366DBu); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_003366DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003366E0: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82AA44);
    PUSH32(esp, 0x003366EEu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_003366EE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00336725; /* jne: not equal / not zero */

loc_003366F5: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00336703u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00336703: ;
    PUSH32(esp, eax);
    ecx = esi + 0xE4;
    PUSH32(esp, 0x0033670Fu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_0033670F: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00336718u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00336718: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00336720u); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_00336720: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00336725: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82AA34);
    PUSH32(esp, 0x00336733u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00336733: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00336764; /* jne: not equal / not zero */

loc_0033673A: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7DF5A0);
    PUSH32(esp, 0x00336748u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00336748: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esi + 0xE0) = LO8(eax);
    PUSH32(esp, 0x0033675Fu); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_0033675F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00336764: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82AA2C);
    PUSH32(esp, 0x00336772u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00336772: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00336796; /* jne: not equal / not zero */

loc_00336779: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7DF5A0);
    PUSH32(esp, 0x00336787u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00336787: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0xF0) = LO8(eax);

loc_00336796: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033679Eu); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_0033679E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336800
 * Original: 0x00336800 - 0x00336810 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336800(void)
{

loc_00336800: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0xD8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336820
 * Original: 0x00336820 - 0x00336856 (54 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336820: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0033682Eu); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_0033682E: ;
    SET_LO8(eax, MEM8(esi + 0xE0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(edi + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0033684B; /* je: equal / zero */

loc_0033683B: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    POP32(esp, edi);
    MEM32(esi + 0xDC) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0033684B: ;
    POP32(esp, edi);
    MEM32(esi + 0xDC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336870
 * Original: 0x00336870 - 0x0033688B (27 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336870(void)
{

loc_00336870: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0033687Du); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_0033687D: ;
    MEM32(esi + 0xDC) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003368A0
 * Original: 0x003368A0 - 0x003368FF (95 bytes, 31 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003368A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003368A0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003368B7u); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_003368B7: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82AA54);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003368CEu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003368CE: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0xEC;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B106);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003368EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003368EBu); } /* indirect call */
    }

loc_003368EE: ;
    POP32(esp, edi);
    MEM32(esi + 0xE8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336920
 * Original: 0x00336920 - 0x00336950 (48 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336920: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0033692Eu); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_0033692E: ;
    eax = MEM32(esi + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00336941; /* je: equal / zero */

loc_00336938: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00336941u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_00336941: ;
    POP32(esp, edi);
    MEM32(esi + 0xE8) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336960
 * Original: 0x00336960 - 0x0033699E (62 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336960: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(edi + 0x24);
    eax = esi + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x82AA7C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033697Fu); RECOMP_ABI_CALL(0x0055A1C7u, sub_0055A1C7); /* call 0x0055A1C7 */

loc_0033697F: ;
    eax = MEM32(edi + 0x24);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x82AA6C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00336996u); RECOMP_ABI_CALL(0x0055A1C7u, sub_0055A1C7); /* call 0x0055A1C7 */

loc_00336996: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003369B0
 * Original: 0x003369B0 - 0x003369E6 (54 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003369B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003369B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x54);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003369C2u); RECOMP_ABI_CALL(0x0055A895u, sub_0055A895); /* call 0x0055A895 */

loc_003369C2: ;
    edx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esi + 0x54) = 0;
    PUSH32(esp, 0x003369D7u); RECOMP_ABI_CALL(0x0055A895u, sub_0055A895); /* call 0x0055A895 */

loc_003369D7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x50) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336A00
 * Original: 0x00336A00 - 0x00336A5E (94 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336A00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00336A0Fu); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_00336A0F: ;
    ecx = esi;
    PUSH32(esp, 0x00336A16u); RECOMP_ABI_CALL(0x0002D0CFu, sub_0002D0CF); /* call 0x0002D0CF */

loc_00336A16: ;
    PUSH32(esp, 0x82AA98);
    ecx = esi;
    PUSH32(esp, 0x00336A22u); RECOMP_ABI_CALL(0x000353CEu, sub_000353CE); /* call 0x000353CE */

loc_00336A22: ;
    edi = eax;
    ebx = esi + 0x58;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00336A2Fu); RECOMP_ABI_CALL(0x000147F0u, sub_000147F0); /* call 0x000147F0 */

loc_00336A2F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0x48) = edi;
    PUSH32(esp, 0x00336A3Cu); RECOMP_ABI_CALL(0x0002D0CFu, sub_0002D0CF); /* call 0x0002D0CF */

loc_00336A3C: ;
    PUSH32(esp, 0x82AA8C);
    ecx = esi;
    PUSH32(esp, 0x00336A48u); RECOMP_ABI_CALL(0x000353CEu, sub_000353CE); /* call 0x000353CE */

loc_00336A48: ;
    edi = eax;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00336A52u); RECOMP_ABI_CALL(0x000147F0u, sub_000147F0); /* call 0x000147F0 */

loc_00336A52: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x4C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336A80
 * Original: 0x00336A80 - 0x00336BD4 (340 bytes, 103 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336A80(void)
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

loc_00336A80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x9C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00336BCF; /* je: equal / zero */

loc_00336A92: ;
    eax = MEM32(esi + 4);
    xmm4 = XMM_SCALAR(MEMF(0x82AAA8)); /* movss */
    _fca = xmm4.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00336AB8; /* jb: below (unsigned <) (xmm4.f[0] vs MEMF(eax)) */

loc_00336AA2: ;
    _fca = xmm4.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00336AB8; /* jb: below (unsigned <) (xmm4.f[0] vs MEMF(eax + 4)) */

loc_00336AA8: ;
    _fca = xmm4.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00336AB8; /* jb: below (unsigned <) (xmm4.f[0] vs MEMF(eax + 8)) */

loc_00336AAE: ;
    eax = MEM32(esi + 0xC);
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_00336AC0;

loc_00336AB8: ;
    eax = MEM32(esi + 0xC);
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00336AC0: ;
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(eax) = LO8(ecx);
    eax = MEM32(esi + 8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00336AE2; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00336ADD: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00336AE9;

loc_00336AE2: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_00336AE9: ;
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00336B33; /* jb: below (unsigned <) (xmm4.f[0] vs xmm2.f[0]) */

loc_00336AEE: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00336B01; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00336AFC: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00336B08;

loc_00336B01: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_00336B08: ;
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00336B33; /* jb: below (unsigned <) (xmm4.f[0] vs xmm2.f[0]) */

loc_00336B0D: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00336B20; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00336B1B: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00336B24;

loc_00336B20: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00336B24: ;
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00336B33; /* jb: below (unsigned <) (xmm4.f[0] vs xmm0.f[0]) */

loc_00336B29: ;
    eax = MEM32(esi + 0x10);
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_00336B3B;

loc_00336B33: ;
    eax = MEM32(esi + 0x10);
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00336B3B: ;
    MEM8(eax) = LO8(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    fp_push(MEMF(edi)); /* fld float */
    MEM8(esp + 0xB) = 0xFF;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    PUSH32(esp, 0x00336B53u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00336B53: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    MEM8(esp + 0xA) = LO8(eax);
    PUSH32(esp, 0x00336B65u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00336B65: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    MEM8(esp + 9) = LO8(eax);
    PUSH32(esp, 0x00336B77u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00336B77: ;
    MEM8(esp + 8) = LO8(eax);
    eax = esp + 8;
    edi = esi + 0x2C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00336B8Au); RECOMP_ABI_CALL(0x00036404u, sub_00036404); /* call 0x00036404 */

loc_00336B8A: ;
    esi = MEM32(esi + 8);
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x82AAA4)); /* fmul dword ptr [0x82aaa4] */
    PUSH32(esp, 0x00336B9Au); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00336B9A: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x82AAA4)); /* fmul dword ptr [0x82aaa4] */
    MEM8(esp + 0xA) = LO8(eax);
    PUSH32(esp, 0x00336BACu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00336BAC: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x82AAA4)); /* fmul dword ptr [0x82aaa4] */
    MEM8(esp + 9) = LO8(eax);
    PUSH32(esp, 0x00336BBEu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00336BBE: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0x00336BCEu); RECOMP_ABI_CALL(0x000224EFu, sub_000224EF); /* call 0x000224EF */

loc_00336BCE: ;
    POP32(esp, edi);

loc_00336BCF: ;
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
 * sub_00336C30
 * Original: 0x00336C30 - 0x00336C31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336C30(void)
{

loc_00336C30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00336C40
 * Original: 0x00336C40 - 0x00336C67 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336C40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00336C63; /* je: equal / zero */

loc_00336C4B: ;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00336C56u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_00336C56: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00336C63: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00336C65
 * Original: 0x00336C65 - 0x00336C67 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336C65(void)
{

loc_00336C65: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00336C70
 * Original: 0x00336C70 - 0x00336CC6 (86 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336C70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00336C7Fu); RECOMP_ABI_CALL(0x0001E999u, sub_0001E999); /* call 0x0001E999 */

loc_00336C7F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x70);
    MEM32(esi) = 0x82AAAC;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x38) = ebx;
    PUSH32(esp, 0x00336C98u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00336C98: ;
    edi = eax;
    MEM32(esi + 0x2C) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x50) = ebx;
    POP32(esp, edi);
    MEM8(esi + 0x28) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336CE0
 * Original: 0x00336CE0 - 0x00336CFD (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00336CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    MEM32(esi) = 0x82AAAC;
    PUSH32(esp, 0x00336CF2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00336CF2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00035612(); return; /* tail jmp 0x00035612 */

}

/**
 * sub_00336D10
 * Original: 0x00336D10 - 0x00336E07 (247 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00336D10: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 1;
    MEM32(esp + 0x10) = 3;

loc_00336D28: ;
    ecx = esi;
    PUSH32(esp, 0x00336D2Fu); RECOMP_ABI_CALL(0x0002D0CFu, sub_0002D0CF); /* call 0x0002D0CF */

loc_00336D2F: ;
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, 0x82AAE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00336D3Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00336D3F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00336D4Eu); RECOMP_ABI_CALL(0x000353CEu, sub_000353CE); /* call 0x000353CE */

loc_00336D4E: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00336D57u); RECOMP_ABI_CALL(0x0002D0CFu, sub_0002D0CF); /* call 0x0002D0CF */

loc_00336D57: ;
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, 0x82AACC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00336D67u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00336D67: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00336D76u); RECOMP_ABI_CALL(0x000353CEu, sub_000353CE); /* call 0x000353CE */

loc_00336D76: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00336DB8; /* je: equal / zero */

loc_00336D7A: ;
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    edx = ecx + ebp + 0x30;
    MEM32(edx) = eax;
    ecx = MEM32(edi + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(edi + 8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(edi + 0xC);
    MEM32(edx + 0xC) = ecx;

loc_00336DB8: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00336D28; /* jne: not equal / not zero */

loc_00336DCB: ;
    ecx = esi;
    PUSH32(esp, 0x00336DD2u); RECOMP_ABI_CALL(0x0002D0CFu, sub_0002D0CF); /* call 0x0002D0CF */

loc_00336DD2: ;
    PUSH32(esp, 0x82AAC0);
    ecx = esi;
    PUSH32(esp, 0x00336DDEu); RECOMP_ABI_CALL(0x000353CEu, sub_000353CE); /* call 0x000353CE */

loc_00336DDE: ;
    edx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    POP32(esp, ebp);
    MEM32(edx + 0xC) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336E50
 * Original: 0x00336E50 - 0x00336E81 (49 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336E50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00336E70; /* je: equal / zero */

loc_00336E5B: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00336E66u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_00336E66: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = 0;

loc_00336E70: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00336E7Cu); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_00336E7C: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336E61
 * Original: 0x00336E61 - 0x00336E81 (32 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336E61(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336E61: ;
    PUSH32(esp, 0x00336E66u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_00336E66: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = 0;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00336E7Cu); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_00336E7C: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336E90
 * Original: 0x00336E90 - 0x00336F86 (246 bytes, 90 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00336E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00336E90: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x118);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, 0x82AB1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00336EBAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00336EBA: ;
    edx = MEM32(esi + 0x2C);
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x10F4A161);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00336EDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00336ED7u); } /* indirect call */
    }

loc_00336EDA: ;
    MEM32(esi + 0x38) = eax;
    eax = esi + 0x48;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;

loc_00336EE8: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(edi + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, 0x82AB08);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00336F00u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00336F00: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0xCF4BB78);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00336F1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00336F1Cu); } /* indirect call */
    }

loc_00336F1F: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx + -12) = eax;
    edx = MEM32(esi + 8);
    eax = MEM32(edi + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x82AAF0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00336F3Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00336F3E: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebx + eax + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10F4A161);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00336F5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00336F5Cu); } /* indirect call */
    }

loc_00336F5F: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00336EE8; /* jl: less (signed <) */

loc_00336F79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00336FD0
 * Original: 0x00336FD0 - 0x00337030 (96 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00336FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00336FD0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00336FF0; /* je: equal / zero */

loc_00336FE0: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00336FE9u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_00336FE9: ;
    MEM32(esi + 0x38) = 0;

loc_00336FF0: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 3;

loc_00336FF8: ;
    eax = MEM32(esi + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033700F; /* je: equal / zero */

loc_00336FFF: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00337008u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_00337008: ;
    MEM32(esi + -12) = 0;

loc_0033700F: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337024; /* je: equal / zero */

loc_00337015: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033701Eu); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0033701E: ;
    MEM32(esi) = 0;

loc_00337024: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00336FF8; /* jne: not equal / not zero */

loc_0033702A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337050
 * Original: 0x00337050 - 0x0033711F (207 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337050: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00337060u); RECOMP_ABI_CALL(0x000258DEu, sub_000258DE); /* call 0x000258DE */

loc_00337060: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = 0x7AB15C;
    edi = esi + 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi + 0x58;
    MEM32(esi) = 0x82AB30;
    MEM32(edi) = 0x82AB2C;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    PUSH32(esp, 0x0033708Eu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0033708E: ;
    ebp = esi + 0xC0;
    ecx = ebp;
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xBC) = ebx;
    PUSH32(esp, 0x003370B3u); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_003370B3: ;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(esi + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(esi + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(esi + 0x90, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = ebp;
    MEMF(esi + 0xAC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00337116u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_00337116: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337160
 * Original: 0x00337160 - 0x00337167 (7 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337160(void)
{

loc_00337160: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00337170
 * Original: 0x00337170 - 0x003371CE (94 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337170: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x44;
    MEM32(esi) = 0x82AB30;
    MEM32(edi) = 0x82AB2C;
    if (CMP_EQ(_fa, _fb)) goto loc_003371A5; /* je: equal / zero */

loc_0033718C: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00337197u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00337197: ;
    ecx = eax;
    PUSH32(esp, 0x0033719Eu); RECOMP_ABI_CALL(0x0055D5A6u, sub_0055D5A6); /* call 0x0055D5A6 */

loc_0033719E: ;
    MEM32(esi + 0x50) = 0;

loc_003371A5: ;
    ebx = esi + 0xC0;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x003371B3u); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_003371B3: ;
    ecx = ebx;
    PUSH32(esp, 0x003371BAu); RECOMP_ABI_CALL(0x00017301u, sub_00017301); /* call 0x00017301 */

loc_003371BA: ;
    ecx = esi + 0x58;
    PUSH32(esp, 0x003371C2u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003371C2: ;
    ecx = esi;
    PUSH32(esp, 0x003371C9u); RECOMP_ABI_CALL(0x00029EE3u, sub_00029EE3); /* call 0x00029EE3 */

loc_003371C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003371F0
 * Original: 0x003371F0 - 0x0033723E (78 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003371F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003371F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82AB60);
    esi = ecx;
    PUSH32(esp, 0x00337206u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00337206: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337231; /* jne: not equal / not zero */

loc_0033720D: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0033721Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0033721B: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi + 0x58;
    PUSH32(esp, 0x00337228u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_00337228: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00337231u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00337231: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00337239u); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_00337239: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337260
 * Original: 0x00337260 - 0x0033727C (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337260(void)
{

loc_00337260: ;
    eax = ecx + 0x54;
    ecx = MEM32(ecx + 0x50);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00337279u); RECOMP_ABI_CALL(0x0055A6ACu, sub_0055A6AC); /* call 0x0055A6AC */

loc_00337279: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337290
 * Original: 0x00337290 - 0x003372B7 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337290: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003372B3; /* je: equal / zero */

loc_0033729A: ;
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x24);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003372ACu); RECOMP_ABI_CALL(0x005599F1u, sub_005599F1); /* call 0x005599F1 */

loc_003372AC: ;
    MEM32(esi + 0x54) = 0;

loc_003372B3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003372C0
 * Original: 0x003372C0 - 0x003372C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003372C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003372C0: ;
    g_seh_ebp = ebp; sub_00016294(); return; /* tail jmp 0x00016294 */

}

/**
 * sub_003372D0
 * Original: 0x003372D0 - 0x003372E4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003372D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003372D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82AB70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003372DEu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003372DE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_003372F0
 * Original: 0x003372F0 - 0x00337423 (307 bytes, 99 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003372F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003372F0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00337307u); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_00337307: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, 0x82AB8C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x82AB70);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00337323u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00337323: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B810);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00337340u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033733Du); } /* indirect call */
    }

loc_00337340: ;
    MEM32(esi + 0xB8) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, 0x82AB7C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x82AB70);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00337362u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00337362: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B810);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0033737Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033737Cu); } /* indirect call */
    }

loc_0033737F: ;
    MEM32(esi + 0xBC) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, 0x82A09C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x82AB70);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003373A1u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003373A1: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x10F4A161);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003373C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003373BEu); } /* indirect call */
    }

loc_003373C1: ;
    MEM32(esi + 0xB4) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, 0x829EE8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x82AB70);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003373E3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003373E3: ;
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40F4B4FA);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00337400u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003373FDu); } /* indirect call */
    }

loc_00337400: ;
    ecx = MEM32(esi + 0xB4);
    MEM32(esi + 0xB0) = eax;
    eax = esi + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00337418u); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_00337418: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337470
 * Original: 0x00337470 - 0x00337493 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337470: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337492; /* je: equal / zero */

loc_00337476: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0033747Du); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_0033747D: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033748Cu); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0033748C: ;
    MEM32(esi) = 0;

loc_00337492: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003374A0
 * Original: 0x003374A0 - 0x0033754B (171 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003374A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003374A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003374AFu); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_003374AF: ;
    ecx = MEM32(esi + 0xB8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003374D6; /* je: equal / zero */

loc_003374BB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003374C1u); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_003374C1: ;
    eax = MEM32(esi + 0xB8);
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003374D0u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_003374D0: ;
    MEM32(esi + 0xB8) = ebx;

loc_003374D6: ;
    ecx = MEM32(esi + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003374FB; /* je: equal / zero */

loc_003374E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003374E6u); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_003374E6: ;
    ecx = MEM32(esi + 0xBC);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x003374F5u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_003374F5: ;
    MEM32(esi + 0xBC) = ebx;

loc_003374FB: ;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337520; /* je: equal / zero */

loc_00337505: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033750Bu); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_0033750B: ;
    edx = MEM32(esi + 0xB4);
    ecx = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033751Au); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0033751A: ;
    MEM32(esi + 0xB4) = ebx;

loc_00337520: ;
    ecx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337545; /* je: equal / zero */

loc_0033752A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00337530u); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_00337530: ;
    eax = MEM32(esi + 0xB0);
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033753Fu); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0033753F: ;
    MEM32(esi + 0xB0) = ebx;

loc_00337545: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337580
 * Original: 0x00337580 - 0x00337633 (179 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337580(void)
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

loc_00337580: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033762B; /* je: equal / zero */

loc_00337592: ;
    fp_push(MEMF(esi + 0x60)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    PUSH32(esp, 0x003375A1u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003375A1: ;
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    ebx = eax;
    ebx = ebx & 0xFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x003375B7u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003375B7: ;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x003375CDu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003375CD: ;
    fp_push(MEMF(esi + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x003375E5u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003375E5: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A09C);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x0033760Bu); RECOMP_ABI_CALL(0x0055B805u, sub_0055B805); /* call 0x0055B805 */

loc_0033760B: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x82A09C);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033762Au); RECOMP_ABI_CALL(0x0055BACEu, sub_0055BACE); /* call 0x0055BACE */

loc_0033762A: ;
    POP32(esp, ebx);

loc_0033762B: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00337660
 * Original: 0x00337660 - 0x00337684 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337660: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0033766Du); RECOMP_ABI_CALL(0x000258DEu, sub_000258DE); /* call 0x000258DE */

loc_0033766D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM8(esi + 0x4C) = LO8(eax);
    MEM32(esi) = 0x82AB9C;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337690
 * Original: 0x00337690 - 0x00337697 (7 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337690(void)
{

loc_00337690: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003376A0
 * Original: 0x003376A0 - 0x003376D2 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003376A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003376A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82AB9C;
    ecx = MEM32(0x8FCB6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003376C3; /* je: equal / zero */

loc_003376B3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003376B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003376B7u); } /* indirect call */
    }

loc_003376B9: ;
    MEM32(0x8FCB6C) = 0;

loc_003376C3: ;
    MEM32(esi + 0x48) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00029EE3(); return; /* tail jmp 0x00029EE3 */

}

/**
 * sub_003376E0
 * Original: 0x003376E0 - 0x003376ED (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003376E0(void)
{

loc_003376E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x44) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003376F0
 * Original: 0x003376F0 - 0x003376FA (10 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003376F0(void)
{

loc_003376F0: ;
    MEM32(ecx + 0x44) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337700
 * Original: 0x00337700 - 0x00337705 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337700: ;
    g_seh_ebp = ebp; sub_00017ABD(); return; /* tail jmp 0x00017ABD */

}

/**
 * sub_00337710
 * Original: 0x00337710 - 0x00337734 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337710: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0033771Du); RECOMP_ABI_CALL(0x000258DEu, sub_000258DE); /* call 0x000258DE */

loc_0033771D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM8(esi + 0x4C) = LO8(eax);
    MEM32(esi) = 0x82ABCC;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337740
 * Original: 0x00337740 - 0x00337747 (7 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337740(void)
{

loc_00337740: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00337750
 * Original: 0x00337750 - 0x00337782 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337750: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82ABCC;
    ecx = MEM32(0x8FCB68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337773; /* je: equal / zero */

loc_00337763: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00337769u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337767u); } /* indirect call */
    }

loc_00337769: ;
    MEM32(0x8FCB68) = 0;

loc_00337773: ;
    MEM32(esi + 0x48) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00029EE3(); return; /* tail jmp 0x00029EE3 */

}

/**
 * sub_00337790
 * Original: 0x00337790 - 0x003377B1 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337790: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x82ABFC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003377ABu); RECOMP_ABI_CALL(0x0055A1C7u, sub_0055A1C7); /* call 0x0055A1C7 */

loc_003377AB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003377C0
 * Original: 0x003377C0 - 0x003377E5 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003377C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003377C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003377D9; /* je: equal / zero */

loc_003377CB: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003377D6u); RECOMP_ABI_CALL(0x0055A895u, sub_0055A895); /* call 0x0055A895 */

loc_003377D6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003377D9: ;
    MEM32(esi + 0x44) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003377F0
 * Original: 0x003377F0 - 0x003377F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003377F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003377F0: ;
    g_seh_ebp = ebp; sub_00017ABD(); return; /* tail jmp 0x00017ABD */

}

/**
 * sub_00337800
 * Original: 0x00337800 - 0x00337824 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337800: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0033780Du); RECOMP_ABI_CALL(0x000258DEu, sub_000258DE); /* call 0x000258DE */

loc_0033780D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM8(esi + 0x4C) = LO8(eax);
    MEM32(esi) = 0x82AC0C;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337830
 * Original: 0x00337830 - 0x00337837 (7 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337830(void)
{

loc_00337830: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00337840
 * Original: 0x00337840 - 0x00337872 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337840: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82AC0C;
    ecx = MEM32(0x8FCBB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337863; /* je: equal / zero */

loc_00337853: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00337859u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337857u); } /* indirect call */
    }

loc_00337859: ;
    MEM32(0x8FCBB8) = 0;

loc_00337863: ;
    MEM32(esi + 0x48) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00029EE3(); return; /* tail jmp 0x00029EE3 */

}

/**
 * sub_00337880
 * Original: 0x00337880 - 0x0033788D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337880(void)
{

loc_00337880: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x44) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337890
 * Original: 0x00337890 - 0x0033789A (10 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337890(void)
{

loc_00337890: ;
    MEM32(ecx + 0x44) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003378A0
 * Original: 0x003378A0 - 0x003378A3 (3 bytes, 1 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003378A0(void)
{

loc_003378A0: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003378B0
 * Original: 0x003378B0 - 0x003378B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003378B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003378B0: ;
    g_seh_ebp = ebp; sub_00017ABD(); return; /* tail jmp 0x00017ABD */

}

/**
 * sub_003378C0
 * Original: 0x003378C0 - 0x00337913 (83 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003378C0(void)
{

loc_003378C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003378CDu); RECOMP_ABI_CALL(0x000115E1u, sub_000115E1); /* call 0x000115E1 */

loc_003378CD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi) = 0x82AC3C;
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x60) = 0xFFFFFFFFu;
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm1.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337930
 * Original: 0x00337930 - 0x0033793B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337930: ;
    MEM32(ecx) = 0x82AC3C;
    g_seh_ebp = ebp; sub_0001CC20(); return; /* tail jmp 0x0001CC20 */

}

/**
 * sub_00337940
 * Original: 0x00337940 - 0x003379CE (142 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337940: ;
    eax = MEM32(ecx + 0x60);
    edx = MEM32(0x8FCBB0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x84);
    xmm1 = XMM_SCALAR(MEMF(eax + edx + 0xB8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + edx + 0xBC)); /* movss */
    eax = eax + edx + 0x44;
    SET_LO8(edx, MEM8(eax + 0x4D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003379A7; /* je: equal / zero */

loc_0033796C: ;
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x82AC70); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x829A30); /* addss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7C40B8); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x50) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x54) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x5C) = xmm0.f[0]; /* movss */
    g_seh_ebp = ebp; sub_00027747(); return; /* tail jmp 0x00027747 */

loc_003379A7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ecx + 0x5C) = xmm0.f[0]; /* movss */
    g_seh_ebp = ebp; sub_00027747(); return; /* tail jmp 0x00027747 */

}

/**
 * sub_00337A00
 * Original: 0x00337A00 - 0x00337A3F (63 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337A00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0x82AC74;
    ecx = 6;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00337A31; /* jne: not equal / not zero */

loc_00337A1C: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00337A25u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_00337A25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x60) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00337A31: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00337A39u); RECOMP_ABI_CALL(0x00027747u, sub_00027747); /* call 0x00027747 */

loc_00337A39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337A50
 * Original: 0x00337A50 - 0x00337A5E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337A50: ;
    edx = MEM32(ecx + 0x438);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00337A70
 * Original: 0x00337A70 - 0x00337B28 (184 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337A70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00337A7Du); RECOMP_ABI_CALL(0x000115E1u, sub_000115E1); /* call 0x000115E1 */

loc_00337A7D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi) = 0x82AC7C;
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x80) = eax;
    MEMF(esi + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x8C) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x90) = LO8(eax);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337B60
 * Original: 0x00337B60 - 0x00337B6B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337B60: ;
    MEM32(ecx) = 0x82AC7C;
    g_seh_ebp = ebp; sub_0001CC20(); return; /* tail jmp 0x0001CC20 */

}

/**
 * sub_00337B70
 * Original: 0x00337B70 - 0x00337C99 (297 bytes, 114 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337B70(void)
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

loc_00337B70: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0x82ACEC;
    esi = edx;
    ecx = 0xB;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00337BA5; /* jne: not equal / not zero */

loc_00337B8F: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00337B98u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_00337B98: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x70) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00337BA5: ;
    edi = 0x82ACDC;
    esi = edx;
    ecx = 0xD;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00337BFD; /* jne: not equal / not zero */

loc_00337BB7: ;
    esi = MEM32(eax + 8);
    PUSH32(esp, 0x829700);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00337BC5u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_00337BC5: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00337BCDu); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_00337BCD: ;
    MEMF(ebx + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x82970C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00337BDBu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_00337BDB: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x829700);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00337BE8u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_00337BE8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00337BF0u); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_00337BF0: ;
    MEMF(ebx + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00337BFD: ;
    edi = 0x82ACD0;
    esi = edx;
    ecx = 9;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00337C34; /* jne: not equal / not zero */

loc_00337C0F: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82ACC8);
    PUSH32(esp, 0x00337C1Fu); RECOMP_ABI_CALL(0x005CDDB4u, sub_005CDDB4); /* call 0x005CDDB4 */

loc_00337C1F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337C92; /* jne: not equal / not zero */

loc_00337C26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x78) = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00337C34: ;
    edi = 0x82ACBC;
    esi = edx;
    ecx = 8;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00337C5F; /* jne: not equal / not zero */

loc_00337C46: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00337C4Fu); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_00337C4F: ;
    MEMF(ebx + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00337C5F: ;
    esi = edx;
    edi = 0x82ACB0;
    ecx = 0xA;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00337C8A; /* jne: not equal / not zero */

loc_00337C71: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00337C7Au); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_00337C7A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x80) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00337C8A: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00337C92u); RECOMP_ABI_CALL(0x00027747u, sub_00027747); /* call 0x00027747 */

loc_00337C92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00337CF0
 * Original: 0x00337CF0 - 0x00337CF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337CF0(void)
{

loc_00337CF0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00337D00
 * Original: 0x00337D00 - 0x00337D2D (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337D00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00337D0Du); RECOMP_ABI_CALL(0x0001E999u, sub_0001E999); /* call 0x0001E999 */

loc_00337D0D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM8(esi + 0x28) = LO8(eax);
    MEM32(esi) = 0x82ACFC;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337D40
 * Original: 0x00337D40 - 0x00337D4B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337D40: ;
    MEM32(ecx) = 0x82ACFC;
    g_seh_ebp = ebp; sub_00035612(); return; /* tail jmp 0x00035612 */

}

/**
 * sub_00337D50
 * Original: 0x00337D50 - 0x00337F25 (469 bytes, 203 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337D50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00337DB1; /* ja: above (unsigned >) */

loc_00337D5C: ;
    edx = ZX8(MEM8(edx + 0x337DE4));
    { uint32_t _jt = MEM32(edx * 4 + 0x337DC0); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00337D6Au) goto loc_00337D6A;
    if (_jt == 0x00337D73u) goto loc_00337D73;
    if (_jt == 0x00337D84u) goto loc_00337D84;
    if (_jt == 0x00337D8Du) goto loc_00337D8D;
    if (_jt == 0x00337D96u) goto loc_00337D96;
    if (_jt == 0x00337D9Fu) goto loc_00337D9F;
    if (_jt == 0x00337DA8u) goto loc_00337DA8;
    if (_jt == 0x00337DB1u) goto loc_00337DB1;
    if (_jt == 0x00337DBAu) goto loc_00337DBA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00337D6A: ;
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x18)); return; /* indirect tail jmp */

loc_00337D73: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337DBA; /* jne: not equal / not zero */

loc_00337D79: ;
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_00021171(); return; /* tail jmp 0x00021171 */

loc_00337D84: ;
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x14)); return; /* indirect tail jmp */

loc_00337D8D: ;
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x1C)); return; /* indirect tail jmp */

loc_00337D96: ;
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x20)); return; /* indirect tail jmp */

loc_00337D9F: ;
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10)); return; /* indirect tail jmp */

loc_00337DA8: ;
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x24)); return; /* indirect tail jmp */

loc_00337DB1: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00017ABD(); return; /* tail jmp 0x00017ABD */

loc_00337DBA: ;
    esp += 8; return; /* ret 4 */

    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + -1476381827) = MEM8(esi + -1476381827) + LO8(edx);
    _fa = (uint32_t)(MEM8(esi + -1476381827)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_00337E0A; /* jge: greater or equal (signed >=) */

loc_00337DD7: ;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi + 0x7300337D) = MEM8(edi + 0x7300337D) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edi + 0x7300337D)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_00337E12; /* jge: greater or equal (signed >=) */

loc_00337DDF: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + edi * 2 + 0x1000033) = MEM8(ebp + edi * 2 + 0x1000033) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebp + edi * 2 + 0x1000033)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + 0x2020006)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax + 0x2020006);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + HI8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_00337E02: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_00337E0A: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_00337E12: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    edi = 0x82AD5C;
    esi = eax;
    ecx = 0xD;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00337E71; /* jne: not equal / not zero */

loc_00337E3F: ;
    eax = MEM32(ebx + 8);
    edx = eax + 1;

loc_00337E45: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337E45; /* jne: not equal / not zero */

loc_00337E4C: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00337E57u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00337E57: ;
    MEM32(ebp + 0x30) = eax;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00337E60: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337E60; /* jne: not equal / not zero */

loc_00337E6A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00337E71: ;
    edi = 0x82AD4C;
    esi = eax;
    ecx = 0xE;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00337EC1; /* jne: not equal / not zero */

loc_00337E83: ;
    eax = MEM32(ebx + 8);
    edx = eax + 1;
    /* nop */

loc_00337E90: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337E90; /* jne: not equal / not zero */

loc_00337E97: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00337EA5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00337EA5: ;
    MEM32(ebp + 0x34) = eax;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;

loc_00337EB0: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337EB0; /* jne: not equal / not zero */

loc_00337EBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00337EC1: ;
    esi = eax;
    edi = 0x82AD40;
    ecx = 9;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00337F16; /* jne: not equal / not zero */

loc_00337ED3: ;
    ebx = MEM32(ebx + 8);
    edi = 0x82AD38;
    esi = ebx;
    ecx = 7;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00337EF6; /* jne: not equal / not zero */

loc_00337EE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x2C) = 1;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00337EF6: ;
    edi = 0x82AD2C;
    esi = ebx;
    ecx = 9;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00337F1E; /* jne: not equal / not zero */

loc_00337F08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x2C) = 2;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00337F16: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00337F1Eu); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_00337F1E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337F70
 * Original: 0x00337F70 - 0x00337F98 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337F70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00337F7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337F7Bu); } /* indirect call */
    }

loc_00337F7E: ;
    edx = MEM32(esi + 0x34);
    PUSH32(esp, edx);
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, 0x00337F8Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00337F8A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337FB0
 * Original: 0x00337FB0 - 0x00337FB3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337FB0(void)
{

loc_00337FB0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337FC0
 * Original: 0x00337FC0 - 0x00337FC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337FC0: ;
    g_seh_ebp = ebp; sub_00017ABD(); return; /* tail jmp 0x00017ABD */

}

/**
 * sub_00337FD0
 * Original: 0x00337FD0 - 0x00337FD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337FD0: ;
    g_seh_ebp = ebp; sub_00017ABD(); return; /* tail jmp 0x00017ABD */

}

/**
 * sub_00337FE0
 * Original: 0x00337FE0 - 0x00338046 (102 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337FE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00337FEEu); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_00337FEE: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00338007; /* jne: not equal / not zero */

loc_00337FF4: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00337FFFu); RECOMP_ABI_CALL(0x000229FEu, sub_000229FE); /* call 0x000229FE */

loc_00337FFF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00338007; /* je: equal / zero */

loc_00338003: ;
    MEM8(esi + 0x11) = 2;

loc_00338007: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00338041; /* jne: not equal / not zero */

loc_0033800D: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00338041; /* jne: not equal / not zero */

loc_00338016: ;
    edx = MEM32(esi + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(eax + 0x28);
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00338034; /* jne: not equal / not zero */

loc_00338022: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00338028u); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_00338028: ;
    POP32(esp, edi);
    MEM32(esi + 0x3C) = eax;
    MEM8(esi + 0x11) = 3;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00338034: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033803Au); RECOMP_ABI_CALL(0x0002ACF8u, sub_0002ACF8); /* call 0x0002ACF8 */

loc_0033803A: ;
    MEM32(esi + 0x3C) = eax;
    MEM8(esi + 0x11) = 3;

loc_00338041: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00338060
 * Original: 0x00338060 - 0x00338090 (48 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00338060: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0033806Du); RECOMP_ABI_CALL(0x0001E999u, sub_0001E999); /* call 0x0001E999 */

loc_0033806D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM8(esi + 0x28) = LO8(eax);
    MEM32(esi + 0x40) = eax;
    MEM32(esi) = 0x82AD6C;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003380A0
 * Original: 0x003380A0 - 0x003380C4 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003380A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003380A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003380ADu); RECOMP_ABI_CALL(0x0001E999u, sub_0001E999); /* call 0x0001E999 */

loc_003380AD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM8(esi + 0x28) = LO8(eax);
    MEM32(esi) = 0x82AD9C;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003380D0
 * Original: 0x003380D0 - 0x003380DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003380D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003380D0: ;
    MEM32(ecx) = 0x82AD9C;
    g_seh_ebp = ebp; sub_00035612(); return; /* tail jmp 0x00035612 */

}

/**
 * sub_003380E0
 * Original: 0x003380E0 - 0x00338177 (151 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003380E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003380E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0033810C; /* ja: above (unsigned >) */

loc_003380EC: ;
    edx = ZX8(MEM8(edx + 0x338128));
    { uint32_t _jt = MEM32(edx * 4 + 0x338118); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003380FAu) goto loc_003380FA;
    if (_jt == 0x00338103u) goto loc_00338103;
    if (_jt == 0x0033810Cu) goto loc_0033810C;
    if (_jt == 0x00338115u) goto loc_00338115;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003380FA: ;
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10)); return; /* indirect tail jmp */

loc_00338103: ;
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x14)); return; /* indirect tail jmp */

loc_0033810C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00017ABD(); return; /* tail jmp 0x00017ABD */

loc_00338115: ;
    esp += 8; return; /* ret 4 */

    ecx = esi;
    PUSH32(esp, 0x00338164u); RECOMP_ABI_CALL(0x0002D0CFu, sub_0002D0CF); /* call 0x0002D0CF */

loc_00338164: ;
    PUSH32(esp, 0x82ADB8);
    ecx = esi;
    PUSH32(esp, 0x00338170u); RECOMP_ABI_CALL(0x000353CEu, sub_000353CE); /* call 0x000353CE */

loc_00338170: ;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00338180
 * Original: 0x00338180 - 0x003381AF (47 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00338180: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0033818Eu); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_0033818E: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00338199u); RECOMP_ABI_CALL(0x000229FEu, sub_000229FE); /* call 0x000229FE */

loc_00338199: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003381AA; /* je: equal / zero */

loc_0033819D: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003381A7u); RECOMP_ABI_CALL(0x0002EFF1u, sub_0002EFF1); /* call 0x0002EFF1 */

loc_003381A7: ;
    MEM32(esi + 0x30) = eax;

loc_003381AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003381C0
 * Original: 0x003381C0 - 0x003382AB (235 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003381C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003381C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 0x38); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x30); /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, ecx);
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x003382AAu); RECOMP_ABI_CALL(0x005A0B75u, sub_005A0B75); /* call 0x005A0B75 */

loc_003382AA: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003382F0
 * Original: 0x003382F0 - 0x00338331 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003382F0(void)
{

loc_003382F0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    eax = MEM32(0x8C4D5C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, edx);
    ecx = MEM32(0x8C4D58);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x00338330u); RECOMP_ABI_CALL(0x005A0B75u, sub_005A0B75); /* call 0x005A0B75 */

loc_00338330: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00338350
 * Original: 0x00338350 - 0x00338376 (38 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338350(void)
{

loc_00338350: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x10) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00338380
 * Original: 0x00338380 - 0x00338381 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338380(void)
{

loc_00338380: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00338390
 * Original: 0x00338390 - 0x003383BE (46 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338390(void)
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

loc_00338390: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AA820)); /* fadd dword ptr [0x7aa820] */
    esi = ecx;
    PUSH32(esp, 0x003383A2u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003383A2: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x38);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) eax = edx; /* cmova */
    MEM32(ecx + 0x3C) = eax;
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003383D0
 * Original: 0x003383D0 - 0x003383ED (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003383D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003383D0: ;
    SET_LO8(eax, MEM8(ecx + 0x244));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003383EA; /* je: equal / zero */

loc_003383DA: ;
    eax = MEM32(ecx + 0x258);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003383EA; /* je: equal / zero */

loc_003383E4: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003383EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00338400
 * Original: 0x00338400 - 0x00338418 (24 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00338400: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00338412u); RECOMP_ABI_CALL(0x0055FB73u, sub_0055FB73); /* call 0x0055FB73 */

loc_00338412: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00338420
 * Original: 0x00338420 - 0x00338454 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338420(void)
{

loc_00338420: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00338426u); RECOMP_ABI_CALL(0x0001F0BFu, sub_0001F0BF); /* call 0x0001F0BF */

loc_00338426: ;
    ecx = eax;
    PUSH32(esp, 0x0033842Du); RECOMP_ABI_CALL(0x00014D9Fu, sub_00014D9F); /* call 0x00014D9F */

loc_0033842D: ;
    PUSH32(esp, 0x00338432u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_00338432: ;
    ecx = MEM32(0x8FCBD0);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00338446u); RECOMP_ABI_CALL(0x00557EA3u, sub_00557EA3); /* call 0x00557EA3 */

loc_00338446: ;
    PUSH32(esp, 0x0033844Bu); RECOMP_ABI_CALL(0x0001F0BFu, sub_0001F0BF); /* call 0x0001F0BF */

loc_0033844B: ;
    ecx = eax;
    PUSH32(esp, 0x00338452u); RECOMP_ABI_CALL(0x00029DFDu, sub_00029DFD); /* call 0x00029DFD */

loc_00338452: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00338470
 * Original: 0x00338470 - 0x00338482 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338470(void)
{

loc_00338470: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033847Au); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0033847A: ;
    ecx = eax;
    PUSH32(esp, 0x00338481u); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_00338481: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00338490
 * Original: 0x00338490 - 0x003384B8 (40 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338490(void)
{

loc_00338490: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(ecx + 0x25E) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(ecx + 0x25F) = 0xFF;
    MEM8(ecx + 0x25D) = LO8(edx);
    MEM8(ecx + 0x25C) = LO8(eax);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003384D0
 * Original: 0x003384D0 - 0x00338555 (133 bytes, 51 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003384D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003384D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x003384DBu); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_003384DB: ;
    ecx = eax;
    PUSH32(esp, 0x003384E2u); RECOMP_ABI_CALL(0x00020A3Cu, sub_00020A3C); /* call 0x00020A3C */

loc_003384E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00338544; /* je: equal / zero */

loc_003384E6: ;
    goto loc_003384F0;

    /* nop */
    /* nop */

loc_003384F0: ;
    PUSH32(esp, 0x82A884);
    ecx = eax;
    PUSH32(esp, 0x003384FCu); RECOMP_ABI_CALL(0x00576A02u, sub_00576A02); /* call 0x00576A02 */

loc_003384FC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00338532; /* je: equal / zero */

loc_00338502: ;
    ecx = esi;
    PUSH32(esp, 0x00338509u); RECOMP_ABI_CALL(0x0056BC9Au, sub_0056BC9A); /* call 0x0056BC9A */

loc_00338509: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00338513u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_00338513: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x82ADC8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00338522u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00338522: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_0033854A; /* je: equal / zero */

loc_0033852D: ;
    PUSH32(esp, 0x00338532u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00338532: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00338539u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_00338539: ;
    ecx = eax;
    PUSH32(esp, 0x00338540u); RECOMP_ABI_CALL(0x00020A3Cu, sub_00020A3C); /* call 0x00020A3C */

loc_00338540: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003384F0; /* jne: not equal / not zero */

loc_00338544: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0033854A: ;
    PUSH32(esp, 0x0033854Fu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0033854F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00338580
 * Original: 0x00338580 - 0x00338615 (149 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00338580(void)
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

loc_00338580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x254);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003385B1u); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_003385B1: ;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    eax = MEM32(esi + 0x254);
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    esi = eax + 0x50;
    ecx = 0x10;
    edi = esp + 0x10;
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
    if (CMP_GE(_fas, _fbs)) goto loc_003385D5; /* jge: greater or equal (signed >=) */

loc_003385CF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_003385D5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x82ADDC)); /* fmul dword ptr [0x82addc] */
    MEM32(esp + 0xC) = ebx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_003385F1; /* jge: greater or equal (signed >=) */

loc_003385EB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_003385F1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x82ADD8)); /* fmul dword ptr [0x82add8] */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033860Cu); RECOMP_ABI_CALL(0x00557FF4u, sub_00557FF4); /* call 0x00557FF4 */

loc_0033860C: ;
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
 * sub_00338640
 * Original: 0x00338640 - 0x00338BB2 (1394 bytes, 332 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338640(void)
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

loc_00338640: ;
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8FC1D0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(eax + 0xE8);
    PUSH32(esp, 0x100);
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, 0x00338665u); RECOMP_ABI_CALL(0x0001C009u, sub_0001C009); /* call 0x0001C009 */

loc_00338665: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00338674u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00338674: ;
    ecx = eax;
    PUSH32(esp, 0x0033867Bu); RECOMP_ABI_CALL(0x0055D4AAu, sub_0055D4AA); /* call 0x0055D4AA */

loc_0033867B: ;
    eax = MEM32(esp + 0x28);
    edi = esi + 0x254;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00338694u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00338694: ;
    ecx = eax;
    PUSH32(esp, 0x0033869Bu); RECOMP_ABI_CALL(0x0055D26Du, sub_0055D26D); /* call 0x0055D26D */

loc_0033869B: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003386AAu); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_003386AA: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003386B4u); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_003386B4: ;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003386C3u); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_003386C3: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003386D9u); RECOMP_ABI_CALL(0x00557D90u, sub_00557D90); /* call 0x00557D90 */

loc_003386D9: ;
    _fa = (uint32_t)(MEM8(esi + 0x270)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x270), LO8(ebx) (8-bit) */
    MEM32(esp + 0x40) = 6;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x20) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00338830; /* jne: not equal / not zero */

loc_003386F5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00338736u); RECOMP_ABI_CALL(0x00557980u, sub_00557980); /* call 0x00557980 */

loc_00338736: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    SET_LO8(eax, MEM8(esp + 0x15C));
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x14); /* cvtsi2ss */
    xmm2.f[0] = (float)(int32_t)MEM32(esp + 0x1C); /* cvtsi2ss */
    SET_LO8(ecx, MEM8(0x8FC1CD));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    eax = MEM32(esp + 0x24);
    if (CMP_EQ(_fa, _fb)) goto loc_003387C8; /* je: equal / zero */

loc_0033875D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = edx;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x829A60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x829A68)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_00338795; /* jge: greater or equal (signed >=) */

loc_0033878F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00338795: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x829A70)); /* fmul dword ptr [ebp + 0x829a70] */
    PUSH32(esp, 0x003387A0u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003387A0: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = eax;
    MEM32(esp + 0x24) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_003387B8; /* jge: greater or equal (signed >=) */

loc_003387B2: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_003387B8: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x829A78)); /* fmul dword ptr [ebp + 0x829a78] */
    PUSH32(esp, 0x003387C3u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_003387C3: ;
    goto loc_0033885C;

loc_003387C8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = edx;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + 0x829A40); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + 0x829A48); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_00338800; /* jge: greater or equal (signed >=) */

loc_003387FA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00338800: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x829A50)); /* fmul dword ptr [ebp + 0x829a50] */
    PUSH32(esp, 0x0033880Bu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0033880B: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = eax;
    MEM32(esp + 0x24) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_00338823; /* jge: greater or equal (signed >=) */

loc_0033881D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00338823: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x829A58)); /* fmul dword ptr [ebp + 0x829a58] */
    PUSH32(esp, 0x0033882Eu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0033882E: ;
    goto loc_0033885C;

loc_00338830: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x264)); /* movss */
    edi = MEM32(esi + 0x268);
    eax = MEM32(esi + 0x26C);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x260)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = edi;

loc_0033885C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x20) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00338872; /* jge: greater or equal (signed >=) */

loc_0033886C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00338872: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0033888C; /* jge: greater or equal (signed >=) */

loc_00338886: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0033888C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    SET_HI8(edx, MEM8(esi + 0x25E));
    MEMF(esp + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 1;
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x80) = eax;
    SET_LO8(edx, MEM8(esi + 0x25D));
    eax = ZX8(MEM8(esi + 0x25C));
    ecx = 3;
    MEMF(esp + 0xB0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esp + 0x54) = ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x84) = ecx;
    ecx = ZX8(MEM8(esi + 0x25F));
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(esp + 0xD0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    edi = 2;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(esp + 0xD4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = esp + 0xDC;
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x58) = edi;
    MEM32(esp + 0x5C) = ebx;
    MEM32(esp + 0x60) = ebx;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x70) = ebx;
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x74) = ebx;
    MEM32(esp + 0x7C) = edi;
    MEM32(esp + 0x88) = edi;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x34) = 4;
    PUSH32(esp, 0x00338A09u); RECOMP_ABI_CALL(0x0056A600u, sub_0056A600); /* call 0x0056A600 */

loc_00338A09: ;
    PUSH32(esp, 0x00338A0Eu); RECOMP_ABI_CALL(0x000169B0u, sub_000169B0); /* call 0x000169B0 */

loc_00338A0E: ;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0xE4;
    PUSH32(esp, 0x00338A20u); RECOMP_ABI_CALL(0x0056A770u, sub_0056A770); /* call 0x0056A770 */

loc_00338A20: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x82AE18);
    PUSH32(esp, 0x00338A2Du); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_00338A2D: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0xE4;
    PUSH32(esp, 0x00338A3Eu); RECOMP_ABI_CALL(0x0056798Eu, sub_0056798E); /* call 0x0056798E */

loc_00338A3E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x829C64);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0xF0;
    PUSH32(esp, 0x00338A5Fu); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_00338A5F: ;
    PUSH32(esp, 0x18);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A168);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0xEC;
    PUSH32(esp, 0x00338A7Cu); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_00338A7C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A09C);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0xF0;
    PUSH32(esp, 0x00338A9Au); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_00338A9A: ;
    PUSH32(esp, 0x18);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A158);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0xEC;
    PUSH32(esp, 0x00338AB7u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_00338AB7: ;
    PUSH32(esp, 4);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A150);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0xEC;
    PUSH32(esp, 0x00338AD4u); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_00338AD4: ;
    PUSH32(esp, 4);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82AE0C);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0xEC;
    PUSH32(esp, 0x00338AF1u); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_00338AF1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82AE08);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0xF0;
    PUSH32(esp, 0x00338B12u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_00338B12: ;
    PUSH32(esp, 0x18);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82ADFC);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0xEC;
    PUSH32(esp, 0x00338B2Fu); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_00338B2F: ;
    PUSH32(esp, 4);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A144);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0xEC;
    PUSH32(esp, 0x00338B4Cu); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_00338B4C: ;
    PUSH32(esp, 0x82ADF0);
    PUSH32(esp, 0x82ADE0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0xE8;
    PUSH32(esp, 0x00338B67u); RECOMP_ABI_CALL(0x0056A352u, sub_0056A352); /* call 0x0056A352 */

loc_00338B67: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0xE0;
    PUSH32(esp, 0x00338B78u); RECOMP_ABI_CALL(0x005679BBu, sub_005679BB); /* call 0x005679BB */

loc_00338B78: ;
    _fb = (uint32_t)(0x250) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x250;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0xE4;
    PUSH32(esp, 0x00338B90u); RECOMP_ABI_CALL(0x0056973Eu, sub_0056973E); /* call 0x0056973E */

loc_00338B90: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 0x00338B99u); RECOMP_ABI_CALL(0x0002578Fu, sub_0002578F); /* call 0x0002578F */

loc_00338B99: ;
    ecx = esp + 0xDC;
    PUSH32(esp, 0x00338BA5u); RECOMP_ABI_CALL(0x0056A677u, sub_0056A677); /* call 0x0056A677 */

loc_00338BA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00338D10
 * Original: 0x00338D10 - 0x00338D4C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00338D10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x240;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00338D25u); RECOMP_ABI_CALL(0x005737D9u, sub_005737D9); /* call 0x005737D9 */

loc_00338D25: ;
    _fb = (uint32_t)(0x248) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x248;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00338D36u); RECOMP_ABI_CALL(0x0055A37Eu, sub_0055A37E); /* call 0x0055A37E */

loc_00338D36: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00338D40u); RECOMP_ABI_CALL(0x00558A33u, sub_00558A33); /* call 0x00558A33 */

loc_00338D40: ;
    PUSH32(esp, 2);
    ecx = eax;
    PUSH32(esp, 0x00338D49u); RECOMP_ABI_CALL(0x005589ADu, sub_005589AD); /* call 0x005589AD */

loc_00338D49: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00338D60
 * Original: 0x00338D60 - 0x00338DB4 (84 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00338D60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00338D67u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_00338D67: ;
    esi = MEM32(eax + 0x10);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00338D74u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00338D74: ;
    ecx = eax;
    PUSH32(esp, 0x00338D7Bu); RECOMP_ABI_CALL(0x0055DB68u, sub_0055DB68); /* call 0x0055DB68 */

loc_00338D7B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esp + 7) = LO8(eax);
    MEM8(esp + 6) = LO8(eax);
    MEM8(esp + 5) = LO8(eax);
    MEM8(esp + 4) = LO8(eax);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00338DA0u); RECOMP_ABI_CALL(0x00557F14u, sub_00557F14); /* call 0x00557F14 */

loc_00338DA0: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00338DAAu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00338DAA: ;
    ecx = eax;
    PUSH32(esp, 0x00338DB1u); RECOMP_ABI_CALL(0x0055DBF5u, sub_0055DBF5); /* call 0x0055DBF5 */

loc_00338DB1: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00338DD0
 * Original: 0x00338DD0 - 0x00338E30 (96 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00338DD0: ;
    SET_LO8(eax, MEM8(0x8C4679));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00338E2B; /* je: equal / zero */

loc_00338DDF: ;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00338DEFu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00338DEF: ;
    ecx = eax;
    PUSH32(esp, 0x00338DF6u); RECOMP_ABI_CALL(0x0055D4AAu, sub_0055D4AA); /* call 0x0055D4AA */

loc_00338DF6: ;
    eax = MEM32(ebx + 0x1C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00338E2A; /* jle: less or equal (signed <=) */

loc_00338DFF: ;
    PUSH32(esp, edi);
    edi = ebx + 4;

loc_00338E03: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00338E0Cu); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_00338E0C: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00338E16u); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_00338E16: ;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00338E1Eu); RECOMP_ABI_CALL(0x000149F8u, sub_000149F8); /* call 0x000149F8 */

loc_00338E1E: ;
    eax = MEM32(ebx + 0x1C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00338E03; /* jl: less (signed <) */

loc_00338E29: ;
    POP32(esp, edi);

loc_00338E2A: ;
    POP32(esp, esi);

loc_00338E2B: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00338E50
 * Original: 0x00338E50 - 0x00338EAF (95 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00338E50: ;
    PUSH32(esp, 0x00338E55u); RECOMP_ABI_CALL(0x0001B339u, sub_0001B339); /* call 0x0001B339 */

loc_00338E55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00338EA2; /* ja: above (unsigned >) */

loc_00338E5A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x338EB0); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00338E61u) goto loc_00338E61;
    if (_jt == 0x00338E6Eu) goto loc_00338E6E;
    if (_jt == 0x00338E7Bu) goto loc_00338E7B;
    if (_jt == 0x00338E88u) goto loc_00338E88;
    if (_jt == 0x00338E95u) goto loc_00338E95;
    if (_jt == 0x00338EA2u) goto loc_00338EA2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00338E61: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = 0x726567;
    esp += 8; return; /* ret 4 */

loc_00338E6E: ;
    edx = MEM32(esp + 4);
    MEM32(edx) = 0x657773;
    esp += 8; return; /* ret 4 */

loc_00338E7B: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x6E6966;
    esp += 8; return; /* ret 4 */

loc_00338E88: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = 0x657266;
    esp += 8; return; /* ret 4 */

loc_00338E95: ;
    edx = MEM32(esp + 4);
    MEM32(edx) = 0x657A63;
    esp += 8; return; /* ret 4 */

loc_00338EA2: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x676E65;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00338EF0
 * Original: 0x00338EF0 - 0x00338F07 (23 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00338EF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = eax;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    POP32(esp, esi);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00338F10
 * Original: 0x00338F10 - 0x00338F14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338F10(void)
{

loc_00338F10: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00338F20
 * Original: 0x00338F20 - 0x00338F24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338F20(void)
{

loc_00338F20: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00338F30
 * Original: 0x00338F30 - 0x00338F3D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00338F30: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00338F40
 * Original: 0x00338F40 - 0x00338F4A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338F40(void)
{

loc_00338F40: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00338F50
 * Original: 0x00338F50 - 0x00338F54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338F50(void)
{

loc_00338F50: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00338F60
 * Original: 0x00338F60 - 0x00338F91 (49 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338F60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00338F60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx + 9;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00338F77u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00338F77: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00338F7Fu); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_00338F7F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00338F87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00338F84u); } /* indirect call */
    }

loc_00338F87: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00338FA0
 * Original: 0x00338FA0 - 0x00338FE6 (70 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00338FA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = ecx + 9;
    PUSH32(esp, edi);
    edi = eax;
    /* nop */

loc_00338FB0: ;
    SET_LO8(edx, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00338FB0; /* jne: not equal / not zero */

loc_00338FBA: ;
    edx = MEM32(ecx);
    esi = edx + 1;
    /* nop */

loc_00338FC0: ;
    SET_LO8(ebx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00338FC0; /* jne: not equal / not zero */

loc_00338FC7: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00338FD9; /* je: equal / zero */

loc_00338FCB: ;
    SET_LO8(ebx, 0x2F);
    /* nop */

loc_00338FD0: ;
    _fa = (uint32_t)(MEM8(ecx + edx + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + edx + 8), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00338FD9; /* je: equal / zero */

loc_00338FD6: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00338FD0; /* jne: not equal / not zero */

loc_00338FD9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_00338FE5; /* jle: less or equal (signed <=) */

loc_00338FE0: ;
    MEM8(edx + ecx + 8) = 0;

loc_00338FE5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00339000
 * Original: 0x00339000 - 0x00339020 (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00339000: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx + 9;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00339017u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00339017: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00339030
 * Original: 0x00339030 - 0x003390A1 (113 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00339030: ;
    SET_LO8(eax, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = ecx + 9;
    if (CMP_EQ(_fa, _fb)) goto loc_0033904F; /* je: equal / zero */

loc_0033903B: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x829A94);
    PUSH32(esp, eax);
    goto loc_0033907C;

loc_0033904F: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_00339074; /* jne: not equal / not zero */

loc_0033905D: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82AB70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033906Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0033906F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033908A;

loc_00339074: ;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_0033907C: ;
    PUSH32(esp, 0x82AE34);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00339087u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00339087: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033908A: ;
    PUSH32(esp, 0x0033908Fu); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_0033908F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00339097u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00339094u); } /* indirect call */
    }

loc_00339097: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003390C0
 * Original: 0x003390C0 - 0x003390D8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003390C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003390C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003390E0
 * Original: 0x003390E0 - 0x003391F0 (272 bytes, 108 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003390E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003390E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0033916C; /* je: equal / zero */

loc_003390F0: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, ebx);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x82AE44);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x0033910Eu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0033910E: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0033911Au); RECOMP_ABI_CALL(0x0057287Du, sub_0057287D); /* call 0x0057287D */

loc_0033911A: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00339130; /* je: equal / zero */

loc_00339122: ;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033912Du); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0033912D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00339130: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, ebx);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x829EE8);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x0033914Au); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0033914A: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00339156u); RECOMP_ABI_CALL(0x0057287Du, sub_0057287D); /* call 0x0057287D */

loc_00339156: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033916C; /* je: equal / zero */

loc_0033915E: ;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00339169u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_00339169: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033916C: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003391AD; /* je: equal / zero */

loc_00339174: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00339188; /* je: equal / zero */

loc_0033917B: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00339188u); RECOMP_ABI_CALL(0x005599F1u, sub_005599F1); /* call 0x005599F1 */

loc_00339188: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003391AD; /* je: equal / zero */

loc_0033918F: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0033919Cu); RECOMP_ABI_CALL(0x00559AEFu, sub_00559AEF); /* call 0x00559AEF */

loc_0033919C: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003391AAu); RECOMP_ABI_CALL(0x0055A84Au, sub_0055A84A); /* call 0x0055A84A */

loc_003391AA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003391AD: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0xC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003391CD; /* je: equal / zero */

loc_003391B9: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003391C4u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_003391C4: ;
    ecx = eax;
    PUSH32(esp, 0x003391CBu); RECOMP_ABI_CALL(0x0055D5A6u, sub_0055D5A6); /* call 0x0055D5A6 */

loc_003391CB: ;
    MEM32(esi) = ebx;

loc_003391CD: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003391E9; /* je: equal / zero */

loc_003391D4: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003391DFu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_003391DF: ;
    ecx = eax;
    PUSH32(esp, 0x003391E6u); RECOMP_ABI_CALL(0x0055D70Fu, sub_0055D70F); /* call 0x0055D70F */

loc_003391E6: ;
    MEM32(esi + 8) = ebx;

loc_003391E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00339240
 * Original: 0x00339240 - 0x003392C2 (130 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339240(void)
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

loc_00339240: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x10); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003392BB; /* jnp: not parity */

loc_00339256: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x82A09C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00339276u); RECOMP_ABI_CALL(0x0055B805u, sub_0055B805); /* call 0x0055B805 */

loc_00339276: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    PUSH32(esp, 0x00339285u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00339285: ;
    edx = MEM32(esp + 4);
    eax = ZX8(LO8(eax));
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x82A09C);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x003392BBu); RECOMP_ABI_CALL(0x0055BACEu, sub_0055BACE); /* call 0x0055BACE */

loc_003392BB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
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
 * sub_003392F0
 * Original: 0x003392F0 - 0x00339311 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003392F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003392F0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x82AE58);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033930Bu); RECOMP_ABI_CALL(0x0055A1C7u, sub_0055A1C7); /* call 0x0055A1C7 */

loc_0033930B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00339320
 * Original: 0x00339320 - 0x0033938C (108 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00339320(void)
{

loc_00339320: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0033932Du); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_0033932D: ;
    ecx = esi;
    PUSH32(esp, 0x00339334u); RECOMP_ABI_CALL(0x0002D0CFu, sub_0002D0CF); /* call 0x0002D0CF */

loc_00339334: ;
    ecx = esi;
    PUSH32(esp, 0x0033933Bu); RECOMP_ABI_CALL(0x0002D0CFu, sub_0002D0CF); /* call 0x0002D0CF */

loc_0033933B: ;
    PUSH32(esp, 0x82AE9C);
    ecx = esi;
    PUSH32(esp, 0x00339347u); RECOMP_ABI_CALL(0x000353CEu, sub_000353CE); /* call 0x000353CE */

loc_00339347: ;
    ecx = MEM32(eax + 0x24);
    MEM32(esi + 0x6B0) = ecx;
    ecx = esi;
    PUSH32(esp, 0x00339357u); RECOMP_ABI_CALL(0x0002D0CFu, sub_0002D0CF); /* call 0x0002D0CF */

loc_00339357: ;
    PUSH32(esp, 0x82AE7C);
    ecx = esi;
    PUSH32(esp, 0x00339363u); RECOMP_ABI_CALL(0x000353CEu, sub_000353CE); /* call 0x000353CE */

loc_00339363: ;
    edx = MEM32(eax + 0x24);
    ecx = esi;
    MEM32(esi + 0x6B4) = edx;
    PUSH32(esp, 0x00339373u); RECOMP_ABI_CALL(0x0002D0CFu, sub_0002D0CF); /* call 0x0002D0CF */

loc_00339373: ;
    PUSH32(esp, 0x82AE64);
    ecx = esi;
    PUSH32(esp, 0x0033937Fu); RECOMP_ABI_CALL(0x000353CEu, sub_000353CE); /* call 0x000353CE */

loc_0033937F: ;
    eax = MEM32(eax + 0x24);
    MEM32(esi + 0x6B8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003393B0
 * Original: 0x003393B0 - 0x003393C6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003393B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003393B0: ;
    SET_LO8(edx, MEM8(ecx + 0x5C));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003393C5; /* je: equal / zero */

loc_003393B9: ;
    MEM32(ecx + 0x588) = eax;
    MEM32(ecx + 0x58C) = eax;

loc_003393C5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003393D0
 * Original: 0x003393D0 - 0x003393D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003393D0(void)
{

loc_003393D0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003393E0
 * Original: 0x003393E0 - 0x003393E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003393E0(void)
{

loc_003393E0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}
