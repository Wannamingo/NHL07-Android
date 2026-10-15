/**
 * nhl_07_recomp - Recompiled code chunk 104
 * Functions: 250 (0x00111DD0 - 0x00116790)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00111DD0
 * Original: 0x00111DD0 - 0x00111DF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111DD0(void)
{

loc_00111DD0: ;
    edx = MEM32(0x8E9B10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x110EF0);
    PUSH32(esp, 0x111850);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E9);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00111DF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111DF3u); } /* indirect call */
    }

loc_00111DF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00111E00
 * Original: 0x00111E00 - 0x00111E1A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00111E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111E00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00111E09u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00111E09: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111E17; /* je: equal / zero */

loc_00111E10: ;
    MEM32(eax) = 0x7D5FDC;
    esp += 4; return; /* ret */

loc_00111E17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111E20
 * Original: 0x00111E20 - 0x00111E3A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00111E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111E20: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00111E29u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00111E29: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111E37; /* je: equal / zero */

loc_00111E30: ;
    MEM32(eax) = 0x7D6000;
    esp += 4; return; /* ret */

loc_00111E37: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111E40
 * Original: 0x00111E40 - 0x00111FE5 (421 bytes, 122 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111E40(void)
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

loc_00111E40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x54);
    MEM8(eax + 8) = 1;
    eax = MEM32(esi + 0x200);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00111FC6; /* ja: above (unsigned >) */

loc_00111E5C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x111FE8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00111E63u) goto loc_00111E63;
    if (_jt == 0x00111E98u) goto loc_00111E98;
    if (_jt == 0x00111F20u) goto loc_00111F20;
    if (_jt == 0x00111F96u) goto loc_00111F96;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00111E63: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x112080);
    PUSH32(esp, 0x112070);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00111E89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111E86u); } /* indirect call */
    }

loc_00111E89: ;
    MEM32(esi + 0x200) = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00111E98: ;
    eax = MEM32(0x8E9B10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00111EA5u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_00111EA5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111FE0; /* je: equal / zero */

loc_00111EAD: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00111EBCu); RECOMP_ABI_CALL(0x000328D6u, sub_000328D6); /* call 0x000328D6 */

loc_00111EBC: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA820); /* comiss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00111EFE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA820)) */

loc_00111ED9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x112080);
    PUSH32(esp, 0x112070);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E7);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00111EEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111EECu); } /* indirect call */
    }

loc_00111EEF: ;
    MEM32(esi + 0x200) = 2;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00111EFE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x112070);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E6);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00111F11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111F0Eu); } /* indirect call */
    }

loc_00111F11: ;
    MEM32(esi + 0x200) = 3;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00111F20: ;
    ecx = MEM32(0x8E9B10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00111F2Eu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_00111F2E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111FE0; /* je: equal / zero */

loc_00111F36: ;
    PUSH32(esp, esi);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00111F45u); RECOMP_ABI_CALL(0x000328D6u, sub_000328D6); /* call 0x000328D6 */

loc_00111F45: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA820); /* comiss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x112080);
    PUSH32(esp, 0x112070);
    ecx = esi;
    PUSH32(esp, 1);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00111F7D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA820)) */

loc_00111F6E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E7);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00111F78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111F75u); } /* indirect call */
    }

loc_00111F78: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00111F7D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E6);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00111F87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111F84u); } /* indirect call */
    }

loc_00111F87: ;
    MEM32(esi + 0x200) = 3;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00111F96: ;
    eax = MEM32(0x8E9B10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00111FA3u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_00111FA3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111FE0; /* je: equal / zero */

loc_00111FA7: ;
    ecx = MEM32(esi + 0x54);
    MEM32(esi + 0x200) = 0;
    PUSH32(esp, esi);
    MEM8(ecx + 8) = 0;
    PUSH32(esp, 0x00111FBEu); RECOMP_ABI_CALL(0x000183BEu, sub_000183BE); /* call 0x000183BE */

loc_00111FBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00111FC6: ;
    edx = MEM32(esi + 0x54);
    MEM32(esi + 0x200) = 0;
    PUSH32(esp, esi);
    MEM8(edx + 8) = 0;
    PUSH32(esp, 0x00111FDDu); RECOMP_ABI_CALL(0x000183BEu, sub_000183BE); /* call 0x000183BE */

loc_00111FDD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00111FE0: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00112070
 * Original: 0x00112070 - 0x00112071 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112070(void)
{

loc_00112070: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00112080
 * Original: 0x00112080 - 0x001122DC (604 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112080(void)
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

loc_00112080: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    MEM32(esp + 0x14) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00112098u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112095u); } /* indirect call */
    }

loc_00112098: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x001120A4u); RECOMP_ABI_CALL(0x00029EF2u, sub_00029EF2); /* call 0x00029EF2 */

loc_001120A4: ;
    fp_push(MEMF(0x7D5D44)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = MEM32(esi + 0x20);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_001120D1; /* jb: below (unsigned <) */

loc_001120B7: ;
    PUSH32(esp, 0x001120BCu); RECOMP_ABI_CALL(0x0002A389u, sub_0002A389); /* call 0x0002A389 */

loc_001120BC: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x001120C4u); RECOMP_ABI_CALL(0x00030275u, sub_00030275); /* call 0x00030275 */

loc_001120C4: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x001120CCu); RECOMP_ABI_CALL(0x000253A7u, sub_000253A7); /* call 0x000253A7 */

loc_001120CC: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001120D1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001120F3; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_001120E4: ;
    PUSH32(esp, 0x001120E9u); RECOMP_ABI_CALL(0x000262DEu, sub_000262DE); /* call 0x000262DE */

loc_001120E9: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    goto loc_00112100;

loc_001120F3: ;
    PUSH32(esp, 0x001120F8u); RECOMP_ABI_CALL(0x000116D1u, sub_000116D1); /* call 0x000116D1 */

loc_001120F8: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00112100: ;
    xmm4 = XMM_SCALAR(MEMF(0x7D5D44)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 8); /* subss */
    _fca = xmm4.f[0]; _fcb = MEMF(0x7A9980); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00112226; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(0x7A9980)) */

loc_00112132: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0x3E99999A);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x64)) >> 32) & 1);
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011214Du); RECOMP_ABI_CALL(0x00013260u, sub_00013260); /* call 0x00013260 */

loc_0011214D: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011215Du); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_0011215D: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0011217Au); RECOMP_ABI_CALL(0x000367E7u, sub_000367E7); /* call 0x000367E7 */

loc_0011217A: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8F95B0)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_001121A8; /* jb: below (unsigned <) */

loc_00112191: ;
    xmm0 = XMM_SCALAR(MEMF(0x7D5974)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca > _fcb)) goto loc_001121B0; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_001121A8: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_001121B0: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001121C5u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_001121C5: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD410); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001121DEu); RECOMP_ABI_CALL(0x000367E7u, sub_000367E7); /* call 0x000367E7 */

loc_001121DE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001121F0u); RECOMP_ABI_CALL(0x000367E7u, sub_000367E7); /* call 0x000367E7 */

loc_001121F0: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x60)) >> 32) & 1);
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    MEMF(edi) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00112219u); RECOMP_ABI_CALL(0x000367E7u, sub_000367E7); /* call 0x000367E7 */

loc_00112219: ;
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0011222E;

loc_00112226: ;
    edx = MEM32(esi + 0x20);
    MEMF(edx + 0x60) = xmm0.f[0]; /* movss */

loc_0011222E: ;
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB7D0); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    eax = ecx + 0x30;
    edi = eax;
    eax = MEM32(edi);
    edx = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = edx;
    POP32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00112272; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0011226D: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00112279;

loc_00112272: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_00112279: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00112289; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00112284: ;
    xmm2 = xmm1; /* movaps */
    goto loc_0011228D;

loc_00112289: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_0011228D: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001122A6; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00112292: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_001122BB;

loc_001122A6: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm4.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_001122BB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001122C2u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_001122C2: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x001122CFu); RECOMP_ABI_CALL(0x0002E862u, sub_0002E862); /* call 0x0002E862 */

loc_001122CF: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x001122D7u); RECOMP_ABI_CALL(0x000253A7u, sub_000253A7); /* call 0x000253A7 */

loc_001122D7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00112380
 * Original: 0x00112380 - 0x001123B6 (54 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112380: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0011238Eu); RECOMP_ABI_CALL(0x000162DFu, sub_000162DF); /* call 0x000162DF */

loc_0011238E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001123A7; /* je: equal / zero */

loc_00112392: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0011239Au); RECOMP_ABI_CALL(0x0002D66Au, sub_0002D66A); /* call 0x0002D66A */

loc_0011239A: ;
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001123A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001123A0u); } /* indirect call */
    }

loc_001123A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001123A7: ;
    eax = esi;
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001123B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001123AFu); } /* indirect call */
    }

loc_001123B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001123D0
 * Original: 0x001123D0 - 0x001123FA (42 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001123D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001123D0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00112410
 * Original: 0x00112410 - 0x00112421 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00112410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112410: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011241E; /* je: equal / zero */

loc_00112417: ;
    eax = MEM32(ecx + 0x14);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

loc_0011241E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00112430
 * Original: 0x00112430 - 0x00112459 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112430: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112451; /* je: equal / zero */

loc_0011244A: ;
    MEM32(edx) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_00112451: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00112470
 * Original: 0x00112470 - 0x001124C4 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112470: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001124C2; /* je: equal / zero */

loc_0011247A: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112487; /* je: equal / zero */

loc_00112481: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    goto loc_0011248C;

loc_00112487: ;
    ecx = MEM32(eax);
    MEM32(esi + 4) = ecx;

loc_0011248C: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011249A; /* je: equal / zero */

loc_00112492: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_001124A0;

loc_0011249A: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 8) = ecx;

loc_001124A0: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    ecx = MEM32(esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(esi) = ecx;
    PUSH32(esp, 0x001124B8u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001124B8: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011247A; /* jne: not equal / not zero */

loc_001124C2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001124E0
 * Original: 0x001124E0 - 0x001124F9 (25 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001124E0(void)
{

loc_001124E0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00112500
 * Original: 0x00112500 - 0x0011254E (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112500: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011254D; /* je: equal / zero */

loc_00112507: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00112515; /* je: equal / zero */

loc_0011250F: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_0011251A;

loc_00112515: ;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;

loc_0011251A: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112537; /* je: equal / zero */

loc_00112520: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00112537: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_0011254D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00112570
 * Original: 0x00112570 - 0x001125AF (63 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112570: ;
    eax = MEM32(0x8E9B10);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011257Fu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0011257F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001125AE; /* je: equal / zero */

loc_00112583: ;
    eax = MEM32(0x8E9B10);
    ecx = MEM32(0x8E9248);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x110EF0);
    PUSH32(esp, 0x111850);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E9);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001125AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001125ABu); } /* indirect call */
    }

loc_001125AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001125C0
 * Original: 0x001125C0 - 0x00112609 (73 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001125C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001125C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001125CF; /* je: equal / zero */

loc_001125CB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x2C) = eax;

loc_001125CF: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x001125D7u); RECOMP_ABI_CALL(0x00037183u, sub_00037183); /* call 0x00037183 */

loc_001125D7: ;
    edi = MEM32(esi + 0x1E4);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001125E5u); RECOMP_ABI_CALL(0x000162DFu, sub_000162DF); /* call 0x000162DF */

loc_001125E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001125FC; /* je: equal / zero */

loc_001125E9: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x001125F1u); RECOMP_ABI_CALL(0x0002D66Au, sub_0002D66A); /* call 0x0002D66A */

loc_001125F1: ;
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001125F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001125F7u); } /* indirect call */
    }

loc_001125F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001125FC: ;
    eax = edi;
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00112606u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112604u); } /* indirect call */
    }

loc_00112606: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00112620
 * Original: 0x00112620 - 0x00112628 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112620: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00025F6E(); return; /* tail jmp 0x00025F6E */

}

/**
 * sub_00112630
 * Original: 0x00112630 - 0x0011269C (108 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112630: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_00112642; /* jne: not equal / not zero */

loc_0011263F: ;
    MEM32(esi + 0x18) = edi;

loc_00112642: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0011264Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0011264E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112667; /* je: equal / zero */

loc_00112655: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = edi;
    goto loc_00112669;

loc_00112667: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00112669: ;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011268D; /* je: equal / zero */

loc_0011267F: ;
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011268D: ;
    MEM32(esi + 0x10) = eax;
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
 * sub_001126C0
 * Original: 0x001126C0 - 0x0011271C (92 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001126C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001126C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_001126ED; /* je: equal / zero */

loc_001126CE: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001126E0u); RECOMP_ABI_CALL(0x00029231u, sub_00029231); /* call 0x00029231 */

loc_001126E0: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001126ED; /* je: equal / zero */

loc_001126E8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_00112716; /* jne: not equal / not zero */

loc_001126ED: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_00112714; /* je: equal / zero */

loc_001126F7: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00112707u); RECOMP_ABI_CALL(0x00029231u, sub_00029231); /* call 0x00029231 */

loc_00112707: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112714; /* je: equal / zero */

loc_0011270F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_00112716; /* jne: not equal / not zero */

loc_00112714: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00112716: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00112740
 * Original: 0x00112740 - 0x0011279C (92 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112740: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0011276D; /* je: equal / zero */

loc_0011274E: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00112760u); RECOMP_ABI_CALL(0x000225D0u, sub_000225D0); /* call 0x000225D0 */

loc_00112760: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011276D; /* je: equal / zero */

loc_00112768: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_00112796; /* jne: not equal / not zero */

loc_0011276D: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_00112794; /* je: equal / zero */

loc_00112777: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00112787u); RECOMP_ABI_CALL(0x000225D0u, sub_000225D0); /* call 0x000225D0 */

loc_00112787: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112794; /* je: equal / zero */

loc_0011278F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_00112796; /* jne: not equal / not zero */

loc_00112794: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00112796: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001127C0
 * Original: 0x001127C0 - 0x001127D7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001127C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001127C0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001127CCu); RECOMP_ABI_CALL(0x0002C0ADu, sub_0002C0AD); /* call 0x0002C0AD */

