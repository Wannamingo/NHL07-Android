/**
 * nhl_07_recomp - Recompiled code chunk 92
 * Functions: 250 (0x000D1110 - 0x000D7030)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000D1110
 * Original: 0x000D1110 - 0x000D112A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1110: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1119u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1119: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1127; /* je: equal / zero */

loc_000D1120: ;
    MEM32(eax) = 0x7C7190;
    esp += 4; return; /* ret */

loc_000D1127: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1130
 * Original: 0x000D1130 - 0x000D11E3 (179 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1130(void)
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

loc_000D1130: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D113Bu); RECOMP_ABI_CALL(0x00023E2Bu, sub_00023E2B); /* call 0x00023E2B */

loc_000D113B: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1153; /* jne: not equal / not zero */

loc_000D1144: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_000D1153: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x8F00FC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x000D116Eu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000D116E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D11CE; /* je: equal / zero */

loc_000D1174: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D117Bu); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_000D117B: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7B1DA0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D11B7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_000D119B: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    ecx = MEM32(edi + 0x20);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_000D11B7: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(edx * 4 + 0x8F00F8);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D11CCu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000D11CC: ;
    goto loc_000D1174;

loc_000D11CE: ;
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    POP32(esp, esi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D1210
 * Original: 0x000D1210 - 0x000D122A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1210: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1219u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1219: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1227; /* je: equal / zero */

loc_000D1220: ;
    MEM32(eax) = 0x7C71BC;
    esp += 4; return; /* ret */

loc_000D1227: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1230
 * Original: 0x000D1230 - 0x000D124A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1230: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1239u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1239: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1247; /* je: equal / zero */

loc_000D1240: ;
    MEM32(eax) = 0x7C71EC;
    esp += 4; return; /* ret */

loc_000D1247: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1250
 * Original: 0x000D1250 - 0x000D126A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1250: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1259u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1259: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1267; /* je: equal / zero */

loc_000D1260: ;
    MEM32(eax) = 0x7C7210;
    esp += 4; return; /* ret */

loc_000D1267: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1270
 * Original: 0x000D1270 - 0x000D128A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1270: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1279u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1279: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1287; /* je: equal / zero */

loc_000D1280: ;
    MEM32(eax) = 0x7C7240;
    esp += 4; return; /* ret */

loc_000D1287: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1290
 * Original: 0x000D1290 - 0x000D12AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1290: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1299u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1299: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D12A7; /* je: equal / zero */

loc_000D12A0: ;
    MEM32(eax) = 0x7C726C;
    esp += 4; return; /* ret */

loc_000D12A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D12B0
 * Original: 0x000D12B0 - 0x000D12CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D12B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D12B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D12B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D12B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D12C7; /* je: equal / zero */

loc_000D12C0: ;
    MEM32(eax) = 0x7C7294;
    esp += 4; return; /* ret */

loc_000D12C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D12D0
 * Original: 0x000D12D0 - 0x000D12EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D12D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D12D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D12D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D12D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D12E7; /* je: equal / zero */

loc_000D12E0: ;
    MEM32(eax) = 0x7C72BC;
    esp += 4; return; /* ret */

loc_000D12E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D12F0
 * Original: 0x000D12F0 - 0x000D130A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D12F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D12F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D12F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D12F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1307; /* je: equal / zero */

loc_000D1300: ;
    MEM32(eax) = 0x7C72E0;
    esp += 4; return; /* ret */

loc_000D1307: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1310
 * Original: 0x000D1310 - 0x000D132A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1310: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1319u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1319: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1327; /* je: equal / zero */

loc_000D1320: ;
    MEM32(eax) = 0x7C7310;
    esp += 4; return; /* ret */

loc_000D1327: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1330
 * Original: 0x000D1330 - 0x000D134A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1330: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1339u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1339: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1347; /* je: equal / zero */

loc_000D1340: ;
    MEM32(eax) = 0x7C733C;
    esp += 4; return; /* ret */

loc_000D1347: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1350
 * Original: 0x000D1350 - 0x000D136A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1350: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1359u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1359: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1367; /* je: equal / zero */

loc_000D1360: ;
    MEM32(eax) = 0x7C7360;
    esp += 4; return; /* ret */

loc_000D1367: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1370
 * Original: 0x000D1370 - 0x000D138A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1370: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1379u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1379: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1387; /* je: equal / zero */

loc_000D1380: ;
    MEM32(eax) = 0x7C7380;
    esp += 4; return; /* ret */

loc_000D1387: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1390
 * Original: 0x000D1390 - 0x000D13AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1390: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1399u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1399: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D13A7; /* je: equal / zero */

loc_000D13A0: ;
    MEM32(eax) = 0x7C73A0;
    esp += 4; return; /* ret */

loc_000D13A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D13B0
 * Original: 0x000D13B0 - 0x000D13CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D13B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D13B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D13B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D13B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D13C7; /* je: equal / zero */

loc_000D13C0: ;
    MEM32(eax) = 0x7C73C8;
    esp += 4; return; /* ret */

loc_000D13C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D13D0
 * Original: 0x000D13D0 - 0x000D13EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D13D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D13D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D13D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D13D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D13E7; /* je: equal / zero */

loc_000D13E0: ;
    MEM32(eax) = 0x7C73F0;
    esp += 4; return; /* ret */

loc_000D13E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D13F0
 * Original: 0x000D13F0 - 0x000D140A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D13F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D13F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D13F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D13F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1407; /* je: equal / zero */

loc_000D1400: ;
    MEM32(eax) = 0x7C7420;
    esp += 4; return; /* ret */

loc_000D1407: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1410
 * Original: 0x000D1410 - 0x000D142A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1410: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1419u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1419: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1427; /* je: equal / zero */

loc_000D1420: ;
    MEM32(eax) = 0x7C744C;
    esp += 4; return; /* ret */

loc_000D1427: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1430
 * Original: 0x000D1430 - 0x000D144A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1430: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1439u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1439: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1447; /* je: equal / zero */

loc_000D1440: ;
    MEM32(eax) = 0x7C747C;
    esp += 4; return; /* ret */

loc_000D1447: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1450
 * Original: 0x000D1450 - 0x000D146A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1450: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1459u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1459: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1467; /* je: equal / zero */

loc_000D1460: ;
    MEM32(eax) = 0x7C74A4;
    esp += 4; return; /* ret */

loc_000D1467: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1470
 * Original: 0x000D1470 - 0x000D148A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1470: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1479u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1479: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1487; /* je: equal / zero */

loc_000D1480: ;
    MEM32(eax) = 0x7C74D4;
    esp += 4; return; /* ret */

loc_000D1487: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1490
 * Original: 0x000D1490 - 0x000D14AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1490: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1499u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1499: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D14A7; /* je: equal / zero */

loc_000D14A0: ;
    MEM32(eax) = 0x7C7508;
    esp += 4; return; /* ret */

loc_000D14A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D14B0
 * Original: 0x000D14B0 - 0x000D14CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D14B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D14B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D14B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D14B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D14C7; /* je: equal / zero */

loc_000D14C0: ;
    MEM32(eax) = 0x7C7538;
    esp += 4; return; /* ret */

loc_000D14C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D14D0
 * Original: 0x000D14D0 - 0x000D14EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D14D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D14D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D14D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D14D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D14E7; /* je: equal / zero */

loc_000D14E0: ;
    MEM32(eax) = 0x7C7568;
    esp += 4; return; /* ret */

loc_000D14E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D14F0
 * Original: 0x000D14F0 - 0x000D150A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D14F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D14F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D14F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D14F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1507; /* je: equal / zero */

loc_000D1500: ;
    MEM32(eax) = 0x7C759C;
    esp += 4; return; /* ret */

loc_000D1507: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1510
 * Original: 0x000D1510 - 0x000D152A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1510: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1519u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1519: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1527; /* je: equal / zero */

loc_000D1520: ;
    MEM32(eax) = 0x7C75C4;
    esp += 4; return; /* ret */

loc_000D1527: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1530
 * Original: 0x000D1530 - 0x000D154A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1530: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1539u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1539: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1547; /* je: equal / zero */

loc_000D1540: ;
    MEM32(eax) = 0x7C75F0;
    esp += 4; return; /* ret */

loc_000D1547: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1550
 * Original: 0x000D1550 - 0x000D156A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1550: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1559u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1559: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1567; /* je: equal / zero */

loc_000D1560: ;
    MEM32(eax) = 0x7C7618;
    esp += 4; return; /* ret */

loc_000D1567: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1570
 * Original: 0x000D1570 - 0x000D158A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1570: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1579u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1579: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1587; /* je: equal / zero */

loc_000D1580: ;
    MEM32(eax) = 0x7C7644;
    esp += 4; return; /* ret */

loc_000D1587: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1590
 * Original: 0x000D1590 - 0x000D15AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1590: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1599u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1599: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D15A7; /* je: equal / zero */

loc_000D15A0: ;
    MEM32(eax) = 0x7C7668;
    esp += 4; return; /* ret */

loc_000D15A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D15B0
 * Original: 0x000D15B0 - 0x000D15CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D15B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D15B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D15B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D15B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D15C7; /* je: equal / zero */

loc_000D15C0: ;
    MEM32(eax) = 0x7C768C;
    esp += 4; return; /* ret */

loc_000D15C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D15D0
 * Original: 0x000D15D0 - 0x000D15EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D15D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D15D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D15D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D15D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D15E7; /* je: equal / zero */

loc_000D15E0: ;
    MEM32(eax) = 0x7C76B4;
    esp += 4; return; /* ret */

loc_000D15E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D15F0
 * Original: 0x000D15F0 - 0x000D160A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D15F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D15F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D15F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D15F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1607; /* je: equal / zero */

loc_000D1600: ;
    MEM32(eax) = 0x7C76E0;
    esp += 4; return; /* ret */

loc_000D1607: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1610
 * Original: 0x000D1610 - 0x000D162A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1610: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1619u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1619: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1627; /* je: equal / zero */

loc_000D1620: ;
    MEM32(eax) = 0x7C7710;
    esp += 4; return; /* ret */

loc_000D1627: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1630
 * Original: 0x000D1630 - 0x000D164A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1630: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1639u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1639: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1647; /* je: equal / zero */

loc_000D1640: ;
    MEM32(eax) = 0x7C7748;
    esp += 4; return; /* ret */

loc_000D1647: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1650
 * Original: 0x000D1650 - 0x000D166A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1650: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1659u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1659: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1667; /* je: equal / zero */

loc_000D1660: ;
    MEM32(eax) = 0x7C7778;
    esp += 4; return; /* ret */

loc_000D1667: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1670
 * Original: 0x000D1670 - 0x000D168A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1670: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1679u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1679: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1687; /* je: equal / zero */

loc_000D1680: ;
    MEM32(eax) = 0x7C77B0;
    esp += 4; return; /* ret */

loc_000D1687: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1690
 * Original: 0x000D1690 - 0x000D16AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1690: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1699u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1699: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D16A7; /* je: equal / zero */

loc_000D16A0: ;
    MEM32(eax) = 0x7C77DC;
    esp += 4; return; /* ret */

loc_000D16A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D16B0
 * Original: 0x000D16B0 - 0x000D16CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D16B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D16B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D16B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D16B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D16C7; /* je: equal / zero */

loc_000D16C0: ;
    MEM32(eax) = 0x7C7810;
    esp += 4; return; /* ret */

loc_000D16C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D16D0
 * Original: 0x000D16D0 - 0x000D16EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D16D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D16D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D16D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D16D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D16E7; /* je: equal / zero */

loc_000D16E0: ;
    MEM32(eax) = 0x7C7848;
    esp += 4; return; /* ret */

loc_000D16E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D16F0
 * Original: 0x000D16F0 - 0x000D170A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D16F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D16F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D16F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D16F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1707; /* je: equal / zero */

loc_000D1700: ;
    MEM32(eax) = 0x7C7880;
    esp += 4; return; /* ret */

loc_000D1707: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1710
 * Original: 0x000D1710 - 0x000D172A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1710: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1719u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1719: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1727; /* je: equal / zero */

loc_000D1720: ;
    MEM32(eax) = 0x7C78B8;
    esp += 4; return; /* ret */

loc_000D1727: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1730
 * Original: 0x000D1730 - 0x000D174A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1730: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1739u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1739: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1747; /* je: equal / zero */

loc_000D1740: ;
    MEM32(eax) = 0x7C78E8;
    esp += 4; return; /* ret */

loc_000D1747: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1750
 * Original: 0x000D1750 - 0x000D176A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1750: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1759u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1759: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1767; /* je: equal / zero */

loc_000D1760: ;
    MEM32(eax) = 0x7C790C;
    esp += 4; return; /* ret */

loc_000D1767: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1770
 * Original: 0x000D1770 - 0x000D178A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1770: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1779u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1779: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1787; /* je: equal / zero */

loc_000D1780: ;
    MEM32(eax) = 0x7C793C;
    esp += 4; return; /* ret */

loc_000D1787: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1790
 * Original: 0x000D1790 - 0x000D17AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1790: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1799u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1799: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D17A7; /* je: equal / zero */

loc_000D17A0: ;
    MEM32(eax) = 0x7C7978;
    esp += 4; return; /* ret */

loc_000D17A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D17B0
 * Original: 0x000D17B0 - 0x000D17CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D17B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D17B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D17B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D17B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D17C7; /* je: equal / zero */

loc_000D17C0: ;
    MEM32(eax) = 0x7C79B0;
    esp += 4; return; /* ret */

loc_000D17C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D17D0
 * Original: 0x000D17D0 - 0x000D17D9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D17D0(void)
{

loc_000D17D0: ;
    eax = ecx;
    MEM32(eax) = 0x7C82D8;
    esp += 4; return; /* ret */

}

/**
 * sub_000D17E0
 * Original: 0x000D17E0 - 0x000D17E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D17E0(void)
{

loc_000D17E0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D17F0
 * Original: 0x000D17F0 - 0x000D17FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D17F0(void)
{

loc_000D17F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C82E8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1800
 * Original: 0x000D1800 - 0x000D1809 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1800(void)
{

loc_000D1800: ;
    eax = ecx;
    MEM32(eax) = 0x7C830C;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1810
 * Original: 0x000D1810 - 0x000D1813 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1810(void)
{

loc_000D1810: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1820
 * Original: 0x000D1820 - 0x000D182D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1820(void)
{

loc_000D1820: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C831C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1830
 * Original: 0x000D1830 - 0x000D1839 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1830(void)
{

loc_000D1830: ;
    eax = ecx;
    MEM32(eax) = 0x7C833C;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1840
 * Original: 0x000D1840 - 0x000D1843 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1840(void)
{

loc_000D1840: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1850
 * Original: 0x000D1850 - 0x000D185D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1850(void)
{

loc_000D1850: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C834C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1860
 * Original: 0x000D1860 - 0x000D1995 (309 bytes, 79 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1860(void)
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

loc_000D1860: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x20);
    xmm5 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm4 = xmm2; /* movaps */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D189C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D189A: ;
    goto loc_000D18A4;

loc_000D189C: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */

loc_000D18A4: ;
    xmm2.f[0] = xmm2.f[0] - MEMF(0x7C8364); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D18DC; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000D18B1: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D18BD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D18BB: ;
    goto loc_000D18C5;

loc_000D18BD: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_000D18C5: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA82C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D18DC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA82C)) */

loc_000D18CE: ;
    xmm4 = XMM_SCALAR(MEMF(0x7ABD68)); /* movss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */

