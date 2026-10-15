/**
 * nhl_07_recomp - Recompiled code chunk 140
 * Functions: 250 (0x0023E880 - 0x0024E770)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0023E880
 * Original: 0x0023E880 - 0x0023E8B9 (57 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023E880: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023E8B0; /* je: equal / zero */

loc_0023E88D: ;
    edx = MEM32(ecx + -16);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    eax = ecx + -16;
    if (CMP_EQ(_fa, _fb)) goto loc_0023E8A7; /* je: equal / zero */

loc_0023E897: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0023E89Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023E89Bu); } /* indirect call */
    }

loc_0023E89E: ;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x58) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0023E8A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0023E8ADu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0023E8AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0023E8B0: ;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x58) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023E8D0
 * Original: 0x0023E8D0 - 0x0023E8D3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E8D0(void)
{

loc_0023E8D0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023E8E0
 * Original: 0x0023E8E0 - 0x0023E9FF (287 bytes, 85 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E8E0(void)
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

loc_0023E8E0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7AA7EC)); /* movss */
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x58);
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    edi = ebx + 0x2C;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    eax = edi;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FE2BC)); /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ecx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    edx = ebx + 0x38;
    MEM32(edx) = eax;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    eax = MEM32(ebx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0023E9F2; /* jle: less or equal (signed <=) */

loc_0023E95A: ;
    PUSH32(esp, esi);
    esi = ebp + 0x34;
    MEM32(esp + 0x10) = eax;

loc_0023E962: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0023E974u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023E971u); } /* indirect call */
    }

loc_0023E974: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + -8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E983; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + -8)) */

loc_0023E97E: ;
    edx = MEM32(esi + -8);
    MEM32(edi) = edx;

loc_0023E983: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + -4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E994; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + -4)) */

loc_0023E98E: ;
    eax = MEM32(esi + -4);
    MEM32(edi + 4) = eax;

loc_0023E994: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E9A3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi)) */

loc_0023E99E: ;
    ecx = MEM32(esi);
    MEM32(edi + 8) = ecx;

loc_0023E9A3: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E9B4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0xC)) */

loc_0023E9AE: ;
    edx = MEM32(esi + 4);
    MEM32(edi + 0xC) = edx;

loc_0023E9B4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E9C5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x10)) */

loc_0023E9BF: ;
    eax = MEM32(esi + 8);
    MEM32(edi + 0x10) = eax;

loc_0023E9C5: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E9D6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x14)) */

loc_0023E9D0: ;
    ecx = MEM32(esi + 0xC);
    MEM32(edi + 0x14) = ecx;

loc_0023E9D6: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x170;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x170;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0023E962; /* jne: not equal / not zero */

loc_0023E9F1: ;
    POP32(esp, esi);

loc_0023E9F2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM8(ebx + 7) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023EA50
 * Original: 0x0023EA50 - 0x0023EA55 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023EA50(void)
{

loc_0023EA50: ;
    MEM8(ecx + 7) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0023EA60
 * Original: 0x0023EA60 - 0x0023EAFF (159 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023EA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023EA60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x100)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x104)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x108)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10C)); /* movss */
    edx = ecx + 0x100;
    MEM32(edx) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(edx + 4) = esi;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    esi = MEM32(esp + 0x18);
    MEM32(edx + 8) = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x1C);
    MEM32(edx + 0xC) = esi;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x164)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x164) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x168) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023EB30
 * Original: 0x0023EB30 - 0x0023EE0F (735 bytes, 181 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023EB30(void)
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

loc_0023EB30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0023EB89; /* je: equal / zero */

loc_0023EB45: ;
    eax = esi + 0x110;
    edx = MEM32(eax);
    ecx = esi + 0x120;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esi + 0x130;
    eax = MEM32(ecx);
    edx = esi + 0x140;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;

loc_0023EB89: ;
    ebx = MEM32(ebp + 8);
    edi = esi + 0x110;
    PUSH32(esp, edi);
    edx = esi + 0x100;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023EBA0u); RECOMP_ABI_CALL(0x0059F359u, sub_0059F359); /* call 0x0059F359 */

loc_0023EBA0: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x30); /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x34); /* subss */
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x38); /* subss */
    edx = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    eax = esi + 0x130;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x120); /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x124); /* subss */
    edx = MEM32(esp + 0x2C);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x128); /* subss */
    eax = esi + 0x150;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    MEM32(ecx + 0xC) = edx;
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
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esi + 0x160) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(eax, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x114)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x118)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = esi + 0x2C;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x28);
    ebx = eax;
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = edi;
    ebx = esi + 0x38;
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = edi;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x120); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023ED35; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x120)) */

loc_0023ED2D: ;
    ecx = MEM32(esi + 0x120);
    MEM32(eax) = ecx;

loc_0023ED35: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x124); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023ED4C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x124)) */

loc_0023ED43: ;
    edx = MEM32(esi + 0x124);
    MEM32(eax + 4) = edx;

loc_0023ED4C: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x128); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023ED63; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x128)) */

loc_0023ED5A: ;
    ecx = MEM32(esi + 0x128);
    MEM32(eax + 8) = ecx;

loc_0023ED63: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x120)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023ED7A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_0023ED71: ;
    edx = MEM32(esi + 0x120);
    MEM32(eax + 0xC) = edx;

loc_0023ED7A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x124)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023ED91; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_0023ED88: ;
    ecx = MEM32(esi + 0x124);
    MEM32(eax + 0x10) = ecx;

loc_0023ED91: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x128)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023EDA8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_0023ED9F: ;
    edx = MEM32(esi + 0x128);
    MEM32(eax + 0x14) = edx;

loc_0023EDA8: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x164)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    POP32(esp, edi);
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEM8(esi + 7) = 0;
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
 * sub_0023EED0
 * Original: 0x0023EED0 - 0x0023EF96 (198 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023EED0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0023EED0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD340)); /* movss */
    eax = ecx;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x160); /* comiss */
    MEM8(eax + 7) = 1;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023EF0A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x160)) */

loc_0023EEE7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEMF(eax + 0x150) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x154) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x158) = xmm0.f[0]; /* movss */

loc_0023EF0A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x160)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x164)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax + 0x50;
    edx = eax + 0x120;
    edi = MEM32(edx);
    esi = ecx + 0x50;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(esi + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(esi + 0xC) = edx;
    edx = eax + 0x150;
    edi = MEM32(edx);
    esi = ecx + 0x60;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(esi + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEMF(ecx + 0xA0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi + 0xC) = edx;
    MEMF(ecx + 0xA8) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(ecx + 0xAC) = xmm1.f[0]; /* movss */
    edx = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(eax + 0x60) = edx;
    eax = MEM32(ecx);
    PUSH32(esp, 0x8FA320);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0023EF93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023EF90u); } /* indirect call */
    }

loc_0023EF93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023EFD0
 * Original: 0x0023EFD0 - 0x0023F028 (88 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023EFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023EFD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023F026; /* je: equal / zero */

loc_0023EFDA: ;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0023EFFD; /* jle: less or equal (signed <=) */

loc_0023EFE4: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(eax + edi * 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023EFF5; /* je: equal / zero */

loc_0023EFEE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0023EFF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023EFF2u); } /* indirect call */
    }

loc_0023EFF5: ;
    eax = MEM32(esi + 0x50);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0023EFE4; /* jl: less (signed <) */

loc_0023EFFD: ;
    SET_LO8(eax, MEM8(esi + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0023F018; /* je: equal / zero */

loc_0023F005: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esi + 0x54);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0023F014u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023F011u); } /* indirect call */
    }

loc_0023F014: ;
    MEM8(esi + 0x58) = 0;

loc_0023F018: ;
    MEM32(esi + 0x50) = 0;
    MEM32(esi + 0x54) = 0;

loc_0023F026: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023F040
 * Original: 0x0023F040 - 0x0023F051 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023F040(void)
{

loc_0023F040: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x50) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023F060
 * Original: 0x0023F060 - 0x0023F099 (57 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023F060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023F060: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x50);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0023F093; /* jle: less or equal (signed <=) */

loc_0023F072: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);

loc_0023F077: ;
    eax = MEM32(ebx + 0x54);
    ecx = MEM32(eax + esi * 8);
    eax = MEM32(edi + 0x54);
    eax = MEM32(eax + esi * 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0023F08Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023F087u); } /* indirect call */
    }

loc_0023F08A: ;
    eax = MEM32(edi + 0x50);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0023F077; /* jl: less (signed <) */

loc_0023F092: ;
    POP32(esp, ebp);

loc_0023F093: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023F0B0
 * Original: 0x0023F0B0 - 0x0023F166 (182 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023F0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0023F0B0: ;
    eax = MEM32(ecx + 0x54);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(eax);
    edx = ecx + 0x2C;
    esi = edx;
    MEM32(esi) = edi;
    edi = MEM32(eax + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(eax + 8);
    MEM32(esi + 8) = edi;
    edi = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = edi;
    edi = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = edi;
    eax = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(ecx + 0x50);
    esi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0023F163; /* jle: less or equal (signed <=) */

loc_0023F0ED: ;
    /* nop */

loc_0023F0F0: ;
    eax = MEM32(ecx + 0x54);
    eax = MEM32(eax + esi * 8);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023F106; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0023F102: ;
    edi = MEM32(eax);
    MEM32(edx) = edi;

loc_0023F106: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023F117; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_0023F111: ;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;

loc_0023F117: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023F128; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_0023F122: ;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;

loc_0023F128: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023F139; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0xC)) */

loc_0023F133: ;
    edi = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = edi;

loc_0023F139: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023F14A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x10)) */

loc_0023F144: ;
    edi = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = edi;

loc_0023F14A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023F15B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x14)) */

loc_0023F155: ;
    eax = MEM32(eax + 0x14);
    MEM32(edx + 0x14) = eax;

loc_0023F15B: ;
    eax = MEM32(ecx + 0x50);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0023F0F0; /* jl: less (signed <) */

loc_0023F163: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023F1A0
 * Original: 0x0023F1A0 - 0x0023F1ED (77 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023F1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023F1A0: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0023F1BE; /* je: equal / zero */

loc_0023F1B0: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0023F1BE; /* jle: less or equal (signed <=) */

loc_0023F1B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0023F1BE: ;
    ecx = MEM32(edx + 0x50);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0023F1E8; /* jle: less or equal (signed <=) */

loc_0023F1C7: ;
    goto loc_0023F1D0;

    /* nop */

loc_0023F1D0: ;
    ecx = MEM32(edx + 0x54);
    ecx = MEM32(ecx + eax * 8 + 4);
    edi = MEM32(esi + ecx * 4);
    ecx = esi + ecx * 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edi;
    ecx = MEM32(edx + 0x50);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0023F1D0; /* jl: less (signed <) */

loc_0023F1E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0023F200
 * Original: 0x0023F200 - 0x0023F207 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023F200(void)
{

loc_0023F200: ;
    MEM32(ecx) = 0x7F0728;
    esp += 4; return; /* ret */

}

/**
 * sub_0023F210
 * Original: 0x0023F210 - 0x0023F22F (31 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023F210(void)
{

loc_0023F210: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA0)); /* movss */
    edx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(ecx + 0xA0) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023F240
 * Original: 0x0023F240 - 0x0023F4D9 (665 bytes, 159 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023F240(void)
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

loc_0023F240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = esi + 0x70;
    PUSH32(esp, ebx);
    eax = esi + 0x50;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023F25Fu); RECOMP_ABI_CALL(0x0059F359u, sub_0059F359); /* call 0x0059F359 */

loc_0023F25F: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x64); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x68); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x60); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x64); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x68); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x60); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x64); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x68); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x6C);
    MEM32(esi + 0x8C) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0023F365; /* jnp: not parity */

loc_0023F344: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_MEM(esi + 0x80); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esi + 0x80, xmm1); /* movaps */

loc_0023F365: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    ecx = MEM32(esp + 0x20);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    eax = esi + 0x90;
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(edx + 8) = ecx;
    MEM8(esi + 7) = 0;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 0xC) = ecx;
    xmm3 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x2C) = xmm4.f[0]; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x30) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x34) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm2.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x38) = xmm4.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023F466; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0023F461: ;
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */

loc_0023F466: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023F47E; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0023F479: ;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */

loc_0023F47E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023F496; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0023F491: ;
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */

loc_0023F496: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x38); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023F4A9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x38)) */

loc_0023F4A4: ;
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */

loc_0023F4A9: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x3C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023F4BC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x3C)) */

loc_0023F4B7: ;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */

loc_0023F4BC: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x40); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023F4D0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x40)) */

loc_0023F4CB: ;
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */

loc_0023F4D0: ;
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
 * sub_0023F580
 * Original: 0x0023F580 - 0x0023F59C (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023F580(void)
{

loc_0023F580: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xA0)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0xA4) = xmm1.f[0]; /* movss */
    MEM8(ecx + 7) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0023F5B0
 * Original: 0x0023F5B0 - 0x0023F5D2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023F5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023F5B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x160);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x7FE2C0;
    if (CMP_EQ(_fa, _fb)) goto loc_0023F5CA; /* je: equal / zero */

loc_0023F5C3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0023F5CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023F5C7u); } /* indirect call */
    }

loc_0023F5CA: ;
    MEM32(esi) = 0x7F0728;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023F5E0
 * Original: 0x0023F5E0 - 0x0023F637 (87 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023F5E0(void)
{

loc_0023F5E0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(ecx + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(ecx + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    eax = MEM32(esp + 8);
    XMM_STORE(ecx + 0x80, xmm0); /* movaps */
    edx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(ecx + 0x150) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x154) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x158) = eax;
    MEMF(ecx + 0x15C) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023F650
 * Original: 0x0023F650 - 0x0023F74C (252 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023F650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023F650: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    eax = ebx + 0x50;
    PUSH32(esp, eax);
    esi = ecx;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0023F674u); RECOMP_ABI_CALL(0x000381D2u, sub_000381D2); /* call 0x000381D2 */

loc_0023F674: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x20;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ebp = esi + 0x50;
    PUSH32(esp, ebp);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x0023F6CBu); RECOMP_ABI_CALL(0x000173F6u, sub_000173F6); /* call 0x000173F6 */

loc_0023F6CB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0023F6D1u); RECOMP_ABI_CALL(0x000381D2u, sub_000381D2); /* call 0x000381D2 */

loc_0023F6D1: ;
    PUSH32(esp, eax);
    edx = esi + 0x90;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0023F6DEu); RECOMP_ABI_CALL(0x000173F6u, sub_000173F6); /* call 0x000173F6 */

loc_0023F6DE: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x150)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    ecx = MEM32(esi + 0x160);
    MEMF(esi + 0x150) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x154)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 4); /* mulss */
    MEMF(esi + 0x154) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x158)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    MEMF(esi + 0x158) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x15C) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x160);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0023F742u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023F73Fu); } /* indirect call */
    }

loc_0023F742: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023F790
 * Original: 0x0023F790 - 0x0023F97D (493 bytes, 139 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023F790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023F790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(eax, MEM8(ebx + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0023F839; /* je: equal / zero */

loc_0023F7B0: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = ebx + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023F7C2u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_0023F7C2: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x90;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    ecx = 0x10;
    edi = esp + 0x3C;
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
    xmm0 = XMM_MEM(esp + 0x3C); /* movaps */
    esi = MEM32(esp + 0x20);
    XMM_STORE(ebx, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x4C); /* movaps */
    XMM_STORE(ebx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x5C); /* movaps */
    XMM_STORE(ebx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x6C); /* movaps */
    XMM_STORE(ebx + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx); /* movaps */
    eax = esi + 0xD0;
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x20); /* movaps */
    ecx = esi + 0x110;
    PUSH32(esp, ecx);
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x30); /* movaps */
    PUSH32(esp, eax);
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023F82Du); RECOMP_ABI_CALL(0x0059FDC7u, sub_0059FDC7); /* call 0x0059FDC7 */

loc_0023F82D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 6) = 0;
    goto loc_0023F8E5;

loc_0023F839: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023F896; /* je: equal / zero */

loc_0023F840: ;
    xmm0 = XMM_MEM(ebx + 0x90); /* movaps */
    esi = MEM32(esp + 0x14);
    eax = esi + 0xD0;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x90;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x20); /* movaps */
    edx = esi + 0x110;
    PUSH32(esp, edx);
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x30); /* movaps */
    PUSH32(esp, eax);
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023F87Fu); RECOMP_ABI_CALL(0x0059FDC7u, sub_0059FDC7); /* call 0x0059FDC7 */

loc_0023F87F: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x7C;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023F891u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_0023F891: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0023F8B1;

loc_0023F896: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    eax = ebx + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023F8A8u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_0023F8A8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x90;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0023F8B1: ;
    esi = eax;
    edi = esp + 0x30;
    ecx = 0x10;
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
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    esi = MEM32(esp + 0x14);
    XMM_STORE(ebx, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(ebx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    XMM_STORE(ebx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    XMM_STORE(ebx + 0x30, xmm0); /* movaps */

loc_0023F8E5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x150)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x154)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x158)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    eax = esi + 0x14;
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    xmm1 = xmm0; /* movaps */
    edx = eax;
    MEM32(edx) = ecx;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    MEM32(edx + 4) = ecx;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    edx = esi + 0x20;
    MEM32(edx) = ecx;
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(edx + 4) = ecx;
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    MEM32(edx + 8) = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x2C;
    MEM8(esi + 7) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023F974u); RECOMP_ABI_CALL(0x0002C4DBu, sub_0002C4DB); /* call 0x0002C4DB */

loc_0023F974: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023FA00
 * Original: 0x0023FA00 - 0x0023FA1A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023FA00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023FA00: ;
    eax = ecx;
    ecx = MEM32(eax + 0x160);
    MEM8(eax + 7) = 1;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0023FA19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023FA16u); } /* indirect call */
    }

loc_0023FA19: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023FA20
 * Original: 0x0023FA20 - 0x0023FA82 (98 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023FA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023FA20: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0023FA66; /* je: equal / zero */

loc_0023FA2D: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0023FA4F; /* js: sign (negative) */

loc_0023FA3F: ;
    edi = eax + 1;

loc_0023FA42: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0023FA4Cu); RECOMP_ABI_CALL(0x00032F7Fu, sub_00032F7F); /* call 0x00032F7F */

loc_0023FA4C: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023FA42; /* jne: not equal / not zero */

loc_0023FA4F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0023FA5D; /* je: equal / zero */

loc_0023FA54: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0023FA5Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0023FA5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0023FA5D: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0023FA66: ;
    ecx = edi;
    PUSH32(esp, 0x0023FA6Du); RECOMP_ABI_CALL(0x00032F7Fu, sub_00032F7F); /* call 0x00032F7F */

loc_0023FA6D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0023FA7B; /* je: equal / zero */

loc_0023FA72: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0023FA78u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0023FA78: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0023FA7B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023FAA0
 * Original: 0x0023FAA0 - 0x0023FB2D (141 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023FAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023FAA0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0xE4));
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023FB00; /* je: equal / zero */

loc_0023FAB0: ;
    ecx = MEM32(edi + 0xE8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023FAEA; /* je: equal / zero */

loc_0023FABA: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, ebx);
    ebx = ecx + -4;
    PUSH32(esp, esi);
    esi = eax;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0023FADF; /* js: sign (negative) */

loc_0023FACC: ;
    ebp = eax + 1;
    /* nop */

loc_0023FAD0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0023FADAu); RECOMP_ABI_CALL(0x00032F7Fu, sub_00032F7F); /* call 0x00032F7F */

loc_0023FADA: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023FAD0; /* jne: not equal / not zero */

loc_0023FADD: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023FADF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0023FAE5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0023FAE5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0023FAEA: ;
    eax = MEM32(edi + 0xF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0023FAF6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0023FAF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 0xE4) = 0;

loc_0023FB00: ;
    eax = MEM32(edi + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(edi + 0xE8) = ebp;
    MEM32(edi + 0xEC) = ebp;
    MEM32(edi + 0xF0) = ebp;
    MEM32(edi + 0xF4) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0023FB2A; /* je: equal / zero */

loc_0023FB22: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0xE0) = ebp;

loc_0023FB2A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0023FB50
 * Original: 0x0023FB50 - 0x0023FF59 (1033 bytes, 244 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023FB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023FB50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0023FB60u); RECOMP_ABI_CALL(0x000381D2u, sub_000381D2); /* call 0x000381D2 */

loc_0023FB60: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(edi + 0xE0);
    ebx = MEM32(edi + 0xE8);
    edi = MEM32(edi + 0xEC);
    edx = MEM32(eax + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0023FE75; /* jl: less (signed <) */

loc_0023FB97: ;
    ecx = edi;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebp = 0xC;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx + ebx + -12;
    ebx = eax;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = edi + eax * 4;

loc_0023FBB1: ;
    eax = ecx + ebp;
    xmm3 = XMM_SCALAR(MEMF(eax + edx + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x10); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + edx + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x20); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax + edx)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + 0xC) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + edx + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x24); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + edx + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax + edx)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + edx + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x28); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + edx + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + 0x14) = xmm3.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    MEMF(ecx + 0x18) = xmm4.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x10); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x20); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + -4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x24); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x28); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    MEMF(ecx + 8) = xmm4.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x10); /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x20); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + -20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x24); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + -16) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x28); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + -12) = xmm3.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + -20)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + -16)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    MEMF(ecx + -8) = xmm4.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x10); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x20); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + -36) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x24); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + -32) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x28); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + -28) = xmm3.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + -32)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx + -36); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    MEMF(ecx + -24) = xmm4.f[0]; /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023FBB1; /* jne: not equal / not zero */

loc_0023FE71: ;
    ebx = MEM32(esp + 0x14);

loc_0023FE75: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0023FF52; /* jl: less (signed <) */

loc_0023FE7D: ;
    ecx = edi;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebp = 0xFFFFFFFCu;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx + ebx + 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi;

loc_0023FE90: ;
    eax = ecx + ebp;
    xmm3 = XMM_SCALAR(MEMF(eax + edx + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x10); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + edx + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x20); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax + edx)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + -4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + edx + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x24); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + edx + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x14); /* mulss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x28); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    MEMF(ecx + 8) = xmm4.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023FE90; /* jne: not equal / not zero */

loc_0023FF52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023FF4C
 * Original: 0x0023FF4C - 0x0023FF59 (13 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023FF4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023FF4C: ;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_0023FE90(); return; }

loc_0023FF52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00240060
 * Original: 0x00240060 - 0x00240291 (561 bytes, 134 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00240060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00240060: ;
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
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xDC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00240239; /* je: equal / zero */

loc_0024007C: ;
    edi = MEM32(ebp + 8);
    xmm0 = XMM_MEM(edi); /* movaps */
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x10); /* movaps */
    XMM_STORE(esi + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x20); /* movaps */
    eax = edi + 0x30;
    ebx = esi + 0x90;
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax); /* movaps */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    XMM_STORE(esi + 0x80, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002400B4u); RECOMP_ABI_CALL(0x0059FDC7u, sub_0059FDC7); /* call 0x0059FDC7 */

loc_002400B4: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0xD0); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x18); /* movaps */
    XMM_STORE(ebx, xmm0); /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0xD4); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xA8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xAC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x18); /* movaps */
    XMM_STORE(esi + 0xA0, xmm0); /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(esi + 0xD8); /* divss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xBC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x18); /* movaps */
    XMM_STORE(esi + 0xB0, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xD0)); /* movss */
    xmm1 = XMM_MEM(edi); /* movaps */
    ecx = MEM32(eax);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xD4)); /* movss */
    XMM_STORE(esp + 0x28, xmm1); /* movaps */
    xmm1 = XMM_MEM(edi + 0x10); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xD8)); /* movss */
    XMM_STORE(esp + 0x38, xmm1); /* movaps */
    xmm1 = XMM_MEM(edi + 0x20); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0x40, xmm1); /* movaps */
    edx = MEM32(eax + 4);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x54) = edx;
    edx = MEM32(eax + 0xC);
    eax = esp + 0x20;
    MEM32(esp + 0x58) = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    MEM32(esp + 0x60) = edx;
    PUSH32(esp, ecx);
    goto loc_00240272;

loc_00240239: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(eax); /* movaps */
    edi = esi + 0x50;
    XMM_STORE(edi, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(edi + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    edx = esi + 0x90;
    PUSH32(esp, edx);
    XMM_STORE(edi + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    PUSH32(esp, edi);
    XMM_STORE(edi + 0x30, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024026Au); RECOMP_ABI_CALL(0x0059FDC7u, sub_0059FDC7); /* call 0x0059FDC7 */

loc_0024026A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = esi + 0x14;
    PUSH32(esp, eax);

loc_00240272: ;
    ecx = esi + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024027Au); RECOMP_ABI_CALL(0x0002C4DBu, sub_0002C4DB); /* call 0x0002C4DB */

loc_0024027A: ;
    SET_LO8(eax, MEM8(esi + 0xE4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    MEM8(esi + 7) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00240320
 * Original: 0x00240320 - 0x00240325 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240320(void)
{

loc_00240320: ;
    MEM8(ecx + 7) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00240330
 * Original: 0x00240330 - 0x00240334 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240330(void)
{

loc_00240330: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00240340
 * Original: 0x00240340 - 0x00240344 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240340(void)
{

loc_00240340: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00240350
 * Original: 0x00240350 - 0x00240353 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240350(void)
{

loc_00240350: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00240360
 * Original: 0x00240360 - 0x00240364 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240360(void)
{

loc_00240360: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00240370
 * Original: 0x00240370 - 0x00240374 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240370(void)
{

loc_00240370: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00240380
 * Original: 0x00240380 - 0x00240383 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240380(void)
{

loc_00240380: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00240390
 * Original: 0x00240390 - 0x00240394 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240390(void)
{

loc_00240390: ;
    eax = ecx + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_002403A0
 * Original: 0x002403A0 - 0x002403A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002403A0(void)
{

loc_002403A0: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_002403B0
 * Original: 0x002403B0 - 0x002403B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002403B0(void)
{

loc_002403B0: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_002403C0
 * Original: 0x002403C0 - 0x002403C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002403C0(void)
{

loc_002403C0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002403D0
 * Original: 0x002403D0 - 0x002403D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002403D0(void)
{

loc_002403D0: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002403E0
 * Original: 0x002403E0 - 0x002403E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002403E0(void)
{

loc_002403E0: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002403F0
 * Original: 0x002403F0 - 0x002403F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002403F0(void)
{

loc_002403F0: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00240400
 * Original: 0x00240400 - 0x00240404 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240400(void)
{

loc_00240400: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00240410
 * Original: 0x00240410 - 0x00240414 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240410(void)
{

loc_00240410: ;
    eax = ecx + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00240420
 * Original: 0x00240420 - 0x00240424 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240420(void)
{

loc_00240420: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00240430
 * Original: 0x00240430 - 0x00240434 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240430(void)
{

loc_00240430: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00240440
 * Original: 0x00240440 - 0x00240443 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240440(void)
{

loc_00240440: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00240450
 * Original: 0x00240450 - 0x00240453 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240450(void)
{

loc_00240450: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00240460
 * Original: 0x00240460 - 0x00240464 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240460(void)
{

loc_00240460: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00240470
 * Original: 0x00240470 - 0x00240474 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240470(void)
{

loc_00240470: ;
    eax = ecx + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00240480
 * Original: 0x00240480 - 0x00240484 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240480(void)
{

loc_00240480: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00240490
 * Original: 0x00240490 - 0x00240494 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240490(void)
{

loc_00240490: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_002404A0
 * Original: 0x002404A0 - 0x002404A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002404A0(void)
{

loc_002404A0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002404B0
 * Original: 0x002404B0 - 0x002404B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002404B0(void)
{

loc_002404B0: ;
    eax = ecx + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_002404C0
 * Original: 0x002404C0 - 0x002404C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002404C0(void)
{

loc_002404C0: ;
    SET_LO8(eax, MEM8(0x8F2170));
    esp += 4; return; /* ret */

}

/**
 * sub_002404D0
 * Original: 0x002404D0 - 0x00240575 (165 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002404D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002404D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0x7F0A74;
    ecx = 0xC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_flags == 0)) goto loc_00240574; /* jne: not equal / not zero */

loc_002404EC: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    ecx = MEM32(esp + 0xC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x54) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x58) = xmm2.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xC); /* subss */
    MEMF(ecx + 0x60) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x10); /* subss */
    MEMF(ecx + 0x64) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x14); /* subss */
    MEMF(ecx + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7CA778)); /* movss */
    MEMF(ecx + 0x390) = xmm0.f[0]; /* movss */

loc_00240574: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002405A0
 * Original: 0x002405A0 - 0x002407AE (526 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002405A0(void)
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

loc_002405A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xD4));
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x7F0A54;
    esi = eax;
    ecx = 0xC;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_002406B3; /* jne: not equal / not zero */

loc_002405CB: ;
    SET_LO8(ecx, MEM8(0x8F2170));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002406B3; /* je: equal / zero */

loc_002405D9: ;
    fp_push(MEMD(0x7FE2E0)); /* fld double */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = sin(fp_top()); /* fsin */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2 = xmm0; /* movaps */
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B9D64)); /* movss */
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0xA8;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD448)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_push(MEMD(0x7FE2E0)); /* fld double */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x24); /* subss */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024068Du); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_0024068D: ;
    esi = eax;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002406B0u); RECOMP_ABI_CALL(0x000185E4u, sub_000185E4); /* call 0x000185E4 */

loc_002406B0: ;
    eax = MEM32(ebp + 8);

loc_002406B3: ;
    edi = 0x7F0A84;
    esi = eax;
    ecx = 8;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_002406DB; /* je: equal / zero */

loc_002406C5: ;
    edi = 0x7F0A90;
    esi = eax;
    ecx = 8;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_002407A7; /* jne: not equal / not zero */

loc_002406DB: ;
    esi = eax;
    edi = 0x7F0A84;
    ecx = 8;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_002406F2; /* je: equal / zero */

loc_002406ED: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_002406F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x7FE2DC)); /* movss */
    ecx = 0x10;
    esi = 0x8F9620;
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
    if (CMP_EQ(_fa, _fb)) goto loc_00240716; /* je: equal / zero */

loc_0024070E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B0478)); /* movss */

loc_00240716: ;
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = esp + 0xA8;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00240742u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_00240742: ;
    esi = eax;
    eax = MEM32(ebp + 0xC);
    ecx = 0x10;
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
    XMM_STORE(ebx + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x3C); /* movaps */
    XMM_STORE(ebx + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x4C); /* movaps */
    XMM_STORE(ebx + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x5C); /* movaps */
    XMM_STORE(ebx + 0x80, xmm0); /* movaps */
    ecx = MEM32(eax + 0x40);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(ebx + 0x150) = ecx;
    edx = MEM32(eax + 0x44);
    MEM32(ebx + 0x154) = edx;
    eax = MEM32(eax + 0x48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x158) = eax;
    MEMF(ebx + 0x15C) = xmm0.f[0]; /* movss */

loc_002407A7: ;
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
 * sub_00240840
 * Original: 0x00240840 - 0x0024085C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00240840: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8FA274) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00240870
 * Original: 0x00240870 - 0x00240871 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240870(void)
{

loc_00240870: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00240880
 * Original: 0x00240880 - 0x00240902 (130 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00240880: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_002408D6; /* je: equal / zero */

loc_0024088D: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_002408BC; /* js: sign (negative) */

loc_0024089F: ;
    edi = eax + 1;

loc_002408A2: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + 0x58;
    MEM32(esi) = 0x7FE2B0;
    PUSH32(esp, 0x002408B3u); RECOMP_ABI_CALL(0x00032F7Fu, sub_00032F7F); /* call 0x00032F7F */

loc_002408B3: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = 0x7FE2AC;
    if ((_fa != 0)) goto loc_002408A2; /* jne: not equal / not zero */

loc_002408BC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002408CD; /* je: equal / zero */

loc_002408C1: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002408CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002408CAu); } /* indirect call */
    }

loc_002408CD: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002408D6: ;
    ecx = edi + 0x58;
    MEM32(edi) = 0x7FE2B0;
    PUSH32(esp, 0x002408E4u); RECOMP_ABI_CALL(0x00032F7Fu, sub_00032F7F); /* call 0x00032F7F */

loc_002408E4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    MEM32(edi) = 0x7FE2AC;
    if (TEST_Z(_fa, _fb)) goto loc_002408FB; /* je: equal / zero */

loc_002408EF: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002408FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002408F8u); } /* indirect call */
    }

loc_002408FB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00240930
 * Original: 0x00240930 - 0x00240949 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00240930: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00240943; /* je: equal / zero */

loc_0024093A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00240940u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00240940: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00240943: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00240950
 * Original: 0x00240950 - 0x00240961 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00240950: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00240970
 * Original: 0x00240970 - 0x00240A48 (216 bytes, 100 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00240970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebp = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebx = ecx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00240983: ;
    SET_LO8(edx, MEM8(edi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebp) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002409A8; /* jne: not equal / not zero */

loc_0024098C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002409A4; /* je: equal / zero */

loc_00240990: ;
    SET_LO8(edx, MEM8(edi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebp + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002409A8; /* jne: not equal / not zero */

loc_0024099A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(2)) >> 32) & 1);
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(2)) >> 32) & 1);
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00240983; /* jne: not equal / not zero */

loc_002409A4: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002409AD;

loc_002409A8: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_002409AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002409BA; /* jne: not equal / not zero */

loc_002409B1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002409BA: ;
    ecx = ZX8(MEM8(esi + 4));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(8));
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00240A21; /* je: equal / zero */

loc_002409C3: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(2));
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002409F2; /* je: equal / zero */

loc_002409C8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00240A41; /* jne: not equal / not zero */

loc_002409CB: ;
    edi = MEM32(esi + 0x50);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00240A41; /* js: sign (negative) */

loc_002409D1: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x54);
    edx = MEM32(ecx + edi * 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x002409E4u); RECOMP_ABI_CALL(0x0001924Bu, sub_0001924B); /* call 0x0001924B */

loc_002409E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00240A41; /* jne: not equal / not zero */

loc_002409E8: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_002409D1; /* jns: not sign (positive) */

loc_002409EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002409F2: ;
    edi = MEM32(esi + 0x50);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00240A41; /* js: sign (negative) */

loc_002409F8: ;
    goto loc_00240A00;

    /* nop */

loc_00240A00: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x54);
    edx = MEM32(ecx + edi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00240A13u); RECOMP_ABI_CALL(0x0001924Bu, sub_0001924B); /* call 0x0001924B */

loc_00240A13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00240A41; /* jne: not equal / not zero */

loc_00240A17: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00240A00; /* jns: not sign (positive) */

loc_00240A1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00240A21: ;
    edi = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00240A31u); RECOMP_ABI_CALL(0x0001924Bu, sub_0001924B); /* call 0x0001924B */

loc_00240A31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00240A41; /* je: equal / zero */

loc_00240A35: ;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00240A41u); RECOMP_ABI_CALL(0x0001924Bu, sub_0001924B); /* call 0x0001924B */

loc_00240A41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00240A80
 * Original: 0x00240A80 - 0x00240ACB (75 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00240A80: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00240A9C; /* je: equal / zero */

loc_00240A8E: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00240A9C; /* jle: less or equal (signed <=) */

loc_00240A96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_00240A9C: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(edx + 4)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 4), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00240AC8; /* jne: not equal / not zero */

loc_00240AA6: ;
    ecx = MEM32(edx + 0x50);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00240AC8; /* jle: less or equal (signed <=) */

loc_00240AAF: ;
    /* nop */

loc_00240AB0: ;
    ecx = MEM32(edx + 0x54);
    ecx = MEM32(ecx + eax * 8 + 4);
    edi = MEM32(esi + ecx * 4);
    ecx = esi + ecx * 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edi;
    ecx = MEM32(edx + 0x50);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00240AB0; /* jl: less (signed <) */

loc_00240AC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00240AE0
 * Original: 0x00240AE0 - 0x00240B30 (80 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00240AE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00240B13; /* jle: less or equal (signed <=) */

loc_00240AED: ;
    /* nop */

loc_00240AF0: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00240B01; /* je: equal / zero */

loc_00240AFA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00240B01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00240AFEu); } /* indirect call */
    }

