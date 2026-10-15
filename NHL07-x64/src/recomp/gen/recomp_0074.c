/**
 * nhl_07_recomp - Recompiled code chunk 74
 * Functions: 250 (0x000536C0 - 0x0005C770)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000536C0
 * Original: 0x000536C0 - 0x0005377B (187 bytes, 47 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000536C0(void)
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

loc_000536C0: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 8); /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000536F0; /* jp: parity */

loc_000536E3: ;
    fp_push(MEMF(0x7AACB4)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000536F0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edx + 4); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(edx + 8); /* subss */
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    ecx = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    edx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000537B0
 * Original: 0x000537B0 - 0x0005380F (95 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000537B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000537B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = ecx;
    MEM32(eax) = 0x7AB810;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = MEM32(esp + 4);
    MEMF(esp) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp);
    MEM32(eax + 4) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00053830
 * Original: 0x00053830 - 0x000538A4 (116 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053830(void)
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

loc_00053830: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0xC); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 8); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB700); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005389E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00053895: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0005389E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000538D0
 * Original: 0x000538D0 - 0x00053934 (100 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000538D0(void)
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

loc_000538D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 4;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00053913u); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_00053913: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
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
 * sub_00053950
 * Original: 0x00053950 - 0x00053987 (55 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00053950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00053950: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB82C); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00053970; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00053969: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_00053970: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053982; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005397A: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00053982: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000539A0
 * Original: 0x000539A0 - 0x000539CC (44 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000539A0(void)
{

loc_000539A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x7AB830;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000539E0
 * Original: 0x000539E0 - 0x00053A37 (87 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000539E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000539E0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053A0C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000539EE: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053A32; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_000539FD: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(esp + 4);
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 8); /* comiss */
    goto loc_00053A28;

loc_00053A0C: ;
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053A32; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 8)) */

loc_00053A1B: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */

loc_00053A28: ;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053A32; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_00053A2A: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

loc_00053A32: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00053A50
 * Original: 0x00053A50 - 0x00053ABA (106 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00053A50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = MEM32(esp + 4);
    MEMF(esp) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = 0x7AB84C;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00053AE0
 * Original: 0x00053AE0 - 0x00053AE5 (5 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053AE0(void)
{

loc_00053AE0: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00053AF0
 * Original: 0x00053AF0 - 0x00053B78 (136 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00053AF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00053B08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00053B05u); } /* indirect call */
    }

loc_00053B08: ;
    ecx = MEM32(esp + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053B3C; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00053B38: ;
    SET_LO8(eax, 1);
    goto loc_00053B3E;

loc_00053B3C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00053B3E: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053B5C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00053B48: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00053B67; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00053B52: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00053B5C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053B52; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 8)) */

loc_00053B67: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00053B52; /* jne: not equal / not zero */

loc_00053B6B: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00053BA0
 * Original: 0x00053BA0 - 0x00053C2F (143 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053BA0(void)
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

loc_00053BA0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 4;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00053BE3u); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_00053BE3: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esp);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x1C);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    MEM32(esp + 0x10) = ecx;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */
    MEM32(esp + 0x14) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00053C60
 * Original: 0x00053C60 - 0x00053C65 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053C60(void)
{

loc_00053C60: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00053C70
 * Original: 0x00053C70 - 0x00053DF0 (384 bytes, 122 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00053C70: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x7AB700)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053C9A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00053C8D: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    goto loc_00053CA1;

loc_00053C9A: ;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi); /* comiss */

loc_00053CA1: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053CA7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi)) */

loc_00053CA3: ;
    SET_LO8(edx, 1);
    goto loc_00053CA9;

loc_00053CA7: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00053CA9: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053CC1; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00053CB3: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    goto loc_00053CC9;

loc_00053CC1: ;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 8); /* comiss */

loc_00053CC9: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053CCF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 8)) */

loc_00053CCB: ;
    SET_LO8(eax, 1);
    goto loc_00053CD1;

loc_00053CCF: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00053CD1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00053DE7; /* je: equal / zero */

loc_00053CD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00053DE7; /* je: equal / zero */

loc_00053CE1: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi); /* subss */
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053CF7; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00053CF2: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00053CFE;

loc_00053CF7: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00053CFE: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053D2E; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_00053D08: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm1 = xmm3; /* movaps */
    if ((_fca >= _fcb)) goto loc_00053D27; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00053D24: ;
    xmm1 = xmm0; /* movaps */

loc_00053D27: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    goto loc_00053D73;

loc_00053D2E: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 8); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053D42; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00053D3D: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00053D49;

loc_00053D42: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00053D49: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053D8A; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_00053D4E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm1 = xmm3; /* movaps */
    if ((_fca >= _fcb)) goto loc_00053D6E; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00053D6B: ;
    xmm1 = xmm0; /* movaps */

loc_00053D6E: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */

loc_00053D73: ;
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053D7B; /* jb: below (unsigned <) (xmm4.f[0] vs xmm2.f[0]) */

loc_00053D78: ;
    xmm0 = xmm3; /* movaps */

loc_00053D7B: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00053D88; /* jnp: not parity */

loc_00053D84: ;
    SET_LO8(ebx, 1);
    goto loc_00053D8A;

loc_00053D88: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00053D8A: ;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00053D95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00053D92u); } /* indirect call */
    }

loc_00053D95: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    POP32(esp, esi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00053DC7; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00053DC3: ;
    SET_LO8(eax, 1);
    goto loc_00053DC9;

loc_00053DC7: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00053DC9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00053DDE; /* jne: not equal / not zero */

loc_00053DCE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00053DDE; /* jne: not equal / not zero */

loc_00053DD2: ;
    eax = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00053DDE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00053DE7: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00053E50
 * Original: 0x00053E50 - 0x0005412D (733 bytes, 186 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053E50(void)
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

loc_00053E50: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x5C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x5C);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    PUSH32(esp, edi);
    edi = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 8); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0xC); /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 8); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0xC); /* subss */
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB700); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00053EECu); RECOMP_ABI_CALL(0x00026EAFu, sub_00026EAF); /* call 0x00026EAF */

loc_00053EEC: ;
    SET_LO8(ebx, MEM8(esp + 0x80));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00053FEB; /* jne: not equal / not zero */

loc_00053EFF: ;
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x2C;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00053F3Cu); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_00053F3C: ;
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if (CMP_EQ(_fa, _fb)) goto loc_00053FBC; /* je: equal / zero */

loc_00053F89: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054017; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00053F92: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x50);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    goto loc_00054017;

loc_00053FBC: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054017; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00053FC1: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x50);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x54);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x58);
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = ecx;
    goto loc_00054017;

loc_00053FEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054014; /* jne: not equal / not zero */

loc_00053FEF: ;
    eax = MEM32(esp + 0x68);
    fp_push(MEMF(0x7AB868)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00054014: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */

loc_00054017: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm2 = xmm0; /* movaps */
    if (CMP_EQ(_fa, _fb)) goto loc_00054031; /* je: equal / zero */

loc_0005402E: ;
    xmm2 = xmm5; /* movaps */

loc_00054031: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm1 = xmm0; /* movaps */
    if ((_fca >= _fcb)) goto loc_00054042; /* jae: above or equal (unsigned >=) (xmm6.f[0] vs xmm4.f[0]) */

loc_0005403F: ;
    xmm1 = xmm5; /* movaps */

loc_00054042: ;
    xmm3 = XMM_SCALAR(MEMF(0x7AB700)); /* movss */
    eax = MEM32(esp + 0x68);
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 4); /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 4);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEM32(eax + 4) = edx;
    if ((_fca >= _fcb)) goto loc_00054077; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00054074: ;
    xmm0 = xmm5; /* movaps */

loc_00054077: ;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0xC); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 4); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi); /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x6C) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x6C) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x60)); /* fdiv dword ptr [esp + 0x60] */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000541F0
 * Original: 0x000541F0 - 0x00054276 (134 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000541F0(void)
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

loc_000541F0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(0x8E99B4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x7AA820); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB6F8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054271; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00054246: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005426B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0005424E: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AB86C); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x7AB6FC)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005426B; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00054267: ;
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_0005426B: ;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */

loc_00054271: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000542A0
 * Original: 0x000542A0 - 0x000542D2 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000542A0(void)
{

loc_000542A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000542E0
 * Original: 0x000542E0 - 0x0005430D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000542E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000542E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ecx) = 0x7AB870;
    esi = ecx + 0x330;
    edi = 0xC;

loc_000542F3: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000542FBu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000542FB: ;
    MEM32(esi) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000542F3; /* jne: not equal / not zero */

loc_0005430A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00054320
 * Original: 0x00054320 - 0x00054321 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054320(void)
{

loc_00054320: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00054330
 * Original: 0x00054330 - 0x00054331 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054330(void)
{

loc_00054330: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00054340
 * Original: 0x00054340 - 0x00054341 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054340(void)
{

loc_00054340: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00054350
 * Original: 0x00054350 - 0x000543B2 (98 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054350(void)
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

loc_00054350: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005436C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00054367: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00054373;

loc_0005436C: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00054373: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005438B; /* jb: below (unsigned <) (xmm3.f[0] vs xmm2.f[0]) */

loc_00054386: ;
    xmm0 = xmm3; /* movaps */
    goto loc_00054392;

loc_0005438B: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_00054392: ;
    eax = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000543D0
 * Original: 0x000543D0 - 0x00054448 (120 bytes, 34 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000543D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000543D0: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm3.f[0]; /* mulss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_000543F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    edx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000543FC; /* jl: less (signed <) */

loc_000543F7: ;
    edx = 0x3B;

loc_000543FC: ;
    edx = edx + edx * 2 + 0xF;
    edx = ecx + edx * 4;
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(edx + 8); /* subss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 4); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00054445; /* ja: above (unsigned >) (xmm3.f[0] vs xmm7.f[0]) */

loc_0005443C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000543F0; /* jl: less (signed <) */

loc_00054442: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00054445: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00054470
 * Original: 0x00054470 - 0x00054471 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054470(void)
{

loc_00054470: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00054480
 * Original: 0x00054480 - 0x0005449C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00054480: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005448E; /* jl: less (signed <) */

loc_00054489: ;
    eax = 0x3B;

loc_0005448E: ;
    ecx = MEM32(0x8E936C);
    eax = eax + eax * 2 + 0xF;
    eax = ecx + eax * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_000544B0
 * Original: 0x000544B0 - 0x000544E3 (51 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000544B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000544B0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000544DF; /* je: equal / zero */

loc_000544BA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7AB874);
    ecx = esi;
    PUSH32(esp, 0x000544CCu); RECOMP_ABI_CALL(0x00020717u, sub_00020717); /* call 0x00020717 */

loc_000544CC: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000544D7u); RECOMP_ABI_CALL(0x000259C4u, sub_000259C4); /* call 0x000259C4 */

loc_000544D7: ;
    ecx = esi;
    PUSH32(esp, 0x000544DEu); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_000544DE: ;
    POP32(esp, esi);

loc_000544DF: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000544F0
 * Original: 0x000544F0 - 0x000544F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000544F0(void)
{

loc_000544F0: ;
    MEM32(ecx + 0x14) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00054500
 * Original: 0x00054500 - 0x0005451B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054500(void)
{

loc_00054500: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054512u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_00054512: ;
    MEM32(esi + 0x14) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00054530
 * Original: 0x00054530 - 0x0005454A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00054530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00054530: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AB334)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054547; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax)) */

loc_00054541: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00054547: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00054550
 * Original: 0x00054550 - 0x00054600 (176 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054550(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00054550: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7AB334)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    MEM32(esp) = 0;
    if ((_fca >= _fcb)) goto loc_000545F6; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax)) */

loc_0005456D: ;
    xmm1 = XMM_SCALAR(MEMF(0x895A00)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005459D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00054584: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005459D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00054589: ;
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0005459D: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000545BD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000545A2: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = esp + 0xC;
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000545BD: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000545E1; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000545C6: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    eax = esp + 0xC;
    xmm2 = xmm1; /* movaps */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000545E1: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    eax = esp + 0xC;

loc_000545F6: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00054630
 * Original: 0x00054630 - 0x0005465C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00054630: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    PUSH32(esp, esi);
    edx = eax + 4;
    esi = 0x3C;
    edi = edi;

loc_00054640: ;
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00054640; /* jne: not equal / not zero */

loc_00054654: ;
    MEM32(eax) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00054670
 * Original: 0x00054670 - 0x00054806 (406 bytes, 110 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054670(void)
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

loc_00054670: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x895A00)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    esi = ecx;
    ecx = MEM32(ebx + 0x20);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x64); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000546AD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000546A0: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000546AD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000546A5: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_000546DE;

loc_000546AD: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000546BB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000546B2: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_000546D8;

loc_000546BB: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000546CD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000546C4: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_000546D8;

loc_000546CD: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_000546D8: ;
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */

loc_000546DE: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000546EDu); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_000546ED: ;
    SET_LO8(ecx, MEM8(0x8E937C));
    eax = 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005471D; /* jne: not equal / not zero */

loc_000546FF: ;
    ecx = MEM32(0x8E937C);
    xmm0 = XMM_SCALAR(MEMF(0x7AB88C)); /* movss */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8E937C) = ecx;
    MEMF(0x8E9378) = xmm0.f[0]; /* movss */

loc_0005471D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB888)); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00054732u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_00054732: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(0x7AB884)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054777; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00054756: ;
    xmm1 = XMM_SCALAR(MEMF(0x8E9378)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB888)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm3 = xmm0; /* movaps */
    goto loc_0005477D;

loc_00054777: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_0005477D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x895A00)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000547A8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0005479B: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000547A8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000547A0: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_000547D9;

loc_000547A8: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000547B6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000547AD: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_000547D3;

loc_000547B6: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000547C8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000547BF: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_000547D3;

loc_000547C8: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_000547D3: ;
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */

loc_000547D9: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_00054870
 * Original: 0x00054870 - 0x000548F7 (135 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00054870: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x895A00)); /* movss */
    eax = ecx;
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEM32(eax) = ecx;
    MEM8(eax + 4) = LO8(ecx);
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_000548AB; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0005489B: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    if ((_fca >= _fcb)) goto loc_000548AB; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000548A7: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_000548AB: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_000548C8; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000548B8: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    if ((_fca >= _fcb)) goto loc_000548C8; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000548C4: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_000548C8: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000548DE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000548D2: ;
    xmm0 = xmm1; /* movaps */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

loc_000548DE: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000548EE; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000548EA: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_000548EE: ;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00054920
 * Original: 0x00054920 - 0x0005493B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054920(void)
{

loc_00054920: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054932u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_00054932: ;
    MEM32(esi + 0x14) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00054950
 * Original: 0x00054950 - 0x00054978 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00054950: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054963; /* jl: less (signed <) */

loc_0005495C: ;
    eax = MEM32(edx * 4 + 0x8E8EB8);

loc_00054963: ;
    edx = MEM32(eax + 0x20);
    eax = MEM32(edx + 0x64);
    MEM32(ecx + 0x10) = eax;
    edx = eax;
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(ecx + 0x10);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00054990
 * Original: 0x00054990 - 0x000549BC (44 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054990(void)
{

loc_00054990: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(eax) = 0x7AB890;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000549D0
 * Original: 0x000549D0 - 0x00054A07 (55 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000549D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000549D0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000549EC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000549DE: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    goto loc_000549F8;

loc_000549EC: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(esp + 8);
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */

loc_000549F8: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054A02; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_000549FA: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

loc_00054A02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00054A20
 * Original: 0x00054A20 - 0x00054A83 (99 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00054A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00054A20: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054A7E; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 8)) */

loc_00054A2F: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054A7E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_00054A3A: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm1 = xmm2; /* movaps */
    if ((_fca >= _fcb)) goto loc_00054A60; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00054A5D: ;
    xmm1 = xmm0; /* movaps */

loc_00054A60: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054A6D; /* jb: below (unsigned <) (xmm4.f[0] vs xmm3.f[0]) */

loc_00054A6A: ;
    xmm0 = xmm2; /* movaps */

loc_00054A6D: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00054A7E; /* jp: parity */

loc_00054A76: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

loc_00054A7E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00054AA0
 * Original: 0x00054AA0 - 0x00054AD9 (57 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054AA0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00054AA0: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_00054ABD; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00054AB5: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00054ABD: ;
    eax = MEM32(esp + 4);
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00054AF0
 * Original: 0x00054AF0 - 0x00054B9F (175 bytes, 45 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054AF0(void)
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

loc_00054AF0: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(edx); /* subss */
    xmm1 = xmm3; /* movaps */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00054B21; /* jp: parity */

loc_00054B14: ;
    fp_push(MEMF(0x7AACB4)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00054B21: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edx + 8); /* subss */
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 4); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edx + 4); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00054BD0
 * Original: 0x00054BD0 - 0x00054BE9 (25 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054BD0(void)
{

loc_00054BD0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054BE6u); RECOMP_ABI_CALL(0x00030B12u, sub_00030B12); /* call 0x00030B12 */

loc_00054BE6: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00054BF0
 * Original: 0x00054BF0 - 0x00054C09 (25 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054BF0(void)
{

loc_00054BF0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054C06u); RECOMP_ABI_CALL(0x00030B12u, sub_00030B12); /* call 0x00030B12 */

loc_00054C06: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00054C10
 * Original: 0x00054C10 - 0x00055223 (1555 bytes, 358 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00054C10: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7AB870;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    eax = esi + 0x3C;
    ecx = 0x3C;
    goto loc_00054C60;

    /* nop */

loc_00054C60: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00054C60; /* jne: not equal / not zero */

loc_00054C74: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AB8B8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AA7D8)); /* movss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x38) = edi;
    MEMF(esi + 0x30C) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0x310) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x895A18)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB8B4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x318) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB8B0)); /* movss */
    MEMF(esi + 0x324) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x314) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x31C) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x328) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB8AC)); /* movss */
    MEMF(esi + 0x32C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB6DC)); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    MEMF(esi + 0x320) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00054D24u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00054D24: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054D5D; /* je: equal / zero */

loc_00054D2B: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x318)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x320)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEM32(eax) = 0x7AB830;
    MEM32(esp + 0x10) = eax;
    goto loc_00054D61;

loc_00054D5D: ;
    MEM32(esp + 0x10) = edi;

loc_00054D61: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00054D69u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00054D69: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054DA5; /* je: equal / zero */

loc_00054D70: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x318)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x320); /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    MEM32(eax) = 0x7AB830;
    MEM32(esp + 0x14) = eax;
    goto loc_00054DA9;

loc_00054DA5: ;
    MEM32(esp + 0x14) = edi;

loc_00054DA9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00054DB1u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00054DB1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054E1F; /* je: equal / zero */

loc_00054DB8: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x320)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x31C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x318)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = ecx;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    MEM32(eax) = 0x7AB84C;
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x18) = eax;
    goto loc_00054E23;

loc_00054E1F: ;
    MEM32(esp + 0x18) = edi;

loc_00054E23: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00054E2Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00054E2B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054E9C; /* je: equal / zero */

loc_00054E32: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x31C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x318)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x320); /* subss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    MEM32(eax) = 0x7AB84C;
    MEMF(eax + 0x14) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x1C) = eax;
    goto loc_00054EA0;

loc_00054E9C: ;
    MEM32(esp + 0x1C) = edi;

loc_00054EA0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00054EA8u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00054EA8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054EE9; /* je: equal / zero */

loc_00054EAF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x328)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x32C); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x324)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(eax) = 0x7AB7F4;
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = eax;
    goto loc_00054EED;

loc_00054EE9: ;
    MEM32(esp + 0x20) = edi;

loc_00054EED: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00054EF5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00054EF5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054F3F; /* je: equal / zero */

loc_00054EFC: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x328)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x32C); /* subss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = xmm0; /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x324); /* subss */
    MEM32(eax) = 0x7AB7F4;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x24) = eax;
    goto loc_00054F43;

loc_00054F3F: ;
    MEM32(esp + 0x24) = edi;

loc_00054F43: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00054F4Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00054F4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054F8C; /* je: equal / zero */

loc_00054F52: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x324)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x32C); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x328)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(eax) = 0x7AB890;
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x28) = eax;
    goto loc_00054F90;

loc_00054F8C: ;
    MEM32(esp + 0x28) = edi;

loc_00054F90: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00054F98u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00054F98: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054FE2; /* je: equal / zero */

loc_00054F9F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x324)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x32C); /* subss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = xmm0; /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x328); /* subss */
    MEM32(eax) = 0x7AB890;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x2C) = eax;
    goto loc_00054FE6;

loc_00054FE2: ;
    MEM32(esp + 0x2C) = edi;

loc_00054FE6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00054FEEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00054FEE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055055; /* je: equal / zero */

loc_00054FF5: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x310)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x314)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x32C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax) = 0x7AB810;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = ecx;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    ebp = eax;
    goto loc_00055057;

loc_00055055: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00055057: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0005505Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0005505F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000550C9; /* je: equal / zero */

loc_00055066: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x314)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x32C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x310); /* subss */
    MEM32(eax) = 0x7AB810;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    ebx = eax;
    goto loc_000550CB;

loc_000550C9: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000550CB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000550D3u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000550D3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005513B; /* je: equal / zero */

loc_000550DA: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x310)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x32C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x314); /* subss */
    MEM32(eax) = 0x7AB810;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = ecx;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    edi = eax;

loc_0005513B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00055144u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00055144: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000551AF; /* je: equal / zero */

loc_0005514B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x32C)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x310); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x314); /* subss */
    MEM32(eax) = 0x7AB810;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    goto loc_000551B1;

loc_000551AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000551B1: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0x330) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0x334) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0x338) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 0x33C) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0x340) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(esi + 0x344) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esi + 0x358) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x35C) = eax;
    MEM32(esi + 0x350) = ebp;
    MEM32(esi + 0x354) = ebx;
    MEM32(esi + 0x348) = ecx;
    MEM32(esi + 0x34C) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000553B0
 * Original: 0x000553B0 - 0x000553F5 (69 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000553B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000553B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebx) = 0x7AB870;
    esi = ebx + 0x330;
    edi = 0xC;

loc_000553C6: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000553CEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000553CE: ;
    MEM32(esi) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000553C6; /* jne: not equal / not zero */

loc_000553DD: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000553ED; /* je: equal / zero */

loc_000553E4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000553EAu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000553EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000553ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00055410
 * Original: 0x00055410 - 0x000558F3 (1251 bytes, 346 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055410(void)
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

loc_00055410: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    PUSH32(esp, edi);
    ebx = ecx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005542D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00055429: ;
    SET_LO8(edx, 1);
    goto loc_0005542F;

loc_0005542D: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0005542F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005543D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00055439: ;
    SET_LO8(ecx, 1);
    goto loc_0005543F;

loc_0005543D: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0005543F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xC); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x895A00)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00055485; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00055480: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000554A4; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00055485: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00055490; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0005548A: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000554A4;