loc_001127CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001127D2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001127D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001127E0
 * Original: 0x001127E0 - 0x00112842 (98 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001127E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001127E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xD2);
    PUSH32(esp, 0x7D5E18);
    PUSH32(esp, 3);
    edi = ecx;
    esi = 0x3EB;
    PUSH32(esp, 0x001127FAu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_001127FA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00112816; /* je: equal / zero */

loc_00112802: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011280F; /* je: equal / zero */

loc_00112805: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011281B; /* jne: not equal / not zero */

loc_00112808: ;
    esi = 0x3ED;
    goto loc_0011281B;

loc_0011280F: ;
    esi = 0x3EC;
    goto loc_0011281B;

loc_00112816: ;
    esi = 0x3EB;

loc_0011281B: ;
    ecx = MEM32(0x8E9B10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x110EF0);
    PUSH32(esp, 0x112570);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0011283Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011283Cu); } /* indirect call */
    }

loc_0011283F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00112860
 * Original: 0x00112860 - 0x0011288B (43 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112860: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi + 8;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00112871u); RECOMP_ABI_CALL(0x00012897u, sub_00012897); /* call 0x00012897 */

loc_00112871: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112884; /* je: equal / zero */

loc_00112875: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0011287Du); RECOMP_ABI_CALL(0x00020A7Du, sub_00020A7D); /* call 0x00020A7D */

loc_0011287D: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00112884: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001128A0
 * Original: 0x001128A0 - 0x001128CB (43 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001128A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001128A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi + 8;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001128B1u); RECOMP_ABI_CALL(0x0002339Au, sub_0002339A); /* call 0x0002339A */

loc_001128B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001128C4; /* je: equal / zero */

loc_001128B5: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001128BDu); RECOMP_ABI_CALL(0x000307E3u, sub_000307E3); /* call 0x000307E3 */

loc_001128BD: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001128C4: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001128E0
 * Original: 0x001128E0 - 0x0011290C (44 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001128E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001128E0: ;
    eax = MEM32(0x8E9B10);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001128EFu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_001128EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011290B; /* je: equal / zero */

loc_001128F3: ;
    ecx = MEM32(0x8EADA0);
    MEM32(ecx + 0x34) = 3;
    ecx = MEM32(0x8E9248);
    g_seh_ebp = ebp; sub_00032CB4(); return; /* tail jmp 0x00032CB4 */

loc_0011290B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00112920
 * Original: 0x00112920 - 0x0011297C (92 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112920: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0011294D; /* je: equal / zero */

loc_0011292E: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00112940u); RECOMP_ABI_CALL(0x0001CD51u, sub_0001CD51); /* call 0x0001CD51 */

loc_00112940: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011294D; /* je: equal / zero */

loc_00112948: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_00112976; /* jne: not equal / not zero */

loc_0011294D: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_00112974; /* je: equal / zero */

loc_00112957: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00112967u); RECOMP_ABI_CALL(0x0001CD51u, sub_0001CD51); /* call 0x0001CD51 */

loc_00112967: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112974; /* je: equal / zero */

loc_0011296F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_00112976; /* jne: not equal / not zero */

loc_00112974: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00112976: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001129A0
 * Original: 0x001129A0 - 0x001129FD (93 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001129A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001129A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xAC);
    PUSH32(esp, 0x7D5E18);
    PUSH32(esp, 3);
    edi = ecx;
    esi = 0x3F4;
    PUSH32(esp, 0x001129BAu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_001129BA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001129D1; /* je: equal / zero */

loc_001129C2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001129CA; /* je: equal / zero */

loc_001129C5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001129D6; /* jne: not equal / not zero */

loc_001129C8: ;
    goto loc_001129D6;

loc_001129CA: ;
    esi = 0x3F6;
    goto loc_001129D6;

loc_001129D1: ;
    esi = 0x3F5;

loc_001129D6: ;
    ecx = MEM32(0x8E9B10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x110EF0);
    PUSH32(esp, 0x1128E0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001129FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001129F7u); } /* indirect call */
    }

loc_001129FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00112A20
 * Original: 0x00112A20 - 0x00112E94 (1140 bytes, 371 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112A20: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x32);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00112A38u); RECOMP_ABI_CALL(0x00012900u, sub_00012900); /* call 0x00012900 */

loc_00112A38: ;
    edx = esp + 0x24;
    PUSH32(esp, 0x7CFB84);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    MEM8(esp + 0x27) = LO8(ebx);
    PUSH32(esp, 0x00112A4Du); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00112A4D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esp + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_00112ABF; /* jne: not equal / not zero */

loc_00112A58: ;
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7CFB7C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00112A6Du); RECOMP_ABI_CALL(0x0001DD9Bu, sub_0001DD9B); /* call 0x0001DD9B */

loc_00112A6D: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112AB8; /* je: equal / zero */

loc_00112A7C: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi);
    edx = esp + 0x18;
    MEM32(esp + 0x14) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00112A95; /* je: equal / zero */

loc_00112A8D: ;
    eax = MEM32(esi + 0x14);
    edi = MEM32(eax + 8);
    goto loc_00112A97;

loc_00112A95: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00112A97: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112AA1u); RECOMP_ABI_CALL(0x0001DB70u, sub_0001DB70); /* call 0x0001DB70 */

loc_00112AA1: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00112AA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112AA1u); } /* indirect call */
    }

loc_00112AA3: ;
    ebp = eax;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112AB5; /* je: equal / zero */

loc_00112AAC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112AB2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00112AB2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00112AB5: ;
    MEM32(edi + 4) = ebp;

loc_00112AB8: ;
    SET_LO8(ebx, 1);
    goto loc_00112DD1;

loc_00112ABF: ;
    PUSH32(esp, 0x7CFB78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112ACAu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00112ACA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_00112B3D; /* jne: not equal / not zero */

loc_00112AD5: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB7C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112AEAu); RECOMP_ABI_CALL(0x0001DD9Bu, sub_0001DD9B); /* call 0x0001DD9B */

loc_00112AEA: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112B36; /* je: equal / zero */

loc_00112AF9: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x18;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112B13; /* je: equal / zero */

loc_00112B0B: ;
    edx = MEM32(esi + 0x14);
    edi = MEM32(edx + 8);
    goto loc_00112B15;

loc_00112B13: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00112B15: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112B1Fu); RECOMP_ABI_CALL(0x00016AA0u, sub_00016AA0); /* call 0x00016AA0 */

loc_00112B1F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00112B21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112B1Fu); } /* indirect call */
    }

loc_00112B21: ;
    ebp = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112B33; /* je: equal / zero */

loc_00112B2A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112B30u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00112B30: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00112B33: ;
    MEM32(edi + 8) = ebp;

loc_00112B36: ;
    SET_LO8(ebx, 1);
    goto loc_00112DD1;

loc_00112B3D: ;
    PUSH32(esp, 0x7CFB74);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00112B48u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00112B48: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112BAE; /* jne: not equal / not zero */

loc_00112B4F: ;
    eax = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7CFB7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112B68u); RECOMP_ABI_CALL(0x0001DD9Bu, sub_0001DD9B); /* call 0x0001DD9B */

loc_00112B68: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112BA7; /* je: equal / zero */

loc_00112B77: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 0x18;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00112B91; /* je: equal / zero */

loc_00112B89: ;
    edx = MEM32(esi + 0x14);
    edi = MEM32(edx + 8);
    goto loc_00112B93;

loc_00112B91: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00112B93: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112B9Du); RECOMP_ABI_CALL(0x000164A6u, sub_000164A6); /* call 0x000164A6 */

loc_00112B9D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00112B9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112B9Du); } /* indirect call */
    }

loc_00112B9F: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00112BA7u); RECOMP_ABI_CALL(0x0001C2C5u, sub_0001C2C5); /* call 0x0001C2C5 */

loc_00112BA7: ;
    SET_LO8(ebx, 1);
    goto loc_00112DD1;

loc_00112BAE: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x7CFB6C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00112BBDu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00112BBD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112C5A; /* jne: not equal / not zero */

loc_00112BC8: ;
    eax = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7CFB64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112BE1u); RECOMP_ABI_CALL(0x0001DD9Bu, sub_0001DD9B); /* call 0x0001DD9B */

loc_00112BE1: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112C50; /* je: equal / zero */

loc_00112BF0: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB5C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112C09u); RECOMP_ABI_CALL(0x0001DD9Bu, sub_0001DD9B); /* call 0x0001DD9B */

loc_00112C09: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112C50; /* je: equal / zero */

loc_00112C11: ;
    eax = esp + 0x18;
    PUSH32(esp, 0x7CFB54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112C20u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00112C20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112C3D; /* je: equal / zero */

loc_00112C27: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x7CFB50);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00112C36u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00112C36: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112C50; /* jne: not equal / not zero */

loc_00112C3D: ;
    ecx = esi;
    PUSH32(esp, 0x00112C44u); RECOMP_ABI_CALL(0x00011DD9u, sub_00011DD9); /* call 0x00011DD9 */

loc_00112C44: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    eax = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00112C50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112C4Eu); } /* indirect call */
    }

loc_00112C50: ;
    MEM8(esp + 0x13) = 1;
    goto loc_00112DD1;

loc_00112C5A: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x7CFB4C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00112C69u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00112C69: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112E85; /* jne: not equal / not zero */

loc_00112C74: ;
    esi = MEM32(esp + 0x84);
    eax = MEM32(esi + 0x1C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112CC2; /* je: equal / zero */

loc_00112C84: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00112C8Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00112C8C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112CAA; /* je: equal / zero */

loc_00112C93: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    MEM32(eax) = 0x7D5F70;
    edi = eax;

loc_00112CAA: ;
    ecx = esi;
    PUSH32(esp, 0x00112CB1u); RECOMP_ABI_CALL(0x00011DD9u, sub_00011DD9); /* call 0x00011DD9 */

loc_00112CB1: ;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x10) = edx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(eax + 0x14) = edi;
    PUSH32(esp, 0x00112CC2u); RECOMP_ABI_CALL(0x000183CDu, sub_000183CD); /* call 0x000183CD */

loc_00112CC2: ;
    edi = MEM32(esi + 0x1C);
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7CFB84);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    MEM32(esi + 0x1C) = edi;
    PUSH32(esp, 0x00112CE2u); RECOMP_ABI_CALL(0x0001DD9Bu, sub_0001DD9B); /* call 0x0001DD9B */

loc_00112CE2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112D0F; /* je: equal / zero */

loc_00112CEA: ;
    ecx = MEM32(esi);
    eax = esp + 0x14;
    edx = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x00112CFEu); RECOMP_ABI_CALL(0x0001DB70u, sub_0001DB70); /* call 0x0001DB70 */

loc_00112CFE: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00112D00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112CFEu); } /* indirect call */
    }

loc_00112D00: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00112D08u); RECOMP_ABI_CALL(0x00011DD9u, sub_00011DD9); /* call 0x00011DD9 */

loc_00112D08: ;
    ecx = eax;
    PUSH32(esp, 0x00112D0Fu); RECOMP_ABI_CALL(0x0001637Au, sub_0001637A); /* call 0x0001637A */

loc_00112D0F: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112D28u); RECOMP_ABI_CALL(0x0001DD9Bu, sub_0001DD9B); /* call 0x0001DD9B */

loc_00112D28: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112D43; /* je: equal / zero */

loc_00112D30: ;
    ecx = esi;
    PUSH32(esp, 0x00112D37u); RECOMP_ABI_CALL(0x00011DD9u, sub_00011DD9); /* call 0x00011DD9 */

loc_00112D37: ;
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00112D43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112D41u); } /* indirect call */
    }

loc_00112D43: ;
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7CFB78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00112D5Cu); RECOMP_ABI_CALL(0x0001DD9Bu, sub_0001DD9B); /* call 0x0001DD9B */

loc_00112D5C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112D8A; /* je: equal / zero */

loc_00112D64: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x14;
    edx = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x00112D79u); RECOMP_ABI_CALL(0x00016AA0u, sub_00016AA0); /* call 0x00016AA0 */

loc_00112D79: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00112D7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112D79u); } /* indirect call */
    }

loc_00112D7B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00112D83u); RECOMP_ABI_CALL(0x00011DD9u, sub_00011DD9); /* call 0x00011DD9 */

loc_00112D83: ;
    ecx = eax;
    PUSH32(esp, 0x00112D8Au); RECOMP_ABI_CALL(0x00017C61u, sub_00017C61); /* call 0x00017C61 */

loc_00112D8A: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112DA3u); RECOMP_ABI_CALL(0x0001DD9Bu, sub_0001DD9B); /* call 0x0001DD9B */

loc_00112DA3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112DD1; /* je: equal / zero */

loc_00112DAB: ;
    ecx = MEM32(esi + 8);
    edx = esp + 0x14;
    eax = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00112DC0u); RECOMP_ABI_CALL(0x000164A6u, sub_000164A6); /* call 0x000164A6 */

loc_00112DC0: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00112DC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112DC0u); } /* indirect call */
    }

loc_00112DC2: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00112DCAu); RECOMP_ABI_CALL(0x00011DD9u, sub_00011DD9); /* call 0x00011DD9 */

loc_00112DCA: ;
    ecx = eax;
    PUSH32(esp, 0x00112DD1u); RECOMP_ABI_CALL(0x0001C2C5u, sub_0001C2C5); /* call 0x0001C2C5 */

loc_00112DD1: ;
    eax = MEM32(esp + 0x88);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112DDEu); RECOMP_ABI_CALL(0x000152EAu, sub_000152EA); /* call 0x000152EA */

loc_00112DDE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112E8C; /* jne: not equal / not zero */

loc_00112DE9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112E09; /* jne: not equal / not zero */

loc_00112DED: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112E09; /* jne: not equal / not zero */

loc_00112DF5: ;
    edi = MEM32(esi + 0x14);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00112E00u); RECOMP_ABI_CALL(0x0002C0ADu, sub_0002C0AD); /* call 0x0002C0AD */

loc_00112E00: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00112E06u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00112E06: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00112E09: ;
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00112E16u); RECOMP_ABI_CALL(0x0002B40Au, sub_0002B40A); /* call 0x0002B40A */

loc_00112E16: ;
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    MEM32(esp + 0x90) = eax;
    PUSH32(esp, 0x00112E2Au); RECOMP_ABI_CALL(0x000130DFu, sub_000130DF); /* call 0x000130DF */

loc_00112E2A: ;
    SET_LO8(edx, MEM8(esp + 0x1B));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112E3C; /* je: equal / zero */

loc_00112E37: ;
    ecx = 1;

loc_00112E3C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00112E6A; /* jge: greater or equal (signed >=) */

loc_00112E40: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = esi + 0xC;
    ebx = eax;

loc_00112E47: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112E67; /* je: equal / zero */

loc_00112E4D: ;
    edi = MEM32(esi + 0x14);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112E67; /* je: equal / zero */

loc_00112E57: ;
    ecx = ebp;
    PUSH32(esp, 0x00112E5Eu); RECOMP_ABI_CALL(0x0002C0ADu, sub_0002C0AD); /* call 0x0002C0AD */