loc_00240B01: ;
    eax = MEM32(esi + 0x54);
    MEM32(eax + edi * 4) = 0;
    eax = MEM32(esi + 0x50);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00240AF0; /* jl: less (signed <) */

loc_00240B13: ;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    MEM32(esi + 0x50) = 0;
    PUSH32(esp, 0x00240B23u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00240B23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x54) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00240B50
 * Original: 0x00240B50 - 0x00240B94 (68 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00240B50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi * 4;
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 0x50) = edi;
    PUSH32(esp, 0x00240B6Au); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00240B6A: ;
    MEM32(esi + 0x54) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00240B8F; /* jle: less or equal (signed <=) */

loc_00240B76: ;
    goto loc_00240B80;

    /* nop */
    /* nop */

loc_00240B80: ;
    ecx = MEM32(esi + 0x54);
    MEM32(ecx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00240B80; /* jl: less (signed <) */

loc_00240B8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00240BB0
 * Original: 0x00240BB0 - 0x00240BE9 (57 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00240BB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x50);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00240BE3; /* jle: less or equal (signed <=) */

loc_00240BC2: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);

loc_00240BC7: ;
    eax = MEM32(ebx + 0x54);
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(edi + 0x54);
    eax = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00240BDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00240BD7u); } /* indirect call */
    }

loc_00240BDA: ;
    eax = MEM32(edi + 0x50);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00240BC7; /* jl: less (signed <) */

loc_00240BE2: ;
    POP32(esp, ebp);

loc_00240BE3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00240C00
 * Original: 0x00240C00 - 0x00240CB6 (182 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00240C00: ;
    eax = MEM32(ecx + 0x54);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(eax);
    edx = ecx + 0x2C;
    esi = edx;
    MEM32(esi) = edi;
    edi = MEM32(eax + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(eax + 8);
    MEM32(esi + 8) = edi;
    edi = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = edi;
    edi = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = edi;
    eax = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(ecx + 0x50);
    esi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00240CB3; /* jle: less or equal (signed <=) */

loc_00240C3D: ;
    /* nop */

loc_00240C40: ;
    eax = MEM32(ecx + 0x54);
    eax = MEM32(eax + esi * 4);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00240C56; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_00240C52: ;
    edi = MEM32(eax);
    MEM32(edx) = edi;

loc_00240C56: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00240C67; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_00240C61: ;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;

loc_00240C67: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00240C78; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_00240C72: ;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;

loc_00240C78: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00240C89; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0xC)) */

loc_00240C83: ;
    edi = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = edi;

loc_00240C89: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00240C9A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x10)) */

loc_00240C94: ;
    edi = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = edi;

loc_00240C9A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00240CAB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x14)) */

loc_00240CA5: ;
    eax = MEM32(eax + 0x14);
    MEM32(edx + 0x14) = eax;

loc_00240CAB: ;
    eax = MEM32(ecx + 0x50);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00240C40; /* jl: less (signed <) */

loc_00240CB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00240CF0
 * Original: 0x00240CF0 - 0x00240CF5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240CF0(void)
{

loc_00240CF0: ;
    MEM8(ecx + 7) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00240D00
 * Original: 0x00240D00 - 0x00240D25 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240D00(void)
{

loc_00240D00: ;
    eax = MEM32(ecx + 0xC);
    MEM32(ecx + 0xBC) = eax;
    edx = MEM32(ecx + 0x10);
    MEM32(ecx + 0xC0) = edx;
    eax = MEM32(ecx + 0xC);
    MEM32(ecx + 0x22C) = eax;
    edx = MEM32(ecx + 0x10);
    MEM32(ecx + 0x230) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00240D30
 * Original: 0x00240D30 - 0x00240DE9 (185 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240D30(void)
{

loc_00240D30: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    edx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(ecx + 0x58) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x5C);
    MEM32(ecx + 0x5C) = esi;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x390)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(ecx + 0x390) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x394)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 4); /* mulss */
    MEMF(ecx + 0x394) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x39C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x218) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x214) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x398)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 4); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x398) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x3A0) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x384) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x388) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00240E20
 * Original: 0x00240E20 - 0x0024105B (571 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00240E20(void)
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

loc_00240E20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x398)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x394); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x390); /* divss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esi + 0x3F0) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x398); /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    MEMF(esi + 0x3EC) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x390); /* subss */
    MEMF(esi + 0x3D4) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x3A0)); /* fadd dword ptr [esi + 0x3a0] */
    ebx = esi + 0x90;
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    edi = esi + 0x70;
    eax = esi + 0xA0;
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x398); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x3D8) = xmm0.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x3DC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x3E0) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x3E4) = xmm4.f[0]; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esi + 0x3E8) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    edx = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx); /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 4); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0x3B4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00240FAEu); RECOMP_ABI_CALL(0x00014D6Du, sub_00014D6D); /* call 0x00014D6D */

loc_00240FAE: ;
    eax = esi + 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi + 0x3C4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00240FC1u); RECOMP_ABI_CALL(0x00014D6Du, sub_00014D6D); /* call 0x00014D6D */

loc_00240FC1: ;
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    ecx = esi + 0x1C0;
    MEM32(ecx) = edx;
    edx = MEM32(edi + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(edi + 0xC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esi + 0x80);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esi + 0x84);
    ecx = esi + 0x330;
    MEM32(ecx) = edx;
    edx = MEM32(esi + 0x88);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + 0x8C);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(esi + 0x3AC);
    eax = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00241023; /* jne: not equal / not zero */

loc_00241015: ;
    ecx = MEM32(esi + 0x394);
    MEM32(esi + 0x3A4) = ecx;
    goto loc_0024102E;

loc_00241023: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x3A4) = xmm0.f[0]; /* movss */

loc_0024102E: ;
    _fa = (uint32_t)(MEM32(esi + 0x3B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3B0), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00241049; /* jne: not equal / not zero */

loc_00241036: ;
    edx = MEM32(esi + 0x398);
    MEM32(esi + 0x3A8) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00241049: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    MEMF(esi + 0x3A8) = xmm0.f[0]; /* movss */
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
 * sub_002410F0
 * Original: 0x002410F0 - 0x0024119B (171 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002410F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002410F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x3E0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x398); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x3F0); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x390); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x94)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x98)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x90); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x70)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x78)); /* movss */
    edx = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x7C)); /* movss */
    ecx = MEM32(esp);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002411D0
 * Original: 0x002411D0 - 0x002411D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002411D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002411D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002411E0
 * Original: 0x002411E0 - 0x002411E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002411E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002411E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002411F0
 * Original: 0x002411F0 - 0x0024133F (335 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002411F0(void)
{

loc_002411F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edi);
    eax = 0x1E07A;
    ecx = 0x90;
    edi = 0x8F9DF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x90;
    eax = 0x29F1F;
    edi = 0x8FA030;
    MEMF(0x8FA288) = xmm0.f[0]; /* movss */
    MEMF(0x8FA284) = xmm0.f[0]; /* movss */
    MEMF(0x8FA280) = xmm0.f[0]; /* movss */
    MEMF(0x8FA35C) = xmm0.f[0]; /* movss */
    MEMF(0x8FA348) = xmm0.f[0]; /* movss */
    MEMF(0x8FA334) = xmm0.f[0]; /* movss */
    MEMF(0x8FA320) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEMF(0x8FA358) = xmm0.f[0]; /* movss */
    MEMF(0x8FA354) = xmm0.f[0]; /* movss */
    MEMF(0x8FA350) = xmm0.f[0]; /* movss */
    MEMF(0x8FA34C) = xmm0.f[0]; /* movss */
    MEMF(0x8FA344) = xmm0.f[0]; /* movss */
    MEMF(0x8FA340) = xmm0.f[0]; /* movss */
    MEMF(0x8FA33C) = xmm0.f[0]; /* movss */
    MEMF(0x8FA338) = xmm0.f[0]; /* movss */
    MEMF(0x8FA330) = xmm0.f[0]; /* movss */
    MEMF(0x8FA32C) = xmm0.f[0]; /* movss */
    MEMF(0x8FA328) = xmm0.f[0]; /* movss */
    MEMF(0x8FA324) = xmm0.f[0]; /* movss */
    MEMF(0x8FA2CC) = xmm0.f[0]; /* movss */
    MEMF(0x8FA2C8) = xmm0.f[0]; /* movss */
    MEMF(0x8FA2C4) = xmm0.f[0]; /* movss */
    MEMF(0x8FA2C0) = xmm0.f[0]; /* movss */
    MEMF(0x8FA2BC) = xmm0.f[0]; /* movss */
    MEMF(0x8FA2B8) = xmm0.f[0]; /* movss */
    MEMF(0x8FA2B4) = xmm0.f[0]; /* movss */
    MEMF(0x8FA2B0) = xmm0.f[0]; /* movss */
    MEMF(0x8FA2AC) = xmm0.f[0]; /* movss */
    MEMF(0x8FA2A8) = xmm0.f[0]; /* movss */
    MEMF(0x8FA2A4) = xmm0.f[0]; /* movss */
    MEMF(0x8FA2A0) = xmm0.f[0]; /* movss */
    MEMF(0x8FA29C) = xmm0.f[0]; /* movss */
    MEMF(0x8FA298) = xmm0.f[0]; /* movss */
    MEMF(0x8FA294) = xmm0.f[0]; /* movss */
    MEMF(0x8FA290) = xmm0.f[0]; /* movss */
    MEM8(0x8FA27C) = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002413A0
 * Original: 0x002413A0 - 0x002413BC (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002413A0(void)
{

loc_002413A0: ;
    eax = ZX8(MEM8(esp + 4));
    ecx = ZX8(MEM8(esp + 8));
    eax = eax + eax * 2;
    edx = ecx + eax * 4;
    eax = MEM32(esp + 0xC);
    MEM32(edx * 4 + 0x8F9DF0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002413D0
 * Original: 0x002413D0 - 0x002413EC (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002413D0(void)
{

loc_002413D0: ;
    eax = ZX8(MEM8(esp + 4));
    ecx = ZX8(MEM8(esp + 8));
    eax = eax + eax * 2;
    edx = ecx + eax * 4;
    eax = MEM32(esp + 0xC);
    MEM32(edx * 4 + 0x8FA030) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00241400
 * Original: 0x00241400 - 0x00241419 (25 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241400(void)
{

loc_00241400: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    SET_LO8(eax, MEM8(eax + 5));
    MEM8(ecx + 5) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00241420
 * Original: 0x00241420 - 0x00241475 (85 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00241420: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x50);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x18) = eax;
    if ((_fas < 0)) goto loc_00241460; /* js: sign (negative) */

loc_00241438: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_00241440: ;
    ecx = MEM32(ebx + 0x54);
    ecx = MEM32(ecx + esi * 4);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0024144Du); RECOMP_ABI_CALL(0x00031909u, sub_00031909); /* call 0x00031909 */

loc_0024144D: ;
    edx = MEM32(ebx + 0x54);
    eax = MEM32(edx + esi * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0024145Cu); RECOMP_ABI_CALL(0x00031909u, sub_00031909); /* call 0x00031909 */

loc_0024145C: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00241440; /* jns: not sign (positive) */

loc_0024145F: ;
    POP32(esp, ebp);

loc_00241460: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024146F; /* je: equal / zero */

loc_00241469: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0024146F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00241490
 * Original: 0x00241490 - 0x002414D6 (70 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00241490: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x50);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x18) = eax;
    if ((_fas < 0)) goto loc_002414C1; /* js: sign (negative) */

loc_002414A8: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_002414B0: ;
    ecx = MEM32(ebx + 0x54);
    ecx = MEM32(ecx + esi * 4);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002414BDu); RECOMP_ABI_CALL(0x00031909u, sub_00031909); /* call 0x00031909 */

loc_002414BD: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_002414B0; /* jns: not sign (positive) */

loc_002414C0: ;
    POP32(esp, ebp);

loc_002414C1: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002414D0; /* je: equal / zero */

loc_002414CA: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002414D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002414F0
 * Original: 0x002414F0 - 0x00241538 (72 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002414F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002414F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x50);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x18) = eax;
    if ((_fas < 0)) goto loc_00241523; /* js: sign (negative) */

loc_00241508: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_00241510: ;
    ecx = MEM32(ebx + 0x54);
    edx = MEM32(ecx + esi * 8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0024151Fu); RECOMP_ABI_CALL(0x00031909u, sub_00031909); /* call 0x00031909 */

loc_0024151F: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00241510; /* jns: not sign (positive) */

loc_00241522: ;
    POP32(esp, ebp);

loc_00241523: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00241532; /* je: equal / zero */

loc_0024152C: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00241532: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00241550
 * Original: 0x00241550 - 0x00241596 (70 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00241550: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x50);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x18) = eax;
    if ((_fas < 0)) goto loc_00241581; /* js: sign (negative) */

loc_00241568: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_00241570: ;
    ecx = MEM32(ebx + 0x54);
    ecx = MEM32(ecx + esi * 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0024157Du); RECOMP_ABI_CALL(0x00031909u, sub_00031909); /* call 0x00031909 */

loc_0024157D: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00241570; /* jns: not sign (positive) */

loc_00241580: ;
    POP32(esp, ebp);

loc_00241581: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00241590; /* je: equal / zero */

loc_0024158A: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00241590: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002415B0
 * Original: 0x002415B0 - 0x0024177C (460 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002415B0(void)
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

loc_002415B0: ;
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
    PUSH32(esp, edi);
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 8);
    xmm4 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 8); /* subss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax); /* subss */
    xmm5 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm5.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00241672; /* ja: above (unsigned >) (xmm5.f[0] vs xmm0.f[0]) */

loc_0024161E: ;
    ecx = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241659; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00241654: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00241672; /* ja: above (unsigned >) (xmm0.f[0] vs xmm5.f[0]) */

loc_00241659: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm5.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024167A; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm5.f[0]) */

loc_00241672: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024167A: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    edi = MEM32(ebp + 0x1C);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002416A3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_00241690: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    goto loc_002416B4;

loc_002416A3: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_002416B4: ;
    MEMF(edi) = xmm2.f[0]; /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi); /* comiss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024170F; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edi)) */

loc_002416C6: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_00241756;

loc_0024170F: ;
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */

loc_00241756: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(ebp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x1C);
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    SET_LO8(eax, 1);
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
 * sub_002417F0
 * Original: 0x002417F0 - 0x0024182D (61 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002417F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002417F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x3C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00241805; /* je: equal / zero */

loc_002417FB: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x38);
    MEM32(edx + 0x38) = esi;
    POP32(esp, esi);
    goto loc_0024180A;

loc_00241805: ;
    edx = MEM32(eax + 0x38);
    MEM32(ecx) = edx;

loc_0024180A: ;
    edx = MEM32(eax + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024181D; /* je: equal / zero */

loc_00241811: ;
    eax = MEM32(eax + 0x3C);
    MEM32(edx + 0x3C) = eax;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_0024181D: ;
    edx = MEM32(eax + 0x3C);
    eax = MEM32(ecx + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00241840
 * Original: 0x00241840 - 0x0024187E (62 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00241840: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00241879; /* je: equal / zero */

loc_0024184C: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00241865; /* je: equal / zero */

loc_00241852: ;
    PUSH32(esp, esi);

loc_00241853: ;
    esi = MEM32(eax + 0x38);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0024185Eu); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_0024185E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00241853; /* jne: not equal / not zero */

loc_00241864: ;
    POP32(esp, esi);

loc_00241865: ;
    MEM32(ebx) = 0;
    MEM32(ebx + 4) = 0;
    MEM32(ebx + 8) = 0;

loc_00241879: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00241890
 * Original: 0x00241890 - 0x002419DF (335 bytes, 95 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00241890: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8F95D0);
    edx = MEM32(0x8F95D4);
    MEM32(esp) = eax;
    eax = MEM32(0x8F95D8);
    MEM32(esp + 8) = eax;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002419C0; /* je: equal / zero */

loc_002418B8: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp)); /* movss */
    /* nop */

loc_002418D0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x5C)); /* movss */
    ecx = MEM32(esp + 0xC);
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    edx = MEM32(esp + 0x10);
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x18) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241935; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00241925: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241930; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0024192A: ;
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    goto loc_00241948;

loc_00241930: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    goto loc_00241943;

loc_00241935: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241940; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0024193A: ;
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    goto loc_00241948;

loc_00241940: ;
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */

loc_00241943: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024194D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00241945: ;
    xmm4 = xmm0; /* movaps */

loc_00241948: ;
    MEMF(esp) = xmm4.f[0]; /* movss */

loc_0024194D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241968; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00241958: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241963; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0024195D: ;
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    goto loc_0024197B;

loc_00241963: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    goto loc_00241976;

loc_00241968: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241973; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_0024196D: ;
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    goto loc_0024197B;

loc_00241973: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */

loc_00241976: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241981; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00241978: ;
    xmm3 = xmm0; /* movaps */

loc_0024197B: ;
    MEMF(esp + 4) = xmm3.f[0]; /* movss */

loc_00241981: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024199C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024198C: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241997; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00241991: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    goto loc_002419AF;

loc_00241997: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    goto loc_002419AA;

loc_0024199C: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002419A7; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_002419A1: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    goto loc_002419AF;

loc_002419A7: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */

loc_002419AA: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002419B5; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_002419AC: ;
    xmm2 = xmm0; /* movaps */

loc_002419AF: ;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */

loc_002419B5: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002418D0; /* jne: not equal / not zero */

loc_002419C0: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp);
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00241A40
 * Original: 0x00241A40 - 0x00241A4C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241A40(void)
{

loc_00241A40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00241A50
 * Original: 0x00241A50 - 0x00241A5C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241A50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00241A50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00241A60
 * Original: 0x00241A60 - 0x0024232B (2251 bytes, 525 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00241A60(void)
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

loc_00241A60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx); /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(edx + 8); /* subss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    xmm1.f[0] = xmm1.f[0] - MEMF(esi); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 4); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 8); /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 8); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 4); /* subss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi); /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm5.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm6.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241C0C; /* jb: below (unsigned <) (xmm3.f[0] vs xmm2.f[0]) */

loc_00241C07: ;
    xmm7 = xmm3; /* movaps */
    goto loc_00241C13;

loc_00241C0C: ;
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm3.f[0]; /* subss */

loc_00241C13: ;
    _fca = xmm7.f[0]; _fcb = MEMF(0x7FE280); /* comiss */
    eax = MEM32(ebp + 0x30);
    ecx = MEM32(ebp + 0x34);
    MEMF(esp + 0xC) = xmm7.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00242010; /* jb: below (unsigned <) (xmm7.f[0] vs MEMF(0x7FE280)) */

loc_00241C2C: ;
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 4); /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 4); /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241EFD; /* jb: below (unsigned <) (xmm7.f[0] vs xmm2.f[0]) */

loc_00241CA6: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm7.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241DC7; /* jb: below (unsigned <) (xmm7.f[0] vs MEMF(eax)) */

loc_00241CB5: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241DAE; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00241CBE: ;
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241D48; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_00241CC7: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm7.f[0] = xmm7.f[0] / MEMF(esp + 0xC); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    goto loc_00242219;

loc_00241D48: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241F3D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00241D63: ;
    xmm3.f[0] = xmm3.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm1 = xmm3; /* movaps */
    goto loc_0024221D;

loc_00241D7F: ;
    xmm3.f[0] = xmm3.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] / xmm6.f[0]; /* divss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    goto loc_0024221D;

loc_00241DAE: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241F7A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00241DBB: ;
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm1 = xmm5; /* movaps */
    goto loc_0024221D;

loc_00241DC7: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241EA5; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00241DD0: ;
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241E0C; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_00241DD5: ;
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 4); /* addss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241E75; /* jb: below (unsigned <) (xmm3.f[0] vs xmm2.f[0]) */

loc_00241DF0: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    goto loc_0024221D;

loc_00241E0C: ;
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] + MEMF(esp + 4); /* addss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241DD5; /* jb: below (unsigned <) (xmm6.f[0] vs xmm1.f[0]) */

loc_00241E21: ;
    _fca = xmm7.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x7ABE28); /* mulss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241E4E; /* jb: below (unsigned <) (xmm7.f[0] vs xmm2.f[0]) */

loc_00241E3A: ;
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm1 = xmm3; /* movaps */
    goto loc_0024221D;

loc_00241E4E: ;
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm6.f[0]; /* divss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    goto loc_0024221D;

loc_00241E75: ;
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm7.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241ECE; /* jb: below (unsigned <) (xmm7.f[0] vs xmm4.f[0]) */

loc_00241E81: ;
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    goto loc_0024221D;

loc_00241EA5: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241DD5; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm1.f[0]) */

loc_00241EB5: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241FAA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00241EC2: ;
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm1 = xmm5; /* movaps */
    goto loc_0024221D;

loc_00241ECE: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] / xmm4.f[0]; /* divss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    goto loc_0024221D;

loc_00241EFD: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241F71; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00241F02: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241F26; /* jb: below (unsigned <) (xmm7.f[0] vs xmm1.f[0]) */

loc_00241F0D: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241FC5; /* jb: below (unsigned <) (xmm3.f[0] vs xmm2.f[0]) */

loc_00241F1A: ;
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm1 = xmm5; /* movaps */
    goto loc_0024221D;

loc_00241F26: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241F0D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00241F31: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ecx) = xmm1.f[0]; /* movss */

loc_00241F3D: ;
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm7.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241D7F; /* jb: below (unsigned <) (xmm7.f[0] vs xmm6.f[0]) */

loc_00241F4D: ;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    goto loc_0024221D;

loc_00241F71: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241F0D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00241F76: ;
    MEMF(ecx) = xmm2.f[0]; /* movss */

loc_00241F7A: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241FAA; /* jb: below (unsigned <) (xmm1.f[0] vs xmm6.f[0]) */

loc_00241F86: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    goto loc_0024221D;

loc_00241FAA: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] / xmm6.f[0]; /* divss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    goto loc_00242219;

loc_00241FC5: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00241FF5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm4.f[0]) */

loc_00241FD1: ;
    xmm3.f[0] = xmm3.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm1 = xmm3; /* movaps */
    goto loc_0024221D;

loc_00241FF5: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    goto loc_00242219;

loc_00242010: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00242133; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm2.f[0]) */

loc_0024201F: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00242034; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00242024: ;
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm1 = xmm5; /* movaps */
    goto loc_0024221D;

loc_00242034: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm6.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00242063; /* jb: below (unsigned <) (xmm6.f[0] vs xmm3.f[0]) */

loc_00242040: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm6.f[0]; /* divss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    goto loc_00242219;

loc_00242063: ;
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm4.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002420EE; /* jb: below (unsigned <) (xmm4.f[0] vs xmm7.f[0]) */

loc_002420BF: ;
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 8); /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    goto loc_0024221D;

loc_002420EE: ;
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] / xmm7.f[0]; /* divss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] * MEMF(esp + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    goto loc_0024221D;

loc_00242133: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00242167; /* jb: below (unsigned <) (xmm3.f[0] vs xmm6.f[0]) */

loc_0024213F: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    goto loc_0024221D;

loc_00242167: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024218F; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_0024216C: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm6.f[0]; /* divss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    goto loc_00242219;

loc_0024218F: ;
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm2; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x7ABE28); /* mulss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002421F9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_002421DE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 8); /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm1 = xmm3; /* movaps */
    goto loc_0024221D;

loc_002421F9: ;
    xmm0.f[0] = xmm0.f[0] / xmm7.f[0]; /* divss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */

loc_00242219: ;
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */

loc_0024221D: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    eax = MEM32(ebp + 0x28);
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(edx + 4); /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm5 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x30) = xmm5.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x34);
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    MEM32(eax + 8) = edx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0xC) = edx;
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(ebp + 0x2C);
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    ecx = MEM32(esp + 0x30);
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    edx = MEM32(esp + 0x34);
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 8); /* addss */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00242318; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00242309: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00242318: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
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
 * sub_00242560
 * Original: 0x00242560 - 0x002426F6 (406 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00242560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00242560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = MEM32(ebp + 8);
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    edx = MEM32(ebp + 0x1C);
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002425F4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_002425D2: ;
    esi = MEM32(eax);
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = esi;
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(eax + 8);
    MEM32(ecx + 8) = esi;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    MEMF(edx) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002425F4: ;
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024267A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_002425FE: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    ecx = MEM32(ebp + 0x18);
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(ecx + 8) = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(ecx + 0xC) = eax;
    MEMF(edx) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024267A: ;
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ecx = MEM32(ebp + 0x18);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(ecx + 8) = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(ecx + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00242760
 * Original: 0x00242760 - 0x00242836 (214 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00242760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00242760: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    edx = MEM32(ebp + 0x18);
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(esp);
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00242870
 * Original: 0x00242870 - 0x00242BFD (909 bytes, 211 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00242870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00242870: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x38);
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    edx = MEM32(esp + 0x30);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x3C);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x40);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x44);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0x48);
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm7; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x4C);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FBFA0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    MEM32(esp + 0x3C) = edx;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00242AF8; /* ja: above (unsigned >) (xmm0.f[0] vs xmm5.f[0]) */

loc_002429EA: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x7FBFA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 4); /* addss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00242AF8; /* ja: above (unsigned >) (xmm2.f[0] vs xmm3.f[0]) */

loc_00242A46: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 8); /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0xC); /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm2 = xmm7; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm6 = xmm0; /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00242AE7; /* jb: below (unsigned <) (xmm6.f[0] vs xmm0.f[0]) */

loc_00242AE2: ;
    xmm0 = xmm6; /* movaps */
    goto loc_00242AEB;

loc_00242AE7: ;
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */

loc_00242AEB: ;
    xmm7 = XMM_SCALAR(MEMF(0x7FE280)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00242AFE; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm0.f[0]) */

loc_00242AF8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00242AFE: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm6.f[0]; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] / xmm4.f[0]; /* divss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 0x18);
    MEMF(esp + 0x40) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x40);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x48);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0xC) = edx;
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(ebp + 0x1C);
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    edx = MEM32(esp + 0x44);
    xmm2 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x40);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00242CE0
 * Original: 0x00242CE0 - 0x0024309D (957 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00242CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00242CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x38);
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    edx = MEM32(esp + 0x30);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x3C);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x40);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x44);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0x48);
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x4C);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FBFA0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    MEM32(esp + 0x3C) = edx;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00243097; /* ja: above (unsigned >) (xmm0.f[0] vs xmm5.f[0]) */

loc_00242E5A: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x7FBFA0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 4); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00243097; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_00242EB6: ;
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 8); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0xC); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 4); /* addss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = xmm6; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm2; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00242F57; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00242F52: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00242F5B;

loc_00242F57: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_00242F5B: ;
    xmm7 = XMM_SCALAR(MEMF(0x7FE280)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00243097; /* ja: above (unsigned >) (xmm7.f[0] vs xmm2.f[0]) */

loc_00242F6C: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] / xmm6.f[0]; /* divss */
    if ((_fca > _fcb)) goto loc_00243097; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_00242F9D: ;
    _fca = xmm2.f[0]; _fcb = MEMF(0x7A9980); /* comiss */
    if ((_fca > _fcb)) goto loc_00243097; /* ja: above (unsigned >) (xmm2.f[0] vs MEMF(0x7A9980)) */

loc_00242FAA: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00243097; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00242FB3: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ebp + 0x24); /* comiss */
    if ((_fca > _fcb)) goto loc_00243097; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(ebp + 0x24)) */

loc_00242FBD: ;
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 0x28);
    MEMF(esp + 0x40) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x40);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(eax + 8) = edx;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0xC) = edx;
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(ebp + 0x2C);
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    edx = MEM32(esp + 0x44);
    xmm2 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x40);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00243097: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00243190
 * Original: 0x00243190 - 0x00243193 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00243190: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002431A0
 * Original: 0x002431A0 - 0x002431BC (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002431A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002431A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002431B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002431AFu); } /* indirect call */
    }

loc_002431B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002431D0
 * Original: 0x002431D0 - 0x0024323F (111 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002431D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002431D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 4) = esi;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    edx = esi;
    PUSH32(esp, 0x7FE2A4);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x002431F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002431EEu); } /* indirect call */
    }

loc_002431F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00243233; /* je: equal / zero */

loc_002431F5: ;
    edx = esi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00243235; /* jl: less (signed <) */

loc_002431FC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = eax + 8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00243210;

    /* nop */
    /* nop */