loc_00055490: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000554A4; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000554A0: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000554A4: ;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000554B8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000554B4: ;
    SET_LO8(eax, 1);
    goto loc_000554BA;

loc_000554B8: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000554BA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000554C3; /* jne: not equal / not zero */

loc_000554BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

loc_000554C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000554D7; /* je: equal / zero */

loc_000554C7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = 0x8F9608;
    if (CMP_NE(_fa, _fb)) goto loc_000554E5; /* jne: not equal / not zero */

loc_000554D0: ;
    eax = 0x8F9600;
    goto loc_000554E5;

loc_000554D7: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = 0x8F95B0;
    if (CMP_NE(_fa, _fb)) goto loc_000554E5; /* jne: not equal / not zero */

loc_000554E0: ;
    eax = 0x8F95EC;

loc_000554E5: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000554FF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000554FA: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0005551B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000554FF: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005550A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00055504: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0005551B;

loc_0005550A: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0005551B; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00055517: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0005551B: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00055530u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00055530: ;
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00055545; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00055540: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0005554C;

loc_00055545: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0005554C: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AB8BC); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x895A00)); /* movss */
    xmm5 = xmm0; /* movaps */
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00055572; /* jb: below (unsigned <) (xmm5.f[0] vs xmm2.f[0]) */

loc_0005556D: ;
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00055591; /* ja: above (unsigned >) (xmm1.f[0] vs xmm5.f[0]) */

loc_00055572: ;
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005557D; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm2.f[0]) */

loc_00055577: ;
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    goto loc_00055591;

loc_0005557D: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00055591; /* jae: above or equal (unsigned >=) (xmm5.f[0] vs xmm0.f[0]) */

loc_0005558D: ;
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */

loc_00055591: ;
    xmm7 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm5.f[0]; /* divss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000555E1; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm3.f[0]) */

loc_000555BD: ;
    _fca = xmm6.f[0]; _fcb = MEMF(0x8F9600); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000555D3; /* jb: below (unsigned <) (xmm6.f[0] vs MEMF(0x8F9600)) */

loc_000555C6: ;
    _fca = xmm3.f[0]; _fcb = MEMF(0x8F95B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000555E1; /* jnp: not parity */

loc_000555D3: ;
    xmm4 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */

loc_000555E1: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000555EB; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000555E6: ;
    xmm3 = xmm0; /* movaps */
    goto loc_000555F2;

loc_000555EB: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_000555F2: ;
    edi = MEM32(esp + 0x38);
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00055602; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_000555FF: ;
    xmm3 = xmm0; /* movaps */

loc_00055602: ;
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00055619; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00055614: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00055638; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00055619: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00055624; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0005561E: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00055638;

loc_00055624: ;
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00055638; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm6.f[0]) */

loc_00055634: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00055638: ;
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    xmm6 = xmm0; /* movaps */
    _fca = xmm6.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005564F; /* jb: below (unsigned <) (xmm6.f[0] vs xmm2.f[0]) */

loc_0005564A: ;
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0005566E; /* ja: above (unsigned >) (xmm1.f[0] vs xmm6.f[0]) */

loc_0005564F: ;
    _fca = xmm6.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005565A; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm2.f[0]) */

loc_00055654: ;
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    goto loc_0005566E;

loc_0005565A: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0005566E; /* jae: above or equal (unsigned >=) (xmm6.f[0] vs xmm0.f[0]) */

loc_0005566A: ;
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */

loc_0005566E: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    edx = MEM32(esp + 0x40);
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005578E; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00055684: ;
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00055695; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00055690: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000556B4; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00055695: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000556A0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0005569A: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000556B4;

loc_000556A0: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000556B4; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000556B0: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000556B4: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000556CA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000556C5: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000556E9; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000556CA: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000556D5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000556CF: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000556E9;

loc_000556D5: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000556E9; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000556E5: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000556E9: ;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xC); /* addss */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x20) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    ecx = MEM32(edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00055758; /* jl: less (signed <) */

loc_00055753: ;
    ecx = 0x3B;

loc_00055758: ;
    xmm7 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    eax = ecx + ecx * 2;
    ecx = edx + eax * 4 + 4;
    eax = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x28);
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEM32(ecx + 8) = eax;
    if ((_fca > _fcb)) goto loc_00055684; /* ja: above (unsigned >) (xmm3.f[0] vs xmm4.f[0]) */

loc_0005578E: ;
    xmm4.f[0] = xmm4.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x30); /* cvttss2si */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000557E5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000557E0: ;
    xmm3 = xmm0; /* movaps */
    goto loc_000557EC;

loc_000557E5: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_000557EC: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000557FE; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000557F6: ;
    MEMF(esp + 0x38) = xmm7.f[0]; /* movss */
    goto loc_0005580C;

loc_000557FE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */

loc_0005580C: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0005581E; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00055816: ;
    xmm7 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_0005581E: ;
    MEMF(esp + 0x30) = xmm6.f[0]; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005583E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00055839: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00055845;

loc_0005583E: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00055845: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005585F; /* jb: below (unsigned <) (xmm6.f[0] vs xmm2.f[0]) */

loc_0005585A: ;
    xmm0 = xmm6; /* movaps */
    goto loc_00055866;

loc_0005585F: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */

loc_00055866: ;
    ecx = MEM32(esp + 0x3C);
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(ecx) = edx;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x34);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 8) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(eax) = ecx;
    POP32(esp, edi);
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    POP32(esp, esi);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00055A30
 * Original: 0x00055A30 - 0x00055B14 (228 bytes, 72 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00055A30: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fa == 0)) goto loc_00055B05; /* je: equal / zero */

loc_00055A40: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00055ABC; /* je: equal / zero */

loc_00055A45: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x895A00)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_00055A68; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00055A58: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    if ((_fca >= _fcb)) goto loc_00055A68; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00055A64: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_00055A68: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_00055A85; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00055A75: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    if ((_fca >= _fcb)) goto loc_00055A85; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00055A81: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_00055A85: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00055A9F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00055A8F: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEM8(esi + 4) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00055A9F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00055AAF; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00055AAB: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_00055AAF: ;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEM8(esi + 4) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00055ABC: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00055AE9; /* jl: less (signed <) */

loc_00055AC8: ;
    eax = MEM32(ecx * 4 + 0x8E8EB8);
    ecx = MEM32(eax + 0x20);
    edx = MEM32(ecx + 0x64);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0xC) = edx;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 8) = eax;
    MEM8(esi + 4) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00055AE9: ;
    eax = MEM32(eax + 0x20);
    ecx = MEM32(eax + 0x64);
    MEM32(esi + 0x10) = ecx;
    edx = ecx;
    MEM32(esi + 0xC) = edx;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 8) = eax;
    MEM8(esi + 4) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00055B05: ;
    ecx = esi;
    PUSH32(esp, 0x00055B0Cu); RECOMP_ABI_CALL(0x00011A5Au, sub_00011A5A); /* call 0x00011A5A */

loc_00055B0C: ;
    MEM8(esi + 4) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00055B50
 * Original: 0x00055B50 - 0x0005615B (1547 bytes, 380 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055B50(void)
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

loc_00055B50: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB6FC)); /* movss */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    if ((_fca > _fcb)) goto loc_00056151; /* ja: above (unsigned >) (xmm0.f[0] vs xmm4.f[0]) */

loc_00055B70: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 0x68);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    edx = MEM32(esp + 0x70);
    MEMF(esp + 0x6C) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x6C);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(ebx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    MEM32(esp + 0x50) = ecx;
    ecx = eax + 1;
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x54) = edx;
    MEM32(ebx + 0x34) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_00056151; /* jg: greater (signed >) */

loc_00055BC7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8E9370)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x8E9370) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00055BD5; /* jle: less or equal (signed <=) */

loc_00055BCF: ;
    MEM32(0x8E9370) = ecx;

loc_00055BD5: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    eax = MEM32(0x8E8F84);
    esi = MEM32(eax + 0x20);
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x60);
    eax = MEM32(esp + 0x64);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = eax;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00055DF4; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm3.f[0]) */

loc_00055C3E: ;
    goto loc_00055C50;

loc_00055C40: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    /* nop */

loc_00055C50: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x28); /* cvttss2si */
    ecx = MEM32(ebx + 0x38);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00055C77; /* jl: less (signed <) */

loc_00055C72: ;
    ecx = 0x3B;

loc_00055C77: ;
    eax = MEM32(esp + 0x40);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    ecx = ecx + ecx * 2 + 0xF;
    edx = ebx + ecx * 4;
    ecx = MEM32(esp + 0x44);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x68); /* addss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x6C); /* addss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x70); /* addss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8E99B4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x7AA820); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm2; /* movaps */
    xmm2 = XMM_SCALAR(MEMF(0x7AB6F8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00055D32; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00055D00: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00055D29; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00055D05: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AB86C); /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(0x7AB6FC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00055D29; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00055D23: ;
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */

loc_00055D29: ;
    xmm0 = xmm2; /* movaps */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00055D32: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00055D49u); RECOMP_ABI_CALL(0x00030CC5u, sub_00030CC5); /* call 0x00030CC5 */

loc_00055D49: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm5 = xmm4; /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x6C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00055C40; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00055DF4: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB6FC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x20); /* comiss */
    if ((_fca > _fcb)) goto loc_00056151; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x20)) */

loc_00055E07: ;
    MEM32(esp + 0x20) = 0;
    esi = ebx + 4;
    ebp = ebx + 0x330;

loc_00055E18: ;
    eax = MEM32(esp + 0x74);
    edi = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x5C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x6C);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    edx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x5C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x6C);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x80);
    edx = MEM32(esp + 0x84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x94);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    ecx = edi;
    PUSH32(esp, 0x00055E81u); RECOMP_ABI_CALL(0x00029D7Bu, sub_00029D7B); /* call 0x00029D7B */

loc_00055E81: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055EA0; /* jne: not equal / not zero */

loc_00055E85: ;
    eax = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00055E18; /* jl: less (signed <) */

loc_00055E96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_00055EA0: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00055EA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00055EA5u); } /* indirect call */
    }

loc_00055EA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055F80; /* je: equal / zero */

loc_00055EB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E99D4)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(0x8E99C4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x50);
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x54);
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x68) = eax;
    eax = MEM32(esi);
    MEM32(esp + 0x6C) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x70) = edx;
    edx = MEM32(esi + 8);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x64) = edx;
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x38); /* cvttss2si */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x38) = MEM32(ebx + 0x38) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00055FF7;

loc_00055F80: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x30); /* subss */
    MEM32(esp + 0x5C) = eax;
    eax = ebx + 0x1C;
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x6C) = edx;
    MEM32(esp + 0x70) = eax;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x38); /* cvttss2si */
    edx = MEM32(ebx + 0x38);
    ecx = ebx + 0x38;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00055FF7u); RECOMP_ABI_CALL(0x0003082Eu, sub_0003082E); /* call 0x0003082E */

loc_00055FF7: ;
    ecx = ebx + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00056005u); RECOMP_ABI_CALL(0x000139EAu, sub_000139EA); /* call 0x000139EA */

loc_00056005: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x68); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    ecx = MEM32(esp + 0x58);
    MEM32(esp + 0x64) = eax;
    eax = esp + 0x70;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x68) = ecx;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x74) = edx;
    PUSH32(esp, 0x0005607Au); RECOMP_ABI_CALL(0x000139EAu, sub_000139EA); /* call 0x000139EA */

loc_0005607A: ;
    xmm3 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x74); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x6C); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x70); /* addss */
    MEMF(esp + 0x64) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x64);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x5C);
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    edx = MEM32(esp + 0x60);
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x8E99B4); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7AA820); /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x4C); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB6F8)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 0x60) = edx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00056112; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005610F: ;
    xmm0 = xmm1; /* movaps */

loc_00056112: ;
    edx = MEM32(esp + 0x74);
    esi = MEM32(esp + 0x68);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = esi;
    esi = MEM32(esp + 0x7C);
    MEM32(edx + 4) = esi;
    esi = MEM32(esp + 0x80);
    MEM32(edx + 8) = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x7C);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    ecx = ebx;
    PUSH32(esp, 0x00056151u); RECOMP_ABI_CALL(0x000133A0u, sub_000133A0); /* call 0x000133A0 */

loc_00056151: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000562E0
 * Original: 0x000562E0 - 0x00056327 (71 bytes, 23 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000562E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000562E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x38) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x00056324u); RECOMP_ABI_CALL(0x000133A0u, sub_000133A0); /* call 0x000133A0 */

loc_00056324: ;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00056340
 * Original: 0x00056340 - 0x00056344 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056340(void)
{

loc_00056340: ;
    eax = MEM32(ecx + 0x5C);
    esp += 4; return; /* ret */

}

/**
 * sub_00056350
 * Original: 0x00056350 - 0x00056354 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056350(void)
{

loc_00056350: ;
    eax = MEM32(ecx + 0x60);
    esp += 4; return; /* ret */

}

/**
 * sub_00056360
 * Original: 0x00056360 - 0x00056364 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056360(void)
{

loc_00056360: ;
    eax = MEM32(ecx + 0x64);
    esp += 4; return; /* ret */

}

/**
 * sub_00056370
 * Original: 0x00056370 - 0x00056377 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056370(void)
{

loc_00056370: ;
    eax = ecx + 0x384;
    esp += 4; return; /* ret */

}

/**
 * sub_00056380
 * Original: 0x00056380 - 0x00056387 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056380(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00056380: ;
    fp_push(MEMF(ecx + 0x34C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00056390
 * Original: 0x00056390 - 0x00056398 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056390(void)
{

loc_00056390: ;
    MEM8(ecx + 0x158) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000563A0
 * Original: 0x000563A0 - 0x000563A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000563A0(void)
{

loc_000563A0: ;
    MEM8(ecx + 0x158) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000563B0
 * Original: 0x000563B0 - 0x000563C2 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000563B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000563B0: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000563BF; /* je: equal / zero */

loc_000563B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000563BF; /* je: equal / zero */

loc_000563BC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000563BF: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000563D0
 * Original: 0x000563D0 - 0x000563D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000563D0(void)
{

loc_000563D0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000563E0
 * Original: 0x000563E0 - 0x000563E9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000563E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000563E0: ;
    SET_LO8(eax, MEM8(ecx + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_000563F0
 * Original: 0x000563F0 - 0x000563FD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000563F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000563F0: ;
    eax = MEM32(ecx + 0x3C);
    fp_push(MEMF(0x8E99EC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x30)); /* fmul dword ptr [eax + 0x30] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00056400
 * Original: 0x00056400 - 0x00056407 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056400(void)
{

loc_00056400: ;
    eax = ecx + 0xA0;
    esp += 4; return; /* ret */

}

/**
 * sub_00056410
 * Original: 0x00056410 - 0x00056414 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056410(void)
{

loc_00056410: ;
    eax = ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_00056420
 * Original: 0x00056420 - 0x00056427 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056420(void)
{

loc_00056420: ;
    eax = MEM32(ecx + 0x84);
    esp += 4; return; /* ret */

}

/**
 * sub_00056430
 * Original: 0x00056430 - 0x00056444 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056430: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0005643Du); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0005643D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00056450
 * Original: 0x00056450 - 0x00056464 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056450: ;
    ecx = MEM32(ecx + 0x438);
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00056470
 * Original: 0x00056470 - 0x00056475 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00056470: ;
    g_seh_ebp = ebp; sub_0002CE27(); return; /* tail jmp 0x0002CE27 */

}

/**
 * sub_00056480
 * Original: 0x00056480 - 0x00056487 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056480(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00056480: ;
    fp_push(MEMF(0x7ABC90)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00056490
 * Original: 0x00056490 - 0x000564CE (62 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056490(void)
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

loc_00056490: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x8E9384));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000564B4; /* je: equal / zero */

loc_0005649A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7ABC70)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x895A54); /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000564B4: ;
    xmm0 = XMM_SCALAR(MEMF(0x895A54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7ABC70); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
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
 * sub_000564E0
 * Original: 0x000564E0 - 0x0005655D (125 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000564E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000564E0: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00056515; /* je: equal / zero */

loc_000564E9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00056543; /* jne: not equal / not zero */

loc_000564EC: ;
    eax = MEM32(0x8E8F84);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABC90); /* mulss */
    ecx = MEM32(eax + 0x84);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xF0); /* addss */
    goto loc_00056549;

loc_00056515: ;
    edx = MEM32(0x8E8F84);
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7ABC90); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = MEM32(edx + 0x84);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xF0); /* subss */
    goto loc_00056549;

loc_00056543: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_00056549: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005655A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00056554: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0005655A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00056580
 * Original: 0x00056580 - 0x000565A1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056580: ;
    ecx = MEM32(0x8E9380);
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056591; /* je: equal / zero */

loc_0005658D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005659E; /* jne: not equal / not zero */

loc_00056591: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0xB);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005659E; /* je: equal / zero */

loc_0005659B: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0005659E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000565B0
 * Original: 0x000565B0 - 0x000565C1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000565B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000565B0: ;
    ecx = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(ecx + 0x51));
    eax = 1;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esp += 4; return; /* ret */

}

/**
 * sub_000565D0
 * Original: 0x000565D0 - 0x000565E1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000565D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000565D0: ;
    ecx = MEM32(0x8E9380);
    SET_LO8(edx, MEM8(ecx + 6));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_000565F0
 * Original: 0x000565F0 - 0x00056725 (309 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000565F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000565F0: ;
    xmm5 = XMM_SCALAR(MEMF(0x7ABC70)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x895A4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7ABD68)); /* movss */
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x8E9324)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7ABD64); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    if (CMP_EQ(_fa, _fb)) goto loc_00056721; /* je: equal / zero */

loc_0005663C: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005666B; /* jne: not equal / not zero */

loc_00056645: ;
    SET_LO8(ecx, MEM8(0x8E93B0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 0x30) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056673; /* je: equal / zero */

loc_00056650: ;
    eax = MEM32(eax + 0xF0);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */

loc_00056660: ;
    _fca = xmm5.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00056685; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm4.f[0]) */

loc_00056665: ;
    eax = 8;
    esp += 4; return; /* ret */

loc_0005666B: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056650; /* je: equal / zero */

loc_00056673: ;
    eax = MEM32(eax + 0xF0);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    goto loc_00056660;

loc_00056685: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000566A4; /* jb: below (unsigned <) (xmm3.f[0] vs xmm2.f[0]) */

loc_0005668D: ;
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000566A4; /* jb: below (unsigned <) (xmm2.f[0] vs xmm6.f[0]) */

loc_00056699: ;
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000566A4; /* jb: below (unsigned <) (xmm4.f[0] vs xmm0.f[0]) */

loc_0005669E: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_000566A4: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000566B9; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_000566A9: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000566B9; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_000566AE: ;
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000566B9; /* jb: below (unsigned <) (xmm4.f[0] vs xmm0.f[0]) */

loc_000566B3: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_000566B9: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000566CD; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_000566C2: ;
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000566CD; /* jb: below (unsigned <) (xmm4.f[0] vs xmm0.f[0]) */

loc_000566C7: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000566CD: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000566DD; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000566D2: ;
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000566DD; /* jb: below (unsigned <) (xmm4.f[0] vs xmm0.f[0]) */

loc_000566D7: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_000566DD: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000566F7; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_000566E2: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000566F7; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_000566E7: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000566F7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000566EC: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000566F7; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm5.f[0]) */

loc_000566F1: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_000566F7: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005670C; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_000566FC: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005670C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00056701: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005670C; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm5.f[0]) */

loc_00056706: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_0005670C: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00056721; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00056711: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00056721; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00056716: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00056721; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm5.f[0]) */

loc_0005671B: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_00056721: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00056780
 * Original: 0x00056780 - 0x000567D3 (83 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00056780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00056780: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x84);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x895A54)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABC90); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7ABC70); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xF0); /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000567C0; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000567BB: ;
    xmm1 = xmm2; /* movaps */
    goto loc_000567C5;

loc_000567C0: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x38); /* subss */

loc_000567C5: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000567D0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000567CA: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000567D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000567F0
 * Original: 0x000567F0 - 0x00056847 (87 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000567F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000567F0: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x84);
    xmm1 = XMM_SCALAR(MEMF(0x895A54)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7ABC90); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABC70)); /* movss */
    eax = MEM32(eax + 0x20);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xF0); /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00056834; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0005682F: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00056839;

loc_00056834: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x38); /* subss */

loc_00056839: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00056844; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0005683E: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00056844: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00056860
 * Original: 0x00056860 - 0x000568DE (126 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00056860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00056860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0005688Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005688Cu); } /* indirect call */
    }

loc_0005688F: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000568A0u); RECOMP_ABI_CALL(0x0001AD35u, sub_0001AD35); /* call 0x0001AD35 */

loc_000568A0: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000568AF; /* je: equal / zero */

loc_000568A7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    goto loc_000568B8;

loc_000568AF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */

loc_000568B8: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0xC); /* comiss */
    if ((_fca > _fcb)) goto loc_000568D4; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ebp + 0xC)) */

loc_000568BE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7ABD6C); /* comiss */
    if ((_fca > _fcb)) goto loc_000568D4; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7ABD6C)) */

loc_000568CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000568D4: ;
    eax = 1;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00056900
 * Original: 0x00056900 - 0x00056B33 (563 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056900(void)
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

loc_00056900: ;
    edx = MEM32(0x8F004C);
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056B2F; /* je: equal / zero */

loc_00056914: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056924; /* je: equal / zero */

loc_0005691C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056B2F; /* jne: not equal / not zero */

loc_00056924: ;
    ecx = MEM32(eax + 0xF0);
    edx = MEM32(edx + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 4); /* comiss */
    if ((_fca > _fcb)) goto loc_00056B2F; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx + 4)) */

loc_0005693C: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x30);
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
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0005695Au); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0005695A: ;
    esi = eax;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00056964u); RECOMP_ABI_CALL(0x00028A48u, sub_00028A48); /* call 0x00028A48 */

loc_00056964: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056B0E; /* jne: not equal / not zero */

loc_0005696F: ;
    eax = MEM32(0x8E9380);
    eax = MEM32(eax + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7ABC70); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00056B2E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7ABC70)) */

loc_00056989: ;
    xmm0 = XMM_SCALAR(MEMF(0x7ABC68)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00056B2E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000569A8: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000569C3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000569BB: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_000569CE;

loc_000569C3: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x50); /* subss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_000569CE: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000569DDu); RECOMP_ABI_CALL(0x0001EF1Bu, sub_0001EF1B); /* call 0x0001EF1B */

loc_000569DD: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AA840)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00056B2E; /* jbe: below or equal (unsigned <=) */

loc_000569F5: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00056A10; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00056A0B: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00056A15;

loc_00056A10: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x48); /* subss */