loc_00112E5E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00112E64u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00112E64: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00112E67: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00112E47; /* jne: not equal / not zero */

loc_00112E6A: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112E7B; /* je: equal / zero */

loc_00112E71: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112E85; /* jne: not equal / not zero */

loc_00112E7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00112E85: ;
    eax = MEM32(esp + 0x88);

loc_00112E8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00112FC0
 * Original: 0x00112FC0 - 0x00113055 (149 bytes, 47 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112FC0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi) = 0x7D6028;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0x00113014u); RECOMP_ABI_CALL(0x000183CDu, sub_000183CD); /* call 0x000183CD */

loc_00113014: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0x7CFB4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113023u); RECOMP_ABI_CALL(0x000288EFu, sub_000288EF); /* call 0x000288EF */

loc_00113023: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113042; /* je: equal / zero */

loc_0011302A: ;
    /* nop */

loc_00113030: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011303Bu); RECOMP_ABI_CALL(0x00033AD3u, sub_00033AD3); /* call 0x00033AD3 */

loc_0011303B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113030; /* jne: not equal / not zero */

loc_00113042: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0011304Bu); RECOMP_ABI_CALL(0x00025F6Eu, sub_00025F6E); /* call 0x00025F6E */

loc_0011304B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00113080
 * Original: 0x00113080 - 0x0011309E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113080: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00113088u); RECOMP_ABI_CALL(0x0002F0EBu, sub_0002F0EB); /* call 0x0002F0EB */

loc_00113088: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00113098; /* je: equal / zero */

loc_0011308F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113095u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00113095: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00113098: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001130B0
 * Original: 0x001130B0 - 0x00113177 (199 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001130B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001130B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001130BFu); RECOMP_ABI_CALL(0x00030C75u, sub_00030C75); /* call 0x00030C75 */

loc_001130BF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x7D602C);
    MEM32(esi) = 0x7D5F78;
    MEM32(esi + 0x28) = 5;
    MEM32(esi + 0x1FC) = 0;
    MEM32(esi + 0x1E4) = 0;
    MEM32(esi + 0x200) = 0;
    PUSH32(esp, 0x001130FBu); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_001130FB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    ebx = eax;
    PUSH32(esp, 0x00113106u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00113106: ;
    edi = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113157; /* je: equal / zero */

loc_0011310F: ;
    eax = MEM32(0x8E8D74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011311D; /* jne: not equal / not zero */

loc_00113118: ;
    PUSH32(esp, 0x0011311Du); RECOMP_ABI_CALL(0x0001F9B6u, sub_0001F9B6); /* call 0x0001F9B6 */

loc_0011311D: ;
    eax = MEM32(0x8E8D94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011312B; /* jne: not equal / not zero */

loc_00113126: ;
    PUSH32(esp, 0x0011312Bu); RECOMP_ABI_CALL(0x0001F538u, sub_0001F538); /* call 0x0001F538 */

loc_0011312B: ;
    eax = MEM32(0x8E8DB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113139; /* jne: not equal / not zero */

loc_00113134: ;
    PUSH32(esp, 0x00113139u); RECOMP_ABI_CALL(0x00033961u, sub_00033961); /* call 0x00033961 */

loc_00113139: ;
    ecx = MEM32(0x8E8D74);
    edx = MEM32(0x8E8D94);
    eax = MEM32(0x8E8DB4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00113155u); RECOMP_ABI_CALL(0x00025CDAu, sub_00025CDA); /* call 0x00025CDA */

loc_00113155: ;
    goto loc_00113159;

loc_00113157: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00113159: ;
    PUSH32(esp, ebx);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x00113165u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00113165: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0011316Fu); RECOMP_ABI_CALL(0x00021F81u, sub_00021F81); /* call 0x00021F81 */

loc_0011316F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001131B0
 * Original: 0x001131B0 - 0x001131B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001131B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001131B0: ;
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001131C0
 * Original: 0x001131C0 - 0x001131C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001131C0(void)
{

loc_001131C0: ;
    eax = ecx + 0x1F8;
    esp += 4; return; /* ret */

}

/**
 * sub_001131D0
 * Original: 0x001131D0 - 0x001131D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001131D0(void)
{

loc_001131D0: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_001131E0
 * Original: 0x001131E0 - 0x001131E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001131E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001131E0: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001131F0
 * Original: 0x001131F0 - 0x001131F9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001131F0(void)
{

loc_001131F0: ;
    eax = MEM32(0x8F010C);
    eax = MEM32(eax + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_00113200
 * Original: 0x00113200 - 0x00113207 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113200(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00113200: ;
    fp_push(MEMF(ecx + 0x194)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00113210
 * Original: 0x00113210 - 0x00113217 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113210(void)
{

loc_00113210: ;
    eax = MEM32(ecx + 0x3B8);
    esp += 4; return; /* ret */

}

/**
 * sub_00113220
 * Original: 0x00113220 - 0x00113230 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113220(void)
{

loc_00113220: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00113240
 * Original: 0x00113240 - 0x00113250 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113240(void)
{

loc_00113240: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113260
 * Original: 0x00113260 - 0x00113267 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113260(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00113260: ;
    fp_push(MEMF(0x7AD384)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00113270
 * Original: 0x00113270 - 0x00113277 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113270(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00113270: ;
    fp_push(MEMF(0x7AD384)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00113280
 * Original: 0x00113280 - 0x00113286 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113280(void)
{

loc_00113280: ;
    eax = 0x5E;
    esp += 4; return; /* ret */

}

/**
 * sub_00113290
 * Original: 0x00113290 - 0x00113296 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113290(void)
{

loc_00113290: ;
    eax = 0x5C;
    esp += 4; return; /* ret */

}

/**
 * sub_001132A0
 * Original: 0x001132A0 - 0x001132C9 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001132A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001132A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x001132AFu); RECOMP_ABI_CALL(0x000229A4u, sub_000229A4); /* call 0x000229A4 */

loc_001132AF: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x001132BCu); RECOMP_ABI_CALL(0x000229A4u, sub_000229A4); /* call 0x000229A4 */

loc_001132BC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001132E0
 * Original: 0x001132E0 - 0x00113319 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001132E0(void)
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

loc_001132E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 7);
    esi = ecx;
    PUSH32(esp, 0x001132EBu); RECOMP_ABI_CALL(0x000229A4u, sub_000229A4); /* call 0x000229A4 */

loc_001132EB: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x001132F8u); RECOMP_ABI_CALL(0x000229A4u, sub_000229A4); /* call 0x000229A4 */

loc_001132F8: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    fp_push(MEMF(0x7AD384)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_00113315; /* jb: below (unsigned <) */

loc_00113311: ;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00113315: ;
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
 * sub_00113330
 * Original: 0x00113330 - 0x00113359 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113330(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00113330: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x0011333Fu); RECOMP_ABI_CALL(0x000229A4u, sub_000229A4); /* call 0x000229A4 */

loc_0011333F: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0011334Cu); RECOMP_ABI_CALL(0x000229A4u, sub_000229A4); /* call 0x000229A4 */

loc_0011334C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00113370
 * Original: 0x00113370 - 0x001133A9 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113370(void)
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

loc_00113370: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    esi = ecx;
    PUSH32(esp, 0x0011337Bu); RECOMP_ABI_CALL(0x000229A4u, sub_000229A4); /* call 0x000229A4 */

loc_0011337B: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00113388u); RECOMP_ABI_CALL(0x000229A4u, sub_000229A4); /* call 0x000229A4 */

loc_00113388: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    fp_push(MEMF(0x7AD384)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_001133A5; /* jb: below (unsigned <) */

loc_001133A1: ;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001133A5: ;
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
 * sub_001133C0
 * Original: 0x001133C0 - 0x00113465 (165 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001133C0(void)
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

loc_001133C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001133D0u); RECOMP_ABI_CALL(0x000229A4u, sub_000229A4); /* call 0x000229A4 */

loc_001133D0: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x001133DDu); RECOMP_ABI_CALL(0x000229A4u, sub_000229A4); /* call 0x000229A4 */

loc_001133DD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    PUSH32(esp, 7);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001133F4u); RECOMP_ABI_CALL(0x000229A4u, sub_000229A4); /* call 0x000229A4 */

loc_001133F4: ;
    PUSH32(esp, 6);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    PUSH32(esp, 0x00113401u); RECOMP_ABI_CALL(0x000229A4u, sub_000229A4); /* call 0x000229A4 */

loc_00113401: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AD384)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0011344F; /* jb: below (unsigned <) */

loc_00113425: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AD384)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011343D; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00113432: ;
    POP32(esp, edi);
    eax = 2;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011343D: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00113432; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_00113444: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011344F: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AD384); /* comiss */
    eax = 1;
    if ((_fca >= _fcb)) goto loc_0011345F; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7AD384)) */

loc_0011345D: ;
    eax = edi;

loc_0011345F: ;
    POP32(esp, edi);
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
 * sub_00113490
 * Original: 0x00113490 - 0x001134D9 (73 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113490(void)
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

loc_00113490: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001134A3; /* je: equal / zero */

loc_0011349F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001134B8; /* jne: not equal / not zero */

loc_001134A3: ;
    ecx = MEM32(0x8F0650);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001134AFu); RECOMP_ABI_CALL(0x0002DF9Du, sub_0002DF9D); /* call 0x0002DF9D */

loc_001134AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001134B8; /* jne: not equal / not zero */

loc_001134B3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001134B8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x001134BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001134BCu); } /* indirect call */
    }

loc_001134BF: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_001134D2; /* jbe: below or equal (unsigned <=) */

loc_001134C9: ;
    ecx = esi;
    PUSH32(esp, 0x001134D0u); RECOMP_ABI_CALL(0x0001867Au, sub_0001867A); /* call 0x0001867A */

loc_001134D0: ;
    SET_LO8(ebx, LO8(eax));

loc_001134D2: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001134F0
 * Original: 0x001134F0 - 0x001135DB (235 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001134F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001134F0: ;
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
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00113503u); RECOMP_ABI_CALL(0x0001D279u, sub_0001D279); /* call 0x0001D279 */

loc_00113503: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = MEM32(ebx + 0x3C);
    MEMF(ebx + 0x194) = xmm1.f[0]; /* movss */
    MEM8(ebx + 0x1DC) = 0xFF;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8E9ADC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8E9AE4)); /* movss */
    edx = MEM32(esp + 0x10);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8E9AE0)); /* movss */
    eax = MEM32(esp + 0x14);
    ecx = ebx + 0xA0;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = eax;
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(ecx + 0xC) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    ecx = ebx + 0x90;
    MEM32(ecx) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 4) = eax;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(ecx + 0xC) = eax;
    edi = ebx + 0xB0;
    ecx = 0x10;
    esi = 0x8F9620;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001135D4u); RECOMP_ABI_CALL(0x00016C94u, sub_00016C94); /* call 0x00016C94 */

loc_001135D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00113620
 * Original: 0x00113620 - 0x0011366F (79 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00113620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113620: ;
    edx = MEM32(0x895AB0);
    eax = MEM32(ecx + 0x3B8);
    edx = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(0x8AE870);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_00113644; /* jge: greater or equal (signed >=) */

loc_0011363C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113644; /* je: equal / zero */

loc_00113640: ;
    SET_LO8(eax, 1);
    goto loc_00113646;

loc_00113644: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00113646: ;
    edx = MEM32(ecx + 0x260);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011366C; /* je: equal / zero */

loc_00113650: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011366C; /* jne: not equal / not zero */

loc_00113654: ;
    eax = MEM32(ecx + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011366C; /* je: equal / zero */

loc_0011365D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00113662u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011365Fu); } /* indirect call */
    }

loc_00113662: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011366C; /* je: equal / zero */

loc_00113666: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0011366C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00113690
 * Original: 0x00113690 - 0x001136FB (107 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00113690: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00113698u); RECOMP_ABI_CALL(0x00011622u, sub_00011622); /* call 0x00011622 */

loc_00113698: ;
    xmm0 = XMM_SCALAR(MEMF(0x8AD928)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esi + 0x3EC) = 6;
    MEM32(esi + 0x3F0) = 7;
    MEM32(esi + 0x3F4) = eax;
    MEM32(esi + 0x3F8) = eax;
    MEM32(esi + 0x3E4) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001136D5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001136D0: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001136E5;

loc_001136D5: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_001136E5; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_001136E1: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_001136E5: ;
    MEMF(esi + 0x3E8) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x400) = LO8(eax);
    MEM32(esi + 0x40C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00113720
 * Original: 0x00113720 - 0x0011377D (93 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113720: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0011372Au); RECOMP_ABI_CALL(0x00022E36u, sub_00022E36); /* call 0x00022E36 */

loc_0011372A: ;
    eax = MEM32(esi + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00113741u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00113741: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113771; /* je: equal / zero */

loc_0011374A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00113756u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113753u); } /* indirect call */
    }

loc_00113756: ;
    ecx = edi;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00113766u); RECOMP_ABI_CALL(0x000158EEu, sub_000158EE); /* call 0x000158EE */

loc_00113766: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + 0x240) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00113771: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x240) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001137A0
 * Original: 0x001137A0 - 0x001137DB (59 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001137A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001137A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7D64E4);
    ecx = edi;
    PUSH32(esp, 0x001137B5u); RECOMP_ABI_CALL(0x00020717u, sub_00020717); /* call 0x00020717 */

loc_001137B5: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001137BDu); RECOMP_ABI_CALL(0x0002CBEDu, sub_0002CBED); /* call 0x0002CBED */

loc_001137BD: ;
    esi = MEM32(esi + 0x3FC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001137CF; /* je: equal / zero */

loc_001137C7: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001137CFu); RECOMP_ABI_CALL(0x000259C4u, sub_000259C4); /* call 0x000259C4 */

loc_001137CF: ;
    ecx = edi;
    PUSH32(esp, 0x001137D6u); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_001137D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001137F0
 * Original: 0x001137F0 - 0x00113831 (65 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001137F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001137F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x8F0218));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00113818; /* jne: not equal / not zero */

loc_00113802: ;
    MEM32(0x8F0218) = MEM32(0x8F0218) | eax;
    _fa = (uint32_t)(MEM32(0x8F0218)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x8AD922) = 0x408;
    MEM8(0x8AD924) = 4;

loc_00113818: ;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8AD920);
    PUSH32(esp, 0x00113829u); RECOMP_ABI_CALL(0x0001E8E0u, sub_0001E8E0); /* call 0x0001E8E0 */