loc_00243210: ;
    MEMF(ecx + -8) = xmm0.f[0]; /* movss */
    MEMF(ecx + -4) = xmm0.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00243210; /* jne: not equal / not zero */

loc_00243229: ;
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00243233: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00243235: ;
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00243260
 * Original: 0x00243260 - 0x002435DF (895 bytes, 212 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243260: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax + -1;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00243518; /* jl: less (signed <) */

loc_0024327C: ;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = ebx;
    edx = edi;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = ebx + edx * 4;
    PUSH32(esp, ebp);
    /* nop */

loc_00243290: ;
    edx = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(edx + esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + esi); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x14); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + esi); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x18); /* mulss */
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    MEM32(edx) = ebp;
    ebp = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(edx + 4) = ebp;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x18);
    MEM32(edx + 8) = ebp;
    edx = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + edx + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + edx + -16); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + edx + -12)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + edx + -12)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x14); /* mulss */
    edx = esi + edx + -16;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    ebp = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x18); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    MEM32(edx) = ebp;
    ebp = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(edx + 4) = ebp;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x18);
    MEM32(edx + 8) = ebp;
    edx = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + edx + -24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + edx + -32); /* mulss */
    edx = esi + edx + -32;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x18); /* mulss */
    ebp = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    MEM32(edx) = ebp;
    ebp = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(edx + 4) = ebp;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x18);
    MEM32(edx + 8) = ebp;
    edx = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + edx + -40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + edx + -48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + edx + -44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    edx = esi + edx + -48;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x14); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    ebp = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x18); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    MEM32(edx) = ebp;
    ebp = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(edx + 4) = ebp;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edx + 8) = ebp;
    if ((_fa != 0)) goto loc_00243290; /* jne: not equal / not zero */

loc_00243517: ;
    POP32(esp, ebp);

loc_00243518: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002435D6; /* jl: less (signed <) */

loc_00243520: ;
    esi = ebx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = ebx + 1;
    goto loc_00243530;

    /* nop */

loc_00243530: ;
    edx = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(edx + esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + esi); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x14); /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    ebx = MEM32(esp + 0xC);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x18); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    MEM32(edx) = ebx;
    ebx = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(edx + 4) = ebx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edx + 8) = ebx;
    if ((_fa != 0)) goto loc_00243530; /* jne: not equal / not zero */

loc_002435D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002436C0
 * Original: 0x002436C0 - 0x002436DF (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002436C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002436C0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002436F0
 * Original: 0x002436F0 - 0x00243709 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002436F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002436F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002436FCu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002436FC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00243710
 * Original: 0x00243710 - 0x0024375B (75 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00243710: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    MEM32(ebx + 4) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00243754; /* jle: less or equal (signed <=) */

loc_0024371F: ;
    eax = esi + esi * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024372Cu); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_0024372C: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024374E; /* je: equal / zero */

loc_00243735: ;
    PUSH32(esp, 0x161FE);
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00243743u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_00243743: ;
    MEM32(ebx + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0024374E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 8) = edi;
    POP32(esp, edi);

loc_00243754: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00243770
 * Original: 0x00243770 - 0x002437A1 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00243770: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00243782u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024377Fu); } /* indirect call */
    }

loc_00243782: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024378Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0024378B: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00243794u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00243794: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002437B0
 * Original: 0x002437B0 - 0x00243823 (115 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002437B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002437B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    MEM32(esi + 0xC) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0024381C; /* jle: less or equal (signed <=) */

loc_002437BF: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    edx = edi + edi * 4;
    PUSH32(esp, 0x7FE2A4);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x002437D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002437D4u); } /* indirect call */
    }

loc_002437D7: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002437ED; /* je: equal / zero */

loc_002437DD: ;
    PUSH32(esp, 0x373EF);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002437EBu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_002437EB: ;
    goto loc_002437EF;

loc_002437ED: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002437EF: ;
    eax = MEM32(esi + 0xC);
    edi = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x00243804u); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_00243804: ;
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esi + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243815u); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_00243815: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    POP32(esp, ebx);

loc_0024381C: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00243840
 * Original: 0x00243840 - 0x00243885 (69 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243840: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024387D; /* je: equal / zero */

loc_0024384C: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, ebp);
    ebp = ecx + -4;
    PUSH32(esp, esi);
    esi = eax;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00243870; /* js: sign (negative) */

loc_0024385E: ;
    PUSH32(esp, ebx);
    ebx = eax + 1;

loc_00243862: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0024386Cu); RECOMP_ABI_CALL(0x00032F7Fu, sub_00032F7F); /* call 0x00032F7F */

loc_0024386C: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00243862; /* jne: not equal / not zero */

loc_0024386F: ;
    POP32(esp, ebx);

loc_00243870: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00243876u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00243876: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);

loc_0024387D: ;
    MEM32(edi + 0x1C) = eax;
    MEM32(edi + 0x20) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002438A0
 * Original: 0x002438A0 - 0x002438F0 (80 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002438A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002438A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    MEM32(ebx + 0x1C) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_002438E9; /* jle: less or equal (signed <=) */

loc_002438AF: ;
    eax = esi;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002438BEu); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_002438BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002438E3; /* je: equal / zero */

loc_002438C5: ;
    PUSH32(esp, 0x289DF);
    PUSH32(esp, esi);
    edi = eax + 4;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    PUSH32(esp, 0x002438D8u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_002438D8: ;
    MEM32(ebx + 0x20) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002438E3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x20) = edi;
    POP32(esp, edi);

loc_002438E9: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00243910
 * Original: 0x00243910 - 0x0024393D (45 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00243910: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024393A; /* jle: less or equal (signed <=) */

loc_0024391D: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00243920: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0024392Eu); RECOMP_ABI_CALL(0x0002C125u, sub_0002C125); /* call 0x0002C125 */

loc_0024392E: ;
    eax = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x28;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00243920; /* jl: less (signed <) */

loc_00243939: ;
    POP32(esp, ebx);

loc_0024393A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00243950
 * Original: 0x00243950 - 0x00243E17 (1223 bytes, 308 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00243950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00243950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    edx = eax + -1;
    ebx = edx + 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00243BEE; /* jl: less (signed <) */

loc_00243973: ;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = edx + edx * 2;
    ecx = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = edx + ecx * 4;
    goto loc_00243990;

    /* nop */
    /* nop */

loc_00243990: ;
    ecx = MEM32(edi + 8);
    xmm4 = XMM_SCALAR(MEMF(ecx + eax + 4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + eax + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 8);
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(eax + ecx) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 8);
    MEMF(ecx + eax + 4) = xmm1.f[0]; /* movss */
    ecx = MEM32(edi + 8);
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + eax + 8) = xmm2.f[0]; /* movss */
    ecx = MEM32(edi + 8);
    xmm4 = XMM_SCALAR(MEMF(ecx + eax + -8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + eax + -4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + eax + -12)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 8);
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(ecx + eax + -12) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 8);
    MEMF(ecx + eax + -8) = xmm1.f[0]; /* movss */
    ecx = MEM32(edi + 8);
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + eax + -4) = xmm2.f[0]; /* movss */
    ecx = MEM32(edi + 8);
    xmm4 = XMM_SCALAR(MEMF(ecx + eax + -20)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + eax + -16)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + eax + -24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(eax + ecx + -24) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 8);
    MEMF(ecx + eax + -20) = xmm1.f[0]; /* movss */
    ecx = MEM32(edi + 8);
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + eax + -16) = xmm2.f[0]; /* movss */
    ecx = MEM32(edi + 8);
    xmm4 = XMM_SCALAR(MEMF(ecx + eax + -32)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + eax + -28)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + eax + -36)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(eax + ecx + -36) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 8);
    MEMF(ecx + eax + -32) = xmm1.f[0]; /* movss */
    ecx = MEM32(edi + 8);
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + eax + -28) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00243990; /* jne: not equal / not zero */

loc_00243BEE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00243CA0; /* jl: less (signed <) */

loc_00243BF6: ;
    eax = edx + edx * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_00243C00: ;
    ecx = MEM32(edi + 8);
    xmm4 = XMM_SCALAR(MEMF(ecx + eax + 4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + eax + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 8);
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(eax + ecx) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 8);
    MEMF(ecx + eax + 4) = xmm1.f[0]; /* movss */
    ecx = MEM32(edi + 8);
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + eax + 8) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00243C00; /* jne: not equal / not zero */

loc_00243CA0: ;
    ecx = MEM32(edi + 0x1C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00243DEA; /* js: sign (negative) */

loc_00243CAA: ;
    eax = ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    goto loc_00243CC0;

loc_00243CBA: ;
    eax = MEM32(esp + 0x18);
    edi = edi;

loc_00243CC0: ;
    ebx = MEM32(edi + 0x20);
    ecx = esp + 0x20;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00243CCEu); RECOMP_ABI_CALL(0x000289DFu, sub_000289DF); /* call 0x000289DF */

loc_00243CCE: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebx + 8); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x28); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x34); /* mulss */
    eax = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x38); /* mulss */
    ecx = MEM32(esp + 0x28);
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x38) = ecx;
    ecx = esp + 0x20;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x3C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00243DA1u); RECOMP_ABI_CALL(0x00032F7Fu, sub_00032F7F); /* call 0x00032F7F */

loc_00243DA1: ;
    eax = MEM32(edi + 0x20);
    edx = MEM32(esp + 0x30);
    ebx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(ecx + 8) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    ecx = esp + 0x30;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00243DD4u); RECOMP_ABI_CALL(0x00032F7Fu, sub_00032F7F); /* call 0x00032F7F */

loc_00243DD4: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_00243CBA; /* jne: not equal / not zero */

loc_00243DEA: ;
    eax = MEM32(edi + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00243E0E; /* jle: less or equal (signed <=) */

loc_00243DF3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00243DF5: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00243E03u); RECOMP_ABI_CALL(0x0002C125u, sub_0002C125); /* call 0x0002C125 */

loc_00243E03: ;
    eax = MEM32(edi + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x28;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00243DF5; /* jl: less (signed <) */

loc_00243E0E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00243F50
 * Original: 0x00243F50 - 0x0024409F (335 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00243F50: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F0728;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 1;
    MEM32(esi + 0x44) = ecx;
    MEM32(esi + 8) = eax;
    edx = MEM32(0x8C21CC);
    MEM8(esi + 6) = LO8(ecx);
    ecx = esi + 0x50;
    MEM32(esi + 0xC) = edx;
    MEM8(esi + 5) = LO8(eax);
    MEM8(esi + 7) = LO8(eax);
    MEM32(esi + 0x10) = 0x8FA2D0;
    MEM32(esi) = 0x7FE2EC;
    PUSH32(esp, 0x00243FCCu); RECOMP_ABI_CALL(0x0002B22Au, sub_0002B22A); /* call 0x0002B22A */

loc_00243FCC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x104) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x108) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x110) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x114) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x118) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x11C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x120) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x124) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x128) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x12C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x130) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x134) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x138) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x13C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x140) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x144) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x148) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x150) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x154) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x158) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x15C) = xmm1.f[0]; /* movss */
    MEM8(esi + 4) = 4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00244100
 * Original: 0x00244100 - 0x00244105 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00244100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00244100: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00244110
 * Original: 0x00244110 - 0x0024411E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244110(void)
{

loc_00244110: ;
    MEM32(ecx + 0x50) = 0x7F0728;
    MEM32(ecx) = 0x7F0728;
    esp += 4; return; /* ret */

}

/**
 * sub_00244130
 * Original: 0x00244130 - 0x00244285 (341 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00244130: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F0728;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    ecx = 1;
    MEM32(esi + 0x44) = ecx;
    edx = MEM32(0x8C21CC);
    MEM32(esi + 0xC) = edx;
    MEM8(esi + 5) = LO8(eax);
    MEM8(esi + 7) = LO8(eax);
    MEM32(esi + 0x10) = 0x8FA2D0;
    MEM8(esi + 6) = LO8(ecx);
    MEM32(esi) = 0x7FE308;
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x8C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x9C) = xmm1.f[0]; /* movss */
    PUSH32(esp, edi);
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xAC) = xmm1.f[0]; /* movss */
    edi = esi + 0xB0;
    ebx = 2;

loc_00244255: ;
    ecx = edi;
    PUSH32(esp, 0x0024425Cu); RECOMP_ABI_CALL(0x00022C3Du, sub_00022C3D); /* call 0x00022C3D */

loc_0024425C: ;
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x170;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00244255; /* jne: not equal / not zero */

loc_00244265: ;
    ecx = esi + 0x3B4;
    PUSH32(esp, 0x00244270u); RECOMP_ABI_CALL(0x000289DFu, sub_000289DF); /* call 0x000289DF */

loc_00244270: ;
    ecx = esi + 0x3C4;
    PUSH32(esp, 0x0024427Bu); RECOMP_ABI_CALL(0x000289DFu, sub_000289DF); /* call 0x000289DF */

loc_0024427B: ;
    POP32(esp, edi);
    MEM8(esi + 4) = 5;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002442E0
 * Original: 0x002442E0 - 0x00244388 (168 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002442E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002442E0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0x7F0728;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    edx = 1;
    MEM32(eax + 0x44) = edx;
    PUSH32(esp, esi);
    esi = MEM32(0x8C21CC);
    MEM32(eax + 0xC) = esi;
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 0x10) = 0x8FA2D0;
    MEM8(eax + 6) = LO8(edx);
    MEM32(eax) = 0x7FE2C0;
    MEMF(eax + 0x150) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x154) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x158) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0x15C) = xmm0.f[0]; /* movss */
    MEM8(eax + 4) = 3;
    MEM32(eax + 0x160) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002443C0
 * Original: 0x002443C0 - 0x002443F9 (57 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002443C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002443C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x160);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x7FE2C0;
    if (CMP_EQ(_fa, _fb)) goto loc_002443DA; /* je: equal / zero */

loc_002443D3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002443DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002443D7u); } /* indirect call */
    }

loc_002443DA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x7F0728;
    if (TEST_Z(_fa, _fb)) goto loc_002443F3; /* je: equal / zero */

loc_002443E7: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002443F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002443F0u); } /* indirect call */
    }

loc_002443F3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00244410
 * Original: 0x00244410 - 0x0024442E (30 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244410(void)
{

loc_00244410: ;
    eax = ZX8(MEM8(esp + 4));
    ecx = ZX8(MEM8(esp + 8));
    eax = eax + eax * 2;
    edx = ecx + eax * 4;
    eax = MEM32(esp + 0xC);
    MEM32(edx * 4 + 0x8F9DF0) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00244440
 * Original: 0x00244440 - 0x0024445E (30 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244440(void)
{

loc_00244440: ;
    eax = ZX8(MEM8(esp + 4));
    ecx = ZX8(MEM8(esp + 8));
    eax = eax + eax * 2;
    edx = ecx + eax * 4;
    eax = MEM32(esp + 0xC);
    MEM32(edx * 4 + 0x8FA030) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00244470
 * Original: 0x00244470 - 0x00244488 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00244470: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00244484u); RECOMP_ABI_CALL(0x00025271u, sub_00025271); /* call 0x00025271 */

loc_00244484: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00244490
 * Original: 0x00244490 - 0x00244CA4 (2068 bytes, 470 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00244490(void)
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

loc_00244490: ;
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
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7FE284)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x150)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    ecx = eax + 0xC0;
    edx = MEM32(ecx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FE288)); /* movss */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ecx + 4);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ebx = eax + 0x90;
    MEM32(esp + 0x34) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    esi = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 0x70); /* subss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esi + 0x80); /* mulss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esi + 0x74); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEM32(esp + 0x38) = edx;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(esi + 0x78); /* subss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x3C) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x8C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esi + 0x84); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebx + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm6 = xmm1; /* movaps */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm6.f[0]; _fcb = MEMF(0x7FBFA0); /* comiss */
    MEM32(esp + 0x14) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024466C; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(0x7FBFA0)) */

loc_002445C1: ;
    xmm7 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm6 = xmm7; /* movaps */
    xmm6.f[0] = xmm6.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00244616; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_002445E8: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x7FE284); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00244601; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7FE284)) */

loc_002445F1: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x14) = ecx;
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */

loc_00244601: ;
    xmm1 = XMM_SCALAR(MEMF(0x7FE288)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024464A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024460E: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_0024464A;

loc_00244616: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7FE284); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00244637; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7FE284)) */

loc_0024461F: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM32(esp + 0x14) = ecx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00244637: ;
    xmm0 = XMM_SCALAR(MEMF(0x7FE288)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024464A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00244644: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_0024464A: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00244663; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024465B: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024468A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00244663: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024466C: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00244663; /* ja: above (unsigned >) (xmm6.f[0] vs xmm1.f[0]) */

loc_0024467F: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00244663; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_00244688: ;
    goto loc_0024468E;

loc_0024468A: ;
    edx = MEM32(esp + 0x14);

loc_0024468E: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebx + 0x18)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esi + 0x88); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x154)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x20); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x8C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esi + 0x84); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebx + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm6.f[0]; _fcb = MEMF(0x7FBFA0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002448A4; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(0x7FBFA0)) */

loc_00244722: ;
    xmm7 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm6 = xmm7; /* movaps */
    xmm6.f[0] = xmm6.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00244774; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00244749: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00244764; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0x10)) */

loc_00244750: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x14) = 1;
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */

loc_00244764: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002447A5; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_0024476F: ;
    xmm6 = xmm0; /* movaps */
    goto loc_002447A5;

loc_00244774: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00244797; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_0024477B: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM32(esp + 0x14) = 1;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00244797: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002447A5; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm1.f[0]) */

loc_002447A2: ;
    xmm6 = xmm1; /* movaps */

loc_002447A5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00244663; /* ja: above (unsigned >) (xmm0.f[0] vs xmm6.f[0]) */

loc_002447B4: ;
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm7.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00244663; /* ja: above (unsigned >) (xmm7.f[0] vs xmm6.f[0]) */

loc_002447C0: ;
    edx = MEM32(esp + 0x14);

loc_002447C4: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x158)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x20); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x88); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x8C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x84); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x80); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x7FBFA0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00244B05; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(0x7FBFA0)) */

loc_00244858: ;
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002448D3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024487F: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024489A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0x10)) */

loc_00244886: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x14) = 2;
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */

loc_0024489A: ;
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002448FE; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_0024489F: ;
    xmm6 = xmm0; /* movaps */
    goto loc_002448FE;

loc_002448A4: ;
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00244663; /* ja: above (unsigned >) (xmm1.f[0] vs xmm7.f[0]) */

loc_002448BB: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm7.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00244663; /* ja: above (unsigned >) (xmm7.f[0] vs xmm2.f[0]) */

loc_002448C8: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    goto loc_002447C4;

loc_002448D3: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002448F6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_002448DA: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM32(esp + 0x14) = 2;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_002448F6: ;
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002448FE; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm1.f[0]) */

loc_002448FB: ;
    xmm6 = xmm1; /* movaps */

loc_002448FE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00244663; /* ja: above (unsigned >) (xmm0.f[0] vs xmm6.f[0]) */

loc_0024490D: ;
    _fca = xmm7.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00244663; /* ja: above (unsigned >) (xmm7.f[0] vs xmm6.f[0]) */

loc_00244916: ;
    edx = MEM32(esp + 0x14);

loc_0024491A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = xmm7; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00244B2B; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00244936: ;
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00244663; /* ja: above (unsigned >) (xmm7.f[0] vs xmm1.f[0]) */

loc_0024493F: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0xA8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00244663; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_00244954: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00244959u); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_00244959: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00244960u); RECOMP_ABI_CALL(0x0003245Du, sub_0003245D); /* call 0x0003245D */

loc_00244960: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xA8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    edi = eax;
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024498C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00244987: ;
    MEMF(edi + 0x34) = xmm1.f[0]; /* movss */

loc_0024498C: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002449A5u); RECOMP_ABI_CALL(0x00030E14u, sub_00030E14); /* call 0x00030E14 */

loc_002449A5: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    xmm2 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEM32(esp + 0x50) = edx;
    edx = MEM32(eax + 0xC);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    MEM32(esp + 0x54) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x70); /* addss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 4) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x74); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x78); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x38); /* mulss */
    eax = edi + 4;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0x10) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    ebx = edi + 0x10;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x4C) = edx;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    ecx = edi + 0x58;
    PUSH32(esp, eax);
    MEMF(edi + 0x18) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00244AD0u); RECOMP_ABI_CALL(0x00034109u, sub_00034109); /* call 0x00034109 */

loc_00244AD0: ;
    PUSH32(esp, ebx);
    ecx = edi + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00244AD9u); RECOMP_ABI_CALL(0x0001466Fu, sub_0001466F); /* call 0x0001466F */

loc_00244AD9: ;
    fp_top() = -fp_top(); /* fchs */
    eax = MEM32(ebp + 0xC);
    MEMF(edi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 0x40) = esi;
    MEM32(edi + 0x44) = eax;
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 0x50) = ecx;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(ebp + 0x10);
    MEM32(edi + 0x54) = edx;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00244AFCu); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_00244AFC: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00244B05: ;
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00244663; /* ja: above (unsigned >) (xmm1.f[0] vs xmm7.f[0]) */

loc_00244B19: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm7.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00244663; /* ja: above (unsigned >) (xmm7.f[0] vs xmm2.f[0]) */

loc_00244B26: ;
    goto loc_0024491A;

loc_00244B2B: ;
    _fca = xmm6.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00244663; /* jb: below (unsigned <) (xmm6.f[0] vs xmm7.f[0]) */

loc_00244B34: ;
    xmm0 = XMM_SCALAR(MEMF(0x7FE288)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00244663; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm6.f[0]) */

loc_00244B45: ;
    eax = MEM32(esp + 0x18);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00244B5Au); RECOMP_ABI_CALL(0x00030E14u, sub_00030E14); /* call 0x00030E14 */

loc_00244B5A: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7FE324)); /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x54) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x4C) = eax;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00244BB3u); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_00244BB3: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00244BBAu); RECOMP_ABI_CALL(0x0003245Du, sub_0003245D); /* call 0x0003245D */

loc_00244BBA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    edi = eax;
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(edi + 4) = xmm2.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    eax = edi + 4;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(edi + 8) = xmm3.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    MEMF(edi + 0xC) = xmm4.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEMF(edi + 0x10) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    ecx = esp + 0x30;
    MEMF(edi + 0x14) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = edi + 0x58;
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00244C7Du); RECOMP_ABI_CALL(0x00034109u, sub_00034109); /* call 0x00034109 */

loc_00244C7D: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    MEM32(edi + 0x40) = esi;
    MEM32(edi + 0x44) = eax;
    edx = MEM32(esi + 0x10);
    MEM32(edi + 0x50) = edx;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    MEM32(edi + 0x54) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00244C9Bu); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_00244C9B: ;
    eax = edi;
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
 * sub_00244EB0
 * Original: 0x00244EB0 - 0x002455DD (1837 bytes, 447 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00244EB0(void)
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

loc_00244EB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xB4));
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x18);
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(ecx + 0x24);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + eax + 8); /* mulss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0xC); /* addss */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0xA0); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002455D4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00244F14: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 8); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edi + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edi); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 0xC); /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0xA0); /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x7FE28C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002455D4; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_00244F60: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xA0); /* subss */
    xmm5 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm4.f[0]; _fcb = xmm7.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00244FB4; /* jnp: not parity */

loc_00244F8C: ;
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00244FA3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_00244F9B: ;
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    goto loc_00244FAE;

loc_00244FA3: ;
    _fca = xmm7.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00244FAE; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm0.f[0]) */

loc_00244FA8: ;
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */

loc_00244FAE: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */

loc_00244FB4: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0xA8); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0xA8); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0xA8); /* mulss */
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 0x26);
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x70); /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x74); /* addss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x78); /* addss */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm5.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_002450C1; /* jle: less or equal (signed <=) */

loc_00245055: ;
    ecx = MEM32(ecx + 0x20);
    MEM32(esp + 0x18) = ecx;
    /* nop */

loc_00245060: ;
    edx = MEM32(esp + 0x18);
    ecx = (uint32_t)(int32_t)SMEM16(edx);
    edx = MEM32(ebp + 0x18);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0 = XMM_SCALAR(MEMF(ecx + edx + 8)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + edx + 4)); /* movss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xC); /* addss */
    xmm6 = XMM_SCALAR(MEMF(0x7FE28C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    MEMF(esp + eax * 4 + 0x78) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00245141; /* ja: above (unsigned >) (xmm0.f[0] vs xmm6.f[0]) */

loc_002450AF: ;
    edx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00245060; /* jl: less (signed <) */

loc_002450BF: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002450C1: ;
    ecx = MEM32(0x8FA278);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00245118; /* jne: not equal / not zero */

loc_002450CB: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002450D3u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002450D3: ;
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00245112; /* je: equal / zero */

loc_002450F9: ;
    MEM32(0x8FA274) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    ecx = eax;

loc_00245112: ;
    MEM32(0x8FA278) = ecx;

loc_00245118: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = ecx + 0x10;
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00245217; /* je: equal / zero */

loc_0024512A: ;
    ecx = MEM32(eax + 0x38);
    MEM32(ebx) = ecx;
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0024520E; /* je: equal / zero */

loc_00245139: ;
    MEM32(ebx + 0x3C) = edx;
    goto loc_00245220;

loc_00245141: ;
    edx = MEM32(ebp + 0x14);
    edi = ebx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002451D4; /* jne: not equal / not zero */

loc_0024514F: ;
    xmm0 = XMM_SCALAR(MEMF(0x7FE328)); /* movss */

loc_00245157: ;
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    ecx = MEM32(edx + 0x1C);
    MEMF(esp + eax * 4 + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm5.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002452F8; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_002451B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = (uint32_t)(int32_t)SMEM16(ecx + eax * 2);
    ebx = edx + edx * 2;
    edx = MEM32(ebp + 0x1C);
    ebx = edx + ebx * 4;
    if (CMP_NE(_fa, _fb)) goto loc_002452D7; /* jne: not equal / not zero */

loc_002451C6: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    eax = eax + eax * 2;
    eax = edx + eax * 4;
    goto loc_002452E2;

loc_002451D4: ;
    ecx = MEM32(edx + 0x20);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + 2);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + 0x18))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xC); /* addss */
    goto loc_00245157;

loc_0024520E: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ecx + 0x14) = edx;
    goto loc_00245220;

loc_00245217: ;
    eax = MEM32(ecx + 8);
    ebx = eax + 0x70;
    MEM32(ecx + 8) = ebx;

loc_00245220: ;
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(ecx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7FE2B4)); /* movss */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = ebx;
    MEM32(eax + 0x48) = edx;
    MEM32(eax + 0x4C) = edx;
    MEM32(eax + 0x50) = edx;
    MEM32(eax + 0x54) = edx;
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    edx = edi;
    ebx = MEM32(edx);
    ecx = eax + 0x58;
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(ecx + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(edi + 0xC);
    MEM32(eax + 0x64) = ecx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm3.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x18) = eax;
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm4.f[0]; /* movss */
    edi = eax;
    goto loc_0024559C;

loc_002452D7: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + 2);
    ecx = eax + eax * 2;
    eax = edx + ecx * 4;

loc_002452E2: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002452F3u); RECOMP_ABI_CALL(0x00035469u, sub_00035469); /* call 0x00035469 */

loc_002452F3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00245343;

loc_002452F8: ;
    edx = (uint32_t)(int32_t)SMEM16(ecx + eax * 2);
    ecx = ecx + eax * 2;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    edi = edx + edx * 2;
    edx = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = ecx + ecx * 2;
    edi = edx + edi * 4;
    ecx = edx + ecx * 4;
    if (CMP_NE(_fa, _fb)) goto loc_0024531B; /* jne: not equal / not zero */

loc_00245319: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024531B: ;
    ebx = MEM32(ebp + 0x14);
    ebx = MEM32(ebx + 0x1C);
    eax = (uint32_t)(int32_t)SMEM16(ebx + eax * 2);
    eax = eax + eax * 2;
    edx = edx + eax * 4;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024533Du); RECOMP_ABI_CALL(0x00011EDDu, sub_00011EDD); /* call 0x00011EDD */

loc_0024533D: ;
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00245343: ;
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x80); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x84); /* subss */
    xmm7.f[0] = xmm7.f[0] - MEMF(esi + 0x88); /* subss */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x8C)); /* movss */
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xA0);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, ecx);
    ebx = esi + 0x70;
    PUSH32(esp, ebx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = xmm7.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002453BAu); RECOMP_ABI_CALL(0x0002FB45u, sub_0002FB45); /* call 0x0002FB45 */

loc_002453BA: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002455D4; /* je: equal / zero */

loc_002453C5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xA8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002453DD; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0xA8)) */

loc_002453D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002455D4; /* je: equal / zero */

loc_002453DD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002453E2u); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_002453E2: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002453E9u); RECOMP_ABI_CALL(0x0003245Du, sub_0003245D); /* call 0x0003245D */

loc_002453E9: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x60); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x64); /* subss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x68); /* subss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    ecx = MEM32(esp + 0x2C);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edi = eax;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x3C) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x38) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x34) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x74); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = esp + 0x30;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x44;
    ebx = edi + 0x58;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002454F9u); RECOMP_ABI_CALL(0x00014D6Du, sub_00014D6D); /* call 0x00014D6D */

loc_002454F9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(edi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x48); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0xC); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0xA8); /* divss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00245591; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00245589: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00245594; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00245591: ;
    xmm0 = xmm1; /* movaps */

loc_00245594: ;
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */

loc_0024559C: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0x5C); /* subss */
    MEM32(edi + 0x40) = eax;
    MEM32(edi + 0x44) = ecx;
    MEMF(edi + 0x68) = xmm7.f[0]; /* movss */
    edx = MEM32(eax + 0x10);
    eax = MEM32(ebp + 0x14);
    MEM32(edi + 0x50) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(edi + 0x54) = ecx;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002455CBu); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_002455CB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002455D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_002457B0
 * Original: 0x002457B0 - 0x00246818 (4200 bytes, 890 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002457B0(void)
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

loc_002457B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3E0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    ebx = eax + 0x90;
    xmm4 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    esi = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x398); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x3F0); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x390); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x70)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x88); /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    ecx = MEM32(esp + 0x80);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x78)); /* movss */
    edx = MEM32(esp + 0x84);
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x84); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x8C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x80); /* mulss */
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esp + 0x88);
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x50); /* subss */
    MEM32(esp + 0x58) = ecx;
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x58); /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x7C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    MEM32(esp + 0x54) = edx;
    xmm5.f[0] = xmm5.f[0] - MEMF(esp + 0x54); /* subss */
    edx = MEM32(esp + 0x8C);
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(ebx); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm7 = xmm6; /* movaps */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x88) = xmm6.f[0]; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x84) = xmm5.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    xmm5 = xmm3; /* movaps */
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm6.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x8C); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x80); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x8C)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x88); /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x3DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x84); /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm7.f[0] = xmm7.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00245A48; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00245A3F: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0024668A; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00245A48: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00245DD8; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_00245A51: ;
    _fca = xmm6.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00245DD8; /* jb: below (unsigned <) (xmm6.f[0] vs xmm4.f[0]) */

loc_00245A5A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00245A5Fu); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_00245A5F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00245A66u); RECOMP_ABI_CALL(0x0003245Du, sub_0003245D); /* call 0x0003245D */

loc_00245A66: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    edi = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(edi + 0x40) = esi;
    MEM32(edi + 0x44) = eax;
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 0x50) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x54) = edx;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x54); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x58); /* addss */
    xmm4 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm6 = xmm2; /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    MEMF(esp + 0x68) = xmm6.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x60) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x64) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x7C)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm6 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 0x20); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x3EC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 0xA0); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x60); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(esp + 0x60, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x54); /* subss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x58); /* subss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm6.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00245C38u); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_00245C38: ;
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00245C52u); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_00245C52: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x20); /* divss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x44); /* mulss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x48); /* mulss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x40); /* mulss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(edi + 0x10) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x48); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    ebx = edi + 0x58;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(edi + 0x18) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00245D5Fu); RECOMP_ABI_CALL(0x00014D6Du, sub_00014D6D); /* call 0x00014D6D */

loc_00245D5F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x68); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x64); /* mulss */
    ecx = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0xC); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0x68) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    PUSH32(esp, edi);
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00245DCFu); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_00245DCF: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00245DD8: ;
    _fca = xmm7.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00245DE2; /* jb: below (unsigned <) (xmm7.f[0] vs xmm3.f[0]) */