loc_00056A15: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00056A2Bu); RECOMP_ABI_CALL(0x000243E4u, sub_000243E4); /* call 0x000243E4 */

loc_00056A2B: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(0x8E8F84);
    ecx = MEM32(edi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(edi + 0x20);
    eax = MEM32(edx + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00056A5Bu); RECOMP_ABI_CALL(0x00013648u, sub_00013648); /* call 0x00013648 */

loc_00056A5B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00056A73u); RECOMP_ABI_CALL(0x00013648u, sub_00013648); /* call 0x00013648 */

loc_00056A73: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    PUSH32(esp, esi);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00056A8Au); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00056A8A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00056AA0; /* je: equal / zero */

loc_00056A92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056AA0; /* je: equal / zero */

loc_00056A97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056B2E; /* jne: not equal / not zero */

loc_00056AA0: ;
    edx = MEM32(esi + 0x20);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00056AB1u); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_00056AB1: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx + 0x6C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x00056AE3u); RECOMP_ABI_CALL(0x0001DCD8u, sub_0001DCD8); /* call 0x0001DCD8 */

loc_00056AE3: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8E99EC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm1 = xmm0; /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00056B2E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 8)) */

loc_00056B0E: ;
    edx = MEM32(0x8E9380);
    MEM8(edx + 1) = 0;
    eax = MEM32(0x8E9380);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    edx = MEM32(ecx * 4 + 0x8F0040);
    MEM8(edx + 0x158) = 1;

loc_00056B2E: ;
    POP32(esp, esi);

loc_00056B2F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00056BC0
 * Original: 0x00056BC0 - 0x00056D09 (329 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00056BC0: ;
    PUSH32(esp, 0x00056BC5u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00056BC5: ;
    ecx = eax;
    PUSH32(esp, 0x00056BCCu); RECOMP_ABI_CALL(0x0002085Cu, sub_0002085C); /* call 0x0002085C */

loc_00056BCC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056D08; /* jne: not equal / not zero */

loc_00056BD4: ;
    eax = MEM32(0x8E9380);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 1) = LO8(ecx);
    edx = MEM32(0x8E9380);
    MEM8(edx + 4) = LO8(ecx);
    eax = MEM32(0x8E9380);
    MEM8(eax + 0xA) = LO8(ecx);
    eax = MEM32(0x8E9380);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xB);
    MEM8(edx + eax + 2) = LO8(ecx);
    eax = MEM32(0x8E9380);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    edx = MEM32(ecx * 4 + 0x8F0040);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    MEM8(edx + 0x158) = LO8(ebx);
    eax = MEM32(0x8E9380);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xB);
    ecx = MEM32(ecx * 4 + 0x8E904C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00056C29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00056C26u); } /* indirect call */
    }

loc_00056C29: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_00056C4A; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00056C42: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00056C4A: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x895A58)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7ABC90)); /* movss */
    edx = MEM32(eax + 0x84);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABD74)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0xF0); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00056D07; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00056C8E: ;
    eax = MEM32(0x8E9380);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xB);
    MEM8(ecx + eax + 2) = LO8(ebx);
    ecx = MEM32(0x8E9380);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0xB);
    eax = MEM32(edx * 4 + 0x8F0040);
    edx = MEM32(eax);
    SET_LO8(eax, MEM8(eax + 0xD2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0xD2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx + 0xD2) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00056CC5; /* jl: less (signed <) */

loc_00056CBC: ;
    MEM8(ecx + 1) = LO8(ebx);
    ecx = MEM32(0x8E9380);

loc_00056CC5: ;
    edx = MEM32(0x8E8F84);
    xmm3 = XMM_SCALAR(MEMF(0x895A54)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABD70)); /* movss */
    eax = MEM32(edx + 0x84);
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xF0); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00056D07; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00056CF6: ;
    MEM8(ecx + 4) = LO8(ebx);
    eax = MEM32(0x8E9380);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xB);
    MEM8(ecx + eax + 2) = 2;

loc_00056D07: ;
    POP32(esp, ebx);

loc_00056D08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00056D60
 * Original: 0x00056D60 - 0x00056E47 (231 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00056D60: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00056D7A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00056D75: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00056D7F;

loc_00056D7A: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */

loc_00056D7F: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x8E931C); /* comiss */
    if ((_fca > _fcb)) goto loc_00056E01; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x8E931C)) */

loc_00056D88: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00056DB8; /* je: equal / zero */

loc_00056D91: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00056DE0; /* jne: not equal / not zero */

loc_00056D94: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABC90); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7ABD7C); /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00056DE6;

loc_00056DB8: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7ABC90); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7ABD7C); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00056DE6;

loc_00056DE0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_00056DE6: ;
    eax = MEM32(esi + 0xF0);
    xmm1 = XMM_SCALAR(MEMF(0x7ABD78)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = MEMF(eax + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00056E05; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(eax + 0x1C)) */

loc_00056E01: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00056E05: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00056E17; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00056E13: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00056E17: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x00056E24u); RECOMP_ABI_CALL(0x00056860u, sub_00056860); /* call 0x00056860 */

loc_00056E24: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056E42; /* je: equal / zero */

loc_00056E2B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    PUSH32(esp, 0x00056E33u); RECOMP_ABI_CALL(0x00056860u, sub_00056860); /* call 0x00056860 */

loc_00056E33: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056E42; /* je: equal / zero */

loc_00056E3A: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00056E42: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00056E80
 * Original: 0x00056E80 - 0x00056EFA (122 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056E80(void)
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

loc_00056E80: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x30);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056EA5; /* jne: not equal / not zero */

loc_00056E95: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x8E93B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056EA7; /* je: equal / zero */

loc_00056EA0: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00056EA5: ;
    eax = ecx;

loc_00056EA7: ;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edi);
    edi = edx * 4 + 0x8F0040;
    /* nop */

loc_00056EC0: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00056ECBu); RECOMP_ABI_CALL(0x00020E7Eu, sub_00020E7E); /* call 0x00020E7E */

loc_00056ECB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056EED; /* je: equal / zero */

loc_00056ECF: ;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056EED; /* je: equal / zero */

loc_00056ED5: ;
    ecx = MEM32(eax + 0xF0);
    edx = MEM32(ebx + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00056EED; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x1C)) */

loc_00056EEC: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00056EED: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00056EC0; /* jl: less (signed <) */

loc_00056EF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00056F20
 * Original: 0x00056F20 - 0x00056F31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056F20: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x7A998C;
    esp += 4; return; /* ret */

}

/**
 * sub_00056F40
 * Original: 0x00056F40 - 0x00056F57 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056F40: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 4;
    MEM32(eax) = 0x7ABD80;
    esp += 4; return; /* ret */

}

/**
 * sub_00056F60
 * Original: 0x00056F60 - 0x00056F66 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056F60(void)
{

loc_00056F60: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00056F70
 * Original: 0x00056F70 - 0x00056F76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056F70(void)
{

loc_00056F70: ;
    eax = 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00056F80
 * Original: 0x00056F80 - 0x00056FA1 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056F80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    esi = ecx;
    PUSH32(esp, 0x00056F8Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00056F8C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056F9D; /* je: equal / zero */

loc_00056F93: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00056F9Bu); RECOMP_ABI_CALL(0x00037F48u, sub_00037F48); /* call 0x00037F48 */