loc_000D18DC: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm2 = xmm3; /* movaps */
    if ((_fca >= _fcb)) goto loc_000D18FC; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D18F9: ;
    xmm2 = xmm0; /* movaps */

loc_000D18FC: ;
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D1913; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_000D1910: ;
    xmm0 = xmm3; /* movaps */

loc_000D1913: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA7E0); /* mulss */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, esi);
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000D1935u); RECOMP_ABI_CALL(0x000189B8u, sub_000189B8); /* call 0x000189B8 */

loc_000D1935: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D1940u); RECOMP_ABI_CALL(0x0002335Eu, sub_0002335E); /* call 0x0002335E */

loc_000D1940: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AA7D8); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 8); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, esi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000D198Bu); RECOMP_ABI_CALL(0x000127BBu, sub_000127BB); /* call 0x000127BB */

loc_000D198B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D19F0
 * Original: 0x000D19F0 - 0x000D19F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D19F0(void)
{

loc_000D19F0: ;
    eax = ecx;
    MEM32(eax) = 0x7C8368;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1A00
 * Original: 0x000D1A00 - 0x000D1A03 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1A00(void)
{

loc_000D1A00: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1A10
 * Original: 0x000D1A10 - 0x000D1A1D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1A10(void)
{

loc_000D1A10: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8378;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1A20
 * Original: 0x000D1A20 - 0x000D1A29 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1A20(void)
{

loc_000D1A20: ;
    eax = ecx;
    MEM32(eax) = 0x7C8390;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1A30
 * Original: 0x000D1A30 - 0x000D1A33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1A30(void)
{

loc_000D1A30: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1A40
 * Original: 0x000D1A40 - 0x000D1A4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1A40(void)
{

loc_000D1A40: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C83A0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1A50
 * Original: 0x000D1A50 - 0x000D1A59 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1A50(void)
{

loc_000D1A50: ;
    eax = ecx;
    MEM32(eax) = 0x7C83C4;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1A60
 * Original: 0x000D1A60 - 0x000D1A63 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1A60(void)
{

loc_000D1A60: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1A70
 * Original: 0x000D1A70 - 0x000D1A7D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1A70(void)
{

loc_000D1A70: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C83D4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1A80
 * Original: 0x000D1A80 - 0x000D1A89 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1A80(void)
{

loc_000D1A80: ;
    eax = ecx;
    MEM32(eax) = 0x7C83F4;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1A90
 * Original: 0x000D1A90 - 0x000D1A93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1A90(void)
{

loc_000D1A90: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1AA0
 * Original: 0x000D1AA0 - 0x000D1AAD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1AA0(void)
{

loc_000D1AA0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8404;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1AB0
 * Original: 0x000D1AB0 - 0x000D1AC2 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1AB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D1ABCu); RECOMP_ABI_CALL(0x000167B2u, sub_000167B2); /* call 0x000167B2 */

loc_000D1ABC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1AD0
 * Original: 0x000D1AD0 - 0x000D1AD9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1AD0(void)
{

loc_000D1AD0: ;
    eax = ecx;
    MEM32(eax) = 0x7C8420;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1AE0
 * Original: 0x000D1AE0 - 0x000D1AE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1AE0(void)
{

loc_000D1AE0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1AF0
 * Original: 0x000D1AF0 - 0x000D1AFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1AF0(void)
{

loc_000D1AF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8430;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1B00
 * Original: 0x000D1B00 - 0x000D1B0E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1B00(void)
{

loc_000D1B00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D1B0Au); RECOMP_ABI_CALL(0x00027B52u, sub_00027B52); /* call 0x00027B52 */

loc_000D1B0A: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1B20
 * Original: 0x000D1B20 - 0x000D1B29 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1B20(void)
{

loc_000D1B20: ;
    eax = ecx;
    MEM32(eax) = 0x7C844C;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1B30
 * Original: 0x000D1B30 - 0x000D1B33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1B30(void)
{

loc_000D1B30: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1B40
 * Original: 0x000D1B40 - 0x000D1B4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1B40(void)
{

loc_000D1B40: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C845C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1B50
 * Original: 0x000D1B50 - 0x000D1BD1 (129 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D1B50: ;
    PUSH32(esp, 0x131);
    PUSH32(esp, 0x7C8484);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x000D1B61u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_000D1B61: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_GE(_fas, _fbs)) goto loc_000D1B79; /* jge: greater or equal (signed >=) */

loc_000D1B6D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D1B73u); RECOMP_ABI_CALL(0x00027B52u, sub_00027B52); /* call 0x00027B52 */

loc_000D1B73: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D1B79: ;
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7B047C); /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000D1BAA; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000D1BA2: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_000D1BAA: ;
    PUSH32(esp, 0x44B40000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0);
    PUSH32(esp, 0x45490000);
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D1BCBu); RECOMP_ABI_CALL(0x00020E51u, sub_00020E51); /* call 0x00020E51 */

loc_000D1BCB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1C00
 * Original: 0x000D1C00 - 0x000D1C09 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1C00(void)
{

loc_000D1C00: ;
    eax = ecx;
    MEM32(eax) = 0x7C84B8;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1C10
 * Original: 0x000D1C10 - 0x000D1C13 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1C10(void)
{

loc_000D1C10: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1C20
 * Original: 0x000D1C20 - 0x000D1C2D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1C20(void)
{

loc_000D1C20: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C84C8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1C30
 * Original: 0x000D1C30 - 0x000D1CAC (124 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1C30(void)
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

loc_000D1C30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    eax = MEM32(ecx + 0x20);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000D1C70; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000D1C68: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_000D1C70: ;
    eax = MEM32(0x8E8F84);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D1CA6u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D1CA6: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D1CD0
 * Original: 0x000D1CD0 - 0x000D1CD9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1CD0(void)
{

loc_000D1CD0: ;
    eax = ecx;
    MEM32(eax) = 0x7C84D8;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1CE0
 * Original: 0x000D1CE0 - 0x000D1CE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1CE0(void)
{

loc_000D1CE0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1CF0
 * Original: 0x000D1CF0 - 0x000D1CFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1CF0(void)
{

loc_000D1CF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C84E8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1D00
 * Original: 0x000D1D00 - 0x000D1D03 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1D00(void)
{

loc_000D1D00: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1D10
 * Original: 0x000D1D10 - 0x000D1D19 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1D10(void)
{

loc_000D1D10: ;
    eax = ecx;
    MEM32(eax) = 0x7C8504;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1D20
 * Original: 0x000D1D20 - 0x000D1D23 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1D20: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1D30
 * Original: 0x000D1D30 - 0x000D1D3D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1D30(void)
{

loc_000D1D30: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8514;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1D40
 * Original: 0x000D1D40 - 0x000D1D49 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1D40(void)
{

loc_000D1D40: ;
    eax = ecx;
    MEM32(eax) = 0x7C8530;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1D50
 * Original: 0x000D1D50 - 0x000D1D53 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1D50: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1D60
 * Original: 0x000D1D60 - 0x000D1D6D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1D60(void)
{

loc_000D1D60: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8540;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1D70
 * Original: 0x000D1D70 - 0x000D1D79 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1D70(void)
{

loc_000D1D70: ;
    eax = ecx;
    MEM32(eax) = 0x7C8564;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1D80
 * Original: 0x000D1D80 - 0x000D1D83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1D80: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1D90
 * Original: 0x000D1D90 - 0x000D1D9D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1D90(void)
{

loc_000D1D90: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8574;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1DA0
 * Original: 0x000D1DA0 - 0x000D1DA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1DA0(void)
{

loc_000D1DA0: ;
    eax = ecx;
    MEM32(eax) = 0x7C8598;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1DB0
 * Original: 0x000D1DB0 - 0x000D1DB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1DB0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1DC0
 * Original: 0x000D1DC0 - 0x000D1DCD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1DC0(void)
{

loc_000D1DC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C85A8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1DD0
 * Original: 0x000D1DD0 - 0x000D1DD9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1DD0(void)
{

loc_000D1DD0: ;
    eax = ecx;
    MEM32(eax) = 0x7C85CC;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1DE0
 * Original: 0x000D1DE0 - 0x000D1DE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1DE0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1DF0
 * Original: 0x000D1DF0 - 0x000D1DFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1DF0(void)
{

loc_000D1DF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C85DC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1E00
 * Original: 0x000D1E00 - 0x000D1E09 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1E00(void)
{

loc_000D1E00: ;
    eax = ecx;
    MEM32(eax) = 0x7C8600;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1E10
 * Original: 0x000D1E10 - 0x000D1E13 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1E10: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1E20
 * Original: 0x000D1E20 - 0x000D1E2D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1E20(void)
{

loc_000D1E20: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8610;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1E30
 * Original: 0x000D1E30 - 0x000D1E39 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1E30(void)
{

loc_000D1E30: ;
    eax = ecx;
    MEM32(eax) = 0x7C8630;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1E40
 * Original: 0x000D1E40 - 0x000D1E43 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1E40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1E40: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1E50
 * Original: 0x000D1E50 - 0x000D1E5D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1E50(void)
{

loc_000D1E50: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8640;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1E60
 * Original: 0x000D1E60 - 0x000D1E69 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1E60(void)
{

loc_000D1E60: ;
    eax = ecx;
    MEM32(eax) = 0x7C8660;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1E70
 * Original: 0x000D1E70 - 0x000D1E73 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1E70: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1E80
 * Original: 0x000D1E80 - 0x000D1E8D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1E80(void)
{

loc_000D1E80: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8670;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1E90
 * Original: 0x000D1E90 - 0x000D1E99 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1E90(void)
{

loc_000D1E90: ;
    eax = ecx;
    MEM32(eax) = 0x7C8694;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1EA0
 * Original: 0x000D1EA0 - 0x000D1EA3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1EA0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1EB0
 * Original: 0x000D1EB0 - 0x000D1EBD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1EB0(void)
{

loc_000D1EB0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C86A4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1EC0
 * Original: 0x000D1EC0 - 0x000D1EC9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1EC0(void)
{

loc_000D1EC0: ;
    eax = ecx;
    MEM32(eax) = 0x7C86CC;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1ED0
 * Original: 0x000D1ED0 - 0x000D1ED3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1ED0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1EE0
 * Original: 0x000D1EE0 - 0x000D1EED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1EE0(void)
{

loc_000D1EE0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C86DC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1EF0
 * Original: 0x000D1EF0 - 0x000D1EF9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1EF0(void)
{

loc_000D1EF0: ;
    eax = ecx;
    MEM32(eax) = 0x7C8704;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1F00
 * Original: 0x000D1F00 - 0x000D1F03 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1F00: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1F10
 * Original: 0x000D1F10 - 0x000D1F1D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1F10(void)
{

loc_000D1F10: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8714;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1F20
 * Original: 0x000D1F20 - 0x000D1F29 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1F20(void)
{

loc_000D1F20: ;
    eax = ecx;
    MEM32(eax) = 0x7C8740;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1F30
 * Original: 0x000D1F30 - 0x000D1F33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1F30: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1F40
 * Original: 0x000D1F40 - 0x000D1F4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1F40(void)
{

loc_000D1F40: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8750;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1F50
 * Original: 0x000D1F50 - 0x000D1F59 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1F50(void)
{

loc_000D1F50: ;
    eax = ecx;
    MEM32(eax) = 0x7C8778;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1F60
 * Original: 0x000D1F60 - 0x000D1F63 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1F60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1F60: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1F70
 * Original: 0x000D1F70 - 0x000D1F7D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1F70(void)
{

loc_000D1F70: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8788;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1F80
 * Original: 0x000D1F80 - 0x000D1F89 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1F80(void)
{

loc_000D1F80: ;
    eax = ecx;
    MEM32(eax) = 0x7C87B8;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1F90
 * Original: 0x000D1F90 - 0x000D1F93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1F90: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1FA0
 * Original: 0x000D1FA0 - 0x000D1FAD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1FA0(void)
{

loc_000D1FA0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C87C8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1FB0
 * Original: 0x000D1FB0 - 0x000D1FB9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1FB0(void)
{

loc_000D1FB0: ;
    eax = ecx;
    MEM32(eax) = 0x7C87F0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1FC0
 * Original: 0x000D1FC0 - 0x000D1FC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1FC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1FC0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1FD0
 * Original: 0x000D1FD0 - 0x000D1FDD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1FD0(void)
{

loc_000D1FD0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8800;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1FE0
 * Original: 0x000D1FE0 - 0x000D1FE9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1FE0(void)
{

loc_000D1FE0: ;
    eax = ecx;
    MEM32(eax) = 0x7C8830;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1FF0
 * Original: 0x000D1FF0 - 0x000D1FF3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1FF0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D2000
 * Original: 0x000D2000 - 0x000D200D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2000(void)
{

loc_000D2000: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8840;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2010
 * Original: 0x000D2010 - 0x000D2019 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2010(void)
{

loc_000D2010: ;
    eax = ecx;
    MEM32(eax) = 0x7C8870;
    esp += 4; return; /* ret */

}

/**
 * sub_000D2020
 * Original: 0x000D2020 - 0x000D2023 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2020: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D2030
 * Original: 0x000D2030 - 0x000D203D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2030(void)
{

loc_000D2030: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8880;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2040
 * Original: 0x000D2040 - 0x000D2049 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2040(void)
{

loc_000D2040: ;
    eax = ecx;
    MEM32(eax) = 0x7C88A0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D2050
 * Original: 0x000D2050 - 0x000D2053 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2050: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D2060
 * Original: 0x000D2060 - 0x000D206D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2060(void)
{

loc_000D2060: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C88B0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2070
 * Original: 0x000D2070 - 0x000D2079 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2070(void)
{

loc_000D2070: ;
    eax = ecx;
    MEM32(eax) = 0x7C88D0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D2078
 * Original: 0x000D2078 - 0x000D2079 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2078(void)
{

loc_000D2078: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D2080
 * Original: 0x000D2080 - 0x000D2083 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2080: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D2090
 * Original: 0x000D2090 - 0x000D209D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2090(void)
{

loc_000D2090: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C88E0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D20A0
 * Original: 0x000D20A0 - 0x000D20A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D20A0(void)
{

loc_000D20A0: ;
    eax = ecx;
    MEM32(eax) = 0x7C8910;
    esp += 4; return; /* ret */

}

/**
 * sub_000D20B0
 * Original: 0x000D20B0 - 0x000D20B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D20B0(void)
{

loc_000D20B0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D20C0
 * Original: 0x000D20C0 - 0x000D20CD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D20C0(void)
{

loc_000D20C0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C8920;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D20D0
 * Original: 0x000D20D0 - 0x000D211C (76 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D20D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D20D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2118; /* je: equal / zero */

loc_000D20DE: ;
    eax = MEM32(esi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2118; /* jne: not equal / not zero */

loc_000D20EC: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2118; /* jne: not equal / not zero */

loc_000D20F2: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D20FAu); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D20FA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2118; /* jne: not equal / not zero */

loc_000D2101: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2107u); RECOMP_ABI_CALL(0x00023E2Bu, sub_00023E2B); /* call 0x00023E2B */

loc_000D2107: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2118; /* je: equal / zero */

loc_000D210E: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2115u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D2115: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2118: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2130
 * Original: 0x000D2130 - 0x000D214A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D2130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2130: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D2139u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D2139: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2147; /* je: equal / zero */

loc_000D2140: ;
    MEM32(eax) = 0x7C82D8;
    esp += 4; return; /* ret */

loc_000D2147: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D2150
 * Original: 0x000D2150 - 0x000D21EF (159 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2150: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D21EB; /* je: equal / zero */

loc_000D2162: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D21EB; /* jne: not equal / not zero */

loc_000D2170: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D21EB; /* jne: not equal / not zero */

loc_000D2176: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D217Eu); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D217E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D21EB; /* jne: not equal / not zero */

loc_000D2185: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D218Cu); RECOMP_ABI_CALL(0x00023E2Bu, sub_00023E2B); /* call 0x00023E2B */

loc_000D218C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D21EA; /* je: equal / zero */

loc_000D2195: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D21A2u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D21A2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D21C7; /* ja: above (unsigned >) */

loc_000D21AA: ;
    edx = ZX8(MEM8(eax + 0xD21F8));
    { uint32_t _jt = MEM32(edx * 4 + 0xD21F0); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D21B8u) goto loc_000D21B8;
    if (_jt == 0x000D21C7u) goto loc_000D21C7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D21B8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D21BFu); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D21BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000D21C7: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D21E7u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D21E7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D21EA: ;
    POP32(esp, esi);

loc_000D21EB: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2250
 * Original: 0x000D2250 - 0x000D22B5 (101 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2250: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D22B1; /* je: equal / zero */

loc_000D225E: ;
    eax = MEM32(esi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D22B1; /* jne: not equal / not zero */

loc_000D226C: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D22B1; /* jne: not equal / not zero */

loc_000D2272: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D227Au); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D227A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D22B1; /* jne: not equal / not zero */

loc_000D2281: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2287u); RECOMP_ABI_CALL(0x00023E2Bu, sub_00023E2B); /* call 0x00023E2B */

loc_000D2287: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D22B1; /* je: equal / zero */

loc_000D228E: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(ecx + 0x38);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D22AEu); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D22AE: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D22B1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D22D0
 * Original: 0x000D22D0 - 0x000D22EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D22D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D22D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D22D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D22D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D22E7; /* je: equal / zero */

loc_000D22E0: ;
    MEM32(eax) = 0x7C833C;
    esp += 4; return; /* ret */

loc_000D22E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D22F0
 * Original: 0x000D22F0 - 0x000D230A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D22F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D22F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D22F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D22F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2307; /* je: equal / zero */

loc_000D2300: ;
    MEM32(eax) = 0x7C8368;
    esp += 4; return; /* ret */

loc_000D2307: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D2310
 * Original: 0x000D2310 - 0x000D23F3 (227 bytes, 75 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2310(void)
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

loc_000D2310: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D23EC; /* jne: not equal / not zero */

loc_000D232A: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D23EC; /* jne: not equal / not zero */

loc_000D2334: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000D233Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D2338u); } /* indirect call */
    }

loc_000D233B: ;
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esp + 8) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0xC) = ecx;
    ecx = esi;
    PUSH32(esp, 0x000D235Cu); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_000D235C: ;
    fp_push(MEMF(0x7C6A34)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000D2399; /* jbe: below or equal (unsigned <=) */

loc_000D236A: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D238Fu); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D238F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D2399: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D23A4u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D23A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000D23C5; /* jl: less (signed <) */

loc_000D23AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000D23B5; /* jle: less or equal (signed <=) */

loc_000D23B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D23C5; /* jne: not equal / not zero */

loc_000D23B5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D23BBu); RECOMP_ABI_CALL(0x00036800u, sub_00036800); /* call 0x00036800 */

loc_000D23BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D23C5: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D23E9u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D23E9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D23EC: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D2430
 * Original: 0x000D2430 - 0x000D244A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D2430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2430: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D2439u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D2439: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2447; /* je: equal / zero */

loc_000D2440: ;
    MEM32(eax) = 0x7C8390;
    esp += 4; return; /* ret */

loc_000D2447: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D2450
 * Original: 0x000D2450 - 0x000D2641 (497 bytes, 164 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2450(void)
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

loc_000D2450: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D25DB; /* jne: not equal / not zero */

loc_000D246A: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D25DB; /* jne: not equal / not zero */

loc_000D2474: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000D247Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D2478u); } /* indirect call */
    }

loc_000D247B: ;
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esp + 8) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0xC) = ecx;
    ecx = esi;
    PUSH32(esp, 0x000D249Cu); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_000D249C: ;
    fp_push(MEMF(0x7A99C0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000D2502; /* jbe: below or equal (unsigned <=) */

loc_000D24A8: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D24B3u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D24B3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000D24D4; /* jl: less (signed <) */

loc_000D24BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000D24C4; /* jle: less or equal (signed <=) */

loc_000D24BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D24D4; /* jne: not equal / not zero */

loc_000D24C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D24CAu); RECOMP_ABI_CALL(0x00036800u, sub_00036800); /* call 0x00036800 */

loc_000D24CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D24D4: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D24F8u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D24F8: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D2502: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D250Au); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D250A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D2612; /* jne: not equal / not zero */

loc_000D2515: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D251Cu); RECOMP_ABI_CALL(0x00023E2Bu, sub_00023E2B); /* call 0x00023E2B */

loc_000D251C: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D25E2; /* je: equal / zero */

loc_000D2529: ;
    ecx = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm2 = xmm3; /* movaps */
    if ((_fca >= _fcb)) goto loc_000D254F; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D254C: ;
    xmm2 = xmm0; /* movaps */

loc_000D254F: ;
    eax = MEM32(esi + 0x20);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D255F; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_000D255C: ;
    xmm0 = xmm3; /* movaps */

loc_000D255F: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D25E2; /* jp: parity */

loc_000D2568: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D2577; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D2572: ;
    xmm1 = xmm0; /* movaps */
    goto loc_000D257C;

loc_000D2577: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x38); /* subss */

loc_000D257C: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x7C7E70); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D25E2; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7C7E70)) */

loc_000D2585: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D258Fu); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D258F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000D25B7; /* ja: above (unsigned >) */

loc_000D2597: ;
    ecx = ZX8(MEM8(eax + 0xD264C));
    { uint32_t _jt = MEM32(ecx * 4 + 0xD2644); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D25A5u) goto loc_000D25A5;
    if (_jt == 0x000D25B7u) goto loc_000D25B7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D25A5: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D25ACu); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D25AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D25B7: ;
    eax = MEM32(edi + 0x20);
    edx = MEM32(eax + 0x38);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D25D7u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D25D7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_000D25DB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D25E2: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2607u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D2607: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D2612: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2637u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D2637: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D2700
 * Original: 0x000D2700 - 0x000D27E3 (227 bytes, 75 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2700(void)
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

loc_000D2700: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D27DC; /* jne: not equal / not zero */

loc_000D271A: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D27DC; /* jne: not equal / not zero */

loc_000D2724: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000D272Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D2728u); } /* indirect call */
    }

loc_000D272B: ;
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esp + 8) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0xC) = ecx;
    ecx = esi;
    PUSH32(esp, 0x000D274Cu); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_000D274C: ;
    fp_push(MEMF(0x7C6A34)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000D2789; /* jbe: below or equal (unsigned <=) */

loc_000D275A: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D277Fu); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D277F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D2789: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2794u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D2794: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000D27B5; /* jl: less (signed <) */

loc_000D279B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000D27A5; /* jle: less or equal (signed <=) */

loc_000D27A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D27B5; /* jne: not equal / not zero */

loc_000D27A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D27ABu); RECOMP_ABI_CALL(0x00034A19u, sub_00034A19); /* call 0x00034A19 */

loc_000D27AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D27B5: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D27D9u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D27D9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D27DC: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D2820
 * Original: 0x000D2820 - 0x000D283A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D2820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2820: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D2829u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D2829: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2837; /* je: equal / zero */

loc_000D2830: ;
    MEM32(eax) = 0x7C83F4;
    esp += 4; return; /* ret */

loc_000D2837: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D2840
 * Original: 0x000D2840 - 0x000D285A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D2840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2840: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D2849u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D2849: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2857; /* je: equal / zero */

loc_000D2850: ;
    MEM32(eax) = 0x7C8420;
    esp += 4; return; /* ret */

loc_000D2857: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D2860
 * Original: 0x000D2860 - 0x000D287A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D2860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2860: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D2869u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D2869: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2877; /* je: equal / zero */

loc_000D2870: ;
    MEM32(eax) = 0x7C844C;
    esp += 4; return; /* ret */

loc_000D2877: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D2880
 * Original: 0x000D2880 - 0x000D289A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D2880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2880: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D2889u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D2889: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2897; /* je: equal / zero */

loc_000D2890: ;
    MEM32(eax) = 0x7C84B8;
    esp += 4; return; /* ret */

loc_000D2897: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D28A0
 * Original: 0x000D28A0 - 0x000D28BA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D28A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D28A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D28A9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D28A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D28B7; /* je: equal / zero */

loc_000D28B0: ;
    MEM32(eax) = 0x7C84D8;
    esp += 4; return; /* ret */

loc_000D28B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D28C0
 * Original: 0x000D28C0 - 0x000D28DA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D28C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D28C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D28C9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D28C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D28D7; /* je: equal / zero */

loc_000D28D0: ;
    MEM32(eax) = 0x7C8504;
    esp += 4; return; /* ret */

loc_000D28D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D28E0
 * Original: 0x000D28E0 - 0x000D2A77 (407 bytes, 117 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D28E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D28E0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = 0x8F00FC;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x000D2903u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000D2903: ;
    esi = eax;
    PUSH32(esp, 0x40C00000);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000D2916u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_000D2916: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000D2932u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D292Fu); } /* indirect call */
    }

loc_000D2932: ;
    ecx = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm6 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = xmm6; /* movaps */
    if ((_fca >= _fcb)) goto loc_000D2958; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D2955: ;
    xmm1 = xmm5; /* movaps */

loc_000D2958: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7B1DA0); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x10); /* addss */
    eax = MEM32(edi + 0x20);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D297E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D2979: ;
    xmm3 = xmm1; /* movaps */
    goto loc_000D2986;

loc_000D297E: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0x30); /* subss */

loc_000D2986: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D2996; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000D2991: ;
    xmm1 = xmm2; /* movaps */
    goto loc_000D299D;

loc_000D2996: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_000D299D: ;
    xmm4 = XMM_SCALAR(MEMF(0x7AA7DC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D29C8; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_000D29B3: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = xmm6; /* movaps */
    if ((_fca >= _fcb)) goto loc_000D29BE; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D29BB: ;
    xmm0 = xmm5; /* movaps */

loc_000D29BE: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8E931C); /* mulss */
    goto loc_000D2A41;

loc_000D29C8: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D29D4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D29CD: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    goto loc_000D29DC;

loc_000D29D4: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0x30); /* subss */

loc_000D29DC: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D29E6; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000D29E1: ;
    xmm1 = xmm2; /* movaps */
    goto loc_000D29ED;

loc_000D29E6: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_000D29ED: ;
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D2A47; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_000D29F6: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D2A05; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D2A00: ;
    xmm3 = xmm1; /* movaps */
    goto loc_000D2A0D;

loc_000D2A05: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0x30); /* subss */

loc_000D2A0D: ;
    xmm2.f[0] = xmm2.f[0] - MEMF(0x7ABD68); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D2A1F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000D2A1A: ;
    xmm1 = xmm2; /* movaps */
    goto loc_000D2A26;

loc_000D2A1F: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_000D2A26: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = xmm6; /* movaps */
    if ((_fca >= _fcb)) goto loc_000D2A39; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D2A36: ;
    xmm0 = xmm5; /* movaps */

loc_000D2A39: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7BA42C); /* mulss */

loc_000D2A41: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_000D2A47: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2A6Cu); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D2A6C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2AE0
 * Original: 0x000D2AE0 - 0x000D2AFA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D2AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2AE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D2AE9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D2AE9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2AF7; /* je: equal / zero */

loc_000D2AF0: ;
    MEM32(eax) = 0x7C8530;
    esp += 4; return; /* ret */

loc_000D2AF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D2B00
 * Original: 0x000D2B00 - 0x000D2BA1 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2B00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2B0Eu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D2B0E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2B9C; /* je: equal / zero */

loc_000D2B1B: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2B9C; /* je: equal / zero */

loc_000D2B24: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2B9C; /* jne: not equal / not zero */

loc_000D2B32: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2B9C; /* jne: not equal / not zero */

loc_000D2B38: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2B40u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D2B40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2B9C; /* jne: not equal / not zero */

loc_000D2B47: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2B54u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D2B54: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D2B79; /* ja: above (unsigned >) */

loc_000D2B5C: ;
    edx = ZX8(MEM8(eax + 0xD2BAC));
    { uint32_t _jt = MEM32(edx * 4 + 0xD2BA4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D2B6Au) goto loc_000D2B6A;
    if (_jt == 0x000D2B79u) goto loc_000D2B79;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D2B6A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2B71u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D2B71: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D2B79: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2B99u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D2B99: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2B9C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2C10
 * Original: 0x000D2C10 - 0x000D2CB1 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2C10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2C1Eu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D2C1E: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2CAC; /* je: equal / zero */

loc_000D2C2B: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2CAC; /* je: equal / zero */

loc_000D2C34: ;
    eax = MEM32(esi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2CAC; /* jne: not equal / not zero */

loc_000D2C42: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2CAC; /* jne: not equal / not zero */

loc_000D2C48: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2C50u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D2C50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2CAC; /* jne: not equal / not zero */

loc_000D2C57: ;
    ecx = MEM32(edi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2C64u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D2C64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D2C89; /* ja: above (unsigned >) */

loc_000D2C6C: ;
    edx = ZX8(MEM8(eax + 0xD2CBC));
    { uint32_t _jt = MEM32(edx * 4 + 0xD2CB4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D2C7Au) goto loc_000D2C7A;
    if (_jt == 0x000D2C89u) goto loc_000D2C89;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D2C7A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2C81u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D2C81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D2C89: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2CA9u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D2CA9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2CAC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2D20
 * Original: 0x000D2D20 - 0x000D2DC1 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2D20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2D2Eu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D2D2E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2DBC; /* je: equal / zero */

loc_000D2D3B: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2DBC; /* je: equal / zero */

loc_000D2D44: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2DBC; /* jne: not equal / not zero */

loc_000D2D52: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2DBC; /* jne: not equal / not zero */

loc_000D2D58: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2D60u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D2D60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2DBC; /* jne: not equal / not zero */

loc_000D2D67: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2D74u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D2D74: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D2D99; /* ja: above (unsigned >) */

loc_000D2D7C: ;
    edx = ZX8(MEM8(eax + 0xD2DCC));
    { uint32_t _jt = MEM32(edx * 4 + 0xD2DC4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D2D8Au) goto loc_000D2D8A;
    if (_jt == 0x000D2D99u) goto loc_000D2D99;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D2D8A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2D91u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D2D91: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D2D99: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2DB9u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D2DB9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2DBC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2E30
 * Original: 0x000D2E30 - 0x000D2ED1 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2E30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2E3Eu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D2E3E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2ECC; /* je: equal / zero */

loc_000D2E4B: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2ECC; /* je: equal / zero */

loc_000D2E54: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2ECC; /* jne: not equal / not zero */

loc_000D2E62: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2ECC; /* jne: not equal / not zero */

loc_000D2E68: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2E70u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D2E70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2ECC; /* jne: not equal / not zero */

loc_000D2E77: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2E84u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D2E84: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D2EA9; /* ja: above (unsigned >) */

loc_000D2E8C: ;
    edx = ZX8(MEM8(eax + 0xD2EDC));
    { uint32_t _jt = MEM32(edx * 4 + 0xD2ED4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D2E9Au) goto loc_000D2E9A;
    if (_jt == 0x000D2EA9u) goto loc_000D2EA9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D2E9A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2EA1u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D2EA1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D2EA9: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2EC9u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D2EC9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2ECC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2F40
 * Original: 0x000D2F40 - 0x000D2FE1 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2F40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2F4Eu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D2F4E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2FDC; /* je: equal / zero */

loc_000D2F5B: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2FDC; /* je: equal / zero */

loc_000D2F64: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2FDC; /* jne: not equal / not zero */

loc_000D2F72: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2FDC; /* jne: not equal / not zero */

loc_000D2F78: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2F80u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D2F80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2FDC; /* jne: not equal / not zero */

loc_000D2F87: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2F94u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D2F94: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D2FB9; /* ja: above (unsigned >) */

loc_000D2F9C: ;
    edx = ZX8(MEM8(eax + 0xD2FEC));
    { uint32_t _jt = MEM32(edx * 4 + 0xD2FE4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D2FAAu) goto loc_000D2FAA;
    if (_jt == 0x000D2FB9u) goto loc_000D2FB9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D2FAA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2FB1u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D2FB1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D2FB9: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2FD9u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D2FD9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2FDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3050
 * Original: 0x000D3050 - 0x000D30F1 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3050: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D305Eu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D305E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D30EC; /* je: equal / zero */

loc_000D306B: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D30EC; /* je: equal / zero */

loc_000D3074: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D30EC; /* jne: not equal / not zero */

loc_000D3082: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D30EC; /* jne: not equal / not zero */

loc_000D3088: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3090u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D3090: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D30EC; /* jne: not equal / not zero */

loc_000D3097: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D30A4u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D30A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D30C9; /* ja: above (unsigned >) */

loc_000D30AC: ;
    edx = ZX8(MEM8(eax + 0xD30FC));
    { uint32_t _jt = MEM32(edx * 4 + 0xD30F4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D30BAu) goto loc_000D30BA;
    if (_jt == 0x000D30C9u) goto loc_000D30C9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D30BA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D30C1u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D30C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D30C9: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D30E9u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D30E9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D30EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3160
 * Original: 0x000D3160 - 0x000D3201 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3160: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x12);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D316Eu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D316E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D31FC; /* je: equal / zero */

loc_000D317B: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D31FC; /* je: equal / zero */

loc_000D3184: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D31FC; /* jne: not equal / not zero */

loc_000D3192: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D31FC; /* jne: not equal / not zero */

loc_000D3198: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D31A0u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D31A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D31FC; /* jne: not equal / not zero */

loc_000D31A7: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D31B4u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D31B4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D31D9; /* ja: above (unsigned >) */

loc_000D31BC: ;
    edx = ZX8(MEM8(eax + 0xD320C));
    { uint32_t _jt = MEM32(edx * 4 + 0xD3204); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D31CAu) goto loc_000D31CA;
    if (_jt == 0x000D31D9u) goto loc_000D31D9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D31CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D31D1u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D31D1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D31D9: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D31F9u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D31F9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D31FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3270
 * Original: 0x000D3270 - 0x000D3311 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3270: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D327Eu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D327E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D330C; /* je: equal / zero */

loc_000D328B: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D330C; /* je: equal / zero */

loc_000D3294: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D330C; /* jne: not equal / not zero */

loc_000D32A2: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D330C; /* jne: not equal / not zero */

loc_000D32A8: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D32B0u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D32B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D330C; /* jne: not equal / not zero */

loc_000D32B7: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D32C4u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D32C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D32E9; /* ja: above (unsigned >) */

loc_000D32CC: ;
    edx = ZX8(MEM8(eax + 0xD331C));
    { uint32_t _jt = MEM32(edx * 4 + 0xD3314); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D32DAu) goto loc_000D32DA;
    if (_jt == 0x000D32E9u) goto loc_000D32E9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D32DA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D32E1u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D32E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D32E9: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3309u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D3309: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D330C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3380
 * Original: 0x000D3380 - 0x000D3421 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3380: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D338Eu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D338E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D341C; /* je: equal / zero */

loc_000D339B: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D341C; /* je: equal / zero */

loc_000D33A4: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D341C; /* jne: not equal / not zero */

loc_000D33B2: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D341C; /* jne: not equal / not zero */

loc_000D33B8: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D33C0u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D33C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D341C; /* jne: not equal / not zero */

loc_000D33C7: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D33D4u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D33D4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D33F9; /* ja: above (unsigned >) */

loc_000D33DC: ;
    edx = ZX8(MEM8(eax + 0xD342C));
    { uint32_t _jt = MEM32(edx * 4 + 0xD3424); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D33EAu) goto loc_000D33EA;
    if (_jt == 0x000D33F9u) goto loc_000D33F9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D33EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D33F1u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D33F1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D33F9: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3419u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D3419: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D341C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3490
 * Original: 0x000D3490 - 0x000D3531 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3490: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D349Eu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D349E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D352C; /* je: equal / zero */

loc_000D34AB: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D352C; /* je: equal / zero */

loc_000D34B4: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D352C; /* jne: not equal / not zero */

loc_000D34C2: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D352C; /* jne: not equal / not zero */

loc_000D34C8: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D34D0u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D34D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D352C; /* jne: not equal / not zero */

loc_000D34D7: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D34E4u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D34E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D3509; /* ja: above (unsigned >) */

loc_000D34EC: ;
    edx = ZX8(MEM8(eax + 0xD353C));
    { uint32_t _jt = MEM32(edx * 4 + 0xD3534); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D34FAu) goto loc_000D34FA;
    if (_jt == 0x000D3509u) goto loc_000D3509;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D34FA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3501u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D3501: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D3509: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3529u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D3529: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D352C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D35A0
 * Original: 0x000D35A0 - 0x000D3641 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D35A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D35A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 9);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D35AEu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D35AE: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D363C; /* je: equal / zero */

loc_000D35BB: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D363C; /* je: equal / zero */

loc_000D35C4: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D363C; /* jne: not equal / not zero */

loc_000D35D2: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D363C; /* jne: not equal / not zero */

loc_000D35D8: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D35E0u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D35E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D363C; /* jne: not equal / not zero */

loc_000D35E7: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D35F4u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D35F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D3619; /* ja: above (unsigned >) */

loc_000D35FC: ;
    edx = ZX8(MEM8(eax + 0xD364C));
    { uint32_t _jt = MEM32(edx * 4 + 0xD3644); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D360Au) goto loc_000D360A;
    if (_jt == 0x000D3619u) goto loc_000D3619;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D360A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3611u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D3611: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D3619: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3639u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D3639: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D363C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D36B0
 * Original: 0x000D36B0 - 0x000D3751 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D36B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D36B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0xA);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D36BEu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D36BE: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D374C; /* je: equal / zero */

loc_000D36CB: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D374C; /* je: equal / zero */

loc_000D36D4: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D374C; /* jne: not equal / not zero */

loc_000D36E2: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D374C; /* jne: not equal / not zero */

loc_000D36E8: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D36F0u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D36F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D374C; /* jne: not equal / not zero */

loc_000D36F7: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3704u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D3704: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D3729; /* ja: above (unsigned >) */

loc_000D370C: ;
    edx = ZX8(MEM8(eax + 0xD375C));
    { uint32_t _jt = MEM32(edx * 4 + 0xD3754); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D371Au) goto loc_000D371A;
    if (_jt == 0x000D3729u) goto loc_000D3729;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D371A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3721u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D3721: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D3729: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3749u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D3749: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D374C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D37C0
 * Original: 0x000D37C0 - 0x000D3861 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D37C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D37C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D37CEu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D37CE: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D385C; /* je: equal / zero */

loc_000D37DB: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D385C; /* je: equal / zero */

loc_000D37E4: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D385C; /* jne: not equal / not zero */

loc_000D37F2: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D385C; /* jne: not equal / not zero */

loc_000D37F8: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3800u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D3800: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D385C; /* jne: not equal / not zero */

loc_000D3807: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3814u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D3814: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D3839; /* ja: above (unsigned >) */

loc_000D381C: ;
    edx = ZX8(MEM8(eax + 0xD386C));
    { uint32_t _jt = MEM32(edx * 4 + 0xD3864); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D382Au) goto loc_000D382A;
    if (_jt == 0x000D3839u) goto loc_000D3839;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D382A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3831u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D3831: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D3839: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3859u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D3859: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D385C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D38D0
 * Original: 0x000D38D0 - 0x000D3971 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D38D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D38D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D38DEu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D38DE: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D396C; /* je: equal / zero */

loc_000D38EB: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D396C; /* je: equal / zero */

loc_000D38F4: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D396C; /* jne: not equal / not zero */

loc_000D3902: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D396C; /* jne: not equal / not zero */

loc_000D3908: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3910u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D3910: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D396C; /* jne: not equal / not zero */

loc_000D3917: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3924u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D3924: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D3949; /* ja: above (unsigned >) */

loc_000D392C: ;
    edx = ZX8(MEM8(eax + 0xD397C));
    { uint32_t _jt = MEM32(edx * 4 + 0xD3974); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D393Au) goto loc_000D393A;
    if (_jt == 0x000D3949u) goto loc_000D3949;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D393A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3941u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D3941: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D3949: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3969u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D3969: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D396C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D39E0
 * Original: 0x000D39E0 - 0x000D3A81 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D39E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D39E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0xD);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D39EEu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D39EE: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3A7C; /* je: equal / zero */

loc_000D39FB: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3A7C; /* je: equal / zero */

loc_000D3A04: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3A7C; /* jne: not equal / not zero */

loc_000D3A12: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3A7C; /* jne: not equal / not zero */

loc_000D3A18: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3A20u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D3A20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3A7C; /* jne: not equal / not zero */

loc_000D3A27: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3A34u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D3A34: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D3A59; /* ja: above (unsigned >) */

loc_000D3A3C: ;
    edx = ZX8(MEM8(eax + 0xD3A8C));
    { uint32_t _jt = MEM32(edx * 4 + 0xD3A84); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D3A4Au) goto loc_000D3A4A;
    if (_jt == 0x000D3A59u) goto loc_000D3A59;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D3A4A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3A51u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D3A51: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D3A59: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3A79u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D3A79: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3A7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3AF0
 * Original: 0x000D3AF0 - 0x000D3B91 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3AF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x11);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3AFEu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D3AFE: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3B8C; /* je: equal / zero */

loc_000D3B0B: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3B8C; /* je: equal / zero */

loc_000D3B14: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3B8C; /* jne: not equal / not zero */

loc_000D3B22: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3B8C; /* jne: not equal / not zero */

loc_000D3B28: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3B30u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D3B30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3B8C; /* jne: not equal / not zero */

loc_000D3B37: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3B44u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D3B44: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D3B69; /* ja: above (unsigned >) */

loc_000D3B4C: ;
    edx = ZX8(MEM8(eax + 0xD3B9C));
    { uint32_t _jt = MEM32(edx * 4 + 0xD3B94); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D3B5Au) goto loc_000D3B5A;
    if (_jt == 0x000D3B69u) goto loc_000D3B69;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D3B5A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3B61u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D3B61: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D3B69: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3B89u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D3B89: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3B8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3C00
 * Original: 0x000D3C00 - 0x000D3CA1 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3C00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3C0Eu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D3C0E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3C9C; /* je: equal / zero */

loc_000D3C1B: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3C9C; /* je: equal / zero */

loc_000D3C24: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3C9C; /* jne: not equal / not zero */

loc_000D3C32: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3C9C; /* jne: not equal / not zero */

loc_000D3C38: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3C40u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D3C40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3C9C; /* jne: not equal / not zero */

loc_000D3C47: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3C54u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D3C54: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D3C79; /* ja: above (unsigned >) */

loc_000D3C5C: ;
    edx = ZX8(MEM8(eax + 0xD3CAC));
    { uint32_t _jt = MEM32(edx * 4 + 0xD3CA4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D3C6Au) goto loc_000D3C6A;
    if (_jt == 0x000D3C79u) goto loc_000D3C79;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D3C6A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3C71u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D3C71: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D3C79: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3C99u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D3C99: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3C9C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3D10
 * Original: 0x000D3D10 - 0x000D3DB1 (161 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3D10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0xF);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3D1Eu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D3D1E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3DAC; /* je: equal / zero */

loc_000D3D2B: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3DAC; /* je: equal / zero */

loc_000D3D34: ;
    eax = MEM32(edi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3DAC; /* jne: not equal / not zero */

loc_000D3D42: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3DAC; /* jne: not equal / not zero */

loc_000D3D48: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3D50u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000D3D50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3DAC; /* jne: not equal / not zero */

loc_000D3D57: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3D64u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D3D64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D3D89; /* ja: above (unsigned >) */

loc_000D3D6C: ;
    edx = ZX8(MEM8(eax + 0xD3DBC));
    { uint32_t _jt = MEM32(edx * 4 + 0xD3DB4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000D3D7Au) goto loc_000D3D7A;
    if (_jt == 0x000D3D89u) goto loc_000D3D89;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D3D7A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3D81u); RECOMP_ABI_CALL(0x00014548u, sub_00014548); /* call 0x00014548 */

loc_000D3D81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D3D89: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D3DA9u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000D3DA9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3DAC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3E20
 * Original: 0x000D3E20 - 0x000D3E3F (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D3E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3E20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_MEM(eax); /* movaps */
    ecx = MEM32(ebp + 0xC);
    xmm1 = XMM_MEM(ecx); /* movaps */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3E50
 * Original: 0x000D3E50 - 0x000D3E86 (54 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3E50(void)
{

loc_000D3E50: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 4);
    xmm3 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 8); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm3.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3EA0
 * Original: 0x000D3EA0 - 0x000D3EA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3EA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000D3EA0: ;
    fp_push(MEMF(ecx + 0x438)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D3EB0
 * Original: 0x000D3EB0 - 0x000D3EBB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3EB0: ;
    SET_LO8(edx, MEM8(ecx + 0x3A));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000D3EC0
 * Original: 0x000D3EC0 - 0x000D3EE6 (38 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3EC0(void)
{

loc_000D3EC0: ;
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = eax + 0x170;
    ecx = 8;
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
    eax = MEM32(eax + 0x190);
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D3EF0
 * Original: 0x000D3EF0 - 0x000D3F14 (36 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3EF0(void)
{

loc_000D3EF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ecx;
    PUSH32(esp, edi);
    edi = eax + 0x170;
    ecx = 8;
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
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax + 0x190) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D3F20
 * Original: 0x000D3F20 - 0x000D3F26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3F20(void)
{

loc_000D3F20: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000D3F30
 * Original: 0x000D3F30 - 0x000D3F36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3F30(void)
{

loc_000D3F30: ;
    eax = 0xF;
    esp += 4; return; /* ret */

}

/**
 * sub_000D3F40
 * Original: 0x000D3F40 - 0x000D3F47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3F40(void)
{

loc_000D3F40: ;
    eax = ecx + 0x1D0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D3F50
 * Original: 0x000D3F50 - 0x000D3F5C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3F50: ;
    edx = MEM32(ecx + 0x48);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000D3F60
 * Original: 0x000D3F60 - 0x000D3FBA (90 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3F60(void)
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

loc_000D3F60: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AD3D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D3FB5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000D3F87: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7BF2E8); /* comiss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x7C8DD4); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D3FB5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7BF2E8)) */

loc_000D3FA8: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB1C8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_000D3FB5: ;
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
 * sub_000D3FD0
 * Original: 0x000D3FD0 - 0x000D400F (63 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3FD0(void)
{

loc_000D3FD0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x90); /* addss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x94); /* addss */
    MEMF(eax + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x98); /* addss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000D4020
 * Original: 0x000D4020 - 0x000D4075 (85 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D4020: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D406D; /* jle: less or equal (signed <=) */

loc_000D402B: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_000D4040;

    /* nop */
    /* nop */

loc_000D4040: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edx); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edx + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000D4071; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D4065: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4040; /* jl: less (signed <) */

loc_000D406D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D4071: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4090
 * Original: 0x000D4090 - 0x000D41F1 (353 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4090(void)
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

loc_000D4090: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x7AA7EC)); /* movss */
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_000D419C; /* jl: less (signed <) */

loc_000D40B9: ;
    edx = MEM32(esp + 0x18);
    esi = ebx + -3;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    goto loc_000D40D0;

    /* nop */
    /* nop */

loc_000D40D0: ;
    xmm1 = XMM_SCALAR(MEMF(edx + -40)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edx + -32)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D40FB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D40F6: ;
    xmm0 = xmm1; /* movaps */
    MEM32(edi) = ecx;

loc_000D40FB: ;
    xmm1 = XMM_SCALAR(MEMF(edx + -8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D4128; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D4120: ;
    ebp = ecx + 1;
    xmm0 = xmm1; /* movaps */
    MEM32(edi) = ebp;

loc_000D4128: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D4156; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D414E: ;
    ebp = ecx + 2;
    xmm0 = xmm1; /* movaps */
    MEM32(edi) = ebp;

loc_000D4156: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D4184; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D417C: ;
    ebp = ecx + 3;
    xmm0 = xmm1; /* movaps */
    MEM32(edi) = ebp;

loc_000D4184: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D40D0; /* jl: less (signed <) */

loc_000D4195: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);

loc_000D419C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D41E8; /* jge: greater or equal (signed >=) */

loc_000D41A0: ;
    esi = MEM32(esp + 0x18);
    edx = ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D41B0;

    /* nop */

loc_000D41B0: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D41E0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D41D5: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(edi) = ecx;

loc_000D41E0: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D41B0; /* jl: less (signed <) */

loc_000D41E8: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000D4250
 * Original: 0x000D4250 - 0x000D4396 (326 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D4250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D4250: ;
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
    esi = MEM32(ebp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    if (CMP_LE(_fas, _fbs)) goto loc_000D42E1; /* jle: less or equal (signed <=) */

loc_000D426B: ;
    edx = edi + 0x18;
    edi = edi;

loc_000D4270: ;
    eax = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D42AE; /* jle: less or equal (signed <=) */

loc_000D4279: ;
    eax = MEM32(ebp + 0xC);
    /* nop */

loc_000D4280: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + -16); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edx + -24); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edx + -8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000D42D9; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D42A5: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4280; /* jl: less (signed <) */

loc_000D42AE: ;
    eax = MEM32(ebp + 8);
    esi = ebx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 0x170;
    ecx = 8;
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
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x190) = ebx;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D42D9: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4270; /* jl: less (signed <) */

loc_000D42E1: ;
    eax = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D438D; /* jle: less or equal (signed <=) */

loc_000D42EE: ;
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D42F4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D432D; /* jle: less or equal (signed <=) */

loc_000D42FA: ;
    eax = edi;
    /* nop */

loc_000D4300: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + -16); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edx + -24); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edx + -8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000D437E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D4325: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4300; /* jl: less (signed <) */

loc_000D432D: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    esi = ebx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 8);
    ecx = 8;
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
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    edi = eax + 0x170;
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    ecx = 8;
    esi = esp + 0x10;
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    MEM32(eax + 0x190) = ebx;
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
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D437E: ;
    eax = MEM32(ebp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D42F4; /* jl: less (signed <) */

loc_000D438D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D43F0
 * Original: 0x000D43F0 - 0x000D4466 (118 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D43F0(void)
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

loc_000D43F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E9048);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D440Au); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_000D440A: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x8E91A0);
    eax = MEM32(edx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D4421u); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_000D4421: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    POP32(esp, esi);
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000D4450; /* jbe: below or equal (unsigned <=) */

loc_000D4441: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D4450; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp)) */

loc_000D4447: ;
    eax = MEM32(0x8E9048);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D4450: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D4460; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_000D4457: ;
    eax = MEM32(0x8E91A0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D4460: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
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
 * sub_000D4490
 * Original: 0x000D4490 - 0x000D4703 (627 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D4490(void)
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

loc_000D4490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x24;
    MEM32(esp + 0x30) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D44C6u); RECOMP_ABI_CALL(0x00018288u, sub_00018288); /* call 0x00018288 */

loc_000D44C6: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x48); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4595; /* je: equal / zero */

loc_000D452E: ;
    eax = MEM32(esi + 0x20);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    goto loc_000D45A1;

loc_000D4595: ;
    MEMF(esp + 4) = xmm7.f[0]; /* movss */
    xmm3 = xmm7; /* movaps */
    xmm5 = xmm7; /* movaps */

loc_000D45A1: ;
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D46FE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm5.f[0]) */

loc_000D45AA: ;
    xmm2 = XMM_SCALAR(MEMF(0x7C8948)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4 = xmm5; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D45D1; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_000D45CC: ;
    xmm0 = xmm7; /* movaps */
    goto loc_000D45E4;

loc_000D45D1: ;
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_000D45E4: ;
    eax = MEM32(ecx + 0x20);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    ecx = MEM32(ecx + 0x20);
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm0 = xmm5; /* movaps */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = xmm2; /* movaps */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = xmm3; /* movaps */
    eax = esp + 0x14;
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D467Eu); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_000D467E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D46FE; /* je: equal / zero */

loc_000D4682: ;
    eax = MEM32(esi + 0x20);
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm3; /* movaps */
    ecx = esp + 0x14;
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    PUSH32(esp, ecx);
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    ecx = eax;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D46FEu); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_000D46FE: ;
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
 * sub_000D47A0
 * Original: 0x000D47A0 - 0x000D4BC1 (1057 bytes, 256 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D47A0(void)
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

loc_000D47A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x3C));
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = esi + 0x70;
    eax = edi + 0x70;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D47B7u); RECOMP_ABI_CALL(0x00013D14u, sub_00013D14); /* call 0x00013D14 */

loc_000D47B7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4BBC; /* je: equal / zero */

loc_000D47C2: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, edi);
    MEM8(esp + 0xB) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D47D3u); RECOMP_ABI_CALL(0x00033024u, sub_00033024); /* call 0x00033024 */

loc_000D47D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D480E; /* jne: not equal / not zero */

loc_000D47D7: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D47E3u); RECOMP_ABI_CALL(0x00034B22u, sub_00034B22); /* call 0x00034B22 */

loc_000D47E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D47EC; /* je: equal / zero */

loc_000D47E7: ;
    eax = MEM32(edi + 0x54);
    goto loc_000D47FF;

loc_000D47EC: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D47F8u); RECOMP_ABI_CALL(0x00034B22u, sub_00034B22); /* call 0x00034B22 */

loc_000D47F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D480E; /* je: equal / zero */

loc_000D47FC: ;
    eax = MEM32(esi + 0x54);

loc_000D47FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D480E; /* je: equal / zero */

loc_000D4803: ;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 0xF (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000D480E; /* jne: not equal / not zero */

loc_000D4809: ;
    MEM8(esp + 7) = 1;

loc_000D480E: ;
    xmm0 = XMM_MEM(edi + 0x90); /* movaps */
    xmm1 = XMM_MEM(esi + 0x90); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esp + 0x30, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x3C) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x38) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x34) = ecx;
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
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7C8948); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D4970; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7C8948)) */

loc_000D48D7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
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
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x10); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x34); /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x3C); /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    goto loc_000D4993;

loc_000D4970: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C8DD8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */

loc_000D4993: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    eax = edi + 0x70;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D49A1u); RECOMP_ABI_CALL(0x0001B627u, sub_0001B627); /* call 0x0001B627 */

loc_000D49A1: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D49B0u); RECOMP_ABI_CALL(0x0001B627u, sub_0001B627); /* call 0x0001B627 */

loc_000D49B0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 8) - fp_top()); /* fsubr dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x7AA840)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000D4B99; /* jb: below (unsigned <) */

loc_000D49DC: ;
    SET_LO8(eax, MEM8(esp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D4A01; /* jne: not equal / not zero */

loc_000D49E4: ;
    eax = MEM32(0x8E9AD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D49FBu); RECOMP_ABI_CALL(0x0001F1F5u, sub_0001F1F5); /* call 0x0001F1F5 */

loc_000D49FB: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4A01: ;
    SET_LO8(eax, MEM8(ebp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4A15; /* je: equal / zero */

loc_000D4A08: ;
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3 = xmm1; /* movaps */
    goto loc_000D4A89;

loc_000D4A15: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4A29; /* je: equal / zero */

loc_000D4A1C: ;
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm4 = xmm1; /* movaps */
    goto loc_000D4A89;

loc_000D4A29: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000D4A30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4A2Du); } /* indirect call */
    }

loc_000D4A30: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    eax = MEM32(esi);
    ecx = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000D4A41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4A3Eu); } /* indirect call */
    }

loc_000D4A41: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    xmm5 = xmm0; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */

loc_000D4A89: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BB378)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D4A9F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000D4A9C: ;
    xmm2 = xmm0; /* movaps */

loc_000D4A9F: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    ecx = esp + 0x14;
    xmm3 = xmm1; /* movaps */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x20);
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D4B08u); RECOMP_ABI_CALL(0x0003301Fu, sub_0003301F); /* call 0x0003301F */

