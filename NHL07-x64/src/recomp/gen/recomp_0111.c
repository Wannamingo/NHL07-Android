/**
 * nhl_07_recomp - Recompiled code chunk 111
 * Functions: 250 (0x00133A10 - 0x0013B470)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00133A10
 * Original: 0x00133A10 - 0x00133A2F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133A10: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7DD770;
    if (TEST_Z(_fa, _fb)) goto loc_00133A29; /* je: equal / zero */

loc_00133A20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00133A26u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00133A26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00133A29: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00133A40
 * Original: 0x00133A40 - 0x00133C72 (562 bytes, 139 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133A40(void)
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

loc_00133A40: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_00133A94; /* ja: above (unsigned >) */

loc_00133A57: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x133C74); /* switch: 11 entries, 6 targets */
    if (_jt == 0x00133A5Eu) goto loc_00133A5E;
    if (_jt == 0x00133A68u) goto loc_00133A68;
    if (_jt == 0x00133A72u) goto loc_00133A72;
    if (_jt == 0x00133A7Cu) goto loc_00133A7C;
    if (_jt == 0x00133A86u) goto loc_00133A86;
    if (_jt == 0x00133A8Eu) goto loc_00133A8E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00133A5E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7DD67C)); /* movss */
    goto loc_00133A8E;

loc_00133A68: ;
    xmm0 = XMM_SCALAR(MEMF(0x7DD684)); /* movss */
    goto loc_00133A8E;

loc_00133A72: ;
    xmm0 = XMM_SCALAR(MEMF(0x7DD680)); /* movss */
    goto loc_00133A8E;

loc_00133A7C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7DD68C)); /* movss */
    goto loc_00133A8E;

loc_00133A86: ;
    xmm0 = XMM_SCALAR(MEMF(0x7DD690)); /* movss */

loc_00133A8E: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00133A94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133B97; /* je: equal / zero */

loc_00133A9C: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00133B53; /* jle: less or equal (signed <=) */

loc_00133AA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00133B53; /* jg: greater (signed >) */

loc_00133AAB: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7B1DA0)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00133B0B; /* jne: not equal / not zero */

loc_00133AC0: ;
    ecx = MEM32(0x8E9394);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133AD9; /* jne: not equal / not zero */

loc_00133ACB: ;
    xmm0 = XMM_SCALAR(MEMF(0x7CEF88)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_00133AD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133B0B; /* jne: not equal / not zero */

loc_00133ADD: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00133AE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133AE2u); } /* indirect call */
    }

loc_00133AE5: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00133B0B; /* jbe: below or equal (unsigned <=) */

loc_00133AF1: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7DD664)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    goto loc_00133B13;

loc_00133B0B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7DD664)); /* movss */

loc_00133B13: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00133B3C; /* jns: not sign (positive) */

loc_00133B1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_00133B3C; /* je: equal / zero */

loc_00133B32: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_00133B3C: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133B97; /* je: equal / zero */

loc_00133B41: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    goto loc_00133B97;

loc_00133B53: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133B83; /* je: equal / zero */

loc_00133B5A: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0xF0);
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7ABD68); /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00133B97; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00133B83: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7DD664); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00133B97: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xF0);
    PUSH32(esp, 0x00133BA5u); RECOMP_ABI_CALL(0x000214BEu, sub_000214BE); /* call 0x000214BE */

loc_00133BA5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00133BD0; /* je: equal / zero */

loc_00133BBA: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9730)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_00133BD6;

loc_00133BD0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_00133BD6: ;
    eax = MEM32(esi + 4);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    eax = MEM32(ecx * 4 + 0x8F0040);
    edx = MEM32(eax);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0xD2);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xD2);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    if ((_fas >= 0)) goto loc_00133C0D; /* jns: not sign (positive) */

loc_00133BF9: ;
    xmm1 = XMM_SCALAR(MEMF(0x8E9734)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_00133C0D: ;
    eax = (uint32_t)(int32_t)SMEM16(0x896166);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00133C31; /* je: equal / zero */

loc_00133C17: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00133C27; /* je: equal / zero */

loc_00133C1A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00133C45; /* jne: not equal / not zero */

loc_00133C1D: ;
    xmm1 = XMM_SCALAR(MEMF(0x8E9744)); /* movss */
    goto loc_00133C39;

loc_00133C27: ;
    xmm1 = XMM_SCALAR(MEMF(0x8E9740)); /* movss */
    goto loc_00133C39;

loc_00133C31: ;
    xmm1 = XMM_SCALAR(MEMF(0x8E973C)); /* movss */

loc_00133C39: ;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_00133C45: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133C5A; /* je: equal / zero */

loc_00133C4E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133C5A; /* je: equal / zero */

loc_00133C52: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133C5A; /* je: equal / zero */

loc_00133C56: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133C6B; /* jne: not equal / not zero */

loc_00133C5A: ;
    xmm1 = XMM_SCALAR(MEMF(0x8E9738)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */

loc_00133C6B: ;
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
 * sub_00133C72
 * Original: 0x00133C72 - 0x00133D40 (206 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133C72(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00133C72: ;
    edi = edi;

    g_seh_ebp = ebp; sub_00133D40(); return; /* fallthrough 0x00133D40 */

}

/**
 * sub_00133D40
 * Original: 0x00133D40 - 0x00134130 (1008 bytes, 313 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133D40(void)
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

loc_00133D40: ;
    PUSH32(esp, 0x00133D45u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_00133D45: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00133D5F; /* je: equal / zero */

loc_00133D49: ;
    eax = MEM32(0x8EADA0);
    MEM32(eax + 0x2C) = 1;
    MEM32(eax + 0x30) = 2;
    esp += 8; return; /* ret 4 */

loc_00133D5F: ;
    edx = MEM32(0x8E8F84);
    ecx = MEM32(edx + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x30); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 1;
    eax = 2;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00133D88; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x30)) */

loc_00133D84: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00133D8D;

loc_00133D88: ;
    edi = 2;

loc_00133D8D: ;
    esi = MEM32(0x8E9394);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00133DAE; /* je: equal / zero */

loc_00133D9C: ;
    ecx = MEM32(esi + 0x20);
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x30); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00133DA9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x30)) */

loc_00133DA5: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00133DAE;

loc_00133DA9: ;
    ebx = 2;

loc_00133DAE: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFFDu)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFFDu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0013411D; /* ja: above (unsigned >) */

loc_00133DBE: ;
    ecx = ZX8(MEM8(ecx + 0x134154));
    { uint32_t _jt = MEM32(ecx * 4 + 0x134130); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00133DCCu) goto loc_00133DCC;
    if (_jt == 0x00133E53u) goto loc_00133E53;
    if (_jt == 0x00133E6Cu) goto loc_00133E6C;
    if (_jt == 0x00133EB4u) goto loc_00133EB4;
    if (_jt == 0x00133EBCu) goto loc_00133EBC;
    if (_jt == 0x00133F54u) goto loc_00133F54;
    if (_jt == 0x0013402Au) goto loc_0013402A;
    if (_jt == 0x001340F7u) goto loc_001340F7;
    if (_jt == 0x0013411Du) goto loc_0013411D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00133DCC: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(0x8E9380);
    SET_LO8(eax, MEM8(eax + ecx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00133E30; /* je: equal / zero */

loc_00133DDE: ;
    ecx = MEM32(edx + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00133E30; /* jge: greater or equal (signed >=) */

loc_00133DE8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    ebp = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00133E0F; /* jne: not equal / not zero */

loc_00133DEE: ;
    SET_LO8(ebx, MEM8(esi + 0x64));
    ecx = MEM32(0x8EADA0);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x2C) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

loc_00133E0F: ;
    SET_LO8(ecx, MEM8(esi + 0x64));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(0x8EADA0);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x2C) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = eax + eax + 1;
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

loc_00133E30: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    ebp = edi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001340DF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00133E3B: ;
    ecx = MEM32(0x8EADA0);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x2C) = ebp;
    eax = 1;
    POP32(esp, ebp);
    MEM32(ecx + 0x30) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00133E53: ;
    edx = MEM32(0x8E9380);
    eax = MEM32(edx + 0x10);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x132);
    ecx = MEM32(ecx * 4 + 0x8E904C);
    goto loc_00133ED2;

loc_00133E6C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x895B24;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp = edi;
    ecx = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00133EB0; /* jle: less or equal (signed <=) */

loc_00133E83: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00133E88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133E85u); } /* indirect call */
    }

loc_00133E88: ;
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x38); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001340DF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x38)) */

loc_00133E98: ;
    ecx = MEM32(0x8EADA0);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x2C) = ebp;
    eax = 1;
    POP32(esp, ebp);
    MEM32(ecx + 0x30) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00133EB0: ;
    edx = MEM32(esi);
    goto loc_00133ED6;

loc_00133EB4: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    goto loc_00134114;

loc_00133EBC: ;
    PUSH32(esp, 0x00133EC1u); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_00133EC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00133EE8; /* jl: less (signed <) */

loc_00133EC5: ;
    ecx = MEM32(eax * 4 + 0x8E8EB8);
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00133EE8; /* jne: not equal / not zero */

loc_00133ED2: ;
    edx = MEM32(ecx);
    ebp = edi;

loc_00133ED6: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00133ED9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133ED6u); } /* indirect call */
    }

loc_00133ED9: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x38); /* comiss */
    goto loc_00134116;

loc_00133EE8: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7DD644); /* comiss */
    ebp = ebx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00133F18; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7DD644)) */

loc_00133EFB: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    ecx = MEM32(0x8EADA0);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x2C) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

loc_00133F18: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca > _fcb)) goto loc_001340DF; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00133F2A: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7ABD70); /* comiss */
    if ((_fca > _fcb)) goto loc_0013400A; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7ABD70)) */

loc_00133F37: ;
    SET_LO8(ecx, MEM8(esi + 0x64));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(0x8EADA0);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x2C) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

loc_00133F54: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edi;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00133F60: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00133F84; /* jne: not equal / not zero */

loc_00133F64: ;
    ecx = MEM32(eax + 0x8E8F88);
    esi = MEM32(ecx + 0x20);
    xmm2 = XMM_SCALAR(MEMF(esi + 0x6C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) edx = ecx; /* cmova */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00133F60; /* jl: less (signed <) */

loc_00133F80: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00133F9B; /* je: equal / zero */

loc_00133F84: ;
    ecx = MEM32(edx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00133FA8; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00133F91: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    goto loc_00133FB0;

loc_00133F9B: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_00133FB0; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00133FA8: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00133FB0: ;
    edx = MEM32(0x8E9380);
    eax = MEM32(edx + 0x10);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x132);
    ecx = MEM32(ecx * 4 + 0x8E904C);
    edx = MEM32(ecx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00133FD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133FCFu); } /* indirect call */
    }

loc_00133FD2: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_00133FF2; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00133FEA: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00133FF2: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00134022; /* jp: parity */

loc_00134001: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001340DF; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0013400A: ;
    ecx = MEM32(0x8EADA0);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x2C) = ebp;
    eax = 1;
    POP32(esp, ebp);
    MEM32(ecx + 0x30) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00134022: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    goto loc_00134116;

loc_0013402A: ;
    eax = MEM32(0x8E9390);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001340A5; /* je: equal / zero */

loc_00134033: ;
    ecx = MEM32(eax + 0x20);
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x30); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00134040; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x30)) */

loc_0013403C: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00134045;

loc_00134040: ;
    ebp = 2;

loc_00134045: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7DD644); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00134070; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7DD644)) */

loc_00134053: ;
    SET_LO8(eax, MEM8(eax + 0x64));
    ecx = MEM32(0x8EADA0);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x2C) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

loc_00134070: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001340DF; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0013407A: ;
    xmm0 = xmm1; /* movaps */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7ABD70); /* comiss */
    if ((_fca > _fcb)) goto loc_0013400A; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7ABD70)) */

loc_00134086: ;
    SET_LO8(edx, MEM8(eax + 0x64));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ecx;
    ecx = MEM32(0x8EADA0);
    MEM32(ecx + 0x2C) = ebp;
    POP32(esp, ebp);
    MEM32(ecx + 0x30) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001340A5: ;
    xmm2 = XMM_SCALAR(MEMF(0x7ABD70)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    ebp = edi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001340C9; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_001340B4: ;
    ecx = MEM32(0x8EADA0);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x2C) = ebp;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    MEM32(ecx + 0x30) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001340C9: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0013400A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001340D2: ;
    xmm0 = XMM_SCALAR(MEMF(0x7DD644)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00134118; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001340DF: ;
    ecx = MEM32(0x8EADA0);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x2C) = ebp;
    eax = 3;
    POP32(esp, ebp);
    MEM32(ecx + 0x30) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001340F7: ;
    edx = (uint32_t)(int32_t)SMEM8(0x896178);
    ecx = MEM32(edx * 4 + 0x8E904C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0013410Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00134107u); } /* indirect call */
    }

loc_0013410A: ;
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x38); /* comiss */

loc_00134114: ;
    ebp = edi;

loc_00134116: ;
    if ((_fca > _fcb)) goto loc_001340B4; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax + 0x38)) */

loc_00134118: ;
    eax = 4;

loc_0013411D: ;
    ecx = MEM32(0x8EADA0);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x2C) = ebp;
    POP32(esp, ebp);
    MEM32(ecx + 0x30) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00134270
 * Original: 0x00134270 - 0x00134297 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134270: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00134279u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00134279: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013428C; /* je: equal / zero */

loc_00134280: ;
    MEM32(eax) = 0x7DD774;
    MEM32(0x8F0674) = eax;
    esp += 4; return; /* ret */

loc_0013428C: ;
    MEM32(0x8F0674) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001342A0
 * Original: 0x001342A0 - 0x001342BF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001342A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001342A0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7DD774;
    if (TEST_Z(_fa, _fb)) goto loc_001342B9; /* je: equal / zero */

loc_001342B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001342B6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001342B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001342B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001342D0
 * Original: 0x001342D0 - 0x00134458 (392 bytes, 103 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001342D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001342D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013441F; /* je: equal / zero */

loc_001342E5: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013441F; /* je: equal / zero */

loc_001342F2: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013441F; /* je: equal / zero */

loc_001342FD: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134317; /* je: equal / zero */

loc_00134305: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013441F; /* jle: less or equal (signed <=) */

loc_0013430E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0013441F; /* jg: greater (signed >) */

loc_00134317: ;
    eax = MEM32(ecx + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7C71E8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013441F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7C71E8)) */

loc_0013433D: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AB1D8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013441F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0013434E: ;
    eax = MEM32(0x8F0108);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013441F; /* jne: not equal / not zero */

loc_0013435B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013441F; /* jne: not equal / not zero */

loc_00134363: ;
    edx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7DD69C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013441F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7DD69C)) */

loc_00134378: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x218;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00134385u); RECOMP_ABI_CALL(0x00015AA6u, sub_00015AA6); /* call 0x00015AA6 */

loc_00134385: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013441F; /* jne: not equal / not zero */

loc_0013438D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001343A0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0013439B: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001343A4;

loc_001343A0: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_001343A4: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AA7D8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013441F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001343B1: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001343B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001343B6u); } /* indirect call */
    }

loc_001343B9: ;
    edx = MEM32(eax + 0x20);
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001343C9u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_001343C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001343DA; /* je: equal / zero */

loc_001343D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001343DA; /* je: equal / zero */

loc_001343D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013441F; /* jne: not equal / not zero */

loc_001343DA: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9710)); /* movss */
    PUSH32(esp, 0xB2);
    PUSH32(esp, 0x7DD780);
    PUSH32(esp, 0x64);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001343F9u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_001343F9: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB2D0); /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013441F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00134413: ;
    eax = 0x80;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0013441F: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 7 (32-bit) */
    eax = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0013443C; /* jne: not equal / not zero */

loc_0013442A: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x1A0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013443C; /* je: equal / zero */

loc_00134437: ;
    eax = 4;

loc_0013443C: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edx + 0x2C);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00134451; /* jns: not sign (positive) */

loc_00134447: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00134451; /* je: equal / zero */

loc_0013444C: ;
    eax = 4;

loc_00134451: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001344C0
 * Original: 0x001344C0 - 0x0013451B (91 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001344C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001344C0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_A(_fa, _fb)) goto loc_00134507; /* ja: above (unsigned >) */