loc_00056F9B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00056F9D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00056FB0
 * Original: 0x00056FB0 - 0x0005702B (123 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00056FBEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_00056FBE: ;
    eax = MEM32(esi + 0x1C);
    MEM32(esi) = 0x7ABD80;
    eax = eax ^ MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esi + 0x1C);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    eax = MEM32(edi + 0x1C);
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x1C);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    eax = MEM32(edi + 0x1C);
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x1C);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(edi + 0x24);
    MEM32(esi + 0x24) = eax;
    ecx = MEM32(edi + 0x28);
    MEM32(esi + 0x28) = ecx;
    edx = MEM32(edi + 0x2C);
    POP32(esp, edi);
    MEM32(esi + 0x2C) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00057050
 * Original: 0x00057050 - 0x0005708C (60 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057050: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    MEM16(esi + 0xC) = 4;
    MEM32(esi) = 0x7ABD90;
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00057085u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00057085: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000570A0
 * Original: 0x000570A0 - 0x000570CB (43 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000570A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000570A0: ;
    SET_LO16(edx, MEM16(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0xF;
    MEM32(eax) = 0x7ABDA0;
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM16(eax + 0x1E) = LO16(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000570E0
 * Original: 0x000570E0 - 0x000570E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000570E0(void)
{

loc_000570E0: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000570F0
 * Original: 0x000570F0 - 0x000570F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000570F0(void)
{

loc_000570F0: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00057100
 * Original: 0x00057100 - 0x0005713E (62 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057100: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x0005710Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0005710D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057139; /* je: equal / zero */

loc_00057116: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0005711Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_0005711E: ;
    MEM32(esi) = 0x7ABDA0;
    SET_LO16(eax, MEM16(edi + 0x1C));
    MEM16(esi + 0x1C) = LO16(eax);
    SET_LO16(ecx, MEM16(edi + 0x1E));
    POP32(esp, edi);
    MEM16(esi + 0x1E) = LO16(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00057139: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00057150
 * Original: 0x00057150 - 0x0005717B (43 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057150: ;
    SET_LO16(edx, MEM16(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0xF;
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM16(eax + 0x1E) = LO16(edx);
    MEM32(eax) = 0x7ABDB0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00057190
 * Original: 0x00057190 - 0x000571B2 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057190: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0x4E;
    MEM32(eax) = 0x7ABDC0;
    MEM16(eax + 0x1C) = LO16(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000571C0
 * Original: 0x000571C0 - 0x000571C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000571C0(void)
{

loc_000571C0: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000571D0
 * Original: 0x000571D0 - 0x000571D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000571D0(void)
{

loc_000571D0: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_000571E0
 * Original: 0x000571E0 - 0x00057216 (54 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000571E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000571E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x000571EDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000571ED: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057211; /* je: equal / zero */

loc_000571F6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000571FEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000571FE: ;
    MEM32(esi) = 0x7ABDC0;
    SET_LO16(eax, MEM16(edi + 0x1C));
    MEM16(esi + 0x1C) = LO16(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00057211: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00057230
 * Original: 0x00057230 - 0x00057252 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057230: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0x4E;
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM32(eax) = 0x7ABDD0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00057260
 * Original: 0x00057260 - 0x00057290 (48 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057260: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x1C) = LO8(ecx);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 0xC) = 0x1D;
    MEM32(eax) = 0x7ABDE0;
    MEM8(eax + 0x1D) = LO8(edx);
    MEM16(eax + 0x1E) = LO16(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000572A0
 * Original: 0x000572A0 - 0x000572A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000572A0(void)
{

loc_000572A0: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000572B0
 * Original: 0x000572B0 - 0x000572B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000572B0(void)
{

loc_000572B0: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_000572C0
 * Original: 0x000572C0 - 0x00057302 (66 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000572C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000572C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x000572CDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000572CD: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000572FD; /* je: equal / zero */

loc_000572D6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000572DEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000572DE: ;
    MEM32(esi) = 0x7ABDE0;
    SET_LO8(eax, MEM8(edi + 0x1C));
    MEM8(esi + 0x1C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x1D));
    MEM8(esi + 0x1D) = LO8(ecx);
    SET_LO16(edx, MEM16(edi + 0x1E));
    POP32(esp, edi);
    MEM16(esi + 0x1E) = LO16(edx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000572FD: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00057320
 * Original: 0x00057320 - 0x00057350 (48 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057320: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x1C) = LO8(ecx);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 0xC) = 0x1D;
    MEM8(eax + 0x1D) = LO8(edx);
    MEM16(eax + 0x1E) = LO16(ecx);
    MEM32(eax) = 0x7ABDF0;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00057360
 * Original: 0x00057360 - 0x00057371 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057360: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x7ABE00;
    esp += 4; return; /* ret */

}

/**
 * sub_00057380
 * Original: 0x00057380 - 0x00057383 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00057380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057380: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00057390
 * Original: 0x00057390 - 0x00057396 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057390(void)
{

loc_00057390: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000573A0
 * Original: 0x000573A0 - 0x000573CE (46 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000573A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000573A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    edi = ecx;
    PUSH32(esp, 0x000573ADu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000573AD: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000573C9; /* je: equal / zero */

loc_000573B6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000573BEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000573BE: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7ABE00;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000573C9: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000573E0
 * Original: 0x000573E0 - 0x000573FC (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000573E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000573E0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM32(eax) = 0x7ABE10;
    MEM16(eax + 0xC) = LO16(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00057410
 * Original: 0x00057410 - 0x00057504 (244 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00057410: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00057420u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00057420: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000574F5; /* je: equal / zero */

loc_0005742A: ;
    /* nop */

loc_00057430: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005744A; /* jne: not equal / not zero */

loc_00057434: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    edx = MEM32(0x8E8F84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0xA8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000574DE; /* je: equal / zero */

loc_0005744A: ;
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005745F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005745A: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00057464;

loc_0005745F: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */

loc_00057464: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x8E931C); /* comiss */
    if ((_fca > _fcb)) goto loc_000574DE; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x8E931C)) */

loc_0005746D: ;
    xmm0 = XMM_SCALAR(MEMF(0x895A54)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABC90); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7ABC70); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7ABD7C); /* addss */
    eax = MEM32(esi + 0xF0);
    xmm1 = XMM_SCALAR(MEMF(0x7ABD78)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = MEMF(eax + 0x1C); /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000574DE; /* ja: above (unsigned >) (xmm2.f[0] vs MEMF(eax + 0x1C)) */

loc_000574AE: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000574FC; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000574BC: ;
    edi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000574C8u); RECOMP_ABI_CALL(0x00056860u, sub_00056860); /* call 0x00056860 */

loc_000574C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000574DE; /* je: equal / zero */

loc_000574CF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    PUSH32(esp, 0x000574D7u); RECOMP_ABI_CALL(0x00056860u, sub_00056860); /* call 0x00056860 */

loc_000574D7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000574FC; /* jne: not equal / not zero */

loc_000574DE: ;
    PUSH32(esp, 0);
    ecx = esi + 0x200;
    PUSH32(esp, 0x000574EBu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000574EB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00057430; /* jne: not equal / not zero */

loc_000574F5: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000574FC: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00057550
 * Original: 0x00057550 - 0x000575F3 (163 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057550: ;
    edx = MEM32(0x8E9380);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(ecx, MEM8(esi + 0x30));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0xB)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edx + 0xB) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000575E1; /* jne: not equal / not zero */

loc_00057569: ;
    ecx = MEM32(esi + 0xF0);
    SET_LO8(ecx, MEM8(ecx + 0x51));
    esi = 1;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = (uint32_t)(int32_t)SMEM8(edx + 5);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000575E1; /* je: equal / zero */

loc_00057581: ;
    eax = (uint32_t)(int32_t)SMEM8(edx);
    ecx = MEM32(eax * 4 + 0x8F0040);
    MEM32(edx + 0x10) = ecx;
    edx = MEM32(0x8F004C);
    eax = MEM32(edx + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    ecx = esp + 8;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM16(esp + 0x14) = 0x1D;
    MEM8(esp + 0x24) = LO8(eax);
    MEM8(esp + 0x25) = 7;
    MEM16(esp + 0x26) = 0xFFFF;
    MEM32(esp + 8) = 0x7ABDF0;
    PUSH32(esp, 0x000575CBu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000575CB: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x000575D2u); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_000575D2: ;
    ecx = eax;
    PUSH32(esp, 0x000575D9u); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_000575D9: ;
    edx = MEM32(0x8E9380);
    SET_LO8(eax, 1);

loc_000575E1: ;
    MEM8(edx + 5) = LO8(ebx);
    ecx = MEM32(0x8E9380);
    POP32(esp, esi);
    MEM8(ecx + 4) = LO8(ebx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00057620
 * Original: 0x00057620 - 0x0005786A (586 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057620(void)
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

loc_00057620: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8F6A68);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057634; /* jne: not equal / not zero */

loc_0005762B: ;
    eax = MEM32(0x8E9380);
    MEM8(eax + 4) = 0;

loc_00057634: ;
    eax = MEM32(0x8E9380);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057868; /* je: equal / zero */

loc_00057644: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00057777; /* jne: not equal / not zero */

loc_00057651: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0x84);
    xmm0 = XMM_SCALAR(MEMF(0x895A58)); /* movss */
    ecx = MEM32(eax + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABC90); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0xF0); /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00057864; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00057686: ;
    MEM8(eax + 5) = 0;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00057690: ;
    edx = MEM32(0x8E9380);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0xB);
    ecx = MEM32(eax * 4 + 0x8F00F8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000576A7u); RECOMP_ABI_CALL(0x00020E7Eu, sub_00020E7E); /* call 0x00020E7E */

loc_000576A7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057752; /* je: equal / zero */

loc_000576B1: ;
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000576C6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000576C1: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000576CB;

loc_000576C6: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */

loc_000576CB: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x8E931C); /* comiss */
    if ((_fca > _fcb)) goto loc_00057752; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x8E931C)) */

loc_000576D4: ;
    xmm0 = XMM_SCALAR(MEMF(0x895A58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABC90); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7ABD7C); /* addss */
    eax = MEM32(esi + 0xF0);
    xmm1 = XMM_SCALAR(MEMF(0x7ABD78)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = MEMF(eax + 0x1C); /* comiss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00057752; /* ja: above (unsigned >) (xmm2.f[0] vs MEMF(eax + 0x1C)) */

loc_0005770D: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0005773D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005771B: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x00057727u); RECOMP_ABI_CALL(0x00056860u, sub_00056860); /* call 0x00056860 */

loc_00057727: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057752; /* je: equal / zero */

loc_0005772E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    PUSH32(esp, 0x00057736u); RECOMP_ABI_CALL(0x00056860u, sub_00056860); /* call 0x00056860 */

loc_00057736: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057752; /* je: equal / zero */

loc_0005773D: ;
    ecx = MEM32(esi + 0xF0);
    SET_LO8(ecx, MEM8(ecx + 0x51));
    eax = MEM32(0x8E9380);
    SET_LO8(edx, 1);
    { uint32_t _sv=(uint32_t)(LO8(edx)), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        SET_LO8(edx, _sv << _sc);
        _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    MEM8(eax + 5) = MEM8(eax + 5) | LO8(edx);
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00057752: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00057690; /* jl: less (signed <) */

loc_0005775C: ;
    eax = MEM32(0x8E9380);
    SET_LO8(ebx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(eax + 4) = LO8(ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00057777: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00057864; /* jne: not equal / not zero */

loc_00057780: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xB);
    ebx = MEM32(edx * 4 + 0x8F00F8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00057790: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00057798u); RECOMP_ABI_CALL(0x00020E7Eu, sub_00020E7E); /* call 0x00020E7E */

loc_00057798: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005784A; /* je: equal / zero */

loc_000577A2: ;
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000577B7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000577B2: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000577BC;

loc_000577B7: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */

loc_000577BC: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x8E931C); /* comiss */
    if ((_fca > _fcb)) goto loc_0005782E; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x8E931C)) */

loc_000577C5: ;
    xmm0 = XMM_SCALAR(MEMF(0x895A58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABC90); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7ABD7C); /* addss */
    eax = MEM32(esi + 0xF0);
    xmm1 = XMM_SCALAR(MEMF(0x7ABD78)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = MEMF(eax + 0x1C); /* comiss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0005782E; /* ja: above (unsigned >) (xmm2.f[0] vs MEMF(eax + 0x1C)) */

loc_000577FE: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0005784A; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005780C: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x00057818u); RECOMP_ABI_CALL(0x00056860u, sub_00056860); /* call 0x00056860 */

loc_00057818: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005782E; /* je: equal / zero */

loc_0005781F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    PUSH32(esp, 0x00057827u); RECOMP_ABI_CALL(0x00056860u, sub_00056860); /* call 0x00056860 */

loc_00057827: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005784A; /* jne: not equal / not zero */

loc_0005782E: ;
    ecx = MEM32(esi + 0xF0);
    SET_LO8(ecx, MEM8(ecx + 0x51));
    eax = MEM32(0x8E9380);
    SET_LO8(edx, 1);
    { uint32_t _sv=(uint32_t)(LO8(edx)), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        SET_LO8(edx, _sv << _sc);
        _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, MEM8(eax + 5));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(eax + 5) = LO8(ecx);

loc_0005784A: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00057790; /* jl: less (signed <) */

loc_00057854: ;
    eax = MEM32(0x8E9380);
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00057864; /* jne: not equal / not zero */

loc_00057860: ;
    MEM8(eax + 4) = 0;

loc_00057864: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00057868: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00057900
 * Original: 0x00057900 - 0x00057A96 (406 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057900: ;
    ecx = MEM32(0x8E9380);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    SET_LO8(ebx, MEM8(esi + 0x30));
    eax = SX8(LO8(ebx));
    MEM8(eax + ecx + 2) = 0;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(edx * 4 + 0x8F0040);
    PUSH32(esp, 0x0005792Au); RECOMP_ABI_CALL(0x00015CF9u, sub_00015CF9); /* call 0x00015CF9 */

loc_0005792A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057941; /* je: equal / zero */

loc_0005792E: ;
    eax = MEM32(0x8F004C);
    ecx = MEM32(0x8E9380);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xC) = eax;
    goto loc_00057952;

loc_00057941: ;
    edx = MEM32(0x8F004C);
    eax = MEM32(0x8E9380);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = edx;

loc_00057952: ;
    ecx = MEM32(0x8E9380);
    MEM8(ecx + 0xB) = LO8(ebx);
    PUSH32(esp, 0x00057960u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_00057960: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00057A90; /* jne: not equal / not zero */

loc_00057968: ;
    PUSH32(esp, 0x0005796Du); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_0005796D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00057A90; /* jne: not equal / not zero */

loc_00057975: ;
    PUSH32(esp, 0x0005797Au); RECOMP_ABI_CALL(0x0002C643u, sub_0002C643); /* call 0x0002C643 */

loc_0005797A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00057A88; /* jne: not equal / not zero */

loc_00057982: ;
    eax = MEM32(0x8E9380);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000579E8; /* jne: not equal / not zero */

loc_0005798B: ;
    eax = esi;
    PUSH32(esp, 0x00057992u); RECOMP_ABI_CALL(0x00057550u, sub_00057550); /* call 0x00057550 */

loc_00057992: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000579B9; /* jne: not equal / not zero */

loc_00057996: ;
    edx = MEM32(0x8E9380);
    _fa = (uint32_t)(MEM8(edx + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000579B9; /* jne: not equal / not zero */

loc_000579A2: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000579B0u); RECOMP_ABI_CALL(0x00014C50u, sub_00014C50); /* call 0x00014C50 */

loc_000579B0: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000579B9u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000579B9: ;
    ecx = MEM32(0x8E9380);
    MEM8(ecx + 1) = 0;
    edx = MEM32(0x8E9380);
    eax = (uint32_t)(int32_t)SMEM8(edx);
    ecx = MEM32(eax * 4 + 0x8F0040);
    MEM8(ecx + 0x158) = 1;
    ecx = MEM32(0x8E9380);
    POP32(esp, esi);
    MEM8(ecx) = LO8(ebx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000579E8: ;
    MEM8(eax + 4) = 0;
    edx = MEM32(0x8E9380);
    MEM8(edx + 5) = 0;
    ecx = MEM32(0x8E9380);
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00057A88; /* jne: not equal / not zero */

loc_00057A06: ;
    edx = MEM32(esi + 0x28);
    eax = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00057A3A; /* jne: not equal / not zero */

loc_00057A12: ;
    MEM8(ecx + 1) = 0;
    ecx = MEM32(0x8E9380);
    edx = (uint32_t)(int32_t)SMEM8(ecx);
    ecx = MEM32(edx * 4 + 0x8F0040);
    MEM8(ecx + 0x158) = LO8(eax);
    ecx = MEM32(0x8E9380);
    POP32(esp, esi);
    MEM8(ecx) = LO8(ebx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00057A3A: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00057A4Du); RECOMP_ABI_CALL(0x0002212Fu, sub_0002212F); /* call 0x0002212F */

loc_00057A4D: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00057A56u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00057A56: ;
    ecx = MEM32(0x8F004C);
    edx = MEM32(ecx + 4);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x00057A71u); RECOMP_ABI_CALL(0x0003168Eu, sub_0003168E); /* call 0x0003168E */

loc_00057A71: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x00057A7Au); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00057A7A: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00057A81u); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_00057A81: ;
    ecx = eax;
    PUSH32(esp, 0x00057A88u); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_00057A88: ;
    ecx = MEM32(0x8E9380);
    MEM8(ecx) = LO8(ebx);

loc_00057A90: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00057B00
 * Original: 0x00057B00 - 0x00057B2A (42 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00057B00: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00057B29; /* jge: greater or equal (signed >=) */

loc_00057B0F: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00057B19u); RECOMP_ABI_CALL(0x00037840u, sub_00037840); /* call 0x00037840 */

loc_00057B19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_00030E00(); return; /* tail jmp 0x00030E00 */

loc_00057B29: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00057B40
 * Original: 0x00057B40 - 0x00057BB3 (115 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057B40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057B40: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x74;
    PUSH32(esp, eax);
    MEM16(esp + 0x18) = 4;
    MEM32(esp + 0xC) = 0x7ABD90;
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00057B7Eu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00057B7E: ;
    ecx = MEM32(esp + 0x90);
    edx = MEM32(esp + 0x8C);
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x7C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00057BA7u); RECOMP_ABI_CALL(0x00020311u, sub_00020311); /* call 0x00020311 */

loc_00057BA7: ;
    ecx = esp;
    PUSH32(esp, 0x00057BAFu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00057BAF: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00057BD0
 * Original: 0x00057BD0 - 0x00057BF7 (39 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057BD0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp) = 0x7ABE10;
    MEM16(esp + 0xC) = 0x2A;
    PUSH32(esp, 0x00057BF3u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00057BF3: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00057C00
 * Original: 0x00057C00 - 0x00057C27 (39 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057C00: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp) = 0x7ABE10;
    MEM16(esp + 0xC) = 0x2B;
    PUSH32(esp, 0x00057C23u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00057C23: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00057C30
 * Original: 0x00057C30 - 0x00057C57 (39 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057C30: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp) = 0x7ABE10;
    MEM16(esp + 0xC) = 0x28;
    PUSH32(esp, 0x00057C53u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00057C53: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00057C60
 * Original: 0x00057C60 - 0x00057C87 (39 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057C60: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp) = 0x7ABE10;
    MEM16(esp + 0xC) = 0x29;
    PUSH32(esp, 0x00057C83u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00057C83: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00057C90
 * Original: 0x00057C90 - 0x00057DCE (318 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00057C90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x8E904C);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00057CA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00057C9Fu); } /* indirect call */
    }

loc_00057CA2: ;
    ebp = MEM32(esp + 0x1C);
    edx = MEM32(0x8E8F84);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    edi = MEM32(eax * 4 + 0x8F0040);
    ebx = MEM32(edi);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(edx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00057CD5; /* jl: less (signed <) */

loc_00057CCC: ;
    esi = MEM32(eax * 4 + 0x8E9058);
    goto loc_00057CD8;

loc_00057CD5: ;
    esi = MEM32(edi + 0x1C);

loc_00057CD8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057CE7; /* je: equal / zero */

loc_00057CDC: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00057CE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00057CE0u); } /* indirect call */
    }

loc_00057CE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00057CFC; /* jne: not equal / not zero */

loc_00057CE7: ;
    esi = MEM32(edi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00057CFC; /* jne: not equal / not zero */

loc_00057CEE: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00057CFAu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00057CFA: ;
    esi = eax;

loc_00057CFC: ;
    PUSH32(esp, 0x00057D01u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_00057D01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00057D0E; /* jne: not equal / not zero */

loc_00057D05: ;
    PUSH32(esp, 0x00057D0Au); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_00057D0A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057D28; /* je: equal / zero */

loc_00057D0E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00057D28; /* jne: not equal / not zero */

loc_00057D12: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00057D19u); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_00057D19: ;
    ecx = eax;
    PUSH32(esp, 0x00057D20u); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_00057D20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00057D28: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00057D2Eu); RECOMP_ABI_CALL(0x0001BDA2u, sub_0001BDA2); /* call 0x0001BDA2 */

loc_00057D2E: ;
    ecx = MEM32(ebx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM8(esp + 0x14) = 0;
    MEM8(esp + 0x20) = 0;
    PUSH32(esp, 0x00057D45u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_00057D45: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057D51; /* je: equal / zero */

loc_00057D4B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057D56; /* je: equal / zero */

loc_00057D51: ;
    MEM8(esp + 0x10) = 1;

loc_00057D56: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x132);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00057D67u); RECOMP_ABI_CALL(0x000263A1u, sub_000263A1); /* call 0x000263A1 */

loc_00057D67: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0xA8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00057D83; /* jl: less (signed <) */

loc_00057D7A: ;
    eax = MEM32(eax * 4 + 0x8E9058);
    goto loc_00057D88;

loc_00057D83: ;
    eax = MEM32(0x8E9394);

loc_00057D88: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057D97; /* je: equal / zero */

loc_00057D92: ;
    MEM8(esp + 0x1C) = 1;

loc_00057D97: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00057DA8u); RECOMP_ABI_CALL(0x0002DCD7u, sub_0002DCD7); /* call 0x0002DCD7 */

loc_00057DA8: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x132);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00057DB5u); RECOMP_ABI_CALL(0x00020F4Bu, sub_00020F4B); /* call 0x00020F4B */

loc_00057DB5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, 0x00057DBFu); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_00057DBF: ;
    ecx = eax;
    PUSH32(esp, 0x00057DC6u); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_00057DC6: ;
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
 * sub_00057E20
 * Original: 0x00057E20 - 0x00057ED6 (182 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057E20: ;
    eax = MEM32(0x8E9380);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 8);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    SET_LO8(ecx, MEM8(esp + 0x24));
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_00057EA4; /* je: equal / zero */

loc_00057E3D: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00057EA8; /* jne: not equal / not zero */

loc_00057E45: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    MEM32(esp + 4) = 0x7ABE10;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 8) = ebx;
    ecx = esp + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00057E83; /* je: equal / zero */

loc_00057E5D: ;
    MEM16(esp + 0x10) = 0x2A;

loc_00057E64: ;
    PUSH32(esp, 0x00057E69u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00057E69: ;
    SET_LO8(ecx, MEM8(esp + 0x28));
    eax = MEM32(esp + 0x24);

loc_00057E71: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057E93; /* je: equal / zero */

loc_00057E75: ;
    ecx = MEM32(0x8E9380);
    MEM8(ecx + 8) = MEM8(ecx + 8) | LO8(eax);
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00057E83: ;
    MEM16(esp + 0x10) = 0x2B;

loc_00057E8A: ;
    PUSH32(esp, 0x00057E8Fu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00057E8F: ;
    eax = MEM32(esp + 0x24);

loc_00057E93: ;
    ecx = MEM32(0x8E9380);
    SET_LO8(edx, MEM8(ecx + 8));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ecx + 8) = LO8(edx);
    POP32(esp, ebx);

loc_00057EA4: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00057EA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057E71; /* je: equal / zero */

loc_00057EAC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    MEM32(esp + 4) = 0x7ABE10;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 8) = ebx;
    ecx = esp + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00057ECD; /* je: equal / zero */

loc_00057EC4: ;
    MEM16(esp + 0x10) = 0x28;
    goto loc_00057E64;

loc_00057ECD: ;
    MEM16(esp + 0x10) = 0x29;
    goto loc_00057E8A;

}

/**
 * sub_00057F10
 * Original: 0x00057F10 - 0x00057FF9 (233 bytes, 57 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00057F10: ;
    eax = MEM32(0x8E9380);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 8));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057F50; /* je: equal / zero */

loc_00057F27: ;
    ecx = esp + 4;
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 4) = 0x7ABE10;
    MEM16(esp + 0x10) = 0x29;
    PUSH32(esp, 0x00057F47u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00057F47: ;
    eax = MEM32(0x8E9380);
    MEM8(eax + 8) = MEM8(eax + 8) & 0xFD;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00057F50: ;
    edx = MEM32(0x8E9380);
    _fa = (uint32_t)(MEM8(edx + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057F85; /* je: equal / zero */

loc_00057F5C: ;
    ecx = esp + 4;
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 4) = 0x7ABE10;
    MEM16(esp + 0x10) = 0x2B;
    PUSH32(esp, 0x00057F7Cu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00057F7C: ;
    eax = MEM32(0x8E9380);
    MEM8(eax + 8) = MEM8(eax + 8) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00057F85: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    /* nop */

loc_00057F90: ;
    edx = MEM32(0x8E9380);
    MEM8(edx + eax + 0x14) = LO8(ebx);
    edx = MEM32(0x8E9380);
    MEM8(edx + eax + 0x16) = LO8(ecx);
    edx = MEM32(eax * 4 + 0x8F0040);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM8(edx + 0x158) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00057F90; /* jl: less (signed <) */

loc_00057FB8: ;
    eax = MEM32(0x8E9380);
    MEM8(eax + 1) = LO8(ebx);
    ecx = MEM32(0x8E9380);
    MEM8(ecx + 4) = LO8(ebx);
    edx = MEM32(0x8E9380);
    MEM8(edx + 5) = LO8(ebx);
    eax = MEM32(0x8E9380);
    MEM8(eax + 6) = LO8(ebx);
    ecx = MEM32(0x8E9380);
    MEM8(ecx + 9) = LO8(ebx);
    edx = MEM32(0x8E9380);
    MEM8(edx + 7) = LO8(ebx);
    eax = MEM32(0x8E9380);
    MEM8(eax + 0xA) = LO8(ebx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00058040
 * Original: 0x00058040 - 0x00058248 (520 bytes, 124 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00058040: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00058048u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00058048: ;
    ecx = eax;
    PUSH32(esp, 0x0005804Fu); RECOMP_ABI_CALL(0x0002085Cu, sub_0002085C); /* call 0x0002085C */

loc_0005804F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058077; /* je: equal / zero */

loc_00058053: ;
    eax = MEM32(0x8E9380);
    MEM8(eax + 1) = 0;
    ecx = MEM32(0x8E9380);
    edx = (uint32_t)(int32_t)SMEM8(ecx);
    eax = MEM32(edx * 4 + 0x8F0040);
    MEM8(eax + 0x158) = 1;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00058077: ;
    eax = MEM32(0x8F6A68);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x18 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000580A4; /* jne: not equal / not zero */

loc_00058084: ;
    ecx = MEM32(0x8E9380);
    MEM8(ecx + 1) = LO8(ebx);
    edx = MEM32(0x8E9380);
    eax = (uint32_t)(int32_t)SMEM8(edx);
    ecx = MEM32(eax * 4 + 0x8F0040);
    MEM8(ecx + 0x158) = 1;

loc_000580A4: ;
    edx = MEM32(0x8F004C);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000580CD; /* je: equal / zero */

loc_000580AE: ;
    eax = MEM32(0x8E9380);
    MEM8(eax + 1) = LO8(ebx);
    ecx = MEM32(0x8E9380);
    edx = (uint32_t)(int32_t)SMEM8(ecx);
    eax = MEM32(edx * 4 + 0x8F0040);
    MEM8(eax + 0x158) = 1;

loc_000580CD: ;
    eax = MEM32(0x8E9380);
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058214; /* je: equal / zero */

loc_000580DD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000580EC; /* jne: not equal / not zero */

loc_000580E2: ;
    PUSH32(esp, 0x000580E7u); RECOMP_ABI_CALL(0x00056900u, sub_00056900); /* call 0x00056900 */

loc_000580E7: ;
    eax = MEM32(0x8E9380);

loc_000580EC: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 1 (8-bit) */
    edx = 2;
    if (CMP_NE(_fa, _fb)) goto loc_00058137; /* jne: not equal / not zero */

loc_000580F7: ;
    ecx = MEM32(eax + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7ABE20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058137; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7ABE20)) */

loc_00058108: ;
    MEM8(eax + 1) = LO8(edx);
    eax = MEM32(0x8F6A68);
    eax = eax & 0xC000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058132; /* je: equal / zero */

loc_0005811C: ;
    ecx = MEM32(0x8E9380);
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    ecx = MEM32(eax * 4 + 0x8F0040);
    MEM8(ecx + 0x158) = LO8(ebx);

loc_00058132: ;
    eax = MEM32(0x8E9380);

loc_00058137: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00058214; /* jne: not equal / not zero */

loc_00058140: ;
    ecx = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xB) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0005818C; /* je: equal / zero */

loc_00058150: ;
    SET_LO8(edx, MEM8(eax + 8));
    SET_LO8(edx, ~LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058243; /* je: equal / zero */

loc_0005815E: ;
    ecx = esp + 4;
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 4) = 0x7ABE10;
    MEM16(esp + 0x10) = 0x2A;
    PUSH32(esp, 0x0005817Eu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0005817E: ;
    eax = MEM32(0x8E9380);
    MEM8(eax + 8) = MEM8(eax + 8) | 1;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005818C: ;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = esp + 0x24;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM16(esp + 0x30) = 0xF;
    MEM16(esp + 0x40) = 0xFFFF;
    MEM16(esp + 0x42) = LO16(eax);
    MEM32(esp + 0x24) = 0x7ABDB0;
    PUSH32(esp, 0x000581BBu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000581BB: ;
    eax = MEM32(0x8E9380);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    edx = MEM32(ecx * 4 + 0x8F0040);
    eax = MEM32(edx + 0x1C);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    ecx = esp + 4;
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0xC) = ebx;
    MEM16(esp + 0x10) = 0x1D;
    MEM8(esp + 0x20) = LO8(eax);
    MEM8(esp + 0x21) = 8;
    MEM16(esp + 0x22) = 0xFFFF;
    MEM32(esp + 4) = 0x7ABDF0;
    PUSH32(esp, 0x00058201u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00058201: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00058208u); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_00058208: ;
    ecx = eax;
    PUSH32(esp, 0x0005820Fu); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_0005820F: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00058214: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058243; /* je: equal / zero */

loc_0005821A: ;
    ecx = esp + 4;
    MEM16(esp + 0x10) = 0x2B;
    MEM32(esp + 4) = 0x7ABE10;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 8) = ebx;
    PUSH32(esp, 0x0005823Au); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0005823A: ;
    eax = MEM32(0x8E9380);
    MEM8(eax + 8) = MEM8(eax + 8) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00058243: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000582D0
 * Original: 0x000582D0 - 0x000586C3 (1011 bytes, 255 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000582D0(void)
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

loc_000582D0: ;
    eax = MEM32(0x8F6A68);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x64));
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 6 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00058340; /* jne: not equal / not zero */

loc_000582E0: ;
    eax = MEM32(0x8E9380);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 8));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0005831A; /* je: equal / zero */

loc_000582F1: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x10) = 0x7ABE10;
    MEM16(esp + 0x1C) = 0x29;
    PUSH32(esp, 0x00058311u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00058311: ;
    eax = MEM32(0x8E9380);
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 8) = MEM8(eax + 8) & 0xFD;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0005831A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00058320: ;
    edx = MEM32(0x8E9380);
    MEM8(edx + eax + 0x14) = LO8(ebx);
    ecx = MEM32(0x8E9380);
    MEM8(ecx + eax + 0x16) = 0xFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00058320; /* jl: less (signed <) */

loc_0005833B: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x64)) >> 32) & 1);
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00058340: ;
    edx = MEM32(0x8E9380);
    eax = (uint32_t)(int32_t)SMEM8(edx);
    ecx = MEM32(eax * 4 + 0x8F0040);
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = ecx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM8(esp + 0xF) = LO8(ebx);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0x7ABE10;
    PUSH32(esp, edi);

loc_00058376: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0005862A; /* jne: not equal / not zero */

loc_00058380: ;
    ecx = MEM32(esi * 4 + 0x8E904C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0005838Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058389u); } /* indirect call */
    }

loc_0005838C: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x895A54)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x7ABC90)); /* movss */
    edi = eax;
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    eax = MEM32(0x8E8F84);
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABC70)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058531; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000583C5: ;
    ecx = MEM32(eax + 0x84);
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0xF0); /* addss */
    ecx = MEM32(eax + 0x20);
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000583ED; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm3.f[0]) */

loc_000583EB: ;
    goto loc_000583F5;

loc_000583ED: ;
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(ecx + 0x38); /* subss */

loc_000583F5: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058531; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_000583FE: ;
    edx = MEM32(0x8E9380);
    MEM8(0x8E9384) = 1;
    _fa = (uint32_t)(MEM8(edx + esi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + esi + 0x14), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000584E2; /* jne: not equal / not zero */

loc_00058416: ;
    eax = MEM32(esi * 4 + 0x8F0040);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00058424u); RECOMP_ABI_CALL(0x00057410u, sub_00057410); /* call 0x00057410 */

loc_00058424: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000584E0; /* jl: less (signed <) */

loc_0005842C: ;
    PUSH32(esp, 0x00058431u); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_00058431: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00058487; /* jl: less (signed <) */

loc_00058435: ;
    PUSH32(esp, 0x0005843Au); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_0005843A: ;
    eax = MEM32(eax * 4 + 0x8E8FA8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00058487; /* jne: not equal / not zero */

loc_00058449: ;
    edx = MEM32(0x8F6A68);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x600;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000584D9; /* jne: not equal / not zero */

loc_0005845D: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000584D9; /* jge: greater or equal (signed >=) */

loc_0005846C: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00058473u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_00058473: ;
    fp_push(MEMF(0x7ABE24)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000584D9; /* ja: above (unsigned >) */

loc_00058482: ;
    MEM8(esp + 0x13) = 0;

loc_00058487: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00058489: ;
    _fa = (uint32_t)(MEM8(0x8E9384)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8E9384), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00058616; /* jne: not equal / not zero */

loc_00058495: ;
    PUSH32(esp, 0x0005849Au); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_0005849A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0005857D; /* jl: less (signed <) */

loc_000584A2: ;
    PUSH32(esp, 0x000584A7u); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_000584A7: ;
    edx = MEM32(eax * 4 + 0x8E8FA8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00058572; /* jne: not equal / not zero */

loc_000584BA: ;
    eax = MEM32(esi * 4 + 0x8F0040);
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x000584C8u); RECOMP_ABI_CALL(0x00057410u, sub_00057410); /* call 0x00057410 */

loc_000584C8: ;
    ecx = MEM32(0x8E9380);
    MEM8(ecx + esi + 0x16) = LO8(eax);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0005857D;

loc_000584D9: ;
    MEM8(esp + 0x13) = 1;
    goto loc_00058487;

loc_000584E0: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000584E2: ;
    eax = MEM32(0x8E9380);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 8));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00058518; /* je: equal / zero */

loc_000584F3: ;
    ecx = esp + 0x1C;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x1C) = ebp;
    MEM16(esp + 0x28) = 0x29;
    PUSH32(esp, 0x0005850Fu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0005850F: ;
    eax = MEM32(0x8E9380);
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 8) = MEM8(eax + 8) & 0xFD;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00058518: ;
    edx = MEM32(0x8E9380);
    MEM8(edx + esi + 0x14) = LO8(ebx);
    eax = MEM32(0x8E9380);
    MEM8(eax + esi + 0x16) = 0xFF;
    goto loc_00058489;

loc_00058531: ;
    ecx = MEM32(eax + 0x84);
    eax = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xF0); /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058559; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00058554: ;
    xmm3 = xmm1; /* movaps */
    goto loc_0005855E;

loc_00058559: ;
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0x38); /* subss */

loc_0005855E: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058489; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00058567: ;
    MEM8(0x8E9384) = LO8(ebx);
    goto loc_00058495;

loc_00058572: ;
    edx = MEM32(0x8E9380);
    MEM8(edx + esi + 0x16) = 0xFF;

loc_0005857D: ;
    eax = MEM32(0x8E9380);
    _fa = (uint32_t)(MEM8(eax + esi + 0x16)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi + 0x16), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000585D0; /* jl: less (signed <) */

loc_00058588: ;
    MEM8(eax + esi + 0x14) = 1;
    eax = MEM32(0x8E9380);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00058616; /* jne: not equal / not zero */

loc_00058599: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 8));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(edx, ~LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00058616; /* je: equal / zero */

loc_000585A7: ;
    ecx = esp + 0x38;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x38) = ebp;
    MEM16(esp + 0x44) = 0x28;
    PUSH32(esp, 0x000585C3u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000585C3: ;
    eax = MEM32(0x8E9380);
    SET_LO8(ecx, MEM8(eax + 8));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00058613;

loc_000585D0: ;
    MEM8(eax + esi + 0x14) = LO8(ebx);
    eax = MEM32(0x8E9380);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00058616; /* jne: not equal / not zero */

loc_000585E0: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 8));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00058616; /* je: equal / zero */