loc_00113829: ;
    MEM32(esi + 0x3FC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00113850
 * Original: 0x00113850 - 0x00113875 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113850: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113873; /* je: equal / zero */

loc_0011385D: ;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113869u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_00113869: ;
    MEM32(esi + 0x3FC) = 0;

loc_00113873: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00113880
 * Original: 0x00113880 - 0x0011388D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113880(void)
{

loc_00113880: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3D4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113890
 * Original: 0x00113890 - 0x001138E4 (84 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113890(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00113890: ;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001138A6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001138A4: ;
    goto loc_001138AE;

loc_001138A6: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */

loc_001138AE: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(0x8E931C); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7D64F0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_001138DF; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001138D7: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_001138DF: ;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    esp += 4; return; /* ret */

}

/**
 * sub_00113900
 * Original: 0x00113900 - 0x00113907 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113900(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00113900: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00113910
 * Original: 0x00113910 - 0x00113928 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113910: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00113918u); RECOMP_ABI_CALL(0x0002EB4Bu, sub_0002EB4B); /* call 0x0002EB4B */

loc_00113918: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x3F4) = eax;
    MEM32(esi + 0x3F8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00113930
 * Original: 0x00113930 - 0x0011394A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00113930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113930: ;
    eax = MEM32(ecx + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011393Cu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0011393C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113947; /* je: equal / zero */

loc_00113943: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00113947: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00113950
 * Original: 0x00113950 - 0x0011395D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113950(void)
{

loc_00113950: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D64F4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113960
 * Original: 0x00113960 - 0x00113993 (51 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113960: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x3EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113980; /* je: equal / zero */

loc_0011396E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113980; /* je: equal / zero */

loc_00113973: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113980; /* je: equal / zero */

loc_00113978: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_00113988; /* jne: not equal / not zero */

loc_00113980: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_00113988: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001139A0
 * Original: 0x001139A0 - 0x001139AD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001139A0(void)
{

loc_001139A0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D650C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001139B0
 * Original: 0x001139B0 - 0x001139DA (42 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001139B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001139B0: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x3EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001139C7; /* je: equal / zero */

loc_001139BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_001139CF; /* jne: not equal / not zero */

loc_001139C7: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_001139CF: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001139F0
 * Original: 0x001139F0 - 0x001139F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001139F0(void)
{

loc_001139F0: ;
    eax = ecx;
    MEM32(eax) = 0x7D6528;
    esp += 4; return; /* ret */

}

/**
 * sub_00113A00
 * Original: 0x00113A00 - 0x00113A03 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113A00(void)
{

loc_00113A00: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113A10
 * Original: 0x00113A10 - 0x00113A1D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113A10(void)
{

loc_00113A10: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6538;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113A20
 * Original: 0x00113A20 - 0x00113A29 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113A20(void)
{

loc_00113A20: ;
    eax = ecx;
    MEM32(eax) = 0x7D6560;
    esp += 4; return; /* ret */

}

/**
 * sub_00113A30
 * Original: 0x00113A30 - 0x00113A33 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113A30(void)
{

loc_00113A30: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113A40
 * Original: 0x00113A40 - 0x00113A4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113A40(void)
{

loc_00113A40: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6570;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113A50
 * Original: 0x00113A50 - 0x00113A59 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113A50(void)
{

loc_00113A50: ;
    eax = ecx;
    MEM32(eax) = 0x7D6598;
    esp += 4; return; /* ret */

}

/**
 * sub_00113A60
 * Original: 0x00113A60 - 0x00113A63 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113A60(void)
{

loc_00113A60: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113A70
 * Original: 0x00113A70 - 0x00113A7D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113A70(void)
{

loc_00113A70: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D65A8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113A80
 * Original: 0x00113A80 - 0x00113A89 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113A80(void)
{

loc_00113A80: ;
    eax = ecx;
    MEM32(eax) = 0x7D65D4;
    esp += 4; return; /* ret */

}

/**
 * sub_00113A90
 * Original: 0x00113A90 - 0x00113A93 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113A90(void)
{

loc_00113A90: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113AA0
 * Original: 0x00113AA0 - 0x00113AAD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113AA0(void)
{

loc_00113AA0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D65E4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113AB0
 * Original: 0x00113AB0 - 0x00113AB9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113AB0(void)
{

loc_00113AB0: ;
    eax = ecx;
    MEM32(eax) = 0x7D6600;
    esp += 4; return; /* ret */

}

/**
 * sub_00113AC0
 * Original: 0x00113AC0 - 0x00113AC3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113AC0(void)
{

loc_00113AC0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113AD0
 * Original: 0x00113AD0 - 0x00113AD9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113AD0(void)
{

loc_00113AD0: ;
    eax = ecx;
    MEM32(eax) = 0x7D6610;
    esp += 4; return; /* ret */

}

/**
 * sub_00113AE0
 * Original: 0x00113AE0 - 0x00113AE3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113AE0(void)
{

loc_00113AE0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113AF0
 * Original: 0x00113AF0 - 0x00113AFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113AF0(void)
{

loc_00113AF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6620;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113B00
 * Original: 0x00113B00 - 0x00113B09 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113B00(void)
{

loc_00113B00: ;
    eax = ecx;
    MEM32(eax) = 0x7D6640;
    esp += 4; return; /* ret */

}

/**
 * sub_00113B10
 * Original: 0x00113B10 - 0x00113B13 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113B10(void)
{

loc_00113B10: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113B20
 * Original: 0x00113B20 - 0x00113B2D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113B20(void)
{

loc_00113B20: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6650;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113B30
 * Original: 0x00113B30 - 0x00113B39 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113B30(void)
{

loc_00113B30: ;
    eax = ecx;
    MEM32(eax) = 0x7D6674;
    esp += 4; return; /* ret */

}

/**
 * sub_00113B40
 * Original: 0x00113B40 - 0x00113B43 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113B40(void)
{

loc_00113B40: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113B50
 * Original: 0x00113B50 - 0x00113B5D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113B50(void)
{

loc_00113B50: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6684;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113B60
 * Original: 0x00113B60 - 0x00113B8B (43 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113B60: ;
    PUSH32(esp, 0x00113B65u); RECOMP_ABI_CALL(0x0001ED4Au, sub_0001ED4A); /* call 0x0001ED4A */

loc_00113B65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113B7D; /* je: equal / zero */

loc_00113B69: ;
    ecx = MEM32(esp + 8);
    SET_LO8(eax, MEM8(eax + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x30) (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00113B80; /* je: equal / zero */

loc_00113B7D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00113B80: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113BA0
 * Original: 0x00113BA0 - 0x00113BA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113BA0(void)
{

loc_00113BA0: ;
    eax = ecx;
    MEM32(eax) = 0x7D66A4;
    esp += 4; return; /* ret */

}

/**
 * sub_00113BB0
 * Original: 0x00113BB0 - 0x00113BB3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113BB0(void)
{

loc_00113BB0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113BC0
 * Original: 0x00113BC0 - 0x00113BCD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113BC0(void)
{

loc_00113BC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D66B4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113BD0
 * Original: 0x00113BD0 - 0x00113C02 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113BD0: ;
    PUSH32(esp, 0x00113BD5u); RECOMP_ABI_CALL(0x0001ED4Au, sub_0001ED4A); /* call 0x0001ED4A */

loc_00113BD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00113BF0; /* je: equal / zero */

loc_00113BE1: ;
    ecx = MEM32(esp + 8);
    SET_LO8(eax, MEM8(eax + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x30) (8-bit) */
    xmm1 = xmm0; /* movaps */
    if (CMP_EQ(_fa, _fb)) goto loc_00113BF3; /* je: equal / zero */

loc_00113BF0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */

loc_00113BF3: ;
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113C10
 * Original: 0x00113C10 - 0x00113C1D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113C10(void)
{

loc_00113C10: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D66D8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113C20
 * Original: 0x00113C20 - 0x00113C94 (116 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113C20(void)
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

loc_00113C20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00113C3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113C39u); } /* indirect call */
    }

loc_00113C3C: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_00113C5D; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00113C55: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00113C5D: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00113C73u); RECOMP_ABI_CALL(0x00037322u, sub_00037322); /* call 0x00037322 */

loc_00113C73: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00113C8C; /* ja: above (unsigned >) */

loc_00113C89: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00113C8C: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00113CC0
 * Original: 0x00113CC0 - 0x00113CCD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113CC0(void)
{

loc_00113CC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D66F4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113CD0
 * Original: 0x00113CD0 - 0x00113CD9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113CD0(void)
{

loc_00113CD0: ;
    eax = ecx;
    MEM32(eax) = 0x7D6714;
    esp += 4; return; /* ret */

}

/**
 * sub_00113CE0
 * Original: 0x00113CE0 - 0x00113CE3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113CE0(void)
{

loc_00113CE0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113CF0
 * Original: 0x00113CF0 - 0x00113CFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113CF0(void)
{

loc_00113CF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6724;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113D00
 * Original: 0x00113D00 - 0x00113D2E (46 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113D00(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00113D00: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D6064); /* comiss */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca > _fcb)) goto loc_00113D27; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7D6064)) */

loc_00113D24: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00113D27: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113D40
 * Original: 0x00113D40 - 0x00113D4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113D40(void)
{

loc_00113D40: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6740;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113D50
 * Original: 0x00113D50 - 0x00113D7E (46 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113D50(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00113D50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D6064); /* comiss */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca > _fcb)) goto loc_00113D77; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7D6064)) */

loc_00113D74: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00113D77: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113D90
 * Original: 0x00113D90 - 0x00113DAA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00113D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113D90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00113D99u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00113D99: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113DA7; /* je: equal / zero */

loc_00113DA0: ;
    MEM32(eax) = 0x7D6600;
    esp += 4; return; /* ret */

loc_00113DA7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00113DB0
 * Original: 0x00113DB0 - 0x00113DBD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113DB0(void)
{

loc_00113DB0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D675C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113DC0
 * Original: 0x00113DC0 - 0x00113DC9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113DC0(void)
{

loc_00113DC0: ;
    eax = ecx;
    MEM32(eax) = 0x7D6770;
    esp += 4; return; /* ret */

}

/**
 * sub_00113DD0
 * Original: 0x00113DD0 - 0x00113DD3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113DD0(void)
{

loc_00113DD0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113DE0
 * Original: 0x00113DE0 - 0x00113DED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113DE0(void)
{

loc_00113DE0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6780;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113DF0
 * Original: 0x00113DF0 - 0x00113DF9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113DF0(void)
{

loc_00113DF0: ;
    eax = ecx;
    MEM32(eax) = 0x7D6798;
    esp += 4; return; /* ret */

}

/**
 * sub_00113E00
 * Original: 0x00113E00 - 0x00113E03 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113E00(void)
{

loc_00113E00: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113E10
 * Original: 0x00113E10 - 0x00113E1D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113E10(void)
{

loc_00113E10: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D67A8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113E20
 * Original: 0x00113E20 - 0x00113E3A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00113E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113E20: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00113E29u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00113E29: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113E37; /* je: equal / zero */

loc_00113E30: ;
    MEM32(eax) = 0x7D5494;
    esp += 4; return; /* ret */

loc_00113E37: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00113E40
 * Original: 0x00113E40 - 0x00113E4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113E40(void)
{

loc_00113E40: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D67C4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113E50
 * Original: 0x00113E50 - 0x00113EAA (90 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113E50: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    ecx = esi;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00113E66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113E63u); } /* indirect call */
    }

loc_00113E66: ;
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113E73u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00113E73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00113E99; /* jl: less (signed <) */

loc_00113E7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00113E85; /* jle: less or equal (signed <=) */

loc_00113E80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113E99; /* jne: not equal / not zero */

loc_00113E85: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00113E99: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113EC0
 * Original: 0x00113EC0 - 0x00113ECD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113EC0(void)
{

loc_00113EC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D67D4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113ED0
 * Original: 0x00113ED0 - 0x00113F3B (107 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00113ED0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x00113EDCu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00113EDC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113F06; /* jne: not equal / not zero */

loc_00113EE0: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00113F1A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00113EF5: ;
    edx = MEM32(esi + 0x20);
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7BFAEC); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x30); /* comiss */

loc_00113F04: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00113F2F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00113F06: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00113F1A: ;
    eax = MEM32(esi + 0x20);
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7BFAEC); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    goto loc_00113F04;

loc_00113F2F: ;
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113F60
 * Original: 0x00113F60 - 0x00113F69 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113F60(void)
{

loc_00113F60: ;
    eax = ecx;
    MEM32(eax) = 0x7D67F4;
    esp += 4; return; /* ret */

}

/**
 * sub_00113F70
 * Original: 0x00113F70 - 0x00113F73 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113F70(void)
{

loc_00113F70: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113F80
 * Original: 0x00113F80 - 0x00113F8D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113F80(void)
{

loc_00113F80: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6804;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113F90
 * Original: 0x00113F90 - 0x00114086 (246 bytes, 67 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113F90(void)
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

loc_00113F90: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x30)) >> 32) & 1);
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113FB1u); RECOMP_ABI_CALL(0x0002E673u, sub_0002E673); /* call 0x0002E673 */

loc_00113FB1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00114074; /* jl: less (signed <) */

loc_00113FBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00113FCA; /* jle: less or equal (signed <=) */

loc_00113FC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00114074; /* jne: not equal / not zero */

loc_00113FCA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00113FD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113FCEu); } /* indirect call */
    }

loc_00113FD1: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011403C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00114036: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_0011403C: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = edx;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x0011405Fu); RECOMP_ABI_CALL(0x0002335Eu, sub_0002335E); /* call 0x0002335E */

loc_0011405F: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00114077; /* ja: above (unsigned >) */

loc_00114074: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00114077: ;
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
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
 * sub_001140D0
 * Original: 0x001140D0 - 0x00114122 (82 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001140D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001140D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x4C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x3C);
    edx = eax + 0x1C;
    esi = edx;
    edx = MEM32(esi);
    ebx = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) edi = MEM32(0x8E8F84); /* cmove */
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(ecx + 0x194);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x48);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x38);
    eax = MEM32(eax + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00114116u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_00114116: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00114140
 * Original: 0x00114140 - 0x00114148 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114140(void)
{

loc_00114140: ;
    MEM8(ecx + 0x400) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00114150
 * Original: 0x00114150 - 0x0011415A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114150(void)
{

loc_00114150: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00114160
 * Original: 0x00114160 - 0x00114170 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114160(void)
{

loc_00114160: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00114180
 * Original: 0x00114180 - 0x00114181 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114180(void)
{

loc_00114180: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00114190
 * Original: 0x00114190 - 0x00114197 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00114190: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_001141A0
 * Original: 0x001141A0 - 0x001141A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001141A0(void)
{

loc_001141A0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001141B0
 * Original: 0x001141B0 - 0x001141F9 (73 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001141B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001141B0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001141F3; /* je: equal / zero */

loc_001141BA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001141C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001141C0u); } /* indirect call */
    }

loc_001141C2: ;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001141E5; /* je: equal / zero */

loc_001141C9: ;
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_001141D0: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001141DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001141D7u); } /* indirect call */
    }

loc_001141DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001141ED; /* jne: not equal / not zero */

loc_001141DE: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001141D0; /* jne: not equal / not zero */

loc_001141E5: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001141EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001141EAu); } /* indirect call */
    }