loc_000D4B08: ;
    ecx = MEM32(esi + 0x20);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D4B15u); RECOMP_ABI_CALL(0x0003301Fu, sub_0003301F); /* call 0x0003301F */

loc_000D4B15: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x90)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(edi + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x94)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(edi + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x98)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(edi + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x94); /* addss */
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x98); /* addss */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */

loc_000D4B99: ;
    eax = MEM32(0x8F004C);
    eax = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000D4BA8; /* je: equal / zero */

loc_000D4BA4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D4BBC; /* jne: not equal / not zero */

loc_000D4BA8: ;
    SET_LO8(ecx, MEM8(edi + 0x30));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x30) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000D4BBC; /* je: equal / zero */

loc_000D4BB0: ;
    PUSH32(esp, 0xC);
    ecx = 0x8EFCB8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D4BBCu); RECOMP_ABI_CALL(0x00026DE7u, sub_00026DE7); /* call 0x00026DE7 */

loc_000D4BBC: ;
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
 * sub_000D4CD0
 * Original: 0x000D4CD0 - 0x000D529B (1483 bytes, 300 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D4CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D4CD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x43C00000);
    ecx = ebx;
    MEM8(esp + 0x17) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D4CEFu); RECOMP_ABI_CALL(0x0003632Du, sub_0003632D); /* call 0x0003632D */