loc_000585EC: ;
    ecx = esp + 0x54;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x5C) = ebx;
    MEM32(esp + 0x54) = ebp;
    MEM16(esp + 0x60) = 0x29;
    PUSH32(esp, 0x00058608u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00058608: ;
    eax = MEM32(0x8E9380);
    SET_LO8(ecx, MEM8(eax + 8));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00058613: ;
    MEM8(eax + 8) = LO8(ecx);

loc_00058616: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00058376; /* jl: less (signed <) */

loc_00058620: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000586BB; /* je: equal / zero */

loc_0005862A: ;
    eax = MEM32(0x8E9380);
    esi = MEM32(esp + 0x18);
    MEM32(eax + 0x10) = esi;
    PUSH32(esp, 0x0005863Bu); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_0005863B: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x132);
    edx = MEM32(0x8E9380);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + edx + 0x16);
    eax = MEM32(eax * 4 + 0x8E8FA8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    MEM16(esp + 0x72) = LO16(ecx);
    ecx = esp + 0x54;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x5C) = ebx;
    MEM16(esp + 0x60) = 0x1D;
    MEM8(esp + 0x70) = LO8(eax);
    MEM8(esp + 0x71) = 6;
    MEM32(esp + 0x54) = 0x7ABDF0;
    PUSH32(esp, 0x00058686u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00058686: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x0005868Du); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_0005868D: ;
    ecx = eax;
    PUSH32(esp, 0x00058694u); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_00058694: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000586A0;

    /* nop */
    /* nop */

loc_000586A0: ;
    ecx = MEM32(0x8E9380);
    MEM8(ecx + eax + 0x14) = LO8(ebx);
    edx = MEM32(0x8E9380);
    MEM8(edx + eax + 0x16) = 0xFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000586A0; /* jl: less (signed <) */

loc_000586BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x64)) >> 32) & 1);
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000587C0
 * Original: 0x000587C0 - 0x0005898C (460 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000587C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_000587C0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000587C8u); RECOMP_ABI_CALL(0x0002C643u, sub_0002C643); /* call 0x0002C643 */

loc_000587C8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00058988; /* je: equal / zero */

loc_000587D0: ;
    PUSH32(esp, 0x000587D5u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_000587D5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00058811; /* je: equal / zero */

loc_000587D9: ;
    eax = MEM32(0x8E9380);
    SET_LO8(ecx, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000587FD; /* je: equal / zero */

loc_000587E5: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0xA8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000587FD; /* jge: greater or equal (signed >=) */

loc_000587F5: ;
    MEM8(eax + 0xA) = MEM8(eax + 0xA) + 1;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x8E9380);

loc_000587FD: ;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xA), 0x2D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00058811; /* jle: less or equal (signed <=) */

loc_00058803: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x0005880Au); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_0005880A: ;
    ecx = eax;
    PUSH32(esp, 0x00058811u); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_00058811: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00058819u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00058819: ;
    ecx = eax;
    PUSH32(esp, 0x00058820u); RECOMP_ABI_CALL(0x0002A6B8u, sub_0002A6B8); /* call 0x0002A6B8 */

loc_00058820: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00058919; /* jne: not equal / not zero */

loc_00058828: ;
    PUSH32(esp, 0x0005882Du); RECOMP_ABI_CALL(0x00057620u, sub_00057620); /* call 0x00057620 */

loc_0005882D: ;
    edx = MEM32(0x8F004C);
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000588F6; /* je: equal / zero */

loc_0005883D: ;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000588F6; /* jne: not equal / not zero */

loc_00058847: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000588F6; /* je: equal / zero */

loc_00058854: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000588F6; /* je: equal / zero */

loc_0005885C: ;
    esi = MEM32(0x8EFCBC);
    xmm1.f[0] = (float)(int32_t)MEM32(0x8E9A80); /* cvtsi2ss */
    ebx = MEM32(0x8E9A84);
    PUSH32(esp, 0x125);
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    PUSH32(esp, 0x7ABE2C);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    PUSH32(esp, 0x64);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0005888Fu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0005888F: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(edi + 0x438);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB2D0); /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000588BD; /* jne: not equal / not zero */

loc_000588AF: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7ABE28); /* mulss */
    ebx = MEM32(0x8E9A88);

loc_000588BD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000588F6; /* jle: less or equal (signed <=) */

loc_000588C1: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000588F6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000588C6: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000588D8u); RECOMP_ABI_CALL(0x0003168Eu, sub_0003168E); /* call 0x0003168E */

loc_000588D8: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000588E1u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000588E1: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x000588E8u); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_000588E8: ;
    ecx = eax;
    PUSH32(esp, 0x000588EFu); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_000588EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000588F6: ;
    PUSH32(esp, 0x000588FBu); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_000588FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00058919; /* jne: not equal / not zero */

loc_000588FF: ;
    PUSH32(esp, 0x00058904u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00058904: ;
    ecx = eax;
    PUSH32(esp, 0x0005890Bu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_0005890B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00058919; /* je: equal / zero */

loc_0005890F: ;
    PUSH32(esp, 0x00058914u); RECOMP_ABI_CALL(0x000582D0u, sub_000582D0); /* call 0x000582D0 */

loc_00058914: ;
    PUSH32(esp, 0x00058919u); RECOMP_ABI_CALL(0x00058040u, sub_00058040); /* call 0x00058040 */

loc_00058919: ;
    PUSH32(esp, 0x0005891Eu); RECOMP_ABI_CALL(0x0002C643u, sub_0002C643); /* call 0x0002C643 */

loc_0005891E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00058985; /* je: equal / zero */

loc_00058922: ;
    eax = MEM32(0x8F0650);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0005893B; /* je: equal / zero */

loc_0005892B: ;
    eax = MEM32(eax + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00058985; /* je: equal / zero */

loc_00058936: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00058985; /* je: equal / zero */

loc_0005893B: ;
    edx = MEM32(0x8E9380);
    SET_LO8(ecx, MEM8(edx + 6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00058985; /* je: equal / zero */

loc_00058948: ;
    SET_LO8(ebx, MEM8(edx + 7));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0005896E; /* je: equal / zero */

loc_00058955: ;
    esi = MEM32(0x8F004C);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00058985; /* je: equal / zero */

loc_00058960: ;
    edx = (uint32_t)(int32_t)SMEM8(edx + 0xB);
    ecx = SX8(LO8(ecx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00058985; /* jne: not equal / not zero */

loc_0005896E: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF2u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x11)) >> 32) & 1);
    eax = eax + 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005897Eu); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_0005897E: ;
    ecx = eax;
    PUSH32(esp, 0x00058985u); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_00058985: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00058988: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00058A00
 * Original: 0x00058A00 - 0x00058A07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058A00(void)
{

loc_00058A00: ;
    MEM32(ecx) = 0x7AC2BC;
    esp += 4; return; /* ret */

}

/**
 * sub_00058A10
 * Original: 0x00058A10 - 0x00058A2F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058A10: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7AC2BC;
    if (TEST_Z(_fa, _fb)) goto loc_00058A29; /* je: equal / zero */

loc_00058A20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00058A26u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00058A26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00058A29: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00058A40
 * Original: 0x00058A40 - 0x00058A5F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058A40: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 4) = LO8(eax);
    MEM32(ecx + 0xC) = eax;
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEM16(ecx + 0x10) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00058A70
 * Original: 0x00058A70 - 0x00058A7E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00058A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058A70: ;
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058A7B; /* je: equal / zero */

loc_00058A77: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

loc_00058A7B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00058A90
 * Original: 0x00058A90 - 0x00058AB5 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058A90: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 4) = LO8(eax);
    MEM32(ecx + 0xC) = eax;
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEM16(ecx + 0x10) = LO16(eax);
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x2C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00058AC0
 * Original: 0x00058AC0 - 0x00058AF7 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058AC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058AF3; /* je: equal / zero */

loc_00058ACA: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058AF3; /* je: equal / zero */

loc_00058AD1: ;
    eax = MEM32(eax + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00058ADDu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00058ADD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058AF3; /* je: equal / zero */

loc_00058AE4: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00058AF3; /* jne: not equal / not zero */

loc_00058AEC: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00058AF3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00058B10
 * Original: 0x00058B10 - 0x00058B3B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058B10: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 4) = LO8(eax);
    MEM32(ecx + 0xC) = eax;
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEM16(ecx + 0x10) = LO16(eax);
    MEM8(ecx + 0x20) = LO8(eax);
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x30) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00058B50
 * Original: 0x00058B50 - 0x00058B5E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058B50: ;
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058B5B; /* je: equal / zero */

loc_00058B57: ;
    SET_LO8(eax, MEM8(ecx + 0x20));
    esp += 4; return; /* ret */

loc_00058B5B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00058B70
 * Original: 0x00058B70 - 0x00058B7C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058B70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0x20) = LO8(eax);
    MEM8(ecx + 4) = LO8(eax);
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00058B80
 * Original: 0x00058B80 - 0x00058B9D (29 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00058B80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00058B98; /* jl: less (signed <) */

loc_00058B88: ;
    eax = MEM32(eax * 4 + 0x8E8EB8);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00011861(); return; /* tail jmp 0x00011861 */

loc_00058B98: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00058BB0
 * Original: 0x00058BB0 - 0x00058BDD (45 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058BD9; /* je: equal / zero */

loc_00058BBA: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058BD9; /* je: equal / zero */

loc_00058BC1: ;
    eax = MEM32(eax + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00058BCDu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00058BCD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058BD9; /* je: equal / zero */

loc_00058BD4: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00058BD9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00058BF0
 * Original: 0x00058BF0 - 0x00058C2D (61 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058BF0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0x7AC2BC;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 4) = LO8(ecx);
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM16(eax + 0x10) = LO16(ecx);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_00058C40
 * Original: 0x00058C40 - 0x00058C97 (87 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058C40: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x7AC2C8;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 4) = LO8(ecx);
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM16(eax + 0x10) = LO16(ecx);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x2C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00058CB0
 * Original: 0x00058CB0 - 0x00058CCF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058CB0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7AC2BC;
    if (TEST_Z(_fa, _fb)) goto loc_00058CC9; /* je: equal / zero */

loc_00058CC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00058CC6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00058CC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00058CC9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00058CE0
 * Original: 0x00058CE0 - 0x00058DBA (218 bytes, 91 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058D7E; /* je: equal / zero */

loc_00058CEE: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058D7E; /* je: equal / zero */

loc_00058CF9: ;
    eax = MEM32(eax + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00058D05u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00058D05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058D7E; /* je: equal / zero */

loc_00058D0C: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058D7E; /* je: equal / zero */

loc_00058D13: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00058D2E; /* jne: not equal / not zero */

loc_00058D1F: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00058D29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058D26u); } /* indirect call */
    }

loc_00058D29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00058D2E: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00058D58; /* jl: less (signed <) */

loc_00058D36: ;
    eax = MEM32(eax * 4 + 0x8E8EB8);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00058D45u); RECOMP_ABI_CALL(0x00011861u, sub_00011861); /* call 0x00011861 */

loc_00058D45: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058D58; /* je: equal / zero */

loc_00058D49: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00058D53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058D50u); } /* indirect call */
    }

loc_00058D53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00058D58: ;
    ecx = esi;
    PUSH32(esp, 0x00058D5Fu); RECOMP_ABI_CALL(0x0002E86Cu, sub_0002E86C); /* call 0x0002E86C */

loc_00058D5F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00058D72; /* je: equal / zero */

loc_00058D66: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00058D6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058D6Au); } /* indirect call */
    }

loc_00058D6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00058D72: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00058D79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058D76u); } /* indirect call */
    }

loc_00058D79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00058D7E: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058DA8; /* je: equal / zero */

loc_00058D85: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 0x30) (8-bit) */
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00058D9F; /* je: equal / zero */

loc_00058D96: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00058D9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058D98u); } /* indirect call */
    }

loc_00058D9B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00058D9F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00058DA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058DA1u); } /* indirect call */
    }

loc_00058DA4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00058DA8: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00058DB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058DB3u); } /* indirect call */
    }

loc_00058DB6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00058DF0
 * Original: 0x00058DF0 - 0x00058E52 (98 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058DF0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x7AC2D8;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEM8(eax + 4) = LO8(ecx);
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM16(eax + 0x10) = LO16(ecx);
    MEM8(eax + 0x20) = LO8(ecx);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x30) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00058E70
 * Original: 0x00058E70 - 0x00058E8F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058E70: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7AC2BC;
    if (TEST_Z(_fa, _fb)) goto loc_00058E89; /* je: equal / zero */

loc_00058E80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00058E86u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00058E86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00058E89: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00058EA0
 * Original: 0x00058EA0 - 0x00058EC2 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058EA0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0xE;
    MEM32(eax) = 0x7AC2E4;
    MEM16(eax + 0x1C) = LO16(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00058ED0
 * Original: 0x00058ED0 - 0x00058ED6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058ED0(void)
{

loc_00058ED0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00058EE0
 * Original: 0x00058EE0 - 0x00058EE6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058EE0(void)
{

loc_00058EE0: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00058EF0
 * Original: 0x00058EF0 - 0x00058F26 (54 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058EF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x00058EFDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00058EFD: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058F21; /* je: equal / zero */

loc_00058F06: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00058F0Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_00058F0E: ;
    MEM32(esi) = 0x7AC2E4;
    SET_LO16(eax, MEM16(edi + 0x1C));
    MEM16(esi + 0x1C) = LO16(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00058F21: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00058F40
 * Original: 0x00058F40 - 0x00058F70 (48 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058F40: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0x1C) = LO16(ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM16(eax + 0xC) = 0xE;
    MEM32(eax) = 0x7AC2F4;
    MEM8(eax + 0x20) = LO8(edx);
    MEM8(eax + 0x21) = LO8(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00058F80
 * Original: 0x00058F80 - 0x00058FAB (43 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058F80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058F80: ;
    SET_LO16(edx, MEM16(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0xB;
    MEM32(eax) = 0x7AC304;
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM16(eax + 0x1E) = LO16(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00058FC0
 * Original: 0x00058FC0 - 0x00058FC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058FC0(void)
{

loc_00058FC0: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00058FD0
 * Original: 0x00058FD0 - 0x00058FD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058FD0(void)
{

loc_00058FD0: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00058FE0
 * Original: 0x00058FE0 - 0x0005901E (62 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058FE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x00058FEDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00058FED: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059019; /* je: equal / zero */

loc_00058FF6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00058FFEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_00058FFE: ;
    MEM32(esi) = 0x7AC304;
    SET_LO16(eax, MEM16(edi + 0x1C));
    MEM16(esi + 0x1C) = LO16(eax);
    SET_LO16(ecx, MEM16(edi + 0x1E));
    POP32(esp, edi);
    MEM16(esi + 0x1E) = LO16(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00059019: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00059030
 * Original: 0x00059030 - 0x0005905B (43 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059030: ;
    SET_LO16(edx, MEM16(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0xB;
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM16(eax + 0x1E) = LO16(edx);
    MEM32(eax) = 0x7AC314;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00059070
 * Original: 0x00059070 - 0x00059097 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059070: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 0xC) = 0x4D;
    MEM32(eax) = 0x7AC324;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000590A0
 * Original: 0x000590A0 - 0x000590A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000590A0(void)
{

loc_000590A0: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_000590B0
 * Original: 0x000590B0 - 0x000590B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000590B0(void)
{

loc_000590B0: ;
    eax = 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_000590C0
 * Original: 0x000590C0 - 0x000590FA (58 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000590C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000590C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    edi = ecx;
    PUSH32(esp, 0x000590CDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000590CD: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000590F5; /* je: equal / zero */

loc_000590D6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000590DEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000590DE: ;
    MEM32(esi) = 0x7AC324;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x20);
    POP32(esp, edi);
    MEM32(esi + 0x20) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000590F5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00059110
 * Original: 0x00059110 - 0x00059137 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059110: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 0xC) = 0x4D;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax) = 0x7AC334;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00059140
 * Original: 0x00059140 - 0x00059316 (470 bytes, 139 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00059140: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(0x8EACE0);
    SET_LO8(eax, MEM8(ecx + 4));
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00059188; /* je: equal / zero */

loc_0005915A: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = ecx + 0x2C;
    if (CMP_EQ(_fa, _fb)) goto loc_00059188; /* je: equal / zero */

loc_00059164: ;
    eax = MEM32(eax + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00059170u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00059170: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059182; /* je: equal / zero */

loc_00059177: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059260; /* je: equal / zero */

loc_00059182: ;
    ecx = MEM32(0x8EACE0);

loc_00059188: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000592FF; /* ja: above (unsigned >) */

loc_00059195: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x59318); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0005919Cu) goto loc_0005919C;
    if (_jt == 0x000591B2u) goto loc_000591B2;
    if (_jt == 0x000591C8u) goto loc_000591C8;
    if (_jt == 0x000591E8u) goto loc_000591E8;
    if (_jt == 0x00059207u) goto loc_00059207;
    if (_jt == 0x000592FFu) goto loc_000592FF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0005919C: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000591AAu); RECOMP_ABI_CALL(0x0001D5E9u, sub_0001D5E9); /* call 0x0001D5E9 */

loc_000591AA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000592F9;

loc_000591B2: ;
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000591C0u); RECOMP_ABI_CALL(0x0001D5E9u, sub_0001D5E9); /* call 0x0001D5E9 */

loc_000591C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000592F9;

loc_000591C8: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000592FF; /* je: equal / zero */

loc_000591D1: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000591E3u); RECOMP_ABI_CALL(0x0002F6D1u, sub_0002F6D1); /* call 0x0002F6D1 */

loc_000591E3: ;
    goto loc_000592F0;

loc_000591E8: ;
    edx = MEM32(esp + 0x3C);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    ecx = MEM32(ecx + 0xC);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00059202u); RECOMP_ABI_CALL(0x00034915u, sub_00034915); /* call 0x00034915 */

loc_00059202: ;
    goto loc_000592F0;

loc_00059207: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059232; /* je: equal / zero */

loc_0005920C: ;
    PUSH32(esp, 0x00059211u); RECOMP_ABI_CALL(0x0002863Du, sub_0002863D); /* call 0x0002863D */

loc_00059211: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059232; /* je: equal / zero */

loc_00059215: ;
    ecx = MEM32(0x8EACE0);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00059224u); RECOMP_ABI_CALL(0x0001734Cu, sub_0001734C); /* call 0x0001734C */

loc_00059224: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005922Au); RECOMP_ABI_CALL(0x0001133Eu, sub_0001133E); /* call 0x0001133E */

loc_0005922A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000592F9;

loc_00059232: ;
    SET_LO8(eax, MEM8(0x896176));
    SET_LO8(edx, MEM8(0x896177));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    eax = MEM32(esp + 0x3C);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0005925Bu); RECOMP_ABI_CALL(0x0002A942u, sub_0002A942); /* call 0x0002A942 */

loc_0005925B: ;
    goto loc_000592F0;

loc_00059260: ;
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000592BE; /* je: equal / zero */

loc_00059269: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000592F9; /* jne: not equal / not zero */

loc_00059270: ;
    ecx = MEM32(0x8EACE0);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059284; /* je: equal / zero */

loc_0005927B: ;
    PUSH32(esp, 0x00059280u); RECOMP_ABI_CALL(0x0002863Du, sub_0002863D); /* call 0x0002863D */

loc_00059280: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000592F9; /* jne: not equal / not zero */

loc_00059284: ;
    edx = MEM32(esp + 0x3C);
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(edx + 0x39));
    _fa = (uint32_t)(MEM8(0x896177)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x896177), LO8(ebx) (8-bit) */
    MEM16(esp + 0x2C) = LO16(eax);
    SET_LO8(eax, MEM8(0x896176));
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM16(esp + 0x1C) = 0xE;
    MEM32(esp + 0x10) = 0x7AC2F4;
    MEM8(esp + 0x30) = LO8(ecx);
    MEM8(esp + 0x31) = LO8(edx);
    goto loc_000592E8;

loc_000592BE: ;
    ecx = MEM32(0x8EACE0);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000592FF; /* je: equal / zero */

loc_000592CB: ;
    ecx = eax;
    eax = MEM32(esp + 0x3C);
    MEM16(esp + 0x1C) = 0x4D;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x10) = 0x7AC334;

loc_000592E8: ;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;

loc_000592F0: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000592F9u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000592F9: ;
    ecx = MEM32(0x8EACE0);

loc_000592FF: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00059304u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059301u); } /* indirect call */
    }

loc_00059304: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0005930Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059309u); } /* indirect call */
    }

loc_0005930C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00059316
 * Original: 0x00059316 - 0x000593B9 (163 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059316(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059316: ;
    edi = edi;
    RECOMP_UNIMPL("pushfd", 0x00059318u); /* TODO: pushfd */
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }
    _fb = (uint32_t)(0x591B200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x591B200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ebx, HI8(ebx) + HI8(ebx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = edx;
    edx = eax;
    eax = _tmp; }
    _fb = (uint32_t)(0x591E800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x591E800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }
    _fb = (uint32_t)(0x5920700) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5920700;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    eax = ecx;
    MEM32(eax) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_000593C0
 * Original: 0x000593C0 - 0x000593C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000593C0(void)
{

loc_000593C0: ;
    MEM32(ecx) = 0x7AC2BC;
    esp += 4; return; /* ret */

}

/**
 * sub_000593D0
 * Original: 0x000593D0 - 0x000593D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000593D0(void)
{

loc_000593D0: ;
    MEM32(ecx) = 0x7AC2BC;
    esp += 4; return; /* ret */

}

/**
 * sub_000593E0
 * Original: 0x000593E0 - 0x000593E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000593E0(void)
{

loc_000593E0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000593F0
 * Original: 0x000593F0 - 0x000593FF (15 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000593F0(void)
{

loc_000593F0: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(ecx + 0xB8) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00059410
 * Original: 0x00059410 - 0x00059418 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059410(void)
{

loc_00059410: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0xB8);
    esp += 4; return; /* ret */

}

/**
 * sub_00059420
 * Original: 0x00059420 - 0x00059427 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059420(void)
{

loc_00059420: ;
    eax = MEM32(ecx + 0x288);
    esp += 4; return; /* ret */

}

/**
 * sub_00059430
 * Original: 0x00059430 - 0x0005943D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059430(void)
{

loc_00059430: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x288) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00059440
 * Original: 0x00059440 - 0x00059447 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059440(void)
{

loc_00059440: ;
    eax = MEM32(ecx + 0x718);
    esp += 4; return; /* ret */

}

/**
 * sub_00059450
 * Original: 0x00059450 - 0x0005945D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059450(void)
{

loc_00059450: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x718) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00059460
 * Original: 0x00059460 - 0x00059461 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059460(void)
{

loc_00059460: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00059470
 * Original: 0x00059470 - 0x0005947F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059470(void)
{

loc_00059470: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00059490
 * Original: 0x00059490 - 0x0005949C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059490: ;
    eax = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000594A0
 * Original: 0x000594A0 - 0x000594BA (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000594A0(void)
{

loc_000594A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000594C0
 * Original: 0x000594C0 - 0x000594CA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000594C0(void)
{

loc_000594C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000594D0
 * Original: 0x000594D0 - 0x000594D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000594D0(void)
{

loc_000594D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000594E0
 * Original: 0x000594E0 - 0x000594F5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000594E0(void)
{

loc_000594E0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00059500
 * Original: 0x00059500 - 0x00059501 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059500(void)
{

loc_00059500: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00059510
 * Original: 0x00059510 - 0x000595C0 (176 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059510: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0005951Eu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0005951E: ;
    PUSH32(esp, 0x18);
    eax = esi + 0x24;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005952Bu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0005952B: ;
    PUSH32(esp, 0xA0);
    ecx = esi + 0x3C;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0005953Bu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0005953B: ;
    PUSH32(esp, 8);
    edx = esi + 0x154;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0005954Bu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0005954B: ;
    PUSH32(esp, 0x120);
    eax = esi + 0x15C;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005955Eu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0005955E: ;
    eax = MEM32(esi + 0x124);
    ecx = esi + 8;
    MEM32(esi + 0x18) = ecx;
    ecx = esi + 0x124;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esi + 0x10;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x27C) = 0;
    MEM16(esi + 0x280) = LO16(edi);
    MEM16(esi + 0x282) = 0;
    MEM16(esi + 0x284) = 0;
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x12C) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000595A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000595A5u); } /* indirect call */
    }