loc_001344D3: ;
    eax = ZX8(MEM8(eax + 0x13452C));
    { uint32_t _jt = MEM32(eax * 4 + 0x13451C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001344E1u) goto loc_001344E1;
    if (_jt == 0x001344F5u) goto loc_001344F5;
    if (_jt == 0x00134502u) goto loc_00134502;
    if (_jt == 0x00134507u) goto loc_00134507;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001344E1: ;
    PUSH32(esp, 0x001344E6u); RECOMP_ABI_CALL(0x000126C6u, sub_000126C6); /* call 0x000126C6 */

loc_001344E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00134502; /* jne: not equal / not zero */

loc_001344EA: ;
    _fa = (uint32_t)(MEM32(esi + 0x3B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3B4), 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00134507; /* jl: less (signed <) */

loc_001344F3: ;
    goto loc_00134502;

loc_001344F5: ;
    ecx = MEM32(esi + 0x230);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00134507; /* jns: not sign (positive) */

loc_00134502: ;
    edx = 0x20;

loc_00134507: ;
    _fa = (uint32_t)(MEM8(esi + 0x3C2)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x3C2), 3 (8-bit) */
    POP32(esp, esi);
    eax = 0x20;
    if (CMP_GE(_fas, _fbs)) goto loc_00134518; /* jge: greater or equal (signed >=) */

loc_00134516: ;
    eax = edx;

loc_00134518: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00134560
 * Original: 0x00134560 - 0x001345C7 (103 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134560(void)
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

loc_00134560: ;
    edx = MEM32(0x8F6A68);
    PUSH32(esp, esi);
    esi = edx;
    esi = esi & 0xC000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x4000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001345C3; /* je: equal / zero */

loc_00134579: ;
    _fa = (uint32_t)(MEM32(0x8E932C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8E932C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001345C3; /* je: equal / zero */

loc_00134582: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x1C0 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001345C3; /* je: equal / zero */

loc_0013458A: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00134599u); RECOMP_ABI_CALL(0x0002C166u, sub_0002C166); /* call 0x0002C166 */

loc_00134599: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001345B0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001345AB: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001345B4;

loc_001345B0: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_001345B4: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001345C1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_001345BB: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001345C1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001345C3: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001345E0
 * Original: 0x001345E0 - 0x00134607 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001345E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001345E0: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM16(eax + 0xC) = 0x4A;
    MEM32(eax) = 0x7DD7D8;
    MEM8(eax + 0x1C) = LO8(ecx);
    MEM8(eax + 0x1D) = LO8(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00134610
 * Original: 0x00134610 - 0x00134616 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134610(void)
{

loc_00134610: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_00134620
 * Original: 0x00134620 - 0x00134626 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134620(void)
{

loc_00134620: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00134630
 * Original: 0x00134630 - 0x0013466A (58 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134630: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x0013463Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013463D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134665; /* je: equal / zero */

loc_00134646: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0013464Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_0013464E: ;
    MEM32(esi) = 0x7DD7D8;
    SET_LO8(eax, MEM8(edi + 0x1C));
    MEM8(esi + 0x1C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x1D));
    POP32(esp, edi);
    MEM8(esi + 0x1D) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00134665: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00134680
 * Original: 0x00134680 - 0x001346A7 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134680: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM16(eax + 0xC) = 0x4A;
    MEM8(eax + 0x1C) = LO8(ecx);
    MEM8(eax + 0x1D) = LO8(edx);
    MEM32(eax) = 0x7DD7E8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001346B0
 * Original: 0x001346B0 - 0x001346FC (76 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001346B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001346B0: ;
    edx = MEM32(esp + 0x10);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esp + 0xC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM16(eax + 0xC) = 0x1E;
    MEM32(eax) = 0x7C4D20;
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esp + 4));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(esp + 8));
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(edx, ZX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax + 0x1C) = LO16(ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00134710
 * Original: 0x00134710 - 0x001347CA (186 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 18 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134710: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esp + 0x14));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    esi = edi + 0x28;
    MEM16(edi + 0xC) = 0x1E;
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esp + 0xC));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(edi) = 0x7C4D30;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(esp + 0x18));
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(edx, ZX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(edi + 0x1C) = LO16(ecx);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    eax = esi + 0x28;
    PUSH32(esp, eax);
    MEM16(esi + 0xC) = 0x3B;
    MEM32(esi) = 0x7B1E00;
    PUSH32(esp, 0x0013477Cu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0013477C: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x24;
    MEM32(edi + 0x20) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(edi + 0x24) = edx;
    PUSH32(esp, 0x00134799u); RECOMP_ABI_CALL(0x0002FB31u, sub_0002FB31); /* call 0x0002FB31 */

loc_00134799: ;
    eax = MEM32(esp + 0x44);
    SET_LO8(ecx, MEM8(esp + 0x40));
    SET_LO8(edx, MEM8(esp + 0x41));
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esp + 0x50);
    MEM8(esi + 0x1C) = LO8(ecx);
    ecx = MEM32(esp + 0x48);
    MEM8(esi + 0x1D) = LO8(edx);
    edx = MEM32(esp + 0x4C);
    MEM32(esi + 0x2C) = eax;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x28) = edx;
    POP32(esp, esi);
    esp += 76; return; /* ret 72 */

}

/**
 * sub_00134800
 * Original: 0x00134800 - 0x00134817 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134800: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x1C;
    MEM32(eax) = 0x7DD7F8;
    esp += 4; return; /* ret */

}

/**
 * sub_00134820
 * Original: 0x00134820 - 0x00134823 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00134820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134820: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00134830
 * Original: 0x00134830 - 0x00134836 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134830(void)
{

loc_00134830: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00134840
 * Original: 0x00134840 - 0x0013486E (46 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134840: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    edi = ecx;
    PUSH32(esp, 0x0013484Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013484D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134869; /* je: equal / zero */

loc_00134856: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0013485Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_0013485E: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7DD7F8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00134869: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00134880
 * Original: 0x00134880 - 0x001348AE (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134880: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM16(eax + 0xC) = 0x1C;
    MEM32(eax) = 0x7DD808;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001348C0
 * Original: 0x001348C0 - 0x001348F0 (48 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001348C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001348C0: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0x1C) = LO16(ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM16(eax + 0xC) = 0x20;
    MEM32(eax) = 0x7DD818;
    MEM8(eax + 0x1E) = LO8(edx);
    MEM8(eax + 0x1F) = LO8(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00134900
 * Original: 0x00134900 - 0x00134906 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134900(void)
{

loc_00134900: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_00134910
 * Original: 0x00134910 - 0x00134916 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134910(void)
{

loc_00134910: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00134920
 * Original: 0x00134920 - 0x00134962 (66 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134920: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x0013492Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0013492D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013495D; /* je: equal / zero */

loc_00134936: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0013493Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_0013493E: ;
    MEM32(esi) = 0x7DD818;
    SET_LO16(eax, MEM16(edi + 0x1C));
    MEM16(esi + 0x1C) = LO16(eax);
    SET_LO8(ecx, MEM8(edi + 0x1E));
    MEM8(esi + 0x1E) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x1F));
    POP32(esp, edi);
    MEM8(esi + 0x1F) = LO8(edx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013495D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00134980
 * Original: 0x00134980 - 0x001349B0 (48 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134980: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0x1C) = LO16(ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM16(eax + 0xC) = 0x20;
    MEM8(eax + 0x1E) = LO8(edx);
    MEM8(eax + 0x1F) = LO8(ecx);
    MEM32(eax) = 0x7DD828;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001349C0
 * Original: 0x001349C0 - 0x00134AE4 (292 bytes, 74 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001349C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001349C0: ;
    eax = MEM32(0x8E9810);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00134AE0; /* jne: not equal / not zero */

loc_001349D0: ;
    SET_LO8(eax, MEM8(0x896177));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00134AE0; /* jne: not equal / not zero */

loc_001349DD: ;
    SET_LO16(eax, MEM16(0x896162));
    SET_LO16(eax, LO16(eax) - 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(0x896164) = MEM16(0x896164) - 1;
    _fa = (uint32_t)(MEM16(0x896164)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    MEM16(0x896162) = LO16(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_00134A49; /* jge: greater or equal (signed >=) */

loc_001349F7: ;
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00134ABF; /* jle: less or equal (signed <=) */

loc_00134A05: ;
    MEM16(0x896160) = MEM16(0x896160) - 1;
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00134A11u); RECOMP_ABI_CALL(0x00011181u, sub_00011181); /* call 0x00011181 */

loc_00134A11: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x896162) = MEM16(0x896162) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x896162)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM16(0x896160);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00134A49; /* jne: not equal / not zero */

loc_00134A2B: ;
    ecx = esp;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = edx;
    MEM32(esp) = 0x7ABE10;
    MEM16(esp + 0xC) = 0x41;
    PUSH32(esp, 0x00134A49u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00134A49: ;
    _fa = (uint32_t)(MEM16(0x896162)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896162), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00134A9B; /* jne: not equal / not zero */

loc_00134A53: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 1;
    /* nop */

loc_00134A60: ;
    ecx = MEM32(esi + 0x8F00F8);
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00134A70u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00134A70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134A91; /* je: equal / zero */

loc_00134A74: ;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), edi (32-bit) */
    ecx = MEM32(eax + 0x230);
    MEM16(ecx) = MEM16(ecx) + 1;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    ecx = eax + 0x1E8;
    PUSH32(esp, 0x00134A8Du); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00134A8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00134A74; /* jne: not equal / not zero */

loc_00134A91: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00134A60; /* jl: less (signed <) */

loc_00134A99: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00134A9B: ;
    _fa = (uint32_t)(MEM16(0x896164)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896164), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00134AE0; /* jge: greater or equal (signed >=) */

loc_00134AA5: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_00134ACA; /* jne: not equal / not zero */

loc_00134AB2: ;
    MEM16(0x896164) = 0xE;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00134ABF: ;
    MEM16(0x896162) = 0;
    goto loc_00134A53;

loc_00134ACA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = edx * 8 + 0x15;
    MEM16(0x896164) = LO16(edx);

loc_00134AE0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00134B30
 * Original: 0x00134B30 - 0x00134C4E (286 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134B30: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(0x8E9248);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00134B42u); RECOMP_ABI_CALL(0x0002F546u, sub_0002F546); /* call 0x0002F546 */

loc_00134B42: ;
    esi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00134B54; /* jne: not equal / not zero */

loc_00134B4B: ;
    PUSH32(esp, 0x00134B50u); RECOMP_ABI_CALL(0x000150A6u, sub_000150A6); /* call 0x000150A6 */

loc_00134B50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134B6D; /* je: equal / zero */

loc_00134B54: ;
    eax = MEM32(0x8F0040);
    MEM8(eax + 0x158) = 1;
    ecx = MEM32(0x8F0044);
    MEM8(ecx + 0x158) = 1;

loc_00134B6D: ;
    edx = MEM32(0x8E9380);
    MEM8(edx + 6) = 1;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134B84; /* je: equal / zero */

loc_00134B80: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00134BD5; /* jne: not equal / not zero */

loc_00134B84: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134BD5; /* je: equal / zero */

loc_00134B88: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134BD5; /* je: equal / zero */

loc_00134B8D: ;
    PUSH32(esp, 0x00134B92u); RECOMP_ABI_CALL(0x00013251u, sub_00013251); /* call 0x00013251 */

loc_00134B92: ;
    esi = MEM32(0x8F0650);
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134BB7; /* je: equal / zero */

loc_00134BA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134BB7; /* je: equal / zero */

loc_00134BA8: ;
    ecx = esi;
    PUSH32(esp, 0x00134BAFu); RECOMP_ABI_CALL(0x00027639u, sub_00027639); /* call 0x00027639 */

loc_00134BAF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00134BB7: ;
    ecx = esi;
    PUSH32(esp, 0x00134BBEu); RECOMP_ABI_CALL(0x0002CFE4u, sub_0002CFE4); /* call 0x0002CFE4 */

loc_00134BBE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134C46; /* je: equal / zero */

loc_00134BC6: ;
    ecx = esi;
    PUSH32(esp, 0x00134BCDu); RECOMP_ABI_CALL(0x0002EEE3u, sub_0002EEE3); /* call 0x0002EEE3 */

loc_00134BCD: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00134BD5: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00134BDDu); RECOMP_ABI_CALL(0x0001900Cu, sub_0001900C); /* call 0x0001900C */

loc_00134BDD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00134BE3u); RECOMP_ABI_CALL(0x0001A85Du, sub_0001A85D); /* call 0x0001A85D */

loc_00134BE3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134BF0; /* je: equal / zero */

loc_00134BEB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00134C46; /* jne: not equal / not zero */

loc_00134BF0: ;
    eax = MEM32(0x8E9380);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 7);
    eax = MEM32(eax + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x132);
    MEM8(esp + 0x26) = LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM16(esp + 0x14) = 0x20;
    MEM16(esp + 0x24) = LO16(eax);
    MEM32(esp + 8) = 0x7DD828;
    ecx = ecx & 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x00134C46u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00134C46: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00134CA0
 * Original: 0x00134CA0 - 0x00134E8C (492 bytes, 144 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134CA0: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x98);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00134CBBu); RECOMP_ABI_CALL(0x0002AC0Du, sub_0002AC0D); /* call 0x0002AC0D */

loc_00134CBB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134E7F; /* je: equal / zero */

loc_00134CC6: ;
    PUSH32(esp, 0x00134CCBu); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_00134CCB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00134E7F; /* jne: not equal / not zero */

loc_00134CD3: ;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1E4), 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00134E7F; /* jge: greater or equal (signed >=) */

loc_00134CE0: ;
    ecx = MEM32(0x8E9380);
    SET_LO8(edx, MEM8(esp + 0xA8));
    MEM8(ecx + 7) = LO8(edx);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(eax * 4 + 0x8F0040);
    edx = MEM32(0x8E9380);
    MEM32(edx + 0x10) = ecx;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00134D10u); RECOMP_ABI_CALL(0x000150A6u, sub_000150A6); /* call 0x000150A6 */

loc_00134D10: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(0x8E9380);
    if (CMP_EQ(_fa, _fb)) goto loc_00134D27; /* je: equal / zero */

loc_00134D19: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 6);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134D27; /* je: equal / zero */

loc_00134D21: ;
    MEM8(eax + 6) = 1;
    goto loc_00134D2A;

loc_00134D27: ;
    MEM8(eax + 6) = LO8(ebx);

loc_00134D2A: ;
    edi = MEM32(esp + 0xA4);
    edx = MEM32(esi + 0x1E4);
    ebp = MEM32(esp + 0xA8);
    PUSH32(esp, edi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esi + 0x1E4) = edx;
    PUSH32(esp, 0x00134D4Du); RECOMP_ABI_CALL(0x0001F871u, sub_0001F871); /* call 0x0001F871 */

loc_00134D4D: ;
    edx = edi;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00134D63; /* je: equal / zero */

loc_00134D5A: ;
    MEM8(esi + 0x3C2) = MEM8(esi + 0x3C2) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x3C2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    goto loc_00134D69;

loc_00134D63: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00134D77; /* jne: not equal / not zero */

loc_00134D68: ;
    PUSH32(esp, ebp);

loc_00134D69: ;
    ecx = MEM32(0x8F0674);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00134D75u); RECOMP_ABI_CALL(0x0002E5ABu, sub_0002E5AB); /* call 0x0002E5AB */

loc_00134D75: ;
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00134D77: ;
    eax = edi;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00134DA2; /* je: equal / zero */

loc_00134D80: ;
    ecx = MEM32(esp + 0xA0);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00134D96u); RECOMP_ABI_CALL(0x0003214Cu, sub_0003214C); /* call 0x0003214C */

loc_00134D96: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00134D9Fu); RECOMP_ABI_CALL(0x0001F871u, sub_0001F871); /* call 0x0001F871 */

loc_00134D9F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00134DA2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x34) = ecx;
    ecx = esp + 0x18;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM16(esp + 0x24) = 0x1C;
    MEM32(esp + 0x18) = 0x7DD808;
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x3C) = edi;
    PUSH32(esp, 0x00134DD4u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00134DD4: ;
    _fa = (uint32_t)(MEM8(0x896174)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x896174), LO8(ebx) (8-bit) */
    MEM8(esp + 0x10) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00134E16; /* jne: not equal / not zero */

loc_00134DE0: ;
    edx = MEM32(0x8E9380);
    SET_LO8(ecx, MEM8(edx + 6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134E16; /* je: equal / zero */

loc_00134DEE: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00134E11; /* jl: less (signed <) */

loc_00134DFD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134E16; /* je: equal / zero */

loc_00134E11: ;
    MEM8(esp + 0x10) = 1;

loc_00134E16: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0x8F00FC;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00134E2Cu); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_00134E2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134E3A; /* je: equal / zero */

loc_00134E30: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    MEM32(esp + 0x14) = ecx;
    goto loc_00134E42;

loc_00134E3A: ;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;

loc_00134E42: ;
    edx = MEM32(esp + 0xAC);
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    esi = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00134E5Cu); RECOMP_ABI_CALL(0x00028BA6u, sub_00028BA6); /* call 0x00028BA6 */

loc_00134E5C: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esp + 0x88;
    PUSH32(esp, 0x00134E76u); RECOMP_ABI_CALL(0x0002919Bu, sub_0002919B); /* call 0x0002919B */

loc_00134E76: ;
    ecx = esp + 0x40;
    PUSH32(esp, 0x00134E7Fu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00134E7F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00134F10
 * Original: 0x00134F10 - 0x001350E1 (465 bytes, 124 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134F10: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x74);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00134F21u); RECOMP_ABI_CALL(0x0002029Eu, sub_0002029E); /* call 0x0002029E */

loc_00134F21: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00134F2Bu); RECOMP_ABI_CALL(0x0001E269u, sub_0001E269); /* call 0x0001E269 */

loc_00134F2B: ;
    edi = MEM32(esp + 0x7C);
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    edx = MEM32(ecx * 4 + 0x8F0040);
    eax = MEM32(0x8E9380);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x8E9380);
    ebx = 1;
    MEM8(ecx + 6) = LO8(ebx);
    SET_LO8(edx, MEM8(edi + 0x39));
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = ebp;
    MEM16(esp + 0x1C) = 0x1D;
    MEM8(esp + 0x2C) = LO8(edx);
    MEM8(esp + 0x2D) = 4;
    MEM16(esp + 0x2E) = 0xFFFF;
    MEM32(esp + 0x10) = 0x7ABDF0;
    PUSH32(esp, 0x00134F88u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00134F88: ;
    SET_LO8(ecx, MEM8(esi + 0x39));
    SET_LO8(eax, MEM8(esi + 0x30));
    MEM8(esp + 0x6D) = LO8(ecx);
    ecx = esp + 0x50;
    MEM32(esp + 0x54) = ebp;
    MEM32(esp + 0x58) = ebp;
    MEM16(esp + 0x5C) = 0x4A;
    MEM8(esp + 0x6C) = LO8(eax);
    MEM32(esp + 0x50) = 0x7DD7E8;
    PUSH32(esp, 0x00134FB6u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00134FB6: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1DC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00134FC8u); RECOMP_ABI_CALL(0x000141B0u, sub_000141B0); /* call 0x000141B0 */

loc_00134FC8: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x1DC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00134FDAu); RECOMP_ABI_CALL(0x000141B0u, sub_000141B0); /* call 0x000141B0 */

loc_00134FDA: ;
    MEM32(edi + 0x2C) = 0x32;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(eax * 4 + 0x8F0040);
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x2C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x8E9248);
    PUSH32(esp, 0x00135001u); RECOMP_ABI_CALL(0x0002F546u, sub_0002F546); /* call 0x0002F546 */

loc_00135001: ;
    edx = MEM32(0x8F0040);
    MEM8(edx + 0x158) = LO8(ebx);
    eax = MEM32(0x8F0044);
    MEM8(eax + 0x158) = LO8(ebx);
    ecx = MEM32(0x8E9380);
    MEM8(ecx + 6) = LO8(ebx);
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00135099; /* je: equal / zero */

loc_0013502A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00135099; /* je: equal / zero */