loc_00245DDD: ;
    xmm4 = xmm7; /* movaps */
    goto loc_00245DE9;

loc_00245DE2: ;
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm7.f[0]; /* subss */

loc_00245DE9: ;
    xmm6 = XMM_SCALAR(MEMF(0x7FE2B8)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002463D2; /* jb: below (unsigned <) (xmm4.f[0] vs xmm6.f[0]) */

loc_00245DFA: ;
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0024668A; /* ja: above (unsigned >) (xmm3.f[0] vs xmm4.f[0]) */

loc_00245E18: ;
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0 = xmm3; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00246145; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm3.f[0]) */

loc_00245E24: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] / xmm7.f[0]; /* divss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00245E6E; /* jb: below (unsigned <) (xmm6.f[0] vs xmm0.f[0]) */

loc_00245E65: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 1;
    goto loc_00245E7E;

loc_00245E6E: ;
    _fca = xmm6.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024668A; /* jb: below (unsigned <) (xmm6.f[0] vs xmm3.f[0]) */

loc_00245E77: ;
    eax = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00245E7E: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00245E88; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00245E83: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00245E8F;

loc_00245E88: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00245E8F: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7FE280); /* comiss */
    xmm0 = xmm3; /* movaps */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00245EA3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7FE280)) */

loc_00245E9B: ;
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_00245EA3: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00245EBE; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00245EA8: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + eax * 4 + 0x20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00245ECD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + eax * 4 + 0x20)) */

loc_00245EAF: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + ecx * 4 + 0x20); /* comiss */
    if ((_fca > _fcb)) goto loc_0024668A; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + ecx * 4 + 0x20)) */

loc_00245EBA: ;
    eax = ecx;
    goto loc_00245ECD;

loc_00245EBE: ;
    xmm1 = XMM_SCALAR(MEMF(esp + eax * 4 + 0x20)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0024668A; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00245ECD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + eax * 4 + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xA8); /* comiss */
    eax = esp + eax * 4 + 0x20;
    MEM32(esp + 0x3C) = eax;
    if ((_fca > _fcb)) goto loc_0024668A; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0xA8)) */

loc_00245EE8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00245EEDu); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_00245EED: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00245EF4u); RECOMP_ABI_CALL(0x0003245Du, sub_0003245D); /* call 0x0003245D */

loc_00245EF4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(edi + 0x44) = eax;
    MEM32(edi + 0x40) = esi;
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 0x50) = ecx;
    edx = MEM32(eax + 0x10);
    eax = MEM32(esp + 0x3C);
    MEM32(edi + 0x54) = edx;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xAC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(edi + 0x34) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00245F2D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00245F28: ;
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */

loc_00245F2D: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x80); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x70); /* addss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x74); /* addss */
    MEMF(edi + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x78); /* addss */
    MEMF(edi + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x50); /* subss */
    MEMF(esp + 0x80) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x54); /* subss */
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    MEMF(esp + 0x88) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x5C); /* subss */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    MEMF(esp + 0x94) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00246023u); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_00246023: ;
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024603Du); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_0024603D: ;
    edx = esp + 0x78;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024604Au); RECOMP_ABI_CALL(0x000183F0u, sub_000183F0); /* call 0x000183F0 */

loc_0024604A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x80); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x84); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 8) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x88); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    ebx = edi + 4;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0xC) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x80); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0x10) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x84); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x88); /* mulss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    edx = esp + 0x60;
    PUSH32(esp, edx);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    ecx = edi + 0x58;
    PUSH32(esp, ebx);
    MEMF(edi + 0x18) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00246121u); RECOMP_ABI_CALL(0x000338ADu, sub_000338AD); /* call 0x000338AD */

loc_00246121: ;
    PUSH32(esp, ebx);
    ecx = edi + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024612Au); RECOMP_ABI_CALL(0x0001466Fu, sub_0001466F); /* call 0x0001466F */

loc_0024612A: ;
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0xA0) - fp_top()); /* fsubr dword ptr [esi + 0xa0] */
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    MEMF(edi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024613Cu); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_0024613C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00246145: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm5.f[0] = xmm5.f[0] / xmm7.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm4 = xmm3; /* movaps */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024616C; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00246163: ;
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0024668A; /* ja: above (unsigned >) (xmm4.f[0] vs xmm0.f[0]) */

loc_0024616C: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024617A; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00246171: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0024668A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm4.f[0]) */

loc_0024617A: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xA8); /* comiss */
    if ((_fca > _fcb)) goto loc_0024668A; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0xA8)) */

loc_00246187: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024618Cu); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_0024618C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00246193u); RECOMP_ABI_CALL(0x0003245Du, sub_0003245D); /* call 0x0003245D */

loc_00246193: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    edi = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(edi + 0x44) = eax;
    MEM32(edi + 0x40) = esi;
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 0x50) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x54) = edx;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xAC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x80); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x70); /* addss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x74); /* addss */
    MEMF(edi + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x78); /* addss */
    MEMF(edi + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x50); /* subss */
    MEMF(esp + 0x80) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x54); /* subss */
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    MEMF(esp + 0x88) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x5C); /* subss */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    MEMF(esp + 0x94) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002462B9u); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_002462B9: ;
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002462D3u); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_002462D3: ;
    edx = esp + 0x78;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002462E0u); RECOMP_ABI_CALL(0x000183F0u, sub_000183F0); /* call 0x000183F0 */

loc_002462E0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x80); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    eax = edi + 4;
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x84); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 8) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x68); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0xC) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0x10) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x68); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ebx = edi + 0x58;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(edi + 0x18) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002463ACu); RECOMP_ABI_CALL(0x000338ADu, sub_000338AD); /* call 0x000338AD */

loc_002463AC: ;
    eax = esi + 0x70;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002463B7u); RECOMP_ABI_CALL(0x0002B563u, sub_0002B563); /* call 0x0002B563 */

loc_002463B7: ;
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0xA0) - fp_top()); /* fsubr dword ptr [esi + 0xa0] */
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    MEMF(edi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002463C9u); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_002463C9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002463D2: ;
    _fca = xmm5.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002463DC; /* jb: below (unsigned <) (xmm5.f[0] vs xmm3.f[0]) */

loc_002463D7: ;
    xmm4 = xmm5; /* movaps */
    goto loc_002463E3;

loc_002463DC: ;
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */

loc_002463E3: ;
    _fca = xmm4.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00246677; /* jb: below (unsigned <) (xmm4.f[0] vs xmm6.f[0]) */

loc_002463EC: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] / xmm5.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C40B8); /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm4 = xmm3; /* movaps */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00246417; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_0024640E: ;
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0024668A; /* ja: above (unsigned >) (xmm4.f[0] vs xmm0.f[0]) */

loc_00246417: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00246425; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_0024641C: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0024668A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm4.f[0]) */

loc_00246425: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xA8); /* comiss */
    if ((_fca > _fcb)) goto loc_0024668A; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0xA8)) */

loc_00246432: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00246437u); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_00246437: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024643Eu); RECOMP_ABI_CALL(0x0003245Du, sub_0003245D); /* call 0x0003245D */

loc_0024643E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    edi = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(edi + 0x40) = esi;
    MEM32(edi + 0x44) = eax;
    edx = MEM32(esi + 0x10);
    MEM32(edi + 0x50) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(edi + 0x54) = eax;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xAC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x80); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x70); /* addss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x74); /* addss */
    MEMF(edi + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x78); /* addss */
    MEMF(edi + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x50); /* subss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x54); /* subss */
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x84;
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x5C); /* subss */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024655Bu); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_0024655B: ;
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00246575u); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_00246575: ;
    eax = esp + 0x78;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00246582u); RECOMP_ABI_CALL(0x000183F0u, sub_000183F0); /* call 0x000183F0 */

loc_00246582: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    eax = edi + 4;
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 8) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0xC) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0x10) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    edx = esp + 0x60;
    PUSH32(esp, edx);
    ebx = edi + 0x58;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(edi + 0x18) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00246651u); RECOMP_ABI_CALL(0x000338ADu, sub_000338AD); /* call 0x000338AD */

loc_00246651: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x70); /* mulss */
    goto loc_002467EC;

loc_00246677: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00246681; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0024667C: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00246685;

loc_00246681: ;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_00246685: ;
    _fca = xmm3.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00246693; /* jb: below (unsigned <) (xmm3.f[0] vs xmm6.f[0]) */

loc_0024668A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00246693: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00246698u); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_00246698: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024669Fu); RECOMP_ABI_CALL(0x0003245Du, sub_0003245D); /* call 0x0003245D */

loc_0024669F: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    edi = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(edi + 0x44) = eax;
    MEM32(edi + 0x40) = esi;
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 0x50) = ecx;
    edx = MEM32(eax + 0x10);
    MEMF(edi + 0x34) = xmm1.f[0]; /* movss */
    MEM32(edi + 0x54) = edx;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 8); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebx + 4); /* subss */
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    MEMF(esp + 0x8C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x84) = xmm2.f[0]; /* movss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 8) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    eax = edi + 4;
    MEMF(edi + 0xC) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0x10) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ebx = edi + 0x58;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(edi + 0x18) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002467CBu); RECOMP_ABI_CALL(0x000338ADu, sub_000338AD); /* call 0x000338AD */

loc_002467CB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx); /* mulss */

loc_002467EC: ;
    ecx = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0xC); /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, edi);
    MEMF(edi + 0x68) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024680Fu); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_0024680F: ;
    eax = edi;
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
 * sub_00246C40
 * Original: 0x00246C40 - 0x00246CC0 (128 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00246C40: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0x7F0728;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 1;
    PUSH32(esp, esi);
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 8) = ecx;
    esi = MEM32(0x8C21CC);
    MEM32(eax + 0xC) = esi;
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 0x10) = 0x8FA2D0;
    MEM8(eax + 6) = LO8(edx);
    MEM32(eax) = 0x7FE32C;
    MEM8(eax + 4) = 8;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00246CE0
 * Original: 0x00246CE0 - 0x00246CE5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00246CE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00246CE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00246CF0
 * Original: 0x00246CF0 - 0x00246D2B (59 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00246CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x7FE32C;
    if (CMP_EQ(_fa, _fb)) goto loc_00246D0E; /* je: equal / zero */

loc_00246D00: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00246D07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00246D04u); } /* indirect call */
    }

loc_00246D07: ;
    MEM32(esi + 0x50) = 0;

loc_00246D0E: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00246D23; /* je: equal / zero */

loc_00246D15: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00246D1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00246D19u); } /* indirect call */
    }

loc_00246D1C: ;
    MEM32(esi + 0x54) = 0;

loc_00246D23: ;
    MEM32(esi) = 0x7F0728;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00246D40
 * Original: 0x00246D40 - 0x00246DC3 (131 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00246D40: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0x7F0728;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 1;
    PUSH32(esp, esi);
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 8) = ecx;
    esi = MEM32(0x8C21CC);
    MEM32(eax + 0xC) = esi;
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 0x10) = 0x8FA2D0;
    MEM8(eax + 6) = LO8(edx);
    MEM32(eax) = 0x7FE348;
    MEM8(eax + 4) = 7;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00246DF0
 * Original: 0x00246DF0 - 0x00246E36 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00246DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00246E16; /* je: equal / zero */

loc_00246DFA: ;
    edx = MEM32(ecx + -16);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -16;
    if (CMP_EQ(_fa, _fb)) goto loc_00246E0D; /* je: equal / zero */

loc_00246E04: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00246E0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00246E08u); } /* indirect call */
    }

loc_00246E0B: ;
    goto loc_00246E16;

loc_00246E0D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246E13u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00246E13: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00246E16: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x54) = 0;
    MEM32(esi + 0x58) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00246E34; /* je: equal / zero */

loc_00246E2B: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x50) = 0;

loc_00246E34: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00246E50
 * Original: 0x00246E50 - 0x00246EC4 (116 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00246E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00246E50: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebp = ecx;
    MEM32(ebp + 0x54) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00246E6B; /* jne: not equal / not zero */

loc_00246E5F: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00246E66u); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_00246E66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00246E87;

loc_00246E6B: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x170);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE2A4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00246E87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00246E84u); } /* indirect call */
    }

loc_00246E87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00246EBA; /* je: equal / zero */

loc_00246E8B: ;
    PUSH32(esp, ebx);
    ebx = eax + 0x10;
    MEM32(eax) = esi;
    eax = esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00246EB0; /* jl: less (signed <) */

loc_00246E9B: ;
    esi = eax + 1;
    edi = edi;

loc_00246EA0: ;
    ecx = edi;
    PUSH32(esp, 0x00246EA7u); RECOMP_ABI_CALL(0x00022C3Du, sub_00022C3D); /* call 0x00022C3D */

loc_00246EA7: ;
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x170;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00246EA0; /* jne: not equal / not zero */

loc_00246EB0: ;
    POP32(esp, edi);
    MEM32(ebp + 0x58) = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00246EBA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(ebp + 0x58) = eax;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00246EF0
 * Original: 0x00246EF0 - 0x00246F5F (111 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00246EF0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00246F3D; /* je: equal / zero */

loc_00246EFD: ;
    ecx = MEM32(esi + -16);
    PUSH32(esp, edi);
    edi = esi + -16;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x170);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00246F24; /* js: sign (negative) */

loc_00246F11: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0x7F0728;

loc_00246F17: ;
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x170;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x50) = edx;
    MEM32(eax) = edx;
    if ((_fa != 0)) goto loc_00246F17; /* jne: not equal / not zero */

loc_00246F24: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00246F35; /* je: equal / zero */

loc_00246F29: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00246F35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00246F32u); } /* indirect call */
    }

loc_00246F35: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00246F3D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    edx = 0x7F0728;
    MEM32(esi + 0x50) = edx;
    MEM32(esi) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00246F58; /* je: equal / zero */

loc_00246F4C: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00246F58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00246F55u); } /* indirect call */
    }

loc_00246F58: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00246F80
 * Original: 0x00246F80 - 0x00247359 (985 bytes, 240 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00246F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00246F80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00246FB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00246FB3u); } /* indirect call */
    }

loc_00246FB6: ;
    edi = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(ebp + 0xC));
    MEM32(esi + 0x50) = edi;
    MEM32(edi) = MEM32(edi) + 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x5C) = LO8(ecx);
    ebx = MEM32(edi + 4);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x20) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00246FD3u); RECOMP_ABI_CALL(0x000248C1u, sub_000248C1); /* call 0x000248C1 */

loc_00246FD3: ;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00247276; /* jl: less (signed <) */

loc_00246FE8: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = edx;
    edx = ebx * 4;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = edx;

loc_00247010: ;
    edx = MEM32(edi + 8);
    ebx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(edx + ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    ebx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    edi = eax + 0x100;
    MEM32(edi) = ebx;
    ebx = MEM32(esp + 0x24);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esp + 0x28);
    MEM32(edi + 8) = ebx;
    ebx = MEM32(esp + 0x2C);
    MEM32(edi + 0xC) = ebx;
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    edi = MEM32(esp + 0xC);
    MEMF(eax + 0x164) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x168) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ebp + 8);
    edx = MEM32(edx + 8);
    xmm0 = XMM_SCALAR(MEMF(edi + edx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    edx = edi + edx + 0x10;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    ebx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    edi = eax + 0x270;
    MEM32(edi) = ebx;
    ebx = MEM32(esp + 0x24);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esp + 0x28);
    MEM32(edi + 8) = ebx;
    ebx = MEM32(esp + 0x2C);
    MEM32(edi + 0xC) = ebx;
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    edi = MEM32(ebp + 8);
    MEMF(eax + 0x2D4) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x2D8) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0xC);
    MEM32(eax + 0x17C) = edx;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 0x180) = edx;
    edx = MEM32(esp + 0xC);
    edi = MEM32(edi + 8);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(edx + edi + -16)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    MEM32(esp + 0x18) = edx;
    edx = edx + edi + -16;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    ebx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    edi = eax + 0x3E0;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(edi) = ebx;
    ebx = MEM32(esp + 0x24);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esp + 0x28);
    MEM32(edi + 8) = ebx;
    ebx = MEM32(esp + 0x2C);
    MEM32(edi + 0xC) = ebx;
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    edi = MEM32(esp + 0x18);
    MEMF(eax + 0x444) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x448) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0xC);
    MEM32(eax + 0x2EC) = edx;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 0x2F0) = edx;
    edx = MEM32(ebp + 8);
    edx = MEM32(edx + 8);
    xmm0 = XMM_SCALAR(MEMF(edx + edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    ebx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    edi = eax + 0x550;
    MEM32(edi) = ebx;
    ebx = MEM32(esp + 0x24);
    MEM32(edi + 4) = ebx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x28);
    MEM32(edi + 8) = ebx;
    ebx = MEM32(esp + 0x2C);
    MEM32(edi + 0xC) = ebx;
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    edi = MEM32(esp + 0xC);
    MEMF(eax + 0x5B4) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x5B8) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0xC);
    MEM32(eax + 0x45C) = edx;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 0x460) = edx;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = edi;
    edi = MEM32(ebp + 8);
    MEM32(esp + 0x14) = edx;
    if ((_fa != 0)) goto loc_00247010; /* jne: not equal / not zero */

loc_0024726E: ;
    edx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x1C);

loc_00247276: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00247350; /* jge: greater or equal (signed >=) */

loc_0024727E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x164;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = ebx;
    goto loc_002472B0;

loc_002472A4: ;
    edi = MEM32(ebp + 8);
    goto loc_002472B0;

    /* nop */

loc_002472B0: ;
    edx = MEM32(edi + 8);
    edi = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(edx + edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    ebx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    edi = eax + -100;
    MEM32(edi) = ebx;
    ebx = MEM32(esp + 0x24);
    MEM32(edi + 4) = ebx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x28);
    MEM32(edi + 8) = ebx;
    ebx = MEM32(esp + 0x2C);
    MEM32(edi + 0xC) = ebx;
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    edi = MEM32(esp + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0xC);
    MEM32(eax + -344) = edx;
    edx = MEM32(esi + 0x10);
    MEM32(eax + -340) = edx;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x170;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x14) = edx;
    if ((_fa != 0)) goto loc_002472A4; /* jne: not equal / not zero */

loc_00247350: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00247450
 * Original: 0x00247450 - 0x002474D3 (131 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00247450: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0x7F0728;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 1;
    PUSH32(esp, esi);
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 8) = ecx;
    esi = MEM32(0x8C21CC);
    MEM32(eax + 0xC) = esi;
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 0x10) = 0x8FA2D0;
    MEM8(eax + 6) = LO8(edx);
    MEM32(eax) = 0x7FE364;
    MEM8(eax + 4) = 0xB;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM8(eax + 0x58) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00247500
 * Original: 0x00247500 - 0x00247516 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247500(void)
{

loc_00247500: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FE364;
    PUSH32(esp, 0x0024750Eu); RECOMP_ABI_CALL(0x000129AAu, sub_000129AA); /* call 0x000129AA */

loc_0024750E: ;
    MEM32(esi) = 0x7F0728;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00247520
 * Original: 0x00247520 - 0x0024759C (124 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247520: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0xC);
    ebx = ecx;
    MEM32(ebx + 0xC) = eax;
    ecx = MEM32(edi + 0x10);
    MEM32(ebx + 0x10) = ecx;
    SET_LO8(edx, MEM8(edi + 5));
    MEM8(ebx + 5) = LO8(edx);
    MEM8(ebx + 0x58) = 1;
    eax = MEM32(edi + 0x50);
    ecx = MEM32(0x8FA274);
    edx = MEM32(ecx);
    PUSH32(esp, 0x7FE2A4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00247557u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00247554u); } /* indirect call */
    }

loc_00247557: ;
    ebp = eax;
    eax = MEM32(edi + 0x50);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024758C; /* jle: less or equal (signed <=) */

loc_00247562: ;
    ecx = MEM32(edi + 0x54);
    ecx = MEM32(ecx + esi * 8);
    eax = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00247572u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024756Fu); } /* indirect call */
    }

loc_00247572: ;
    MEM32(ebp + esi * 8) = eax;
    MEM32(eax + 8) = ebx;
    ecx = MEM32(edi + 0x54);
    edx = MEM32(ecx + esi * 8 + 4);
    MEM32(ebp + esi * 8 + 4) = edx;
    eax = MEM32(edi + 0x50);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00247562; /* jl: less (signed <) */

loc_0024758C: ;
    edi = MEM32(edi + 0x50);
    MEM32(ebx + 0x50) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x54) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002475C0
 * Original: 0x002475C0 - 0x0024760D (77 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002475C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002475C0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, 0x5C);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x002475D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002475D3u); } /* indirect call */
    }

loc_002475D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002475F7; /* je: equal / zero */

loc_002475DA: ;
    ecx = eax;
    PUSH32(esp, 0x002475E1u); RECOMP_ABI_CALL(0x0001B357u, sub_0001B357); /* call 0x0001B357 */

loc_002475E1: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002475F0u); RECOMP_ABI_CALL(0x0002B815u, sub_0002B815); /* call 0x0002B815 */

loc_002475F0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002475F7: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00247606u); RECOMP_ABI_CALL(0x0002B815u, sub_0002B815); /* call 0x0002B815 */

loc_00247606: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00247620
 * Original: 0x00247620 - 0x0024766D (77 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00247620: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x50);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024765D; /* jle: less or equal (signed <=) */

loc_0024762D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_00247632: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8FA320) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x8FA320 (32-bit) */
    eax = MEM32(edi + 0x54);
    ecx = eax + esi * 8;
    eax = MEM32(ecx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00247645; /* jne: not equal / not zero */

loc_00247643: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00247645: ;
    ecx = MEM32(ecx);
    edx = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00247654u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00247651u); } /* indirect call */
    }

loc_00247654: ;
    eax = MEM32(edi + 0x50);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00247632; /* jl: less (signed <) */

loc_0024765C: ;
    POP32(esp, ebx);

loc_0024765D: ;
    ecx = edi;
    PUSH32(esp, 0x00247664u); RECOMP_ABI_CALL(0x00021CFCu, sub_00021CFC); /* call 0x00021CFC */

loc_00247664: ;
    MEM8(edi + 7) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00247680
 * Original: 0x00247680 - 0x002476F9 (121 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247680(void)
{

loc_00247680: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    SET_LO8(edx, MEM8(eax + 5));
    MEM8(ecx + 5) = LO8(edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax + 0x50;
    edi = MEM32(edx);
    esi = ecx + 0x50;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(esi + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(esi + 0xC) = edx;
    edx = eax + 0x60;
    edi = MEM32(edx);
    esi = ecx + 0x60;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(esi + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(esi + 0xC) = edx;
    edx = MEM32(eax + 0xA0);
    MEM32(ecx + 0xA0) = edx;
    edx = MEM32(eax + 0xA8);
    MEM32(ecx + 0xA8) = edx;
    eax = MEM32(eax + 0xAC);
    POP32(esp, edi);
    MEM32(ecx + 0xAC) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00247720
 * Original: 0x00247720 - 0x00247769 (73 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00247720: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, 0xB0);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00247738u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00247735u); } /* indirect call */
    }

loc_00247738: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247756; /* je: equal / zero */

loc_0024773C: ;
    ecx = eax;
    PUSH32(esp, 0x00247743u); RECOMP_ABI_CALL(0x0002B22Au, sub_0002B22A); /* call 0x0002B22A */

loc_00247743: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00247750u); RECOMP_ABI_CALL(0x000365B2u, sub_000365B2); /* call 0x000365B2 */

loc_00247750: ;
    eax = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00247756: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00247763u); RECOMP_ABI_CALL(0x000365B2u, sub_000365B2); /* call 0x000365B2 */

loc_00247763: ;
    eax = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00247780
 * Original: 0x00247780 - 0x002478C7 (327 bytes, 78 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247780: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(edi + 0x10);
    MEM32(esi + 0x10) = ecx;
    SET_LO8(edx, MEM8(edi + 5));
    MEM8(esi + 5) = LO8(edx);
    xmm0 = XMM_MEM(edi + 0x50); /* movaps */
    ebx = esi + 0x50;
    XMM_STORE(ebx, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x60); /* movaps */
    XMM_STORE(ebx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x70); /* movaps */
    XMM_STORE(ebx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x80); /* movaps */
    XMM_STORE(ebx + 0x30, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002477D9u); RECOMP_ABI_CALL(0x000381D2u, sub_000381D2); /* call 0x000381D2 */

loc_002477D9: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x20;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0x0024782Eu); RECOMP_ABI_CALL(0x000173F6u, sub_000173F6); /* call 0x000173F6 */

loc_0024782E: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x150)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp); /* mulss */
    MEMF(esi + 0x150) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x154)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 4); /* mulss */
    MEMF(esi + 0x154) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x158)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    MEMF(esi + 0x158) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x15C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(ebx); /* movaps */
    XMM_STORE(esi + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x10); /* movaps */
    XMM_STORE(esi + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x20); /* movaps */
    XMM_STORE(esi + 0xB0, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x30); /* movaps */
    XMM_STORE(esi + 0xC0, xmm0); /* movaps */
    ecx = MEM32(edi + 0x160);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x002478B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002478B4u); } /* indirect call */
    }

loc_002478B7: ;
    POP32(esp, edi);
    MEM32(esi + 0x160) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00247920
 * Original: 0x00247920 - 0x00247970 (80 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00247920: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, 0x170);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00247939u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00247936u); } /* indirect call */
    }

loc_00247939: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024795A; /* je: equal / zero */

loc_0024793D: ;
    ecx = eax;
    PUSH32(esp, 0x00247944u); RECOMP_ABI_CALL(0x0001B11Du, sub_0001B11D); /* call 0x0001B11D */

loc_00247944: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00247953u); RECOMP_ABI_CALL(0x0002A91Fu, sub_0002A91F); /* call 0x0002A91F */

loc_00247953: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0024795A: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00247969u); RECOMP_ABI_CALL(0x0002A91Fu, sub_0002A91F); /* call 0x0002A91F */

loc_00247969: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00247990
 * Original: 0x00247990 - 0x00247AAA (282 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00247990: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0x7F0728;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    edx = 1;
    MEM32(eax + 0x44) = edx;
    PUSH32(esp, esi);
    esi = MEM32(0x8C21CC);
    MEM32(eax + 0xC) = esi;
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 0x10) = 0x8FA2D0;
    MEM8(eax + 6) = LO8(edx);
    MEM32(eax) = 0x7FE380;
    MEMF(eax + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xD8) = xmm0.f[0]; /* movss */
    MEM8(eax + 4) = 6;
    MEM32(eax + 0xE0) = ecx;
    MEM8(eax + 0xE4) = LO8(ecx);
    MEM32(eax + 0xE8) = ecx;
    MEM32(eax + 0xEC) = ecx;
    MEM32(eax + 0xF0) = ecx;
    MEM32(eax + 0xF4) = ecx;
    MEMF(eax + 0x8C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x78) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x84) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00247AF0
 * Original: 0x00247AF0 - 0x00247AF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247AF0: ;
    g_seh_ebp = ebp; sub_0001837D(); return; /* tail jmp 0x0001837D */

}

/**
 * sub_00247B00
 * Original: 0x00247B00 - 0x00247BA7 (167 bytes, 59 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00247B00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x00247B0Au); RECOMP_ABI_CALL(0x0001837Du, sub_0001837D); /* call 0x0001837D */

loc_00247B0A: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebx + 0xEC) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00247B4C; /* jle: less or equal (signed <=) */

loc_00247B18: ;
    eax = esi;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00247B28u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00247B28: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247B44; /* je: equal / zero */

loc_00247B2F: ;
    PUSH32(esp, 0x289DF);
    PUSH32(esp, esi);
    edi = eax + 4;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    PUSH32(esp, 0x00247B42u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_00247B42: ;
    goto loc_00247B46;

loc_00247B44: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00247B46: ;
    MEM32(ebx + 0xE8) = edi;

loc_00247B4C: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebx + 0xF4) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00247B9A; /* jle: less or equal (signed <=) */

loc_00247B5A: ;
    ecx = esi + esi * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00247B68u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00247B68: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247B92; /* je: equal / zero */

loc_00247B71: ;
    PUSH32(esp, 0x161FE);
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00247B7Fu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_00247B7F: ;
    MEM32(ebx + 0xF0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0xE4) = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00247B92: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0xF0) = edi;

loc_00247B9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0xE4) = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00247BD0
 * Original: 0x00247BD0 - 0x00247C1F (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00247BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247BF4; /* je: equal / zero */

loc_00247BD9: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00247BEB; /* je: equal / zero */

loc_00247BE3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00247BE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00247BE7u); } /* indirect call */
    }

loc_00247BE9: ;
    goto loc_00247BF4;

loc_00247BEB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00247BF1u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00247BF1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00247BF4: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00247C14; /* je: equal / zero */

loc_00247C0B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00247C11u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00247C11: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00247C14: ;
    MEM32(0x8FA278) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00247C40
 * Original: 0x00247C40 - 0x00247CC0 (128 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00247C40: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0x7F0728;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 1;
    PUSH32(esp, esi);
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 8) = ecx;
    esi = MEM32(0x8C21CC);
    MEM32(eax + 0xC) = esi;
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 0x10) = 0x8FA2D0;
    MEM8(eax + 6) = LO8(edx);
    MEM32(eax) = 0x7FE39C;
    MEM8(eax + 4) = 0xA;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00247CE0
 * Original: 0x00247CE0 - 0x00247CF6 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247CE0(void)
{

loc_00247CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FE39C;
    PUSH32(esp, 0x00247CEEu); RECOMP_ABI_CALL(0x00024A33u, sub_00024A33); /* call 0x00024A33 */

loc_00247CEE: ;
    MEM32(esi) = 0x7F0728;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00247D00
 * Original: 0x00247D00 - 0x00247D5E (94 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247D00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 0xC) = eax;
    ecx = MEM32(ebx + 0x10);
    MEM32(edi + 0x10) = ecx;
    SET_LO8(edx, MEM8(ebx + 5));
    MEM8(edi + 5) = LO8(edx);
    eax = MEM32(ebx + 0x50);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00247D26u); RECOMP_ABI_CALL(0x0001DB11u, sub_0001DB11); /* call 0x0001DB11 */

loc_00247D26: ;
    eax = MEM32(ebx + 0x50);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00247D58; /* jle: less or equal (signed <=) */

loc_00247D2F: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);

loc_00247D34: ;
    ecx = MEM32(ebx + 0x54);
    ecx = MEM32(ecx + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00247D40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00247D3Du); } /* indirect call */
    }

loc_00247D40: ;
    ecx = MEM32(edi + 0x54);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 0x54);
    eax = MEM32(edx + esi * 4);
    MEM32(eax + 8) = edi;
    eax = MEM32(ebx + 0x50);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00247D34; /* jl: less (signed <) */

loc_00247D57: ;
    POP32(esp, ebp);

loc_00247D58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00247D80
 * Original: 0x00247D80 - 0x00247DCD (77 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00247D80: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, 0x58);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00247D96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00247D93u); } /* indirect call */
    }

loc_00247D96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247DB7; /* je: equal / zero */

loc_00247D9A: ;
    ecx = eax;
    PUSH32(esp, 0x00247DA1u); RECOMP_ABI_CALL(0x0001E5F7u, sub_0001E5F7); /* call 0x0001E5F7 */

loc_00247DA1: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00247DB0u); RECOMP_ABI_CALL(0x0001317Fu, sub_0001317F); /* call 0x0001317F */

loc_00247DB0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00247DB7: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00247DC6u); RECOMP_ABI_CALL(0x0001317Fu, sub_0001317F); /* call 0x0001317F */

loc_00247DC6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00247DE0
 * Original: 0x00247DE0 - 0x00247E1E (62 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247DE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x50);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00247E0E; /* jle: less or equal (signed <=) */

loc_00247DED: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);

loc_00247DF7: ;
    eax = MEM32(edi + 0x54);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00247E04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00247E01u); } /* indirect call */
    }

loc_00247E04: ;
    eax = MEM32(edi + 0x50);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00247DF7; /* jl: less (signed <) */

loc_00247E0C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00247E0E: ;
    ecx = edi;
    PUSH32(esp, 0x00247E15u); RECOMP_ABI_CALL(0x0002AE8Du, sub_0002AE8D); /* call 0x0002AE8D */