loc_000595A8: ;
    edx = MEM32(esi + 0xDC);
    ecx = esi + 0xDC;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000595B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000595B4u); } /* indirect call */
    }

loc_000595B7: ;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x5C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000595F0
 * Original: 0x000595F0 - 0x00059601 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000595F0(void)
{

loc_000595F0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(eax + 0x39));
    MEM16(0x8E9610) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00059610
 * Original: 0x00059610 - 0x00059635 (37 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059610(void)
{

loc_00059610: ;
    SET_LO16(eax, MEM16(0x8E9612));
    ecx = MEM32(0x8E8F84);
    MEM16(0x8E9614) = LO16(eax);
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(0x8E9612) = LO16(eax);
    MEM16(ecx + 0xB8) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00059640
 * Original: 0x00059640 - 0x000598D4 (660 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00059640: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(0x8E9388));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000598B0; /* jne: not equal / not zero */

loc_00059656: ;
    MEM32(0x8E9388) = MEM32(0x8E9388) | eax;
    _fa = (uint32_t)(MEM32(0x8E9388)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(ecx, 0xE);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0xA);
    PUSH32(esp, esi);
    esi = 4;
    MEM8(0x89637C) = LO8(ecx);
    MEM8(0x896382) = LO8(ecx);
    ecx = 2;
    MEM16(0x89637A) = LO16(esi);
    MEM16(0x89637E) = LO16(esi);
    MEM16(0x896380) = LO16(edx);
    MEM16(0x896384) = 0x38;
    MEM16(0x896386) = 8;
    MEM8(0x896388) = LO8(ebx);
    MEM16(0x89638A) = 0x5DC;
    MEM16(0x89638C) = 0x40;
    MEM8(0x89638E) = LO8(ebx);
    MEM16(0x896390) = 0x28;
    MEM16(0x896392) = 0x61C;
    MEM8(0x896394) = LO8(ebx);
    MEM16(0x896396) = 0x1C;
    MEM16(0x896398) = 0x644;
    MEM8(0x89639A) = LO8(ebx);
    MEM16(0x89639C) = LO16(esi);
    MEM16(0x89639E) = 0x660;
    MEM8(0x8963A0) = LO8(ecx);
    MEM16(0x8963A2) = LO16(esi);
    MEM16(0x8963A4) = 0x664;
    MEM8(0x8963A6) = LO8(ecx);
    MEM16(0x8963A8) = LO16(esi);
    MEM16(0x8963AA) = 0x678;
    MEM8(0x8963AC) = LO8(ecx);
    MEM16(0x8963AE) = LO16(esi);
    MEM16(0x8963B0) = 0x67C;
    MEM8(0x8963B2) = LO8(ecx);
    MEM16(0x8963B4) = LO16(ecx);
    MEM16(0x8963B6) = 0x680;
    MEM8(0x8963B8) = LO8(eax);
    MEM16(0x8963BA) = LO16(ecx);
    MEM16(0x8963BC) = 0x682;
    MEM8(0x8963BE) = LO8(eax);
    MEM16(0x8963C0) = LO16(ecx);
    MEM16(0x8963C2) = 0x684;
    MEM8(0x8963C4) = LO8(eax);
    MEM16(0x8963C6) = LO16(ecx);
    MEM16(0x8963C8) = 0x686;
    MEM8(0x8963CA) = LO8(eax);
    MEM16(0x8963CC) = LO16(ecx);
    MEM16(0x8963CE) = 0x688;
    MEM8(0x8963D0) = LO8(eax);
    MEM16(0x8963D2) = LO16(ecx);
    MEM16(0x8963D4) = 0x68A;
    MEM8(0x8963D6) = LO8(eax);
    MEM16(0x8963D8) = LO16(ecx);
    MEM16(0x8963DA) = 0x68C;
    MEM8(0x8963DC) = LO8(eax);
    MEM16(0x8963DE) = LO16(ecx);
    MEM16(0x8963E0) = 0x68E;
    MEM8(0x8963E2) = LO8(ebx);
    MEM16(0x8963E4) = LO16(ecx);
    MEM16(0x8963E6) = 0x690;
    MEM8(0x8963E8) = LO8(ebx);
    MEM16(0x8963EA) = LO16(eax);
    MEM16(0x8963EC) = 0x692;
    MEM8(0x8963EE) = LO8(edx);
    MEM16(0x8963F0) = LO16(eax);
    MEM16(0x8963F2) = 0x693;
    MEM8(0x8963F4) = LO8(edx);
    MEM16(0x8963F6) = LO16(eax);
    MEM16(0x8963F8) = 0x694;
    MEM8(0x8963FA) = LO8(edx);
    MEM16(0x8963FC) = LO16(eax);
    MEM16(0x8963FE) = 0x695;
    MEM8(0x896400) = LO8(edx);
    MEM16(0x896402) = LO16(eax);
    MEM16(0x896404) = 0x696;
    MEM8(0x896406) = LO8(edx);
    POP32(esp, esi);
    MEM16(0x896408) = LO16(eax);
    MEM16(0x89640A) = 0x697;
    MEM8(0x89640C) = LO8(edx);
    MEM16(0x89640E) = LO16(eax);
    MEM16(0x896410) = 0x698;
    MEM8(0x896412) = LO8(edx);
    MEM16(0x896414) = LO16(eax);
    MEM16(0x896416) = 0x699;
    MEM8(0x896418) = LO8(edx);
    POP32(esp, ebx);

loc_000598B0: ;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x896378);
    PUSH32(esp, 0x000598C2u); RECOMP_ABI_CALL(0x0001E8E0u, sub_0001E8E0); /* call 0x0001E8E0 */

loc_000598C2: ;
    MEM32(edi + 0x718) = eax;
    ecx = edi + 0x69C;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00033C63(); return; /* tail jmp 0x00033C63 */

}

/**
 * sub_00059980
 * Original: 0x00059980 - 0x000599AB (43 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00059980: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x718);
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00059995u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_00059995: ;
    MEM32(esi + 0x718) = 0;
    ecx = esi + 0x69C;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001632F(); return; /* tail jmp 0x0001632F */

}

/**
 * sub_000599C0
 * Original: 0x000599C0 - 0x000599FB (59 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000599C0(void)
{

loc_000599C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7AC7B0);
    ecx = edi;
    PUSH32(esp, 0x000599D5u); RECOMP_ABI_CALL(0x00020717u, sub_00020717); /* call 0x00020717 */

loc_000599D5: ;
    eax = MEM32(esi + 0x718);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000599E3u); RECOMP_ABI_CALL(0x000259C4u, sub_000259C4); /* call 0x000259C4 */

loc_000599E3: ;
    PUSH32(esp, edi);
    ecx = esi + 0x69C;
    PUSH32(esp, 0x000599EFu); RECOMP_ABI_CALL(0x0001BCD0u, sub_0001BCD0); /* call 0x0001BCD0 */

loc_000599EF: ;
    ecx = edi;
    PUSH32(esp, 0x000599F6u); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_000599F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00059A10
 * Original: 0x00059A10 - 0x00059A15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00059A10: ;
    g_seh_ebp = ebp; sub_00025A28(); return; /* tail jmp 0x00025A28 */

}

/**
 * sub_00059A20
 * Original: 0x00059A20 - 0x00059A7B (91 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059A20: ;
    SET_LO8(edx, MEM8(0x8E938C));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(edx) (8-bit) */
    eax = 2;
    if (TEST_NZ(_fa, _fb)) goto loc_00059A62; /* jne: not equal / not zero */

loc_00059A37: ;
    MEM32(0x8E938C) = MEM32(0x8E938C) | ecx;
    _fa = (uint32_t)(MEM32(0x8E938C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x89643E) = 0x58;
    MEM8(0x896440) = LO8(eax);
    MEM16(0x896442) = 4;
    MEM16(0x896444) = 0x5C;
    MEM8(0x896446) = LO8(eax);

loc_00059A62: ;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x89643C);
    PUSH32(esp, 0x00059A73u); RECOMP_ABI_CALL(0x0001E8E0u, sub_0001E8E0); /* call 0x0001E8E0 */

loc_00059A73: ;
    MEM32(esi + 0x288) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00059AA0
 * Original: 0x00059AA0 - 0x00059AC1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059AA0(void)
{

loc_00059AA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x288);
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00059AB5u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_00059AB5: ;
    MEM32(esi + 0x288) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00059AD0
 * Original: 0x00059AD0 - 0x00059B09 (57 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059AD0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059B05; /* je: equal / zero */

loc_00059ADD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7AC7B4);
    ecx = esi;
    PUSH32(esp, 0x00059AEFu); RECOMP_ABI_CALL(0x00020717u, sub_00020717); /* call 0x00020717 */

loc_00059AEF: ;
    eax = MEM32(edi + 0x288);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00059AFDu); RECOMP_ABI_CALL(0x000259C4u, sub_000259C4); /* call 0x000259C4 */

loc_00059AFD: ;
    ecx = esi;
    PUSH32(esp, 0x00059B04u); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_00059B04: ;
    POP32(esp, esi);

loc_00059B05: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00059B20
 * Original: 0x00059B20 - 0x00059B2E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059B20: ;
    SET_LO8(ecx, MEM8(0x896174));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00059B40
 * Original: 0x00059B40 - 0x00059B48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059B40(void)
{

loc_00059B40: ;
    eax = (uint32_t)(int32_t)SMEM16(0x896166);
    esp += 4; return; /* ret */

}

/**
 * sub_00059B50
 * Original: 0x00059B50 - 0x00059B5E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059B50: ;
    SET_LO8(ecx, MEM8(0x896172));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00059B70
 * Original: 0x00059B70 - 0x00059B78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059B70(void)
{

loc_00059B70: ;
    eax = (uint32_t)(int32_t)SMEM16(0x8E9610);
    esp += 4; return; /* ret */

}

/**
 * sub_00059B80
 * Original: 0x00059B80 - 0x00059BAE (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059B80: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00059BA3; /* je: equal / zero */

loc_00059B87: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00059B98; /* je: equal / zero */

loc_00059B8A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00059BAD; /* jne: not equal / not zero */

loc_00059B8D: ;
    MEM32(0x8E960C) = 3;
    esp += 4; return; /* ret */

loc_00059B98: ;
    MEM32(0x8E960C) = 2;
    esp += 4; return; /* ret */

loc_00059BA3: ;
    MEM32(0x8E960C) = 1;

loc_00059BAD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00059BC0
 * Original: 0x00059BC0 - 0x00059BC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059BC0(void)
{

loc_00059BC0: ;
    eax = MEM32(0x8E960C);
    esp += 4; return; /* ret */

}

/**
 * sub_00059BD0
 * Original: 0x00059BD0 - 0x00059BDA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059BD0(void)
{

loc_00059BD0: ;
    eax = MEM32(esp + 4);
    MEM32(0x895AE0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00059BE0
 * Original: 0x00059BE0 - 0x00059BE6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059BE0(void)
{

loc_00059BE0: ;
    eax = MEM32(0x895AE0);
    esp += 4; return; /* ret */

}

/**
 * sub_00059BF0
 * Original: 0x00059BF0 - 0x00059BFF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059BF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 0xFF (16-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00059C10
 * Original: 0x00059C10 - 0x00059C1E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059C10: ;
    SET_LO8(ecx, MEM8(0x896177));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00059C30
 * Original: 0x00059C30 - 0x00059C3A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059C30(void)
{

loc_00059C30: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x896178) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00059C40
 * Original: 0x00059C40 - 0x00059C46 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059C40(void)
{

loc_00059C40: ;
    SET_LO8(eax, MEM8(0x896178));
    esp += 4; return; /* ret */

}

/**
 * sub_00059C50
 * Original: 0x00059C50 - 0x00059C5A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059C50(void)
{

loc_00059C50: ;
    eax = MEM32(esp + 4);
    MEM32(0x895AE4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00059C60
 * Original: 0x00059C60 - 0x00059C66 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059C60(void)
{

loc_00059C60: ;
    eax = MEM32(0x895AE4);
    esp += 4; return; /* ret */

}

/**
 * sub_00059C70
 * Original: 0x00059C70 - 0x00059C78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059C70(void)
{

loc_00059C70: ;
    eax = (uint32_t)(int32_t)SMEM8(0x896179);
    esp += 4; return; /* ret */

}

/**
 * sub_00059C80
 * Original: 0x00059C80 - 0x00059C87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059C80: ;
    MEM8(0x896179) = MEM8(0x896179) + 1;
    _fa = (uint32_t)(MEM8(0x896179)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00059C90
 * Original: 0x00059C90 - 0x00059C98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059C90(void)
{

loc_00059C90: ;
    MEM8(0x896179) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00059CA0
 * Original: 0x00059CA0 - 0x00059CB6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059CA0: ;
    eax = MEM32(0x8E8F84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059CAE; /* jne: not equal / not zero */

loc_00059CA9: ;
    SET_LO16(eax, 0xFFFE);
    esp += 4; return; /* ret */

loc_00059CAE: ;
    SET_LO16(eax, MEM16(eax + 0xB8));
    esp += 4; return; /* ret */

}

/**
 * sub_00059CC0
 * Original: 0x00059CC0 - 0x00059CDC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059CC0: ;
    eax = MEM32(esp + 4);
    MEM16(0x89616A) = LO16(eax);
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00059CD6; /* jns: not sign (positive) */

loc_00059CD1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00059CD6: ;
    MEM8(0x896178) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00059CF0
 * Original: 0x00059CF0 - 0x00059CF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059CF0(void)
{

loc_00059CF0: ;
    eax = (uint32_t)(int32_t)SMEM16(0x89616A);
    esp += 4; return; /* ret */

}

/**
 * sub_00059D00
 * Original: 0x00059D00 - 0x00059D23 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059D00: ;
    SET_LO16(eax, MEM16(0x89616A));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM16(0x89616A) = LO16(eax);
    eax = SX16(LO16(eax));
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00059D1D; /* jns: not sign (positive) */

loc_00059D18: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00059D1D: ;
    MEM8(0x896178) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00059D30
 * Original: 0x00059D30 - 0x00059D50 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059D30: ;
    SET_LO8(eax, MEM8(0x8F6A24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059D4A; /* je: equal / zero */

loc_00059D39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059D4A; /* je: equal / zero */

loc_00059D3D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059D4A; /* je: equal / zero */

loc_00059D41: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    eax = 5;
    if (CMP_NE(_fa, _fb)) goto loc_00059D4F; /* jne: not equal / not zero */

loc_00059D4A: ;
    eax = 3;

loc_00059D4F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00059D60
 * Original: 0x00059D60 - 0x00059D6C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059D60(void)
{

loc_00059D60: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x8E93E8);
    esp += 4; return; /* ret */

}

/**
 * sub_00059D70
 * Original: 0x00059D70 - 0x00059D80 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059D70(void)
{

loc_00059D70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx * 4 + 0x8E93E8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00059D90
 * Original: 0x00059D90 - 0x00059D9E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059D90: ;
    SET_LO8(ecx, MEM8(0x896172));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00059DB0
 * Original: 0x00059DB0 - 0x00059DBD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059DB0(void)
{

loc_00059DB0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00059DC0
 * Original: 0x00059DC0 - 0x00059DC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059DC0(void)
{

loc_00059DC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00059DD0
 * Original: 0x00059DD0 - 0x00059E03 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059DD0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x71C);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    MEM32(esi + 0x670) = eax;
    PUSH32(esp, esi);
    MEM32(esi + 0x674) = eax;
    PUSH32(esp, 0x00059DFCu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00059DFC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00059E10
 * Original: 0x00059E10 - 0x00059E53 (67 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059E10: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    ecx = eax + 0x24;
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00059E70
 * Original: 0x00059E70 - 0x00059E71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059E70(void)
{

loc_00059E70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00059E80
 * Original: 0x00059E80 - 0x00059EBC (60 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059E80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8E9DE4) = eax;
    MEM32(0x8EACE4) = eax;
    MEM32(0x8EACE0) = eax;
    MEM32(0x8E9380) = eax;
    MEM32(0x8F004C) = eax;
    MEM32(0x8F04E4) = eax;
    MEM32(0x8EB070) = eax;
    MEM32(0x8EADA0) = eax;
    eax = 0x7AC2BC;
    MEM32(ecx + 0x124) = eax;
    MEM32(ecx + 0xDC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00059ED0
 * Original: 0x00059ED0 - 0x00059F84 (180 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00059ED0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x8961F4);
    PUSH32(esp, ebp);
    ebp = MEM32(0x89615C);
    PUSH32(esp, esi);
    esi = MEM32(0x8961F8);
    PUSH32(esp, edi);
    edi = MEM32(0x8E9618);
    PUSH32(esp, 0x71C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x895AE0);
    PUSH32(esp, 0x00059EFDu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00059EFD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8E9390;
    PUSH32(esp, 0x00059F0Au); RECOMP_ABI_CALL(0x00025A28u, sub_00025A28); /* call 0x00025A28 */

loc_00059F0A: ;
    MEM32(0x8E9618) = edi;
    POP32(esp, edi);
    MEM32(0x8961F8) = esi;
    POP32(esp, esi);
    MEM32(0x89615C) = ebp;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    MEM32(0x8961F4) = ebx;
    MEM32(0x8E93E8) = eax;
    MEM32(0x8E93EC) = eax;
    MEM32(0x8E9DE4) = 0x8E94E4;
    MEM32(0x8EACE4) = 0x8E946C;
    MEM32(0x8EACE0) = 0x8E94B4;
    MEM32(0x8E9380) = 0x8E93B4;
    MEM32(0x8F004C) = 0x8E9390;
    MEM32(0x8F04E4) = 0x8E94EC;
    MEM32(0x8EB070) = 0x8E93CC;
    MEM32(0x8EADA0) = 0x895AE8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00059FC0
 * Original: 0x00059FC0 - 0x0005A0F9 (313 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00059FC0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    edi = esi + 0x3C;
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    eax = edi + 0x24;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    ecx = esi + 0xDC;
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0005A028u); RECOMP_ABI_CALL(0x00034884u, sub_00034884); /* call 0x00034884 */

loc_0005A028: ;
    ecx = esi + 0x124;
    PUSH32(esp, 0x0005A033u); RECOMP_ABI_CALL(0x000321FBu, sub_000321FB); /* call 0x000321FB */

loc_0005A033: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0x154) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x24);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = esi + 0x154;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esi + 0x27C) = ebx;
    MEM16(esi + 0x280) = LO16(ebx);
    MEM16(esi + 0x282) = LO16(ebx);
    MEM16(esi + 0x284) = LO16(ebx);
    MEM16(esi + 0x286) = LO16(ebx);
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    PUSH32(esp, 0x0005A07Au); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0005A07A: ;
    PUSH32(esp, 0x18);
    eax = esi + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005A086u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0005A086: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0005A092u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0005A092: ;
    PUSH32(esp, 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0005A09Bu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0005A09B: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 0x15C;
    ebp = 0xC;
    /* nop */

loc_0005A0B0: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0005A0B9u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0005A0B9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0005A0B0; /* jne: not equal / not zero */

loc_0005A0C2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x8E9DE4) = ebx;
    MEM32(0x8EACE4) = ebx;
    MEM32(0x8EACE0) = ebx;
    MEM32(0x8E9380) = ebx;
    MEM32(0x8F004C) = ebx;
    MEM32(0x8F04E4) = ebx;
    MEM32(0x8EB070) = ebx;
    MEM32(0x8EADA0) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0005A150
 * Original: 0x0005A150 - 0x0005A167 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005A150: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005A15Au); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_0005A15A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_0005A170
 * Original: 0x0005A170 - 0x0005A17A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A170(void)
{

loc_0005A170: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005A180
 * Original: 0x0005A180 - 0x0005A1AE (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A180(void)
{

loc_0005A180: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0005A1C0
 * Original: 0x0005A1C0 - 0x0005A1C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A1C0(void)
{

loc_0005A1C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0005A1D0
 * Original: 0x0005A1D0 - 0x0005A20A (58 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0005A1D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0005A1DCu); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_0005A1DC: ;
    _cf = 0; /* logical op clears CF */
    esi = esi ^ 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0005A1E7u); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_0005A1E7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0005A1FA; /* je: equal / zero */

loc_0005A1F0: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0005A1FA: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = ecx + ecx + 1;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005A220
 * Original: 0x0005A220 - 0x0005A24F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005A220: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0005A22Au); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_0005A22A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005A247; /* jle: less or equal (signed <=) */

loc_0005A231: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005A238u); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_0005A238: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005A247; /* jle: less or equal (signed <=) */

loc_0005A23F: ;
    eax = MEM32(esi + 0x3FC);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0005A247: ;
    eax = MEM32(esi + 0x400);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005A260
 * Original: 0x0005A260 - 0x0005A26A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A260(void)
{

loc_0005A260: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005A270
 * Original: 0x0005A270 - 0x0005A27A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A270(void)
{

loc_0005A270: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005A280
 * Original: 0x0005A280 - 0x0005A28E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A280(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0005A280: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + eax * 4 + 0x414)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005A2A0
 * Original: 0x0005A2A0 - 0x0005A2AE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A2A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0005A2A0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + eax * 4 + 0x41C)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005A2C0
 * Original: 0x0005A2C0 - 0x0005A306 (70 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A2C0(void)
{

loc_0005A2C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 0x3B0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3B4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3B8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3BC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0005A320
 * Original: 0x0005A320 - 0x0005B532 (4626 bytes, 725 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005A320: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x8F6A27));
    PUSH32(esp, ebp);
    edx = 0xA;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0005A3E5; /* je: equal / zero */

loc_0005A33B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A3E5; /* je: equal / zero */

loc_0005A344: ;
    esi = MEM32(eax);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x13) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(esi * 4 + 0x7ACD4C);
    MEM32(ecx + 4) = esi;
    esi = MEM32(eax);
    esi = esi & 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(esi * 4 + 0x7ACB8C);
    MEM32(ecx + 8) = esi;
    esi = MEM32(eax + 4);
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(esi * 4 + 0x7ACD8C);
    MEM32(ecx + 0xC4) = esi;
    esi = MEM32(eax + 4);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(esi * 4 + 0x7ACDCC);
    MEM32(ecx + 0xC0) = esi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, MEM8(eax + 6));
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebx * 4 + 0x7ACE0C);
    MEM32(ecx + 0x370) = esi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, MEM8(eax + 6));
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebx * 4 + 0x7ACE2C);
    MEM32(ecx + 0x374) = esi;
    esi = MEM32(eax + 4);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(esi * 4 + 0x7ACE4C);
    MEM32(ecx + 0x22C) = esi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, MEM8(eax + 7));
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebx * 4 + 0x7ACE6C);
    MEM32(ecx + 0x1FC) = esi;
    goto loc_0005A45F;