loc_000D4CEF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5291; /* je: equal / zero */

loc_000D4CF7: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D4CFEu); RECOMP_ABI_CALL(0x00020947u, sub_00020947); /* call 0x00020947 */

loc_000D4CFE: ;
    esi = eax;
    ecx = 7;
    edi = esp + 0x20;
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
    ecx = MEM32(ebx + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000D4D13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4D10u); } /* indirect call */
    }

loc_000D4D13: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx = MEM32(ebx);
    esi = (uint32_t)(int32_t)SMEM8(ebx + 0x39);
    ecx = ebx;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm1.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000D4E0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4E0Au); } /* indirect call */
    }

loc_000D4E0D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 7);
    eax = esp + 0x6C;
    PUSH32(esp, 0x89AF00);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D4E20u); RECOMP_ABI_CALL(0x000323E5u, sub_000323E5); /* call 0x000323E5 */

loc_000D4E20: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x48); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x44); /* subss */
    xmm4 = XMM_SCALAR(MEMF(0x7AA7EC)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm4; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    eax = 1;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D4E94; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000D4E91: ;
    xmm4 = xmm1; /* movaps */

loc_000D4E94: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0x34); /* subss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x30); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D4EE8; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_000D4EE0: ;
    xmm4 = xmm1; /* movaps */
    eax = 2;