loc_001141ED: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_001141F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00114210
 * Original: 0x00114210 - 0x00114231 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114210: ;
    ecx = MEM32(0x8F0214);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114230; /* jne: not equal / not zero */

loc_0011421C: ;
    MEM32(0x8F0200) = eax;
    MEM32(0x8F0204) = eax;
    MEM32(0x8F0214) = 0x8F0200;

loc_00114230: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00114240
 * Original: 0x00114240 - 0x00114247 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114240(void)
{

loc_00114240: ;
    MEM32(ecx) = 0x7CC298;
    esp += 4; return; /* ret */

}

/**
 * sub_00114250
 * Original: 0x00114250 - 0x0011425B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114250: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2A8), 0x5E (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    esp += 4; return; /* ret */

}

/**
 * sub_00114260
 * Original: 0x00114260 - 0x0011426B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114260: ;
    _fa = (uint32_t)(MEM32(ecx + 0x274)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x274), 0x5C (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    esp += 4; return; /* ret */

}

/**
 * sub_00114270
 * Original: 0x00114270 - 0x0011443E (462 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114270(void)
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

loc_00114270: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00114319; /* je: equal / zero */

loc_00114285: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00114319; /* je: equal / zero */

loc_0011428D: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = 0x8F00FC;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x001142A7u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_001142A7: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    esi = eax;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00114310; /* je: equal / zero */

loc_001142BD: ;
    /* nop */

loc_001142C0: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001142C7u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_001142C7: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_001142E2; /* ja: above (unsigned >) */

loc_001142D8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001142F0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_001142E2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ebx = esi;

loc_001142F0: ;
    PUSH32(esp, 1);
    ecx = esi + 0x200;
    PUSH32(esp, 0x001142FDu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_001142FD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001142C0; /* jne: not equal / not zero */

loc_00114303: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00114310; /* je: equal / zero */

loc_00114307: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00114310: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00114319: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    eax = MEM32(edx * 4 + 0x8F00F8);
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    ecx = eax + 0x1C;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00114347u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00114347: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0011439B; /* je: equal / zero */

loc_0011434D: ;
    /* nop */

loc_00114350: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x39)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 0x39) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00114388; /* je: equal / zero */

loc_00114358: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011435Fu); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_0011435F: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0011437A; /* ja: above (unsigned >) */

loc_00114370: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00114388; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_0011437A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ebp = esi;

loc_00114388: ;
    PUSH32(esp, 1);
    ecx = esi + 0x200;
    PUSH32(esp, 0x00114395u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00114395: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00114350; /* jne: not equal / not zero */

loc_0011439B: ;
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
    eax = MEM32(edx);
    PUSH32(esp, 1);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x001143B5u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_001143B5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00114403; /* je: equal / zero */

loc_001143BB: ;
    goto loc_001143C0;

    /* nop */

loc_001143C0: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001143C7u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_001143C7: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_001143E2; /* ja: above (unsigned >) */

loc_001143D8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001143F0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_001143E2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ebx = esi;

loc_001143F0: ;
    PUSH32(esp, 1);
    ecx = esi + 0x200;
    PUSH32(esp, 0x001143FDu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_001143FD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001143C0; /* jne: not equal / not zero */

loc_00114403: ;
    SET_LO8(ecx, MEM8(edi + 0x1DC));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00114413; /* jl: less (signed <) */

loc_0011440F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00114421; /* jne: not equal / not zero */

loc_00114413: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00114436; /* je: equal / zero */

loc_00114417: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00114421: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00114436; /* je: equal / zero */

loc_00114427: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca > _fcb)) goto loc_00114436; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_00114434: ;
    eax = ebx;

loc_00114436: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
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
 * sub_001144C0
 * Original: 0x001144C0 - 0x00114538 (120 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001144C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001144C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001144CFu); RECOMP_ABI_CALL(0x0002D91Cu, sub_0002D91C); /* call 0x0002D91C */

loc_001144CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114534; /* jne: not equal / not zero */

loc_001144D3: ;
    eax = MEM32(esi + 0x54);
    eax = MEM32(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001144E0; /* je: equal / zero */

loc_001144DC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00114534; /* je: equal / zero */

loc_001144E0: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001144ECu); RECOMP_ABI_CALL(0x0001C036u, sub_0001C036); /* call 0x0001C036 */

loc_001144EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114534; /* jne: not equal / not zero */

loc_001144F0: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001144FCu); RECOMP_ABI_CALL(0x0001C3C4u, sub_0001C3C4); /* call 0x0001C3C4 */

loc_001144FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114534; /* jne: not equal / not zero */

loc_00114500: ;
    SET_LO8(eax, MEM8(esi + 0x3A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114534; /* jne: not equal / not zero */

loc_00114507: ;
    eax = MEM32(esi + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114534; /* jne: not equal / not zero */

loc_00114511: ;
    ecx = MEM32(esi + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011451Du); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0011451D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114534; /* je: equal / zero */

loc_00114524: ;
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, 0x0011452Cu); RECOMP_ABI_CALL(0x00023A20u, sub_00023A20); /* call 0x00023A20 */

loc_0011452C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114534; /* jne: not equal / not zero */

loc_00114530: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00114534: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114560
 * Original: 0x00114560 - 0x00114572 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114560(void)
{

loc_00114560: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x410) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00114580
 * Original: 0x00114580 - 0x001148F9 (889 bytes, 264 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114580(void)
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

loc_00114580: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0011458Bu); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_0011458B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001148F2; /* jne: not equal / not zero */

loc_00114593: ;
    PUSH32(esp, 0x00114598u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_00114598: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001148F2; /* jne: not equal / not zero */

loc_001145A0: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    eax = SX8(LO8(ecx));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax + 0x8F0040);
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM32(edx + 0x12C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x12C), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001145C0; /* jne: not equal / not zero */

loc_001145B8: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001145C0: ;
    eax = MEM32(eax + 0x8F00F8);
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001145B8; /* je: equal / zero */

loc_001145CB: ;
    edx = MEM32(esi + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7BA2EC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_001145B8; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_001145E9: ;
    SET_LO8(edx, MEM8(0x8E93B0));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001146CC; /* jne: not equal / not zero */

loc_001145FB: ;
    ecx = esi;
    PUSH32(esp, 0x00114602u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00114602: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0011462E; /* je: equal / zero */

loc_00114606: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x8EFCBC); /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x8E9898)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001148E6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011461F: ;
    ebp = 1;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011462E: ;
    edi = MEM32(0x8EFCB8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001148E6; /* je: equal / zero */

loc_0011463C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7D6064)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001148E6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00114653: ;
    eax = MEM32(edi + 0xF0);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001148E6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00114667: ;
    ecx = MEM32(esi + 0x50);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    edx = esp + 0x14;
    PUSH32(esp, 0x42F00000);
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00114684u); RECOMP_ABI_CALL(0x00013D7Du, sub_00013D7D); /* call 0x00013D7D */

loc_00114684: ;
    PUSH32(esp, edi);
    ebx = eax;
    eax = esp + 0x24;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114692u); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_00114692: ;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001146A2u); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_001146A2: ;
    PUSH32(esp, eax);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001146ADu); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_001146AD: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001148E6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx)) */

loc_001146BD: ;
    ebp = 2;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001146CC: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D6064); /* comiss */
    if ((_fca > _fcb)) goto loc_001148E6; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7D6064)) */

loc_001146D9: ;
    PUSH32(esp, 1);
    ecx = eax + 4;
    PUSH32(esp, 0x001146E3u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_001146E3: ;
    edi = eax;
    PUSH32(esp, 1);
    ecx = edi + 0x1E8;
    PUSH32(esp, 0x001146F2u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_001146F2: ;
    ebx = eax;
    PUSH32(esp, 1);
    ecx = ebx + 0x1E8;
    PUSH32(esp, 0x00114701u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00114701: ;
    SET_LO8(ecx, MEM8(esi + 0x39));
    _fa = (uint32_t)(MEM8(edi + 0x39)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x39), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00114725; /* je: equal / zero */

loc_00114709: ;
    _fa = (uint32_t)(MEM8(ebx + 0x39)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x39), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00114725; /* je: equal / zero */

loc_0011470E: ;
    _fa = (uint32_t)(MEM8(eax + 0x39)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x39), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001148E8; /* jne: not equal / not zero */

loc_00114717: ;
    SET_LO8(ecx, MEM8(eax + 0x1DC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001148E8; /* jl: less (signed <) */

loc_00114725: ;
    ecx = MEM32(esi + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00114731u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00114731: ;
    edx = MEM32(eax + 0x2C);
    edi = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00114747; /* jne: not equal / not zero */

loc_0011473E: ;
    ecx = esi;
    PUSH32(esp, 0x00114745u); RECOMP_ABI_CALL(0x0001481Du, sub_0001481D); /* call 0x0001481D */

loc_00114745: ;
    edi = eax;

loc_00114747: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0011474Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011474Bu); } /* indirect call */
    }

loc_0011474E: ;
    ecx = MEM32(eax + 0x20);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x24) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x28) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x2C) = ecx;
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011477A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00114778: ;
    goto loc_00114782;

loc_0011477A: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */

loc_00114782: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(0x8E931C); /* divss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7D64F0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_001147B2; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm1.f[0]) */

loc_001147AA: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_001147B2: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, esi);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001147C7u); RECOMP_ABI_CALL(0x0002335Eu, sub_0002335E); /* call 0x0002335E */

loc_001147C7: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001147D6u); RECOMP_ABI_CALL(0x0002335Eu, sub_0002335E); /* call 0x0002335E */

loc_001147D6: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_001148E8; /* jbe: below or equal (unsigned <=) */

loc_001147E9: ;
    SET_LO8(edx, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00114818; /* je: equal / zero */

loc_001147F5: ;
    ecx = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    edx = MEM32(esi + 0x20);
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7D6824); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x38); /* comiss */
    if ((_fca > _fcb)) goto loc_00114839; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx + 0x38)) */

loc_0011480E: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00114818: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7D6824); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001148E8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00114839: ;
    edi = MEM32(esi + 0x4C);
    edx = edi + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011484Au); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_0011484A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_001148E8; /* jbe: below or equal (unsigned <=) */

loc_0011485B: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011486A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00114868: ;
    goto loc_00114872;

loc_0011486A: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0x18); /* subss */

loc_00114872: ;
    eax = MEM32(esi + 0x20);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00114884; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0011487F: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00114889;

loc_00114884: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_00114889: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001148E8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011488E: ;
    edx = MEM32(esi);
    ecx = esi;
    ebp = 2;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0011489Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114897u); } /* indirect call */
    }

loc_0011489A: ;
    ecx = eax;
    PUSH32(esp, 0x001148A1u); RECOMP_ABI_CALL(0x0002D25Fu, sub_0002D25F); /* call 0x0002D25F */

loc_001148A1: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x8EACE4);
    PUSH32(esp, 0x001148B0u); RECOMP_ABI_CALL(0x0002B973u, sub_0002B973); /* call 0x0002B973 */

loc_001148B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001148E8; /* jne: not equal / not zero */

loc_001148B4: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_001148E8; /* jge: greater or equal (signed >=) */

loc_001148C3: ;
    eax = MEM32(eax + 0x20);
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001148E8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_001148E6: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001148E8: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001148F2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001149E0
 * Original: 0x001149E0 - 0x00114AB5 (213 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001149E0(void)
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

loc_001149E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114A28; /* jne: not equal / not zero */

loc_001149EE: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001149FAu); RECOMP_ABI_CALL(0x00022594u, sub_00022594); /* call 0x00022594 */

loc_001149FA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00114A31; /* jne: not equal / not zero */

loc_001149FF: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, 0x00114A0Au); RECOMP_ABI_CALL(0x00017392u, sub_00017392); /* call 0x00017392 */

loc_00114A0A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114A45; /* je: equal / zero */

loc_00114A0E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114A14u); RECOMP_ABI_CALL(0x00028D72u, sub_00028D72); /* call 0x00028D72 */

loc_00114A14: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114A45; /* jne: not equal / not zero */

loc_00114A1B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114A21u); RECOMP_ABI_CALL(0x0001B77Bu, sub_0001B77B); /* call 0x0001B77B */

loc_00114A21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114A45; /* jne: not equal / not zero */

loc_00114A28: ;
    fp_push(MEMF(0x7D682C)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00114A31: ;
    PUSH32(esp, 0x00114A36u); RECOMP_ABI_CALL(0x00032642u, sub_00032642); /* call 0x00032642 */

loc_00114A36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114A45; /* jne: not equal / not zero */

loc_00114A3D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114A43u); RECOMP_ABI_CALL(0x000350DBu, sub_000350DB); /* call 0x000350DB */

loc_00114A43: ;
    goto loc_00114A21;

loc_00114A45: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    ecx = MEM32(edx + eax + 0x8F5C10);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00114A80; /* jge: greater or equal (signed >=) */

loc_00114A7A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00114A80: ;
    ecx = MEM32(0x8EB3BC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7D6828)); /* fmul dword ptr [0x7d6828] */
    PUSH32(esp, esi);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00114A96u); RECOMP_ABI_CALL(0x00034B22u, sub_00034B22); /* call 0x00034B22 */

loc_00114A96: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114AAE; /* je: equal / zero */