loc_0005A3E5: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB1D0)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD47C)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD478)); /* movss */
    MEMF(ecx + 0xC4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD474)); /* movss */
    MEMF(ecx + 0xC0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD470)); /* movss */
    MEMF(ecx + 0x370) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD46C)); /* movss */
    MEMF(ecx + 0x374) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ecx + 0x22C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD468)); /* movss */
    MEMF(ecx + 0x1FC) = xmm0.f[0]; /* movss */

loc_0005A45F: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD464)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AD460)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD45C)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD458)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AD454)); /* movss */
    MEMF(ecx + 0x200) = xmm1.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AD44C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7AD448)); /* movss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x204) = esi;
    edi = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x1B) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(edi * 4 + 0x7ACD6C);
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD444)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB1C8)); /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ACF70)); /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD440)); /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD43C)); /* movss */
    MEMF(ecx + 0x60) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AD438)); /* movss */
    MEMF(ecx + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD434)); /* movss */
    MEM32(ecx + 0x14) = edi;
    MEMF(ecx + 0x34) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AD430)); /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD42C)); /* movss */
    MEMF(ecx + 0x23C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AD428)); /* movss */
    MEMF(ecx + 0x38) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD424)); /* movss */
    MEMF(ecx + 0x238) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AD420)); /* movss */
    MEMF(ecx + 0x40) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AD41C)); /* movss */
    MEMF(ecx + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x240) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AD418)); /* movss */
    MEMF(ecx + 0x64) = xmm6.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0x3C) = xmm4.f[0]; /* movss */
    MEMF(ecx + 0x44) = xmm3.f[0]; /* movss */
    MEM32(ecx + 0x5C) = 1;
    MEMF(ecx + 0x1F8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x234) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x244) = xmm1.f[0]; /* movss */
    edi = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(edi * 4 + 0x7ACBEC);
    MEM32(ecx + 0x250) = edi;
    edi = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(edi * 4 + 0x7ACBCC);
    MEM32(ecx + 0x254) = edi;
    edi = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(edi * 4 + 0x7ACBAC);
    MEM32(ecx + 0x258) = edi;
    edi = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x17) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(edi * 4 + 0x7ACC0C);
    MEM32(ecx + 0x248) = edi;
    edi = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x17) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm2 = XMM_SCALAR(MEMF(0x7AD414)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(edi * 4 + 0x7ACC2C);
    xmm7 = XMM_SCALAR(MEMF(0x7AD410)); /* movss */
    MEM32(ecx + 0x24C) = edi;
    edi = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x17) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm5 = XMM_SCALAR(MEMF(0x7AD40C)); /* movss */
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(edi * 4 + 0x7ACC4C);
    MEMF(ecx + 0x260) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AD408)); /* movss */
    MEM32(ecx + 0x264) = edi;
    MEMF(ecx + 0x26C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AD404)); /* movss */
    MEMF(ecx + 0x25C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x268) = xmm2.f[0]; /* movss */
    MEM32(ecx + 0x270) = 0xF;
    edi = MEM32(eax + 4);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(edi * 4 + 0x7ACDEC);
    MEMF(ecx + 0x228) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AA7EC)); /* movss */
    MEMF(ecx + 0x328) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD400)); /* movss */
    MEMF(ecx + 0x32C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3FC)); /* movss */
    MEMF(ecx + 0x330) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7ACF6C)); /* movss */
    MEMF(ecx + 0x324) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7ACF70)); /* movss */
    MEMF(ecx + 0x334) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3F8)); /* movss */
    MEM32(ecx + 0x218) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(ecx + 0x220) = xmm5.f[0]; /* movss */
    MEMF(ecx + 0x224) = xmm2.f[0]; /* movss */
    edi = 0x3C;
    MEM32(ecx + 0x21C) = edi;
    SET_LO8(ebx, MEM8(eax + 0xE));
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACF74);
    MEMF(ecx + 0x318) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3F4)); /* movss */
    MEMF(ecx + 0x314) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3F0)); /* movss */
    MEMF(ecx + 0x320) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD474)); /* movss */
    MEMF(ecx + 0x4CC) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3EC)); /* movss */
    MEMF(ecx + 0x338) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3E8)); /* movss */
    MEMF(ecx + 0x33C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7ABD68)); /* movss */
    MEMF(ecx + 0x344) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3E4)); /* movss */
    MEMF(ecx + 0x340) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3E0)); /* movss */
    MEMF(ecx + 0x348) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3DC)); /* movss */
    MEMF(ecx + 0x34C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3D8)); /* movss */
    MEMF(ecx + 0x354) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3D4)); /* movss */
    MEMF(ecx + 0x350) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3D0)); /* movss */
    MEMF(ecx + 0x35C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3CC)); /* movss */
    MEMF(ecx + 0x360) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    MEM32(ecx + 0x31C) = ebx;
    MEMF(ecx + 0x368) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3DC)); /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(ecx + 0x36C) = xmm2.f[0]; /* movss */
    SET_LO8(ebx, MEM8(eax + 0xA));
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACECC);
    MEM32(ecx + 0x364) = ebx;
    MEMF(ecx + 0x358) = xmm7.f[0]; /* movss */
    ebx = MEM32(eax);
    xmm7 = XMM_SCALAR(MEMF(0x7AD47C)); /* movss */
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACCEC);
    MEMF(ecx + 0x484) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD414)); /* movss */
    MEMF(ecx + 0x488) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3C8)); /* movss */
    MEMF(ecx + 0x490) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3C4)); /* movss */
    MEMF(ecx + 0x494) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3C8)); /* movss */
    MEMF(ecx + 0x498) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3C4)); /* movss */
    MEMF(ecx + 0x49C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD420)); /* movss */
    MEMF(ecx + 0x4AC) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD410)); /* movss */
    MEMF(ecx + 0x4B0) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ecx + 0x4B4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AB2D0)); /* movss */
    MEMF(ecx + 0x4B8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3C0)); /* movss */
    MEMF(ecx + 0x4BC) = xmm7.f[0]; /* movss */
    MEM32(ecx + 0x4C4) = edi;
    xmm7 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    MEM32(ecx + 0x4A0) = ebx;
    MEMF(ecx + 0x48C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x4A4) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x4A8) = xmm1.f[0]; /* movss */
    MEM32(ecx + 0x46C) = 7;
    MEM32(ecx + 0x4C0) = 0xF;
    MEMF(ecx + 0x4C8) = xmm7.f[0]; /* movss */
    MEM32(ecx + 0x380) = 5;
    edi = MEM32(eax);
    xmm7 = XMM_SCALAR(MEMF(0x7AD3BC)); /* movss */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(edi * 4 + 0x7ACCCC);
    MEM32(ecx + 0x2A0) = edi;
    edi = MEM32(eax + 8);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x2A4) = edi;
    MEM32(ecx + 0x378) = 0x14;
    MEM32(ecx + 0x37C) = 0x37;
    MEMF(ecx + 0x510) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3B8)); /* movss */
    MEMF(ecx + 0x508) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3B4)); /* movss */
    MEMF(ecx + 0x50C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3B0)); /* movss */
    MEMF(ecx + 0x504) = xmm5.f[0]; /* movss */
    MEMF(ecx + 0x514) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3AC)); /* movss */
    MEMF(ecx + 0x518) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3A8)); /* movss */
    MEMF(ecx + 0x528) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3A4)); /* movss */
    ebp = 8;
    MEM32(ecx + 0x520) = ebp;
    MEM32(ecx + 0x524) = ebp;
    MEM32(ecx + 0x51C) = 0xB;
    edi = 0x19;
    MEM32(ecx + 0x208) = edi;
    MEM32(ecx + 0x20C) = edi;
    MEM32(ecx + 0x210) = edi;
    MEM32(ecx + 0x214) = edx;
    MEMF(ecx + 0x1D8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3A0)); /* movss */
    MEMF(ecx + 0x1DC) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3A8)); /* movss */
    MEMF(ecx + 0x1E0) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD39C)); /* movss */
    MEMF(ecx + 0x1E4) = xmm5.f[0]; /* movss */
    MEMF(ecx + 0x1E8) = xmm7.f[0]; /* movss */
    MEM32(ecx) = 4;
    MEM32(ecx + 0x2F8) = 0x1F4;
    MEM32(ecx + 0x2C0) = 0x3DE;
    MEM32(ecx + 0x2C4) = 0x672;
    ebx = MEM32(eax + 8);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACE8C);
    MEM32(ecx + 0x2C8) = ebx;
    xmm7 = XMM_SCALAR(MEMF(0x7AD3D4)); /* movss */
    MEMF(ecx + 0x2CC) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD398)); /* movss */
    MEMF(ecx + 0x2A8) = xmm7.f[0]; /* movss */
    MEMF(ecx + 0x2AC) = xmm0.f[0]; /* movss */
    ebx = MEM32(eax + 8);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACEAC);
    MEM32(ecx + 0x2D0) = ebx;
    xmm7 = XMM_SCALAR(MEMF(0x7AD394)); /* movss */
    MEMF(ecx + 0x2D4) = xmm7.f[0]; /* movss */
    MEMF(ecx + 0x2D8) = xmm6.f[0]; /* movss */
    MEMF(ecx + 0x2DC) = xmm1.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD390)); /* movss */
    MEMF(ecx + 0x2E0) = xmm7.f[0]; /* movss */
    MEMF(ecx + 0x2E8) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x2E4) = xmm2.f[0]; /* movss */
    MEM32(ecx + 0x2EC) = 0x64;
    xmm7 = XMM_SCALAR(MEMF(0x7AB1D0)); /* movss */
    MEMF(ecx + 0x2F0) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD39C)); /* movss */
    MEM32(ecx + 0x2F4) = ebp;
    MEMF(ecx + 0x2FC) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD458)); /* movss */
    MEMF(ecx + 0x300) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD38C)); /* movss */
    MEMF(ecx + 0x304) = xmm7.f[0]; /* movss */
    MEMF(ecx + 0x308) = xmm4.f[0]; /* movss */
    ebx = MEM32(eax + 0xC);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = MEM32(ebx * 4 + 0x7ACF94);
    MEM32(ecx + 0x230) = ebx;
    ebx = MEM32(eax + 0xC);
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACF2C);
    MEM32(ecx + 0x288) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, MEM8(eax + 0xB));
    xmm7 = XMM_SCALAR(MEMF(0x7AD388)); /* movss */
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACEEC);
    MEM32(ecx + 0x28C) = ebx;
    ebx = MEM32(eax + 0xC);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACF4C);
    MEM32(ecx + 0x290) = ebx;
    ebx = MEM32(eax + 8);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = MEM32(ebx * 4 + 0x7ACF0C);
    MEM32(ecx + 0x294) = ebx;
    ebx = MEM32(eax + 0xC);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACF4C);
    MEM32(ecx + 0x298) = ebx;
    MEM32(ecx + 0x29C) = 0xC;
    MEMF(ecx + 0x274) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD384)); /* movss */
    MEMF(ecx + 0x278) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD380)); /* movss */
    MEMF(ecx + 0x27C) = xmm7.f[0]; /* movss */
    ebx = MEM32(eax + 0xC);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7AD0E8);
    MEM32(ecx + 0x52C) = ebx;
    ebx = MEM32(eax + 8);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7AD108);
    MEM32(ecx + 0x530) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, MEM8(eax + 0xE));
    xmm7 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACF74);
    MEM32(ecx + 0xBC) = ebx;
    MEMF(ecx + 0xCC) = xmm7.f[0]; /* movss */
    ebx = MEM32(eax + 0x10);
    xmm7 = XMM_SCALAR(MEMF(0x7AD37C)); /* movss */
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACD2C);
    MEM32(ecx + 0x70) = ebx;
    MEMF(ecx + 0x74) = xmm7.f[0]; /* movss */
    MEMF(ecx + 0x78) = xmm7.f[0]; /* movss */
    MEMF(ecx + 0x7C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD378)); /* movss */
    MEMF(ecx + 0x80) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AB2D0)); /* movss */
    MEMF(ecx + 0x84) = xmm7.f[0]; /* movss */
    MEMF(ecx + 0x8C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    MEMF(ecx + 0x88) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB1D0)); /* movss */
    MEMF(ecx + 0x90) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    MEMF(ecx + 0x94) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AD374)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD370)); /* movss */
    MEMF(ecx + 0x98) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x9C) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0xA0) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD36C)); /* movss */
    MEMF(ecx + 0xA4) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xC8) = xmm7.f[0]; /* movss */
    MEM32(ecx + 0xA8) = 0x55;
    MEM32(ecx + 0xAC) = 0x46;
    MEM32(ecx + 0xB0) = edx;
    MEM32(ecx + 0xB4) = 0x32;
    xmm7 = XMM_SCALAR(MEMF(0x7AB82C)); /* movss */
    MEM32(ecx + 0xB8) = edx;
    ebx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0xB) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACD0C);
    MEM32(ecx + 0x310) = ebx;
    MEMF(ecx + 0x394) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD368)); /* movss */
    MEMF(ecx + 0x398) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD42C)); /* movss */
    MEMF(ecx + 0x390) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD3D0)); /* movss */
    MEMF(ecx + 0x384) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD364)); /* movss */
    MEMF(ecx + 0x3B0) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEMF(ecx + 0x3B4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD360)); /* movss */
    MEMF(ecx + 0x3B8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7A9EC0)); /* movss */
    MEMF(ecx + 0x3BC) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD35C)); /* movss */
    MEMF(ecx + 0x3C0) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD358)); /* movss */
    MEMF(ecx + 0x3C4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD354)); /* movss */
    MEMF(ecx + 0x3C8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD350)); /* movss */
    MEMF(ecx + 0x3CC) = xmm7.f[0]; /* movss */
    MEMF(ecx + 0x3D0) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    MEMF(ecx + 0x3D4) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AD34C)); /* movss */
    MEMF(ecx + 0x388) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AD474)); /* movss */
    MEMF(ecx + 0x38C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AD3F0)); /* movss */
    MEMF(ecx + 0x3D8) = xmm4.f[0]; /* movss */
    MEMF(ecx + 0x3DC) = xmm6.f[0]; /* movss */
    ebx = 0xB4;
    MEM32(ecx + 0x3E0) = ebx;
    MEM32(ecx + 0x3E4) = 0x4B;
    xmm6 = XMM_SCALAR(MEMF(0x7AD348)); /* movss */
    MEM32(ecx + 0x3E8) = edi;
    MEM32(ecx + 0x3EC) = 0x14;
    MEMF(ecx + 0x3F0) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AD344)); /* movss */
    MEMF(ecx + 0x3F4) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AD340)); /* movss */
    MEMF(ecx + 0x3F8) = xmm6.f[0]; /* movss */
    MEM32(ecx + 0x39C) = esi;
    MEM32(ecx + 0x3A0) = 3;
    MEM32(ecx + 0x3A4) = 0xF;
    MEM32(ecx + 0x3A8) = 4;
    edi = 0x28;
    MEM32(ecx + 0x3AC) = edi;
    MEM32(ecx + 0x3FC) = ebx;
    MEM32(ecx + 0x400) = 0x32;
    MEM32(ecx + 0x404) = edi;
    edi = 0x1E;
    MEM32(ecx + 0x408) = edi;
    ebx = MEM32(0x8F6A6C);
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7AD068);
    MEM32(ecx + 0x40C) = ebx;
    ebx = MEM32(0x8F6A70);
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7AD068);
    MEM32(ecx + 0x410) = ebx;
    ebx = MEM32(0x8F6A6C);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7AD0A8);
    MEM32(ecx + 0x414) = ebx;
    ebx = MEM32(0x8F6A70);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7AD0A8);
    MEM32(ecx + 0x418) = ebx;
    SET_LO8(ebx, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B077; /* je: equal / zero */

loc_0005AFD2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B077; /* je: equal / zero */

loc_0005AFDB: ;
    ebx = MEM32(0x8F6A68);
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACFC4);
    MEM32(ecx + 0x420) = ebx;
    ebx = MEM32(0x8F6A68);
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACFB4);
    MEM32(ecx + 0x41C) = ebx;
    ebx = MEM32(0x8F6A68);
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACFD4);
    MEM32(ecx + 0x434) = ebx;
    ebx = MEM32(0x8F6A68);
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACFF4);
    MEM32(ecx + 0x428) = ebx;
    ebx = MEM32(0x8F6A68);
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7AD014);
    MEM32(ecx + 0x430) = ebx;
    ebx = MEM32(0x8F6A68);
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7ACFE4);
    MEM32(ecx + 0x424) = ebx;
    ebx = MEM32(0x8F6A68);
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x7AD004);
    MEM32(ecx + 0x42C) = ebx;
    goto loc_0005B0C7;

loc_0005B077: ;
    xmm6 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AD42C)); /* movss */
    MEMF(ecx + 0x420) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x41C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x434) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    MEMF(ecx + 0x428) = xmm6.f[0]; /* movss */
    MEMF(ecx + 0x430) = xmm7.f[0]; /* movss */
    MEMF(ecx + 0x424) = xmm6.f[0]; /* movss */
    MEMF(ecx + 0x42C) = xmm7.f[0]; /* movss */

loc_0005B0C7: ;
    ebx = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005B131; /* jle: less or equal (signed <=) */

loc_0005B0DB: ;
    xmm7.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] / xmm7.f[0]; /* divss */
    xmm7 = XMM_SCALAR(MEMF(ecx + 0x234)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    MEMF(ecx + 0x234) = xmm7.f[0]; /* movss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] * MEMF(ecx + 0x23C); /* mulss */
    MEMF(ecx + 0x23C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(ecx + 0x238)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x240); /* mulss */
    MEMF(ecx + 0x238) = xmm7.f[0]; /* movss */
    MEMF(ecx + 0x240) = xmm6.f[0]; /* movss */

loc_0005B131: ;
    MEM32(ecx + 0x1B8) = esi;
    MEM32(ecx + 0x1B4) = esi;
    MEM32(ecx + 0x1B0) = esi;
    MEM32(ecx + 0x1AC) = edx;
    MEMF(ecx + 0x194) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x198) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x19C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1A0) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7AD454)); /* movss */
    MEMF(ecx + 0x1A4) = xmm4.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AD410)); /* movss */
    MEMF(ecx + 0x1A8) = xmm6.f[0]; /* movss */
    MEMF(ecx + 0x17C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x180) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x184) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x188) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x190) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x178) = xmm4.f[0]; /* movss */
    MEM32(ecx + 0x174) = 0x14;
    xmm4 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AD338)); /* movss */
    edx = 1;
    MEM32(ecx + 0x110) = edx;
    MEM32(ecx + 0x148) = esi;
    MEM32(ecx + 0x154) = esi;
    MEM32(ecx + 0x158) = esi;
    MEM32(ecx + 0x15C) = esi;
    MEM32(ecx + 0x160) = esi;
    MEM32(ecx + 0x164) = esi;
    MEM32(ecx + 0x168) = edx;
    MEM32(ecx + 0x170) = esi;
    MEM32(ecx + 0x114) = esi;
    MEM32(ecx + 0x118) = esi;
    MEM32(ecx + 0x11C) = esi;
    MEM32(ecx + 0x120) = 2;
    MEM32(ecx + 0x124) = edx;
    MEM32(ecx + 0x128) = esi;
    MEM32(ecx + 0x12C) = 0x6D;
    MEM32(ecx + 0x130) = esi;
    MEM32(ecx + 0x134) = esi;
    MEM32(ecx + 0x138) = 0x32;
    MEM32(ecx + 0x13C) = esi;
    MEM32(ecx + 0x140) = esi;
    MEM32(ecx + 0x144) = esi;
    MEM32(ecx + 0x16C) = esi;
    MEM32(ecx + 0x14C) = esi;
    MEM32(ecx + 0x150) = esi;
    MEMF(ecx + 0x438) = xmm4.f[0]; /* movss */
    MEMF(ecx + 0x43C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AD334)); /* movss */
    MEMF(ecx + 0x440) = xmm6.f[0]; /* movss */
    MEMF(ecx + 0x444) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AD330)); /* movss */
    MEMF(ecx + 0x454) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AD32C)); /* movss */
    MEMF(ecx + 0x448) = xmm6.f[0]; /* movss */
    MEMF(ecx + 0x44C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x450) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    MEMF(ecx + 0x47C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD328)); /* movss */
    MEMF(ecx + 0x470) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0x474) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x478) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB82C)); /* movss */
    MEMF(ecx + 0x480) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ACF70)); /* movss */
    MEMF(ecx + 0x4D8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD324)); /* movss */
    MEMF(ecx + 0x4DC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD3B8)); /* movss */
    MEMF(ecx + 0x4E8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD320)); /* movss */
    MEMF(ecx + 0x4E0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD384)); /* movss */
    MEMF(ecx + 0x4E4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD31C)); /* movss */
    MEMF(ecx + 0x4EC) = xmm5.f[0]; /* movss */
    MEMF(ecx + 0x4D4) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x4F0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD318)); /* movss */
    MEMF(ecx + 0x4F4) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 4);
    xmm2 = XMM_SCALAR(MEMF(0x7AD3DC)); /* movss */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(edx * 4 + 0x7ACDAC);
    MEM32(ecx + 0x4F8) = edx;
    MEMF(ecx + 0x4FC) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x4D0) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AD314)); /* movss */
    MEMF(ecx + 0x2B0) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB1C8)); /* movss */
    MEMF(ecx + 0x2B4) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x2B8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD39C)); /* movss */
    MEMF(ecx + 0x2BC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD378)); /* movss */
    MEMF(ecx + 0x500) = xmm3.f[0]; /* movss */
    MEM32(ecx + 0xFC) = edi;
    MEMF(ecx + 0x100) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x104) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x108) = xmm4.f[0]; /* movss */
    MEM32(ecx + 0xEC) = 0x3E8;
    MEM32(ecx + 0xE8) = 5;
    edx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(edx * 4 + 0x7ACC6C);
    MEM32(ecx + 0xF0) = edx;
    edx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(0x7AD310)); /* movss */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(edx * 4 + 0x7ACC8C);
    MEM32(ecx + 0xF4) = edx;
    edx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(edx * 4 + 0x7ACCAC);
    MEM32(ecx + 0xF8) = edx;
    MEM32(ecx + 0x10C) = ebp;
    MEMF(ecx + 0xD4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD390)); /* movss */
    MEMF(ecx + 0xD8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD3C8)); /* movss */
    MEMF(ecx + 0xDC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD30C)); /* movss */
    MEMF(ecx + 0xE0) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xE4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    MEMF(ecx + 0xD0) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(edx * 4 + 0x7AD024);
    MEM32(ecx + 0x1C0) = edx;
    eax = MEM32(eax + 0x10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7AD044);
    MEM32(ecx + 0x1C4) = edx;
    eax = 6;
    MEM32(ecx + 0x1C8) = 0x12;
    MEM32(ecx + 0x1CC) = eax;
    MEM32(ecx + 0x1D0) = eax;
    PUSH32(esp, 0x0005B52Bu); RECOMP_ABI_CALL(0x00014359u, sub_00014359); /* call 0x00014359 */