loc_00247E15: ;
    MEM8(edi + 7) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00247E30
 * Original: 0x00247E30 - 0x00247E71 (65 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00247E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x3C4;
    MEM32(esi) = 0x7FE308;
    PUSH32(esp, 0x00247E44u); RECOMP_ABI_CALL(0x00032F7Fu, sub_00032F7F); /* call 0x00032F7F */

loc_00247E44: ;
    ecx = esi + 0x3B4;
    PUSH32(esp, 0x00247E4Fu); RECOMP_ABI_CALL(0x00032F7Fu, sub_00032F7F); /* call 0x00032F7F */

loc_00247E4F: ;
    eax = esi + 0x390;
    ecx = 2;
    edx = 0x7F0728;
    /* nop */

loc_00247E60: ;
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x170;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x50) = edx;
    MEM32(eax) = edx;
    if ((_fa != 0)) goto loc_00247E60; /* jne: not equal / not zero */

loc_00247E6D: ;
    MEM32(esi) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00247E90
 * Original: 0x00247E90 - 0x00247FB7 (295 bytes, 67 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247E90(void)
{

loc_00247E90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    SET_LO8(edx, MEM8(eax + 5));
    MEM8(ecx + 5) = LO8(edx);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    edx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(ecx + 0x58) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x5C);
    MEM32(ecx + 0x5C) = esi;
    PUSH32(esp, edi);
    esi = eax + 0x60;
    ebx = MEM32(esi);
    edi = ecx + 0x60;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(edi + 8) = ebx;
    esi = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = esi;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x390)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(ecx + 0x390) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x394)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 4); /* mulss */
    MEMF(ecx + 0x394) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x39C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x218) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x214) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x398)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 4); /* mulss */
    MEMF(ecx + 0x398) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x3A0) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x384) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x388) = xmm1.f[0]; /* movss */
    edx = MEM32(eax + 0x3AC);
    MEM32(ecx + 0x3AC) = edx;
    eax = MEM32(eax + 0x3B0);
    edx = MEM32(ecx + 0xC);
    MEM32(ecx + 0x3B0) = eax;
    MEM32(ecx + 0xBC) = edx;
    eax = MEM32(ecx + 0x10);
    MEM32(ecx + 0xC0) = eax;
    edx = MEM32(ecx + 0xC);
    POP32(esp, edi);
    MEM32(ecx + 0x22C) = edx;
    eax = MEM32(ecx + 0x10);
    POP32(esp, esi);
    MEM32(ecx + 0x230) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00248000
 * Original: 0x00248000 - 0x00248049 (73 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00248000: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, 0x400);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00248018u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00248015u); } /* indirect call */
    }

loc_00248018: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248036; /* je: equal / zero */

loc_0024801C: ;
    ecx = eax;
    PUSH32(esp, 0x00248023u); RECOMP_ABI_CALL(0x00032426u, sub_00032426); /* call 0x00032426 */

loc_00248023: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00248030u); RECOMP_ABI_CALL(0x00032174u, sub_00032174); /* call 0x00032174 */

loc_00248030: ;
    eax = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00248036: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00248043u); RECOMP_ABI_CALL(0x00032174u, sub_00032174); /* call 0x00032174 */

loc_00248043: ;
    eax = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00248060
 * Original: 0x00248060 - 0x002482A7 (583 bytes, 144 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00248060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00248060: ;
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
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024807Fu); RECOMP_ABI_CALL(0x00012B99u, sub_00012B99); /* call 0x00012B99 */

loc_0024807F: ;
    edx = MEM32(eax);
    ebx = esi + 0x70;
    ecx = ebx;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x68); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x64); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x68); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x64); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x68); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x64); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x6C);
    MEM32(esi + 0x9C) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x390)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    ecx = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    edi = esi + 0x80;
    edx = edi;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 4) = ecx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002481B9u); RECOMP_ABI_CALL(0x000142FFu, sub_000142FF); /* call 0x000142FF */

loc_002481B9: ;
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    MEM8(esi + 7) = 0;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x394)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x2C) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x30) = xmm4.f[0]; /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x34) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x398)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00248237; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00248232: ;
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */

loc_00248237: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024824F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0024824A: ;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */

loc_0024824F: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00248267; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00248262: ;
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */

loc_00248267: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x38); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024827A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x38)) */

loc_00248275: ;
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */

loc_0024827A: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x3C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024828E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x3C)) */

loc_00248289: ;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */

loc_0024828E: ;
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 8); /* addss */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x40); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024829E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0x40)) */

loc_00248299: ;
    MEMF(esi + 0x40) = xmm1.f[0]; /* movss */

loc_0024829E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00248340
 * Original: 0x00248340 - 0x00248A12 (1746 bytes, 401 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00248340(void)
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

loc_00248340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    xmm5 = XMM_SCALAR(MEMF(ebx + 0x11C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x118)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x114)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x110)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi + 0x70;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(eax + 8);
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x40); /* subss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x48) = ecx;
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x48); /* subss */
    MEM32(esp + 0x44) = edx;
    edx = MEM32(eax + 0xC);
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x44); /* subss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = edi + 0x80;
    ecx = MEM32(eax);
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(eax + 4);
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0xA0)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ebx + 0x164); /* addss */
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x54) = edx;
    edx = MEM32(eax + 0xC);
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00248658; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_00248452: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248457u); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_00248457: ;
    esi = MEM32(eax + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248474; /* je: equal / zero */

loc_00248460: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(eax + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0024846F; /* je: equal / zero */

loc_0024846A: ;
    MEM32(ecx + 0x3C) = edx;
    goto loc_0024847D;

loc_0024846F: ;
    MEM32(eax + 0x14) = edx;
    goto loc_0024847D;

loc_00248474: ;
    esi = MEM32(eax + 8);
    ecx = esi + 0x70;
    MEM32(eax + 8) = ecx;

loc_0024847D: ;
    ecx = MEM32(eax + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7FE2B4)); /* movss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = ecx;
    MEM32(esi + 0x48) = edx;
    MEM32(esi + 0x4C) = edx;
    MEM32(esi + 0x50) = edx;
    MEM32(esi + 0x54) = edx;
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
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
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x110)); /* movss */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x164)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x164)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x114)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x164)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x118)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x90); /* addss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x94); /* addss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x98); /* addss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024861Bu); RECOMP_ABI_CALL(0x00014D6Du, sub_00014D6D); /* call 0x00014D6D */

loc_0024861B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = ebx;
    ecx = MEM32(edi + 0x10);
    MEM32(esi + 0x50) = ecx;
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    MEM32(esi + 0x54) = edx;
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024864Fu); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_0024864F: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00248658: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002486A6; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0024869D: ;
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0024877B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm6.f[0]) */

loc_002486A6: ;
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm6.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0024877B; /* ja: above (unsigned >) (xmm2.f[0] vs xmm6.f[0]) */

loc_002486C3: ;
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002486EF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm6.f[0]) */

loc_002486D6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    goto loc_00248706;

loc_002486EF: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */

loc_00248706: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00248772; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0024870B: ;
    _fca = xmm2.f[0]; _fcb = MEMF(edi + 0xA8); /* comiss */
    if ((_fca > _fcb)) goto loc_0024877B; /* ja: above (unsigned >) (xmm2.f[0] vs MEMF(edi + 0xA8)) */

loc_00248714: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x40); /* addss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x50);
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x44); /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x48); /* addss */
    MEMF(esp + 0x54) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm5.f[0]; /* movss */
    edx = MEM32(esp + 0x58);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;
    goto loc_002487E6;

loc_00248772: ;
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0xA8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00248784; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0xA8)) */

loc_0024877B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00248784: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x40); /* addss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x50);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x44); /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x48); /* addss */
    MEMF(esp + 0x54) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x58);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_002487E6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002487EBu); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_002487EB: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002487F2u); RECOMP_ABI_CALL(0x0003245Du, sub_0003245D); /* call 0x0003245D */

loc_002487F2: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xAC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    esi = eax;
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x110); /* subss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x114); /* subss */
    edx = MEM32(esp + 0x50);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x118); /* subss */
    eax = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    ecx = MEM32(esp + 0x58);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(esp + 0x2C) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x28) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x24) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x18); /* divss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0xA0); /* subss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_MEM(esp + 0x30); /* movaps */
    MEMF(esp + 0x50) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm4.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x50); /* movaps */
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    XMM_STORE(esp + 0x30, xmm3); /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esi + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x90)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x94)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    eax = esp + 0x20;
    MEMF(esi + 0x14) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x98)); /* movss */
    PUSH32(esp, eax);
    edx = esp + 0x34;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    ecx = esi + 0x58;
    PUSH32(esp, edx);
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002489B7u); RECOMP_ABI_CALL(0x00014D6Du, sub_00014D6D); /* call 0x00014D6D */

loc_002489B7: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x64); /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = ebx;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x50) = eax;
    ecx = MEM32(ebx + 0x10);
    MEM32(esi + 0x54) = ecx;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248A09u); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_00248A09: ;
    POP32(esp, edi);
    eax = esi;
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
 * sub_00248BD0
 * Original: 0x00248BD0 - 0x00248C70 (160 bytes, 62 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00248BD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248BE7; /* je: equal / zero */

loc_00248BDF: ;
    edx = MEM32(esi + 0x38);
    MEM32(eax + 0x38) = edx;
    goto loc_00248BEC;

loc_00248BE7: ;
    eax = MEM32(esi + 0x38);
    MEM32(ecx) = eax;

loc_00248BEC: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248BFB; /* je: equal / zero */

loc_00248BF3: ;
    edx = MEM32(esi + 0x3C);
    MEM32(eax + 0x3C) = edx;
    goto loc_00248C01;

loc_00248BFB: ;
    eax = MEM32(esi + 0x3C);
    MEM32(ecx + 4) = eax;

loc_00248C01: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00248C3C; /* jne: not equal / not zero */

loc_00248C0D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x00248C15u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00248C15: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248C35; /* je: equal / zero */

loc_00248C1C: ;
    MEM32(0x8FA274) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    goto loc_00248C37;

loc_00248C35: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00248C37: ;
    MEM32(0x8FA278) = eax;

loc_00248C3C: ;
    MEM32(esi + 0x3C) = edi;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x38) = ecx;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248C5E; /* je: equal / zero */

loc_00248C4C: ;
    MEM32(ecx + 0x3C) = esi;
    ecx = MEM32(eax + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00248C5E: ;
    ecx = MEM32(eax + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00248CA0
 * Original: 0x00248CA0 - 0x00248CE6 (70 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00248CA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248CE3; /* je: equal / zero */

loc_00248CAA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 4);
    PUSH32(esp, 0x00248CB7u); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_00248CB7: ;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x3C) = ecx;
    ecx = MEM32(eax + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248CCB; /* je: equal / zero */

loc_00248CC6: ;
    MEM32(ecx + 0x38) = edi;
    goto loc_00248CCE;

loc_00248CCB: ;
    MEM32(eax + 0x10) = edi;

loc_00248CCE: ;
    ecx = MEM32(eax + 0xC);
    MEM32(eax + 0x14) = ebp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0xC) = ecx;
    POP32(esp, ebp);
    MEM32(esi + 8) = edx;
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    POP32(esp, ebx);

loc_00248CE3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00248D00
 * Original: 0x00248D00 - 0x00248D55 (85 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00248D00: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248D51; /* je: equal / zero */

loc_00248D09: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    /* nop */

loc_00248D10: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 8); /* mulss */
    esi = MEM32(eax + 0x38);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00248D49; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00248D41: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00248D49u); RECOMP_ABI_CALL(0x0001ED40u, sub_0001ED40); /* call 0x0001ED40 */

loc_00248D49: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00248D10; /* jne: not equal / not zero */

loc_00248D4F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00248D51: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00248D70
 * Original: 0x00248D70 - 0x0024901D (685 bytes, 174 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00248D70(void)
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

loc_00248D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248D88u); RECOMP_ABI_CALL(0x0002B22Au, sub_0002B22A); /* call 0x0002B22A */

loc_00248D88: ;
    edi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x390);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = edi + 0x90;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x390);
    eax = edi + 0x80;
    PUSH32(esp, eax);
    ecx = edi + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = ebx + 0x90;
    PUSH32(esp, eax);
    ecx = ebx + 0x80;
    PUSH32(esp, ecx);
    edx = ebx + 0x70;
    PUSH32(esp, edx);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248E0Eu); RECOMP_ABI_CALL(0x00029A1Au, sub_00029A1A); /* call 0x00029A1A */

loc_00248E0E: ;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x398)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x394); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x9C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x398)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0x394); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x5C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 0x394); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x394); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00248E73; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00248E6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00248E73: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x30); /* subss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x34); /* subss */
    eax = MEM32(esp + 0x40);
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x38); /* subss */
    ecx = MEM32(esp + 0x44);
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    edx = MEM32(esp + 0x48);
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(esp + 0x5C) = eax;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x58) = edx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEM32(esp + 0x54) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248F34u); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_00248F34: ;
    esi = MEM32(eax + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248F51; /* je: equal / zero */

loc_00248F3D: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(eax + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00248F4C; /* je: equal / zero */

loc_00248F47: ;
    MEM32(ecx + 0x3C) = edx;
    goto loc_00248F5A;

loc_00248F4C: ;
    MEM32(eax + 0x14) = edx;
    goto loc_00248F5A;

loc_00248F51: ;
    esi = MEM32(eax + 8);
    ecx = esi + 0x70;
    MEM32(eax + 8) = ecx;

loc_00248F5A: ;
    ecx = MEM32(eax + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7FE2B4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEM32(esi + 0x50) = edx;
    MEM32(esi + 0x54) = edx;
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    MEM32(esi + 0x48) = edx;
    MEM32(esi + 0x4C) = edx;
    MEMF(esi + 0x14) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm5.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esi + 0xC) = xmm2.f[0]; /* movss */
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = edi;
    edx = MEM32(ebx + 0x10);
    MEM32(esi + 0x50) = edx;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    MEM32(esi + 0x54) = eax;
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00249014u); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_00249014: ;
    POP32(esp, edi);
    eax = esi;
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
 * sub_002490D0
 * Original: 0x002490D0 - 0x00249C4F (2943 bytes, 787 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002490D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002490D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x90;
    edi = ecx + 0x90;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x150;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00249107u); RECOMP_ABI_CALL(0x000126F8u, sub_000126F8); /* call 0x000126F8 */

loc_00249107: ;
    PUSH32(esp, edi);
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024910Fu); RECOMP_ABI_CALL(0x000126F8u, sub_000126F8); /* call 0x000126F8 */

loc_0024910F: ;
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esp + 0x28, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    eax = esi + 8;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = esp + 0x40;
    edx = 3;
    /* nop */

loc_002491F0: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + -8); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + -4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edi + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(ecx + -4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + -4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + -8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edi + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + -4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + -8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edi + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002491F0; /* jne: not equal / not zero */

loc_002492A3: ;
    ecx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    edx = MEM32(esp + 0x14);
    xmm5 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ebx = esp + 0x20;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    ecx = esp + 0x40;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_002492D0;

    /* nop */

loc_002492D0: ;
    ebx = edx + eax * 4;
    xmm1 = XMM_SCALAR(MEMF(esp + ebx + 0x20)); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002492EE; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_002492E9: ;
    xmm3 = xmm1; /* movaps */
    goto loc_002492F5;

loc_002492EE: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */

loc_002492F5: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249303; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_002492FE: ;
    xmm2 = xmm1; /* movaps */
    goto loc_0024930A;

loc_00249303: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_0024930A: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249319; /* jb: below (unsigned <) (xmm4.f[0] vs xmm0.f[0]) */

loc_00249314: ;
    xmm1 = xmm4; /* movaps */
    goto loc_00249320;

loc_00249319: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */

loc_00249320: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + eax * 4 + 0x20)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249346; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00249341: ;
    xmm3 = xmm2; /* movaps */
    goto loc_0024934D;

loc_00249346: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */

loc_0024934D: ;
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00249B2C; /* ja: above (unsigned >) (xmm3.f[0] vs xmm1.f[0]) */

loc_0024935C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002492D0; /* jl: less (signed <) */

loc_00249369: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ebx = esp + 0x54;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00249395;

loc_0024938F: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */

loc_00249395: ;
    xmm1 = XMM_SCALAR(MEMF(esp + eax * 4 + 0x3C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002493A5; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_002493A0: ;
    xmm3 = xmm1; /* movaps */
    goto loc_002493AC;

loc_002493A5: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */

loc_002493AC: ;
    xmm1 = XMM_SCALAR(MEMF(esp + eax * 4 + 0x48)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002493BC; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_002493B7: ;
    xmm2 = xmm1; /* movaps */
    goto loc_002493C3;

loc_002493BC: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_002493C3: ;
    xmm4 = XMM_SCALAR(MEMF(esp + eax * 4 + 0x54)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002493D3; /* jb: below (unsigned <) (xmm4.f[0] vs xmm0.f[0]) */

loc_002493CE: ;
    xmm1 = xmm4; /* movaps */
    goto loc_002493DA;

loc_002493D3: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */

loc_002493DA: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + eax * 4 + 0x54)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + eax * 4 + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + eax * 4 + 0x3C); /* mulss */
    ebx = edx + eax * 4;
    xmm2 = XMM_SCALAR(MEMF(esp + ebx + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249430; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024942B: ;
    xmm3 = xmm1; /* movaps */
    goto loc_00249437;

loc_00249430: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */

loc_00249437: ;
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00249B2C; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_00249444: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024938F; /* jl: less (signed <) */

loc_0024944E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249463; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024945E: ;
    xmm2 = xmm1; /* movaps */
    goto loc_0024946A;

loc_00249463: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_0024946A: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024947F; /* jb: below (unsigned <) (xmm5.f[0] vs xmm0.f[0]) */

loc_0024947A: ;
    xmm1 = xmm5; /* movaps */
    goto loc_00249486;

loc_0024947F: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */

loc_00249486: ;
    eax = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002494AE; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_002494A9: ;
    xmm2 = xmm1; /* movaps */
    goto loc_002494B5;

loc_002494AE: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_002494B5: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002494CA; /* jb: below (unsigned <) (xmm6.f[0] vs xmm0.f[0]) */

loc_002494C5: ;
    xmm1 = xmm6; /* movaps */
    goto loc_002494D1;

loc_002494CA: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */

loc_002494D1: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024950A; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00249505: ;
    xmm3 = xmm1; /* movaps */
    goto loc_00249511;

loc_0024950A: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */

loc_00249511: ;
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00249B2C; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_0024951E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249533; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024952E: ;
    xmm2 = xmm1; /* movaps */
    goto loc_0024953A;

loc_00249533: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_0024953A: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024954F; /* jb: below (unsigned <) (xmm5.f[0] vs xmm0.f[0]) */

loc_0024954A: ;
    xmm1 = xmm5; /* movaps */
    goto loc_00249556;

loc_0024954F: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */

loc_00249556: ;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249579; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00249574: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00249580;

loc_00249579: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_00249580: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249595; /* jb: below (unsigned <) (xmm6.f[0] vs xmm0.f[0]) */

loc_00249590: ;
    xmm1 = xmm6; /* movaps */
    goto loc_0024959C;

loc_00249595: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */

loc_0024959C: ;
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002495CF; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_002495CA: ;
    xmm3 = xmm1; /* movaps */
    goto loc_002495D6;

loc_002495CF: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */

loc_002495D6: ;
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00249B2C; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_002495E3: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002495F8; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_002495F3: ;
    xmm2 = xmm1; /* movaps */
    goto loc_002495FF;

loc_002495F8: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_002495FF: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249614; /* jb: below (unsigned <) (xmm5.f[0] vs xmm0.f[0]) */

loc_0024960F: ;
    xmm1 = xmm5; /* movaps */
    goto loc_0024961B;

loc_00249614: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */

loc_0024961B: ;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024963E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00249639: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00249647;

loc_0024963E: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x40); /* subss */

loc_00249647: ;
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249656; /* jb: below (unsigned <) (xmm6.f[0] vs xmm0.f[0]) */

loc_00249651: ;
    xmm1 = xmm6; /* movaps */
    goto loc_0024965D;

loc_00249656: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */

loc_0024965D: ;
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249690; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024968B: ;
    xmm3 = xmm1; /* movaps */
    goto loc_00249697;

loc_00249690: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */

loc_00249697: ;
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00249B2C; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_002496A4: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002496B8; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_002496B3: ;
    xmm2 = xmm1; /* movaps */
    goto loc_002496BF;

loc_002496B8: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_002496BF: ;
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002496CE; /* jb: below (unsigned <) (xmm6.f[0] vs xmm0.f[0]) */

loc_002496C9: ;
    xmm1 = xmm6; /* movaps */
    goto loc_002496D5;

loc_002496CE: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */

loc_002496D5: ;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002496F9; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_002496F4: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00249702;

loc_002496F9: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x50); /* subss */

loc_00249702: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249714; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00249712: ;
    goto loc_00249723;

loc_00249714: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x4C); /* subss */

loc_00249723: ;
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249753; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024974E: ;
    xmm3 = xmm1; /* movaps */
    goto loc_0024975A;

loc_00249753: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */

loc_0024975A: ;
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00249B2C; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_00249767: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024977B; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00249776: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00249782;

loc_0024977B: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_00249782: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249797; /* jb: below (unsigned <) (xmm5.f[0] vs xmm0.f[0]) */

loc_00249792: ;
    xmm1 = xmm5; /* movaps */
    goto loc_0024979E;

loc_00249797: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */

loc_0024979E: ;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002497C1; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_002497BC: ;
    xmm2 = xmm1; /* movaps */
    goto loc_002497CA;

loc_002497C1: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x50); /* subss */

loc_002497CA: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002497DC; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_002497DA: ;
    goto loc_002497EB;

loc_002497DC: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x48); /* subss */

loc_002497EB: ;
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024981E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00249819: ;
    xmm3 = xmm1; /* movaps */
    goto loc_00249825;

loc_0024981E: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */

loc_00249825: ;
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00249B2C; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_00249832: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249846; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00249841: ;
    xmm2 = xmm1; /* movaps */
    goto loc_0024984D;

loc_00249846: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_0024984D: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249862; /* jb: below (unsigned <) (xmm5.f[0] vs xmm0.f[0]) */

loc_0024985D: ;
    xmm1 = xmm5; /* movaps */
    goto loc_00249869;

loc_00249862: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */

loc_00249869: ;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024988C; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00249887: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00249895;

loc_0024988C: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x4C); /* subss */

loc_00249895: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002498A7; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_002498A5: ;
    goto loc_002498B6;

loc_002498A7: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x48); /* subss */

loc_002498B6: ;
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002498E9; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_002498E4: ;
    xmm3 = xmm1; /* movaps */
    goto loc_002498F0;

loc_002498E9: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */

loc_002498F0: ;
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00249B2C; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_002498FD: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249911; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024990C: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00249918;

loc_00249911: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_00249918: ;
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249927; /* jb: below (unsigned <) (xmm6.f[0] vs xmm0.f[0]) */

loc_00249922: ;
    xmm1 = xmm6; /* movaps */
    goto loc_0024992E;

loc_00249927: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */

loc_0024992E: ;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249952; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024994D: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00249959;

loc_00249952: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_00249959: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249971; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024996F: ;
    goto loc_0024997A;

loc_00249971: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x58); /* subss */

loc_0024997A: ;
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm6; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002499A9; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_002499A4: ;
    xmm3 = xmm2; /* movaps */
    goto loc_002499B0;

loc_002499A9: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */

loc_002499B0: ;
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00249B2C; /* ja: above (unsigned >) (xmm3.f[0] vs xmm1.f[0]) */

loc_002499BD: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002499D1; /* jb: below (unsigned <) (xmm6.f[0] vs xmm0.f[0]) */

loc_002499CC: ;
    xmm2 = xmm6; /* movaps */
    goto loc_002499D8;

loc_002499D1: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */

loc_002499D8: ;
    _fca = xmm7.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002499E7; /* jb: below (unsigned <) (xmm7.f[0] vs xmm0.f[0]) */

loc_002499E2: ;
    xmm1 = xmm7; /* movaps */
    goto loc_002499EE;

loc_002499E7: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */

loc_002499EE: ;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249A11; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00249A0C: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00249A18;

loc_00249A11: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_00249A18: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    if ((_fca >= _fcb)) goto loc_00249A37; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00249A28: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x54); /* subss */

loc_00249A37: ;
    xmm7.f[0] = xmm7.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    xmm2 = xmm7; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249A60; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00249A5B: ;
    xmm3 = xmm2; /* movaps */
    goto loc_00249A67;

loc_00249A60: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */

loc_00249A67: ;
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00249B2C; /* ja: above (unsigned >) (xmm3.f[0] vs xmm1.f[0]) */

loc_00249A74: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249A88; /* jb: below (unsigned <) (xmm6.f[0] vs xmm0.f[0]) */

loc_00249A83: ;
    xmm2 = xmm6; /* movaps */
    goto loc_00249A8F;

loc_00249A88: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */

loc_00249A8F: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249AA4; /* jb: below (unsigned <) (xmm7.f[0] vs xmm0.f[0]) */

loc_00249A9F: ;
    xmm1 = xmm7; /* movaps */
    goto loc_00249AAB;

loc_00249AA4: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */

loc_00249AAB: ;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249ACE; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00249AC9: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00249AD5;

loc_00249ACE: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_00249AD5: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249AE7; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00249AE5: ;
    goto loc_00249AF6;

loc_00249AE7: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x54); /* subss */

loc_00249AF6: ;
    xmm7.f[0] = xmm7.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    xmm2 = xmm7; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249B1F; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00249B1A: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00249B23;

loc_00249B1F: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_00249B23: ;
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249B35; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00249B2C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00249B35: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00249B3Au); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_00249B3A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00249B41u); RECOMP_ABI_CALL(0x0003245Du, sub_0003245D); /* call 0x0003245D */

loc_00249B41: ;
    PUSH32(esp, esi);
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00249B49u); RECOMP_ABI_CALL(0x000381D2u, sub_000381D2); /* call 0x000381D2 */

loc_00249B49: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = MEM32(esp + 0x28);
    esi = ebx + 0x10;
    eax = esi;
    MEM32(eax) = ecx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 4) = edx;
    PUSH32(esp, edi);
    MEM32(eax + 8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00249B88u); RECOMP_ABI_CALL(0x000381D2u, sub_000381D2); /* call 0x000381D2 */

loc_00249B88: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = ebx + 0x1C;
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 4) = ecx;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x30);
    MEM32(edx + 8) = ecx;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 4); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 8); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    edx = ebx + 4;
    MEM32(edx) = eax;
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(ebp + 0xC);
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x30);
    MEM32(edx + 8) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebx + 0x44) = ecx;
    MEM32(ebx + 0x40) = eax;
    edx = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x50) = edx;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    MEM32(ebx + 0x54) = eax;
    MEMF(ebx + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00249C46u); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_00249C46: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00249F30
 * Original: 0x00249F30 - 0x0024A0B5 (389 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00249F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00249F30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00249F46u); RECOMP_ABI_CALL(0x0002B22Au, sub_0002B22A); /* call 0x0002B22A */

loc_00249F46: ;
    esi = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x150)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    eax = esi + 0xC0;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x158)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x154); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AA820); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x28) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    ecx = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x84) = ecx;
    ecx = MEM32(esi + 0x90);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x150)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    MEM32(esp + 0x80) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x90) = ecx;
    ecx = MEM32(esi + 0x9C);
    MEMF(esp + 0xD0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 0x88) = edx;
    edx = MEM32(esi + 0x94);
    MEM32(esp + 0x8C) = eax;
    eax = MEM32(esi + 0x98);
    PUSH32(esp, 1);
    MEM32(esp + 0xA0) = ecx;
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    PUSH32(esp, 0x8FA320);
    ecx = esp + 0x38;
    MEM32(esp + 0x9C) = edx;
    MEM32(esp + 0xA0) = eax;
    MEMF(esp + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE4) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A091u); RECOMP_ABI_CALL(0x00025B9Au, sub_00025B9A); /* call 0x00025B9A */

loc_0024A091: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    MEM32(esp + 0x48) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A0A9u); RECOMP_ABI_CALL(0x00031909u, sub_00031909); /* call 0x00031909 */

loc_0024A0A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A0B0; /* je: equal / zero */

loc_0024A0AD: ;
    MEM32(eax + 0x40) = esi;

loc_0024A0B0: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A120
 * Original: 0x0024A120 - 0x0024A138 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024A120: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024A134u); RECOMP_ABI_CALL(0x0002A14Fu, sub_0002A14F); /* call 0x0002A14F */

loc_0024A134: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024A140
 * Original: 0x0024A140 - 0x0024A3E9 (681 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024A140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0024A140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x114)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x118)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x110)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    xmm4.f[0] = xmm4.f[0] - MEMF(edi + 0x94); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 0x98); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0x90); /* subss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xB0)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(edi + 0xA0)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(edi + 0x90)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0xB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x150); /* comiss */
    xmm6 = XMM_SCALAR(MEMF(edi + 0xA4)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0xB8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0xA8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x98)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A226; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x150)) */

loc_0024A215: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x150); /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    goto loc_0024A246;

loc_0024A226: ;
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 0x150); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A246; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0024A236: ;
    xmm3 = XMM_SCALAR(MEMF(edi + 0x150)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm3.f[0]; /* mulss */

loc_0024A246: ;
    _fca = xmm1.f[0]; _fcb = MEMF(edi + 0x154); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A259; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(edi + 0x154)) */

loc_0024A24F: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0x154); /* subss */
    goto loc_0024A271;

loc_0024A259: ;
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x154); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A27F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024A269: ;
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 0x154); /* addss */

loc_0024A271: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */

loc_0024A27F: ;
    _fca = xmm4.f[0]; _fcb = MEMF(edi + 0x158); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A2A0; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(edi + 0x158)) */

loc_0024A288: ;
    xmm4.f[0] = xmm4.f[0] - MEMF(edi + 0x158); /* subss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    goto loc_0024A2C7;

loc_0024A2A0: ;
    xmm5.f[0] = xmm5.f[0] - MEMF(edi + 0x158); /* subss */
    _fca = xmm5.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A2C7; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm4.f[0]) */

loc_0024A2AD: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x158)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */

loc_0024A2C7: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x168)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A3E0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0024A2D8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A2DDu); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_0024A2DD: ;
    esi = MEM32(eax + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A2FA; /* je: equal / zero */

loc_0024A2E6: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(eax + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0024A2F5; /* je: equal / zero */

loc_0024A2F0: ;
    MEM32(ecx + 0x3C) = edx;
    goto loc_0024A303;

loc_0024A2F5: ;
    MEM32(eax + 0x14) = edx;
    goto loc_0024A303;

loc_0024A2FA: ;
    esi = MEM32(eax + 8);
    ecx = esi + 0x70;
    MEM32(eax + 8) = ecx;

loc_0024A303: ;
    ecx = MEM32(eax + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7FE2B4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = ecx;
    MEM32(esi + 0x50) = edx;
    MEM32(esi + 0x54) = edx;
    MEM32(esi + 0x48) = edx;
    MEM32(esi + 0x4C) = edx;
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x110);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(ebx + 0x114);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(ebx + 0x118);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(ebx + 0x110);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(ebx + 0x114);
    MEM32(esi + 0x20) = eax;
    ecx = MEM32(ebx + 0x118);
    MEM32(esi + 0x24) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x10); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x14); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x18); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    edx = esi + 4;
    MEM32(edx) = eax;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(edx + 4) = ecx;
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(edx + 8) = eax;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = ebx;
    ecx = MEM32(edi + 0x10);
    MEM32(esi + 0x50) = ecx;
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    MEM32(esi + 0x54) = edx;
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A3D7u); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_0024A3D7: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024A3E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A4A0
 * Original: 0x0024A4A0 - 0x0024A4B8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A4A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024A4A0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024A4B4u); RECOMP_ABI_CALL(0x0003712Eu, sub_0003712E); /* call 0x0003712E */

loc_0024A4B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024A4C0
 * Original: 0x0024A4C0 - 0x0024A4DC (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A4C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024A4C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0024A4D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024A4CFu); } /* indirect call */
    }