loc_00114A9A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB1C8); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00114AAE: ;
    fp_push(MEMF(esp + 4)); /* fld float */
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
 * sub_00114AF0
 * Original: 0x00114AF0 - 0x00114B61 (113 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00114AF0: ;
    edx = MEM32(0x8E8F84);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ebp = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    ecx = MEM32(eax * 4 + 0x8F00F8);
    _fa = (uint32_t)(MEM32(edx + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0xA8), ebp (32-bit) */
    ebx = MEM32(ecx + 0x4C);
    if (CMP_EQ(_fa, _fb)) goto loc_00114B55; /* je: equal / zero */

loc_00114B15: ;
    eax = MEM32(0x8EACE0);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00114B42; /* je: equal / zero */

loc_00114B22: ;
    edi = eax + 0x2C;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114B42; /* je: equal / zero */

loc_00114B2B: ;
    eax = MEM32(eax + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114B37u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00114B37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114B42; /* je: equal / zero */

loc_00114B3E: ;
    edi = MEM32(edi);
    goto loc_00114B44;

loc_00114B42: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00114B44: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00114B55; /* je: equal / zero */

loc_00114B49: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114B5B; /* je: equal / zero */

loc_00114B4D: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x39);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114B5B; /* jne: not equal / not zero */

loc_00114B55: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00114B5B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00114B80
 * Original: 0x00114B80 - 0x00114CD9 (345 bytes, 96 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00114B80: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AD448); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00114CB7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AD448)) */

loc_00114B9B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00114BA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114B9Du); } /* indirect call */
    }

loc_00114BA0: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00114BACu); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_00114BAC: ;
    edx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x64); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x8AD928)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00114BDA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00114BCD: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00114BDA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00114BD2: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_00114C0B;

loc_00114BDA: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00114BE8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00114BDF: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_00114C05;

loc_00114BE8: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00114BFA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00114BF1: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_00114C05;

loc_00114BFA: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_00114C05: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_00114C0B: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00114C1Au); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00114C1A: ;
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7D6830); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00114C96; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00114C90: ;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_00114C96: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x10);
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00114CB7: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    esi = MEM32(edx);
    eax = MEM32(esp + 0x20);
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00114D30
 * Original: 0x00114D30 - 0x00114D4B (27 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114D30: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    ecx = MEM32(eax * 4 + 0x8F00F8);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + edx * 4 + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00114D60
 * Original: 0x00114D60 - 0x00114D7A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00114D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114D60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00114D69u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00114D69: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114D77; /* je: equal / zero */

loc_00114D70: ;
    MEM32(eax) = 0x7CF884;
    esp += 4; return; /* ret */

loc_00114D77: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114D80
 * Original: 0x00114D80 - 0x00114D9A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00114D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114D80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00114D89u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00114D89: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114D97; /* je: equal / zero */

loc_00114D90: ;
    MEM32(eax) = 0x7D6528;
    esp += 4; return; /* ret */

loc_00114D97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114DA0
 * Original: 0x00114DA0 - 0x00114DDD (61 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00114DA0: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    edx = MEM32(eax * 4 + 0x8F00F8);
    eax = MEM32(edx + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114DCF; /* je: equal / zero */

loc_00114DB6: ;
    eax = MEM32(eax + 0x20);
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x30); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca > _fcb)) goto loc_00114DD2; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x30)) */

loc_00114DCF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00114DD2: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00114DF0
 * Original: 0x00114DF0 - 0x00114E0A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00114DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114DF0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00114DF9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00114DF9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114E07; /* je: equal / zero */

loc_00114E00: ;
    MEM32(eax) = 0x7D6560;
    esp += 4; return; /* ret */

loc_00114E07: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114E10
 * Original: 0x00114E10 - 0x00114E54 (68 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00114E10: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    edx = MEM32(eax * 4 + 0x8F00F8);
    eax = MEM32(edx + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00114E42; /* je: equal / zero */

loc_00114E2E: ;
    eax = MEM32(eax + 0x20);
    ecx = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x30); /* comiss */
    xmm1 = xmm0; /* movaps */
    if ((_fca > _fcb)) goto loc_00114E45; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(ecx + 0x30)) */

loc_00114E42: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */

loc_00114E45: ;
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00114E70
 * Original: 0x00114E70 - 0x00114E8A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00114E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114E70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00114E79u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00114E79: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114E87; /* je: equal / zero */

loc_00114E80: ;
    MEM32(eax) = 0x7D6598;
    esp += 4; return; /* ret */

loc_00114E87: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114E90
 * Original: 0x00114E90 - 0x00114ECD (61 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00114E90: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    edx = MEM32(eax * 4 + 0x8F00F8);
    eax = MEM32(edx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114EBF; /* je: equal / zero */

loc_00114EA6: ;
    eax = MEM32(eax + 0x20);
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x30); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca > _fcb)) goto loc_00114EC2; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x30)) */

loc_00114EBF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00114EC2: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00114EE0
 * Original: 0x00114EE0 - 0x00114EFA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00114EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114EE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00114EE9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00114EE9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114EF7; /* je: equal / zero */

loc_00114EF0: ;
    MEM32(eax) = 0x7D65D4;
    esp += 4; return; /* ret */

loc_00114EF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114F00
 * Original: 0x00114F00 - 0x00114F1A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00114F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114F00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00114F09u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00114F09: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114F17; /* je: equal / zero */

loc_00114F10: ;
    MEM32(eax) = 0x7D6610;
    esp += 4; return; /* ret */

loc_00114F17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114F20
 * Original: 0x00114F20 - 0x00115023 (259 bytes, 80 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114F20: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_00114F6F; /* jl: less (signed <) */

loc_00114F38: ;
    ecx = MEM32(esp + 0xC);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    ecx = MEM32(edx * 4 + 0x8F00F8);
    edx = MEM32(ecx + 0x58);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115012; /* jne: not equal / not zero */

loc_00114F56: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = MEM32(esp + 8);
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00114F6F: ;
    eax = MEM32(0x8EACE0);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00114FC2; /* je: equal / zero */

loc_00114F7C: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114FC2; /* je: equal / zero */

loc_00114F83: ;
    edx = MEM32(eax + 0x1D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00114F8Fu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00114F8F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114FC2; /* je: equal / zero */

loc_00114F96: ;
    eax = MEM32(0x8EACE0);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115011; /* je: equal / zero */

loc_00114FA2: ;
    esi = eax + 0x2C;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115011; /* je: equal / zero */

loc_00114FAB: ;
    eax = MEM32(eax + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114FB7u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00114FB7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115011; /* je: equal / zero */

loc_00114FBE: ;
    eax = MEM32(esi);
    goto loc_00114FDA;

loc_00114FC2: ;
    ecx = MEM32(0x8EACE4);
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115011; /* je: equal / zero */

loc_00114FCF: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115011; /* jne: not equal / not zero */

loc_00114FD5: ;
    PUSH32(esp, 0x00114FDAu); RECOMP_ABI_CALL(0x0002A181u, sub_0002A181); /* call 0x0002A181 */

loc_00114FDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115011; /* je: equal / zero */

loc_00114FDE: ;
    ecx = MEM32(eax + 0x3EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114FF7; /* je: equal / zero */

loc_00114FE8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114FF7; /* je: equal / zero */

loc_00114FED: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114FF7; /* je: equal / zero */

loc_00114FF2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115011; /* jne: not equal / not zero */

loc_00114FF7: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edx + 0x30) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115011; /* jne: not equal / not zero */

loc_00115003: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00115011: ;
    POP32(esp, esi);

loc_00115012: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00115070
 * Original: 0x00115070 - 0x0011508A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115070: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00115079u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00115079: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115087; /* je: equal / zero */

loc_00115080: ;
    MEM32(eax) = 0x7D6640;
    esp += 4; return; /* ret */

loc_00115087: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115090
 * Original: 0x00115090 - 0x0011518A (250 bytes, 76 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115090: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_001150DF; /* jl: less (signed <) */

loc_001150A8: ;
    ecx = MEM32(esp + 0xC);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    ecx = MEM32(edx * 4 + 0x8F00F8);
    edx = MEM32(ecx + 0x68);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115179; /* jne: not equal / not zero */

loc_001150C6: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = MEM32(esp + 8);
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001150DF: ;
    eax = MEM32(0x8EACE0);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00115132; /* je: equal / zero */

loc_001150EC: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115132; /* je: equal / zero */

loc_001150F3: ;
    edx = MEM32(eax + 0x1D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001150FFu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_001150FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115132; /* je: equal / zero */

loc_00115106: ;
    eax = MEM32(0x8EACE0);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115178; /* je: equal / zero */

loc_00115112: ;
    esi = eax + 0x2C;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115178; /* je: equal / zero */

loc_0011511B: ;
    eax = MEM32(eax + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115127u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00115127: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115178; /* je: equal / zero */

loc_0011512E: ;
    eax = MEM32(esi);
    goto loc_0011514A;

loc_00115132: ;
    ecx = MEM32(0x8EACE4);
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115178; /* je: equal / zero */

loc_0011513F: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115178; /* jne: not equal / not zero */

loc_00115145: ;
    PUSH32(esp, 0x0011514Au); RECOMP_ABI_CALL(0x0002A181u, sub_0002A181); /* call 0x0002A181 */

loc_0011514A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115178; /* je: equal / zero */

loc_0011514E: ;
    ecx = MEM32(eax + 0x3EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011515E; /* je: equal / zero */

loc_00115159: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115178; /* jne: not equal / not zero */

loc_0011515E: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edx + 0x30) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115178; /* jne: not equal / not zero */

loc_0011516A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00115178: ;
    POP32(esp, esi);

loc_00115179: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001151D0
 * Original: 0x001151D0 - 0x001151EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001151D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001151D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001151D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001151D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001151E7; /* je: equal / zero */

loc_001151E0: ;
    MEM32(eax) = 0x7D6674;
    esp += 4; return; /* ret */

loc_001151E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001151F0
 * Original: 0x001151F0 - 0x0011520A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001151F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001151F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001151F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001151F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115207; /* je: equal / zero */

loc_00115200: ;
    MEM32(eax) = 0x7D66A4;
    esp += 4; return; /* ret */

loc_00115207: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115210
 * Original: 0x00115210 - 0x0011522A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115210: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00115219u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00115219: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115227; /* je: equal / zero */

loc_00115220: ;
    MEM32(eax) = 0x7B8E14;
    esp += 4; return; /* ret */

loc_00115227: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115230
 * Original: 0x00115230 - 0x0011524A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115230: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00115239u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00115239: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115247; /* je: equal / zero */

loc_00115240: ;
    MEM32(eax) = 0x7BC428;
    esp += 4; return; /* ret */

loc_00115247: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115250
 * Original: 0x00115250 - 0x00115280 (48 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115250: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F0040);
    eax = MEM32(edx + 0x14C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00115279; /* je: equal / zero */

loc_00115276: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00115279: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00115290
 * Original: 0x00115290 - 0x001152AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115290: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00115299u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00115299: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001152A7; /* je: equal / zero */

loc_001152A0: ;
    MEM32(eax) = 0x7D6714;
    esp += 4; return; /* ret */

loc_001152A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001152B0
 * Original: 0x001152B0 - 0x001152CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001152B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001152B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001152B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001152B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001152C7; /* je: equal / zero */

loc_001152C0: ;
    MEM32(eax) = 0x7AF0D4;
    esp += 4; return; /* ret */

loc_001152C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001152D0
 * Original: 0x001152D0 - 0x001152FF (47 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001152D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001152D0: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F0040);
    eax = MEM32(edx + 0x138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_G(_fas, _fbs)) goto loc_001152F4; /* jg: greater (signed >) */

loc_001152F1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_001152F4: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00115310
 * Original: 0x00115310 - 0x0011532A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115310: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00115319u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00115319: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115327; /* je: equal / zero */

loc_00115320: ;
    MEM32(eax) = 0x7D6770;
    esp += 4; return; /* ret */

loc_00115327: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115330
 * Original: 0x00115330 - 0x0011535F (47 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115330: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F0040);
    eax = MEM32(edx + 0x138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_G(_fas, _fbs)) goto loc_00115354; /* jg: greater (signed >) */

loc_0011534C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_00115354: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00115370
 * Original: 0x00115370 - 0x0011538A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115370: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00115379u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00115379: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115387; /* je: equal / zero */

loc_00115380: ;
    MEM32(eax) = 0x7D6798;
    esp += 4; return; /* ret */

loc_00115387: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115390
 * Original: 0x00115390 - 0x001153C4 (52 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115390: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x8F0044;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x138);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_G(_fas, _fbs)) goto loc_001153BD; /* jg: greater (signed >) */

loc_001153BA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_001153BD: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001153E0
 * Original: 0x001153E0 - 0x001153FA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001153E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001153E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001153E9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001153E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001153F7; /* je: equal / zero */

loc_001153F0: ;
    MEM32(eax) = 0x7C3A18;
    esp += 4; return; /* ret */

loc_001153F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115400
 * Original: 0x00115400 - 0x0011541A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115400: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00115409u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00115409: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115417; /* je: equal / zero */

loc_00115410: ;
    MEM32(eax) = 0x7D67F4;
    esp += 4; return; /* ret */

loc_00115417: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115420
 * Original: 0x00115420 - 0x00115429 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115420(void)
{

loc_00115420: ;
    eax = ecx;
    MEM32(eax) = 0x7D6834;
    esp += 4; return; /* ret */

}

/**
 * sub_00115430
 * Original: 0x00115430 - 0x00115433 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115430: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115440
 * Original: 0x00115440 - 0x0011544D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115440(void)
{

loc_00115440: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6844;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00115450
 * Original: 0x00115450 - 0x00115564 (276 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115450(void)
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

loc_00115450: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = 0x8F0044;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115560; /* je: equal / zero */

loc_0011546E: ;
    eax = MEM32(eax + 0x8F0040);
    ecx = MEM32(eax);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0xD2);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xD2);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_00115560; /* js: sign (negative) */

loc_0011548C: ;
    ecx = esi;
    PUSH32(esp, 0x00115493u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00115493: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115560; /* je: equal / zero */

loc_0011549B: ;
    eax = MEM32(esi + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115560; /* jne: not equal / not zero */

loc_001154AC: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D6064); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00115560; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7D6064)) */

loc_001154BE: ;
    ecx = esi;
    PUSH32(esp, 0x001154C5u); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_001154C5: ;
    fp_push(MEMF(0x7AF57C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00115560; /* jbe: below or equal (unsigned <=) */

loc_001154D7: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + 0x8F0040);
    edx = MEM32(ecx + 0x138);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001154F8; /* jne: not equal / not zero */

loc_001154EE: ;
    ecx = MEM32(0x8F0108);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(HI8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), HI8(ecx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011550C; /* jle: less or equal (signed <=) */

loc_001154F8: ;
    edx = MEM32(esi + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D605C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00115560; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7D605C)) */

loc_0011550C: ;
    eax = MEM32(eax + 0x8F00F8);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = eax + 4;
    PUSH32(esp, 0x0011551Du); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_0011551D: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115556; /* je: equal / zero */

loc_00115525: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x0011552Du); RECOMP_ABI_CALL(0x00032813u, sub_00032813); /* call 0x00032813 */

loc_0011552D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115543; /* je: equal / zero */

loc_00115531: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AD44C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x6C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00115543; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x6C)) */

loc_00115542: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00115543: ;
    PUSH32(esp, 1);
    ecx = esi + 0x1E8;
    PUSH32(esp, 0x00115550u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00115550: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115525; /* jne: not equal / not zero */

loc_00115556: ;
    eax = 2;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00115560: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001155B0
 * Original: 0x001155B0 - 0x001155C0 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001155B0(void)
{

loc_001155B0: ;
    eax = ecx;
    MEM32(eax) = 0x7D6864;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001155D0
 * Original: 0x001155D0 - 0x001155DA (10 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001155D0(void)
{

loc_001155D0: ;
    MEM32(ecx + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001155E0
 * Original: 0x001155E0 - 0x00115607 (39 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001155E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001155E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x001155EEu); RECOMP_ABI_CALL(0x000309B4u, sub_000309B4); /* call 0x000309B4 */

loc_001155EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115600; /* je: equal / zero */

loc_001155F2: ;
    PUSH32(esp, esi);
    ecx = eax;
    edi = eax;
    PUSH32(esp, 0x001155FCu); RECOMP_ABI_CALL(0x000309B4u, sub_000309B4); /* call 0x000309B4 */

loc_001155FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001155F2; /* jne: not equal / not zero */

loc_00115600: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00115610
 * Original: 0x00115610 - 0x0011562F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115610: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7CC298;
    if (TEST_Z(_fa, _fb)) goto loc_00115629; /* je: equal / zero */

loc_00115620: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115626u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00115626: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115629: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00115640
 * Original: 0x00115640 - 0x00115662 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115640: ;
    eax = MEM32(0x8F0214);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115661; /* jne: not equal / not zero */

loc_0011564B: ;
    eax = 0x8F0200;
    MEM32(0x8F0200) = ecx;
    MEM32(0x8F0204) = ecx;
    MEM32(0x8F0214) = eax;

loc_00115661: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00115670
 * Original: 0x00115670 - 0x00115680 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115670(void)
{

loc_00115670: ;
    eax = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x7D6878;
    esp += 4; return; /* ret */

}

/**
 * sub_00115690
 * Original: 0x00115690 - 0x00115697 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115690(void)
{

loc_00115690: ;
    MEM32(ecx) = 0x7CC298;
    esp += 4; return; /* ret */

}

/**
 * sub_001156A0
 * Original: 0x001156A0 - 0x001156B0 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001156A0(void)
{

loc_001156A0: ;
    eax = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x7D688C;
    esp += 4; return; /* ret */

}

/**
 * sub_001156C0
 * Original: 0x001156C0 - 0x001156C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001156C0(void)
{

loc_001156C0: ;
    MEM32(ecx) = 0x7CC298;
    esp += 4; return; /* ret */

}

/**
 * sub_001156D0
 * Original: 0x001156D0 - 0x001156E0 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001156D0(void)
{

loc_001156D0: ;
    eax = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x7D68A0;
    esp += 4; return; /* ret */

}

/**
 * sub_001156F0
 * Original: 0x001156F0 - 0x001156F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001156F0(void)
{

loc_001156F0: ;
    MEM32(ecx) = 0x7CC298;
    esp += 4; return; /* ret */

}

/**
 * sub_00115700
 * Original: 0x00115700 - 0x00115710 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115700(void)
{

loc_00115700: ;
    eax = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x7D68B4;
    esp += 4; return; /* ret */

}