loc_0005B52B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005B9C0
 * Original: 0x0005B9C0 - 0x0005BDB5 (1013 bytes, 207 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005B9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005B9C0: ;
    eax = MEM32(0x8F6A6C);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7AD068);
    MEM32(ecx + 0x40C) = edx;
    eax = MEM32(0x8F6A70);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7AD068);
    MEM32(ecx + 0x410) = edx;
    eax = MEM32(0x8F6A6C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7AD0A8);
    MEM32(ecx + 0x414) = edx;
    eax = MEM32(0x8F6A70);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7AD0A8);
    MEM32(ecx + 0x418) = edx;
    eax = MEM32(0x8F6A08);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACB8C);
    MEM32(ecx + 8) = edx;
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACCCC);
    MEM32(ecx + 0x2A0) = edx;
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACC6C);
    MEM32(ecx + 0xF0) = edx;
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACC8C);
    MEM32(ecx + 0xF4) = edx;
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xF) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACCAC);
    MEM32(ecx + 0xF8) = edx;
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACBEC);
    MEM32(ecx + 0x250) = edx;
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACBCC);
    MEM32(ecx + 0x254) = edx;
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACBAC);
    MEM32(ecx + 0x258) = edx;
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x17) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACC0C);
    MEM32(ecx + 0x248) = edx;
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x17) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACC2C);
    MEM32(ecx + 0x24C) = edx;
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x17) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACC4C);
    MEM32(ecx + 0x264) = edx;
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xB) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACD0C);
    MEM32(ecx + 0x310) = edx;
    eax = MEM32(0x8F6A18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACD2C);
    MEM32(ecx + 0x70) = edx;
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x13) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACD4C);
    MEM32(ecx + 4) = edx;
    eax = MEM32(0x8F6A08);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1B) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACD6C);
    MEM32(ecx + 0x14) = edx;
    eax = MEM32(0x8F6A0C);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACD8C);
    MEM32(ecx + 0xC4) = edx;
    eax = MEM32(0x8F6A0C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACDAC);
    MEM32(ecx + 0x4F8) = edx;
    eax = MEM32(0x8F6A0C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACDCC);
    MEM32(ecx + 0xC0) = edx;
    eax = MEM32(0x8F6A0C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACDEC);
    MEM32(ecx + 0x218) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x8F6A0E));
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACE0C);
    MEM32(ecx + 0x370) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x8F6A0E));
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACE2C);
    MEM32(ecx + 0x374) = edx;
    eax = MEM32(0x8F6A0C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACE4C);
    MEM32(ecx + 0x22C) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x8F6A0F));
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0x7ACE6C);
    MEM32(ecx + 0x1FC) = edx;
    eax = MEM32(0x8F6A10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x2A4) = eax;
    edx = MEM32(0x8F6A10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edx * 4 + 0x7ACE8C);
    MEM32(ecx + 0x2C8) = eax;
    edx = MEM32(0x8F6A10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edx * 4 + 0x7ACEAC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x2D0) = eax;
    SET_LO8(edx, MEM8(0x8F6A12));
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edx * 4 + 0x7ACECC);
    MEM32(ecx + 0x364) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x8F6A13));
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edx * 4 + 0x7ACEEC);
    MEM32(ecx + 0x28C) = eax;
    edx = MEM32(0x8F6A10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(edx * 4 + 0x7ACF0C);
    MEM32(ecx + 0x294) = eax;
    edx = MEM32(0x8F6A14);
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edx * 4 + 0x7ACF2C);
    MEM32(ecx + 0x288) = eax;
    edx = MEM32(0x8F6A14);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edx * 4 + 0x7ACF4C);
    MEM32(ecx + 0x290) = eax;
    edx = MEM32(0x8F6A14);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edx * 4 + 0x7ACF4C);
    MEM32(ecx + 0x298) = eax;
    edx = MEM32(0x8F6A14);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edx * 4 + 0x7AD0E8);
    MEM32(ecx + 0x52C) = eax;
    edx = MEM32(0x8F6A10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edx * 4 + 0x7AD108);
    MEM32(ecx + 0x530) = eax;
    edx = MEM32(0x8F6A18);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0 = XMM_SCALAR(MEMF(0x7ACF6C)); /* movss */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edx * 4 + 0x7AD024);
    MEM32(ecx + 0x1C0) = eax;
    edx = MEM32(0x8F6A18);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edx * 4 + 0x7AD044);
    MEM32(ecx + 0x1C4) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x8F6A16));
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edx * 4 + 0x7ACF74);
    MEMF(ecx + 0x324) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ACF70)); /* movss */
    MEM32(ecx + 0x31C) = eax;
    MEMF(ecx + 0x334) = xmm0.f[0]; /* movss */
    edx = MEM32(0x8F6A14);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(edx * 4 + 0x7ACF94);
    MEM32(ecx + 0x230) = eax;
    g_seh_ebp = ebp; sub_00014359(); return; /* tail jmp 0x00014359 */

}

/**
 * sub_0005BEC0
 * Original: 0x0005BEC0 - 0x0005BF14 (84 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005BEC0(void)
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

loc_0005BEC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x0005BECFu); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_0005BECF: ;
    esi = esi ^ 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0005BEDAu); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_0005BEDA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005BEF2; /* je: equal / zero */

loc_0005BEE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005BF08; /* jne: not equal / not zero */

loc_0005BEE5: ;
    fp_push(MEMF(ebx + eax * 4 + 0x424)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0005BEF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005BF08; /* je: equal / zero */

loc_0005BEF6: ;
    POP32(esp, edi);
    eax = 1;
    fp_push(MEMF(ebx + eax * 4 + 0x424)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0005BF08: ;
    fp_push(MEMF(ebx + 0x428)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005BF30
 * Original: 0x0005BF30 - 0x0005BF84 (84 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005BF30(void)
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

loc_0005BF30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x0005BF3Fu); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_0005BF3F: ;
    esi = esi ^ 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0005BF4Au); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_0005BF4A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005BF62; /* je: equal / zero */

loc_0005BF51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005BF78; /* jne: not equal / not zero */

loc_0005BF55: ;
    fp_push(MEMF(ebx + eax * 4 + 0x42C)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0005BF62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005BF78; /* je: equal / zero */

loc_0005BF66: ;
    POP32(esp, edi);
    eax = 1;
    fp_push(MEMF(ebx + eax * 4 + 0x42C)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0005BF78: ;
    fp_push(MEMF(ebx + 0x430)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005BFA0
 * Original: 0x0005BFA0 - 0x0005C00B (107 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005BFA0(void)
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

loc_0005BFA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0005BFAFu); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_0005BFAF: ;
    ebx = eax;
    eax = esi;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005BFBCu); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_0005BFBC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005BFDB; /* je: equal / zero */

loc_0005BFC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005BFF8; /* jne: not equal / not zero */

loc_0005BFC7: ;
    fp_push(MEMF(edi + eax * 4 + 0x41C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + esi * 4 + 0x414)); /* fmul dword ptr [edi + esi*4 + 0x414] */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0005BFDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005BFF8; /* je: equal / zero */

loc_0005BFDF: ;
    eax = 1;
    fp_push(MEMF(edi + eax * 4 + 0x41C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + esi * 4 + 0x414)); /* fmul dword ptr [edi + esi*4 + 0x414] */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0005BFF8: ;
    fp_push(MEMF(edi + esi * 4 + 0x414)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x420)); /* fmul dword ptr [edi + 0x420] */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005C030
 * Original: 0x0005C030 - 0x0005C0E3 (179 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005C030: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7AD484)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    goto loc_0005C050;

    /* nop */

loc_0005C050: ;
    edx = MEM32(eax + 0x8E8FA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    MEM32(edx + 0x2C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0005C050; /* jl: less (signed <) */

loc_0005C063: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0005C071u); RECOMP_ABI_CALL(0x00022FDFu, sub_00022FDF); /* call 0x00022FDF */

loc_0005C071: ;
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x7AD480)); /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_0005C087; /* jl: less (signed <) */

loc_0005C081: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_0005C087: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x8E8F84);
    eax = esp + 8;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005C0AFu); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_0005C0AF: ;
    edx = MEM32(0x8E8F84);
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x0005C0C2u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_0005C0C2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    eax = 0x8F95B0;
    if (CMP_G(_fas, _fbs)) goto loc_0005C0D1; /* jg: greater (signed >) */

loc_0005C0CC: ;
    eax = 0x8F95EC;

loc_0005C0D1: ;
    PUSH32(esp, eax);
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0x0005C0DFu); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_0005C0DF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0005C110
 * Original: 0x0005C110 - 0x0005C161 (81 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C110(void)
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

loc_0005C110: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax * 4 + 0x8F6A6C);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005C12A; /* jne: not equal / not zero */

loc_0005C120: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x23C)); /* movss */
    goto loc_0005C132;

loc_0005C12A: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x240)); /* movss */

loc_0005C132: ;
    PUSH32(esp, eax);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0005C13Eu); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_0005C13E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005C15A; /* jle: less or equal (signed <=) */

loc_0005C146: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_0005C15A: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005C180
 * Original: 0x0005C180 - 0x0005C1A2 (34 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C180(void)
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

loc_0005C180: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax * 4 + 0x8F6A6C);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005C199; /* jne: not equal / not zero */

loc_0005C190: ;
    fp_push(MEMF(ecx + 0x234)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_0005C199: ;
    fp_push(MEMF(ecx + 0x238)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005C1B0
 * Original: 0x0005C1B0 - 0x0005C213 (99 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005C1B0: ;
    SET_LO16(eax, MEM16(0x8F6F52));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005C1BF; /* jl: less (signed <) */

loc_0005C1BC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0005C1BF: ;
    ecx = SX16(LO16(eax));
    eax = MEM32(esp + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    esi = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = ecx * 8 + 0x8F6F54;
    POP32(esp, esi);
    MEM8(ecx + 1) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x1C));
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 8));
    SET_LO8(edx, LO8(edx) | 0x20);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 2) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(ecx + 3) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(ecx + 4) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x14));
    MEM8(ecx + 5) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(ecx + 6) = LO8(eax);
    MEM8(ecx + 7) = LO8(edx);
    MEM16(0x8F6F52) = MEM16(0x8F6F52) + 1;
    _fa = (uint32_t)(MEM16(0x8F6F52)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0005C230
 * Original: 0x0005C230 - 0x0005C2AE (126 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005C230: ;
    SET_LO16(eax, MEM16(0x8F6F52));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005C23F; /* jl: less (signed <) */

loc_0005C23C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0005C23F: ;
    ecx = SX16(LO16(eax));
    eax = MEM32(esp + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    esi = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = ecx * 8 + 0x8F6F54;
    MEM8(ecx + 3) = 0x80;
    POP32(esp, esi);
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 8));
    MEM8(ecx + 2) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM8(ecx + 1) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(ecx + 5) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    MEM8(ecx + 4) = LO8(edx);
    edx = MEM32(esp + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_0005C284; /* je: equal / zero */

loc_0005C281: ;
    edx = edx | 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0005C284: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005C28B; /* je: equal / zero */

loc_0005C288: ;
    edx = edx | 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0005C28B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005C295; /* je: equal / zero */

loc_0005C28F: ;
    edx = edx | 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0005C295: ;
    MEM8(ecx + 6) = LO8(edx);
    SET_LO16(eax, MEM16(0x8F6F52));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    MEM16(0x8F6F52) = LO16(eax);
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    esp += 4; return; /* ret */

}

/**
 * sub_0005C2D0
 * Original: 0x0005C2D0 - 0x0005C345 (117 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005C2D0: ;
    SET_LO16(eax, MEM16(0x8F6F52));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005C2DF; /* jl: less (signed <) */

loc_0005C2DC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0005C2DF: ;
    ecx = SX16(LO16(eax));
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx * 8 + 0x8F6F54) = LO8(eax);
    edx = (uint32_t)(int32_t)SMEM16(0x8F6F52);
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(edx * 8 + 0x8F6F55) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM16(0x8F6F52);
    MEM8(eax * 8 + 0x8F6F56) = LO8(ecx);
    edx = (uint32_t)(int32_t)SMEM16(0x8F6F52);
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(esp + 8));
    MEM8(edx * 8 + 0x8F6F57) = 0x40;
    ecx = (uint32_t)(int32_t)SMEM16(0x8F6F52);
    MEM16(ecx * 8 + 0x8F6F58) = LO16(eax);
    SET_LO16(eax, MEM16(0x8F6F52));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    MEM16(0x8F6F52) = LO16(eax);
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    esp += 4; return; /* ret */

}

/**
 * sub_0005C370
 * Original: 0x0005C370 - 0x0005C391 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005C370: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005C382; /* jl: less (signed <) */

loc_0005C37E: ;
    eax = SX8(LO8(eax));
    esp += 4; return; /* ret */

loc_0005C382: ;
    SET_LO8(edx, MEM8(ecx + 0x39));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x14 (8-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0005C3A0
 * Original: 0x0005C3A0 - 0x0005C3A8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005C3A0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0005C3B0
 * Original: 0x0005C3B0 - 0x0005C451 (161 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005C3B0: ;
    SET_LO8(eax, MEM8(0x896176));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = (uint32_t)(int32_t)SMEM8(ecx + 0x3F);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0005C3C8; /* je: equal / zero */

loc_0005C3C4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0005C3ED;

loc_0005C3C8: ;
    SET_LO8(eax, MEM8(ecx + 0x46));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005C3D6; /* jle: less or equal (signed <=) */

loc_0005C3CF: ;
    edi = 1;
    goto loc_0005C3E3;

loc_0005C3D6: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edx;

loc_0005C3E3: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C3ED; /* jne: not equal / not zero */

loc_0005C3EA: ;
    edi = edi | 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0005C3ED: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C404; /* je: equal / zero */

loc_0005C3F4: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = edx;
    goto loc_0005C407;

loc_0005C404: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0005C407: ;
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C41E; /* je: equal / zero */

loc_0005C40E: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    PUSH32(esp, ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    POP32(esp, ebx);
    goto loc_0005C421;

loc_0005C41E: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0005C421: ;
    eax = MEM32(ecx + 0x20);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM16(0x896160);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(0x896168);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005C44Au); RECOMP_ABI_CALL(0x000372A0u, sub_000372A0); /* call 0x000372A0 */

loc_0005C44A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0005C480
 * Original: 0x0005C480 - 0x0005C485 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005C480: ;
    g_seh_ebp = ebp; sub_000324C6(); return; /* tail jmp 0x000324C6 */

}

/**
 * sub_0005C490
 * Original: 0x0005C490 - 0x0005C4AE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005C490: ;
    eax = (uint32_t)(int32_t)SMEM16(0x896168);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005C49Fu); RECOMP_ABI_CALL(0x00023D18u, sub_00023D18); /* call 0x00023D18 */

loc_0005C49F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005C4A6u); RECOMP_ABI_CALL(0x00021F77u, sub_00021F77); /* call 0x00021F77 */

loc_0005C4A6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000324C6(); return; /* tail jmp 0x000324C6 */

}

/**
 * sub_0005C4C0
 * Original: 0x0005C4C0 - 0x0005C4E9 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005C4C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0005C4CFu); RECOMP_ABI_CALL(0x00023D18u, sub_00023D18); /* call 0x00023D18 */

loc_0005C4CF: ;
    edx = MEM32(0x8BFE70);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0005C4E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C4DDu); } /* indirect call */
    }

loc_0005C4E0: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001290F(); return; /* tail jmp 0x0001290F */

}

/**
 * sub_0005C500
 * Original: 0x0005C500 - 0x0005C501 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C500(void)
{

loc_0005C500: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0005C510
 * Original: 0x0005C510 - 0x0005C511 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C510(void)
{

loc_0005C510: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0005C520
 * Original: 0x0005C520 - 0x0005C5C5 (165 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005C520: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x1D);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x1C);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AB1C8)); /* movss */
    ecx = MEM32(ecx * 4 + 0x8E8FA8);
    PUSH32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(edx * 4 + 0x8E8FA8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_0005C572; /* ja: above (unsigned >) */

loc_0005C553: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x5C5C8); /* switch: 9 entries, 3 targets */
    if (_jt == 0x0005C55Au) goto loc_0005C55A;
    if (_jt == 0x0005C564u) goto loc_0005C564;
    if (_jt == 0x0005C572u) goto loc_0005C572;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0005C55A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD39C)); /* movss */
    goto loc_0005C56C;

loc_0005C564: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD3A8)); /* movss */

loc_0005C56C: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_0005C572: ;
    SET_LO8(eax, MEM8(ecx + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(esp + 0xC);
    if (CMP_L(_fas, _fbs)) goto loc_0005C59C; /* jl: less (signed <) */

loc_0005C580: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0005C58Eu); RECOMP_ABI_CALL(0x00016F50u, sub_00016F50); /* call 0x00016F50 */

loc_0005C58E: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0005C599u); RECOMP_ABI_CALL(0x00032D31u, sub_00032D31); /* call 0x00032D31 */

loc_0005C599: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005C59C: ;
    SET_LO8(eax, MEM8(edi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005C5C2; /* jl: less (signed <) */

loc_0005C5A6: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0005C5B4u); RECOMP_ABI_CALL(0x00016F50u, sub_00016F50); /* call 0x00016F50 */

loc_0005C5B4: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0005C5BFu); RECOMP_ABI_CALL(0x00032D31u, sub_00032D31); /* call 0x00032D31 */

loc_0005C5BF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005C5C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005C620
 * Original: 0x0005C620 - 0x0005C650 (48 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005C620: ;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005C63F; /* jle: less or equal (signed <=) */

loc_0005C62A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0005C633u); RECOMP_ABI_CALL(0x000226FCu, sub_000226FC); /* call 0x000226FC */

loc_0005C633: ;
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0005C63Cu); RECOMP_ABI_CALL(0x000226FCu, sub_000226FC); /* call 0x000226FC */

loc_0005C63C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005C63F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0005C650
 * Original: 0x0005C650 - 0x0005C659 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005C650: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005C660
 * Original: 0x0005C660 - 0x0005C73A (218 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005C660: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x8E8FA8);
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0005C681; /* jl: less (signed <) */

loc_0005C678: ;
    edi = MEM32(eax * 4 + 0x8E8FA8);
    goto loc_0005C683;

loc_0005C681: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0005C683: ;
    SET_LO8(eax, MEM8(ebx + 0x26));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C736; /* jne: not equal / not zero */

loc_0005C68E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    edx = MEM32(ecx * 4 + 0x8F0040);
    ecx = MEM32(edx + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x24);
    eax = ecx + eax + 0x36;
    MEM8(eax) = MEM8(eax) + 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = MEM32(edx * 4 + 0x8F0040);
    eax = MEM32(eax + 0x10);
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = MEM32(ecx * 4 + 0x8F0040);
    ecx = MEM32(eax + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0x0005C6CFu); RECOMP_ABI_CALL(0x0002D976u, sub_0002D976); /* call 0x0002D976 */

loc_0005C6CF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005C6D5u); RECOMP_ABI_CALL(0x00020118u, sub_00020118); /* call 0x00020118 */

loc_0005C6D5: ;
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C6E9; /* je: equal / zero */

loc_0005C6E0: ;
    esi = MEM32(esi + 0x230);
    MEM8(esi + 0xC) = MEM8(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0005C6E9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C736; /* je: equal / zero */

loc_0005C6ED: ;
    eax = MEM32(edi + 0x230);
    MEM16(eax + 2) = MEM16(eax + 2) + 1;
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x230);
    MEM16(eax + 0xC) = MEM16(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x230);
    MEM16(eax + 0xE) = MEM16(eax + 0xE) + 1;
    _fa = (uint32_t)(MEM16(eax + 0xE)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0005C711u); RECOMP_ABI_CALL(0x0002D976u, sub_0002D976); /* call 0x0002D976 */

loc_0005C711: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005C717u); RECOMP_ABI_CALL(0x00012E14u, sub_00012E14); /* call 0x00012E14 */

loc_0005C717: ;
    SET_LO8(eax, MEM8(ebx + 0x27));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C736; /* jne: not equal / not zero */

loc_0005C721: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0005C727u); RECOMP_ABI_CALL(0x0002D976u, sub_0002D976); /* call 0x0002D976 */

loc_0005C727: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000269D2(); return; /* tail jmp 0x000269D2 */

loc_0005C736: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0005C770
 * Original: 0x0005C770 - 0x0005C7F0 (128 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0005C770: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x44);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    PUSH32(esp, edi);
    edi = MEM32(eax * 4 + 0x8E8FA8);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005C797; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0005C790: ;
    ebx = 1;
    goto loc_0005C799;

loc_0005C797: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0005C799: ;
    edx = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0005C7A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C7A4u); } /* indirect call */
    }

loc_0005C7A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0005C7AEu); RECOMP_ABI_CALL(0x00032593u, sub_00032593); /* call 0x00032593 */

loc_0005C7AE: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C7C7; /* jne: not equal / not zero */

loc_0005C7B8: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    eax = MEM32(eax * 4 + 0x8F0040);
    MEM16(eax + 0x18) = MEM16(eax + 0x18) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x18)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0005C7C7: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0005C7D3u); RECOMP_ABI_CALL(0x000226FCu, sub_000226FC); /* call 0x000226FC */

loc_0005C7D3: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C7EC; /* je: equal / zero */

loc_0005C7DD: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    eax = MEM32(edx * 4 + 0x8F0040);
    MEM16(eax + 0x1A) = MEM16(eax + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0005C7EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