loc_0024A4D2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A4F0
 * Original: 0x0024A4F0 - 0x0024A538 (72 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024A4F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0024A503u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024A500u); } /* indirect call */
    }

loc_0024A503: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A50Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0024A50C: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024A515u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0024A515: ;
    edx = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x0024A526u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0024A526: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002E213(); return; /* tail jmp 0x0002E213 */

}

/**
 * sub_0024A550
 * Original: 0x0024A550 - 0x0024A571 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024A550: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0024A558u); RECOMP_ABI_CALL(0x000135FDu, sub_000135FD); /* call 0x000135FD */

loc_0024A558: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024A56B; /* je: equal / zero */

loc_0024A55F: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0024A56Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024A568u); } /* indirect call */
    }

loc_0024A56B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024A580
 * Original: 0x0024A580 - 0x0024A598 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024A580: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024A594u); RECOMP_ABI_CALL(0x0002A938u, sub_0002A938); /* call 0x0002A938 */

loc_0024A594: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024A5A0
 * Original: 0x0024A5A0 - 0x0024A980 (992 bytes, 229 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024A5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0024A5A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A5B8u); RECOMP_ABI_CALL(0x0002B22Au, sub_0002B22A); /* call 0x0002B22A */

loc_0024A5B8: ;
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebx + 0xF0);
    ecx = MEM32(ebx + 0xE8);
    esi = MEM32(ebx + 0xE0);
    MEM32(esp + 0x24) = eax;
    SET_LO8(eax, MEM8(ebx + 0xDC));
    MEM32(esp + 0x2C) = ecx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(ebp + 8);
    edx = eax + 0x70;
    ecx = MEM32(edx);
    MEM32(esp + 0x80) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x84) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x88) = ecx;
    MEM32(esp + 0x8C) = edx;
    ecx = eax + 0x80;
    edx = MEM32(ecx);
    MEM32(esp + 0x90) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x94) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    edi = ebx + 0x50;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x98) = edx;
    MEM32(esp + 0x9C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0024A690; /* je: equal / zero */

loc_0024A644: ;
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xA8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0xA0)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebx + 0xD0); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0xD0) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm2.f[0]; /* movss */
    goto loc_0024A6C7;

loc_0024A690: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0xA0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA8)); /* movss */
    MEMF(esp + 0xD0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm1.f[0]; /* movss */

loc_0024A6C7: ;
    PUSH32(esp, 1);
    edx = ebx + 0x90;
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A6D9u); RECOMP_ABI_CALL(0x00025B9Au, sub_00025B9A); /* call 0x00025B9A */

loc_0024A6D9: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esi + 0x10);
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0024A977; /* jle: less or equal (signed <=) */

loc_0024A6EB: ;
    MEM32(esp + 0x20) = ecx;
    /* nop */

loc_0024A6F0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A94D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0024A6FF: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x5C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A94D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x5C)) */

loc_0024A70F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A94D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_0024A71F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x60); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A94D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x60)) */

loc_0024A72F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A94D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_0024A73F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x64); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A94D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x64)) */

loc_0024A74F: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A76Du); RECOMP_ABI_CALL(0x00025BD6u, sub_00025BD6); /* call 0x00025BD6 */

loc_0024A76D: ;
    esi = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A949; /* je: equal / zero */

loc_0024A77A: ;
    eax = esi + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0xE4;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A78Cu); RECOMP_ABI_CALL(0x0001369Du, sub_0001369D); /* call 0x0001369D */

loc_0024A78C: ;
    edx = eax;
    ecx = MEM32(edx);
    MEM32(esp + 0x34) = eax;
    eax = esi + 0x58;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(eax + 0xC);
    MEM32(esi + 0x64) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xE0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A7BEu); RECOMP_ABI_CALL(0x00032F7Fu, sub_00032F7F); /* call 0x00032F7F */

loc_0024A7BE: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(ebx + 0xDC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A945; /* je: equal / zero */

loc_0024A8C7: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xD0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x64); /* mulss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xD0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 4); /* mulss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0xD4); /* mulss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xD8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xC); /* mulss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0xD0); /* mulss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xD4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x14); /* mulss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xD8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x18); /* mulss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */

loc_0024A945: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0024A949: ;
    eax = MEM32(esp + 0x1C);

loc_0024A94D: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    if ((_fa != 0)) goto loc_0024A6F0; /* jne: not equal / not zero */

loc_0024A963: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024A977; /* jle: less or equal (signed <=) */

loc_0024A96B: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(edx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024A977: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0024AA80
 * Original: 0x0024AA80 - 0x0024B5EA (2922 bytes, 662 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024AA80(void)
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

loc_0024AA80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x64));
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    xmm6 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    xmm3 = XMM_SCALAR(MEMF(edi + 0x9C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x8C); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x98)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x88); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x3B8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x74); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x94)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x84); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x90)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x80); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x3BC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x78); /* mulss */
    ebx = esi + 0x70;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x3B4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x3C0); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024AB82; /* jb: below (unsigned <) (xmm0.f[0] vs xmm6.f[0]) */

loc_0024AB30: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    SET_LO8(eax, 1);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024AB87; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_0024AB3A: ;
    _fa = (uint32_t)(MEM32(edi + 0x3AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3AC), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024B5E1; /* jne: not equal / not zero */

loc_0024AB47: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x394)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0024B5E1; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024AB5C: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    ecx = edi + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AB6Du); RECOMP_ABI_CALL(0x0002EB8Cu, sub_0002EB8C); /* call 0x0002EB8C */

loc_0024AB6D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024B5E1; /* je: equal / zero */

loc_0024AB78: ;
    MEM32(eax + 0x44) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024AB82: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0024AB87: ;
    xmm4 = XMM_SCALAR(MEMF(edi + 0x390)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm6.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 0x390); /* subss */
    xmm5.f[0] = xmm5.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024AC06; /* jb: below (unsigned <) (xmm5.f[0] vs xmm0.f[0]) */

loc_0024ABB4: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM8(esp + 0x17) = 1;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024AC0B; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_0024ABBE: ;
    _fa = (uint32_t)(MEM32(edi + 0x3B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3B0), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024B5E1; /* jne: not equal / not zero */

loc_0024ABCB: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x398)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0024B5E1; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0024ABE0: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    eax = edi + 0x220;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024ABF1u); RECOMP_ABI_CALL(0x0002EB8Cu, sub_0002EB8C); /* call 0x0002EB8C */

loc_0024ABF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024B5E1; /* je: equal / zero */

loc_0024ABFC: ;
    MEM32(eax + 0x44) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024AC06: ;
    MEM8(esp + 0x17) = 0;

loc_0024AC0B: ;
    _fa = (uint32_t)(MEM32(edi + 0x3AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3AC), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024AD08; /* jne: not equal / not zero */

loc_0024AC18: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    edx = edi + 0xB0;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AC29u); RECOMP_ABI_CALL(0x0002EB8Cu, sub_0002EB8C); /* call 0x0002EB8C */

loc_0024AC29: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AC79; /* je: equal / zero */

loc_0024AC30: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x3BC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 0x3B8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x3B4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x3C0); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca > _fcb)) goto loc_0024ABFC; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0024AC70: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AC79u); RECOMP_ABI_CALL(0x0001ED40u, sub_0001ED40); /* call 0x0001ED40 */

loc_0024AC79: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_0024AC8E: ;
    _fa = (uint32_t)(MEM32(edi + 0x3B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3B0), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024B0EA; /* jne: not equal / not zero */

loc_0024AC9B: ;
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ecx = edi + 0x220;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024ACACu); RECOMP_ABI_CALL(0x0002EB8Cu, sub_0002EB8C); /* call 0x0002EB8C */

loc_0024ACAC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024B570; /* je: equal / zero */

loc_0024ACB7: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x3CC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x3C8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 0x3C4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x3D0); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca > _fcb)) goto loc_0024ABFC; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0024ACFB: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AD03u); RECOMP_ABI_CALL(0x0001ED40u, sub_0001ED40); /* call 0x0001ED40 */

loc_0024AD03: ;
    goto loc_0024B570;

loc_0024AD08: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AC8E; /* je: equal / zero */

loc_0024AD0C: ;
    xmm4 = XMM_SCALAR(MEMF(esi + 0xA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024AC8E; /* jb: below (unsigned <) (xmm4.f[0] vs xmm0.f[0]) */

loc_0024AD2B: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    eax = esp + 0x30;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x70); /* subss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0x74); /* subss */
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 0x78); /* subss */
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024ADB1u); RECOMP_ABI_CALL(0x000240D3u, sub_000240D3); /* call 0x000240D3 */

loc_0024ADB1: ;
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_push(MEMF(edi + 0x39C)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0024AEBD; /* jb: below (unsigned <) */

loc_0024ADC8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024ADCDu); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_0024ADCD: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024ADD4u); RECOMP_ABI_CALL(0x0003245Du, sub_0003245D); /* call 0x0003245D */

loc_0024ADD4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    ebx = eax;
    MEM32(ebx + 0x44) = edi;
    MEM32(ebx + 0x40) = esi;
    ecx = MEM32(esi + 0x10);
    MEM32(ebx + 0x50) = ecx;
    edx = MEM32(edi + 0x10);
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEM32(ebx + 0x54) = edx;
    MEMF(ebx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x3B4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    eax = edi + 0x3B4;
    MEMF(ebx + 0x10) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x3B8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ebx + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x3BC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    edi = ebx + 0x58;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(ebx + 0x18) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AE7Du); RECOMP_ABI_CALL(0x00025555u, sub_00025555); /* call 0x00025555 */

loc_0024AE7D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x70); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0xC); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ebx + 0x68) = xmm1.f[0]; /* movss */
    goto loc_0024B322;

loc_0024AEBD: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x394)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x2C); /* divss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0x70)); /* movss */
    edx = MEM32(esi + 0xA0);
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x74)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x78)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x7C)); /* movss */
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x80); /* subss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x84); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x88); /* subss */
    PUSH32(esp, ebx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x8C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AF99u); RECOMP_ABI_CALL(0x00022404u, sub_00022404); /* call 0x00022404 */

loc_0024AF99: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AC79; /* je: equal / zero */

loc_0024AFA4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AFA9u); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_0024AFA9: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AFB0u); RECOMP_ABI_CALL(0x0003245Du, sub_0003245D); /* call 0x0003245D */

loc_0024AFB0: ;
    ebx = eax;
    MEM32(ebx + 0x44) = edi;
    MEM32(ebx + 0x40) = esi;
    edx = MEM32(esi + 0x10);
    MEM32(ebx + 0x50) = edx;
    eax = MEM32(edi + 0x10);
    MEM32(ebx + 0x54) = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x60); /* subss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x64); /* subss */
    ecx = MEM32(esp + 0x50);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x68); /* subss */
    edx = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x7C)); /* movss */
    eax = MEM32(esp + 0x58);
    edi = esi + 0x70;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x40); /* addss */
    ecx = MEM32(esp + 0x5C);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x44); /* addss */
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x48); /* addss */
    MEMF(ebx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    MEMF(ebx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(ebx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    edx = esp + 0x30;
    MEMF(ebx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xAC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    MEMF(ebx + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B0B1u); RECOMP_ABI_CALL(0x000183F0u, sub_000183F0); /* call 0x000183F0 */

loc_0024B0B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    ecx = ebx + 0x58;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B0C6u); RECOMP_ABI_CALL(0x00014D6Du, sub_00014D6D); /* call 0x00014D6D */

loc_0024B0C6: ;
    PUSH32(esp, edi);
    ecx = ebx + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B0CFu); RECOMP_ABI_CALL(0x0002B563u, sub_0002B563); /* call 0x0002B563 */

loc_0024B0CF: ;
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0xA0) - fp_top()); /* fsubr dword ptr [esi + 0xa0] */
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    MEMF(ebx + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B0E1u); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_0024B0E1: ;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024B0EA: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024B56D; /* je: equal / zero */

loc_0024B0F6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm3.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024B56D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024B119: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0x94)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edi + 0x98)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x90)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(edi + 0x98)); /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0x390)); /* movss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(edi + 0x94)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm3 = xmm4; /* movaps */
    xmm4 = XMM_SCALAR(MEMF(edi + 0x74)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(edi + 0x90); /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(edi + 0x70); /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(edi + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(edi + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x54);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x50);
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x58);
    MEMF(esp + 0x5C) = xmm7.f[0]; /* movss */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x5C);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEMF(esp + 0x64) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm6.f[0]; /* movss */
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B247u); RECOMP_ABI_CALL(0x000240D3u, sub_000240D3); /* call 0x000240D3 */

loc_0024B247: ;
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    fp_push(MEMF(edi + 0x3A0)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0024B347; /* jb: below (unsigned <) */

loc_0024B25E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B263u); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_0024B263: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B26Au); RECOMP_ABI_CALL(0x0003245Du, sub_0003245D); /* call 0x0003245D */

loc_0024B26A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    ebx = eax;
    MEM32(ebx + 0x44) = edi;
    MEM32(ebx + 0x40) = esi;
    ecx = MEM32(esi + 0x10);
    MEM32(ebx + 0x50) = ecx;
    edx = MEM32(edi + 0x10);
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(ebx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(ebx + 0x54) = edx;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 0x90); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebx + 0x10) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x94)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebx + 0x14) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x98)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    _fb = (uint32_t)(0x3C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x3C4)) >> 32) & 1);
    edi = edi + 0x3C4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    ecx = ebx + 0x58;
    PUSH32(esp, edi);
    MEMF(ebx + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B30Au); RECOMP_ABI_CALL(0x00025555u, sub_00025555); /* call 0x00025555 */

loc_0024B30A: ;
    eax = esi + 0x90;
    PUSH32(esp, eax);
    ecx = ebx + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B319u); RECOMP_ABI_CALL(0x0002B563u, sub_0002B563); /* call 0x0002B563 */

loc_0024B319: ;
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0xA0) - fp_top()); /* fsubr dword ptr [esi + 0xa0] */
    MEMF(ebx + 0x68) = (float)fp_top(); fp_pop(); /* fstp */

loc_0024B322: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xAC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    MEMF(ebx + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B33Eu); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_0024B33E: ;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024B347: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x398)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x2C); /* divss */
    edx = MEM32(esi + 0xA0);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x60); /* addss */
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x68); /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x64); /* addss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x80); /* subss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x84); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 0x88); /* subss */
    PUSH32(esp, ebx);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x8C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B421u); RECOMP_ABI_CALL(0x00022404u, sub_00022404); /* call 0x00022404 */

loc_0024B421: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024B56D; /* je: equal / zero */

loc_0024B42C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B431u); RECOMP_ABI_CALL(0x000191E7u, sub_000191E7); /* call 0x000191E7 */

loc_0024B431: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B438u); RECOMP_ABI_CALL(0x0003245Du, sub_0003245D); /* call 0x0003245D */

loc_0024B438: ;
    ebx = eax;
    MEM32(ebx + 0x44) = edi;
    MEM32(ebx + 0x40) = esi;
    edx = MEM32(esi + 0x10);
    MEM32(ebx + 0x50) = edx;
    eax = MEM32(edi + 0x10);
    MEM32(ebx + 0x54) = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x50); /* subss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x54); /* subss */
    ecx = MEM32(esp + 0x60);
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x58); /* subss */
    edx = MEM32(esp + 0x64);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x7C)); /* movss */
    eax = MEM32(esp + 0x68);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x40); /* addss */
    ecx = MEM32(esp + 0x6C);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x44); /* addss */
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x48); /* addss */
    MEMF(ebx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    MEMF(ebx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    edi = ebx + 0x10;
    MEMF(ebx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    edx = esp + 0x30;
    MEMF(ebx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xAC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    MEMF(ebx + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B539u); RECOMP_ABI_CALL(0x000183F0u, sub_000183F0); /* call 0x000183F0 */

loc_0024B539: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    esi = ebx + 0x58;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B550u); RECOMP_ABI_CALL(0x00014D6Du, sub_00014D6D); /* call 0x00014D6D */

loc_0024B550: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B558u); RECOMP_ABI_CALL(0x0001466Fu, sub_0001466F); /* call 0x0001466F */

loc_0024B558: ;
    MEMF(ebx + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B564u); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_0024B564: ;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024B56D: ;
    ebx = MEM32(ebp + 0x10);

loc_0024B570: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B578u); RECOMP_ABI_CALL(0x0002640Fu, sub_0002640F); /* call 0x0002640F */

loc_0024B578: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024B5E1; /* je: equal / zero */

loc_0024B57F: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x3BC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x3B8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x3B4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x3C0); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024B5D9; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024B5C1: ;
    xmm2 = XMM_SCALAR(MEMF(edi + 0x390)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0024B5E3; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024B5D9: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B5E1u); RECOMP_ABI_CALL(0x0001ED40u, sub_0001ED40); /* call 0x0001ED40 */

loc_0024B5E1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024B5E3: ;
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
 * sub_0024B8D0
 * Original: 0x0024B8D0 - 0x0024B922 (82 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024B8D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x7FE32C;
    if (CMP_EQ(_fa, _fb)) goto loc_0024B8EE; /* je: equal / zero */

loc_0024B8E0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0024B8E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024B8E4u); } /* indirect call */
    }

loc_0024B8E7: ;
    MEM32(esi + 0x50) = 0;

loc_0024B8EE: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024B903; /* je: equal / zero */

loc_0024B8F5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0024B8FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024B8F9u); } /* indirect call */
    }

loc_0024B8FC: ;
    MEM32(esi + 0x54) = 0;

loc_0024B903: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x7F0728;
    if (TEST_Z(_fa, _fb)) goto loc_0024B91C; /* je: equal / zero */

loc_0024B910: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0024B91Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024B919u); } /* indirect call */
    }

loc_0024B91C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024B940
 * Original: 0x0024B940 - 0x0024B992 (82 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024B940: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x7FE348;
    if (CMP_EQ(_fa, _fb)) goto loc_0024B96C; /* je: equal / zero */

loc_0024B950: ;
    edx = MEM32(ecx + -16);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -16;
    if (CMP_EQ(_fa, _fb)) goto loc_0024B963; /* je: equal / zero */

loc_0024B95A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0024B961u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024B95Eu); } /* indirect call */
    }

loc_0024B961: ;
    goto loc_0024B96C;

loc_0024B963: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B969u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0024B969: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024B96C: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x54) = 0;
    MEM32(esi + 0x58) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0024B98A; /* je: equal / zero */

loc_0024B981: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x50) = 0;

loc_0024B98A: ;
    MEM32(esi) = 0x7F0728;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B9B0
 * Original: 0x0024B9B0 - 0x0024B9D9 (41 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B9B0(void)
{

loc_0024B9B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    SET_LO8(edx, MEM8(eax + 5));
    MEM8(ecx + 5) = LO8(edx);
    edx = MEM32(esp + 8);
    eax = MEM32(eax + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024B9D6u); RECOMP_ABI_CALL(0x0001FC86u, sub_0001FC86); /* call 0x0001FC86 */

loc_0024B9D6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024B9F0
 * Original: 0x0024B9F0 - 0x0024BA42 (82 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024B9F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, 0x60);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0024BA06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024BA03u); } /* indirect call */
    }

loc_0024BA06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024BA15; /* je: equal / zero */

loc_0024BA0A: ;
    ecx = eax;
    PUSH32(esp, 0x0024BA11u); RECOMP_ABI_CALL(0x0002B932u, sub_0002B932); /* call 0x0002B932 */

loc_0024BA11: ;
    esi = eax;
    goto loc_0024BA17;

loc_0024BA15: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024BA17: ;
    ecx = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = edx;
    SET_LO8(eax, MEM8(edi + 5));
    PUSH32(esp, ecx);
    MEM8(esi + 5) = LO8(eax);
    edx = MEM32(edi + 0x50);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0024BA3Bu); RECOMP_ABI_CALL(0x0001FC86u, sub_0001FC86); /* call 0x0001FC86 */

loc_0024BA3B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024BA60
 * Original: 0x0024BA60 - 0x0024BA8D (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024BA60: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FE364;
    PUSH32(esp, 0x0024BA6Eu); RECOMP_ABI_CALL(0x000129AAu, sub_000129AA); /* call 0x000129AA */

loc_0024BA6E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x7F0728;
    if (TEST_Z(_fa, _fb)) goto loc_0024BA87; /* je: equal / zero */

loc_0024BA7B: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0024BA87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024BA84u); } /* indirect call */
    }

loc_0024BA87: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024BAA0
 * Original: 0x0024BAA0 - 0x0024BAB6 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BAA0(void)
{

loc_0024BAA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FE380;
    PUSH32(esp, 0x0024BAAEu); RECOMP_ABI_CALL(0x0001837Du, sub_0001837D); /* call 0x0001837D */

loc_0024BAAE: ;
    MEM32(esi) = 0x7F0728;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024BAC0
 * Original: 0x0024BAC0 - 0x0024C366 (2214 bytes, 556 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024BAC0(void)
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

loc_0024BAC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x74));
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 0xD0;
    ecx = ebx;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xD4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0024BB0B; /* jp: parity */

loc_0024BAFA: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xD8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0024BB0B; /* jp: parity */

loc_0024BB07: ;
    SET_LO8(eax, 1);
    goto loc_0024BB0D;

loc_0024BB0B: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0024BB0D: ;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esi + 0xDC) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0024BF62; /* je: equal / zero */

loc_0024BB1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0024BF62; /* jne: not equal / not zero */

loc_0024BB26: ;
    edi = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BB5Fu); RECOMP_ABI_CALL(0x00037903u, sub_00037903); /* call 0x00037903 */

loc_0024BB5F: ;
    eax = MEM32(esi + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024BB75; /* je: equal / zero */

loc_0024BB69: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xE0) = 0;

loc_0024BB75: ;
    MEM32(esi + 0xE0) = edi;
    MEM32(edi) = MEM32(edi) + 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0xE0);
    edx = MEM32(esi + 0xF4);
    edi = MEM32(eax + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0024BD30; /* jl: less (signed <) */

loc_0024BBA1: ;
    ecx = edx + edx * 2;
    eax = edi + ecx * 4 + 8;
    ecx = 0xFFFFFFE0u;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = ecx;
    ecx = 0xFFFFFFD4u;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = ecx;
    ecx = 0xFFFFFFF8u;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esp + 0x10);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x10) = edi;
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = edx + edi * 4;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x24) = edx;
    goto loc_0024BBF0;

loc_0024BBDF: ;
    ecx = MEM32(esp + 0x14);
    goto loc_0024BBF0;

    /* nop */
    /* nop */

loc_0024BBF0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx); /* mulss */
    edx = MEM32(esi + 0xF0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx + edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xD4); /* mulss */
    edx = MEM32(esi + 0xF0);
    MEMF(ecx + edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xD8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    edx = MEM32(esi + 0xF0);
    MEMF(ecx + edx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + -20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx); /* mulss */
    edx = MEM32(esi + 0xF0);
    MEMF(ecx + edx + -12) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + -16)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xD4); /* mulss */
    edx = MEM32(esi + 0xF0);
    MEMF(ecx + edx + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + -12)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xD8); /* mulss */
    edx = MEM32(esi + 0xF0);
    MEMF(ecx + edx + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + -32)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx); /* mulss */
    edi = MEM32(esi + 0xF0);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + -28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xD4); /* mulss */
    edx = MEM32(esi + 0xF0);
    MEMF(ecx + edx + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + -24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xD8); /* mulss */
    edx = MEM32(esi + 0xF0);
    MEMF(ecx + edx + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + -44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx); /* mulss */
    edx = MEM32(esp + 0x1C);
    edi = MEM32(esi + 0xF0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + -40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xD4); /* mulss */
    edx = MEM32(esi + 0xF0);
    MEMF(ecx + edx + -32) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + -36)); /* movss */
    edx = MEM32(esi + 0xF0);
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xD8); /* mulss */
    MEMF(ecx + edx + -28) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x30));
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_0024BBDF; /* jne: not equal / not zero */

loc_0024BD28: ;
    edi = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);

loc_0024BD30: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0024BD8E; /* jl: less (signed <) */

loc_0024BD34: ;
    eax = edx + edx * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = eax + edi + 8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_0024BD40: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx); /* mulss */
    edi = MEM32(esi + 0xF0);
    MEMF(eax + edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xD4); /* mulss */
    edi = MEM32(esi + 0xF0);
    MEMF(eax + edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    edi = MEM32(esi + 0xF0);
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xD8); /* mulss */
    MEMF(eax + edi + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xC));
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0xC));
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024BD40; /* jne: not equal / not zero */

loc_0024BD8E: ;
    eax = MEM32(esi + 0xE0);
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = MEM32(eax + 0x20);
    eax = MEM32(esi + 0xEC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebx); /* divss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(esi + 0xD4); /* divss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] / MEMF(esi + 0xD8); /* divss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm5.f[0]; /* movss */
    if ((_fas < 0)) goto loc_0024BFB1; /* js: sign (negative) */

loc_0024BDDB: ;
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edx + ecx + 4;
    edx = 0xFFFFFFFCu;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x10) = eax;
    goto loc_0024BE10;

loc_0024BDF6: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    goto loc_0024BE10;

    /* nop */

loc_0024BE10: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + -4); /* mulss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebx); /* mulss */
    MEMF(esp + 0x34) = xmm6.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esi + 0xD4); /* mulss */
    MEMF(esp + 0x38) = xmm6.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 4); /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esi + 0xD8); /* mulss */
    MEMF(esp + 0x3C) = xmm6.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + -4); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edi); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + -4); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + -4); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x20); /* divss */
    eax = esp + 0x28;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x28); /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, ecx);
    ecx = edx + edi;
    edx = MEM32(esi + 0xE8);
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BF46u); RECOMP_ABI_CALL(0x00034109u, sub_00034109); /* call 0x00034109 */

loc_0024BF46: ;
    eax = MEM32(esp + 0x10);
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(0x10));
    edi = edi - 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0024BDF6; /* jne: not equal / not zero */

loc_0024BF60: ;
    goto loc_0024BFB1;

loc_0024BF62: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BF69u); RECOMP_ABI_CALL(0x0001837Du, sub_0001837D); /* call 0x0001837D */

loc_0024BF69: ;
    eax = MEM32(ebp + 8);
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi + 0xE0) = eax;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0xE0);
    MEM8(esi + 0xE4) = 0;
    ecx = MEM32(eax + 8);
    MEM32(esi + 0xF0) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0xF4) = edx;
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 0xE8) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0xEC) = edx;
    MEM8(esi + 7) = 1;

loc_0024BFB1: ;
    edi = MEM32(esi + 0xF0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x24) = edi;
    eax = esi + 0x14;
    if (CMP_EQ(_fa, _fb)) goto loc_0024C228; /* je: equal / zero */

loc_0024BFC6: ;
    ecx = edi;
    ebx = MEM32(ecx);
    edx = eax;
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edx + 4) = ebx;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    ecx = edi;
    ebx = MEM32(ecx);
    edx = esi + 0x20;
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edx + 4) = ebx;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esi + 0xF4);
    edx = ecx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0024C1B0; /* jl: less (signed <) */

loc_0024C001: ;
    ecx = edx + edx * 2;
    ecx = edi + ecx * 4 + -4;
    edi = edx + -4;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = edi;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = edx + ebx * 4;

loc_0024C016: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C025; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_0024C020: ;
    ebx = MEM32(ecx + 4);
    MEM32(eax) = ebx;

loc_0024C025: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C036; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 8)) */

loc_0024C030: ;
    ebx = MEM32(ecx + 8);
    MEM32(eax + 4) = ebx;

loc_0024C036: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C047; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_0024C041: ;
    ebx = MEM32(ecx + 0xC);
    MEM32(eax + 8) = ebx;

loc_0024C047: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C058; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_0024C052: ;
    ebx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = ebx;

loc_0024C058: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C069; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_0024C063: ;
    ebx = MEM32(ecx + 8);
    MEM32(eax + 0x10) = ebx;

loc_0024C069: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C07A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_0024C074: ;
    ebx = MEM32(ecx + 0xC);
    MEM32(eax + 0x14) = ebx;

loc_0024C07A: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + -8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C089; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + -8)) */

loc_0024C084: ;
    ebx = MEM32(ecx + -8);
    MEM32(eax) = ebx;

loc_0024C089: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + -4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C09A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + -4)) */

loc_0024C094: ;
    ebx = MEM32(ecx + -4);
    MEM32(eax + 4) = ebx;

loc_0024C09A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C0A9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0024C0A4: ;
    ebx = MEM32(ecx);
    MEM32(eax + 8) = ebx;

loc_0024C0A9: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C0BA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_0024C0B4: ;
    ebx = MEM32(ecx + -8);
    MEM32(eax + 0xC) = ebx;

loc_0024C0BA: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C0CB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_0024C0C5: ;
    ebx = MEM32(ecx + -4);
    MEM32(eax + 0x10) = ebx;

loc_0024C0CB: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C0DA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_0024C0D5: ;
    ebx = MEM32(ecx);
    MEM32(eax + 0x14) = ebx;

loc_0024C0DA: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + -20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C0E9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + -20)) */

loc_0024C0E4: ;
    ebx = MEM32(ecx + -20);
    MEM32(eax) = ebx;

loc_0024C0E9: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + -16); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C0FA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + -16)) */

loc_0024C0F4: ;
    ebx = MEM32(ecx + -16);
    MEM32(eax + 4) = ebx;

loc_0024C0FA: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + -12); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C10B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + -12)) */

loc_0024C105: ;
    ebx = MEM32(ecx + -12);
    MEM32(eax + 8) = ebx;

loc_0024C10B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -20)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C11C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_0024C116: ;
    ebx = MEM32(ecx + -20);
    MEM32(eax + 0xC) = ebx;

loc_0024C11C: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -16)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C12D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_0024C127: ;
    ebx = MEM32(ecx + -16);
    MEM32(eax + 0x10) = ebx;

loc_0024C12D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -12)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C13E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_0024C138: ;
    ebx = MEM32(ecx + -12);
    MEM32(eax + 0x14) = ebx;

loc_0024C13E: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + -32); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C14D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + -32)) */

loc_0024C148: ;
    ebx = MEM32(ecx + -32);
    MEM32(eax) = ebx;

loc_0024C14D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + -28); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C15E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + -28)) */

loc_0024C158: ;
    ebx = MEM32(ecx + -28);
    MEM32(eax + 4) = ebx;

loc_0024C15E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + -24); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C16F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + -24)) */

loc_0024C169: ;
    ebx = MEM32(ecx + -24);
    MEM32(eax + 8) = ebx;

loc_0024C16F: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -32)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C180; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_0024C17A: ;
    ebx = MEM32(ecx + -32);
    MEM32(eax + 0xC) = ebx;

loc_0024C180: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -28)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C191; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_0024C18B: ;
    ebx = MEM32(ecx + -28);
    MEM32(eax + 0x10) = ebx;

loc_0024C191: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C1A2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_0024C19C: ;
    ebx = MEM32(ecx + -24);
    MEM32(eax + 0x14) = ebx;

loc_0024C1A2: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x30));
    ecx = ecx - 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024C016; /* jne: not equal / not zero */

loc_0024C1AC: ;
    edi = MEM32(esp + 0x24);

loc_0024C1B0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0024C259; /* jle: less or equal (signed <=) */

loc_0024C1B8: ;
    ecx = edx + edx * 2;
    ecx = edi + ecx * 4 + 8;
    /* nop */

loc_0024C1C0: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + -8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C1CF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + -8)) */

loc_0024C1CA: ;
    edi = MEM32(ecx + -8);
    MEM32(eax) = edi;

loc_0024C1CF: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + -4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C1E0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + -4)) */

loc_0024C1DA: ;
    edi = MEM32(ecx + -4);
    MEM32(eax + 4) = edi;

loc_0024C1E0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C1EF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0024C1EA: ;
    edi = MEM32(ecx);
    MEM32(eax + 8) = edi;

loc_0024C1EF: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C200; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_0024C1FA: ;
    edi = MEM32(ecx + -8);
    MEM32(eax + 0xC) = edi;

loc_0024C200: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C211; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_0024C20B: ;
    edi = MEM32(ecx + -4);
    MEM32(eax + 0x10) = edi;

loc_0024C211: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C220; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_0024C21B: ;
    edi = MEM32(ecx);
    MEM32(eax + 0x14) = edi;