loc_0013502E: ;
    PUSH32(esp, 0x00135033u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_00135033: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(0x8EADA0);
    PUSH32(esp, 4);
    MEM32(eax + 0x30) = 2;
    MEM32(eax + 0x2C) = ebx;
    PUSH32(esp, 0x0013504Bu); RECOMP_ABI_CALL(0x0001A85Du, sub_0001A85D); /* call 0x0001A85D */

loc_0013504B: ;
    eax = MEM32(0x8E9380);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 7);
    edx = MEM32(eax + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x132);
    MEM8(esp + 0x52) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x30;
    MEM32(esp + 0x34) = ebp;
    MEM32(esp + 0x38) = ebp;
    MEM16(esp + 0x3C) = 0x20;
    MEM16(esp + 0x4C) = LO16(eax);
    MEM8(esp + 0x4F) = 0x80;
    MEM32(esp + 0x30) = 0x7DD828;
    PUSH32(esp, 0x0013508Fu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0013508F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00135099: ;
    PUSH32(esp, 0x0013509Eu); RECOMP_ABI_CALL(0x00013251u, sub_00013251); /* call 0x00013251 */

loc_0013509E: ;
    esi = MEM32(0x8F0650);
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001350C5; /* je: equal / zero */

loc_001350AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001350C5; /* je: equal / zero */

loc_001350B4: ;
    ecx = esi;
    PUSH32(esp, 0x001350BBu); RECOMP_ABI_CALL(0x00027639u, sub_00027639); /* call 0x00027639 */

loc_001350BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001350C5: ;
    ecx = esi;
    PUSH32(esp, 0x001350CCu); RECOMP_ABI_CALL(0x0002CFE4u, sub_0002CFE4); /* call 0x0002CFE4 */

loc_001350CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001350D7; /* je: equal / zero */

loc_001350D0: ;
    ecx = esi;
    PUSH32(esp, 0x001350D7u); RECOMP_ABI_CALL(0x0002EEE3u, sub_0002EEE3); /* call 0x0002EEE3 */

loc_001350D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00135160
 * Original: 0x00135160 - 0x0013533A (474 bytes, 158 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135160(void)
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

loc_00135160: ;
    SET_LO8(eax, MEM8(0x896174));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00135186; /* jne: not equal / not zero */

loc_0013516F: ;
    eax = MEM32(0x8E9380);
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00135186; /* je: equal / zero */

loc_0013517A: ;
    _fa = (uint32_t)(MEM32(0x8F6A68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x8F6A68), 0x1C0 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013518F; /* jne: not equal / not zero */

loc_00135186: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0013518F: ;
    ecx = MEM32(0x8EADA0);
    ecx = MEM32(ecx + 0x24);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001351B9; /* jle: less or equal (signed <=) */

loc_0013519F: ;
    eax = MEM32(0x896158);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001351B9; /* jle: less or equal (signed <=) */

loc_001351A8: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001351B9; /* jge: greater or equal (signed >=) */

loc_001351AF: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001351B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001351BFu); RECOMP_ABI_CALL(0x000150A6u, sub_000150A6); /* call 0x000150A6 */

loc_001351BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(esp + 0x2C);
    if (CMP_EQ(_fa, _fb)) goto loc_001351EA; /* je: equal / zero */

loc_001351C7: ;
    edx = MEM32(esi + 4);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x30);
    ecx = MEM32(0x8E9380);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 6);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001351EA; /* jne: not equal / not zero */

loc_001351DF: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001351EA: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001351F8u); RECOMP_ABI_CALL(0x0001C4BEu, sub_0001C4BE); /* call 0x0001C4BE */

loc_001351F8: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas < 0)) goto loc_0013520E; /* jl: less (signed <) */

loc_00135209: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013521A; /* jge: greater or equal (signed >=) */

loc_0013520E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0013521F;

loc_0013521A: ;
    eax = 5;

loc_0013521F: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esi + 4);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DD67C); /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00135244u); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_00135244: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = 0x8E9710;
    if (CMP_LE(_fas, _fbs)) goto loc_00135257; /* jle: less or equal (signed <=) */

loc_00135250: ;
    PUSH32(esp, 0x00135255u); RECOMP_ABI_CALL(0x0001256Du, sub_0001256D); /* call 0x0001256D */

loc_00135255: ;
    goto loc_0013525C;

loc_00135257: ;
    PUSH32(esp, 0x0013525Cu); RECOMP_ABI_CALL(0x0002F50Au, sub_0002F50A); /* call 0x0002F50A */

loc_0013525C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    PUSH32(esp, 0xE9);
    PUSH32(esp, 0x7DD840);
    PUSH32(esp, 0x3E8);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00135278u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00135278: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD340); /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001352EF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00135292: ;
    ecx = MEM32(0x8F0674);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013529Fu); RECOMP_ABI_CALL(0x0002A7C1u, sub_0002A7C1); /* call 0x0002A7C1 */

loc_0013529F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001352C4; /* jne: not equal / not zero */

loc_001352A9: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x001352B8u); RECOMP_ABI_CALL(0x00011F96u, sub_00011F96); /* call 0x00011F96 */

loc_001352B8: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001352C4: ;
    ecx = MEM32(0x8F0674);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001352D2u); RECOMP_ABI_CALL(0x000182C4u, sub_000182C4); /* call 0x000182C4 */

loc_001352D2: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001352E3u); RECOMP_ABI_CALL(0x0002F8A7u, sub_0002F8A7); /* call 0x0002F8A7 */

loc_001352E3: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001352EF: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM8(ecx + 0x30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x30), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013532E; /* jne: not equal / not zero */

loc_001352F8: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013532E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00135301: ;
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7DD838); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013532E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7DD838)) */

loc_0013530E: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x10) = 0x7ABE10;
    MEM16(esp + 0x1C) = 0x1F;
    PUSH32(esp, 0x0013532Eu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0013532E: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001353B0
 * Original: 0x001353B0 - 0x0013543C (140 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001353B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001353B0: ;
    eax = MEM32(0x8E9380);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001353CD; /* je: equal / zero */

loc_001353C1: ;
    _fa = (uint32_t)(MEM32(0x8F6A68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x8F6A68), 0x1C0 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001353D6; /* jne: not equal / not zero */

loc_001353CD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001353D6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    ecx = esi;
    PUSH32(esp, 0x001353E2u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_001353E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00135432; /* je: equal / zero */

loc_001353E6: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0xC2400000u);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F0674);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00135401u); RECOMP_ABI_CALL(0x00023A43u, sub_00023A43); /* call 0x00023A43 */

loc_00135401: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00135432; /* je: equal / zero */

loc_00135405: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0013540Eu); RECOMP_ABI_CALL(0x000144FDu, sub_000144FD); /* call 0x000144FD */

loc_0013540E: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esp + 0x38) = LO8(eax);
    PUSH32(esp, 0x00135428u); RECOMP_ABI_CALL(0x0002F8A7u, sub_0002F8A7); /* call 0x0002F8A7 */

loc_00135428: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00135432: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135460
 * Original: 0x00135460 - 0x001354F5 (149 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135460: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    eax = esp + 0x34;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edi = ecx;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM16(esp + 0x20) = 0x3B;
    MEM32(esp + 0x14) = 0x7B1E00;
    PUSH32(esp, 0x00135494u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00135494: ;
    esi = MEM32(esp + 0x48);
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(eax + 0x39));
    MEM8(esp + 0x30) = LO8(ecx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    SET_LO8(edx, MEM8(edx + 0x39));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x25) = LO8(edx);
    ecx = MEM32(ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001354C4u); RECOMP_ABI_CALL(0x0002F8A7u, sub_0002F8A7); /* call 0x0002F8A7 */

loc_001354C4: ;
    SET_LO8(eax, MEM8(esi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001354EB; /* je: equal / zero */

loc_001354CB: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001354EB; /* jne: not equal / not zero */

loc_001354D4: ;
    ecx = MEM32(esi + 4);
    edx = esp + 8;
    PUSH32(esp, edx);
    edx = MEM32(ecx);
    PUSH32(esp, 0xB);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001354EBu); RECOMP_ABI_CALL(0x0002F8A7u, sub_0002F8A7); /* call 0x0002F8A7 */

loc_001354EB: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135520
 * Original: 0x00135520 - 0x00135524 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135520(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00135520: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135530
 * Original: 0x00135530 - 0x00135536 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135530(void)
{

loc_00135530: ;
    eax = MEM32(0x8FCA50);
    esp += 4; return; /* ret */

}

/**
 * sub_00135540
 * Original: 0x00135540 - 0x001355F7 (183 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135540(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00135540: ;
    eax = MEM32(0x8FCA50);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7DD8A0); /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8AECCC)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135567; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00135562: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0013558C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00135567: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135572; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0013556C: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0013558C;

loc_00135572: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00135589; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00135585: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_00135589: ;
    xmm0 = xmm2; /* movaps */

loc_0013558C: ;
    eax = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm2; /* movaps */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001355A9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_001355A4: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001355EA; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_001355A9: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001355BF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_001355AE: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_001355BF: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001355DC; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_001355C8: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_001355DC: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_001355EA: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00135630
 * Original: 0x00135630 - 0x00135634 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135630(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00135630: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135640
 * Original: 0x00135640 - 0x0013564D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135640(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00135640: ;
    fp_push(MEMF(0x8E96B4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7DDC60)); /* fadd dword ptr [0x7ddc60] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135650
 * Original: 0x00135650 - 0x00135692 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135650(void)
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

loc_00135650: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x8E96B4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7DDC60); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135679; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00135671: ;
    fp_push(MEMF(0x7DD8BC)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00135679: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135689; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00135681: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00135689: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp)); /* fdiv dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001356B0
 * Original: 0x001356B0 - 0x001356C1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001356B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001356B0: ;
    fp_push(MEMF(0x8E96B4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7DDC60)); /* fadd dword ptr [0x7ddc60] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001356D0
 * Original: 0x001356D0 - 0x001356F4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001356D0(void)
{

loc_001356D0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00135700
 * Original: 0x00135700 - 0x0013582D (301 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135700(void)
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

loc_00135700: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm3 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E96B4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7DDC60); /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7DD8BC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001357A3; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm3.f[0]) */

loc_0013576A: ;
    xmm5 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    goto loc_001357B3;

loc_001357A3: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AB7CC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001357B0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AB7CC)) */

loc_001357AC: ;
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */

loc_001357B0: ;
    xmm0 = xmm3; /* movaps */

loc_001357B3: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(0x7C404C)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135807; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00135801: ;
    xmm0 = xmm2; /* movaps */
    xmm1 = xmm2; /* movaps */

loc_00135807: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    ecx = MEM32(esp + 0xC);
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    MEMF(ecx + 4) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135880
 * Original: 0x00135880 - 0x001358C0 (64 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135880(void)
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

loc_00135880: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x8E96B4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7DDC60); /* addss */
    ecx = MEM32(eax + 0x4C);
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0x44); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x7DD8BC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001358BB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001358B5: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_001358BB: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001358D0
 * Original: 0x001358D0 - 0x00135A43 (371 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001358D0(void)
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

loc_001358D0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */
    edx = MEM32(esp + 0x10);
    ecx = esi + 0x30;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    eax = ecx;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(eax + 8) = edx;
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x7ABD68); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135A3E; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(0x7ABD68)) */

loc_0013596A: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x00135974u); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_00135974: ;
    fp_pop(); /* fstp st(0) */
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00135984u); RECOMP_ABI_CALL(0x0002EC63u, sub_0002EC63); /* call 0x0002EC63 */

loc_00135984: ;
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    ecx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0xC); /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 8); /* addss */
    edx = esi + 0x24;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x14);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    MEMF(esi) = xmm1.f[0]; /* movss */
    MEMF(esi + 8) = xmm3.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001359D9; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_001359D4: ;
    xmm2 = xmm1; /* movaps */
    goto loc_001359E0;

loc_001359D9: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_001359E0: ;
    xmm4 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135A02; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_001359ED: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001359F7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001359F2: ;
    xmm1 = xmm4; /* movaps */
    goto loc_001359FE;

loc_001359F7: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */

loc_001359FE: ;
    MEMF(esi) = xmm1.f[0]; /* movss */

loc_00135A02: ;
    xmm2 = xmm3; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135A0F; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00135A0A: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00135A16;

loc_00135A0F: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_00135A16: ;
    xmm2 = XMM_SCALAR(MEMF(0x8AECE4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135A3E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00135A23: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135A35; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00135A28: ;
    xmm0 = xmm2; /* movaps */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00135A35: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */

loc_00135A3E: ;
    POP32(esp, esi);
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
 * sub_00135AA0
 * Original: 0x00135AA0 - 0x00135B4A (170 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135AA0(void)
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

loc_00135AA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    edx = MEM32(esp + 0x10);
    ebx = esi + 0x30;
    eax = ebx;
    MEM32(eax) = ecx;
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(eax + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00135B40; /* jle: less or equal (signed <=) */

loc_00135AFB: ;
    goto loc_00135B00;

    /* nop */

loc_00135B00: ;
    xmm2 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x7ABD68); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135B40; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(0x7ABD68)) */

loc_00135B34: ;
    ecx = esi;
    PUSH32(esp, 0x00135B3Bu); RECOMP_ABI_CALL(0x00014A39u, sub_00014A39); /* call 0x00014A39 */

loc_00135B3B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00135B00; /* jl: less (signed <) */

loc_00135B40: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135B80
 * Original: 0x00135B80 - 0x00135E7A (762 bytes, 199 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135B80(void)
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

loc_00135B80: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(0x8E8F84);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x6C);
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    MEMF(esp + 0x6C) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x14) = 0;
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x24) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135E51; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm3.f[0]) */

loc_00135C0A: ;
    /* nop */

loc_00135C10: ;
    ecx = esi;
    PUSH32(esp, 0x00135C17u); RECOMP_ABI_CALL(0x00014A39u, sub_00014A39); /* call 0x00014A39 */

loc_00135C17: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135D50; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00135C29: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x8AECCC)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135C65; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00135C60: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00135C84; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_00135C65: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135C70; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00135C6A: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_00135C84;

loc_00135C70: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00135C84; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00135C80: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_00135C84: ;
    edx = MEM32(esp + 0x78);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135CA0; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00135C9B: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00135CC2; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_00135CA0: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135CAB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00135CA5: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    goto loc_00135CBC;

loc_00135CAB: ;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00135CBC; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00135CB8: ;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_00135CBC: ;
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */

loc_00135CC2: ;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    ebx = MEM32(esp + 0x48);
    MEM32(esp + 0x30) = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x74)); /* fmul dword ptr [esp + 0x74] */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x74)); /* fmul dword ptr [esp + 0x74] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x2C) = eax;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x2C); /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x50);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    edx = MEM32(esp + 0x54);
    MEM32(esp + 0x34) = ebp;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x34); /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x58);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    goto loc_00135DA0;

loc_00135D50: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */
    ecx = MEM32(esp + 0x5C);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x60);
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    MEM32(esp + 0x38) = ecx;
    ecx = esi;
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(ecx);
    ebx = MEM32(ecx + 4);
    ebp = MEM32(ecx + 8);
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x64);
    MEM32(esp + 0x2C) = edx;

loc_00135DA0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEM32(esp + 0x40) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    eax = MEM32(esp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x10); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00135E24; /* jne: not equal / not zero */

loc_00135DF0: ;
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00135E00u); RECOMP_ABI_CALL(0x00030CC5u, sub_00030CC5); /* call 0x00030CC5 */

loc_00135E00: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x6C) - fp_top()); /* fsubr dword ptr [esp + 0x6c] */
    MEMF(esp + 0x6C) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x7AA840)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00135E59; /* ja: above (unsigned >) */

loc_00135E18: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_00135E24: ;
    eax = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00135E44; /* jg: greater (signed >) */

loc_00135E32: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00135C10; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_00135E42: ;
    goto loc_00135E59;

loc_00135E44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

loc_00135E51: ;
    ebx = MEM32(esp + 0x30);
    ebp = MEM32(esp + 0x34);

loc_00135E59: ;
    ecx = MEM32(esp + 0x80);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x14);
    MEM32(ecx) = edx;
    POP32(esp, edi);
    MEM32(ecx + 4) = ebx;
    POP32(esp, esi);
    MEM32(ecx + 8) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135F40
 * Original: 0x00135F40 - 0x001360F6 (438 bytes, 108 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135F40(void)
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

loc_00135F40: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0x18);
    eax = ecx;
    ecx = MEM32(esp + 0x14);
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x18) = edx;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DDC74); /* mulss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esi = MEM32(ecx + 0x20);
    xmm2 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x6C)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x8E99FC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135FB3; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_00135FA8: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */

loc_00135FB3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    xmm2 = XMM_SCALAR(MEMF(0x8AECCC)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    POP32(esp, esi);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_00136023; /* jne: not equal / not zero */

loc_00135FEB: ;
    xmm5 = XMM_SCALAR(MEMF(0x7DDD3C)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm5.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(0x7AB7C8); /* subss */
    if ((_fca >= _fcb)) goto loc_0013600E; /* jae: above or equal (unsigned >=) (xmm5.f[0] vs xmm3.f[0]) */

loc_0013600A: ;
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */

loc_0013600E: ;
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x7AACB4); /* mulss */
    goto loc_00136047;

loc_00136023: ;
    xmm3 = XMM_SCALAR(MEMF(0x7AB7C8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00136034; /* ja: above (unsigned >) (xmm2.f[0] vs xmm3.f[0]) */

loc_00136030: ;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */

loc_00136034: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AACB4); /* mulss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_00136047: ;
    ecx = MEM32(ecx + 0x20);
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    edx = MEM32(esp + 4);
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    ecx = eax;
    MEM32(ecx) = edx;
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    MEMF(esp + 8) = xmm5.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0xC);
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001360C6; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001360C1: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001360EB; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_001360C6: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001360DA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001360CB: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001360DA: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_001360EB; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001360E7: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_001360EB: ;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136170
 * Original: 0x00136170 - 0x00136398 (552 bytes, 159 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136170(void)
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

loc_00136170: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AB7C8); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x8AECCC)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136196; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00136191: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001361BB; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00136196: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001361A1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0013619B: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_001361BB;

loc_001361A1: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_001361B8; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_001361B4: ;
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */

loc_001361B8: ;
    xmm1 = xmm3; /* movaps */

loc_001361BB: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7DD8BC)); /* movss */
    edx = MEM32(esp + 0x28);
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001361E9; /* jp: parity */

loc_001361D9: ;
    xmm5 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001361E9; /* jp: parity */

loc_001361E6: ;
    xmm3 = xmm2; /* movaps */

loc_001361E9: ;
    _fca = xmm4.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001361FC; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(edx)) */

loc_001361EE: ;
    xmm3 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm4.f[0]; /* divss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    goto loc_00136208;

loc_001361FC: ;
    xmm5 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm4.f[0]; /* subss */
    MEMF(edx) = xmm5.f[0]; /* movss */