loc_000D4EE8: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0x34); /* subss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x30); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D4F3C; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_000D4F34: ;
    xmm4 = xmm1; /* movaps */
    eax = 3;

loc_000D4F3C: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0x34); /* subss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x30); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D4F90; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_000D4F88: ;
    xmm4 = xmm1; /* movaps */
    eax = 4;

loc_000D4F90: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0x34); /* subss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x30); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D4FE8; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_000D4FE0: ;
    xmm4 = xmm1; /* movaps */
    eax = 5;

loc_000D4FE8: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(esp + 0x34); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D5031; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_000D502C: ;
    eax = 6;

loc_000D5031: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = esp + eax + 0x60;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, 0x41C00000);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5093u); RECOMP_ABI_CALL(0x00024BF5u, sub_00024BF5); /* call 0x00024BF5 */

loc_000D5093: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5129; /* je: equal / zero */

loc_000D509E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D5129; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_000D50AC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x14); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x18); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x60); /* movaps */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    XMM_STORE(esp + 0x60, xmm1); /* movaps */
    MEM8(esp + 0x13) = 1;

loc_000D5129: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    PUSH32(esp, 0x41C00000);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5161u); RECOMP_ABI_CALL(0x00024BF5u, sub_00024BF5); /* call 0x00024BF5 */

loc_000D5161: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D51E1; /* je: equal / zero */

loc_000D5168: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D51E1; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D5176: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C4060)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D518C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D5183: ;
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */

loc_000D518C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x14); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x18); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEM8(esp + 0x13) = 1;
    goto loc_000D51ED;

loc_000D51E1: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5291; /* je: equal / zero */

loc_000D51ED: ;
    ecx = MEM32(ebx + 0x20);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D51FAu); RECOMP_ABI_CALL(0x0003301Fu, sub_0003301F); /* call 0x0003301F */

loc_000D51FA: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x90)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebx + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x94)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(ebx + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x98)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3C23D70A);
    MEMF(ebx + 0x98) = xmm0.f[0]; /* movss */
    eax = esp + 0x28;
    PUSH32(esp, eax);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x58); /* subss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x5C); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x60); /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D528Eu); RECOMP_ABI_CALL(0x0001F1F5u, sub_0001F1F5); /* call 0x0001F1F5 */

loc_000D528E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5291: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5410
 * Original: 0x000D5410 - 0x000D54A0 (144 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5410: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000D5418u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000D5418: ;
    ecx = eax;
    PUSH32(esp, 0x000D541Fu); RECOMP_ABI_CALL(0x0002085Cu, sub_0002085C); /* call 0x0002085C */

loc_000D541F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D549C; /* jne: not equal / not zero */

loc_000D5423: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D549C; /* je: equal / zero */

loc_000D542B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D549C; /* je: equal / zero */

loc_000D5430: ;
    PUSH32(esp, 0x000D5435u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_000D5435: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D549C; /* jne: not equal / not zero */

loc_000D5439: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D549C; /* je: equal / zero */

loc_000D5442: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D549C; /* je: equal / zero */

loc_000D5446: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x6C);
    edx = ecx;
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D545Bu); RECOMP_ABI_CALL(0x00030DECu, sub_00030DEC); /* call 0x00030DEC */

loc_000D545B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D549C; /* je: equal / zero */