/**
 * sub_00115720
 * Original: 0x00115720 - 0x00115727 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115720(void)
{

loc_00115720: ;
    MEM32(ecx) = 0x7CC298;
    esp += 4; return; /* ret */

}

/**
 * sub_00115730
 * Original: 0x00115730 - 0x00115740 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115730(void)
{

loc_00115730: ;
    eax = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x7D68C8;
    esp += 4; return; /* ret */

}

/**
 * sub_00115750
 * Original: 0x00115750 - 0x00115757 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115750(void)
{

loc_00115750: ;
    MEM32(ecx) = 0x7CC298;
    esp += 4; return; /* ret */

}

/**
 * sub_00115760
 * Original: 0x00115760 - 0x0011577F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115760: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7CC298;
    if (TEST_Z(_fa, _fb)) goto loc_00115779; /* je: equal / zero */

loc_00115770: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115776u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00115776: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115779: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00115790
 * Original: 0x00115790 - 0x001157AF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115790: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7CC298;
    if (TEST_Z(_fa, _fb)) goto loc_001157A9; /* je: equal / zero */

loc_001157A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001157A6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001157A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001157A9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001157C0
 * Original: 0x001157C0 - 0x001157DF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001157C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001157C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7CC298;
    if (TEST_Z(_fa, _fb)) goto loc_001157D9; /* je: equal / zero */

loc_001157D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001157D6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001157D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001157D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001157F0
 * Original: 0x001157F0 - 0x0011580F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001157F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001157F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7CC298;
    if (TEST_Z(_fa, _fb)) goto loc_00115809; /* je: equal / zero */

loc_00115800: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115806u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00115806: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115809: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00115820
 * Original: 0x00115820 - 0x0011583F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115820: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7CC298;
    if (TEST_Z(_fa, _fb)) goto loc_00115839; /* je: equal / zero */

loc_00115830: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115836u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00115836: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115839: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00115850
 * Original: 0x00115850 - 0x00115949 (249 bytes, 74 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00115850: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x424BC7A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x424BC7A (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001158C1; /* ja: above (unsigned >) */

loc_0011585E: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001158AF; /* je: equal / zero */

loc_00115860: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x424A85C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x424A85C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011589D; /* je: equal / zero */

loc_00115867: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x424B973) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x424B973 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011588B; /* je: equal / zero */

loc_0011586E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x424BA07) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x424BA07 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115945; /* jne: not equal / not zero */

loc_00115879: ;
    eax = MEM32(esi + 4);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    ecx = 0x8F0CF0;
    g_seh_ebp = ebp; sub_00034F82(); return; /* tail jmp 0x00034F82 */

loc_0011588B: ;
    ecx = MEM32(esi + 4);
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    ecx = 0x8F0CF0;
    g_seh_ebp = ebp; sub_000223A0(); return; /* tail jmp 0x000223A0 */

loc_0011589D: ;
    edx = MEM32(esi + 4);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    ecx = 0x8F0CF0;
    g_seh_ebp = ebp; sub_00012C52(); return; /* tail jmp 0x00012C52 */

loc_001158AF: ;
    eax = MEM32(esi + 4);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    ecx = 0x8F0CF0;
    g_seh_ebp = ebp; sub_0002F938(); return; /* tail jmp 0x0002F938 */

loc_001158C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x878FBAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x878FBAF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115909; /* je: equal / zero */

loc_001158C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89817A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x89817A8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001158F0; /* je: equal / zero */

loc_001158CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC78FF4B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC78FF4B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115945; /* jne: not equal / not zero */

loc_001158D6: ;
    _fb = (uint32_t)(0xFFFFFE20u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFE20u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0x001158ECu); RECOMP_ABI_CALL(0x000174DCu, sub_000174DC); /* call 0x000174DC */

loc_001158EC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001158F0: ;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(0xFFFFFE20u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFE20u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x8F0CF0;
    PUSH32(esp, 0x00115905u); RECOMP_ABI_CALL(0x0002EE43u, sub_0002EE43); /* call 0x0002EE43 */

loc_00115905: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00115909: ;
    PUSH32(esp, edi);
    edi = ecx + -480;
    ecx = edi;
    PUSH32(esp, 0x00115917u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00115917: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115944; /* je: equal / zero */

loc_0011591B: ;
    eax = MEM32(0x8F0214);
    esi = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011593F; /* jne: not equal / not zero */

loc_00115929: ;
    eax = 0x8F0200;
    MEM32(0x8F0200) = ecx;
    MEM32(0x8F0204) = ecx;
    MEM32(0x8F0214) = eax;

loc_0011593F: ;
    MEM32(eax) = edi;
    MEM32(eax + 4) = esi;

loc_00115944: ;
    POP32(esp, edi);

loc_00115945: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00115990
 * Original: 0x00115990 - 0x001159A5 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115990(void)
{

loc_00115990: ;
    eax = 0x7CC298;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001159B0
 * Original: 0x001159B0 - 0x001159C6 (22 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001159B0(void)
{

loc_001159B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001159C0u); RECOMP_ABI_CALL(0x0001FC6Du, sub_0001FC6D); /* call 0x0001FC6D */

loc_001159C0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001159D0
 * Original: 0x001159D0 - 0x00115A46 (118 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001159D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001159D0: ;
    edx = MEM32(ecx + 0xF0);
    SET_LO8(edx, MEM8(edx + 0x51));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    eax = 6;
    if (CMP_EQ(_fa, _fb)) goto loc_001159E8; /* je: equal / zero */

loc_001159E3: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115A24; /* jne: not equal / not zero */

loc_001159E8: ;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    ecx = MEM32(edx + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115A00; /* jne: not equal / not zero */

loc_001159FA: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_00115A00: ;
    ecx = MEM32(edx + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115A0D; /* jne: not equal / not zero */

loc_00115A07: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_00115A0D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x58;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115A12: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115A21; /* je: equal / zero */

loc_00115A17: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115A12; /* jl: less (signed <) */

loc_00115A20: ;
    esp += 4; return; /* ret */

loc_00115A21: ;
    eax = ecx;
    esp += 4; return; /* ret */

loc_00115A24: ;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    ecx = MEM32(ecx * 4 + 0x8F00F8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115A34: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115A43; /* je: equal / zero */

loc_00115A39: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115A34; /* jl: less (signed <) */

loc_00115A42: ;
    esp += 4; return; /* ret */

loc_00115A43: ;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00115A70
 * Original: 0x00115A70 - 0x00115A8A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115A70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00115A79u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00115A79: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115A87; /* je: equal / zero */

loc_00115A80: ;
    MEM32(eax) = 0x7CF464;
    esp += 4; return; /* ret */

loc_00115A87: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115A90
 * Original: 0x00115A90 - 0x00115CB6 (550 bytes, 150 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115A90(void)
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

loc_00115A90: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(eax * 4 + 0x8F0040);
    eax = MEM32(ecx + 0x138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00115ABE; /* jle: less or equal (signed <=) */

loc_00115AB6: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_00115ABE: ;
    ecx = esi;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00115ACBu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00115ACB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115B23; /* je: equal / zero */

loc_00115ACF: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00115B23; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x34)) */

loc_00115ADE: ;
    ecx = esi;
    PUSH32(esp, 0x00115AE5u); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_00115AE5: ;
    fp_push(MEMF(0x7AF57C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00115B16; /* ja: above (unsigned >) */

loc_00115AF3: ;
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00115B08; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00115B03: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00115B0D;

loc_00115B08: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_00115B0D: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7D605C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00115B23; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7D605C)) */

loc_00115B16: ;
    _fa = (uint32_t)(MEM32(0x8EFCBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFCBC), 0x1E (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00115CA1; /* jle: less or equal (signed <=) */

loc_00115B23: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00115B33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115B30u); } /* indirect call */
    }

loc_00115B33: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115B40u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00115B40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115B5B; /* jl: less (signed <) */

loc_00115B47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00115B51; /* jle: less or equal (signed <=) */

loc_00115B4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115B5B; /* jne: not equal / not zero */

loc_00115B51: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    goto loc_00115B61;

loc_00115B5B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */

loc_00115B61: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA820); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00115CA1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA820)) */

loc_00115B6E: ;
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esi);
    MEM32(esp + 0x1C) = ecx;
    ecx = esi;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00115B9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115B9Au); } /* indirect call */
    }

loc_00115B9D: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 8) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    MEM32(esp + 0xC) = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x8F0044;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00115BD4u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00115BD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115CA1; /* je: equal / zero */

loc_00115BDC: ;
    /* nop */

loc_00115BE0: ;
    ecx = MEM32(eax + 0x20);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x28) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEM32(esp + 0x24) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00115C16; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00115C11: ;
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00115C20; /* ja: above (unsigned >) (xmm6.f[0] vs xmm1.f[0]) */

loc_00115C16: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00115C6E; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_00115C1B: ;
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00115C6E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm6.f[0]) */

loc_00115C20: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x7B70AC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm6.f[0] = xmm6.f[0] / xmm4.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm6.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00115C6E; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00115C65: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00115C98; /* ja: above (unsigned >) (xmm2.f[0] vs xmm3.f[0]) */

loc_00115C6E: ;
    PUSH32(esp, 1);
    ecx = eax + 0x200;
    PUSH32(esp, 0x00115C7Bu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00115C7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115BE0; /* jne: not equal / not zero */

loc_00115C83: ;
    eax = MEM32(esp + 0x30);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00115C98: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00115CA1: ;
    eax = MEM32(esp + 0x30);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00115D40
 * Original: 0x00115D40 - 0x00115D5A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115D40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00115D49u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00115D49: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115D57; /* je: equal / zero */

loc_00115D50: ;
    MEM32(eax) = 0x7D6834;
    esp += 4; return; /* ret */

loc_00115D57: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115D60
 * Original: 0x00115D60 - 0x00115E94 (308 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00115D60: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8F010C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x3C);
    esi = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00115D75u); RECOMP_ABI_CALL(0x000309B4u, sub_000309B4); /* call 0x000309B4 */

loc_00115D75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115D83; /* je: equal / zero */

loc_00115D79: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00115D81u); RECOMP_ABI_CALL(0x00027DD7u, sub_00027DD7); /* call 0x00027DD7 */

loc_00115D81: ;
    edi = eax;

loc_00115D83: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115E41; /* je: equal / zero */

loc_00115D8B: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00115D96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115D93u); } /* indirect call */
    }

loc_00115D96: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115D9E; /* je: equal / zero */

loc_00115D9A: ;
    SET_LO8(ebx, 1);
    goto loc_00115E18;

loc_00115D9E: ;
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115DABu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00115DAB: ;
    ecx = MEM32(eax + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115DC5; /* je: equal / zero */

loc_00115DB5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00115DBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115DB7u); } /* indirect call */
    }

loc_00115DBA: ;
    ebp = eax;
    PUSH32(esp, 0x00115DC1u); RECOMP_ABI_CALL(0x00013E6Du, sub_00013E6D); /* call 0x00013E6D */

loc_00115DC1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115E17; /* jne: not equal / not zero */