loc_00136208: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    if (CMP_NE(_fa, _fb)) goto loc_0013627F; /* jne: not equal / not zero */

loc_00136217: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136221; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0013621C: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00136246; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00136221: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013622C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00136226: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00136246;

loc_0013622C: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00136243; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0013623F: ;
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */

loc_00136243: ;
    xmm1 = xmm3; /* movaps */

loc_00136246: ;
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */

loc_0013624A: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013625C; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0013624F: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013625C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00136254: ;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    goto loc_001362CF;

loc_0013625C: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013626A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00136261: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm3 = xmm1; /* movaps */
    goto loc_001362C9;

loc_0013626A: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001362BE; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00136276: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    goto loc_001362C9;

loc_0013627F: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136289; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00136284: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001362B5; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00136289: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013629B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0013628E: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm4; /* movaps */
    goto loc_0013624A;

loc_0013629B: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_001362B2; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_001362AE: ;
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */

loc_001362B2: ;
    xmm1 = xmm3; /* movaps */

loc_001362B5: ;
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm4; /* movaps */
    goto loc_0013624A;

loc_001362BE: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */

loc_001362C9: ;
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */

loc_001362CF: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    xmm3 = xmm0; /* movaps */
    edx = eax;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    esi = MEM32(esp + 4);
    MEM32(edx) = esi;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    edx = MEM32(esp + 0x24);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edx + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(ecx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0013635B; /* jne: not equal / not zero */

loc_0013634D: ;
    xmm3.f[0] = xmm3.f[0] * MEMF(0x7AACB4); /* mulss */
    MEMF(edx) = xmm3.f[0]; /* movss */
    goto loc_00136368;

loc_0013635B: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AACB4); /* mulss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */

loc_00136368: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136430
 * Original: 0x00136430 - 0x001364BE (142 bytes, 40 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136430(void)
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

loc_00136430: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm2.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_001364B7; /* jle: less or equal (signed <=) */

loc_00136441: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001364B7; /* jg: greater (signed >) */

loc_00136446: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7C8); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8AECCC)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136466; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00136461: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00136491; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00136466: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136471; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0013646B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00136491;

loc_00136471: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136483; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0013647A: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_00136491;

loc_00136483: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_00136491: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0xC); /* divss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_001364B7; /* jne: not equal / not zero */

loc_001364AA: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AA820); /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */

loc_001364B7: ;
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001364F0
 * Original: 0x001364F0 - 0x001364F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001364F0(void)
{

loc_001364F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00136500
 * Original: 0x00136500 - 0x001365A2 (162 bytes, 45 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136500: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00136535; /* je: equal / zero */

loc_00136532: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00136535: ;
    PUSH32(esp, 0x0013653Au); RECOMP_ABI_CALL(0x00028480u, sub_00028480); /* call 0x00028480 */

loc_0013653A: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEM32(esi) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    MEM32(esi + 8) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001365D0
 * Original: 0x001365D0 - 0x001366D3 (259 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001365D0(void)
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

loc_001365D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm1.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_001366CC; /* ja: above (unsigned >) */

loc_001365E6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1366D4); /* switch: 4 entries, 3 targets */
    if (_jt == 0x001365EDu) goto loc_001365ED;
    if (_jt == 0x0013665Bu) goto loc_0013665B;
    if (_jt == 0x001366C7u) goto loc_001366C7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001365ED: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7C8); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x8AECCC)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013660D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00136608: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00136638; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0013660D: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136618; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00136612: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_00136638;

loc_00136618: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013662A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00136621: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    goto loc_00136638;

loc_0013662A: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */

loc_00136638: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0xC); /* divss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AA820); /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013665B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7C8); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x8AECCC)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013667B; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00136676: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001366A6; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0013667B: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136686; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00136680: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_001366A6;

loc_00136686: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136698; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013668F: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    goto loc_001366A6;

loc_00136698: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */

loc_001366A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0xC); /* divss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_001366CC; /* jne: not equal / not zero */

loc_001366BF: ;
    xmm1.f[0] = xmm1.f[0] + MEMF(0x7DD8BC); /* addss */

loc_001366C7: ;
    MEMF(esp) = xmm1.f[0]; /* movss */

loc_001366CC: ;
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136B00
 * Original: 0x00136B00 - 0x00136B61 (97 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136B00(void)
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

loc_00136B00: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 5 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7DDC64)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00136B5C; /* je: equal / zero */

loc_00136B18: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    eax = MEM32(edx + eax + 0x8F5C10);
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136B44u); RECOMP_ABI_CALL(0x00013625u, sub_00013625); /* call 0x00013625 */

loc_00136B44: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x7DD8BC) - fp_top()); /* fsubr dword ptr [0x7dd8bc] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7DDC68)); /* fmul dword ptr [0x7ddc68] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7DDC64)); /* fadd dword ptr [0x7ddc64] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00136B5C: ;
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
 * sub_00136B80
 * Original: 0x00136B80 - 0x00136C51 (209 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136B80(void)
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

loc_00136B80: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x7DD8BC)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    eax = MEM32(esi + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax + 0x44)); /* fdiv dword ptr [eax + 0x44] */
    PUSH32(esp, esi);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00136B9Eu); RECOMP_ABI_CALL(0x0002B7D4u, sub_0002B7D4); /* call 0x0002B7D4 */

loc_00136B9E: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x34) / fp_top()); /* fdivr dword ptr [esp + 0x34] */
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x4C);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7DD8BC); /* comiss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136C29; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7DD8BC)) */

loc_00136BF1: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136C29; /* je: equal / zero */

loc_00136BF7: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    fp_push(MEMF(eax + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7DD8BC)); /* fsub dword ptr [0x7dd8bc] */
    PUSH32(esp, ecx);
    ecx = 0x8E96A0;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00136C13u); RECOMP_ABI_CALL(0x0001DDB4u, sub_0001DDB4); /* call 0x0001DDB4 */

loc_00136C13: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7DD8BC)); /* fadd dword ptr [0x7dd8bc] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    goto loc_00136C2E;

loc_00136C29: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */

loc_00136C2E: ;
    edx = MEM32(esp + 0x38);
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x3C); /* mulss */
    eax = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00136C49u); RECOMP_ABI_CALL(0x0002EC63u, sub_0002EC63); /* call 0x0002EC63 */

loc_00136C49: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136C90
 * Original: 0x00136C90 - 0x00136DF8 (360 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136C90(void)
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

loc_00136C90: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x8E96B4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7DDC60); /* addss */
    ecx = MEM32(eax + 0x4C);
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x7DD8BC)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0x44); /* divss */
    xmm7 = xmm0; /* movaps */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm7; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm5 = xmm6; /* movaps */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    xmm4 = xmm6; /* movaps */
    MEMF(esp + 8) = xmm7.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136CF0; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00136CED: ;
    xmm2 = xmm3; /* movaps */

loc_00136CF0: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136D72; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm6.f[0]) */

loc_00136CFE: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136DE6; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00136D17: ;
    goto loc_00136D20;

loc_00136D19: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    /* nop */

loc_00136D20: ;
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm2 = xmm7; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136D3E; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00136D3B: ;
    xmm2 = xmm3; /* movaps */

loc_00136D3E: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136D51; /* jb: below (unsigned <) (xmm0.f[0] vs xmm6.f[0]) */

loc_00136D4C: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00136D58;

loc_00136D51: ;
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00136D58: ;
    xmm7 = XMM_SCALAR(MEMF(0x7DDC70)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00136DE0; /* ja: above (unsigned >) (xmm7.f[0] vs xmm2.f[0]) */

loc_00136D65: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00136D19; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_00136D70: ;
    goto loc_00136DE0;

loc_00136D72: ;
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136DE6; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_00136D77: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136DE6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00136D8C: ;
    goto loc_00136D94;

loc_00136D8E: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_00136D94: ;
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm2 = xmm7; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136DB2; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00136DAF: ;
    xmm2 = xmm3; /* movaps */

loc_00136DB2: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136DC5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm6.f[0]) */

loc_00136DC0: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00136DCC;

loc_00136DC5: ;
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_00136DCC: ;
    xmm7 = XMM_SCALAR(MEMF(0x7DDC70)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00136DE0; /* ja: above (unsigned >) (xmm7.f[0] vs xmm2.f[0]) */

loc_00136DD9: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca > _fcb)) goto loc_00136D8E; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(esp + 0xC)) */

loc_00136DE0: ;
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */

loc_00136DE6: ;
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136DF6; /* je: equal / zero */

loc_00136DF2: ;
    MEMF(eax) = xmm4.f[0]; /* movss */

loc_00136DF6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136E60
 * Original: 0x00136E60 - 0x00136F82 (290 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136E60(void)
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

loc_00136E60: ;
    xmm7 = XMM_SCALAR(MEMF(0x8E96B4)); /* movss */
    xmm7.f[0] = xmm7.f[0] + MEMF(0x7DDC60); /* addss */
    ecx = MEM32(esp + 0xC);
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x7DD8BC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm6 = xmm7; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x10); /* mulss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_00136F41; /* jl: less (signed <) */

loc_00136EA4: ;
    eax = MEM32(esi + 0x4C);
    xmm5 = xmm7; /* movaps */
    xmm5.f[0] = xmm5.f[0] / MEMF(eax + 0x44); /* divss */
    eax = ecx + -4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax * 4;
    /* nop */

loc_00136EC0: ;
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136ED3; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00136ED0: ;
    xmm2 = xmm3; /* movaps */

loc_00136ED3: ;
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136EF1; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00136EEE: ;
    xmm2 = xmm3; /* movaps */

loc_00136EF1: ;
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136F0F; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00136F0C: ;
    xmm2 = xmm3; /* movaps */

loc_00136F0F: ;
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136F2D; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00136F2A: ;
    xmm2 = xmm3; /* movaps */

loc_00136F2D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fa != 0)) goto loc_00136EC0; /* jne: not equal / not zero */

loc_00136F3B: ;
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */

loc_00136F41: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00136F7C; /* jge: greater or equal (signed >=) */

loc_00136F45: ;
    eax = MEM32(esi + 0x4C);
    xmm7.f[0] = xmm7.f[0] / MEMF(eax + 0x44); /* divss */
    xmm2 = xmm7; /* movaps */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00136F52: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136F6B; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00136F68: ;
    xmm1 = xmm3; /* movaps */

loc_00136F6B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm5 = xmm6; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm5; /* movaps */
    if ((_fa != 0)) goto loc_00136F52; /* jne: not equal / not zero */

loc_00136F7C: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136FD0
 * Original: 0x00136FD0 - 0x00137091 (193 bytes, 58 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136FD0(void)
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

loc_00136FD0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(0x7DD8BC)); /* fld float */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x40) = edi;
    eax = MEM32(edi + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax + 0x44)); /* fdiv dword ptr [eax + 0x44] */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0013702Fu); RECOMP_ABI_CALL(0x0002B7D4u, sub_0002B7D4); /* call 0x0002B7D4 */

loc_0013702F: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) / fp_top()); /* fdivr dword ptr [esp + 0x10] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    ecx = esi + 0x24;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + 0x20);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    edx = esi;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(edx + 4);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(edx + 8);
    POP32(esp, edi);
    MEM32(esi + 0x14) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001370D0
 * Original: 0x001370D0 - 0x00137104 (52 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001370D0(void)
{

loc_001370D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001370E0u); RECOMP_ABI_CALL(0x00027B2Au, sub_00027B2A); /* call 0x00027B2A */

loc_001370E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x001370EBu); RECOMP_ABI_CALL(0x00027B2Au, sub_00027B2A); /* call 0x00027B2A */

loc_001370EB: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(eax + 0x6C);
    MEM32(esi + 0x38) = ecx;
    edx = MEM32(edi + 0x4C);
    eax = MEM32(edx + 0x44);
    MEM32(esi + 0x3C) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137120
 * Original: 0x00137120 - 0x0013715C (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137120: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax * 4 + 0x8F00F8);
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00137135u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00137135: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013715B; /* je: equal / zero */

loc_00137139: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edi = edi;

loc_00137140: ;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00137149; /* je: equal / zero */

loc_00137146: ;
    MEM32(eax + 0x2C) = esi;

loc_00137149: ;
    PUSH32(esp, 0);
    ecx = eax + 0x1E8;
    PUSH32(esp, 0x00137156u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00137156: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00137140; /* jne: not equal / not zero */

loc_0013715A: ;
    POP32(esp, esi);

loc_0013715B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00137170
 * Original: 0x00137170 - 0x001371C9 (89 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137170: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax * 4 + 0x8F00F8);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00137186u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00137186: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001371C7; /* je: equal / zero */

loc_0013718C: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_00137191: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001371B3; /* je: equal / zero */

loc_00137197: ;
    ecx = MEM32(esi + 0x240);
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x001371A5u); RECOMP_ABI_CALL(0x000169ABu, sub_000169AB); /* call 0x000169AB */

loc_001371A5: ;
    ecx = MEM32(esi + 0x240);
    PUSH32(esp, edi);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x001371B3u); RECOMP_ABI_CALL(0x000169ABu, sub_000169AB); /* call 0x000169AB */

loc_001371B3: ;
    PUSH32(esp, 0);
    ecx = esi + 0x1E8;
    PUSH32(esp, 0x001371C0u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_001371C0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00137191; /* jne: not equal / not zero */

loc_001371C6: ;
    POP32(esp, edi);

loc_001371C7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001371E0
 * Original: 0x001371E0 - 0x00137262 (130 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001371E0(void)
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

loc_001371E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x44)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001371F9u); RECOMP_ABI_CALL(0x0002B7D4u, sub_0002B7D4); /* call 0x0002B7D4 */

loc_001371F9: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(0x8E96B4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x7DDC60); /* addss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013723E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013722A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7DD8BC)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0013723E: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00137252; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00137246: ;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00137252: ;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00137290
 * Original: 0x00137290 - 0x00137293 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137290(void)
{

loc_00137290: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001372A0
 * Original: 0x001372A0 - 0x001372F5 (85 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001372A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001372A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    edx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    eax = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
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
 * sub_00137310
 * Original: 0x00137310 - 0x00137315 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137310(void)
{

loc_00137310: ;
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00137320
 * Original: 0x00137320 - 0x00137361 (65 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137320(void)
{

loc_00137320: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00137380
 * Original: 0x00137380 - 0x00137491 (273 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00137380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137380: ;
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
    ecx = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    edx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    eax = MEM32(ebp + 8);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001374E0
 * Original: 0x001374E0 - 0x00137510 (48 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001374E0(void)
{

loc_001374E0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00137520
 * Original: 0x00137520 - 0x00137554 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137520(void)
{

loc_00137520: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 8);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00137570
 * Original: 0x00137570 - 0x0013758B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00137570(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00137570: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_top()); /* fmul st(0), st(0) */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(esp + 8)); /* fld float */
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
 * sub_001375A0
 * Original: 0x001375A0 - 0x001375B3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001375A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001375A0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
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
 * sub_001375C0
 * Original: 0x001375C0 - 0x001375C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001375C0(void)
{

loc_001375C0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001375D0
 * Original: 0x001375D0 - 0x001375D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001375D0(void)
{

loc_001375D0: ;
    eax = ecx + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_001375E0
 * Original: 0x001375E0 - 0x00137608 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001375E0(void)
{

loc_001375E0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00137620
 * Original: 0x00137620 - 0x001376BD (157 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137620(void)
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

loc_00137620: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
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
    MEMF(esp) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001376B9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AA840)) */

loc_0013767D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */

loc_001376B9: ;
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
 * sub_001376F0
 * Original: 0x001376F0 - 0x0013771A (42 bytes, 20 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001376F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001376F0: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00137730
 * Original: 0x00137730 - 0x0013773A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137730(void)
{

loc_00137730: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137740
 * Original: 0x00137740 - 0x00137753 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137740(void)
{

loc_00137740: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = eax + ecx * 8;
    eax = MEM32(edx * 4 + 0x9018A0);
    esp += 4; return; /* ret */

}

/**
 * sub_00137760
 * Original: 0x00137760 - 0x00137767 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137760(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00137760: ;
    fp_push(MEMF(ecx + 0x47C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00137770
 * Original: 0x00137770 - 0x00137782 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137770: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013777F; /* je: equal / zero */

loc_00137777: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013777F; /* je: equal / zero */

loc_0013777C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0013777F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00137790
 * Original: 0x00137790 - 0x0013779B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137790: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x8C)); return; /* indirect tail jmp */

}

/**
 * sub_001377A0
 * Original: 0x001377A0 - 0x001377AD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001377A0(void)
{

loc_001377A0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001377B0
 * Original: 0x001377B0 - 0x001377BB (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001377B0(void)
{

loc_001377B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x10);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001377C0
 * Original: 0x001377C0 - 0x001377E0 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001377C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001377C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001377F0
 * Original: 0x001377F0 - 0x001377F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001377F0(void)
{

loc_001377F0: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_00137800
 * Original: 0x00137800 - 0x00137801 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137800(void)
{

loc_00137800: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00137810
 * Original: 0x00137810 - 0x0013781E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137810(void)
{

loc_00137810: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137830
 * Original: 0x00137830 - 0x00137835 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137830: ;
    g_seh_ebp = ebp; sub_000227B0(); return; /* tail jmp 0x000227B0 */

}

/**
 * sub_00137840
 * Original: 0x00137840 - 0x00137844 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137840(void)
{

loc_00137840: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00137850
 * Original: 0x00137850 - 0x00137884 (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137850: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00137866; /* jne: not equal / not zero */

loc_0013785A: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00137863u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00137863: ;
    MEM32(esi + 8) = eax;

loc_00137866: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00137880; /* jne: not equal / not zero */

loc_00137870: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00137877u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00137874u); } /* indirect call */
    }

loc_00137877: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00137880; /* jne: not equal / not zero */