loc_000D545F: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(eax * 4 + 0x8F0040);
    edx = MEM32(0x8E9380);
    PUSH32(esp, 0x10);
    MEM32(edx + 0x10) = ecx;
    PUSH32(esp, 0x000D547Au); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_000D547A: ;
    ecx = eax;
    PUSH32(esp, 0x000D5481u); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_000D5481: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000D5493u); RECOMP_ABI_CALL(0x0003168Eu, sub_0003168E); /* call 0x0003168E */

loc_000D5493: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000D549Cu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D549C: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D54D0
 * Original: 0x000D54D0 - 0x000D5825 (853 bytes, 232 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D54D0(void)
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

loc_000D54D0: ;
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
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM8(esp + 0x17) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000D54E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D54E4u); } /* indirect call */
    }

loc_000D54E7: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(0x1D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x1D0)) >> 32) & 1);
    ecx = ecx + 0x1D0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + 0x2C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5500u); RECOMP_ABI_CALL(0x00032DEAu, sub_00032DEA); /* call 0x00032DEA */

loc_000D5500: ;
    ecx = MEM32(ebx + 0x28);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D553A; /* jne: not equal / not zero */

loc_000D550E: ;
    ecx = MEM32(ebx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D551D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D551B: ;
    goto loc_000D5525;

loc_000D551D: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */

loc_000D5525: ;
    xmm2 = XMM_SCALAR(MEMF(0x7C8DDC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D553A; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000D5532: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D553A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D581B; /* jne: not equal / not zero */

loc_000D5542: ;
    PUSH32(esp, 0x3F666666);
    esi = ebx + 0x170;
    ecx = 8;
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
    ecx = MEM32(ebx + 0x190);
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */
    PUSH32(esp, 0x3C23D70A);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    edx = esp + 0x58;
    PUSH32(esp, edx);
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x50); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x54); /* subss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    MEM8(esp + 0x2B) = 1;
    MEM32(esp + 0x34) = ecx;
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D55AFu); RECOMP_ABI_CALL(0x0001F1F5u, sub_0001F1F5); /* call 0x0001F1F5 */

loc_000D55AF: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    ecx = 8;
    esi = esp + 0x44;
    edi = esp + 0x64;
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
    xmm1 = XMM_MEM(esp + 0x74); /* movaps */
    PUSH32(esp, 0x10);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x1D0)) >> 32) & 1);
    esi = esi + 0x1D0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x6C;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    PUSH32(esp, esi);
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    PUSH32(esp, ecx);
    XMM_STORE(esp + 0x84, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D55F5u); RECOMP_ABI_CALL(0x000216CBu, sub_000216CB); /* call 0x000216CB */

loc_000D55F5: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, 3);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D560Bu); RECOMP_ABI_CALL(0x000216CBu, sub_000216CB); /* call 0x000216CB */

loc_000D560B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(0x7AA840)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000D5705; /* jbe: below or equal (unsigned <=) */

loc_000D562A: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7AB82C); /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_MEM(esp + 0x40); /* movaps */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x20);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x34, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    edi = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    edx = MEM32(esp + 0x58);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5699u); RECOMP_ABI_CALL(0x0003301Fu, sub_0003301F); /* call 0x0003301F */

loc_000D5699: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x90)); /* movss */
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x58);
    MEM32(esp + 0x24) = edi;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(ebx + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x94)); /* movss */
    MEM32(esp + 0x28) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    edx = MEM32(ebx);
    MEMF(ebx + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x98)); /* movss */
    MEM32(esp + 0x2C) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    ecx = ebx;
    MEMF(ebx + 0x98) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000D56F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D56F3u); } /* indirect call */
    }

loc_000D56F6: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5702u); RECOMP_ABI_CALL(0x00032DEAu, sub_00032DEA); /* call 0x00032DEA */

loc_000D5702: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5705: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5711u); RECOMP_ABI_CALL(0x00022594u, sub_00022594); /* call 0x00022594 */

loc_000D5711: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5736; /* je: equal / zero */

loc_000D5715: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5721u); RECOMP_ABI_CALL(0x00033024u, sub_00033024); /* call 0x00033024 */

loc_000D5721: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    ecx = MEM32(eax * 4 + 0x8E8EB8);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5733u); RECOMP_ABI_CALL(0x0002CA17u, sub_0002CA17); /* call 0x0002CA17 */

loc_000D5733: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5736: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 0x12 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D581B; /* jne: not equal / not zero */

loc_000D5741: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D580D; /* jne: not equal / not zero */

loc_000D574C: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5753u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000D5753: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D580D; /* je: equal / zero */

loc_000D575B: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000D5762u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D575Fu); } /* indirect call */
    }

loc_000D5762: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D5810; /* jne: not equal / not zero */

loc_000D576D: ;
    eax = MEM32(0x8E8F84);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D577Cu); RECOMP_ABI_CALL(0x00031FE4u, sub_00031FE4); /* call 0x00031FE4 */

loc_000D577C: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(0x8E8F84);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(edx + 0x20);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x30); /* subss */
    MEM32(esp + 0x2C) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB1C8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x42480000);
    ecx = esp + 0x34;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D57E3u); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_000D57E3: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(0x8E8F84);
    ecx = MEM32(ecx + 0x20);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D57F8u); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_000D57F8: ;
    PUSH32(esp, esi);
    esi = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5800u); RECOMP_ABI_CALL(0x000D5410u, sub_000D5410); /* call 0x000D5410 */

loc_000D5800: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D580D: ;
    esi = MEM32(ebp + 8);

loc_000D5810: ;
    PUSH32(esp, esi);
    esi = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5818u); RECOMP_ABI_CALL(0x000D5410u, sub_000D5410); /* call 0x000D5410 */

loc_000D5818: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D581B: ;
    SET_LO8(eax, MEM8(esp + 0x17));
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
 * sub_000D5900
 * Original: 0x000D5900 - 0x000D5D93 (1171 bytes, 344 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D5900(void)
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

loc_000D5900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x158));
    esp = esp - 0x158;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = esi;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 2;
    /* nop */

loc_000D5920: ;
    edi = MEM32(ebx + 0x8E9058);
    SET_LO8(eax, MEM8(edi + 0x3A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D5998; /* jne: not equal / not zero */

loc_000D592D: ;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x34), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D5998; /* jne: not equal / not zero */

loc_000D5932: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000D5998; /* jne: not equal / not zero */

loc_000D593A: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, edi);
    MEM32(esp + esi * 4 + 0xC4) = edi;
    MEM8(esp + esi + 0x6C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5952u); RECOMP_ABI_CALL(0x0001B2F3u, sub_0001B2F3); /* call 0x0001B2F3 */

loc_000D5952: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + esi + 0x94) = LO8(eax);
    MEM8(esp + esi + 0x3C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000D5997; /* je: equal / zero */

loc_000D5962: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D596Eu); RECOMP_ABI_CALL(0x00017392u, sub_00017392); /* call 0x00017392 */

loc_000D596E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5997; /* je: equal / zero */

loc_000D5972: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D597Eu); RECOMP_ABI_CALL(0x00015E61u, sub_00015E61); /* call 0x00015E61 */

loc_000D597E: ;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D5997; /* jne: not equal / not zero */

loc_000D5984: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D5997; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000D5992: ;
    MEM8(esp + esi + 0x3C) = 1;

loc_000D5997: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000D5998: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000D5920; /* jl: less (signed <) */

loc_000D59A7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x24) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_000D5B52; /* jle: less or equal (signed <=) */

loc_000D59B3: ;
    ecx = esp + 0xC0;
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x94;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esp + 0x68;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x3C;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = 1;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x18) = esi;

loc_000D59E5: ;
    edx = MEM32(esp + 0x1C);
    edi = MEM32(edx);
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000D5B37; /* je: equal / zero */

loc_000D59F5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_000D5B37; /* jge: greater or equal (signed >=) */

loc_000D59FF: ;
    SET_LO8(eax, MEM8(ecx + ebp));
    MEM8(esp + 0x17) = LO8(eax);
    goto loc_000D5A10;

    /* nop */
    /* nop */

loc_000D5A10: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = MEM32(esp + ebx * 4 + 0xC0);
    if (CMP_EQ(_fa, _fb)) goto loc_000D5A2E; /* je: equal / zero */

loc_000D5A1F: ;
    SET_LO8(eax, MEM8(esp + ebx + 0x94));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D5B24; /* jne: not equal / not zero */

loc_000D5A2E: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000D5B24; /* je: equal / zero */

loc_000D5A38: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(edi + 0x20);
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5A4Bu); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_000D5A4B: ;
    fp_push(MEMF(0x7C3B38)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000D5B24; /* jbe: below or equal (unsigned <=) */

loc_000D5A5E: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM8(eax + ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ebp), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D5A73; /* jne: not equal / not zero */

loc_000D5A68: ;
    ecx = edi;
    MEM8(eax + ebp) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5A73u); RECOMP_ABI_CALL(0x00033AD8u, sub_00033AD8); /* call 0x00033AD8 */

loc_000D5A73: ;
    SET_LO8(eax, MEM8(esp + ebx + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D5A87; /* jne: not equal / not zero */

loc_000D5A7B: ;
    ecx = esi;
    MEM8(esp + ebx + 0x68) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5A87u); RECOMP_ABI_CALL(0x00033AD8u, sub_00033AD8); /* call 0x00033AD8 */

loc_000D5A87: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5A8Cu); RECOMP_ABI_CALL(0x00024BFAu, sub_00024BFA); /* call 0x00024BFA */

loc_000D5A8C: ;
    eax = MEM32(esi + 0x20);
    fp_push(MEMF(eax + 0x38)); /* fld float */
    ecx = MEM32(edi + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7C8E18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5AC4u); RECOMP_ABI_CALL(0x00020E88u, sub_00020E88); /* call 0x00020E88 */

loc_000D5AC4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5AC9u); RECOMP_ABI_CALL(0x00026D2Eu, sub_00026D2E); /* call 0x00026D2E */

loc_000D5AC9: ;
    eax = MEM32(esp + 0x58);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esp + ebx + 0x68));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + ebp));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5ADFu); RECOMP_ABI_CALL(0x000D47A0u, sub_000D47A0); /* call 0x000D47A0 */

loc_000D5ADF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5AE4u); RECOMP_ABI_CALL(0x00024BFAu, sub_00024BFA); /* call 0x00024BFA */

loc_000D5AE4: ;
    eax = MEM32(esi + 0x20);
    fp_push(MEMF(eax + 0x38)); /* fld float */
    ecx = MEM32(edi + 0x20);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    MEMD(esp + 0x2C) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    MEMD(esp + 0x24) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7C8DE0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5B1Cu); RECOMP_ABI_CALL(0x00020E88u, sub_00020E88); /* call 0x00020E88 */

loc_000D5B1C: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5B24u); RECOMP_ABI_CALL(0x00026D2Eu, sub_00026D2E); /* call 0x00026D2E */

loc_000D5B24: ;
    eax = MEM32(esp + 0x24);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000D5A10; /* jl: less (signed <) */

loc_000D5B31: ;
    ecx = MEM32(esp + 0x20);
    esi = eax;

loc_000D5B37: ;
    edi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_000D59E5; /* jne: not equal / not zero */

loc_000D5B52: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000D5B84; /* jle: less or equal (signed <=) */

loc_000D5B58: ;
    goto loc_000D5B60;

    /* nop */

loc_000D5B60: ;
    ebx = MEM32(esp + edi * 4 + 0xC0);
    ecx = MEM32(ebx + 0x54);
    SET_LO8(eax, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D5B7F; /* jne: not equal / not zero */

loc_000D5B71: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5B76u); RECOMP_ABI_CALL(0x000D4CD0u, sub_000D4CD0); /* call 0x000D4CD0 */

loc_000D5B76: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5B7F; /* je: equal / zero */

loc_000D5B7A: ;
    MEM8(esp + edi + 0x3C) = 1;

loc_000D5B7F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000D5B60; /* jl: less (signed <) */

loc_000D5B84: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000D5D8B; /* jle: less or equal (signed <=) */

loc_000D5B8E: ;
    edi = edi;

loc_000D5B90: ;
    edx = MEM32(0x8E9048);
    eax = MEM32(edx + 0x20);
    ebx = MEM32(esp + ebp * 4 + 0xC0);
    edi = MEM32(ebx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x30)) >> 32) & 1);
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5BB0u); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_000D5BB0: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x8E91A0);
    edx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x30)) >> 32) & 1);
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5BC7u); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_000D5BC7: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000D5BF2; /* jbe: below or equal (unsigned <=) */

loc_000D5BDC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B8E30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D5BF2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x18)) */

loc_000D5BEB: ;
    eax = MEM32(0x8E9048);
    goto loc_000D5C06;

loc_000D5BF2: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B8E30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D5C1E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x20)) */

loc_000D5C01: ;
    eax = MEM32(0x8E91A0);

loc_000D5C06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5C1E; /* je: equal / zero */

loc_000D5C0A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5C10u); RECOMP_ABI_CALL(0x000D54D0u, sub_000D54D0); /* call 0x000D54D0 */

loc_000D5C10: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5C25; /* je: equal / zero */

loc_000D5C17: ;
    MEM8(esp + ebp + 0x3C) = 1;
    goto loc_000D5C25;

loc_000D5C1E: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5C25u); RECOMP_ABI_CALL(0x00016C94u, sub_00016C94); /* call 0x00016C94 */

loc_000D5C25: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000D5B90; /* jl: less (signed <) */

loc_000D5C2E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000D5D8B; /* jle: less or equal (signed <=) */

loc_000D5C36: ;
    eax = esp + 0xC0;
    MEM32(esp + 0x1C) = eax;
    ecx = esp + 0x94;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esp + 0x68;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x3C;
    edi = 1;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x38) = esi;
    /* nop */

loc_000D5C70: ;
    edx = MEM32(esp + 0x1C);
    esi = MEM32(edx);
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x30) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000D5D6C; /* je: equal / zero */

loc_000D5C84: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x24) (32-bit) */
    _cf = (int)(_fa < _fb);
    ebp = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_000D5D6C; /* jge: greater or equal (signed >=) */

loc_000D5C90: ;
    SET_LO8(eax, MEM8(ecx + edi));
    MEM8(esp + 0x17) = LO8(eax);
    goto loc_000D5CA0;

    /* nop */

loc_000D5CA0: ;
    SET_LO8(ecx, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + ebp * 4 + 0xC0);
    if (CMP_EQ(_fa, _fb)) goto loc_000D5CBE; /* je: equal / zero */

loc_000D5CAF: ;
    SET_LO8(ecx, MEM8(esp + ebp + 0x94));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D5D5B; /* jne: not equal / not zero */

loc_000D5CBE: ;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000D5D5B; /* je: equal / zero */