loc_0024C220: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0xC));
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024C1C0; /* jne: not equal / not zero */

loc_0024C226: ;
    goto loc_0024C259;

loc_0024C228: ;
    edi = MEM32(0x8F95D0);
    ecx = eax + 0xC;
    edx = ecx;
    MEM32(edx) = edi;
    edi = MEM32(0x8F95D4);
    MEM32(edx + 4) = edi;
    edi = MEM32(0x8F95D8);
    MEM32(edx + 8) = edi;
    edi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = edi;
    MEM32(edx + 8) = ecx;

loc_0024C259: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x8C) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x50) = xmm4.f[0]; /* movss */
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
    MEMF(esi + 0xCC) = xmm4.f[0]; /* movss */
    MEMF(esi + 0xB8) = xmm4.f[0]; /* movss */
    MEMF(esi + 0xA4) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x90) = xmm4.f[0]; /* movss */
    MEMF(esi + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xAC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x2C)) >> 32) & 1);
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    edx = MEM32(eax + 8);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(esi + 8) = edx;
    edx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x14);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    POP32(esp, edi);
    MEM32(esi + 0x14) = eax;
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
 * sub_0024C590
 * Original: 0x0024C590 - 0x0024CB4E (1470 bytes, 465 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024C590: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    edx = MEM32(esi + 8);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ebx = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(ebx + 0x24); PUSH32(esp, 0x0024C5BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024C5B8u); } /* indirect call */
    }

loc_0024C5BB: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    MEM32(esp + 0x3C) = eax;
    { uint32_t _icall_target = MEM32(ebx + 0x24); PUSH32(esp, 0x0024C5D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024C5D4u); } /* indirect call */
    }

loc_0024C5D7: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F424220) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4F424220 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0024C9B2; /* ja: above (unsigned >) */

loc_0024C5E7: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0024C942; /* je: equal / zero */

loc_0024C5ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48554C4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x48554C4C (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0024C864; /* ja: above (unsigned >) */

loc_0024C5F8: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0024C7AA; /* je: equal / zero */

loc_0024C5FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x434F4E45) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x434F4E45 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C6BB; /* je: equal / zero */

loc_0024C609: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47475250) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x47475250 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024CB11; /* jne: not equal / not zero */

loc_0024C614: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x0024C61Bu); RECOMP_ABI_CALL(0x00037287u, sub_00037287); /* call 0x00037287 */

loc_0024C61B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C631; /* je: equal / zero */

loc_0024C622: ;
    ecx = eax;
    PUSH32(esp, 0x0024C629u); RECOMP_ABI_CALL(0x0001E5F7u, sub_0001E5F7); /* call 0x0001E5F7 */

loc_0024C629: ;
    edi = eax;
    MEM32(esp + 0x34) = edi;
    goto loc_0024C63D;

loc_0024C631: ;
    MEM32(esp + 0x34) = 0;
    edi = MEM32(esp + 0x34);

loc_0024C63D: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x34) = edi;
    PUSH32(esp, 0x0024C64Cu); RECOMP_ABI_CALL(0x0001DB11u, sub_0001DB11); /* call 0x0001DB11 */

loc_0024C64C: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0024C6AF; /* jle: less or equal (signed <=) */

loc_0024C65B: ;
    goto loc_0024C660;

    /* nop */

loc_0024C660: ;
    edi = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x34);
    ecx = MEM32(ecx + 0x54);
    edx = MEM32(esp + 0x38);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(edi + esi + 0x14);
    PUSH32(esp, edx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0024C688u); RECOMP_ABI_CALL(0x000289CBu, sub_000289CB); /* call 0x000289CB */

loc_0024C688: ;
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x34);
    edx = MEM32(eax + 0x54);
    ecx = MEM32(edi + edx);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0024C660; /* jl: less (signed <) */

loc_0024C6AB: ;
    edi = MEM32(esp + 0x34);

loc_0024C6AF: ;
    ecx = edi;
    PUSH32(esp, 0x0024C6B6u); RECOMP_ABI_CALL(0x0002AE8Du, sub_0002AE8D); /* call 0x0002AE8D */

loc_0024C6B6: ;
    goto loc_0024CB0D;

loc_0024C6BB: ;
    PUSH32(esp, 0x400);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0024C6C8u); RECOMP_ABI_CALL(0x000272ECu, sub_000272EC); /* call 0x000272EC */

loc_0024C6C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C6DA; /* je: equal / zero */

loc_0024C6CF: ;
    ecx = eax;
    PUSH32(esp, 0x0024C6D6u); RECOMP_ABI_CALL(0x00032426u, sub_00032426); /* call 0x00032426 */

loc_0024C6D6: ;
    ecx = eax;
    goto loc_0024C6DC;

loc_0024C6DA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024C6DC: ;
    edx = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(ecx + 0x50) = edx;
    eax = MEM32(esi + 4);
    MEM32(ecx + 0x54) = eax;
    edx = MEM32(esi + 8);
    MEMF(ecx + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0x58) = edx;
    eax = MEM32(esi + 0xC);
    MEM32(ecx + 0x60) = eax;
    edx = MEM32(esi + 0x10);
    MEM32(ecx + 0x64) = edx;
    eax = MEM32(esi + 0x14);
    MEM32(ecx + 0x68) = eax;
    MEMF(ecx + 0x6C) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x18);
    MEM32(ecx + 0x390) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    MEMF(ecx + 0x394) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x39C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x218) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x214) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEMF(ecx + 0x398) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x3A0) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x384) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x388) = xmm1.f[0]; /* movss */
    eax = 2;
    MEM32(ecx + 0x3AC) = eax;
    MEM32(ecx + 0x3B0) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x30) = ecx;
    MEM32(ecx + 0x10) = eax;
    PUSH32(esp, 0x0024C796u); RECOMP_ABI_CALL(0x0001CF4Au, sub_0001CF4A); /* call 0x0001CF4A */

loc_0024C796: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024C7A2u); RECOMP_ABI_CALL(0x0001F727u, sub_0001F727); /* call 0x0001F727 */

loc_0024C7A2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024CB0D;

loc_0024C7AA: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x24);
    eax = MEM32(esi + 0x20);
    edi = esi + 0x10;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = ecx;
    ecx = MEM32(edi + 0x18);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x14) = edx;
    edx = MEM32(edi + 0x20);
    MEM32(edi + 0x18) = ecx;
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi) = 0;
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x20) = edx;
    MEM32(esp + 0x30) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0024C83B; /* jle: less or equal (signed <=) */

loc_0024C7EA: ;
    esi = eax + 0x1C;
    /* nop */

loc_0024C7F0: ;
    ecx = MEM32(esi + -4);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(ebx + 0x24); PUSH32(esp, 0x0024C808u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024C805u); } /* indirect call */
    }

loc_0024C808: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esi);
    MEM32(esi + -4) = edx;
    ecx = MEM32(edi + 0x14);
    edx = ecx + eax * 2;
    eax = MEM32(esi + 4);
    MEM32(esi) = edx;
    ecx = MEM32(edi + 0x18);
    edx = ecx + eax * 2;
    eax = MEM32(esp + 0x40);
    MEM32(esi + 4) = edx;
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0024C7F0; /* jl: less (signed <) */

loc_0024C83B: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, 0x100);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0024C850u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024C84Du); } /* indirect call */
    }

loc_0024C850: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C925; /* je: equal / zero */

loc_0024C858: ;
    ecx = eax;
    PUSH32(esp, 0x0024C85Fu); RECOMP_ABI_CALL(0x0001E020u, sub_0001E020); /* call 0x0001E020 */

loc_0024C85F: ;
    goto loc_0024C927;

loc_0024C864: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D455348) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D455348 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024CB11; /* jne: not equal / not zero */

loc_0024C86F: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x24);
    eax = MEM32(esi + 0x20);
    edi = esi + 0x10;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = ecx;
    ecx = MEM32(edi + 0x18);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x14) = edx;
    edx = MEM32(edi + 0x20);
    MEM32(edi + 0x18) = ecx;
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi) = 0;
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x20) = edx;
    MEM32(esp + 0x30) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0024C903; /* jle: less or equal (signed <=) */

loc_0024C8AF: ;
    esi = eax + 0x18;

loc_0024C8B2: ;
    ecx = MEM32(esi);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(ebx + 0x24); PUSH32(esp, 0x0024C8C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024C8C6u); } /* indirect call */
    }

loc_0024C8C9: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esi + 4);
    MEM32(esi) = edx;
    eax = MEM32(esp + 0x30);
    MEM32(esi) = eax;
    edx = MEM32(edi + 0x14);
    eax = edx + ecx * 2;
    ecx = MEM32(esi + 8);
    MEM32(esi + 4) = eax;
    edx = MEM32(edi + 0x18);
    eax = edx + ecx * 2;
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0024C8B2; /* jl: less (signed <) */

loc_0024C903: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, 0x100);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0024C918u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024C915u); } /* indirect call */
    }

loc_0024C918: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C925; /* je: equal / zero */

loc_0024C91C: ;
    ecx = eax;
    PUSH32(esp, 0x0024C923u); RECOMP_ABI_CALL(0x0001E020u, sub_0001E020); /* call 0x0001E020 */

loc_0024C923: ;
    goto loc_0024C927;

loc_0024C925: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024C927: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 0x8FA280);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x0024C93Du); RECOMP_ABI_CALL(0x00024C1Du, sub_00024C1D); /* call 0x00024C1D */

loc_0024C93D: ;
    goto loc_0024CB0D;

loc_0024C942: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    edx = esi + 0x10;
    PUSH32(esp, 0x170);
    MEM32(esp + 0x3C) = edx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0024C95Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024C95Bu); } /* indirect call */
    }

loc_0024C95E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C96D; /* je: equal / zero */

loc_0024C962: ;
    ecx = eax;
    PUSH32(esp, 0x0024C969u); RECOMP_ABI_CALL(0x0001B11Du, sub_0001B11D); /* call 0x0001B11D */

loc_0024C969: ;
    edi = eax;
    goto loc_0024C96F;

loc_0024C96D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024C96F: ;
    eax = MEM32(esp + 0x34);
    ecx = eax + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x38) = edi;
    PUSH32(esp, 0x0024C983u); RECOMP_ABI_CALL(0x000185E4u, sub_000185E4); /* call 0x000185E4 */

loc_0024C983: ;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0024C994u); RECOMP_ABI_CALL(0x000289CBu, sub_000289CB); /* call 0x000289CB */

loc_0024C994: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 0x160) = eax;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024C9AAu); RECOMP_ABI_CALL(0x000283B3u, sub_000283B3); /* call 0x000283B3 */

loc_0024C9AA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024CB0D;

loc_0024C9B2: ;
    _fb = (uint32_t)(0x534B454C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x534B454C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0024CA70; /* je: equal / zero */

loc_0024C9BD: ;
    _fb = (uint32_t)(0x502FB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x502FB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0024CA2B; /* je: equal / zero */

loc_0024C9C4: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0024CB11; /* jne: not equal / not zero */

loc_0024C9CD: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, 0x58);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0024C9DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024C9DCu); } /* indirect call */
    }

loc_0024C9DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C9EE; /* je: equal / zero */

loc_0024C9E3: ;
    ecx = eax;
    PUSH32(esp, 0x0024C9EAu); RECOMP_ABI_CALL(0x0002DC1Eu, sub_0002DC1E); /* call 0x0002DC1E */

loc_0024C9EA: ;
    edi = eax;
    goto loc_0024C9F0;

loc_0024C9EE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024C9F0: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    MEM32(esp + 0x3C) = edi;
    PUSH32(esp, 0x0024CA07u); RECOMP_ABI_CALL(0x000289CBu, sub_000289CB); /* call 0x000289CB */

loc_0024CA07: ;
    edx = MEM32(esp + 0x38);
    MEM32(edi + 0x50) = eax;
    MEM32(eax + 8) = edi;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0024CA20u); RECOMP_ABI_CALL(0x000289CBu, sub_000289CB); /* call 0x000289CB */

loc_0024CA20: ;
    MEM32(edi + 0x54) = eax;
    MEM32(eax + 8) = edi;
    goto loc_0024CB0D;

loc_0024CA2B: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, 0x60);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0024CA40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024CA3Du); } /* indirect call */
    }

loc_0024CA40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024CA4D; /* je: equal / zero */

loc_0024CA44: ;
    ecx = eax;
    PUSH32(esp, 0x0024CA4Bu); RECOMP_ABI_CALL(0x0002B932u, sub_0002B932); /* call 0x0002B932 */

loc_0024CA4B: ;
    goto loc_0024CA4F;

loc_0024CA4D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024CA4F: ;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, 0x8FA280);
    ecx = esi + 0xC;
    PUSH32(esp, edx);
    MEM32(esi + 8) = ecx;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x0024CA6Bu); RECOMP_ABI_CALL(0x0001FC86u, sub_0001FC86); /* call 0x0001FC86 */

loc_0024CA6B: ;
    goto loc_0024CB0D;

loc_0024CA70: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, 0x5C);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0024CA82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024CA7Fu); } /* indirect call */
    }

loc_0024CA82: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024CA95; /* je: equal / zero */

loc_0024CA88: ;
    ecx = eax;
    PUSH32(esp, 0x0024CA8Fu); RECOMP_ABI_CALL(0x0001B357u, sub_0001B357); /* call 0x0001B357 */

loc_0024CA8F: ;
    MEM32(esp + 0x34) = eax;
    goto loc_0024CA9B;

loc_0024CA95: ;
    MEM32(esp + 0x34) = edi;
    eax = edi;

loc_0024CA9B: ;
    edx = MEM32(esi + 0x10);
    ecx = esi + 0x14;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x50) = edx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0024CB06; /* jle: less or equal (signed <=) */

loc_0024CAB2: ;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax = esi + 0x14;
    eax = MEM32(eax + edi * 8 + 4);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(ebx + 0x24); PUSH32(esp, 0x0024CACEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024CACBu); } /* indirect call */
    }

loc_0024CACE: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x48);
    eax = esi + 0x14;
    MEM32(eax + edi * 8 + 4) = ecx;
    eax = MEM32(eax + edi * 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0024CAEFu); RECOMP_ABI_CALL(0x000289CBu, sub_000289CB); /* call 0x000289CB */

loc_0024CAEF: ;
    ecx = esi + 0x14;
    MEM32(ecx + edi * 8) = eax;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024CAB2; /* jl: less (signed <) */

loc_0024CB04: ;
    eax = ecx;

loc_0024CB06: ;
    ecx = eax;
    PUSH32(esp, 0x0024CB0Du); RECOMP_ABI_CALL(0x00021CFCu, sub_00021CFC); /* call 0x00021CFC */

loc_0024CB0D: ;
    edi = MEM32(esp + 0x30);

loc_0024CB11: ;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0xC) = edx;
    SET_LO8(eax, MEM8(esp + 0x28));
    edx = MEM32(edi);
    MEM8(edi + 5) = LO8(eax);
    ecx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(edi + 0x10) = ecx;
    PUSH32(esp, 0x8FA320);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0024CB34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024CB31u); } /* indirect call */
    }

loc_0024CB34: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8FA320);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0024CB42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024CB3Fu); } /* indirect call */
    }

loc_0024CB42: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0024CCC0
 * Original: 0x0024CCC0 - 0x0024CCED (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024CCC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FE39C;
    PUSH32(esp, 0x0024CCCEu); RECOMP_ABI_CALL(0x00024A33u, sub_00024A33); /* call 0x00024A33 */

loc_0024CCCE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x7F0728;
    if (TEST_Z(_fa, _fb)) goto loc_0024CCE7; /* je: equal / zero */

loc_0024CCDB: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0024CCE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024CCE4u); } /* indirect call */
    }

loc_0024CCE7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024CD00
 * Original: 0x0024CD00 - 0x0024CD18 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CD00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024CD00: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024CD14u); RECOMP_ABI_CALL(0x0002EB8Cu, sub_0002EB8C); /* call 0x0002EB8C */

loc_0024CD14: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024CD20
 * Original: 0x0024CD20 - 0x0024CD3C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CD20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024CD20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0024CD32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024CD2Fu); } /* indirect call */
    }

loc_0024CD32: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024CD50
 * Original: 0x0024CD50 - 0x0024CD98 (72 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024CD50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0024CD63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024CD60u); } /* indirect call */
    }

loc_0024CD63: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024CD6Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0024CD6C: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024CD75u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0024CD75: ;
    edx = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x0024CD86u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0024CD86: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002E213(); return; /* tail jmp 0x0002E213 */

}

/**
 * sub_0024CDB0
 * Original: 0x0024CDB0 - 0x0024CDC8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CDB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024CDB0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024CDC4u); RECOMP_ABI_CALL(0x000367A1u, sub_000367A1); /* call 0x000367A1 */

loc_0024CDC4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024CDD0
 * Original: 0x0024CDD0 - 0x0024CDE8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CDD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024CDD0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024CDE4u); RECOMP_ABI_CALL(0x0001DD96u, sub_0001DD96); /* call 0x0001DD96 */

loc_0024CDE4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024CDF0
 * Original: 0x0024CDF0 - 0x0024CE11 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024CDF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0024CDF8u); RECOMP_ABI_CALL(0x00022A67u, sub_00022A67); /* call 0x00022A67 */

loc_0024CDF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024CE0B; /* je: equal / zero */

loc_0024CDFF: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0024CE0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024CE08u); } /* indirect call */
    }

loc_0024CE0B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024CE20
 * Original: 0x0024CE20 - 0x0024CE4D (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024CE20: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FE380;
    PUSH32(esp, 0x0024CE2Eu); RECOMP_ABI_CALL(0x0001837Du, sub_0001837D); /* call 0x0001837D */

loc_0024CE2E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x7F0728;
    if (TEST_Z(_fa, _fb)) goto loc_0024CE47; /* je: equal / zero */

loc_0024CE3B: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0024CE47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024CE44u); } /* indirect call */
    }

loc_0024CE47: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024CE60
 * Original: 0x0024CE60 - 0x0024CECC (108 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CE60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024CE60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    SET_LO8(edx, MEM8(eax + 5));
    MEM8(ecx + 5) = LO8(edx);
    edx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xD0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xD4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 4); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xD8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 8); /* mulss */
    eax = MEM32(eax + 0xE0);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024CEC6u); RECOMP_ABI_CALL(0x00024C1Du, sub_00024C1D); /* call 0x00024C1D */

loc_0024CEC6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024CEF0
 * Original: 0x0024CEF0 - 0x0024CF4A (90 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CEF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024CEF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xD0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xD4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 4); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xD8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 8); /* mulss */
    eax = MEM32(eax + 0xE0);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024CF44u); RECOMP_ABI_CALL(0x00024C1Du, sub_00024C1D); /* call 0x00024C1D */

loc_0024CF44: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024CF60
 * Original: 0x0024CF60 - 0x0024CFFA (154 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024CF60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, 0x100);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0024CF7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024CF79u); } /* indirect call */
    }

loc_0024CF7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024CF8B; /* je: equal / zero */

loc_0024CF80: ;
    ecx = eax;
    PUSH32(esp, 0x0024CF87u); RECOMP_ABI_CALL(0x0001E020u, sub_0001E020); /* call 0x0001E020 */

loc_0024CF87: ;
    edi = eax;
    goto loc_0024CF8D;

loc_0024CF8B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024CF8D: ;
    ecx = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(esi + 0x10);
    MEM32(edi + 0x10) = edx;
    SET_LO8(eax, MEM8(esi + 5));
    MEM8(edi + 5) = LO8(eax);
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(esi + 0xD0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    edx = MEM32(esi + 0xE0);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xD4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xD8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024CFF0u); RECOMP_ABI_CALL(0x00024C1Du, sub_00024C1D); /* call 0x00024C1D */

loc_0024CFF0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024D020
 * Original: 0x0024D020 - 0x0024D3C8 (936 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D020(void)
{

loc_0024D020: ;
    eax = 0x224C2;
    MEM32(0x8F9FD0) = eax;
    MEM32(0x8F9FD4) = eax;
    MEM32(0x8F9FD8) = eax;
    MEM32(0x8F9FDC) = eax;
    MEM32(0x8F9FE0) = eax;
    MEM32(0x8F9FE4) = eax;
    MEM32(0x8F9FE8) = eax;
    MEM32(0x8F9FEC) = eax;
    MEM32(0x8F9FF0) = eax;
    MEM32(0x8F9FF4) = eax;
    MEM32(0x8F9FF8) = eax;
    MEM32(0x8F9FFC) = eax;
    eax = 0x2A18B;
    MEM32(0x8F9E18) = eax;
    MEM32(0x8F9E48) = eax;
    MEM32(0x8F9E78) = eax;
    MEM32(0x8F9EA8) = eax;
    MEM32(0x8F9ED8) = eax;
    MEM32(0x8F9F08) = eax;
    MEM32(0x8F9F38) = eax;
    MEM32(0x8F9F68) = eax;
    MEM32(0x8F9F98) = eax;
    MEM32(0x8F9FC8) = eax;
    MEM32(0x8FA028) = eax;
    eax = 0x25E97;
    MEM32(0x8FA000) = eax;
    MEM32(0x8FA004) = eax;
    MEM32(0x8FA008) = eax;
    MEM32(0x8FA00C) = eax;
    MEM32(0x8FA010) = eax;
    MEM32(0x8FA014) = eax;
    MEM32(0x8FA018) = eax;
    MEM32(0x8FA01C) = eax;
    MEM32(0x8FA020) = eax;
    MEM32(0x8FA024) = eax;
    MEM32(0x8FA02C) = eax;
    eax = 0x25807;
    MEM32(0x8F9E1C) = eax;
    MEM32(0x8F9E4C) = eax;
    MEM32(0x8F9E7C) = eax;
    MEM32(0x8F9EAC) = eax;
    MEM32(0x8F9EDC) = eax;
    MEM32(0x8F9F0C) = eax;
    MEM32(0x8F9F3C) = eax;
    MEM32(0x8F9F6C) = eax;
    MEM32(0x8F9F9C) = eax;
    MEM32(0x8F9FCC) = eax;
    MEM32(0x8F9E30) = 0x2EB8C;
    MEM32(0x8F9EB4) = 0x2B77A;
    MEM32(0x8F9E34) = 0x1DD96;
    MEM32(0x8F9EE4) = 0x3411D;
    MEM32(0x8F9E2C) = 0x2A938;
    MEM32(0x8F9E84) = 0x21A6D;
    MEM32(0x8F9E38) = 0x367A1;
    MEM32(0x8F9F14) = 0x34D11;
    MEM32(0x8F9EBC) = 0x13265;
    MEM32(0x8F9EC4) = 0x25271;
    MEM32(0x8F9E8C) = 0x26347;
    MEM32(0x8F9E90) = 0x3712E;
    MEM32(0x8F9E94) = 0x2A14F;
    MEM32(0x8F9EF0) = 0x340F0;
    MEM32(0x8F9EF4) = 0x2F046;
    MEM32(0x8F9EEC) = 0x36463;
    MEM32(0x8FA108) = 0x1B389;
    MEM32(0x8FA160) = 0x17BDA;
    MEM32(0x8FA1D0) = 0x293D0;
    MEM32(0x8FA1C8) = 0x28B7E;
    MEM32(0x8FA170) = 0x22715;
    MEM32(0x8FA0CC) = 0x2C247;
    MEM32(0x8FA0FC) = 0x1112C;
    MEM32(0x8FA0D0) = 0x1AD03;
    MEM32(0x8FA104) = 0x1AD21;
    MEM32(0x8FA130) = 0x26C70;
    MEM32(0x8FA06C) = 0x23D90;
    MEM32(0x8FA0C4) = 0x27102;
    MEM32(0x8FA074) = 0x256D1;
    MEM32(0x8FA124) = 0x2974F;
    MEM32(0x8FA078) = 0x37705;
    MEM32(0x8FA154) = 0x18AD5;
    eax = 0x14877;
    MEM32(0x8FA180) = eax;
    MEM32(0x8FA184) = eax;
    MEM32(0x8FA188) = eax;
    MEM32(0x8FA18C) = eax;
    MEM32(0x8FA194) = eax;
    MEM32(0x8FA1A4) = eax;
    eax = 0x1DA94;
    MEM32(0x8FA04C) = eax;
    MEM32(0x8FA07C) = eax;
    MEM32(0x8FA0AC) = eax;
    MEM32(0x8FA0DC) = eax;
    MEM32(0x8FA13C) = eax;
    MEM32(0x8FA19C) = eax;
    MEM32(0x8FA1FC) = eax;
    eax = 0x315F8;
    MEM32(0x8FA210) = eax;
    MEM32(0x8FA214) = eax;
    MEM32(0x8FA218) = eax;
    MEM32(0x8FA21C) = eax;
    MEM32(0x8FA220) = eax;
    MEM32(0x8FA224) = eax;
    MEM32(0x8FA228) = eax;
    MEM32(0x8FA22C) = eax;
    MEM32(0x8FA230) = eax;
    MEM32(0x8FA234) = eax;
    MEM32(0x8FA238) = eax;
    eax = 0x33A9C;
    MEM32(0x8FA058) = eax;
    MEM32(0x8FA088) = eax;
    MEM32(0x8FA0B8) = eax;
    MEM32(0x8FA0E8) = eax;
    MEM32(0x8FA118) = eax;
    MEM32(0x8FA148) = eax;
    MEM32(0x8FA178) = eax;
    MEM32(0x8FA1A8) = eax;
    MEM32(0x8FA1D8) = eax;
    MEM32(0x8FA208) = eax;
    eax = 0x19A39;
    MEM32(0x8FA240) = eax;
    MEM32(0x8FA244) = eax;
    MEM32(0x8FA248) = eax;
    MEM32(0x8FA24C) = eax;
    MEM32(0x8FA250) = eax;
    MEM32(0x8FA254) = eax;
    MEM32(0x8FA258) = eax;
    MEM32(0x8FA25C) = eax;
    MEM32(0x8FA260) = eax;
    MEM32(0x8FA264) = eax;
    MEM32(0x8FA268) = eax;
    eax = 0x21374;
    MEM32(0x8FA198) = 0x315C6;
    MEM32(0x8FA1A0) = 0x26DBF;
    MEM32(0x8FA190) = 0x1CCC0;
    MEM32(0x8FA16C) = 0x31AC1;
    MEM32(0x8FA1CC) = 0x1A033;
    MEM32(0x8FA10C) = 0x23921;
    MEM32(0x8FA05C) = eax;
    MEM32(0x8FA08C) = eax;
    MEM32(0x8FA0BC) = eax;
    MEM32(0x8FA0EC) = eax;
    MEM32(0x8FA11C) = eax;
    MEM32(0x8FA14C) = eax;
    MEM32(0x8FA17C) = eax;
    MEM32(0x8FA1AC) = eax;
    MEM32(0x8FA1DC) = eax;
    MEM32(0x8FA20C) = eax;
    MEM32(0x8FA23C) = eax;
    MEM32(0x8FA26C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0024D4C0
 * Original: 0x0024D4C0 - 0x0024D4E9 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024D4C0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 8) = MEM32(eax + 8) + eax;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + eax;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(esp + 8);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000289CB(); return; /* tail jmp 0x000289CB */

}

/**
 * sub_0024D500
 * Original: 0x0024D500 - 0x0024D5EF (239 bytes, 77 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024D500: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ebp;
    MEM32(0x8FA274) = eax;
    PUSH32(esp, 0x0024D518u); RECOMP_ABI_CALL(0x0001FAD3u, sub_0001FAD3); /* call 0x0001FAD3 */

loc_0024D518: ;
    esi = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(ebp + 4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0024D531; /* jne: not equal / not zero */

loc_0024D525: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0024D52Cu); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_0024D52C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024D54A;

loc_0024D531: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(ecx);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE2A4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0024D54Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024D547u); } /* indirect call */
    }

loc_0024D54A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D5DE; /* je: equal / zero */

loc_0024D552: ;
    PUSH32(esp, edi);
    edi = eax + 4;
    MEM32(eax) = esi;
    eax = esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0024D5DB; /* jl: less (signed <) */

loc_0024D563: ;
    esi = edi + 0xC;
    ebp = eax + 1;
    /* nop */

loc_0024D570: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x161FE);
    PUSH32(esp, 2);
    MEM32(edi) = 0x7FE2AC;
    PUSH32(esp, 0xC);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    MEMF(esi + -8) = xmm0.f[0]; /* movss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024D599u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_0024D599: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    ecx = esi + 0x4C;
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(edi) = 0x7FE2B0;
    PUSH32(esp, 0x0024D5CAu); RECOMP_ABI_CALL(0x000289DFu, sub_000289DF); /* call 0x000289DF */

loc_0024D5CA: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x70;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024D570; /* jne: not equal / not zero */

loc_0024D5D3: ;
    edi = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x10);

loc_0024D5DB: ;
    ebx = edi;
    POP32(esp, edi);

loc_0024D5DE: ;
    ecx = ebp;
    MEM32(ebp) = ebx;
    PUSH32(esp, 0x0024D5E8u); RECOMP_ABI_CALL(0x0001DC1Au, sub_0001DC1A); /* call 0x0001DC1A */

loc_0024D5E8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024D630
 * Original: 0x0024D630 - 0x0024D638 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D630(void)
{

loc_0024D630: ;
    PUSH32(esp, 0x0024D635u); RECOMP_ABI_CALL(0x0059E463u, sub_0059E463); /* call 0x0059E463 */

loc_0024D635: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0024D640
 * Original: 0x0024D640 - 0x0024D645 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024D640: ;
    g_seh_ebp = ebp; sub_0059E46E(); return; /* tail jmp 0x0059E46E */

}

/**
 * sub_0024D650
 * Original: 0x0024D650 - 0x0024D655 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024D650: ;
    g_seh_ebp = ebp; sub_0059E46F(); return; /* tail jmp 0x0059E46F */

}

/**
 * sub_0024D660
 * Original: 0x0024D660 - 0x0024D665 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024D660: ;
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}

/**
 * sub_0024D670
 * Original: 0x0024D670 - 0x0024D673 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D670(void)
{

loc_0024D670: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0024D680
 * Original: 0x0024D680 - 0x0024D687 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D680(void)
{

loc_0024D680: ;
    eax = MEM32(ecx + 0xD8);
    esp += 4; return; /* ret */

}

/**
 * sub_0024D690
 * Original: 0x0024D690 - 0x0024D697 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024D690: ;
    MEM32(ecx + 0xD8) = MEM32(ecx + 0xD8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0xD8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0024D6A0
 * Original: 0x0024D6A0 - 0x0024D6AF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D6A0(void)
{

loc_0024D6A0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax * 4 + 0x8C21E8;
    esp += 4; return; /* ret */

}

/**
 * sub_0024D6C0
 * Original: 0x0024D6C0 - 0x0024D714 (84 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024D6C0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D6CE; /* jne: not equal / not zero */

loc_0024D6C8: ;
    eax = 0x8C2228;
    esp += 4; return; /* ret */

loc_0024D6CE: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x8C2228;
    /* nop */

loc_0024D6E0: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0024D6E9u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0024D6E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D706; /* jne: not equal / not zero */

loc_0024D6F0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0024D6E0; /* jb: below (unsigned <) */

loc_0024D6F9: ;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    POP32(esp, edi);
    eax = esi + 0x8C2218;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0024D706: ;
    eax = esi;
    POP32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    POP32(esp, esi);
    _fb = (uint32_t)(0x8C2228) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8C2228;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024D730
 * Original: 0x0024D730 - 0x0024D742 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D730(void)
{

loc_0024D730: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024D73Au); RECOMP_ABI_CALL(0x00014E4Eu, sub_00014E4E); /* call 0x00014E4E */

loc_0024D73A: ;
    ecx = eax;
    PUSH32(esp, 0x0024D741u); RECOMP_ABI_CALL(0x000231CEu, sub_000231CE); /* call 0x000231CE */