loc_0013787C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00137880: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001378A0
 * Original: 0x001378A0 - 0x001378A9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001378A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001378A0: ;
    SET_LO8(eax, MEM8(ecx + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_001378B0
 * Original: 0x001378B0 - 0x001378D7 (39 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001378B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001378B0: ;
    SET_LO8(eax, MEM8(ecx + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001378D4; /* je: equal / zero */

loc_001378B7: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001378C7; /* jne: not equal / not zero */

loc_001378BD: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

loc_001378C7: ;
    ecx = MEM32(ecx + 4);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001378D4u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_001378D4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001378E0
 * Original: 0x001378E0 - 0x001378EB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001378E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001378E0: ;
    SET_LO8(edx, MEM8(ecx + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_001378F0
 * Original: 0x001378F0 - 0x00137915 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001378F0(void)
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

loc_001378F0: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x24)); /* fsub dword ptr [ecx + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x24)); /* fadd dword ptr [ecx + 0x24] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00137906u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00137903u); } /* indirect call */
    }

loc_00137906: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00137920
 * Original: 0x00137920 - 0x00137924 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137920(void)
{

loc_00137920: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00137930
 * Original: 0x00137930 - 0x0013793C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137930(void)
{

loc_00137930: ;
    ecx = MEM32(ecx + 0x28);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137940
 * Original: 0x00137940 - 0x0013794C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137940(void)
{

loc_00137940: ;
    ecx = MEM32(ecx + 0x24);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137950
 * Original: 0x00137950 - 0x0013795A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137950(void)
{

loc_00137950: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xD) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137960
 * Original: 0x00137960 - 0x001379A0 (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137960: ;
    MEM32(ecx + 0x40) = 0;
    edx = MEM32(0x87DA6C);
    eax = ecx + 0x44;
    MEM32(eax) = edx;
    edx = MEM32(0x87DA70);
    MEM32(eax + 4) = edx;
    edx = MEM32(0x87DA74);
    MEM32(eax + 8) = edx;
    eax = MEM32(0x87DA6C);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    edx = MEM32(0x87DA70);
    MEM32(ecx + 4) = edx;
    eax = MEM32(0x87DA74);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001379B0
 * Original: 0x001379B0 - 0x001379B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001379B0(void)
{

loc_001379B0: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_001379C0
 * Original: 0x001379C0 - 0x001379CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001379C0(void)
{

loc_001379C0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001379D0
 * Original: 0x001379D0 - 0x001379D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001379D0(void)
{

loc_001379D0: ;
    eax = ecx + 0xB0;
    esp += 4; return; /* ret */

}

/**
 * sub_001379E0
 * Original: 0x001379E0 - 0x001379E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001379E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001379E0: ;
    fp_push(MEMF(ecx + 0xA8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001379F0
 * Original: 0x001379F0 - 0x00137A01 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001379F0(void)
{

loc_001379F0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xA8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137A10
 * Original: 0x00137A10 - 0x00137A21 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137A10(void)
{

loc_00137A10: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xA4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137A30
 * Original: 0x00137A30 - 0x00137A41 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137A30(void)
{

loc_00137A30: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x488) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137A50
 * Original: 0x00137A50 - 0x00137A61 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137A50(void)
{

loc_00137A50: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x478) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137A70
 * Original: 0x00137A70 - 0x00137A77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137A70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00137A70: ;
    fp_push(MEMF(ecx + 0x478)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00137A80
 * Original: 0x00137A80 - 0x00137A94 (20 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137A80(void)
{

loc_00137A80: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x114);
    eax = eax + ecx + 0x118;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137AA0
 * Original: 0x00137AA0 - 0x00137AB4 (20 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137AA0(void)
{

loc_00137AA0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x114);
    eax = eax + ecx + 0x118;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137AC0
 * Original: 0x00137AC0 - 0x00137ACA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137AC0(void)
{

loc_00137AC0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137AD0
 * Original: 0x00137AD0 - 0x00137ADA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137AD0(void)
{

loc_00137AD0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137AE0
 * Original: 0x00137AE0 - 0x00137AED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137AE0(void)
{

loc_00137AE0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xB8) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137AF0
 * Original: 0x00137AF0 - 0x00137B0A (26 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137AF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00137B10
 * Original: 0x00137B10 - 0x00137B1E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137B10(void)
{

loc_00137B10: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    eax = eax + ecx + 0x54;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137B30
 * Original: 0x00137B30 - 0x00137B34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137B30(void)
{

loc_00137B30: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00137B40
 * Original: 0x00137B40 - 0x00137B44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137B40(void)
{

loc_00137B40: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00137B50
 * Original: 0x00137B50 - 0x00137B5A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137B50(void)
{

loc_00137B50: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137B60
 * Original: 0x00137B60 - 0x00137B72 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137B60(void)
{

loc_00137B60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00137B68u); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_00137B68: ;
    MEM32(esi) = 0x7DE1B8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00137B80
 * Original: 0x00137B80 - 0x00137B8B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137B80: ;
    MEM32(ecx) = 0x7DE1B8;
    g_seh_ebp = ebp; sub_00017301(); return; /* tail jmp 0x00017301 */

}

/**
 * sub_00137B90
 * Original: 0x00137B90 - 0x00137BB7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137B90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7DE1B8;
    PUSH32(esp, 0x00137B9Eu); RECOMP_ABI_CALL(0x00017301u, sub_00017301); /* call 0x00017301 */

loc_00137B9E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00137BB1; /* je: equal / zero */

loc_00137BA5: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00137BB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00137BAEu); } /* indirect call */
    }

loc_00137BB1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137BC0
 * Original: 0x00137BC0 - 0x00137BC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137BC0(void)
{

loc_00137BC0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00137BD0
 * Original: 0x00137BD0 - 0x00137BD5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137BD0(void)
{

loc_00137BD0: ;
    MEM8(ecx + 0x4D) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00137BE0
 * Original: 0x00137BE0 - 0x00137BE5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137BE0(void)
{

loc_00137BE0: ;
    MEM8(ecx + 0x4E) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00137BF0
 * Original: 0x00137BF0 - 0x00137BFA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137BF0(void)
{

loc_00137BF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x40) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137C00
 * Original: 0x00137C00 - 0x00137C04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137C00(void)
{

loc_00137C00: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_00137C10
 * Original: 0x00137C10 - 0x00137C18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137C10(void)
{

loc_00137C10: ;
    MEM8(ecx + 0x381) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00137C20
 * Original: 0x00137C20 - 0x00137C28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137C20(void)
{

loc_00137C20: ;
    MEM8(ecx + 0x380) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00137C30
 * Original: 0x00137C30 - 0x00137C37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137C30(void)
{

loc_00137C30: ;
    SET_LO8(eax, MEM8(ecx + 0x3E0));
    esp += 4; return; /* ret */

}

/**
 * sub_00137C40
 * Original: 0x00137C40 - 0x00137C5C (28 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00137C40: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 4);
    ecx = MEM32(ecx + 0xC);
    eax = ZX16(MEM16(ecx + eax * 8));
    ecx = MEM32(esp + 8);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00137C70
 * Original: 0x00137C70 - 0x00137C8F (31 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00137C70: ;
    ecx = MEM32(ecx + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(esp + 4);
    edx = MEM32(ecx + 0xC);
    eax = ZX16(MEM16(edx + eax * 8));
    ecx = MEM32(esp + 8);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00137CA0
 * Original: 0x00137CA0 - 0x00137CA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137CA0(void)
{

loc_00137CA0: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00137CB0
 * Original: 0x00137CB0 - 0x00137CB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137CB0(void)
{

loc_00137CB0: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00137CC0
 * Original: 0x00137CC0 - 0x00137CD1 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137CC0: ;
    SET_LO16(ecx, MEM16(ecx + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esp + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(esp + 4) (16-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137CE0
 * Original: 0x00137CE0 - 0x00137CE5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137CE0(void)
{

loc_00137CE0: ;
    SET_LO16(eax, MEM16(ecx + 8));
    esp += 4; return; /* ret */

}

/**
 * sub_00137CF0
 * Original: 0x00137CF0 - 0x00137CFB (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137CF0(void)
{

loc_00137CF0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x3C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137D00
 * Original: 0x00137D00 - 0x00137D0F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137D00(void)
{

loc_00137D00: ;
    eax = MEM32(ecx + 0xF8);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00137D0Eu); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_00137D0E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00137D20
 * Original: 0x00137D20 - 0x00137D2F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137D20(void)
{

loc_00137D20: ;
    eax = MEM32(ecx + 0xF8);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00137D2Eu); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_00137D2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00137D40
 * Original: 0x00137D40 - 0x00137D47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137D40(void)
{

loc_00137D40: ;
    eax = MEM32(ecx + 0xC0);
    esp += 4; return; /* ret */

}

/**
 * sub_00137D50
 * Original: 0x00137D50 - 0x00137D57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137D50(void)
{

loc_00137D50: ;
    eax = MEM32(ecx + 0xC4);
    esp += 4; return; /* ret */

}

/**
 * sub_00137D60
 * Original: 0x00137D60 - 0x00137D6E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137D60(void)
{

loc_00137D60: ;
    eax = MEM32(ecx + 0xF8);
    eax = MEM32(ecx + eax * 4 + 0xE0);
    esp += 4; return; /* ret */

}

/**
 * sub_00137D80
 * Original: 0x00137D80 - 0x00137D92 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137D80(void)
{

loc_00137D80: ;
    eax = MEM32(ecx + 0xF8);
    MEM32(ecx + eax * 4 + 0xE0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00137DA0
 * Original: 0x00137DA0 - 0x00137DAE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137DA0(void)
{

loc_00137DA0: ;
    eax = MEM32(ecx + 0xF8);
    eax = MEM32(ecx + eax * 4 + 0xEC);
    esp += 4; return; /* ret */

}

/**
 * sub_00137DC0
 * Original: 0x00137DC0 - 0x00137DC9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137DC0(void)
{

loc_00137DC0: ;
    eax = ecx;
    MEM32(eax) = 0x7DE1C8;
    esp += 4; return; /* ret */

}

/**
 * sub_00137DD0
 * Original: 0x00137DD0 - 0x00137DD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137DD0: ;
    g_seh_ebp = ebp; sub_00020951(); return; /* tail jmp 0x00020951 */

}

/**
 * sub_00137DE0
 * Original: 0x00137DE0 - 0x00137E44 (100 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00137DE0: ;
    edx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x8AED30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(eax) = 0x7DE280;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00137E24; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00137E11: ;
    xmm0 = xmm1; /* movaps */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x24) = ecx;
    esp += 8; return; /* ret 4 */

loc_00137E24: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00137E34; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00137E30: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_00137E34: ;
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x24) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137E60
 * Original: 0x00137E60 - 0x00137E66 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137E60(void)
{

loc_00137E60: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00137E70
 * Original: 0x00137E70 - 0x00137E7A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137E70(void)
{

loc_00137E70: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137E80
 * Original: 0x00137E80 - 0x00137E8A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137E80(void)
{

loc_00137E80: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137E90
 * Original: 0x00137E90 - 0x00137E91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137E90(void)
{

loc_00137E90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00137EA0
 * Original: 0x00137EA0 - 0x00137EAB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137EA0: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax + 0x48);
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

}

/**
 * sub_00137EB0
 * Original: 0x00137EB0 - 0x00137EB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137EB0(void)
{

loc_00137EB0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00137EC0
 * Original: 0x00137EC0 - 0x00137EF3 (51 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137EC0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00137EED; /* je: equal / zero */

loc_00137EC7: ;
    edx = MEM32(esp + 4);
    eax = MEM32(eax + edx * 4 + 0xD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00137EED; /* jbe: below or equal (unsigned <=) */

loc_00137ED6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00137EED; /* jae: above or equal (unsigned >=) */

loc_00137EDD: ;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx + 0x1014);
    eax = (uint32_t)(int32_t)SMEM16(edx + eax * 2);
    esp += 8; return; /* ret 4 */

loc_00137EED: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137F00
 * Original: 0x00137F00 - 0x00137F1E (30 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137F00(void)
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

loc_00137F00: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00137F15; /* je: equal / zero */

loc_00137F07: ;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax + ecx * 4 + 0xE4)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00137F15: ;
    fp_push(MEMF(0x7AACB4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00137F30
 * Original: 0x00137F30 - 0x00137F4E (30 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137F30(void)
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

loc_00137F30: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00137F45; /* je: equal / zero */

loc_00137F37: ;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax + ecx * 4 + 0xF0)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00137F45: ;
    fp_push(MEMF(0x7AACB4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00137F60
 * Original: 0x00137F60 - 0x00137F76 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137F60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00137F60: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00137F66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00137F63u); } /* indirect call */
    }

loc_00137F66: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp); /* cvttss2si */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00137F80
 * Original: 0x00137F80 - 0x00137F8F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137F80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137F80: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(esp + 4);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x14) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137FA0
 * Original: 0x00137FA0 - 0x00137FA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137FA0(void)
{

loc_00137FA0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00137FB0
 * Original: 0x00137FB0 - 0x00137FC1 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137FB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x14);
    eax = ~eax;
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x14) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137FD0
 * Original: 0x00137FD0 - 0x00137FE1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137FD0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00137FDD; /* je: equal / zero */

loc_00137FD7: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00137FDD: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00137FF0
 * Original: 0x00137FF0 - 0x00138001 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137FF0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00137FFD; /* je: equal / zero */

loc_00137FF7: ;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00137FFD: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00138010
 * Original: 0x00138010 - 0x00138021 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138010: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013801D; /* je: equal / zero */

loc_00138017: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0013801D: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00138030
 * Original: 0x00138030 - 0x00138041 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138030: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013803D; /* je: equal / zero */

loc_00138037: ;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xCC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0013803D: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00138050
 * Original: 0x00138050 - 0x00138054 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138050(void)
{

loc_00138050: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_00138060
 * Original: 0x00138060 - 0x00138067 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138060(void)
{

loc_00138060: ;
    MEM32(ecx) = 0x7DE280;
    esp += 4; return; /* ret */

}

/**
 * sub_00138070
 * Original: 0x00138070 - 0x0013808E (30 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138070: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00138078u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138075u); } /* indirect call */
    }

loc_00138078: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013808C; /* je: equal / zero */

loc_0013807C: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013808C; /* je: equal / zero */

loc_00138083: ;
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00138089u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00138087u); } /* indirect call */
    }

loc_00138089: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013808C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001380A0
 * Original: 0x001380A0 - 0x001380BE (30 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001380A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001380A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x001380A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001380A5u); } /* indirect call */
    }

loc_001380A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001380BC; /* je: equal / zero */

loc_001380AC: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001380BC; /* je: equal / zero */

loc_001380B3: ;
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001380B9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001380B7u); } /* indirect call */
    }

loc_001380B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001380BC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001380D0
 * Original: 0x001380D0 - 0x001380D8 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001380D0(void)
{

loc_001380D0: ;
    eax = 0x7C0B08;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001380E0
 * Original: 0x001380E0 - 0x001380E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001380E0(void)
{

loc_001380E0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_001380F0
 * Original: 0x001380F0 - 0x001380F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001380F0(void)
{

loc_001380F0: ;
    eax = ecx + 0x110;
    esp += 4; return; /* ret */

}

/**
 * sub_00138100
 * Original: 0x00138100 - 0x0013815A (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138100: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi) = 0x7DE338;
    if (CMP_EQ(_fa, _fb)) goto loc_0013811F; /* je: equal / zero */

loc_00138113: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138119u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00138119: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edi;

loc_0013811F: ;
    eax = MEM32(esi + 0x1014);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00138138; /* je: equal / zero */

loc_00138129: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013812Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013812F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1014) = edi;

loc_00138138: ;
    eax = MEM32(esi + 0x100C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00138151; /* je: equal / zero */

loc_00138142: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138148u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00138148: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x100C) = edi;

loc_00138151: ;
    MEM32(0x8F0680) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00138170
 * Original: 0x00138170 - 0x0013817B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00138170: ;
    ecx = MEM32(ecx + 0x1008);
    g_seh_ebp = ebp; sub_00014C5F(); return; /* tail jmp 0x00014C5F */

}

/**
 * sub_00138180
 * Original: 0x00138180 - 0x0013818B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00138180: ;
    ecx = MEM32(ecx + 0x1008);
    g_seh_ebp = ebp; sub_00014B2E(); return; /* tail jmp 0x00014B2E */

}

/**
 * sub_00138190
 * Original: 0x00138190 - 0x00138193 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138190(void)
{

loc_00138190: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001381A0
 * Original: 0x001381A0 - 0x001381A5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001381A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001381A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001381B0
 * Original: 0x001381B0 - 0x001381B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001381B0(void)
{

loc_001381B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001381C0
 * Original: 0x001381C0 - 0x001381FE (62 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001381C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001381C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001381D0;

    /* nop */

loc_001381D0: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001381DDu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_001381DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001381F6; /* je: equal / zero */

loc_001381E4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001381D0; /* jl: less (signed <) */

loc_001381ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001381F6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00138210
 * Original: 0x00138210 - 0x00138220 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138210(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00138210: ;
    eax = MEM32(ecx + 0x100C);
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax + ecx * 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00138230
 * Original: 0x00138230 - 0x00138246 (22 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138230(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00138230: ;
    eax = MEM32(ecx + 0x100C);
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax + ecx * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00138250
 * Original: 0x00138250 - 0x00138293 (67 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138250: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x1008);
    PUSH32(esp, 0x00138260u); RECOMP_ABI_CALL(0x00014C5Fu, sub_00014C5F); /* call 0x00014C5F */

loc_00138260: ;
    ebx = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013828F; /* jle: less or equal (signed <=) */

loc_00138268: ;
    goto loc_00138270;

    /* nop */

loc_00138270: ;
    ecx = MEM32(edi + 0x1008);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013827Cu); RECOMP_ABI_CALL(0x00014B2Eu, sub_00014B2E); /* call 0x00014B2E */

loc_0013827C: ;
    ecx = eax;
    PUSH32(esp, 0x00138283u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_00138283: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0013828Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138287u); } /* indirect call */
    }

loc_0013828A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138270; /* jl: less (signed <) */

loc_0013828F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001382B0
 * Original: 0x001382B0 - 0x00138360 (176 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001382B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001382B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001382B6: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(eax + ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF4 (32-bit) */
    MEM8(edx) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_001382B6; /* jl: less (signed <) */

loc_001382C9: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax);
    edx = MEM32(0x7DE34C);
    MEM32(ecx) = edx;
    eax = MEM32(0x7DE350);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x7DE354);
    MEM32(ecx + 8) = edx;
    eax = MEM32(0x7DE358);
    PUSH32(esp, 0);
    MEM32(ecx + 0xC) = eax;
    edx = MEM32(0x7DE35C);
    PUSH32(esp, 0x700);
    PUSH32(esp, 0x7DE33C);
    MEM32(ecx + 0x10) = edx;
    PUSH32(esp, 0x00138309u); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_00138309: ;
    SET_LO8(edx, MEM8(eax));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00138354; /* je: equal / zero */