loc_000D5CC8: ;
    ecx = MEM32(eax + 0x20);
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5CDBu); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_000D5CDB: ;
    fp_push(MEMF(0x7C3B38)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000D5D5B; /* jbe: below or equal (unsigned <=) */

loc_000D5CEA: ;
    eax = MEM32(esp + 0x2C);
    SET_LO8(eax, MEM8(eax + edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0x18) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000D5D05; /* je: equal / zero */

loc_000D5CF9: ;
    SET_LO8(ebx, MEM8(esp + ebp + 0x3C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5D0D; /* je: equal / zero */

loc_000D5D01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D5D5B; /* jne: not equal / not zero */

loc_000D5D05: ;
    SET_LO8(ebx, MEM8(esp + ebp + 0x3C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5D5B; /* je: equal / zero */

loc_000D5D0D: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM8(ecx + edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + edi), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D5D26; /* jne: not equal / not zero */

loc_000D5D17: ;
    MEM8(ecx + edi) = 1;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5D22u); RECOMP_ABI_CALL(0x00033AD8u, sub_00033AD8); /* call 0x00033AD8 */

loc_000D5D22: ;
    eax = MEM32(esp + 0x18);

loc_000D5D26: ;
    SET_LO8(ecx, MEM8(esp + ebp + 0x68));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D5D3E; /* jne: not equal / not zero */

loc_000D5D2E: ;
    ecx = esi;
    MEM8(esp + ebp + 0x68) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5D3Au); RECOMP_ABI_CALL(0x00033AD8u, sub_00033AD8); /* call 0x00033AD8 */

loc_000D5D3A: ;
    eax = MEM32(esp + 0x18);

loc_000D5D3E: ;
    esi = MEM32(esp + ebp * 4 + 0xC0);
    edi = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5D50u); RECOMP_ABI_CALL(0x000D47A0u, sub_000D47A0); /* call 0x000D47A0 */

loc_000D5D50: ;
    edi = MEM32(esp + 0x3C);
    esi = MEM32(esp + 0x38);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5D5B: ;
    eax = MEM32(esp + 0x24);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000D5CA0; /* jl: less (signed <) */

loc_000D5D68: ;
    ecx = MEM32(esp + 0x20);

loc_000D5D6C: ;
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = eax;
    if ((_fa != 0)) goto loc_000D5C70; /* jne: not equal / not zero */

loc_000D5D8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_000D5EC0
 * Original: 0x000D5EC0 - 0x000D5EC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5EC0(void)
{

loc_000D5EC0: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5ED0
 * Original: 0x000D5ED0 - 0x000D5ED4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5ED0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000D5ED0: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D5EE0
 * Original: 0x000D5EE0 - 0x000D60D8 (504 bytes, 112 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D5EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5EE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xBC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x78) = ecx;
    MEM8(esp + 0x80) = LO8(ecx);
    MEM8(esp + 0x81) = LO8(ecx);
    MEM32(esp + 0x7C) = 1;
    MEM32(esp + 0x70) = 0x7B1D88;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x90) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x94) = eax;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 0x98) = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x9C) = eax;
    eax = MEM32(edx + 0x4C);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0xA4) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = ecx;
    MEM8(esp + 0x30) = LO8(ecx);
    MEM8(esp + 0x31) = LO8(ecx);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0xA0) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0xAC) = eax;
    eax = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    xmm1 = XMM_SCALAR(MEMF(0x7C9210)); /* movss */
    MEM32(esp + 0xA8) = edx;
    MEMF(esp + 0xB0) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x2C) = 1;
    MEM32(esp + 0x20) = 0x7B1D88;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x44) = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(ecx + 0x4C);
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x48) = edx;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x50) = ecx;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x54) = edx;
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esp + 0x60) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D60BAu); RECOMP_ABI_CALL(0x00015F4Cu, sub_00015F4C); /* call 0x00015F4C */

loc_000D60BA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x20;
    SET_LO8(ebx, LO8(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D60C8u); RECOMP_ABI_CALL(0x00029E25u, sub_00029E25); /* call 0x00029E25 */

loc_000D60C8: ;
    ecx = esp + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D60D1u); RECOMP_ABI_CALL(0x00029E25u, sub_00029E25); /* call 0x00029E25 */

loc_000D60D1: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6160
 * Original: 0x000D6160 - 0x000D6331 (465 bytes, 146 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6160(void)
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

loc_000D6160: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6177; /* jne: not equal / not zero */

loc_000D616E: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D6177: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x14) = 0x7B8E14;
    PUSH32(esp, 0x000D618Eu); RECOMP_ABI_CALL(0x00011861u, sub_00011861); /* call 0x00011861 */

loc_000D618E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D62C0; /* je: equal / zero */

loc_000D6196: ;
    eax = MEM32(edi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = 0x7BC428;
    PUSH32(esp, 0x000D61ABu); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D61AB: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x000D61BAu); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000D61BA: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(edx * 4 + 0x8F00F8);
    SET_LO8(ecx, MEM8(eax + 0x52));
    ebp = MEM32(eax + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D620F; /* je: equal / zero */

loc_000D61D7: ;
    ecx = MEM32(esi + 0xF0);
    PUSH32(esp, 0x000D61E2u); RECOMP_ABI_CALL(0x0001CAEAu, sub_0001CAEA); /* call 0x0001CAEA */

loc_000D61E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D620F; /* je: equal / zero */

loc_000D61E6: ;
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000D61F5u); RECOMP_ABI_CALL(0x0001A5D3u, sub_0001A5D3); /* call 0x0001A5D3 */

loc_000D61F5: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA820); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D620F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA820)) */

loc_000D6202: ;
    _fa = (uint32_t)(MEM32(edi + 0x3EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3EC), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D628A; /* je: equal / zero */

loc_000D620B: ;
    eax = edi;
    goto loc_000D628C;

loc_000D620F: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    _fa = (uint32_t)(MEM8(edx + 0x52)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x52), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D624B; /* je: equal / zero */

loc_000D6220: ;
    ecx = MEM32(edi + 0xF0);
    PUSH32(esp, 0x000D622Bu); RECOMP_ABI_CALL(0x0001CAEAu, sub_0001CAEA); /* call 0x0001CAEA */

loc_000D622B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D624B; /* je: equal / zero */

loc_000D622F: ;
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000D623Eu); RECOMP_ABI_CALL(0x0001A5D3u, sub_0001A5D3); /* call 0x0001A5D3 */

loc_000D623E: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA820); /* comiss */
    if ((_fca > _fcb)) goto loc_000D628A; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7AA820)) */

loc_000D624B: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D6259; /* jl: less (signed <) */

loc_000D6255: ;
    eax = edi;
    goto loc_000D628C;

loc_000D6259: ;
    SET_LO8(eax, MEM8(edi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D628A; /* jge: greater or equal (signed >=) */

loc_000D6263: ;
    ecx = esi;
    PUSH32(esp, 0x000D626Au); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000D626A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6255; /* jne: not equal / not zero */

loc_000D626E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6255; /* je: equal / zero */

loc_000D6272: ;
    ecx = edi;
    PUSH32(esp, 0x000D6279u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000D6279: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D628A; /* jne: not equal / not zero */

loc_000D627D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D628A; /* je: equal / zero */

loc_000D6281: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D632A; /* je: equal / zero */

loc_000D628A: ;
    eax = esi;

loc_000D628C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000D62BB; /* je: equal / zero */

loc_000D6293: ;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D62B9; /* je: equal / zero */

loc_000D6299: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(ecx + 0x8F00F8);
    _fa = (uint32_t)(MEM32(edx + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x4C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D62B9; /* je: equal / zero */

loc_000D62AB: ;
    ecx = MEM32(ecx + 0x8F0040);
    _fa = (uint32_t)(MEM32(ecx + 0x12C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x12C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D62BB; /* jne: not equal / not zero */

loc_000D62B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D62BB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D62C0: ;
    eax = MEM32(0x8EFCB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D62D5; /* je: equal / zero */

loc_000D62C9: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x30) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D628A; /* je: equal / zero */

loc_000D62D1: ;
    eax = edi;
    goto loc_000D628C;

loc_000D62D5: ;
    PUSH32(esp, esi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000D62E4u); RECOMP_ABI_CALL(0x00020D25u, sub_00020D25); /* call 0x00020D25 */

loc_000D62E4: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA820); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D62F5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA820)) */

loc_000D62F1: ;
    eax = edi;
    goto loc_000D628C;

loc_000D62F5: ;
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000D6304u); RECOMP_ABI_CALL(0x00020D25u, sub_00020D25); /* call 0x00020D25 */

loc_000D6304: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA820); /* comiss */
    if ((_fca > _fcb)) goto loc_000D628A; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7AA820)) */

loc_000D6315: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(edi + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x30); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D628A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x30)) */

loc_000D632A: ;
    eax = edi;
    goto loc_000D628C;

}

/**
 * sub_000D63B0
 * Original: 0x000D63B0 - 0x000D6503 (339 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D63B0(void)
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

loc_000D63B0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D63BAu); RECOMP_ABI_CALL(0x0002F0BEu, sub_0002F0BE); /* call 0x0002F0BE */

loc_000D63BA: ;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x10) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_000D64FD; /* jle: less or equal (signed <=) */

loc_000D63D1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_000D63D3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D63D9u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000D63D9: ;
    ebp = MEM32(eax + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000D64EB; /* je: equal / zero */

loc_000D63EB: ;
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D63FB; /* je: equal / zero */

loc_000D63F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D64EB; /* jne: not equal / not zero */

loc_000D63FB: ;
    ebx = esi + 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_000D64EB; /* jge: greater or equal (signed >=) */

loc_000D640A: ;
    /* nop */

loc_000D6410: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D6416u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000D6416: ;
    esi = MEM32(eax + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D64D6; /* je: equal / zero */

loc_000D6424: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D64D6; /* jne: not equal / not zero */

loc_000D642F: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D6440u); RECOMP_ABI_CALL(0x0002BDBAu, sub_0002BDBA); /* call 0x0002BDBA */

loc_000D6440: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D64D6; /* je: equal / zero */

loc_000D644B: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D6452u); RECOMP_ABI_CALL(0x00024448u, sub_00024448); /* call 0x00024448 */

loc_000D6452: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D64D6; /* je: equal / zero */

loc_000D645B: ;
    edx = MEM32(edi + 0x1D4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) esi = ebp; /* cmovne */
    PUSH32(esp, 0x000D646Cu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000D646C: ;
    ebx = MEM32(eax + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6498; /* je: equal / zero */

loc_000D6476: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000D647Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D647Au); } /* indirect call */
    }

loc_000D647D: ;
    ebp = eax;
    PUSH32(esp, 0x000D6484u); RECOMP_ABI_CALL(0x00013E6Du, sub_00013E6D); /* call 0x00013E6D */

loc_000D6484: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6494; /* jne: not equal / not zero */

loc_000D6488: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D64CE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_000D6494: ;
    ebp = MEM32(esp + 0x14);

loc_000D6498: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x000D64A1u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D64A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D64B3; /* je: equal / zero */

loc_000D64A8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x000D64B1u); RECOMP_ABI_CALL(0x0001A169u, sub_0001A169); /* call 0x0001A169 */

loc_000D64B1: ;
    goto loc_000D64B5;

loc_000D64B3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D64B5: ;
    ecx = MEM32(edi + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D64C2u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000D64C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x000D64CCu); RECOMP_ABI_CALL(0x000284F3u, sub_000284F3); /* call 0x000284F3 */

loc_000D64CC: ;
    goto loc_000D64D2;

loc_000D64CE: ;
    ebp = MEM32(esp + 0x14);

loc_000D64D2: ;
    ebx = MEM32(esp + 0x10);

loc_000D64D6: ;
    edi = MEM32(esp + 0x20);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_000D6410; /* jl: less (signed <) */

loc_000D64E7: ;
    esi = MEM32(esp + 0x18);

loc_000D64EB: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000D63D3; /* jl: less (signed <) */

loc_000D64FB: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000D64FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6560
 * Original: 0x000D6560 - 0x000D6588 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6560: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8960F8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8960F8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D657A; /* jne: not equal / not zero */

loc_000D656C: ;
    edx = (uint32_t)(int32_t)SMEM8(0x8960F5);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D657A; /* jne: not equal / not zero */