loc_0024D741: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024D750
 * Original: 0x0024D750 - 0x0024D751 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D750(void)
{

loc_0024D750: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024D760
 * Original: 0x0024D760 - 0x0024D778 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024D760: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx) = LO16(eax);
    MEM8(ecx + 2) = LO8(eax);
    MEM8(ecx + 3) = LO8(eax);
    MEM8(ecx + 4) = LO8(eax);
    MEM8(ecx + 5) = LO8(eax);
    MEM8(ecx + 6) = LO8(eax);
    MEM8(ecx + 7) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0024D780
 * Original: 0x0024D780 - 0x0024D7B1 (49 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D780(void)
{

loc_0024D780: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, MEM16(eax));
    MEM16(ecx) = LO16(edx);
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(ecx + 2) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 3));
    MEM8(ecx + 3) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 4));
    MEM8(ecx + 4) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 5));
    MEM8(ecx + 5) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 6));
    MEM8(ecx + 6) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 7));
    MEM8(ecx + 7) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024D7C0
 * Original: 0x0024D7C0 - 0x0024D7E4 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D7C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024D7C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx) = LO16(eax);
    MEM8(ecx + 2) = LO8(eax);
    MEM8(ecx + 3) = LO8(eax);
    MEM8(ecx + 4) = LO8(eax);
    MEM8(ecx + 5) = LO8(eax);
    MEM8(ecx + 6) = LO8(eax);
    MEM8(ecx + 7) = LO8(eax);
    MEM8(ecx + 8) = LO8(eax);
    MEM8(ecx + 9) = LO8(eax);
    MEM8(ecx + 0xA) = LO8(eax);
    MEM8(ecx + 0xB) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0024D7F0
 * Original: 0x0024D7F0 - 0x0024D7FC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024D7F0: ;
    edx = MEM32(ecx + 0x48);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0024D800
 * Original: 0x0024D800 - 0x0024D80A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D800(void)
{

loc_0024D800: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024D810
 * Original: 0x0024D810 - 0x0024D888 (120 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D810(void)
{

loc_0024D810: ;
    eax = ecx;
    edx = 0x10;
    ecx = 0x40;
    MEM16(eax) = 8;
    MEM16(eax + 2) = 0x80;
    MEM16(eax + 4) = 0x20;
    MEM16(eax + 6) = 2;
    MEM16(eax + 8) = 1;
    MEM16(eax + 0xA) = LO16(edx);
    MEM16(eax + 0xC) = LO16(ecx);
    MEM16(eax + 0xE) = 4;
    MEM16(eax + 0x10) = 2;
    MEM16(eax + 0x12) = 1;
    MEM16(eax + 0x14) = 0x20;
    MEM16(eax + 0x16) = LO16(ecx);
    MEM16(eax + 0x18) = 0x80;
    MEM16(eax + 0x1A) = LO16(edx);
    MEM16(eax + 0x1C) = 4;
    MEM16(eax + 0x20) = 0x100;
    MEM16(eax + 0x22) = LO16(ecx);
    MEM16(eax + 0x24) = 0x80;
    MEM16(eax + 0x26) = 0x20;
    MEM16(eax + 0x28) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024D8B0
 * Original: 0x0024D8B0 - 0x0024D990 (224 bytes, 65 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024D8B0: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO16(eax, MEM16(esp + 4));
    if (CMP_EQ(_fa, _fb)) goto loc_0024D929; /* je: equal / zero */

loc_0024D8BD: ;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D8C7; /* jne: not equal / not zero */

loc_0024D8C2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0024D8C7: ;
    _fa = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 2), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D8D5; /* jne: not equal / not zero */

loc_0024D8CD: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

loc_0024D8D5: ;
    _fa = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 4), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D8E3; /* jne: not equal / not zero */

loc_0024D8DB: ;
    eax = 2;
    esp += 12; return; /* ret 8 */

loc_0024D8E3: ;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D8F1; /* jne: not equal / not zero */

loc_0024D8E9: ;
    eax = 3;
    esp += 12; return; /* ret 8 */

loc_0024D8F1: ;
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 8), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D8FF; /* jne: not equal / not zero */

loc_0024D8F7: ;
    eax = 4;
    esp += 12; return; /* ret 8 */

loc_0024D8FF: ;
    _fa = (uint32_t)(MEM16(ecx + 0xA)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xA), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D90D; /* jne: not equal / not zero */

loc_0024D905: ;
    eax = 5;
    esp += 12; return; /* ret 8 */

loc_0024D90D: ;
    _fa = (uint32_t)(MEM16(ecx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xC), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D91B; /* jne: not equal / not zero */

loc_0024D913: ;
    eax = 6;
    esp += 12; return; /* ret 8 */

loc_0024D91B: ;
    _fa = (uint32_t)(MEM16(ecx + 0xE)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xE), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D988; /* jne: not equal / not zero */

loc_0024D921: ;
    eax = 7;
    esp += 12; return; /* ret 8 */

loc_0024D929: ;
    _fa = (uint32_t)(MEM16(ecx + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x10), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D937; /* jne: not equal / not zero */

loc_0024D92F: ;
    eax = 8;
    esp += 12; return; /* ret 8 */

loc_0024D937: ;
    _fa = (uint32_t)(MEM16(ecx + 0x12)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x12), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D945; /* jne: not equal / not zero */

loc_0024D93D: ;
    eax = 9;
    esp += 12; return; /* ret 8 */

loc_0024D945: ;
    _fa = (uint32_t)(MEM16(ecx + 0x14)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x14), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D953; /* jne: not equal / not zero */

loc_0024D94B: ;
    eax = 0xA;
    esp += 12; return; /* ret 8 */

loc_0024D953: ;
    _fa = (uint32_t)(MEM16(ecx + 0x16)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x16), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D961; /* jne: not equal / not zero */

loc_0024D959: ;
    eax = 0xB;
    esp += 12; return; /* ret 8 */

loc_0024D961: ;
    _fa = (uint32_t)(MEM16(ecx + 0x18)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x18), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D96F; /* jne: not equal / not zero */

loc_0024D967: ;
    eax = 0xC;
    esp += 12; return; /* ret 8 */

loc_0024D96F: ;
    _fa = (uint32_t)(MEM16(ecx + 0x1A)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1A), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D97D; /* jne: not equal / not zero */

loc_0024D975: ;
    eax = 0xD;
    esp += 12; return; /* ret 8 */

loc_0024D97D: ;
    _fa = (uint32_t)(MEM16(ecx + 0x1C)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1C), LO16(eax) (16-bit) */
    eax = 0xE;
    if (CMP_EQ(_fa, _fb)) goto loc_0024D98D; /* je: equal / zero */

loc_0024D988: ;
    eax = 0x15;

loc_0024D98D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024D9D0
 * Original: 0x0024D9D0 - 0x0024D9E3 (19 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D9D0(void)
{

loc_0024D9D0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0x1E;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024D9F0
 * Original: 0x0024D9F0 - 0x0024D9F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D9F0(void)
{

loc_0024D9F0: ;
    eax = MEM32(0x8FA488);
    esp += 4; return; /* ret */

}

/**
 * sub_0024DA00
 * Original: 0x0024DA00 - 0x0024DA42 (66 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DA00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + esi * 2;

loc_0024DA10: ;
    edi = ZX8(MEM8(edx + eax));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DA3A; /* je: equal / zero */

loc_0024DA18: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024DA10; /* jl: less (signed <) */

loc_0024DA1E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024DA20: ;
    _fa = (uint32_t)(MEM8(edx + eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DA34; /* je: equal / zero */

loc_0024DA26: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024DA20; /* jl: less (signed <) */

loc_0024DA2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0024DA34: ;
    eax = eax + esi * 2;
    MEM8(eax + ecx) = LO8(ebx);

loc_0024DA3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024DA60
 * Original: 0x0024DA60 - 0x0024DA74 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DA60(void)
{

loc_0024DA60: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x8FA488);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024DA71u); RECOMP_ABI_CALL(0x00011433u, sub_00011433); /* call 0x00011433 */

loc_0024DA71: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024DA80
 * Original: 0x0024DA80 - 0x0024DAB5 (53 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DA80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + edi * 2;

loc_0024DA90: ;
    ebx = ZX8(MEM8(edx + eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DAA6; /* je: equal / zero */

loc_0024DA98: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024DA90; /* jl: less (signed <) */

loc_0024DA9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0024DAA6: ;
    eax = eax + edi * 2;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + ecx) = 0;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024DAD0
 * Original: 0x0024DAD0 - 0x0024DAFA (42 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DAD0: ;
    edx = MEM32(esp + 4);
    ecx = ecx + edx * 2;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    edi = edi;

loc_0024DAE0: ;
    esi = ZX8(MEM8(ecx + eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DAF4; /* je: equal / zero */

loc_0024DAE8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024DAE0; /* jl: less (signed <) */

loc_0024DAEE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0024DAF4: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024DB10
 * Original: 0x0024DB10 - 0x0024DB1F (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DB10(void)
{

loc_0024DB10: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 2;
    MEM16(eax) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024DB30
 * Original: 0x0024DB30 - 0x0024DB59 (41 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DB30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = edi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 1;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0024DB40: ;
    SET_LO8(ecx, MEM8(edi + edx * 2));
    MEM8(eax + -1) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + eax));
    MEM8(eax) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024DB40; /* jl: less (signed <) */

loc_0024DB54: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024DB70
 * Original: 0x0024DB70 - 0x0024DB8B (27 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DB70(void)
{

loc_0024DB70: ;
    eax = MEM32(esp + 8);
    SET_LO8(edx, MEM8(ecx + eax * 2));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM8(ecx + esi * 2) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + eax * 2 + 1));
    MEM8(ecx + esi * 2 + 1) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024DBA0
 * Original: 0x0024DBA0 - 0x0024DBC9 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DBA0: ;
    eax = MEM32(0x8FA488);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0024DBBC; /* jne: not equal / not zero */

loc_0024DBAD: ;
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(ecx + 2) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 3));
    MEM8(ecx + 3) = LO8(eax);
    esp += 8; return; /* ret 4 */

loc_0024DBBC: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 1));
    MEM8(ecx + 1) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024DBE0
 * Original: 0x0024DBE0 - 0x0024DBEA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DBE0(void)
{

loc_0024DBE0: ;
    eax = MEM32(esp + 4);
    MEM32(0x8FA488) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DBF0
 * Original: 0x0024DBF0 - 0x0024DC09 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DBF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(0x8C2200) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0024DC08; /* jne: not equal / not zero */

loc_0024DBFE: ;
    MEM32(0x8FA488) = 0;

loc_0024DC08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DC10
 * Original: 0x0024DC10 - 0x0024DC21 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DC10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DC10: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx) = LO8(eax);
    MEM8(ecx + 1) = LO8(eax);
    MEM8(ecx + 2) = LO8(eax);
    MEM8(ecx + 3) = LO8(eax);
    MEM8(ecx + 4) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0024DC30
 * Original: 0x0024DC30 - 0x0024DC37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DC30(void)
{

loc_0024DC30: ;
    SET_LO8(eax, MEM8(ecx + 0x210));
    esp += 4; return; /* ret */

}

/**
 * sub_0024DC40
 * Original: 0x0024DC40 - 0x0024DC47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DC40(void)
{

loc_0024DC40: ;
    MEM32(ecx) = 0x7FE824;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DC50
 * Original: 0x0024DC50 - 0x0024DC6F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DC50: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FE824;
    if (TEST_Z(_fa, _fb)) goto loc_0024DC69; /* je: equal / zero */

loc_0024DC60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0024DC66u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0024DC66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024DC69: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024DC80
 * Original: 0x0024DC80 - 0x0024DC87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DC80(void)
{

loc_0024DC80: ;
    MEM32(ecx) = 0x7FE860;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DC90
 * Original: 0x0024DC90 - 0x0024DCFC (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DC90: ;
    eax = 1;
    MEM8(ecx + 0xC) = LO8(eax);
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x48) = edx;
    eax = ecx + 0x1B;
    edx = 2;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0024DCB0: ;
    MEM16(eax + -3) = LO16(ecx);
    MEM8(eax + -1) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    MEM16(eax + 0x15) = LO16(ecx);
    MEM8(eax + 0x17) = LO8(ecx);
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(eax + 0x19) = LO8(ecx);
    MEM8(eax + 0x1A) = LO8(ecx);
    MEM8(eax + 0x1B) = LO8(ecx);
    MEM8(eax + 0x1C) = LO8(ecx);
    MEM8(eax + 0x1D) = LO8(ecx);
    MEM8(eax + 0x1E) = LO8(ecx);
    MEM8(eax + 0x1F) = LO8(ecx);
    MEM8(eax + 0x20) = LO8(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024DCB0; /* jne: not equal / not zero */

loc_0024DCF9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024DD20
 * Original: 0x0024DD20 - 0x0024DD40 (32 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DD20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DD20: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0x18));
    MEM32(ecx + 0x14) = 0;
    SET_LO16(eax, LO16(eax) ^ MEM16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    eax = eax & 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ecx + 0x18) = MEM16(ecx + 0x18) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(ecx + 0x18)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024DD50
 * Original: 0x0024DD50 - 0x0024DDAA (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DD50: ;
    eax = ecx + 0x1B;
    edx = 2;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0024DD60: ;
    MEM16(eax + -3) = LO16(ecx);
    MEM8(eax + -1) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    MEM16(eax + 0x15) = LO16(ecx);
    MEM8(eax + 0x17) = LO8(ecx);
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(eax + 0x19) = LO8(ecx);
    MEM8(eax + 0x1A) = LO8(ecx);
    MEM8(eax + 0x1B) = LO8(ecx);
    MEM8(eax + 0x1C) = LO8(ecx);
    MEM8(eax + 0x1D) = LO8(ecx);
    MEM8(eax + 0x1E) = LO8(ecx);
    MEM8(eax + 0x1F) = LO8(ecx);
    MEM8(eax + 0x20) = LO8(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024DD60; /* jne: not equal / not zero */

loc_0024DDA9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DDC0
 * Original: 0x0024DDC0 - 0x0024DDCD (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DDC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DDC0: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, LO8(edx) | LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024DDD0
 * Original: 0x0024DDD0 - 0x0024DDDF (15 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DDD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DDD0: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ecx) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024DDF0
 * Original: 0x0024DDF0 - 0x0024DDF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DDF0(void)
{

loc_0024DDF0: ;
    MEM8(ecx) = 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DE00
 * Original: 0x0024DE00 - 0x0024DE01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DE00(void)
{

loc_0024DE00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DE10
 * Original: 0x0024DE10 - 0x0024DE17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DE10(void)
{

loc_0024DE10: ;
    eax = MEM32(ecx + 0x218);
    esp += 4; return; /* ret */

}

/**
 * sub_0024DE20
 * Original: 0x0024DE20 - 0x0024DE26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DE20(void)
{

loc_0024DE20: ;
    eax = MEM32(0x8FA48C);
    esp += 4; return; /* ret */

}

/**
 * sub_0024DE30
 * Original: 0x0024DE30 - 0x0024DE39 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DE30(void)
{

loc_0024DE30: ;
    eax = ecx;
    MEM32(eax) = 0x7FE824;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DE40
 * Original: 0x0024DE40 - 0x0024DE41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DE40(void)
{

loc_0024DE40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DE50
 * Original: 0x0024DE50 - 0x0024DE74 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DE50: ;
    MEM32(ecx) = 0x7FE874;
    eax = ecx + 0x544;
    edx = 8;

loc_0024DE61: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x7FE860;
    if ((_fa != 0)) goto loc_0024DE61; /* jne: not equal / not zero */

loc_0024DE6D: ;
    MEM32(ecx) = 0x7FE824;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DE80
 * Original: 0x0024DE80 - 0x0024DE85 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DE80(void)
{

loc_0024DE80: ;
    MEM8(ecx + 4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DE90
 * Original: 0x0024DE90 - 0x0024DE95 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DE90(void)
{

loc_0024DE90: ;
    MEM8(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DEA0
 * Original: 0x0024DEA0 - 0x0024DEA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DEA0(void)
{

loc_0024DEA0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0024DEB0
 * Original: 0x0024DEB0 - 0x0024DEB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DEB0(void)
{

loc_0024DEB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DEC0
 * Original: 0x0024DEC0 - 0x0024DEC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DEC0(void)
{

loc_0024DEC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DED0
 * Original: 0x0024DED0 - 0x0024DED9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024DED0: ;
    eax = MEM32(ecx);
    MEM8(ecx + 5) = 0;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_0024DEE0
 * Original: 0x0024DEE0 - 0x0024DEE9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024DEE0: ;
    eax = MEM32(ecx);
    MEM8(ecx + 5) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_0024DEF0
 * Original: 0x0024DEF0 - 0x0024DEF8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024DEF0: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0024DF00
 * Original: 0x0024DF00 - 0x0024DF1E (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0024DF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024DF00: ;
    SET_LO8(eax, MEM8(ecx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DF1B; /* je: equal / zero */

loc_0024DF07: ;
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024DF1B; /* jne: not equal / not zero */

loc_0024DF0E: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DF1B; /* je: equal / zero */

loc_0024DF15: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_0024DF1B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024DF30
 * Original: 0x0024DF30 - 0x0024DF5C (44 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DF30: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF00u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024DF4A; /* jne: not equal / not zero */

loc_0024DF3B: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + ecx + 0x24;
    esp += 8; return; /* ret 4 */

loc_0024DF4A: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + ecx + 0x184;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024DF70
 * Original: 0x0024DF70 - 0x0024DF9C (44 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DF70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF00u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024DF8A; /* jne: not equal / not zero */

loc_0024DF7B: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + ecx + 0x24;
    esp += 8; return; /* ret 4 */

loc_0024DF8A: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + ecx + 0x184;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024DFB0
 * Original: 0x0024DFB0 - 0x0024DFCC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024DFB0: ;
    ecx = MEM32(0x8FA490);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DFCB; /* je: equal / zero */

loc_0024DFBA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0024DFC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024DFBEu); } /* indirect call */
    }

loc_0024DFC1: ;
    MEM32(0x8FA490) = 0;

loc_0024DFCB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024DFE0
 * Original: 0x0024DFE0 - 0x0024DFE6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DFE0(void)
{

loc_0024DFE0: ;
    eax = MEM32(0x8FA490);
    esp += 4; return; /* ret */

}

/**
 * sub_0024DFF0
 * Original: 0x0024DFF0 - 0x0024E1FF (527 bytes, 140 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024DFF0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(esp + 0x10));
    PUSH32(esp, edi);
    edi = ecx;
    eax = edi + 0x10;
    ebp = 2;
    goto loc_0024E010;

    /* nop */
    /* nop */

loc_0024E010: ;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x30), esi (32-bit) */
    ecx = 0;
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(eax);
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x34), esi (32-bit) */
    ecx = 0;
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(eax + 4);
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x38), esi (32-bit) */
    ecx = 0;
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(eax + 8);
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x3C), esi (32-bit) */
    ecx = 0;
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(eax + 0xC);
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x40), esi (32-bit) */
    ecx = 0;
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(eax + 0x10);
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x44), esi (32-bit) */
    ecx = 0;
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(eax + -4);
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */
    if ((_fa != 0)) goto loc_0024E010; /* jne: not equal / not zero */

loc_0024E0A3: ;
    eax = ZX8(MEM8(esp + 0x18));
    _fa = (uint32_t)(MEM32(edi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x80), eax (32-bit) */
    ecx = 0;
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    xmm1 = XMM_SCALAR(MEMF(0x7FE8B0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7DADA4)); /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(edi + 0x70);
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(edi + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x84), eax (32-bit) */
    ecx = 0;
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(edi + 0x74);
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(edi + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x88), eax (32-bit) */
    ecx = 0;
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(edi + 0x78);
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */
    esi = MEM32(edi + 0x8C);
    ecx = MEM32(edi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, esi (32-bit) */
    eax = 0;
    SET_LO8(eax, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_0024E147; /* jl: less (signed <) */

loc_0024E12D: ;
    eax = SX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(edx + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edx + 0x5C) = xmm0.f[0]; /* movss */
    goto loc_0024E15F;

loc_0024E147: ;
    ecx = SX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(edx + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edx + 0x60) = xmm0.f[0]; /* movss */

loc_0024E15F: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024E17E; /* jl: less (signed <) */

loc_0024E167: ;
    eax = SX8(LO8(eax));
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(edx + 0x64) = xmm3.f[0]; /* movss */
    MEMF(edx + 0x68) = xmm0.f[0]; /* movss */
    goto loc_0024E193;

loc_0024E17E: ;
    ecx = SX8(LO8(eax));
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(edx + 0x68) = xmm3.f[0]; /* movss */
    MEMF(edx + 0x64) = xmm0.f[0]; /* movss */

loc_0024E193: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024E1B2; /* jl: less (signed <) */

loc_0024E19B: ;
    eax = SX8(LO8(eax));
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(edx + 0x70) = xmm3.f[0]; /* movss */
    MEMF(edx + 0x6C) = xmm0.f[0]; /* movss */
    goto loc_0024E1C7;

loc_0024E1B2: ;
    ecx = SX8(LO8(eax));
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(edx + 0x6C) = xmm3.f[0]; /* movss */
    MEMF(edx + 0x70) = xmm0.f[0]; /* movss */

loc_0024E1C7: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024E1E7; /* jl: less (signed <) */

loc_0024E1CF: ;
    eax = SX8(LO8(eax));
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(edx + 0x74) = xmm1.f[0]; /* movss */
    MEMF(edx + 0x78) = xmm0.f[0]; /* movss */
    esp += 32; return; /* ret 28 */

loc_0024E1E7: ;
    ecx = SX8(LO8(eax));
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(edx + 0x78) = xmm2.f[0]; /* movss */
    MEMF(edx + 0x74) = xmm0.f[0]; /* movss */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0024E290
 * Original: 0x0024E290 - 0x0024E3F6 (358 bytes, 125 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024E290: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM16(edi) = 0;
    ebp = ecx;
    MEM8(eax) = 0;
    SET_LO8(eax, MEM8(ebp + 0x210));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E2CF; /* jne: not equal / not zero */

loc_0024E2AE: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    MEM8(ecx) = 0;
    ecx = MEM32(esp + 0x24);
    MEM8(edx) = 0;
    POP32(esp, edi);
    MEM8(eax) = 0;
    MEM8(ecx) = 0;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

loc_0024E2CF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = ebp + 5;
    eax = ebp + 0x40;
    ecx = 2;
    PUSH32(esp, ebx);

loc_0024E2E0: ;
    ebx = MEM32(eax + -48);
    SET_LO8(ebx, MEM8(esi + ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + -1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(edx + -1) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024E2F1; /* jbe: below or equal (unsigned <=) */

loc_0024E2EB: ;
    SET_LO16(ebx, MEM16(eax));
    MEM16(edi) = MEM16(edi) | LO16(ebx);
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0024E2F1: ;
    ebx = MEM32(eax + -44);
    SET_LO8(ebx, MEM8(esi + ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(edx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024E302; /* jbe: below or equal (unsigned <=) */

loc_0024E2FB: ;
    SET_LO16(ebx, MEM16(eax + 4));
    MEM16(edi) = MEM16(edi) | LO16(ebx);
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0024E302: ;
    ebx = MEM32(eax + -40);
    SET_LO8(ebx, MEM8(esi + ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(edx + 1) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024E314; /* jbe: below or equal (unsigned <=) */

loc_0024E30D: ;
    SET_LO16(ebx, MEM16(eax + 8));
    MEM16(edi) = MEM16(edi) | LO16(ebx);
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0024E314: ;
    ebx = MEM32(eax + -36);
    SET_LO8(ebx, MEM8(esi + ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(edx + 2) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024E326; /* jbe: below or equal (unsigned <=) */

loc_0024E31F: ;
    SET_LO16(ebx, MEM16(eax + 0xC));
    MEM16(edi) = MEM16(edi) | LO16(ebx);
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0024E326: ;
    ebx = MEM32(eax + -32);
    SET_LO8(ebx, MEM8(esi + ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(edx + 3) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024E338; /* jbe: below or equal (unsigned <=) */

loc_0024E331: ;
    SET_LO16(ebx, MEM16(eax + 0x10));
    MEM16(edi) = MEM16(edi) | LO16(ebx);
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0024E338: ;
    ebx = MEM32(eax + -28);
    SET_LO8(ebx, MEM8(esi + ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(edx + 4) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024E34A; /* jbe: below or equal (unsigned <=) */

loc_0024E343: ;
    SET_LO16(ebx, MEM16(eax + 0x14));
    MEM16(edi) = MEM16(edi) | LO16(ebx);
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0024E34A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024E2E0; /* jne: not equal / not zero */

loc_0024E353: ;
    edx = MEM32(ebp + 0x70);
    _fa = (uint32_t)(MEM8(esi + edx)) & 0xFFu; _fb = (uint32_t)(0x19) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + edx), 0x19 (8-bit) */
    eax = MEM32(esp + 0x1C);
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_0024E369; /* jbe: below or equal (unsigned <=) */

loc_0024E361: ;
    SET_LO8(ecx, MEM8(ebp + 0x80));
    MEM8(eax) = MEM8(eax) | LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0024E369: ;
    edx = MEM32(ebp + 0x74);
    _fa = (uint32_t)(MEM8(esi + edx)) & 0xFFu; _fb = (uint32_t)(0x19) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + edx), 0x19 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024E37A; /* jbe: below or equal (unsigned <=) */

loc_0024E372: ;
    SET_LO8(ecx, MEM8(ebp + 0x84));
    MEM8(eax) = MEM8(eax) | LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0024E37A: ;
    edx = MEM32(ebp + 0x78);
    _fa = (uint32_t)(MEM8(esi + edx)) & 0xFFu; _fb = (uint32_t)(0x19) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + edx), 0x19 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024E38B; /* jbe: below or equal (unsigned <=) */

loc_0024E383: ;
    SET_LO8(ecx, MEM8(ebp + 0x88));
    MEM8(eax) = MEM8(eax) | LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0024E38B: ;
    edx = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(MEM8(esi + edx)) & 0xFFu; _fb = (uint32_t)(0x19) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + edx), 0x19 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024E39C; /* jbe: below or equal (unsigned <=) */

loc_0024E394: ;
    SET_LO8(ecx, MEM8(ebp + 0x8C));
    MEM8(eax) = MEM8(eax) | LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0024E39C: ;
    edx = ZX8(MEM8(esi + 0x17));
    eax = ZX8(MEM8(esi + 0x18));
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ecx) = LO8(eax);
    edx = ZX8(MEM8(esi + 0x1A));
    eax = ZX8(MEM8(esi + 0x19));
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ecx) = LO8(eax);
    edx = ZX8(MEM8(esi + 0x1B));
    eax = ZX8(MEM8(esi + 0x1C));
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ecx) = LO8(eax);
    edx = ZX8(MEM8(esi + 0x1E));
    eax = ZX8(MEM8(esi + 0x1D));
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, edi);
    MEM8(ecx) = LO8(eax);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0024E450
 * Original: 0x0024E450 - 0x0024E5E0 (400 bytes, 118 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024E450: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ebp = esi + 2;
    PUSH32(esp, ebx);
    edi = ecx;
    MEM16(esi) = 0;
    MEM8(ebp) = 0;
    MEM8(esi + 3) = 0;
    MEM8(esi + 4) = 0;
    MEM8(esi + 5) = 0;
    MEM8(esi + 6) = 0;
    MEM8(esi + 7) = 0;
    PUSH32(esp, 0x0024E484u); RECOMP_ABI_CALL(0x00014E4Eu, sub_00014E4E); /* call 0x00014E4E */

loc_0024E484: ;
    ecx = eax;
    PUSH32(esp, 0x0024E48Bu); RECOMP_ABI_CALL(0x00019188u, sub_00019188); /* call 0x00019188 */

loc_0024E48B: ;
    ecx = esi + 6;
    PUSH32(esp, ecx);
    ecx = esi + 5;
    PUSH32(esp, ecx);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi + 3;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0024E4A5u); RECOMP_ABI_CALL(0x00015565u, sub_00015565); /* call 0x00015565 */

loc_0024E4A5: ;
    eax = MEM32(0x8FCA50);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E4D6; /* je: equal / zero */

loc_0024E4B0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x8C2214); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C650C); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    MEM8(esi + 7) = LO8(eax);
    goto loc_0024E4DA;

loc_0024E4D6: ;
    MEM8(esi + 7) = 0;

loc_0024E4DA: ;
    MEM32(esp + 0x18) = ecx;
    edx = edi + 0x44;
    SET_LO16(eax, LO16(ecx));

loc_0024E4E4: ;
    ebp = ZX16(MEM16(esi));
    _fa = (uint32_t)(MEM32(edx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + -4), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E4F7; /* je: equal / zero */

loc_0024E4EC: ;
    ebp = ebx + ebx * 2 + 9;
    ebp = ecx + ebp * 4;
    SET_LO16(eax, LO16(eax) | MEM16(edi + ebp * 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0024E4F7: ;
    ebp = ZX16(MEM16(esi));
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E50C; /* je: equal / zero */

loc_0024E4FE: ;
    ebp = ebx + ebx * 2;
    ebp = ecx + ebp * 4;
    SET_LO16(eax, LO16(eax) | MEM16(edi + ebp * 4 + 0x94));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0024E50C: ;
    ebp = ZX16(MEM16(esi));
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 4), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E522; /* je: equal / zero */

loc_0024E514: ;
    ebp = ebx + ebx * 2;
    ebp = ecx + ebp * 4;
    SET_LO16(eax, LO16(eax) | MEM16(edi + ebp * 4 + 0x98));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0024E522: ;
    ebp = ZX16(MEM16(esi));
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 8), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E538; /* je: equal / zero */

loc_0024E52A: ;
    ebp = ebx + ebx * 2;
    ebp = ecx + ebp * 4;
    SET_LO16(eax, LO16(eax) | MEM16(edi + ebp * 4 + 0x9C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0024E538: ;
    ebp = ZX16(MEM16(esi));
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 0xC), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E54E; /* je: equal / zero */

loc_0024E540: ;
    ebp = ebx + ebx * 2;
    ebp = ecx + ebp * 4;
    SET_LO16(eax, LO16(eax) | MEM16(edi + ebp * 4 + 0xA0));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0024E54E: ;
    ebp = ZX16(MEM16(esi));
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 0x10), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E564; /* je: equal / zero */

loc_0024E556: ;
    ebp = ebx + ebx * 2;
    ebp = ecx + ebp * 4;
    SET_LO16(eax, LO16(eax) | MEM16(edi + ebp * 4 + 0xA4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0024E564: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024E4E4; /* jl: less (signed <) */

loc_0024E573: ;
    MEM16(esi) = LO16(eax);
    SET_LO8(eax, MEM8(edi + 0x210));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E59D; /* jne: not equal / not zero */

loc_0024E580: ;
    MEM16(esi) = 0;
    MEM8(esi + 2) = 0;
    MEM8(esi + 3) = 0;
    MEM8(esi + 4) = 0;
    MEM8(esi + 5) = 0;
    MEM8(esi + 6) = 0;
    MEM8(esi + 7) = 0;

loc_0024E59D: ;
    eax = ZX8(LO8(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF00u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024E5BB; /* jne: not equal / not zero */

loc_0024E5A7: ;
    ecx = MEM32(0x8FA48C);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + ecx + 0x24;
    goto loc_0024E5D0;

loc_0024E5BB: ;
    edx = MEM32(0x8FA48C);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + edx + 0x184;

loc_0024E5D0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E5D9; /* je: equal / zero */

loc_0024E5D5: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 0x10;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0024E5D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024E650
 * Original: 0x0024E650 - 0x0024E72C (220 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E650(void)
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

loc_0024E650: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEM8(esi) = 0;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7A9980); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024E69F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7A9980)) */

loc_0024E696: ;
    eax = MEM32(esp + 0x18);
    MEM8(eax) = 0xFF;
    goto loc_0024E6B4;

loc_0024E69F: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    PUSH32(esp, 0x0024E6AEu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0024E6AE: ;
    ecx = MEM32(esp + 0x18);
    MEM8(ecx) = LO8(eax);

loc_0024E6B4: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8C2204)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024E6DD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0024E6D8: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0024E70B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024E6DD: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024E6EB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0024E6E2: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_0024E708;

loc_0024E6EB: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024E6FD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0024E6F4: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_0024E708;

loc_0024E6FD: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_0024E708: ;
    xmm0 = xmm2; /* movaps */

loc_0024E70B: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(0x8C2214); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7FE8B4); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    MEM8(esi) = LO8(eax);
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
 * sub_0024E770
 * Original: 0x0024E770 - 0x0024E79D (45 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024E770: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    eax = eax + eax * 2 + 9;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ecx + edx * 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + edx * 4;
    eax = ecx + eax * 4;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}