loc_00138316: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 4;
    /* nop */

loc_00138320: ;
    SET_LO8(edx, MEM8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00138334; /* jne: not equal / not zero */

loc_00138327: ;
    edx = MEM32(esi + 0xC);
    edx = MEM32(edx + edi);
    MEM8(ecx + edx) = 0;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0013834A;

loc_00138334: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00138345; /* je: equal / zero */

loc_00138339: ;
    ebp = MEM32(esi + 0xC);
    ebp = MEM32(edi + ebp);
    MEM8(ecx + ebp) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0013834A;

loc_00138345: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013834A: ;
    SET_LO8(edx, MEM8(ebx + 1));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00138320; /* jne: not equal / not zero */

loc_00138352: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00138354: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013835Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0013835A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00138390
 * Original: 0x00138390 - 0x00138394 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138390(void)
{

loc_00138390: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001383A0
 * Original: 0x001383A0 - 0x001383A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001383A0(void)
{

loc_001383A0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001383B0
 * Original: 0x001383B0 - 0x001383BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001383B0(void)
{

loc_001383B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001383C0
 * Original: 0x001383C0 - 0x001383D0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001383C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001383C0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax) = LO16(ecx);
    MEM16(eax + 2) = LO16(ecx);
    MEM16(eax + 4) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001383E0
 * Original: 0x001383E0 - 0x00138447 (103 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001383E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001383E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    fp_push(MEMF(edi)); /* fld float */
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7DE0F0)); /* fmul dword ptr [0x7de0f0] */
    PUSH32(esp, 0x00138401u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00138401: ;
    MEM16(esi) = LO16(eax);
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7DE0F0)); /* fmul dword ptr [0x7de0f0] */
    PUSH32(esp, 0x0013841Eu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0013841E: ;
    MEM16(esi + 2) = LO16(eax);
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7DE0F0)); /* fmul dword ptr [0x7de0f0] */
    PUSH32(esp, 0x0013843Cu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0013843C: ;
    MEM16(esi + 4) = LO16(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00138460
 * Original: 0x00138460 - 0x00138564 (260 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138460(void)
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

loc_00138460: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00138478; /* jge: greater or equal (signed >=) */

loc_00138472: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00138478: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7DE364)); /* fmul dword ptr [0x7de364] */
    edx = MEM32(esp + 8);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ZX16(MEM16(ecx + 2));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DE364); /* mulss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 4);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001384B4; /* jge: greater or equal (signed >=) */

loc_001384AE: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_001384B4: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7DE364)); /* fmul dword ptr [0x7de364] */
    xmm4 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm5 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(edx + 8) = xmm2.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(edx + 4) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm4.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00138535; /* jp: parity */

loc_0013852C: ;
    MEMF(edx + 0xC) = xmm3.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00138535: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138543; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_0013853A: ;
    MEMF(edx + 0xC) = xmm4.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00138543: ;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001385B0
 * Original: 0x001385B0 - 0x001385B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001385B0(void)
{

loc_001385B0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001385C0
 * Original: 0x001385C0 - 0x001385CC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001385C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001385C0: ;
    edx = MEM32(ecx + 0x2C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_001385D0
 * Original: 0x001385D0 - 0x00138620 (80 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001385D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001385D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x44) = ecx;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001385E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001385DDu); } /* indirect call */
    }

loc_001385E0: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xD4) = eax;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001385F6; /* je: equal / zero */

loc_001385F2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00138609; /* jne: not equal / not zero */

loc_001385F6: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1E0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x370;
    PUSH32(esp, 0x00138609u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_00138609: ;
    ecx = MEM32(esi + 0xD4);
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013861C; /* jne: not equal / not zero */

loc_00138615: ;
    MEM8(esi + 0x3DE) = 1;

loc_0013861C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00138640
 * Original: 0x00138640 - 0x00138666 (38 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138640: ;
    eax = MEM32(ecx + 0x100);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00138663; /* je: equal / zero */

loc_0013864D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    MEMF(eax + 0x488) = xmm0.f[0]; /* movss */

loc_00138663: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00138670
 * Original: 0x00138670 - 0x0013867B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00138670: ;
    ecx = MEM32(ecx + 0x100);
    g_seh_ebp = ebp; sub_00020C71(); return; /* tail jmp 0x00020C71 */

}

/**
 * sub_00138680
 * Original: 0x00138680 - 0x001386EA (106 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138680: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x100);
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 0x00138695u); RECOMP_ABI_CALL(0x00027FA8u, sub_00027FA8); /* call 0x00027FA8 */

loc_00138695: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001386A7; /* je: equal / zero */

loc_00138699: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001386A3u); RECOMP_ABI_CALL(0x000275F8u, sub_000275F8); /* call 0x000275F8 */

loc_001386A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001386C2; /* je: equal / zero */

loc_001386A7: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001386B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001386AEu); } /* indirect call */
    }

loc_001386B1: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 1);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001386C2u); RECOMP_ABI_CALL(0x00037057u, sub_00037057); /* call 0x00037057 */

loc_001386C2: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001386CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001386C9u); } /* indirect call */
    }

loc_001386CC: ;
    ecx = MEM32(esi + 0x3E8);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001386E6; /* jne: not equal / not zero */

loc_001386D9: ;
    MEM8(esi + 0x3E0) = 0;
    MEM32(esi + 0x3E8) = eax;

loc_001386E6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00138710
 * Original: 0x00138710 - 0x0013879E (142 bytes, 47 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138710: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x34);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00138731; /* jne: not equal / not zero */

loc_00138723: ;
    eax = ebx + 4;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0013872Eu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_0013872E: ;
    MEM32(ebx + 8) = eax;

loc_00138731: ;
    eax = MEM32(ebx + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x24); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
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
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(edi + 0xFC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00138784u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138781u); } /* indirect call */
    }

loc_00138784: ;
    ecx = MEM32(edi + 0xFC);
    edx = MEM32(ecx + 0xF8);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00138798u); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_00138798: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001387D0
 * Original: 0x001387D0 - 0x00138883 (179 bytes, 55 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001387D0(void)
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

loc_001387D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = esi + 0x10;
    eax = edx;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 4) = ecx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(eax + 8) = ecx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMF(ecx)); /* fld float */
    eax = esi + 0x20;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_push(MEMF(0x8B54DC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8B54E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8B54E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0xFC);
    edi = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edi + 0x10); PUSH32(esp, 0x00138874u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138871u); } /* indirect call */
    }

loc_00138874: ;
    POP32(esp, edi);
    MEM8(esi + 0x381) = 0;
    POP32(esp, esi);
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
 * sub_001388B0
 * Original: 0x001388B0 - 0x001388B9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001388B0(void)
{

loc_001388B0: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x001388B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001388B5u); } /* indirect call */
    }

loc_001388B8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001388C0
 * Original: 0x001388C0 - 0x001388D7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001388C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001388C0: ;
    eax = MEM32(ecx + 0xFC);
    edx = MEM32(eax + 0x94);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_001388E0
 * Original: 0x001388E0 - 0x001388ED (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001388E0(void)
{

loc_001388E0: ;
    eax = MEM32(ecx + 0xFC);
    eax = MEM32(eax + 0x94);
    esp += 4; return; /* ret */

}

/**
 * sub_001388F0
 * Original: 0x001388F0 - 0x001389BA (202 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001388F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001388F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xFC);
    eax = MEM32(edi + 0x94);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x54;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0xF) = 0;
    MEM32(esp + 0x10) = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00138910: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001389A3; /* jge: greater or equal (signed >=) */

loc_0013891A: ;
    ecx = MEM32(edi + ebp * 4);
    esi = MEM32(ecx + 0x14);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00138935; /* jne: not equal / not zero */

loc_00138927: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00138932u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00138932: ;
    MEM32(esi + 8) = eax;

loc_00138935: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013894B; /* jne: not equal / not zero */

loc_0013893F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00138946u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138943u); } /* indirect call */
    }

loc_00138946: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013894D; /* je: equal / zero */

loc_0013894B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013894D: ;
    esi = MEM32(esi + 0x34);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00138965; /* jne: not equal / not zero */

loc_00138957: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00138962u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00138962: ;
    MEM32(esi + 8) = eax;

loc_00138965: ;
    eax = MEM32(esi + 8);
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
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00138995; /* jbe: below or equal (unsigned <=) */

loc_0013897C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00138995; /* jae: above or equal (unsigned >=) */

loc_00138983: ;
    ecx = MEM32(0x8F0680);
    edx = MEM32(ecx + 0x1014);
    eax = (uint32_t)(int32_t)SMEM16(edx + eax * 2);
    goto loc_00138998;

loc_00138995: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00138998: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001389A3; /* jne: not equal / not zero */

loc_0013899E: ;
    MEM8(esp + 0xF) = 1;

loc_001389A3: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138910; /* jl: less (signed <) */

loc_001389AD: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001389F0
 * Original: 0x001389F0 - 0x00138A0E (30 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001389F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001389F0: ;
    eax = MEM32(ecx + 0x100);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00138A0B; /* je: equal / zero */

loc_001389FD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x478) = xmm0.f[0]; /* movss */

loc_00138A0B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00138A20
 * Original: 0x00138A20 - 0x00138A3B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138A20(void)
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

loc_00138A20: ;
    eax = MEM32(ecx + 0x100);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00138A34; /* jne: not equal / not zero */

loc_00138A2D: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 4; return; /* ret */

loc_00138A34: ;
    fp_push(MEMF(eax + 0x478)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00138A50
 * Original: 0x00138A50 - 0x00138A51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138A50(void)
{

loc_00138A50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00138A60
 * Original: 0x00138A60 - 0x00139072 (1554 bytes, 439 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138A60(void)
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

loc_00138A60: ;
    xmm0 = XMM_SCALAR(MEMF(0x8AED30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x58));
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, ebp);
    ebp = ebx + 0x90;
    ecx = ebp;
    edx = MEM32(ecx);
    eax = ebx + 0xA0;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 8) = edx;
    MEM8(ebx + 0x382) = 0;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x8F95C0);
    edx = ebp;
    MEM32(edx) = eax;
    ecx = MEM32(0x8F95C4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8F95C8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x8F95CC);
    MEM32(edx + 0xC) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138ACA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00138AC5: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00138ADA;

loc_00138ACA: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00138ADA; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00138AD6: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_00138ADA: ;
    MEMF(ebx + 0xC0) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x100);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013906C; /* je: equal / zero */

loc_00138AF3: ;
    ecx = MEM32(eax + 0x208);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013906C; /* je: equal / zero */

loc_00138B01: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1C8);
    esi = MEM32(edi + 0x14);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00138B24; /* jne: not equal / not zero */

loc_00138B13: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00138B1Eu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00138B1E: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 8) = eax;

loc_00138B24: ;
    eax = MEM32(esi + 8);
    edx = MEM32(0x8F95D8);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 1 (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x40) = edx;
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x8F95D0);
    esi = ecx;
    ecx = MEM32(0x8F95D4);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x30) = ecx;
    edx = MEM32(edi + 0x24);
    eax = MEM32(edi + 0x28);
    MEM32(esp + 0x18) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esp + 0x1C) = eax;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00138BBD; /* jp: parity */

loc_00138B8A: ;
    eax = MEM32(ebx + 0xFC);
    ecx = MEM32(eax + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00138BBD; /* jl: less (signed <) */

loc_00138B9B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ecx * 4 + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + ecx * 4 + 0x50) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00138BBD; /* jne: not equal / not zero */

loc_00138BA1: ;
    edi = MEM32(eax + ecx * 4 + 0x4C);
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, 0x00138BADu); RECOMP_ABI_CALL(0x0002B482u, sub_0002B482); /* call 0x0002B482 */

loc_00138BAD: ;
    ecx = MEM32(edi + 0x24);
    edx = MEM32(edi + 0x28);
    esi = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;

loc_00138BBD: ;
    ecx = MEM32(ebx + 0xD4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00138BC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138BC5u); } /* indirect call */
    }

loc_00138BC8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, MEM8(esi + 0xC));
    if (CMP_EQ(_fa, _fb)) goto loc_00138BDA; /* je: equal / zero */

loc_00138BCF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esp + 0x20) = LO8(ecx);
    goto loc_00138BE3;

loc_00138BDA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esp + 0x20) = LO8(edx);

loc_00138BE3: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138DE8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_00138C01: ;
    eax = MEM32(0x8F95D0);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x8F95D4);
    edx = MEM32(0x8F95D8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esi);
    MEM32(esp + 0x48) = ecx;
    ecx = esi;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x4C) = edx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00138C44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138C41u); } /* indirect call */
    }

loc_00138C44: ;
    edi = MEM32(esp + 0x20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00138C64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138C61u); } /* indirect call */
    }

loc_00138C64: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    edx = MEM32(esi);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00138C78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138C75u); } /* indirect call */
    }

loc_00138C78: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00138C94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138C91u); } /* indirect call */
    }

loc_00138C94: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x50); /* subss */
    ecx = MEM32(0x8F95D4);
    edx = MEM32(0x8F95D8);
    eax = MEM32(0x8F95D0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA840)); /* fmul dword ptr [0x7aa840] */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x58); /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x48) = ecx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x50) = eax;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00138D04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138D01u); } /* indirect call */
    }

loc_00138D04: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00138D20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138D1Du); } /* indirect call */
    }

loc_00138D20: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    edx = MEM32(esi);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00138D38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138D35u); } /* indirect call */
    }

loc_00138D38: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00138D54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138D51u); } /* indirect call */
    }

loc_00138D54: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x5C); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x4C); /* subss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x64); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    MEMF(ebx + 0x98) = xmm1.f[0]; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x8AED30)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138DBD; /* jb: below (unsigned <) (xmm1.f[0] vs xmm4.f[0]) */

loc_00138DB4: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00138EAF; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00138DBD: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138DCB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00138DC2: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00138EAF;

loc_00138DCB: ;
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00138EAF; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00138DDF: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    goto loc_00138EAF;

loc_00138DE8: ;
    edx = MEM32(esi);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00138DF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138DF0u); } /* indirect call */
    }

loc_00138DF3: ;
    edi = MEM32(esp + 0x20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00138E13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138E10u); } /* indirect call */
    }

loc_00138E13: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    edx = MEM32(esi);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00138E2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138E28u); } /* indirect call */
    }

loc_00138E2B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00138E47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138E44u); } /* indirect call */
    }

loc_00138E47: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x40); /* subss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(ebx + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8AED30)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138E90; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00138E8B: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00138EAC; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00138E90: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138E9B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00138E95: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00138EAC;

loc_00138E9B: ;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00138EAC; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00138EA8: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00138EAC: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */

loc_00138EAF: ;
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(ebx + 0xC0) = xmm1.f[0]; /* movss */
    POP32(esp, edi);
    MEMF(ebx + 0x94) = xmm4.f[0]; /* movss */
    MEMF(ebx + 0x9C) = xmm4.f[0]; /* movss */
    POP32(esp, esi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138ED8; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_00138ECE: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138ED8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00138ED3: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00138EFD;

loc_00138ED8: ;
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138EE6; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_00138EDD: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm1 = xmm2; /* movaps */
    goto loc_00138EFD;

loc_00138EE6: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00138EFD; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00138EF9: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00138EFD: ;
    MEMF(ebx + 0xD0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x98)); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp)); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138F3C; /* jb: below (unsigned <) (xmm1.f[0] vs xmm4.f[0]) */

loc_00138F37: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00138F5B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00138F3C: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138F47; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00138F41: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00138F5B;

loc_00138F47: ;
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00138F5B; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00138F57: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00138F5B: ;
    xmm2 = XMM_SCALAR(MEMF(ebx + 0xA8)); /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0xA0)); /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138F95; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_00138F90: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00138FB4; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_00138F95: ;
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138FA0; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_00138F9A: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    goto loc_00138FB4;

loc_00138FA0: ;
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00138FB4; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm3.f[0]) */

loc_00138FB0: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_00138FB4: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138FC5; /* jb: below (unsigned <) (xmm3.f[0] vs xmm4.f[0]) */

loc_00138FC0: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00138FE4; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_00138FC5: ;
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138FD0; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_00138FCA: ;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    goto loc_00138FE4;

loc_00138FD0: ;
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00138FE4; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00138FE0: ;
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */

loc_00138FE4: ;
    MEMF(ebx + 0xC4) = xmm3.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0xD0); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00138FFE; /* jb: below (unsigned <) (xmm1.f[0] vs xmm4.f[0]) */

loc_00138FF9: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0013901A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00138FFE: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00139009; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00139003: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_0013901A;

loc_00139009: ;
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0013901A; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00139016: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_0013901A: ;
    MEMF(ebx + 0xC8) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
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
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(ebx + 0xCC) = xmm0.f[0]; /* movss */

loc_0013906C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x58)) >> 32) & 1);
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00139200
 * Original: 0x00139200 - 0x001392B0 (176 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139200: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0013920Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139208u); } /* indirect call */
    }

loc_0013920B: ;
    ecx = MEM32(esi + 0xFC);
    ecx = MEM32(ecx + 0xC0);
    PUSH32(esp, 0x0013921Cu); RECOMP_ABI_CALL(0x0002A4ECu, sub_0002A4EC); /* call 0x0002A4EC */

loc_0013921C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esi + 0xFC);
    ecx = MEM32(edx + 0xC4);
    if (CMP_LE(_fas, _fbs)) goto loc_00139261; /* jle: less or equal (signed <=) */

loc_0013922C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00139230: ;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(ecx + -32, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(ecx + -16, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00139230; /* jne: not equal / not zero */

loc_00139261: ;
    ecx = MEM32(0x8F95C0);
    eax = esi + 0x70;
    MEM32(eax) = ecx;
    edx = MEM32(0x8F95C4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x8F95C8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x8F95CC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(0x8B5500);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    ecx = MEM32(0x8B5504);
    MEM32(esi + 4) = ecx;
    edx = MEM32(0x8B5508);
    MEM32(esi + 8) = edx;
    eax = MEM32(0x8B550C);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001392E0
 * Original: 0x001392E0 - 0x001392E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001392E0(void)
{

loc_001392E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001392F0
 * Original: 0x001392F0 - 0x00139302 (18 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001392F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001392F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001392FBu); RECOMP_ABI_CALL(0x0001ABEBu, sub_0001ABEB); /* call 0x0001ABEB */

loc_001392FB: ;
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 9;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139310
 * Original: 0x00139310 - 0x001393FF (239 bytes, 86 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00139310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    ecx = 0xFFFF0000u;
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + 0x14);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013935Cu); RECOMP_ABI_CALL(0x0001C8C4u, sub_0001C8C4); /* call 0x0001C8C4 */

loc_0013935C: ;
    PUSH32(esp, 8);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013936Au); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0013936A: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139378u); RECOMP_ABI_CALL(0x000353DDu, sub_000353DD); /* call 0x000353DD */

loc_00139378: ;
    PUSH32(esp, 8);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139386u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_00139386: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139394u); RECOMP_ABI_CALL(0x000353DDu, sub_000353DD); /* call 0x000353DD */