loc_000D6577: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000D657A: ;
    MEM32(0x8960F8) = eax;
    MEM8(0x8960F5) = LO8(ecx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D65A0
 * Original: 0x000D65A0 - 0x000D65AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D65A0(void)
{

loc_000D65A0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D65B0
 * Original: 0x000D65B0 - 0x000D65BD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D65B0(void)
{

loc_000D65B0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = ecx + eax * 2;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D65C0
 * Original: 0x000D65C0 - 0x000D65CF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D65C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D65C0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D65E0
 * Original: 0x000D65E0 - 0x000D65EC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D65E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D65E0: ;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D65F0
 * Original: 0x000D65F0 - 0x000D65FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D65F0(void)
{

loc_000D65F0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D6600
 * Original: 0x000D6600 - 0x000D660A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6600(void)
{

loc_000D6600: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D6610
 * Original: 0x000D6610 - 0x000D669D (141 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6610: ;
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(0x8960F0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D669B; /* jge: greater or equal (signed >=) */

loc_000D661C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    edi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = SX8(LO8(ecx));
    SET_LO8(ecx, MEM8(esp + 0x18));
    eax = eax * 4 + 0x895B28;
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x1C));
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax) = LO8(ebx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(eax, MEM8(0x8960F0));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x8960F0) = LO8(eax);
    eax = SX8(LO8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000D6691; /* jle: less or equal (signed <=) */

loc_000D666A: ;
    /* nop */

loc_000D6670: ;
    esi = (uint32_t)(int32_t)SMEM8(ecx * 4 + 0x895B28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D668C; /* jne: not equal / not zero */

loc_000D667C: ;
    esi = (uint32_t)(int32_t)SMEM8(ecx * 4 + 0x895B29);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6698; /* je: equal / zero */

loc_000D6688: ;
    edx = MEM32(esp + 0xC);

loc_000D668C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D6670; /* jl: less (signed <) */

loc_000D6691: ;
    MEM32(ebx * 4 + 0x895B20) = MEM32(ebx * 4 + 0x895B20) + 1;
    _fa = (uint32_t)(MEM32(ebx * 4 + 0x895B20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000D6698: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000D669B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D66C0
 * Original: 0x000D66C0 - 0x000D6829 (361 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D66C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D66C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(ebp + 0x30);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;

loc_000D66E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6711; /* jge: greater or equal (signed >=) */

loc_000D66E5: ;
    ecx = MEM32(esi * 4 + 0x8F00F8);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D66F4u); RECOMP_ABI_CALL(0x00020E7Eu, sub_00020E7E); /* call 0x00020E7E */

loc_000D66F4: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D670C; /* je: equal / zero */

loc_000D66FA: ;
    eax = MEM32(ecx + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D670A; /* jne: not equal / not zero */

loc_000D6704: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D670C; /* jne: not equal / not zero */

loc_000D670A: ;
    SET_LO8(ebx, 1);

loc_000D670C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D66E0; /* jne: not equal / not zero */

loc_000D6711: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    SET_LO8(ebx, MEM8(esp + 0x20));
    edi = MEM32(esp + 0x1C);
    MEM32(ecx + 0x1E4) = 1;
    eax = esi + esi * 4;
    MEM32(ebp + 0x1E4) = 0;
    eax = edx + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x895B8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x895B8C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = LO8(ebx);
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edi;
    edi = MEM32(esi * 4 + 0x8F0040);
    MEM8(eax + 2) = 1;
    MEM8(eax + 1) = LO8(ebx);
    _fa = (uint32_t)(MEM8(edi + 0xD2)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xD2), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6782; /* jne: not equal / not zero */

loc_000D6767: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D677E; /* je: equal / zero */

loc_000D676B: ;
    SET_LO8(ebx, MEM8(esi + 0x8960F6));
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x8960F6) = LO8(ebx);
    MEM8(eax + 3) = LO8(ebx);
    goto loc_000D6790;

loc_000D677E: ;
    ebx = MEM32(esp + 0x18);

loc_000D6782: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM8(eax + 3) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000D6790; /* je: equal / zero */

loc_000D678A: ;
    MEM8(edi + 0xD2) = MEM8(edi + 0xD2) - 1;
    _fa = (uint32_t)(MEM8(edi + 0xD2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_000D6790: ;
    ebp = (uint32_t)(int32_t)SMEM8(0x8960F1);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D67ED; /* jle: less or equal (signed <=) */

loc_000D679D: ;
    /* nop */

loc_000D67A0: ;
    eax = edi + edi * 2;
    ebx = (uint32_t)(int32_t)SMEM8(eax * 2 + 0x895B50);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    eax = eax * 2 + 0x895B50;
    if (CMP_NE(_fa, _fb)) goto loc_000D67E8; /* jne: not equal / not zero */

loc_000D67B6: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax + 1);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D67E8; /* jne: not equal / not zero */

loc_000D67C0: ;
    ebx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D67D5; /* je: equal / zero */

loc_000D67C8: ;
    SET_LO8(ebx, MEM8(eax + 3));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D67DB; /* je: equal / zero */

loc_000D67D0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    goto loc_000D67D9;

loc_000D67D5: ;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 3), 4 (8-bit) */

loc_000D67D9: ;
    if (CMP_NE(_fa, _fb)) goto loc_000D67E8; /* jne: not equal / not zero */

loc_000D67DB: ;
    MEM16(eax + 4) = LO16(edx);
    ebp = (uint32_t)(int32_t)SMEM8(0x8960F1);
    edi = ebp;

loc_000D67E8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D67A0; /* jl: less (signed <) */

loc_000D67ED: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6824; /* je: equal / zero */

loc_000D67F4: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8960F8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8960F8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D680D; /* jne: not equal / not zero */

loc_000D6800: ;
    edx = (uint32_t)(int32_t)SMEM8(0x8960F5);
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6824; /* je: equal / zero */

loc_000D680D: ;
    MEM32(0x8960F8) = eax;
    SET_LO8(eax, MEM8(esp + 0x24));
    PUSH32(esp, ecx);
    MEM8(0x8960F5) = LO8(eax);
    PUSH32(esp, 0x000D6821u); RECOMP_ABI_CALL(0x0002B6F3u, sub_0002B6F3); /* call 0x0002B6F3 */

loc_000D6821: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6824: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6890
 * Original: 0x000D6890 - 0x000D68FF (111 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6890: ;
    edx = (uint32_t)(int32_t)SMEM8(0x8960F0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D68FE; /* jle: less or equal (signed <=) */

loc_000D689D: ;
    eax = 0x895B28;
    PUSH32(esp, edi);

loc_000D68A3: ;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 3), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D68B0; /* jne: not equal / not zero */

loc_000D68A9: ;
    edi = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D68BA; /* jne: not equal / not zero */

loc_000D68B0: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D68A3; /* jl: less (signed <) */

loc_000D68B8: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000D68BA: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    edx = (uint32_t)(int32_t)SMEM8(eax + 1);
    MEM8(eax + 3) = 0;
    MEM8(eax + 2) = 0;
    ecx = ecx + ecx * 4;
    eax = edx + ecx * 4;
    ecx = MEM32(eax * 4 + 0x8E8FA8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(ecx + 0x1E4) = 0;
    ecx = MEM32(eax * 4 + 0x895B20);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax * 4 + 0x895B20) = ecx;
    POP32(esp, edi);
    eax = eax * 4 + 0x895B20;

loc_000D68FE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6920
 * Original: 0x000D6920 - 0x000D6A30 (272 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D6920: ;
    eax = MEM32(0x8F0044);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xD2);
    eax = MEM32(0x8F0040);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xD2);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D6A2C; /* je: equal / zero */

loc_000D6945: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_000D6958; /* jg: greater (signed >) */

loc_000D6956: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000D6958: ;
    MEM32(esp + 0x14) = ecx;
    ecx = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx + 0x895B8C;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    edi = esp + 0x1C;
    eax = ecx + 4;
    esi = ecx + 0x14;
    MEM32(esp + 0x10) = 0x12;

loc_000D6986: ;
    SET_LO8(ecx, MEM8(eax + -2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D69E2; /* je: equal / zero */

loc_000D698D: ;
    SET_LO8(ecx, MEM8(eax + -3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D69E2; /* je: equal / zero */

loc_000D6994: ;
    SET_LO8(edx, MEM8(eax + -1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ecx = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000D69D3; /* jne: not equal / not zero */

loc_000D699D: ;
    MEM32(edi) = ecx;
    SET_LO8(ecx, MEM8(esi + -10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D69AF; /* je: equal / zero */

loc_000D69A6: ;
    ecx = MEM32(edi);
    edx = MEM32(esi + -8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;

loc_000D69AF: ;
    SET_LO8(ecx, MEM8(esi + -2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D69BE; /* je: equal / zero */

loc_000D69B6: ;
    edx = MEM32(edi);
    ecx = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = edx;

loc_000D69BE: ;
    SET_LO8(ecx, MEM8(esi + 6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D69CE; /* je: equal / zero */

loc_000D69C5: ;
    ecx = MEM32(edi);
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;

loc_000D69CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D69E2;

loc_000D69D3: ;
    edx = SX8(LO8(edx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D69E2; /* jle: less or equal (signed <=) */

loc_000D69DC: ;
    MEM32(esp + 0x18) = ecx;
    ebx = edx;

loc_000D69E2: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_000D6986; /* jne: not equal / not zero */

loc_000D69F3: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D6A09; /* jl: less (signed <) */

loc_000D69FF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6A09; /* je: equal / zero */

loc_000D6A03: ;
    eax = ecx;
    ecx = edx;
    goto loc_000D6A0B;

loc_000D6A09: ;
    eax = edx;

loc_000D6A0B: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6A1C; /* jne: not equal / not zero */

loc_000D6A12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D6A1C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6A28; /* je: equal / zero */

loc_000D6A20: ;
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000D6A12; /* jne: not equal / not zero */

loc_000D6A26: ;
    eax = ecx;

loc_000D6A28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000D6A2C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6A80
 * Original: 0x000D6A80 - 0x000D6AC2 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6A80: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = eax + 0x14;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6ABC; /* jge: greater or equal (signed >=) */

loc_000D6A93: ;
    PUSH32(esp, edi);
    goto loc_000D6AA0;

    /* nop */
    /* nop */

loc_000D6AA0: ;
    edi = MEM32(eax * 4 + 0x8E8FA8);
    _fa = (uint32_t)(MEM32(edi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1B4), 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6AB1; /* jge: greater or equal (signed >=) */

loc_000D6AB0: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000D6AB1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D6AA0; /* jl: less (signed <) */

loc_000D6AB6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_000D6ABF; /* jge: greater or equal (signed >=) */

loc_000D6ABC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D6ABF: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6AE0
 * Original: 0x000D6AE0 - 0x000D6B5F (127 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6AE0: ;
    SET_LO8(edx, MEM8(0x89608C));
    PUSH32(esp, ebx);
    ebx = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D6B0A; /* je: equal / zero */

loc_000D6AF2: ;
    edx = ebx + 1;

loc_000D6AF5: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x89608C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6B0A; /* je: equal / zero */

loc_000D6B00: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + 0x89608C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x89608C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6AF5; /* jne: not equal / not zero */

loc_000D6B0A: ;
    SET_LO8(edx, MEM8(eax * 4 + 0x896096));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6B21; /* je: equal / zero */

loc_000D6B15: ;
    SET_LO8(edx, MEM8(ecx + eax * 4 + 0x896097));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6B15; /* jne: not equal / not zero */

loc_000D6B21: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 0x89608C) = LO8(ebx);
    SET_LO8(edx, MEM8(eax + 0x8960E6));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    edx = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_000D6B3E; /* je: equal / zero */

loc_000D6B37: ;
    esi = edx + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6B46; /* je: equal / zero */

loc_000D6B3E: ;
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 0x8960E6) = LO8(edx);

loc_000D6B46: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(ecx + eax * 4 + 0x896096) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x14));
    POP32(esp, esi);
    MEM8(ecx + eax * 4 + 0x8960BE) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6B80
 * Original: 0x000D6B80 - 0x000D6B9F (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6B80: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x8F0040);
    SET_LO8(ecx, MEM8(eax + 0xD2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 5 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6B9E; /* jge: greater or equal (signed >=) */

loc_000D6B96: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 0xD2) = LO8(ecx);

loc_000D6B9E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6BB0
 * Original: 0x000D6BB0 - 0x000D6C03 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6BB0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx * 4 + 0x8F0040);
    _fa = (uint32_t)(MEM8(eax + 0xD2)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xD2), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6BFC; /* jne: not equal / not zero */

loc_000D6BC4: ;
    eax = edx + edx * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x895B8D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x895B8D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);

loc_000D6BD2: ;
    SET_LO8(ebx, MEM8(eax + 2));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6BDE; /* jne: not equal / not zero */

loc_000D6BD9: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6BE9; /* jne: not equal / not zero */

loc_000D6BDE: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D6BD2; /* jl: less (signed <) */

loc_000D6BE7: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D6BE9: ;
    SET_LO8(ecx, MEM8(edx + 0x8960F6));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx + 0x8960F6) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D6BFC: ;
    MEM8(eax + 0xD2) = MEM8(eax + 0xD2) - 1;
    _fa = (uint32_t)(MEM8(eax + 0xD2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6C20
 * Original: 0x000D6C20 - 0x000D6C55 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6C20: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(0x8960F0);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D6C53; /* jle: less or equal (signed <=) */

loc_000D6C31: ;
    ecx = 0x895B28;

loc_000D6C36: ;
    _fa = (uint32_t)(MEM8(ecx + 3)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 3), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6C46; /* je: equal / zero */

loc_000D6C3C: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D6C36; /* jl: less (signed <) */

loc_000D6C44: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D6C46: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 1);
    eax = eax + eax * 4;
    eax = ecx + eax * 4;

loc_000D6C53: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6C70
 * Original: 0x000D6C70 - 0x000D6CD4 (100 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6C70: ;
    ecx = MEM32(esp + 4);
    ecx = ecx + ecx * 4;
    PUSH32(esp, esi);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x8E8FA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8E8FA8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 4;
    edx = 3;
    edi = edi;

loc_000D6C90: ;
    edi = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1B4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6C9B; /* jne: not equal / not zero */

loc_000D6C9A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000D6C9B: ;
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(edi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1B4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6CA7; /* jne: not equal / not zero */

loc_000D6CA6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000D6CA7: ;
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(edi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1B4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6CB3; /* jne: not equal / not zero */

loc_000D6CB2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000D6CB3: ;
    edi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(MEM32(edi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1B4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6CBF; /* jne: not equal / not zero */

loc_000D6CBE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000D6CBF: ;
    edi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(MEM32(edi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1B4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6CCB; /* jne: not equal / not zero */

loc_000D6CCA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000D6CCB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000D6C90; /* jne: not equal / not zero */

loc_000D6CD1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6CF0
 * Original: 0x000D6CF0 - 0x000D6CFC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6CF0(void)
{

loc_000D6CF0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x895B20);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6D00
 * Original: 0x000D6D00 - 0x000D6D17 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6D00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x8960F0) = LO8(eax);
    MEM32(0x895B20) = eax;
    MEM32(0x895B24) = eax;
    MEM8(0x8960F2) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6D20
 * Original: 0x000D6D20 - 0x000D6D55 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6D20: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x1C) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM8(eax + 0x1D) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM16(eax + 0xC) = 0x35;
    MEM32(eax) = 0x7C9748;
    MEM8(eax + 0x1E) = LO8(ecx);
    MEM8(eax + 0x1F) = LO8(edx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000D6D70
 * Original: 0x000D6D70 - 0x000D6D76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6D70(void)
{

loc_000D6D70: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6D80
 * Original: 0x000D6D80 - 0x000D6D86 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6D80(void)
{

loc_000D6D80: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6D90
 * Original: 0x000D6D90 - 0x000D6DB1 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6D90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x000D6D9Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D6D9C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6DAD; /* je: equal / zero */

loc_000D6DA3: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000D6DABu); RECOMP_ABI_CALL(0x00024B3Cu, sub_00024B3C); /* call 0x00024B3C */

loc_000D6DAB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D6DAD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6DC0
 * Original: 0x000D6DC0 - 0x000D6DF3 (51 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6DC0(void)
{

loc_000D6DC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000D6DCEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000D6DCE: ;
    MEM32(esi) = 0x7C9748;
    SET_LO8(eax, MEM8(edi + 0x1C));
    MEM8(esi + 0x1C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x1D));
    MEM8(esi + 0x1D) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x1E));
    MEM8(esi + 0x1E) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x1F));
    MEM8(esi + 0x1F) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D6E00
 * Original: 0x000D6E00 - 0x000D6E4A (74 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6E00: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x1C) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM8(eax + 0x1D) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 0x1E) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(eax + 0x1F) = LO8(edx);
    edx = MEM32(esp + 0x18);
    MEM8(eax + 0x20) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    MEM16(eax + 0xC) = 0x35;
    MEM32(eax) = 0x7C9758;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = ecx;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_000D6E60
 * Original: 0x000D6E60 - 0x000D6E77 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6E60: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x31;
    MEM32(eax) = 0x7C9768;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6E80
 * Original: 0x000D6E80 - 0x000D6E83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D6E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6E80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6E90
 * Original: 0x000D6E90 - 0x000D6E96 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6E90(void)
{

loc_000D6E90: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6EA0
 * Original: 0x000D6EA0 - 0x000D6ECE (46 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6EA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    edi = ecx;
    PUSH32(esp, 0x000D6EADu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D6EAD: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6EC9; /* je: equal / zero */

loc_000D6EB6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000D6EBEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000D6EBE: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7C9768;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D6EC9: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6EE0
 * Original: 0x000D6EE0 - 0x000D6F19 (57 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6EE0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    MEM32(eax + 0x1C) = ecx;
    edi = eax + 0x24;
    ecx = 8;
    MEM16(eax + 0xC) = 0x31;
    MEM32(eax) = 0x7C9778;
    MEM32(eax + 0x20) = edx;
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
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000D6F30
 * Original: 0x000D6F30 - 0x000D6F47 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6F30: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x36;
    MEM32(eax) = 0x7C9788;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6F50
 * Original: 0x000D6F50 - 0x000D6F53 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D6F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6F50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6F60
 * Original: 0x000D6F60 - 0x000D6F66 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6F60(void)
{

loc_000D6F60: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6F70
 * Original: 0x000D6F70 - 0x000D6F9E (46 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6F70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    edi = ecx;
    PUSH32(esp, 0x000D6F7Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D6F7D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6F99; /* je: equal / zero */

loc_000D6F86: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000D6F8Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000D6F8E: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7C9788;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D6F99: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6FB0
 * Original: 0x000D6FB0 - 0x000D6FD0 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6FB0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 0xC) = 0x36;
    MEM32(eax) = 0x7C9798;
    MEM32(eax + 0x1C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D6FE0
 * Original: 0x000D6FE0 - 0x000D7002 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6FE0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0x32;
    MEM32(eax) = 0x7C97A8;
    MEM16(eax + 0x1C) = LO16(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D7010
 * Original: 0x000D7010 - 0x000D7016 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7010(void)
{

loc_000D7010: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7020
 * Original: 0x000D7020 - 0x000D7026 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7020(void)
{

loc_000D7020: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7030
 * Original: 0x000D7030 - 0x000D7066 (54 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7030: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x000D703Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D703D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7061; /* je: equal / zero */

loc_000D7046: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000D704Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000D704E: ;
    MEM32(esi) = 0x7C97A8;
    SET_LO16(eax, MEM16(edi + 0x1C));
    MEM16(esi + 0x1C) = LO16(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D7061: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