loc_00115DC5: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD3D4)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00115DD8u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00115DD8: ;
    ecx = eax;
    PUSH32(esp, 0x00115DDFu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_00115DDF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00115DF1; /* jne: not equal / not zero */

loc_00115DEB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_00115DF1: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    edx = MEM32(0x895AB0);
    ebp = MEM32(edx);
    ecx = eax;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00115E17; /* jge: greater or equal (signed >=) */

loc_00115E15: ;
    SET_LO8(ebx, 1);

loc_00115E17: ;
    POP32(esp, ebp);

loc_00115E18: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00115E26; /* jge: greater or equal (signed >=) */

loc_00115E22: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115E36; /* je: equal / zero */

loc_00115E26: ;
    MEM32(esi + 0x3F4) = edi;
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00115E34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115E32u); } /* indirect call */
    }

loc_00115E34: ;
    goto loc_00115E40;

loc_00115E36: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00115E40u); RECOMP_ABI_CALL(0x0001C5EFu, sub_0001C5EF); /* call 0x0001C5EF */

loc_00115E40: ;
    POP32(esp, ebx);

loc_00115E41: ;
    ecx = esi;
    PUSH32(esp, 0x00115E48u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00115E48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115E86; /* je: equal / zero */

loc_00115E4C: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00115E86; /* jge: greater or equal (signed >=) */

loc_00115E56: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115E5Cu); RECOMP_ABI_CALL(0x00019B97u, sub_00019B97); /* call 0x00019B97 */

loc_00115E5C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115E90; /* je: equal / zero */

loc_00115E63: ;
    ecx = MEM32(0x8F010C);
    ecx = MEM32(ecx + 0x48);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115E72u); RECOMP_ABI_CALL(0x00027DD7u, sub_00027DD7); /* call 0x00027DD7 */

loc_00115E72: ;
    MEM32(esi + 0x3F8) = eax;
    eax = MEM32(eax + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00115E82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115E80u); } /* indirect call */
    }

loc_00115E82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00115E86: ;
    MEM32(esi + 0x3F8) = 0;

loc_00115E90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00115EF0
 * Original: 0x00115EF0 - 0x00115F63 (115 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115EF0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x14) = 0x7D6878;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = 0x7D688C;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = 0x7D68A0;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = 0x7D68B4;
    MEM32(esi + 0x38) = eax;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x34) = 0x7D68C8;
    MEM32(esi + 0x3C) = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x8AC088 (32-bit) */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esi + 8) = 2;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00115F5D; /* je: equal / zero */

loc_00115F51: ;
    MEM32(esi + 4) = 0x8AC088;
    PUSH32(esp, 0x00115F5Du); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_00115F5D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00115F80
 * Original: 0x00115F80 - 0x001160A9 (297 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00115F80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00115F8Eu); RECOMP_ABI_CALL(0x000155D3u, sub_000155D3); /* call 0x000155D3 */

loc_00115F8E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x7D68E0;
    MEM32(esi + 0x1E0) = 0x7D68DC;
    MEMF(esi + 0x3E8) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebx);
    MEMF(esi + 0x404) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x40);
    MEM32(esi + 0x28) = ebx;
    PUSH32(esp, 0x00115FBEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00115FBE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115FCF; /* je: equal / zero */

loc_00115FC5: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00115FCDu); RECOMP_ABI_CALL(0x00026013u, sub_00026013); /* call 0x00026013 */

loc_00115FCD: ;
    goto loc_00115FD1;

loc_00115FCF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00115FD1: ;
    xmm0 = XMM_SCALAR(MEMF(0x8AD928)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esi + 0x3D8) = eax;
    MEM32(esi + 0x3DC) = ebx;
    MEM32(esi + 0x3E0) = ebx;
    MEM32(esi + 0x3E4) = ebx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00115FFE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00115FF9: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0011600E;

loc_00115FFE: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0011600E; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0011600A: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_0011600E: ;
    SET_LO8(ecx, MEM8(0x8F0218));
    MEMF(esi + 0x3E8) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x3EC) = 6;
    MEM32(esi + 0x3F0) = 7;
    MEM8(esi + 0x400) = LO8(ebx);
    MEM32(esi + 0x3F4) = ebx;
    MEM32(esi + 0x3F8) = ebx;
    MEM8(esi + 0x408) = LO8(ebx);
    MEM32(esi + 0x410) = ebx;
    MEM32(esi + 0x414) = ebx;
    MEM32(esi + 0x418) = ebx;
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(esi + 0x3D0) = ebx;
    MEM32(esi + 0x3D4) = ebx;
    MEM32(esi + 0x40C) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0011608B; /* jne: not equal / not zero */

loc_00116075: ;
    MEM32(0x8F0218) = MEM32(0x8F0218) | eax;
    _fa = (uint32_t)(MEM32(0x8F0218)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x8AD922) = 0x408;
    MEM8(0x8AD924) = 4;

loc_0011608B: ;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8AD920);
    PUSH32(esp, 0x0011609Cu); RECOMP_ABI_CALL(0x0001E8E0u, sub_0001E8E0); /* call 0x0001E8E0 */

loc_0011609C: ;
    MEM32(esi + 0x3FC) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00116100
 * Original: 0x00116100 - 0x00116105 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00116100: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x44)); return; /* indirect tail jmp */

}

/**
 * sub_00116110
 * Original: 0x00116110 - 0x00116138 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116110: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    POP32(esp, esi);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    eax = MEM32(edx + eax + 0x8F5C10);
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00116150
 * Original: 0x00116150 - 0x00116179 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116150: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    POP32(esp, esi);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    eax = MEM32(edx + eax + 0x8F5C10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00116190
 * Original: 0x00116190 - 0x001161BD (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116190: ;
    eax = 0x7CC298;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x14) = eax;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001161B7; /* je: equal / zero */

loc_001161AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001161B4u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001161B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001161B7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001161D0
 * Original: 0x001161D0 - 0x00116256 (134 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001161D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001161D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x240);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x7D68E0;
    MEM32(esi + 0x1E0) = 0x7D68DC;
    if (CMP_EQ(_fa, _fb)) goto loc_001161F3; /* je: equal / zero */

loc_001161ED: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001161F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001161F1u); } /* indirect call */
    }

loc_001161F3: ;
    eax = MEM32(esi + 0x3FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116213; /* je: equal / zero */

loc_001161FD: ;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00116209u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_00116209: ;
    MEM32(esi + 0x3FC) = 0;

loc_00116213: ;
    eax = MEM32(esi + 0x3D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x3DC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00116244; /* je: equal / zero */

loc_00116227: ;
    ecx = 0x7CC298;
    PUSH32(esp, eax);
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0x00116241u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00116241: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00116244: ;
    MEM32(esi + 0x3D8) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0003413B(); return; /* tail jmp 0x0003413B */

}

/**
 * sub_00116280
 * Original: 0x00116280 - 0x0011629E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116280: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00116288u); RECOMP_ABI_CALL(0x0002740Eu, sub_0002740E); /* call 0x0002740E */

loc_00116288: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00116298; /* je: equal / zero */

loc_0011628F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116295u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00116295: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00116298: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001162B0
 * Original: 0x001162B0 - 0x001162CE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001162B0(void)
{

loc_001162B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x32F9D);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D64F4;
    PUSH32(esp, 0x001162CCu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_001162CC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001162E0
 * Original: 0x001162E0 - 0x001162FE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001162E0(void)
{

loc_001162E0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2FF00);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D650C;
    PUSH32(esp, 0x001162FCu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_001162FC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116310
 * Original: 0x00116310 - 0x0011632E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116310(void)
{

loc_00116310: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x32E44);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D6538;
    PUSH32(esp, 0x0011632Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_0011632C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116340
 * Original: 0x00116340 - 0x0011635E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116340(void)
{

loc_00116340: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2DDDB);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D65A8;
    PUSH32(esp, 0x0011635Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_0011635C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116370
 * Original: 0x00116370 - 0x0011638E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116370(void)
{

loc_00116370: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x28E53);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D65E4;
    PUSH32(esp, 0x0011638Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_0011638C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001163A0
 * Original: 0x001163A0 - 0x001163BE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001163A0(void)
{

loc_001163A0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2659A);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D6684;
    PUSH32(esp, 0x001163BCu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_001163BC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001163D0
 * Original: 0x001163D0 - 0x001163EE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001163D0(void)
{

loc_001163D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x1AB69);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D66D8;
    PUSH32(esp, 0x001163ECu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_001163EC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116400
 * Original: 0x00116400 - 0x0011641E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116400(void)
{

loc_00116400: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2037A);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D66F4;
    PUSH32(esp, 0x0011641Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_0011641C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116430
 * Original: 0x00116430 - 0x0011644E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116430(void)
{

loc_00116430: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2885E);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D6724;
    PUSH32(esp, 0x0011644Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_0011644C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116460
 * Original: 0x00116460 - 0x0011647E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116460(void)
{

loc_00116460: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x3622E);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D6740;
    PUSH32(esp, 0x0011647Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_0011647C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116490
 * Original: 0x00116490 - 0x001164AE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116490(void)
{

loc_00116490: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x12284);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D675C;
    PUSH32(esp, 0x001164ACu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_001164AC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001164C0
 * Original: 0x001164C0 - 0x001164DE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001164C0(void)
{

loc_001164C0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x289E9);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D6780;
    PUSH32(esp, 0x001164DCu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_001164DC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001164F0
 * Original: 0x001164F0 - 0x0011650E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001164F0(void)
{

loc_001164F0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x324E4);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D67A8;
    PUSH32(esp, 0x0011650Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_0011650C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116520
 * Original: 0x00116520 - 0x0011653E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116520(void)
{

loc_00116520: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2BB76);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D67C4;
    PUSH32(esp, 0x0011653Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_0011653C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116550
 * Original: 0x00116550 - 0x0011656E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116550(void)
{

loc_00116550: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x3540F);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D67D4;
    PUSH32(esp, 0x0011656Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_0011656C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116580
 * Original: 0x00116580 - 0x0011659E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116580(void)
{

loc_00116580: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x27F21);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7D6804;
    PUSH32(esp, 0x0011659Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_0011659C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001165B0
 * Original: 0x001165B0 - 0x001165B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001165B0(void)
{

loc_001165B0: ;
    eax = ecx;
    MEM32(eax) = 0x7D6DFC;
    esp += 4; return; /* ret */

}

/**
 * sub_001165C0
 * Original: 0x001165C0 - 0x001165C3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001165C0(void)
{

loc_001165C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001165D0
 * Original: 0x001165D0 - 0x001165DD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001165D0(void)
{

loc_001165D0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6E0C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001165E0
 * Original: 0x001165E0 - 0x00116604 (36 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001165E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001165E0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x1E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_001165FD; /* jne: not equal / not zero */

loc_001165FA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_001165FD: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00116610
 * Original: 0x00116610 - 0x00116619 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116610(void)
{

loc_00116610: ;
    eax = ecx;
    MEM32(eax) = 0x7D6E1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00116620
 * Original: 0x00116620 - 0x00116623 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116620(void)
{

loc_00116620: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00116630
 * Original: 0x00116630 - 0x0011663D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116630(void)
{

loc_00116630: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6E2C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00116640
 * Original: 0x00116640 - 0x00116649 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116640(void)
{

loc_00116640: ;
    eax = ecx;
    MEM32(eax) = 0x7D6E40;
    esp += 4; return; /* ret */

}

/**
 * sub_00116650
 * Original: 0x00116650 - 0x00116653 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116650(void)
{

loc_00116650: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00116660
 * Original: 0x00116660 - 0x0011666D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116660(void)
{

loc_00116660: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6E50;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00116670
 * Original: 0x00116670 - 0x00116679 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116670(void)
{

loc_00116670: ;
    eax = ecx;
    MEM32(eax) = 0x7D6E64;
    esp += 4; return; /* ret */

}

/**
 * sub_00116680
 * Original: 0x00116680 - 0x00116683 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116680(void)
{

loc_00116680: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00116690
 * Original: 0x00116690 - 0x0011669D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116690(void)
{

loc_00116690: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6E74;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001166A0
 * Original: 0x001166A0 - 0x001166A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001166A0(void)
{

loc_001166A0: ;
    eax = ecx;
    MEM32(eax) = 0x7D6E88;
    esp += 4; return; /* ret */

}

/**
 * sub_001166B0
 * Original: 0x001166B0 - 0x001166B3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001166B0(void)
{

loc_001166B0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001166C0
 * Original: 0x001166C0 - 0x001166CD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001166C0(void)
{

loc_001166C0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6E98;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001166D0
 * Original: 0x001166D0 - 0x001166D9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001166D0(void)
{

loc_001166D0: ;
    eax = ecx;
    MEM32(eax) = 0x7D6EAC;
    esp += 4; return; /* ret */

}

/**
 * sub_001166E0
 * Original: 0x001166E0 - 0x001166E3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001166E0(void)
{

loc_001166E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001166F0
 * Original: 0x001166F0 - 0x001166FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001166F0(void)
{

loc_001166F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6EBC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00116700
 * Original: 0x00116700 - 0x00116709 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116700(void)
{

loc_00116700: ;
    eax = ecx;
    MEM32(eax) = 0x7D6ED0;
    esp += 4; return; /* ret */

}

/**
 * sub_00116710
 * Original: 0x00116710 - 0x00116713 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116710(void)
{

loc_00116710: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00116720
 * Original: 0x00116720 - 0x0011672D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116720(void)
{

loc_00116720: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6EE0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00116730
 * Original: 0x00116730 - 0x00116739 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116730(void)
{

loc_00116730: ;
    eax = ecx;
    MEM32(eax) = 0x7D6EF4;
    esp += 4; return; /* ret */

}

/**
 * sub_00116740
 * Original: 0x00116740 - 0x00116743 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116740(void)
{

loc_00116740: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00116750
 * Original: 0x00116750 - 0x0011675D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116750(void)
{

loc_00116750: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6F04;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00116760
 * Original: 0x00116760 - 0x00116769 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116760(void)
{

loc_00116760: ;
    eax = ecx;
    MEM32(eax) = 0x7D6F18;
    esp += 4; return; /* ret */

}

/**
 * sub_00116770
 * Original: 0x00116770 - 0x00116773 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116770(void)
{

loc_00116770: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00116780
 * Original: 0x00116780 - 0x0011678D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116780(void)
{

loc_00116780: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D6F28;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00116790
 * Original: 0x00116790 - 0x00116799 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116790(void)
{

loc_00116790: ;
    eax = ecx;
    MEM32(eax) = 0x7D6F3C;
    esp += 4; return; /* ret */

}