loc_00139394: ;
    edx = MEM32(ebp + 0x10);
    ecx = esi + 0x430;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001393AEu); RECOMP_ABI_CALL(0x0059F60Au, sub_0059F60A); /* call 0x0059F60A */

loc_001393AE: ;
    eax = MEM32(esi + 0xD4);
    ecx = MEM32(eax + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001393CB; /* jne: not equal / not zero */

loc_001393BF: ;
    edx = MEM32(eax + 0x20);
    eax = MEM32(edx + 0x34);
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx + 4) = eax;

loc_001393CB: ;
    PUSH32(esp, 1);
    edx = esp + 0x13;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001393D9u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_001393D9: ;
    PUSH32(esp, 1);
    eax = esp + 0x12;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001393E7u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_001393E7: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM8(esi + 0x3EC) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00139440
 * Original: 0x00139440 - 0x00139459 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139440(void)
{

loc_00139440: ;
    edx = MEM32(ecx + 0xFC);
    eax = ecx + 0x10;
    MEM32(edx + 0x10) = eax;
    eax = ecx + 0x20;
    ecx = MEM32(ecx + 0xFC);
    MEM32(ecx + 0x14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00139460
 * Original: 0x00139460 - 0x00139494 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139460(void)
{

loc_00139460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xD4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x48);
    ecx = edi;
    PUSH32(esp, 0x00139475u); RECOMP_ABI_CALL(0x0001A17Du, sub_0001A17D); /* call 0x0001A17D */

loc_00139475: ;
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x0013947Eu); RECOMP_ABI_CALL(0x0002F4ECu, sub_0002F4EC); /* call 0x0002F4EC */

loc_0013947E: ;
    ecx = MEM32(esi + 0xFC);
    MEM32(ecx + 0x10) = ebx;
    edx = MEM32(esi + 0xFC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 0x14) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001394B0
 * Original: 0x001394B0 - 0x00139533 (131 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001394B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001394B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xD4);
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001394C5u); RECOMP_ABI_CALL(0x0002D91Cu, sub_0002D91C); /* call 0x0002D91C */

loc_001394C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013952F; /* je: equal / zero */

loc_001394C9: ;
    ecx = MEM32(esi + 0xD4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, 0x001394DBu); RECOMP_ABI_CALL(0x000116A9u, sub_000116A9); /* call 0x000116A9 */

loc_001394DB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(0x8EB3BC);
    if (CMP_EQ(_fa, _fb)) goto loc_001394F3; /* je: equal / zero */

loc_001394E5: ;
    edx = MEM32(esi + 0xD4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001394F1u); RECOMP_ABI_CALL(0x0001ECE6u, sub_0001ECE6); /* call 0x0001ECE6 */

loc_001394F1: ;
    goto loc_00139515;

loc_001394F3: ;
    eax = MEM32(esi + 0xD4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001394FFu); RECOMP_ABI_CALL(0x00030347u, sub_00030347); /* call 0x00030347 */

loc_001394FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013952F; /* je: equal / zero */

loc_00139503: ;
    ecx = MEM32(esi + 0xD4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, 0x00139515u); RECOMP_ABI_CALL(0x00032BBFu, sub_00032BBF); /* call 0x00032BBF */

loc_00139515: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013952F; /* jne: not equal / not zero */

loc_0013951B: ;
    edx = MEM32(esi + 0xD4);
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013952Fu); RECOMP_ABI_CALL(0x00022ADAu, sub_00022ADA); /* call 0x00022ADA */

loc_0013952F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139560
 * Original: 0x00139560 - 0x00139612 (178 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00139560(void)
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

loc_00139560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xD4);
    edx = MEM32(eax + 0x20);
    fp_push(MEMF(edx + 0x60)); /* fld float */
    eax = ecx + 0x20;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_push(MEMF(0x8B54DC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8B54E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8B54E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    edi = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    edx = ecx + 0x10;
    esi = edx;
    MEM32(esi) = edi;
    edi = MEM32(esp + 0x14);
    MEM32(esi + 4) = edi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi + 8) = edi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x1C);
    MEM32(esi + 0xC) = edi;
    esi = MEM32(ecx + 0xFC);
    MEM32(esi + 0x10) = edx;
    ecx = MEM32(ecx + 0xFC);
    POP32(esp, edi);
    MEM32(ecx + 0x14) = eax;
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
 * sub_00139640
 * Original: 0x00139640 - 0x001396F2 (178 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139640: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0013964Du); RECOMP_ABI_CALL(0x00014A25u, sub_00014A25); /* call 0x00014A25 */

loc_0013964D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi + 0x1E0) = 0x7AB15C;
    MEM32(esi) = 0x7DE370;
    MEM32(esi + 0x1E0) = 0x7DE368;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1E4) = eax;
    MEM32(esi + 0x1E8) = eax;
    MEM32(esi + 0x1EC) = eax;
    MEM32(esi + 0x1F0) = eax;
    MEMF(esi + 0x200) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x204) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x208) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x210) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x214) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x218) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x21C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x220) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x224) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x228) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x22C) = xmm1.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139720
 * Original: 0x00139720 - 0x0013972D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139720(void)
{

loc_00139720: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x1DA) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139730
 * Original: 0x00139730 - 0x00139737 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139730(void)
{

loc_00139730: ;
    SET_LO8(eax, MEM8(ecx + 0x1DA));
    esp += 4; return; /* ret */

}

/**
 * sub_00139740
 * Original: 0x00139740 - 0x001397CD (141 bytes, 57 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139740: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 0x1EC) = ecx;
    ecx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esi + 0x1E8) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x1E4) = edi;
    MEM32(esi + 0x1F0) = edx;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00139779u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139776u); } /* indirect call */
    }

loc_00139779: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139786; /* je: equal / zero */

loc_00139781: ;
    ebx = MEM32(eax + 4);
    goto loc_00139788;

loc_00139786: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00139788: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_001397A5; /* je: equal / zero */

loc_00139798: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001397A0; /* jne: not equal / not zero */

loc_0013979C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001397A5; /* je: equal / zero */

loc_001397A0: ;
    eax = MEM32(eax + 4);
    goto loc_001397A7;

loc_001397A5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001397A7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001397C7u); RECOMP_ABI_CALL(0x00031BC5u, sub_00031BC5); /* call 0x00031BC5 */

loc_001397C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_001397F0
 * Original: 0x001397F0 - 0x00139805 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001397F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001397F0: ;
    MEM32(ecx) = 0x7DE370;
    MEM32(ecx + 0x1E0) = 0x7DE368;
    g_seh_ebp = ebp; sub_0002C530(); return; /* tail jmp 0x0002C530 */

}

/**
 * sub_00139810
 * Original: 0x00139810 - 0x00139962 (338 bytes, 110 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139810: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44852F4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x44852F4 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_00139924; /* ja: above (unsigned >) */

loc_00139826: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001398C2; /* je: equal / zero */

loc_0013982C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x402CDA7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x402CDA7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139881; /* je: equal / zero */

loc_00139834: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4484C2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4484C2E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013995D; /* jne: not equal / not zero */

loc_00139840: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00139850u); RECOMP_ABI_CALL(0x00034794u, sub_00034794); /* call 0x00034794 */

loc_00139850: ;
    edx = MEM32(esi + -480);
    edi = esi + -480;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00139861u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013985Eu); } /* indirect call */
    }

loc_00139861: ;
    ecx = eax;
    PUSH32(esp, 0x00139868u); RECOMP_ABI_CALL(0x00020C71u, sub_00020C71); /* call 0x00020C71 */

loc_00139868: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00139875u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139872u); } /* indirect call */
    }

loc_00139875: ;
    ecx = eax;
    PUSH32(esp, 0x0013987Cu); RECOMP_ABI_CALL(0x00016145u, sub_00016145); /* call 0x00016145 */

loc_0013987C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00139881: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00139891u); RECOMP_ABI_CALL(0x00034794u, sub_00034794); /* call 0x00034794 */

loc_00139891: ;
    edx = MEM32(esi + -480);
    edi = esi + -480;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001398A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013989Fu); } /* indirect call */
    }

loc_001398A2: ;
    ecx = eax;
    PUSH32(esp, 0x001398A9u); RECOMP_ABI_CALL(0x00020C71u, sub_00020C71); /* call 0x00020C71 */

loc_001398A9: ;
    eax = MEM32(esi + 8);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001398B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001398B3u); } /* indirect call */
    }

loc_001398B6: ;
    ecx = eax;
    PUSH32(esp, 0x001398BDu); RECOMP_ABI_CALL(0x00016145u, sub_00016145); /* call 0x00016145 */

loc_001398BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001398C2: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 4);
    SET_LO8(edx, MEM8(eax + 0x4D));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001398F3; /* je: equal / zero */

loc_001398DB: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001398E6; /* jne: not equal / not zero */

loc_001398E1: ;
    MEM32(eax + 4) = ecx;
    goto loc_001398F3;

loc_001398E6: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x001398F3u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_001398F3: ;
    edx = MEM32(esi + -480);
    edi = esi + -480;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00139904u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139901u); } /* indirect call */
    }

loc_00139904: ;
    ecx = eax;
    PUSH32(esp, 0x0013990Bu); RECOMP_ABI_CALL(0x00020C71u, sub_00020C71); /* call 0x00020C71 */

loc_0013990B: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00139918u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139915u); } /* indirect call */
    }

loc_00139918: ;
    ecx = eax;
    PUSH32(esp, 0x0013991Fu); RECOMP_ABI_CALL(0x00016145u, sub_00016145); /* call 0x00016145 */

loc_0013991F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00139924: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49A7776) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x49A7776 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013995D; /* jne: not equal / not zero */

loc_0013992C: ;
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139946; /* jne: not equal / not zero */

loc_00139934: ;
    ecx = MEM32(0x901E28);
    eax = esi + -480;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139946u); RECOMP_ABI_CALL(0x0002FCD5u, sub_0002FCD5); /* call 0x0002FCD5 */

loc_00139946: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013995D; /* jne: not equal / not zero */

loc_0013994B: ;
    ecx = MEM32(0x901E28);
    _fb = (uint32_t)(0xFFFFFE20u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFE20u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013995Du); RECOMP_ABI_CALL(0x00015A29u, sub_00015A29); /* call 0x00015A29 */

loc_0013995D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001399C0
 * Original: 0x001399C0 - 0x001399CD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001399C0(void)
{

loc_001399C0: ;
    eax = ecx;
    MEM32(eax) = 0x7DE3D4;
    MEM8(eax + 0x10) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001399D0
 * Original: 0x001399D0 - 0x001399E4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001399D0(void)
{

loc_001399D0: ;
    eax = MEM32(ecx + 0xE0);
    PUSH32(esp, eax);
    MEM32(ecx) = 0x7DE3D4;
    PUSH32(esp, 0x001399E2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001399E2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001399F0
 * Original: 0x001399F0 - 0x00139A23 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001399F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001399F0: ;
    eax = MEM32(0x8F0684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139A22; /* jne: not equal / not zero */

loc_001399F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x00139A04u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00139A04: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139A1B; /* je: equal / zero */

loc_00139A0B: ;
    MEM32(eax) = 0x7DE3D4;
    MEM8(eax + 0x10) = 0;
    MEM32(0x8F0684) = eax;
    esp += 4; return; /* ret */

loc_00139A1B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F0684) = eax;

loc_00139A22: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139A30
 * Original: 0x00139A30 - 0x00139A4B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139A30: ;
    ecx = MEM32(0x8F0684);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139A40; /* je: equal / zero */

loc_00139A3A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00139A40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139A3Eu); } /* indirect call */
    }

loc_00139A40: ;
    MEM32(0x8F0684) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00139A60
 * Original: 0x00139A60 - 0x00139A6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139A60(void)
{

loc_00139A60: ;
    MEM32(0x8F0688) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00139A70
 * Original: 0x00139A70 - 0x00139A7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139A70(void)
{

loc_00139A70: ;
    MEM32(0x8F0688) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00139A80
 * Original: 0x00139A80 - 0x00139CF2 (626 bytes, 120 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139A80(void)
{

loc_00139A80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, 0x7DE4A4);
    ecx = edi;
    PUSH32(esp, 0x00139A94u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139A94: ;
    PUSH32(esp, 0x7DE49C);
    ecx = edi;
    MEM32(esi + 0xA0) = eax;
    PUSH32(esp, 0x00139AA6u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139AA6: ;
    PUSH32(esp, 0x7DE494);
    ecx = edi;
    MEM32(esi + 0xA4) = eax;
    PUSH32(esp, 0x00139AB8u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139AB8: ;
    PUSH32(esp, 0x7DE48C);
    ecx = edi;
    MEM32(esi + 0xA8) = eax;
    PUSH32(esp, 0x00139ACAu); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139ACA: ;
    PUSH32(esp, 0x7DE484);
    ecx = edi;
    MEM32(esi + 0xAC) = eax;
    PUSH32(esp, 0x00139ADCu); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139ADC: ;
    PUSH32(esp, 0x7DE47C);
    ecx = edi;
    MEM32(esi + 0xB0) = eax;
    PUSH32(esp, 0x00139AEEu); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139AEE: ;
    PUSH32(esp, 0x7DE474);
    ecx = edi;
    MEM32(esi + 0xB4) = eax;
    PUSH32(esp, 0x00139B00u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139B00: ;
    PUSH32(esp, 0x7DE46C);
    ecx = edi;
    MEM32(esi + 0xB8) = eax;
    PUSH32(esp, 0x00139B12u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139B12: ;
    PUSH32(esp, 0x7DE464);
    ecx = edi;
    MEM32(esi + 0xBC) = eax;
    PUSH32(esp, 0x00139B24u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139B24: ;
    PUSH32(esp, 0x7DE45C);
    ecx = edi;
    MEM32(esi + 0xC0) = eax;
    PUSH32(esp, 0x00139B36u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139B36: ;
    PUSH32(esp, 0x7DE454);
    ecx = edi;
    MEM32(esi + 0xC4) = eax;
    PUSH32(esp, 0x00139B48u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139B48: ;
    PUSH32(esp, 0x7DE448);
    ecx = edi;
    MEM32(esi + 0xC8) = eax;
    PUSH32(esp, 0x00139B5Au); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139B5A: ;
    PUSH32(esp, 0x7DE43C);
    ecx = edi;
    MEM32(esi + 0xCC) = eax;
    PUSH32(esp, 0x00139B6Cu); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139B6C: ;
    PUSH32(esp, 0x7DE42C);
    ecx = edi;
    MEM32(esi + 0xD0) = eax;
    PUSH32(esp, 0x00139B7Eu); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139B7E: ;
    PUSH32(esp, 0x7DE420);
    ecx = edi;
    MEM32(esi + 0xD4) = eax;
    PUSH32(esp, 0x00139B90u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139B90: ;
    xmm3 = XMM_SCALAR(MEMF(0x7DE41C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7DE418)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7DE414)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7DE410)); /* movss */
    MEM32(esi + 0xD8) = eax;
    MEMF(esi + 0x30) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7DE40C)); /* movss */
    MEMF(esi + 0x34) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7DE408)); /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x38) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7DE404)); /* movss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7DE400)); /* movss */
    MEMF(esi + 0x44) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7DE3FC)); /* movss */
    MEMF(esi + 0x48) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7DE3F8)); /* movss */
    MEMF(esi + 0x50) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7DE3F4)); /* movss */
    MEMF(esi + 0x68) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7DE3F0)); /* movss */
    MEMF(esi + 0x70) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7DE3EC)); /* movss */
    MEMF(esi + 0x74) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7DE3E8)); /* movss */
    MEMF(esi + 0x78) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7DE3E4)); /* movss */
    MEMF(esi + 0x80) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7DE3E0)); /* movss */
    MEMF(esi + 0x84) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7DE3DC)); /* movss */
    MEMF(esi + 0x88) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7DE3D8)); /* movss */
    MEMF(esi + 0x64) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x90) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x9C) = xmm3.f[0]; /* movss */
    POP32(esp, edi);
    MEM8(esi + 0x10) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139D90
 * Original: 0x00139D90 - 0x00139F64 (468 bytes, 104 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139D90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi;
    PUSH32(esp, 0x00139D9Fu); RECOMP_ABI_CALL(0x0002A4ECu, sub_0002A4EC); /* call 0x0002A4EC */

loc_00139D9F: ;
    MEM32(esi + 0xDC) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139DB0u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00139DB0: ;
    ecx = MEM32(esi + 0xDC);
    MEM32(esi + 0xE0) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00139DE8; /* jle: less or equal (signed <=) */

loc_00139DC5: ;
    goto loc_00139DD0;

    /* nop */
    edi = edi;

loc_00139DD0: ;
    ecx = MEM32(esi + 0xE0);
    MEM32(ecx + eax * 4) = 0;
    ecx = MEM32(esi + 0xDC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00139DD0; /* jl: less (signed <) */

loc_00139DE8: ;
    PUSH32(esp, 0x7DE42C);
    ecx = edi;
    PUSH32(esp, 0x00139DF4u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139DF4: ;
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, 0x7DE420);
    ecx = edi;
    MEM32(edx + eax * 4) = 1;
    PUSH32(esp, 0x00139E0Du); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139E0D: ;
    ecx = MEM32(esi + 0xE0);
    MEM32(ecx + eax * 4) = 1;
    PUSH32(esp, 0x7DE474);
    ecx = edi;
    PUSH32(esp, 0x00139E26u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139E26: ;
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, 0x7DE47C);
    ecx = edi;
    MEM32(edx + eax * 4) = 1;
    PUSH32(esp, 0x00139E3Fu); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139E3F: ;
    ecx = MEM32(esi + 0xE0);
    MEM32(ecx + eax * 4) = 1;
    PUSH32(esp, 0x7DE48C);
    ecx = edi;
    PUSH32(esp, 0x00139E58u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139E58: ;
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, 0x7DE49C);
    ecx = edi;
    MEM32(edx + eax * 4) = 1;
    PUSH32(esp, 0x00139E71u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139E71: ;
    ecx = MEM32(esi + 0xE0);
    MEM32(ecx + eax * 4) = 1;
    PUSH32(esp, 0x7DE484);
    ecx = edi;
    PUSH32(esp, 0x00139E8Au); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139E8A: ;
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, 0x7DE494);
    ecx = edi;
    MEM32(edx + eax * 4) = 1;
    PUSH32(esp, 0x00139EA3u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139EA3: ;
    ecx = MEM32(esi + 0xE0);
    MEM32(ecx + eax * 4) = 1;
    PUSH32(esp, 0x7DE4A4);
    ecx = edi;
    PUSH32(esp, 0x00139EBCu); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139EBC: ;
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, 0x7DE4EC);
    ecx = edi;
    MEM32(edx + eax * 4) = 1;
    PUSH32(esp, 0x00139ED5u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139ED5: ;
    ecx = MEM32(esi + 0xE0);
    MEM32(ecx + eax * 4) = 1;
    PUSH32(esp, 0x7DE4E0);
    ecx = edi;
    PUSH32(esp, 0x00139EEEu); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139EEE: ;
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, 0x7DE4D0);
    ecx = edi;
    MEM32(edx + eax * 4) = 1;
    PUSH32(esp, 0x00139F07u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139F07: ;
    ecx = MEM32(esi + 0xE0);
    MEM32(ecx + eax * 4) = 1;
    PUSH32(esp, 0x7DE4C8);
    ecx = edi;
    PUSH32(esp, 0x00139F20u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139F20: ;
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, 0x7DE4BC);
    ecx = edi;
    MEM32(edx + eax * 4) = 1;
    PUSH32(esp, 0x00139F39u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139F39: ;
    ecx = MEM32(esi + 0xE0);
    MEM32(ecx + eax * 4) = 1;
    PUSH32(esp, 0x7DE4AC);
    ecx = edi;
    PUSH32(esp, 0x00139F52u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_00139F52: ;
    edx = MEM32(esi + 0xE0);
    POP32(esp, edi);
    MEM32(edx + eax * 4) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139FE0
 * Original: 0x00139FE0 - 0x0013A316 (822 bytes, 203 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00139FE0(void)
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

loc_00139FE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0xD4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xD8);
    PUSH32(esp, edi);
    xmm3 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEM32(esp + 0x14) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    edi = edx;
    edx = MEM32(ecx + edi * 4 + 0xC4);
    edi = MEM32(ecx + edi * 4 + 0xCC);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi + eax + 0x30;
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(esp + 0x18);
    edi = MEM32(ecx + edi * 4 + 0xC4);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi + eax + 0x30;
    MEM32(esp + 0x20) = edi;
    edi = MEM32(esp + 0x18);
    ecx = MEM32(ecx + edi * 4 + 0xCC);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm5 = XMM_SCALAR(MEMF(ecx + eax + 0x34)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + eax + 0x38)); /* movss */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm7 = XMM_SCALAR(MEMF(edx + eax + 0x3C)); /* movss */
    edx = edx + eax + 0x30;
    eax = ecx + eax + 0x30;
    ecx = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edx + 4); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edx + 8); /* addss */
    ecx = MEM32(esp + 0x20);
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(ecx + 4); /* addss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 8); /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(eax); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm2.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    ecx = esp + 0x24;
    MEMF(esp + 0x90) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm7.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A11Cu); RECOMP_ABI_CALL(0x00018288u, sub_00018288); /* call 0x00018288 */

loc_0013A11C: ;
    fp_pop(); /* fstp st(0) */
    edi = esi + 0x10;
    edx = edi;
    eax = MEM32(edx);
    MEM32(esp + 0x60) = eax;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x64) = ecx;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x68) = eax;
    ecx = MEM32(edx + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    MEM32(esp + 0x70) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A175u); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_0013A175: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A1ACu); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_0013A1AC: ;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    xmm1 = XMM_MEM(ebx + 0x30); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esp + 0x68, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    eax = esi + 0x30;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB82C); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = esi;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(esp + 0x40);
    MEM32(edi) = edx;
    ecx = MEM32(esp + 0x44);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esp + 0x48);
    MEM32(edi + 8) = edx;
    ecx = MEM32(esp + 0x4C);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    ecx = MEM32(esp + 0x34);
    MEM32(esi + 4) = ecx;
    edx = MEM32(esp + 0x38);
    MEM32(esi + 8) = edx;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x50);
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x5C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
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
 * sub_0013A3F0
 * Original: 0x0013A3F0 - 0x0013A55F (367 bytes, 90 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013A3F0(void)
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

loc_0013A3F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xD4);
    edx = MEM32(ecx + 0xD8);
    xmm3 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edi = MEM32(ebp + 8);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm4 = XMM_SCALAR(MEMF(eax + edi)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + edi + 4)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + edi + 8)); /* movss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = MEM32(ecx + ebx * 4 + 0xC4);
    ecx = MEM32(ecx + ebx * 4 + 0xCC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm7 = XMM_SCALAR(MEMF(esi + edi + 0x3C)); /* movss */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1 = XMM_SCALAR(MEMF(ecx + edi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + edi + 0x34); /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + edi + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + edi + 0x38); /* addss */
    xmm0 = XMM_SCALAR(MEMF(ecx + edi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + edi + 0x30); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    ecx = ecx + edi + 0x30;
    esi = esi + edi + 0x30;
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(eax + 0x30); /* movaps */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(edx + 0x30); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm1); /* subps */
    XMM_STORE(esp + 0x20, xmm2); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    ecx = edx + 0x30;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(0x7AD318); /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x34); /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(ecx) = edx;
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x24) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;
    POP32(esp, edi);
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm7.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    POP32(esp, esi);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
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
 * sub_0013A5C0
 * Original: 0x0013A5C0 - 0x0013A6FD (317 bytes, 77 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013A5C0(void)
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

loc_0013A5C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xD4);
    edx = MEM32(ecx + 0xD8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0 = XMM_SCALAR(MEMF(eax + esi)); /* movss */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(0x8AED24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edx + 0x30;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A6DB; /* je: equal / zero */

loc_0013A64A: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013A6DB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0013A656: ;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A664u); RECOMP_ABI_CALL(0x00018288u, sub_00018288); /* call 0x00018288 */

loc_0013A664: ;
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013A679; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013A674: ;
    xmm1 = xmm0; /* movaps */
    goto loc_0013A67D;

loc_0013A679: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_0013A67D: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AD378); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013A6DB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AD378)) */

loc_0013A686: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */

loc_0013A6DB: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = eax;
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
 * sub_0013A750
 * Original: 0x0013A750 - 0x0013A7C9 (121 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013A750(void)
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

loc_0013A750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8AED04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0013A7C2; /* je: equal / zero */

loc_0013A763: ;
    xmm0 = XMM_SCALAR(MEMF(0x8AED1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7A9980); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013A77D; /* jp: parity */

loc_0013A778: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */

loc_0013A77D: ;
    eax = MEM32(ecx + 0xDC);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0013A7C2; /* jle: less or equal (signed <=) */

loc_0013A789: ;
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0013A7A0;

    /* nop */

loc_0013A7A0: ;
    xmm1 = XMM_MEM(eax + -16); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(eax + -16, xmm1); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(eax, xmm1); /* movaps */
    esi = MEM32(ecx + 0xDC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0013A7A0; /* jl: less (signed <) */

loc_0013A7C2: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013A7F0
 * Original: 0x0013A7F0 - 0x0013A85F (111 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013A7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A7F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x8F0688);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A859; /* je: equal / zero */

loc_0013A7FF: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013A80D; /* jne: not equal / not zero */

loc_0013A807: ;
    eax = MEM32(ecx + 0xBC);

loc_0013A80D: ;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x8AED20)); /* movss */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1 = XMM_MEM(eax + ecx); /* movaps */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
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

loc_0013A859: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013A880
 * Original: 0x0013A880 - 0x0013A8B7 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013A880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A89Eu); RECOMP_ABI_CALL(0x0059FDC7u, sub_0059FDC7); /* call 0x0059FDC7 */

loc_0013A89E: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A8B0u); RECOMP_ABI_CALL(0x0059F359u, sub_0059F359); /* call 0x0059F359 */

loc_0013A8B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0013A8D0
 * Original: 0x0013A8D0 - 0x0013A905 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A8D0(void)
{

loc_0013A8D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x34); /* addss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x38); /* addss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0013A920
 * Original: 0x0013A920 - 0x0013A9C7 (167 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013A920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    PUSH32(esp, 0x8F06A0);
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A964u); RECOMP_ABI_CALL(0x0059F7D7u, sub_0059F7D7); /* call 0x0059F7D7 */

loc_0013A964: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, 0x8F06A0);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A977u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_0013A977: ;
    edx = MEM32(esp + 0x30);
    esi = eax;
    eax = MEM32(ebp + 8);
    ecx = 0x10;
    edi = esp + 0x34;
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
    xmm0 = XMM_MEM(esp + 0x34); /* movaps */
    ecx = MEM32(esp + 0x2C);
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x44); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x54); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x64); /* movaps */
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(ebx, xmm0); /* movaps */
    MEM32(ebx) = eax;
    POP32(esp, edi);
    MEM32(ebx + 4) = ecx;
    POP32(esp, esi);
    MEM32(ebx + 8) = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0013A9F0
 * Original: 0x0013A9F0 - 0x0013A9F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A9F0(void)
{

loc_0013A9F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AA00
 * Original: 0x0013AA00 - 0x0013AA2F (47 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AA00(void)
{

loc_0013AA00: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0x3C) = 0;
    MEM8(ecx + 0x4C) = 1;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0013AA40
 * Original: 0x0013AA40 - 0x0013AA6F (47 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AA40(void)
{

loc_0013AA40: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = edx;
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013AA80
 * Original: 0x0013AA80 - 0x0013AAD7 (87 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0013AA80: ;
    edx = MEM32(esp + 4);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x7AB1DC)); /* movss */
    MEM32(ecx + 0x3C) = 1;
    eax = MEM32(edx);
    MEM32(ecx + 0x10) = eax;
    SET_LO8(eax, MEM8(ecx + 0x4E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm1 = xmm2; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_0013AAA8; /* jne: not equal / not zero */

loc_0013AAA5: ;
    xmm1 = xmm0; /* movaps */

loc_0013AAA8: ;
    _fca = xmm1.f[0]; _fcb = MEMF(edx + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013AAB7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(edx + 4)) */

loc_0013AAAE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AABC; /* je: equal / zero */

loc_0013AAB2: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0013AABC;

loc_0013AAB7: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */

loc_0013AABC: ;
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(edx + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(ecx + 0x18) = edx;
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013AAF0
 * Original: 0x0013AAF0 - 0x0013AB30 (64 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AAF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013AAF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013AB40
 * Original: 0x0013AB40 - 0x0013AB4A (10 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AB40(void)
{

loc_0013AB40: ;
    MEM32(ecx + 0x3C) = 2;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013AB50
 * Original: 0x0013AB50 - 0x0013B097 (1351 bytes, 331 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013AB50(void)
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

loc_0013AB50: ;
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
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x3C), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0013ABB9; /* jne: not equal / not zero */

loc_0013AB67: ;
    ecx = MEM32(ebx + 0x24);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AB75u); RECOMP_ABI_CALL(0x0059FF05u, sub_0059FF05); /* call 0x0059FF05 */

loc_0013AB75: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(ebx + 0x20);
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AB8Du); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_0013AB8D: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x78;
    ecx = 0x10;
    esi = esp + 0xB8;
    edi = esp + 0x78;
    PUSH32(esp, eax);
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ABAEu); RECOMP_ABI_CALL(0x0059FAC6u, sub_0059FAC6); /* call 0x0059FAC6 */

loc_0013ABAE: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0013AE68;

loc_0013ABB9: ;
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm0 = XMM_SCALAR(MEMF(0x8B54D0)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x8B54D4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x8B54D8)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x58) = xmm5.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm7 = xmm3; /* movaps */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm7.f[0] = xmm7.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm7.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] + xmm5.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm3.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x58); /* addss */
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x30) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x34) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x38) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    eax = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x3C) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0 = xmm3; /* movaps */
    fp_top() = cos(fp_top()); /* fcos */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8B54E8); /* mulss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x8B54EC); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x8B54F0); /* mulss */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    xmm7 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    xmm7 = xmm3; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x30) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm6.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x34) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    ecx = MEM32(esp + 0x20);
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x2C);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x3C) = eax;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;

loc_0013AE68: ;
    edx = ebx;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x28); /* subss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm5.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEM32(esp + 0x30) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm6.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    MEM32(esp + 0x34) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    eax = MEM32(esp + 0x20);
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x3C) = edx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = ecx;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x28);
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 0x5C) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 0x58) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013B02C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0013AFFA: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013B02C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_0013AFFF: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_top()); /* fmul st(0), st(0) */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0013B02F; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm4.f[0]) */

loc_0013B028: ;
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */

loc_0013B02C: ;
    xmm0 = xmm4; /* movaps */

loc_0013B02F: ;
    SET_LO8(eax, MEM8(ebx + 0x4D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0013B075; /* jne: not equal / not zero */

loc_0013B036: ;
    xmm1 = XMM_SCALAR(MEMF(0x8AED2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0013B075; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0013B043: ;
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(0x7AACB4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013B075; /* jnp: not parity */

loc_0013B055: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B06Bu); RECOMP_ABI_CALL(0x0059F60Au, sub_0059F60A); /* call 0x0059F60A */

loc_0013B06B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0013B075: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(ebx) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ebx + 4) = eax;
    POP32(esp, edi);
    MEM32(ebx + 8) = ecx;
    POP32(esp, esi);
    MEM32(ebx + 0xC) = edx;
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
 * sub_0013B1F0
 * Original: 0x0013B1F0 - 0x0013B350 (352 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0013B1F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7DE4F4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x28); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013B210; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x28)) */

loc_0013B1FE: ;
    xmm0 = XMM_SCALAR(MEMF(0x8AED40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x28); /* addss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */

loc_0013B210: ;
    xmm1 = XMM_SCALAR(MEMF(0x8AED68)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x28); /* comiss */
    SET_LO8(eax, MEM8(ecx + 0x4E));
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013B264; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 0x28)) */

loc_0013B224: ;
    xmm0 = XMM_SCALAR(MEMF(0x8AED60)); /* movss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = MEMF(ecx + 0x28); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013B2B1; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(ecx + 0x28)) */

loc_0013B239: ;
    xmm3 = XMM_SCALAR(MEMF(0x8AED5C)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 0x28); /* addss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm3.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x7A9980); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x28) = xmm2.f[0]; /* movss */
    goto loc_0013B2B6;

loc_0013B264: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8AED6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013B2B6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013B276: ;
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x8AED60)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013B2B1; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0013B286: ;
    xmm3 = XMM_SCALAR(MEMF(0x8AED5C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm3.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    goto loc_0013B2B6;

loc_0013B2B1: ;
    MEMF(ecx + 0x28) = xmm1.f[0]; /* movss */

loc_0013B2B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm2 = XMM_SCALAR(MEMF(0x8AED74)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0013B336; /* jne: not equal / not zero */

loc_0013B2C2: ;
    xmm2 = XMM_SCALAR(MEMF(0x8AED70)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8AED78)); /* movss */

loc_0013B2D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm3 = XMM_SCALAR(MEMF(0x8AED84)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0013B2E6; /* jne: not equal / not zero */

loc_0013B2DE: ;
    xmm3 = XMM_SCALAR(MEMF(0x8AED80)); /* movss */

loc_0013B2E6: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x8F0690); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(0x8AED64); /* divss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0013B307; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0013B300: ;
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm4; /* movaps */

loc_0013B307: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    _fca = xmm2.f[0]; _fcb = MEMF(ecx + 0x2C); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x8F0694)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013B340; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(ecx + 0x2C)) */

loc_0013B330: ;
    MEMF(ecx + 0x2C) = xmm2.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0013B336: ;
    xmm0 = XMM_SCALAR(MEMF(0x8AED7C)); /* movss */
    goto loc_0013B2D2;

loc_0013B340: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013B34F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0013B34A: ;
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */

loc_0013B34F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B3B0
 * Original: 0x0013B3B0 - 0x0013B3B5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B3B0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_0013B3C0
 * Original: 0x0013B3C0 - 0x0013B3C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B3C0(void)
{

loc_0013B3C0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B3D0
 * Original: 0x0013B3D0 - 0x0013B3DF (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B3D0(void)
{

loc_0013B3D0: ;
    ecx = MEM32(ecx + 0x1C0);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013B3F0
 * Original: 0x0013B3F0 - 0x0013B410 (32 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B3F0(void)
{

loc_0013B3F0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEM8(ecx + 0x50A) = 1;
    MEMF(ecx + 0x1C0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1BC) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013B420
 * Original: 0x0013B420 - 0x0013B424 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B420(void)
{

loc_0013B420: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B430
 * Original: 0x0013B430 - 0x0013B434 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B430(void)
{

loc_0013B430: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B440
 * Original: 0x0013B440 - 0x0013B447 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B440(void)
{

loc_0013B440: ;
    eax = MEM32(ecx + 0x84);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B450
 * Original: 0x0013B450 - 0x0013B457 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B450(void)
{

loc_0013B450: ;
    eax = MEM32(ecx + 0xF4);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B460
 * Original: 0x0013B460 - 0x0013B467 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B460(void)
{

loc_0013B460: ;
    eax = MEM32(ecx + 0x164);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B470
 * Original: 0x0013B470 - 0x0013B4F6 (134 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013B470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    edx = SX16(LO16(eax));
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    SET_LO8(edx, MEM8(edi + edx * 8));
    SET_LO8(edx, LO8(edx) & 7);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B4BE; /* jne: not equal / not zero */

loc_0013B494: ;
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B49Cu); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_0013B49C: ;
    edx = MEM32(ebp + 0xC);
    eax = ZX16(LO16(eax));
    ecx = esi + eax * 4 + 0x10;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0013B4BE: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013B4CBu); RECOMP_ABI_CALL(0x0057BB56u, sub_0057BB56); /* call 0x0057BB56 */

loc_0013B4CB: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    POP32(esp, edi);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
