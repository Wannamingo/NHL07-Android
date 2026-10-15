/**
 * nhl_07_recomp - Recompiled code chunk 139
 * Functions: 250 (0x00235FA0 - 0x0023E860)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00235FA0
 * Original: 0x00235FA0 - 0x00236063 (195 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00235FA0(void)
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

loc_00235FA0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    edx = MEM32(eax + ecx + 0x8F5C14);
    eax = eax + ecx + 0x8F5BDC;
    ecx = MEM32(eax + 0x38);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 0x3C);
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 0x38);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 0x3C);
    eax = MEM32(eax + 0x38);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = MEM32(esi);
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = 0x6E;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esi + 8);
    eax = 0x52;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    ecx = ecx & 0x7FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = ecx + ebp * 4;
    eax = 0xC7CE0C7Du;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    PUSH32(esp, 0x00236048u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00236048: ;
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    ecx = 8;
    edi = ebx;
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
    eax = ebx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002360A0
 * Original: 0x002360A0 - 0x00236381 (737 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002360A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002360A0: ;
    _fb = (uint32_t)(0x34C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x360);
    eax = MEM32(edi + 0xF10);
    _fb = (uint32_t)(MEM32(edi + 0xF08)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi + 0xF08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002360C3u); RECOMP_ABI_CALL(0x005CC2D3u, sub_005CC2D3); /* call 0x005CC2D3 */

loc_002360C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x54;
    esi = 0x8F97DC;
    MEM32(0x8F97B8) = ebx;
    MEM32(0x8F97BC) = ebx;
    MEM16(edi + 0x143A) = LO16(ebx);
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = 0x8F9C84;
    MEM32(esp + 0x2C) = esi;
    ebp = 0x8F9804;
    goto loc_00236110;

loc_00236107: ;
    edi = MEM32(esp + 0x360);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00236110: ;
    ecx = MEM32(0x8F9CCC);
    eax = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0023612A; /* je: equal / zero */

loc_0023611B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0023612A; /* je: equal / zero */

loc_0023611E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00236125; /* je: equal / zero */

loc_00236121: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0023612D;

loc_00236125: ;
    eax = MEM32(ecx + 8);
    goto loc_0023612D;

loc_0023612A: ;
    eax = MEM32(ecx + 4);

loc_0023612D: ;
    ecx = MEM32(esp + 0x18);
    edx = esp + 0xD4;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x00236144u); RECOMP_ABI_CALL(0x00022F8Fu, sub_00022F8F); /* call 0x00022F8F */

loc_00236144: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x240);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x0023615Au); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0023615A: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00236167u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00236167: ;
    eax = MEM32(esp + 0x34);
    MEM32(esi + -24) = ebx;
    ecx = 1;
    MEM32(esi + -16) = ecx;
    edx = MEM32(esi + -24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(edx + edi + 0xB4));
    edx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 4;
    MEM8(edi + eax * 4 + 0x111D) = LO8(ecx);
    MEM32(esi) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x18) = ebx;
    eax = esp + 0xD8;
    edx = 0x12;
    /* nop */

loc_002361B0: ;
    SET_LO16(ecx, MEM16(eax + -4));
    edi = MEM32(ebp);
    ebx = MEM32(eax + 4);
    MEM16(ebp + 0x10) = LO16(ecx);
    ecx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x3FFF000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi ^ ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp) = edi;
    ecx = edi;
    edi = MEM32(eax + 8);
    edi = edi & 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0x3FFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(ebp + 4);
    ebx = ebx & 0xE001C000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(ebp + 8);
    MEM32(ebp + 4) = edi;
    edi = MEM32(eax + 0xC);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi ^ ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi & 0xFFE00;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx ^ edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(eax + 0x10));
    MEM16(ebp + 0x12) = LO16(edi);
    edi = MEM32(eax + 0x14);
    MEM32(ebp + 8) = ebx;
    ebx = MEM32(ebp + 0xC);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0xFFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(eax + 0x18);
    MEM32(ebp + 0xC) = edi;
    edi = MEM32(eax + 0x1C);
    edi = edi & 0x1FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & 0x1FFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi | ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(ebp + 0x18);
    ebx = ebx & 0xFC000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x18) = edi;
    ebx = MEM32(esi);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ebx;
    ecx = ZX16(MEM16(ebp + 0x12));
    edi = MEM32(esi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 8) = edi;
    if ((_fa != 0)) goto loc_002361B0; /* jne: not equal / not zero */

loc_00236273: ;
    ecx = MEM32(esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4B0);
    eax = 0x63E7063F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    ecx = MEM32(esi + 8);
    eax = 0x63E7063F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = MEM32(esp + 0x10);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ecx;
    eax = MEM32(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    edi = 0x12;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x10) = 2;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = eax;
    /* nop */

loc_002362D0: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002362DAu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_002362DA: ;
    eax = MEM32(esi + -24);
    ecx = MEM32(esp + 0x34);
    edx = ZX8(MEM8(eax + ecx + 0xB4));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023631C; /* jne: not equal / not zero */

loc_002362F0: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    ecx = edi;
    ebx = esp + 0x38;
    PUSH32(esp, 0x00236300u); RECOMP_ABI_CALL(0x00235FA0u, sub_00235FA0); /* call 0x00235FA0 */

loc_00236300: ;
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x34);
    ecx = 8;
    esi = eax;
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
    edi = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0023631C: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_002362D0; /* jne: not equal / not zero */

loc_00236333: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x20);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x778) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x778;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F9C84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x8F9C84 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00236107; /* jl: less (signed <) */

loc_00236376: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00236440
 * Original: 0x00236440 - 0x0023686D (1069 bytes, 327 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00236440: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00236450;

    /* nop */

loc_00236450: ;
    MEM32(esp + esi + 0x28) = edi;
    PUSH32(esp, 0x00236459u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00236459: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi + 0x8F97E4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + edx + -10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + esi + 0x28) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00236478; /* jge: greater or equal (signed >=) */

loc_00236474: ;
    MEM32(esp + esi + 0x28) = edi;

loc_00236478: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx + 0xF50);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + esi + 0x28));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + esi + 0x28) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00236450; /* jl: less (signed <) */

loc_0023649C: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    _fa = (uint32_t)(MEM32(esp + eax * 4 + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax * 4 + 0x28), 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0023651C; /* jl: less (signed <) */

loc_002364B2: ;
    PUSH32(esp, 0x002364B7u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002364B7: ;
    eax = eax & 0x80000003u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002364C3; /* jns: not sign (positive) */

loc_002364BE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002364C3: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0023651C; /* jl: less (signed <) */

loc_002364C9: ;
    PUSH32(esp, 0x002364CEu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002364CE: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002364DA; /* jns: not sign (positive) */

loc_002364D5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002364DA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00236520; /* jle: less or equal (signed <=) */

loc_002364E3: ;
    ecx = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x2C);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xFFFFFFFBu);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x8F9800);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(0x8F97FC);

loc_00236502: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00236502; /* jne: not equal / not zero */

loc_0023650A: ;
    MEM32(esp + 0x2C) = esi;
    MEM32(0x8F9800) = edx;
    MEM32(0x8F97FC) = ecx;
    goto loc_00236520;

loc_0023651C: ;
    MEM32(esp + 0x1C) = edi;

loc_00236520: ;
    esi = 2;

loc_00236525: ;
    PUSH32(esp, 0x0023652Au); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0023652A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00236566; /* jne: not equal / not zero */

loc_0023653C: ;
    PUSH32(esp, 0x00236541u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00236541: ;
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esp + eax * 4 + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    ecx = esp + eax * 4 + 0x28;
    if (CMP_LE(_fas, _fbs)) goto loc_00236566; /* jle: less or equal (signed <=) */

loc_00236550: ;
    ebp = MEM32(eax * 4 + 0x8F97FC);
    eax = eax * 4 + 0x8F97FC;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFBu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebp;
    MEM32(ecx) = edx;

loc_00236566: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00236525; /* jne: not equal / not zero */

loc_00236569: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00236570;

    /* nop */

loc_00236570: ;
    _fa = (uint32_t)(MEM32(esp + eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax + 0x28), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00236598; /* jle: less or equal (signed <=) */

loc_00236576: ;
    ecx = MEM32(eax + 0x8F97F4);
    /* nop */

loc_00236580: ;
    esi = MEM32(esp + eax + 0x28);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(esp + eax + 0x28) = esi;
    if (CMP_G(_fas, _fbs)) goto loc_00236580; /* jg: greater (signed >) */

loc_00236592: ;
    MEM32(eax + 0x8F97F4) = ecx;

loc_00236598: ;
    ecx = MEM32(eax + 0x8F97FC);
    edx = MEM32(eax + 0x8F97F4);
    esi = ecx + ecx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi + edx * 2;
    MEM32(esp + eax + 0x28) = esi;
    MEM32(eax + 0x8F97EC) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00236570; /* jl: less (signed <) */

loc_002365BE: ;
    eax = MEM32(esp + 0x34);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = eax;
    ebp = eax + 0x1114;
    _fb = (uint32_t)(0x1070) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1070;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = 0x8F9816;
    MEM32(esp + 0x24) = eax;
    goto loc_002365F0;

loc_002365E9: ;
    ebx = 1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002365F0: ;
    edx = esi;
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx * 4 + 0x8F97EC));
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + LO16(ecx);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = ebp + 0x10;
    ecx = 0x12;
    goto loc_00236610;

    /* nop */

loc_00236610: ;
    MEM32(eax) = MEM32(eax) & 0xFF000FFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00236610; /* jne: not equal / not zero */

loc_0023661C: ;
    eax = MEM32(esi * 4 + 0x8F97FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00236710; /* jle: less or equal (signed <=) */

loc_0023662B: ;
    goto loc_00236630;

    /* nop */

loc_00236630: ;
    eax = MEM32(esi * 4 + 0x8F97E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023664A; /* jne: not equal / not zero */

loc_0023663B: ;
    PUSH32(esp, 0x00236640u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00236640: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x12;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    goto loc_00236681;

loc_0023664A: ;
    PUSH32(esp, 0x0023664Fu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0023664F: ;
    ecx = MEM32(esi * 4 + 0x8F97E4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x52);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00236681; /* jle: less or equal (signed <=) */

loc_00236665: ;
    esi = MEM32(esp + 0x14);
    /* nop */

loc_00236670: ;
    ecx = ZX16(MEM16(esi));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00236681; /* jbe: below or equal (unsigned <=) */

loc_00236677: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00236670; /* jg: greater (signed >) */

loc_00236681: ;
    edx = edx + edx * 4;
    SET_LO8(eax, MEM8(ebp + edx * 4 + 4));
    esi = ebp + edx * 4;
    _fb = (uint32_t)(5) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 4) = LO8(eax);
    eax = MEM32(esi + 0x10);
    ecx = eax;
    ecx = ecx & 0xFFFF0000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x10) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002366FA; /* jne: not equal / not zero */

loc_002366B7: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002366FA; /* je: equal / zero */

loc_002366BF: ;
    PUSH32(esp, 0x002366C4u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002366C4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002366FA; /* jge: greater or equal (signed >=) */

loc_002366D1: ;
    SET_LO8(eax, MEM8(esi + 4));
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 4) = LO8(eax);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + eax * 4 + 0x28);
    eax = esp + eax * 4 + 0x28;
    edx = edx | 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = ebx;
    MEM32(esi + 0xC) = edx;
    MEM32(eax) = ecx;

loc_002366FA: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx * 4 + 0x8F97FC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    esi = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00236630; /* jl: less (signed <) */

loc_00236710: ;
    eax = MEM32(esi * 4 + 0x8F97F4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00236827; /* jle: less or equal (signed <=) */

loc_00236721: ;
    eax = MEM32(esi * 4 + 0x8F97E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023673D; /* jne: not equal / not zero */

loc_0023672C: ;
    PUSH32(esp, 0x00236731u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00236731: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x12;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx;
    goto loc_00236771;

loc_0023673D: ;
    PUSH32(esp, 0x00236742u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00236742: ;
    ecx = MEM32(esi * 4 + 0x8F97E4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x52);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00236771; /* jle: less or equal (signed <=) */

loc_00236756: ;
    esi = MEM32(esp + 0x14);
    /* nop */

loc_00236760: ;
    ecx = ZX16(MEM16(esi));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00236771; /* jbe: below or equal (unsigned <=) */

loc_00236767: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00236760; /* jg: greater (signed >) */

loc_00236771: ;
    edx = eax + eax * 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    SET_LO8(ecx, MEM8(ebp + edx * 4 + 4));
    edi = ebp + edx * 4;
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edi + 4) = LO8(ecx);
    ecx = MEM32(edi + 0x10);
    edx = ecx;
    edx = edx & 0xFFFFF000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x34);
    MEM32(edi + 0x10) = edx;
    esi = MEM32(ecx + 0xF50);
    edx = MEM32(esp + 0x18);
    eax = MEM32(eax + edx + 0x104);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = (uint32_t)((int32_t)esi * (int32_t)0xF);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    PUSH32(esp, 0x002367CFu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002367CF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2710;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00236811; /* jge: greater or equal (signed >=) */

loc_002367DB: ;
    SET_LO8(eax, MEM8(edi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x11 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00236811; /* jae: above or equal (unsigned >=) */

loc_002367E2: ;
    esi = MEM32(edi + 0xC);
    _fb = (uint32_t)(0xA) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0xA);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edi + 4) = LO8(eax);
    eax = MEM32(edi + 0x10);
    edx = eax;
    edx = edx & 0xFFF00000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x100000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi | 0x40000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & 0xF00000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 0x10) = edx;

loc_00236811: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax * 4 + 0x8F97F4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    esi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00236721; /* jl: less (signed <) */

loc_00236827: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x778) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x778;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x240;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x190;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F9C96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8F9C96 (32-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_002365E9; /* jl: less (signed <) */

loc_00236865: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00236980
 * Original: 0x00236980 - 0x00236D5B (987 bytes, 271 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00236980: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = 0x8F9816;
    MEM32(esp + 0x1C) = ebx;

loc_00236994: ;
    eax = MEM32(0x8F97C0);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = esi;
    goto loc_002369B0;

loc_002369A5: ;
    eax = MEM32(0x8F97C0);
    esi = MEM32(esp + 0x18);
    edi = edi;

loc_002369B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00236A40; /* ja: above (unsigned >) */

loc_002369B9: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x236D5C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002369C0u) goto loc_002369C0;
    if (_jt == 0x002369F7u) goto loc_002369F7;
    if (_jt == 0x002369FEu) goto loc_002369FE;
    if (_jt == 0x00236A36u) goto loc_00236A36;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002369C0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x23);
    ecx = eax;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = edx;
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ebp = _sv >> _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002369DBu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002369DB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xF0;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0xC);
    ebp = edx + ebp + -120;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0xC) = eax;
    goto loc_00236A48;

loc_002369F7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    ecx = eax;
    goto loc_00236A04;

loc_002369FE: ;
    ecx = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }

loc_00236A04: ;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = edx;
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ebp = _sv >> _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00236A1Au); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00236A1A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xF0;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esp + 0xC);
    eax = edx + ebp + -120;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = ecx;
    goto loc_00236A48;

loc_00236A36: ;
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = edx;
    goto loc_00236A48;

loc_00236A40: ;
    MEM32(esp + 0x10) = 0;

loc_00236A48: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax + esi * 2;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x34) = esi;
    MEM32(esp + 0x28) = edx;

loc_00236A63: ;
    eax = MEM32(esp + 0x34);
    eax = ZX8(MEM8(eax + ebp + 0x80));
    SET_LO16(edx, MEM16(esp + 0x10));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 4;
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebx + ecx * 4 + 0x1114) = MEM16(ebx + ecx * 4 + 0x1114) + LO16(edx);
    _fa = (uint32_t)(MEM16(ebx + ecx * 4 + 0x1114)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = MEM32(esp + 0x28);
    esi = ebx + ecx * 4 + 0x1114;
    ecx = ZX16(MEM16(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    eax = 0xC7CE0C7Du;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx + edx + 0xA;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x30) = 3;

loc_00236AB4: ;
    PUSH32(esp, 0x00236AB9u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00236AB9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x2C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x2C))); }
    eax = MEM32(esp + 0x24);
    ecx = eax + edx + 1;
    eax = MEM32(esp + 0x30);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x30) = eax;
    if ((_fa != 0)) goto loc_00236AB4; /* jne: not equal / not zero */

loc_00236AD5: ;
    eax = 0x1B4E81B5;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO16(ecx, MEM16(esi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX16(LO16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00236AF7; /* jle: less or equal (signed <=) */

loc_00236AF0: ;
    MEM16(esi) = 0x3C;
    goto loc_00236AFF;

loc_00236AF7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(esi) = LO16(ecx);

loc_00236AFF: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41F00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0xC), 0x41F00000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00236B9A; /* je: equal / zero */

loc_00236B0C: ;
    PUSH32(esp, 0x00236B11u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00236B11: ;
    ebp = MEM32(0x8F97C0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    SET_LO16(ecx, MEM16(esi));
    eax = ZX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    ebp = MEM32(esp + 0x14);
    edx = eax;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x34);
    MEM16(esi) = LO16(ecx);
    ecx = ZX8(MEM8(edx + ebp + 0x83));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 4;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebx + ecx * 4 + 0x1114) = MEM16(ebx + ecx * 4 + 0x1114) + LO16(eax);
    _fa = (uint32_t)(MEM16(ebx + ecx * 4 + 0x1114)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ebx + ecx * 4 + 0x1114;
    ecx = ZX8(MEM8(edx + ebp + 0x86));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 4;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebx + ecx * 4 + 0x1114) = MEM16(ebx + ecx * 4 + 0x1114) + LO16(eax);
    _fa = (uint32_t)(MEM16(ebx + ecx * 4 + 0x1114)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ebx + ecx * 4 + 0x1114;
    ecx = ZX8(MEM8(edx + ebp + 0x89));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + ecx * 4;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebx + edx * 4 + 0x1114) = MEM16(ebx + edx * 4 + 0x1114) + LO16(eax);
    _fa = (uint32_t)(MEM16(ebx + edx * 4 + 0x1114)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ebx + edx * 4 + 0x1114;

loc_00236B9A: ;
    ecx = MEM32(esp + 0x28);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00236A63; /* jl: less (signed <) */

loc_00236BB3: ;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = ebp;
    ecx = eax + edx * 2 + 0x8C;
    MEM32(esp + 0x30) = ecx;
    /* nop */

loc_00236BE0: ;
    edx = MEM32(esp + 0x30);
    eax = ZX8(MEM8(edx + ebp));
    SET_LO16(ecx, MEM16(esp + 0x10));
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 4;
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebx + eax * 4 + 0x1114) = MEM16(ebx + eax * 4 + 0x1114) + LO16(ecx);
    _fa = (uint32_t)(MEM16(ebx + eax * 4 + 0x1114)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(MEM16(edx));
    esi = ebx + eax * 4 + 0x1114;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    eax = 0xC7CE0C7Du;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx + edx + 0xA;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x34) = 3;
    /* nop */

loc_00236C30: ;
    PUSH32(esp, 0x00236C35u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00236C35: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x2C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x2C))); }
    eax = MEM32(esp + 0x28);
    ecx = eax + edx + 1;
    eax = MEM32(esp + 0x34);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x34) = eax;
    if ((_fa != 0)) goto loc_00236C30; /* jne: not equal / not zero */

loc_00236C51: ;
    eax = 0x1B4E81B5;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO16(ecx, MEM16(esi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX16(LO16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00236C73; /* jle: less or equal (signed <=) */

loc_00236C6C: ;
    MEM16(esi) = 0x3C;
    goto loc_00236C7B;

loc_00236C73: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(esi) = LO16(ecx);

loc_00236C7B: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41F00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0xC), 0x41F00000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00236D00; /* je: equal / zero */

loc_00236C84: ;
    PUSH32(esp, 0x00236C89u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00236C89: ;
    ebp = MEM32(0x8F97C0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    SET_LO16(ecx, MEM16(esi));
    eax = ZX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    ebp = MEM32(esp + 0x14);
    edx = eax;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x1C);
    MEM16(esi) = LO16(ecx);
    esi = MEM32(esp + 0x18);
    ecx = edx + esi * 2 + 0x8E;
    ecx = ZX8(MEM8(ecx + ebp));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 4;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebx + ecx * 4 + 0x1114) = MEM16(ebx + ecx * 4 + 0x1114) + LO16(eax);
    _fa = (uint32_t)(MEM16(ebx + ecx * 4 + 0x1114)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ebx + ecx * 4 + 0x1114;
    edx = edx + esi * 2 + 0x90;
    ecx = ZX8(MEM8(edx + ebp));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 4;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebx + ecx * 4 + 0x1114) = MEM16(ebx + ecx * 4 + 0x1114) + LO16(eax);
    _fa = (uint32_t)(MEM16(ebx + ecx * 4 + 0x1114)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ebx + ecx * 4 + 0x1114;

loc_00236D00: ;
    ecx = MEM32(esp + 0x24);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x24) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00236BE0; /* jl: less (signed <) */

loc_00236D19: ;
    eax = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002369A5; /* jl: less (signed <) */

loc_00236D2B: ;
    eax = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x240;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x778) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x778;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F9C96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8F9C96 (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00236994; /* jl: less (signed <) */

loc_00236D54: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00236E70
 * Original: 0x00236E70 - 0x00236FBF (335 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00236E70: ;
    SET_LO8(ecx, MEM8(eax + 0xF52));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00236FBB; /* je: equal / zero */

loc_00236E82: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x10) = ebp;

loc_00236E94: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x108;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00236EA0: ;
    esi = MEM32(ebp);
    esi = esi & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x32;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00236EAEu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00236EAE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3E8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    eax = 0x10624DD3;
    ebx = edx;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00236F88; /* jge: greater or equal (signed >=) */

loc_00236ED6: ;
    ebx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00236EE5u); RECOMP_ABI_CALL(0x0022C460u, sub_0022C460); /* call 0x0022C460 */

loc_00236EE5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00236F88; /* je: equal / zero */

loc_00236EED: ;
    PUSH32(esp, 0x00236EF2u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00236EF2: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx + ecx * 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x11;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi * 4 + 0x8F6C38);
    ecx = eax;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x1F00000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi * 4 + 0x8F6C38) = ecx;
    PUSH32(esp, 0x00236F26u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00236F26: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x28 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00236F4F; /* jge: greater or equal (signed >=) */

loc_00236F33: ;
    edx = MEM32(esi * 4 + 0x8F6C38);
    edx = edx & 0xF5FFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x4000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi * 4 + 0x8F6C38) = edx;
    goto loc_00236F88;

loc_00236F4F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x50 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00236F6E; /* jge: greater or equal (signed >=) */

loc_00236F54: ;
    eax = MEM32(esi * 4 + 0x8F6C38);
    eax = eax & 0xF7FFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x6000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi * 4 + 0x8F6C38) = eax;
    goto loc_00236F88;

loc_00236F6E: ;
    ecx = MEM32(esi * 4 + 0x8F6C38);
    ecx = ecx & 0xF9FFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x8000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi * 4 + 0x8F6C38) = ecx;

loc_00236F88: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x54;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00236EA0; /* jl: less (signed <) */

loc_00236F95: ;
    eax = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x778) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x778;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00236E94; /* jl: less (signed <) */

loc_00236FB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00236FBB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00237020
 * Original: 0x00237020 - 0x002372B9 (665 bytes, 209 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00237020: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax + 0x105C;
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x1114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1114;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0;
    edi = 0x8F981C;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x18) = eax;
    goto loc_00237050;

loc_00237049: ;
    ebp = MEM32(esp + 0x10);
    /* nop */

loc_00237050: ;
    esi = MEM32(esp + 0x18);
    MEM16(ebp) = 0;
    MEM32(esp + 0x20) = 0x12;
    goto loc_00237070;

loc_00237064: ;
    ebp = MEM32(esp + 0x10);
    goto loc_00237070;

    /* nop */

loc_00237070: ;
    ecx = MEM32(edi + -8);
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    eax = 0xC7CE0C7Du;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx + edx + 0xA;
    MEM32(esp + 0x24) = edx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = 3;

loc_00237098: ;
    PUSH32(esp, 0x0023709Du); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0023709D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x24)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x24))); }
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx + edx + 1;
    if ((_fa != 0)) goto loc_00237098; /* jne: not equal / not zero */

loc_002370AC: ;
    eax = 0x1B4E81B5;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0xC) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_002370D0; /* jne: not equal / not zero */

loc_002370C4: ;
    PUSH32(esp, 0x002370C9u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002370C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002370D0; /* je: equal / zero */

loc_002370CD: ;
    MEM8(esi + 0xC) = MEM8(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_002370D0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0xC));
    eax = 0xC7CE0C7Du;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebp) = MEM16(ebp) + LO16(ecx);
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edx = MEM32(edi);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x1FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x64);
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = edx + edx + 0xA;
    MEM32(esp + 0x24) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 3;

loc_00237106: ;
    PUSH32(esp, 0x0023710Bu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0023710B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x24)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x24))); }
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx + edx + 1;
    if ((_fa != 0)) goto loc_00237106; /* jne: not equal / not zero */

loc_00237117: ;
    ebp = MEM32(esi + 8);
    eax = 0x1B4E81B5;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x15) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xFE00000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ebp;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = edx;
    edx = MEM32(edi);
    edx = edx & 0x1FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x64);
    eax = 0xC7CE0C7Du;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = edx + edx + 0xA;
    MEM32(esp + 0x24) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 3;

loc_00237161: ;
    PUSH32(esp, 0x00237166u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00237166: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x24)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x24))); }
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx + edx + 1;
    if ((_fa != 0)) goto loc_00237161; /* jne: not equal / not zero */

loc_00237172: ;
    ebp = MEM32(esi + 8);
    eax = 0x1B4E81B5;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x1FC000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ebp;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = edx;
    edx = MEM32(edi + -12);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = (uint32_t)((int32_t)edx * (int32_t)0x64);
    eax = 0xC7CE0C7Du;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = edx + edx + 0xA;
    MEM32(esp + 0x24) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 3;
    /* nop */

loc_002371C0: ;
    PUSH32(esp, 0x002371C5u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002371C5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x24)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x24))); }
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx + edx + 1;
    if ((_fa != 0)) goto loc_002371C0; /* jne: not equal / not zero */

loc_002371D1: ;
    eax = 0x1B4E81B5;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esp + 0x20);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0xD) = LO8(ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_00237064; /* jne: not equal / not zero */

loc_002371FA: ;
    eax = MEM32(0x8F97B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237214; /* je: equal / zero */

loc_00237203: ;
    PUSH32(esp, 0x00237208u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00237208: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    goto loc_00237216;

loc_00237214: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00237216: ;
    esi = MEM32(esp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0023722B; /* jl: less (signed <) */

loc_00237228: ;
    ebx = eax + -1;

loc_0023722B: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00237258; /* jle: less or equal (signed <=) */

loc_00237233: ;
    PUSH32(esp, 0x00237238u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00237238: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ecx, MEM8(edx + esi + 0x36));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx + esi + 0x36) = LO8(ecx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx + esi + 0x36;
    edx = (uint32_t)(int32_t)SMEM16(esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00237233; /* jl: less (signed <) */

loc_00237258: ;
    MEM8(esi + 0x39) = LO8(ebx);
    eax = MEM32(0x8F97B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237287; /* je: equal / zero */

loc_00237264: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(eax * 4 + 0x8F97D4);
    ecx = eax;
    ecx = ecx ^ 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x8F97D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx * 4 + 0x8F97D4) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00237287; /* jle: less or equal (signed <=) */

loc_0023727D: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x39) = LO8(ecx);
    MEM16(esi) = MEM16(esi) + 1;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_00237287: ;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x190;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F9C9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x8F9C9C (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00237049; /* jl: less (signed <) */

loc_002372B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00237360
 * Original: 0x00237360 - 0x00237529 (457 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00237360: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 3;

loc_00237370: ;
    PUSH32(esp, 0x00237375u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00237375: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x30;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00237370; /* jne: not equal / not zero */

loc_00237382: ;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x10) = ecx;
    goto loc_002373B0;

loc_002373A4: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);
    /* nop */

loc_002373B0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    ebp = MEM32(esp + 0x2C);
    edx = ecx + ecx * 2 + 0x81;
    ebx = ZX8(MEM8(edx + ebp));
    edx = ZX8(MEM8(edx + ebp + 0x778));
    MEM32(esp + 0x20) = edx;
    if (CMP_A(_fa, _fb)) goto loc_00237405; /* ja: above (unsigned >) */

loc_002373D0: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x23752C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002373D7u) goto loc_002373D7;
    if (_jt == 0x002373DEu) goto loc_002373DE;
    if (_jt == 0x002373E5u) goto loc_002373E5;
    if (_jt == 0x002373EDu) goto loc_002373ED;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002373D7: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x23);
    goto loc_002373F2;

loc_002373DE: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E);
    goto loc_002373F2;

loc_002373E5: ;
    ecx = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    goto loc_002373F2;

loc_002373ED: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF);

loc_002373F2: ;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
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
    goto loc_00237407;

loc_00237405: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00237407: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(ecx + 0x8F5C18);
    edi = MEM32(ecx + 0x8F6390);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x24) = eax;
    eax = ebx + ebx * 4;
    edx = MEM32(ebp + eax * 4 + 0x111C);
    ebx = ebp + eax * 4 + 0x1114;
    eax = MEM32(esp + 0x20);
    ecx = eax + eax * 4;
    eax = esi;
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp + ecx * 4 + 0x12A4;
    edx = edx & 0xFFFFFF80u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 8) = edx;
    ecx = MEM32(ebp + 8);
    ecx = ecx & 0xFFFFFF80u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi & 0x3F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 8) = ecx;
    PUSH32(esp, 0x00237467u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00237467: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x24);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + eax * 2;
    eax = edx + eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00237487; /* jge: greater or equal (signed >=) */

loc_00237483: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00237491;

loc_00237487: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00237491; /* jle: less or equal (signed <=) */

loc_0023748C: ;
    eax = 0x64;

loc_00237491: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    edi = MEM32(ebx + 8);
    ecx = eax;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x3F80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi;
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x14);
    MEM32(ebx + 8) = eax;
    edx = MEM32(ebp + 8);
    ebx = eax;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0x7F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi & 0x3F80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    eax = eax ^ esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(esp + 0x18);
    MEM32(ebp + 8) = eax;
    ebp = eax;
    eax = MEM32(esp + 0x10);
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ebp = _sv >> _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebp = ebp & 0x7F;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002373A4; /* jl: less (signed <) */

loc_00237509: ;
    eax = MEM32(esp + 0x2C);
    POP32(esp, edi);
    SET_LO16(edx, LO16(ecx));
    SET_LO16(ecx, LO16(esi));
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(eax + 0x106C) = LO16(edx);
    MEM16(eax + 0x10C8) = LO16(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002375C0
 * Original: 0x002375C0 - 0x00237FAC (2540 bytes, 648 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002375C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002375C0: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0xF50);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = esi;
    if ((_fa != 0)) goto loc_00237629; /* jne: not equal / not zero */

loc_002375D9: ;
    _fa = (uint32_t)(MEM32(0x8F97B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F97B8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023764E; /* je: equal / zero */

loc_002375E1: ;
    PUSH32(esp, 0x002375E6u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002375E6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x32 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002375F7; /* jge: greater or equal (signed >=) */

loc_002375F3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0023760E;

loc_002375F7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x55) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x55 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00237603; /* jge: greater or equal (signed >=) */

loc_002375FC: ;
    ebx = 1;
    goto loc_0023760E;

loc_00237603: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x5F (32-bit) */
    SET_LO8(ebx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0023760E: ;
    PUSH32(esp, 0x00237613u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00237613: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x4B0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x4B0;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = edx;
    goto loc_0023764E;

loc_00237629: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002376FA; /* jne: not equal / not zero */

loc_00237632: ;
    _fa = (uint32_t)(MEM32(0x8F97B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F97B8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023764E; /* je: equal / zero */

loc_0023763A: ;
    _fa = (uint32_t)(MEM32(0x8F97BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F97BC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237726; /* je: equal / zero */

loc_00237646: ;
    MEM32(esp + 0xC) = 0x12C;

loc_0023764E: ;
    _fa = (uint32_t)(MEM16(edi + 0x143A)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x143A), LO16(esi) (16-bit) */
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x1092);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x10EE);
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x1093);
    MEM32(esp + 0x28) = edx;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x10EF);
    MEM32(esp + 0x18) = eax;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x1094);
    MEM32(esp + 0x2C) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x10F0);
    MEM32(esp + 0x1C) = edx;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x1095);
    MEM32(esp + 0x30) = eax;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x10F1);
    PUSH32(esp, ebp);
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x50) = esi;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x44) = esi;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x48) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00237748; /* jle: less or equal (signed <=) */

loc_002376D0: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x143A);
    eax = edi + 0x143E;
    SET_LO8(ebx, 0x20);
    /* nop */

loc_002376E0: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00237742; /* jne: not equal / not zero */

loc_002376E5: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237742; /* je: equal / zero */

loc_002376EA: ;
    SET_LO8(ecx, MEM8(eax + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = ZX8(MEM8(eax));
    if (CMP_NE(_fa, _fb)) goto loc_0023773C; /* jne: not equal / not zero */

loc_002376F4: ;
    ecx = esp + ecx * 4 + 0x4C;
    goto loc_00237740;

loc_002376FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237708; /* je: equal / zero */

loc_002376FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023764E; /* jne: not equal / not zero */

loc_00237708: ;
    _fa = (uint32_t)(MEM32(0x8F97B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F97B8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023764E; /* je: equal / zero */

loc_00237714: ;
    edx = MEM32(0x8F97D4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8F97D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x8F97D8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237646; /* je: equal / zero */

loc_00237726: ;
    PUSH32(esp, 0x0023772Bu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0023772B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x12C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esp + 0xC) = edx;
    goto loc_0023764E;

loc_0023773C: ;
    ecx = esp + ecx * 4 + 0x3C;

loc_00237740: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00237742: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002376E0; /* jne: not equal / not zero */

loc_00237748: ;
    ecx = MEM32(0x8F97C4);
    edx = ZX8(MEM8(ecx + edi + 0xB4));
    eax = MEM32(0x8F97C8);
    MEM32(0x8F9CC8) = edx;
    ecx = ZX8(MEM8(eax + edi + 0x82C));
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8F9CC4) = ecx;
    MEM32(0x8F97B4) = eax;
    MEM32(0x8F97AC) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = eax;
    /* nop */

loc_00237790: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(esp + ecx * 4 + 0x4C);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + ecx * 4 + 0x3C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = 0x28;
    ebx = ebp;
    MEM32(esp + 0xC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002377C2; /* je: equal / zero */

loc_002377B7: ;
    eax = MEM32(esp + ecx * 4 + 0x1C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + ecx * 4 + 0x3C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + ecx * 4 + 0x3C))); }
    ebx = eax;

loc_002377C2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002377CF; /* je: equal / zero */

loc_002377C6: ;
    eax = MEM32(esp + ecx * 4 + 0x2C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ebp = eax;

loc_002377CF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002377F3; /* jl: less (signed <) */

loc_002377D3: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002377EF; /* jge: greater or equal (signed >=) */

loc_002377DD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002377EF; /* jge: greater or equal (signed >=) */

loc_002377E2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002377EF; /* jle: less or equal (signed <=) */

loc_002377E7: ;
    MEM32(esp + 0x18) = 1;

loc_002377EF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00237811; /* jg: greater (signed >) */

loc_002377F3: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00237811; /* jge: greater or equal (signed >=) */

loc_002377FD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00237811; /* jge: greater or equal (signed >=) */

loc_00237802: ;
    _fa = (uint32_t)(MEM32(esp + ecx * 4 + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + ecx * 4 + 0x3C), 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00237811; /* jle: less or equal (signed <=) */

loc_00237809: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = eax;
    goto loc_00237815;

loc_00237811: ;
    eax = MEM32(esp + 0x18);

loc_00237815: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0023782C; /* jge: greater or equal (signed >=) */

loc_0023781B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237790; /* je: equal / zero */

loc_00237824: ;
    MEM32(0x8F97A8) = ecx;
    goto loc_00237837;

loc_0023782C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8F97A8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0023787C; /* je: equal / zero */

loc_00237837: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(0x8F97B0) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00237858; /* jne: not equal / not zero */

loc_00237842: ;
    ecx = MEM32(0x8F97D0);
    edx = ZX8(MEM8(ecx + edi + 0x82C));
    MEM32(0x8F97AC) = edx;
    goto loc_0023787C;

loc_00237858: ;
    edx = MEM32(eax * 4 + 0x8F97CC);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x778);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ZX8(MEM8(edx + edi + 0xB4));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8F97B4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00237882; /* jne: not equal / not zero */

loc_0023787C: ;
    esi = MEM32(0x8F9CC8);

loc_00237882: ;
    eax = MEM32(0x8F97D4);
    ecx = MEM32(0x8F97D8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002378B0; /* jne: not equal / not zero */

loc_00237894: ;
    PUSH32(esp, 0x00237899u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00237899: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002378B0; /* jne: not equal / not zero */

loc_002378A5: ;
    edx = esi + esi * 4;
    MEM8(edi + edx * 4 + 0x111B) = 1;

loc_002378B0: ;
    esi = MEM32(0x8F97AC);
    eax = MEM32(0x8F97D8);
    ecx = MEM32(0x8F97D4);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) esi = MEM32(0x8F9CC4); /* cmove */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002378F0; /* jne: not equal / not zero */

loc_002378D4: ;
    PUSH32(esp, 0x002378D9u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002378D9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002378F0; /* jne: not equal / not zero */

loc_002378E5: ;
    edx = esi + esi * 4;
    MEM8(edi + edx * 4 + 0x12AB) = 1;

loc_002378F0: ;
    eax = MEM32(0x8F97D4);
    ebx = 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00237936; /* jle: less or equal (signed <=) */

loc_002378FE: ;
    PUSH32(esp, 0x00237903u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00237903: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x32;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00237936; /* jne: not equal / not zero */

loc_0023790F: ;
    edx = MEM32(0x8F9CC8);
    PUSH32(esp, edx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    PUSH32(esp, 0x0023791Fu); RECOMP_ABI_CALL(0x0022C2B0u, sub_0022C2B0); /* call 0x0022C2B0 */

loc_0023791F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237936; /* je: equal / zero */

loc_00237926: ;
    eax = MEM32(0x8F9CC8);
    eax = eax + eax * 4;
    MEM8(edi + eax * 4 + 0x1119) = 1;

loc_00237936: ;
    PUSH32(esp, 0x0023793Bu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0023793B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00237977; /* jne: not equal / not zero */

loc_00237947: ;
    PUSH32(esp, 0x0023794Cu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0023794C: ;
    edx = MEM32(edi + 0xF50);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 6;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00237977; /* jne: not equal / not zero */

loc_00237967: ;
    eax = MEM32(0x8F9CC8);
    edx = eax + eax * 4;
    MEM8(edi + edx * 4 + 0x111E) = 2;

loc_00237977: ;
    _fa = (uint32_t)(MEM32(0x8F97D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F97D8), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002379BA; /* jle: less or equal (signed <=) */

loc_0023797F: ;
    PUSH32(esp, 0x00237984u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00237984: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x32;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002379BA; /* jne: not equal / not zero */

loc_00237990: ;
    edx = MEM32(0x8F9CC4);
    PUSH32(esp, edx);
    esi = 1;
    eax = edi;
    PUSH32(esp, 0x002379A3u); RECOMP_ABI_CALL(0x0022C2B0u, sub_0022C2B0); /* call 0x0022C2B0 */

loc_002379A3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002379BA; /* je: equal / zero */

loc_002379AA: ;
    eax = MEM32(0x8F9CC4);
    eax = eax + eax * 4;
    MEM8(edi + eax * 4 + 0x12A9) = 1;

loc_002379BA: ;
    PUSH32(esp, 0x002379BFu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002379BF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002379FB; /* jne: not equal / not zero */

loc_002379CB: ;
    PUSH32(esp, 0x002379D0u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002379D0: ;
    edx = MEM32(edi + 0xF50);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 6;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002379FB; /* jne: not equal / not zero */

loc_002379EB: ;
    eax = MEM32(0x8F9CC4);
    edx = eax + eax * 4;
    MEM8(edi + edx * 4 + 0x12AE) = 2;

loc_002379FB: ;
    eax = MEM32(0x8F9CC8);
    eax = eax + eax * 4;
    MEM8(edi + eax * 4 + 0x111A) = 0;
    ecx = MEM32(0x8F97B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237A72; /* je: equal / zero */

loc_00237A15: ;
    edx = MEM32(0x8F97B0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00237A51; /* jle: less or equal (signed <=) */

loc_00237A21: ;
    ecx = MEM32(0x8F9CC8);
    SET_LO8(edx, MEM8(esp + eax * 4 + 0x3C));
    ecx = ecx + ecx * 4;
    SET_LO8(ebx, MEM8(edi + ecx * 4 + 0x111A));
    ecx = edi + ecx * 4 + 0x111A;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ecx) = LO8(ebx);
    ecx = MEM32(0x8F97B0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00237A21; /* jl: less (signed <) */

loc_00237A4B: ;
    ecx = MEM32(0x8F97B4);

loc_00237A51: ;
    eax = MEM32(0x8F9CC8);
    SET_LO8(edx, MEM8(0x8F97D8));
    eax = eax + eax * 4;
    _fb = (uint32_t)(MEM8(edi + eax * 4 + 0x111A)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - MEM8(edi + eax * 4 + 0x111A));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    eax = ecx + ecx * 4;
    MEM8(edi + eax * 4 + 0x111A) = LO8(edx);
    goto loc_00237A87;

loc_00237A72: ;
    eax = MEM32(0x8F9CC8);
    SET_LO8(edx, MEM8(0x8F97D8));
    ecx = eax + eax * 4;
    MEM8(edi + ecx * 4 + 0x111A) = LO8(edx);

loc_00237A87: ;
    eax = MEM32(0x8F9CC4);
    eax = eax + eax * 4;
    MEM8(edi + eax * 4 + 0x12AA) = 0;
    ecx = MEM32(0x8F97AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237B01; /* je: equal / zero */

loc_00237AA1: ;
    edx = MEM32(0x8F97B0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00237AE0; /* jle: less or equal (signed <=) */

loc_00237AAD: ;
    /* nop */

loc_00237AB0: ;
    ecx = MEM32(0x8F9CC4);
    SET_LO8(edx, MEM8(esp + eax * 4 + 0x4C));
    ecx = ecx + ecx * 4;
    SET_LO8(ebx, MEM8(edi + ecx * 4 + 0x12AA));
    ecx = edi + ecx * 4 + 0x12AA;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ecx) = LO8(ebx);
    ecx = MEM32(0x8F97B0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00237AB0; /* jl: less (signed <) */

loc_00237ADA: ;
    ecx = MEM32(0x8F97AC);

loc_00237AE0: ;
    eax = MEM32(0x8F9CC4);
    SET_LO8(edx, MEM8(0x8F97D4));
    eax = eax + eax * 4;
    _fb = (uint32_t)(MEM8(edi + eax * 4 + 0x12AA)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - MEM8(edi + eax * 4 + 0x12AA));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    eax = ecx + ecx * 4;
    MEM8(edi + eax * 4 + 0x12AA) = LO8(edx);
    goto loc_00237B16;

loc_00237B01: ;
    eax = MEM32(0x8F9CC4);
    SET_LO8(edx, MEM8(0x8F97D4));
    ecx = eax + eax * 4;
    MEM8(edi + ecx * 4 + 0x12AA) = LO8(edx);

loc_00237B16: ;
    eax = MEM32(esp + 0x10);
    ecx = eax + 0xE10;
    MEM32(0x8F97C0) = ecx;
    _fa = (uint32_t)(MEM32(0x8F97B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F97B4), ebp (32-bit) */
    ecx = MEM32(0x8F9CC8);
    ecx = ecx + ecx * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00237B7A; /* je: equal / zero */

loc_00237B37: ;
    edx = MEM32(0x8F97B0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4B0);
    MEM16(edi + ecx * 4 + 0x1114) = LO16(edx);
    ecx = MEM32(0x8F9CC8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + ecx * 4;
    ecx = MEM32(0x8F97B4);
    SET_LO16(esi, LO16(eax));
    _fb = (uint32_t)(MEM16(edi + edx * 4 + 0x1114)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(esi, LO16(esi) - MEM16(edi + edx * 4 + 0x1114));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    ecx = ecx + ecx * 4;
    _fb = (uint32_t)(0xE10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi + ecx * 4 + 0x1114) = LO16(esi);
    goto loc_00237B88;

loc_00237B7A: ;
    edx = eax + 0xE10;
    MEM16(edi + ecx * 4 + 0x1114) = LO16(edx);

loc_00237B88: ;
    _fa = (uint32_t)(MEM32(0x8F97AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F97AC), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237BD6; /* je: equal / zero */

loc_00237B90: ;
    edx = MEM32(0x8F97B0);
    ecx = MEM32(0x8F9CC4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4B0);
    ecx = ecx + ecx * 4;
    MEM16(edi + ecx * 4 + 0x12A4) = LO16(edx);
    ecx = MEM32(0x8F9CC4);
    edx = ecx + ecx * 4;
    _fb = (uint32_t)(MEM16(edi + edx * 4 + 0x12A4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(eax, LO16(eax) - MEM16(edi + edx * 4 + 0x12A4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    ecx = MEM32(0x8F97AC);
    ecx = ecx + ecx * 4;
    _fb = (uint32_t)(0xE10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xE10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi + ecx * 4 + 0x12A4) = LO16(eax);
    goto loc_00237BEC;

loc_00237BD6: ;
    edx = eax + 0xE10;
    eax = MEM32(0x8F9CC4);
    eax = eax + eax * 4;
    MEM16(edi + eax * 4 + 0x12A4) = LO16(edx);

loc_00237BEC: ;
    _fa = (uint32_t)(MEM32(0x8F97B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F97B4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00237C1D; /* jne: not equal / not zero */

loc_00237BF4: ;
    _fa = (uint32_t)(MEM32(0x8F97AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F97AC), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00237C32; /* jne: not equal / not zero */

loc_00237BFC: ;
    eax = MEM32(0x8F9CC8);
    ecx = eax + eax * 4 + 0x447;
    MEM8(edi + ecx * 4) = 1;
    eax = MEM32(0x8F9CC4);
    edx = eax + eax * 4 + 0x4AB;
    goto loc_00237E08;

loc_00237C1D: ;
    eax = MEM32(0x8F9CC4);
    eax = eax + eax * 4 + 0x4AB;
    MEM8(edi + eax * 4) = 1;
    goto loc_00237D11;

loc_00237C32: ;
    MEM8(edi + 0x1417) = 1;
    MEM8(edi + 0x142B) = 1;
    eax = MEM32(0x8F9CC8);
    ecx = eax + eax * 4 + 0x447;
    MEM8(edi + ecx * 4) = 1;
    eax = MEM32(0x8F97D4);
    ecx = MEM32(0x8F97D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00237C69; /* jne: not equal / not zero */

loc_00237C5F: ;
    eax = MEM32(0x8F97AC);
    goto loc_00237D06;

loc_00237C69: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00237C80; /* jge: greater or equal (signed >=) */

loc_00237C6B: ;
    eax = MEM32(0x8F97AC);
    eax = eax + eax * 4 + 0x4AB;
    MEM8(edi + eax * 4) = 1;
    goto loc_00237D11;

loc_00237C80: ;
    ebx = MEM32(0x8F97B0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_00237CB1; /* jle: less or equal (signed <=) */

loc_00237C9A: ;
    /* nop */

loc_00237CA0: ;
    _fb = (uint32_t)(MEM32(esp + eax * 4 + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + eax * 4 + 0x4C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + eax * 4 + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(esp + eax * 4 + 0x3C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00237CA0; /* jl: less (signed <) */

loc_00237CAD: ;
    MEM32(esp + 0xC) = ebp;

loc_00237CB1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00237D01; /* jge: greater or equal (signed >=) */

loc_00237CB8: ;
    eax = ebx * 4;
    goto loc_00237CC5;

loc_00237CC1: ;
    ebp = MEM32(esp + 0xC);

loc_00237CC5: ;
    _fb = (uint32_t)(MEM32(esp + eax + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + eax + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + eax + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + eax + 0x3C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx + ebp;
    ebp = ecx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00237CDF; /* jl: less (signed <) */

loc_00237CD7: ;
    MEM32(esp + 0x10) = 1;

loc_00237CDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00237CC1; /* jl: less (signed <) */

loc_00237CE7: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237D01; /* je: equal / zero */

loc_00237CEF: ;
    eax = MEM32(0x8F97AC);
    ecx = eax + eax * 4 + 0x4AB;
    MEM8(edi + ecx * 4) = 1;
    goto loc_00237D11;

loc_00237D01: ;
    eax = MEM32(0x8F9CC4);

loc_00237D06: ;
    edx = eax + eax * 4 + 0x4AB;
    MEM8(edi + edx * 4) = 1;

loc_00237D11: ;
    _fa = (uint32_t)(MEM32(0x8F97AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F97AC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237D2F; /* je: equal / zero */

loc_00237D1A: ;
    eax = MEM32(0x8F9CC8);
    eax = eax + eax * 4 + 0x447;
    MEM8(edi + eax * 4) = 1;
    goto loc_00237E0C;

loc_00237D2F: ;
    MEM8(edi + 0x1287) = 1;
    MEM8(edi + 0x129B) = 1;
    eax = MEM32(0x8F9CC4);
    ecx = eax + eax * 4 + 0x4AB;
    MEM8(edi + ecx * 4) = 1;
    eax = MEM32(0x8F97D4);
    ecx = MEM32(0x8F97D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00237D66; /* jne: not equal / not zero */

loc_00237D5C: ;
    eax = MEM32(0x8F97B4);
    goto loc_00237E01;

loc_00237D66: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00237D7D; /* jge: greater or equal (signed >=) */

loc_00237D68: ;
    eax = MEM32(0x8F97B4);
    eax = eax + eax * 4 + 0x447;
    MEM8(edi + eax * 4) = 1;
    goto loc_00237E0C;

loc_00237D7D: ;
    ebx = MEM32(0x8F97B0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_00237DA8; /* jle: less or equal (signed <=) */

loc_00237D97: ;
    _fb = (uint32_t)(MEM32(esp + eax * 4 + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + eax * 4 + 0x4C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + eax * 4 + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(esp + eax * 4 + 0x3C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00237D97; /* jl: less (signed <) */

loc_00237DA4: ;
    MEM32(esp + 0xC) = ebp;

loc_00237DA8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00237DFC; /* jge: greater or equal (signed >=) */

loc_00237DAF: ;
    eax = ebx * 4;
    goto loc_00237DC0;

loc_00237DB8: ;
    ebp = MEM32(esp + 0xC);
    /* nop */

loc_00237DC0: ;
    _fb = (uint32_t)(MEM32(esp + eax + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + eax + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + eax + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + eax + 0x3C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx + ebp;
    ebp = ecx + esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00237DDA; /* jl: less (signed <) */

loc_00237DD2: ;
    MEM32(esp + 0x10) = 1;

loc_00237DDA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00237DB8; /* jl: less (signed <) */

loc_00237DE2: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237DFC; /* je: equal / zero */

loc_00237DEA: ;
    eax = MEM32(0x8F97B4);
    ecx = eax + eax * 4 + 0x447;
    MEM8(edi + ecx * 4) = 1;
    goto loc_00237E0C;

loc_00237DFC: ;
    eax = MEM32(0x8F9CC8);

loc_00237E01: ;
    edx = eax + eax * 4 + 0x447;

loc_00237E08: ;
    MEM8(edi + edx * 4) = 1;

loc_00237E0C: ;
    eax = MEM32(0x8F97D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8F97D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8F97D8) (32-bit) */
    POP32(esp, ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_00237E34; /* jle: less or equal (signed <=) */

loc_00237E1A: ;
    eax = MEM32(0x8F97B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = MEM32(0x8F9CC8); /* cmove */
    ecx = eax + eax * 4 + 0x447;
    MEM8(edi + ecx * 4) = 1;

loc_00237E34: ;
    edx = MEM32(0x8F97D4);
    _fa = (uint32_t)(MEM32(0x8F97D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F97D8), edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00237E5C; /* jle: less or equal (signed <=) */

loc_00237E42: ;
    eax = MEM32(0x8F97AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = MEM32(0x8F9CC4); /* cmove */
    eax = eax + eax * 4 + 0x4AB;
    MEM8(edi + eax * 4) = 1;

loc_00237E5C: ;
    ecx = MEM32(0x8F97B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237EE1; /* je: equal / zero */

loc_00237E67: ;
    edx = MEM32(0x8F97B0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00237EAE; /* jle: less or equal (signed <=) */

loc_00237E73: ;
    goto loc_00237E80;

    /* nop */
    /* nop */

loc_00237E80: ;
    ecx = MEM32(0x8F9CC8);
    SET_LO16(edx, MEM16(esp + eax * 4 + 0x18));
    ecx = ecx + ecx * 4;
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edi + ecx * 4 + 0x1116) = MEM16(edi + ecx * 4 + 0x1116) + LO16(edx);
    _fa = (uint32_t)(MEM16(edi + ecx * 4 + 0x1116)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = edi + ecx * 4 + 0x1116;
    ecx = MEM32(0x8F97B0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00237E80; /* jl: less (signed <) */

loc_00237EA8: ;
    ecx = MEM32(0x8F97B4);

loc_00237EAE: ;
    eax = MEM32(0x8F9CC8);
    ebx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x20);
    edx = eax + eax * 4;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(MEM16(edi + edx * 4 + 0x1116)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(eax, LO16(eax) - MEM16(edi + edx * 4 + 0x1116));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x24);
    ecx = ecx + ecx * 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi + ecx * 4 + 0x1116) = LO16(eax);
    goto loc_00237F07;

loc_00237EE1: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x8F9CC8);
    ecx = eax + eax * 4;
    MEM16(edi + ecx * 4 + 0x1116) = LO16(edx);

loc_00237F07: ;
    ecx = MEM32(0x8F97AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237F80; /* je: equal / zero */

loc_00237F12: ;
    edx = MEM32(0x8F97B0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00237F49; /* jle: less or equal (signed <=) */

loc_00237F1E: ;
    edi = edi;

loc_00237F20: ;
    ecx = MEM32(0x8F9CC4);
    edx = ecx + ecx * 4;
    ecx = edi + edx * 4 + 0x12A6;
    SET_LO16(edx, MEM16(esp + eax * 4 + 0x28));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ecx) = MEM16(ecx) + LO16(edx);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = MEM32(0x8F97B0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00237F20; /* jl: less (signed <) */

loc_00237F43: ;
    ecx = MEM32(0x8F97AC);

loc_00237F49: ;
    eax = MEM32(0x8F9CC4);
    ebx = MEM32(esp + 0x2C);
    esi = MEM32(esp + 0x30);
    edx = eax + eax * 4;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(MEM16(edi + edx * 4 + 0x12A6)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(eax, LO16(eax) - MEM16(edi + edx * 4 + 0x12A6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x34);
    ecx = ecx + ecx * 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM16(edi + ecx * 4 + 0x12A6) = LO16(eax);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00237F80: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x8F9CC4);
    ecx = eax + eax * 4;
    POP32(esp, esi);
    MEM16(edi + ecx * 4 + 0x12A6) = LO16(edx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00238230
 * Original: 0x00238230 - 0x0023865E (1070 bytes, 263 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00238230: ;
    eax = MEM32(0x8F97BC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023865A; /* je: equal / zero */

loc_00238240: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 5;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 1;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    goto loc_00238270;

loc_0023826A: ;
    ecx = MEM32(esp + 0xC);
    edi = edi;

loc_00238270: ;
    eax = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0023827C; /* jg: greater (signed >) */

loc_00238278: ;
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0023827C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00238349; /* jl: less (signed <) */

loc_00238284: ;
    eax = MEM32(esp + 0x14);
    ebp = ZX8(MEM8(eax + esi + 0xB6));
    ecx = MEM32(0x8F9CAC);
    ecx = ecx & 0x7FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x2710;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edi = MEM32(0x8F9804);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi & 0x3FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_002382C0; /* jns: not sign (positive) */

loc_002382BB: ;
    edi = 0xA;

loc_002382C0: ;
    PUSH32(esp, 0x002382C5u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002382C5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00238351; /* jge: greater or equal (signed >=) */

loc_002382D5: ;
    SET_LO16(eax, MEM16(esi + 0x143A));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00238312; /* jge: greater or equal (signed >=) */

loc_002382E2: ;
    edx = SX16(LO16(eax));
    MEM8(esi + edx * 8 + 0x143F) = 0x20;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x143A);
    MEM8(esi + eax * 8 + 0x1440) = 0;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x143A);
    MEM8(esi + ecx * 8 + 0x143E) = 0xFF;
    MEM16(esi + 0x143A) = MEM16(esi + 0x143A) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x143A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_00238312: ;
    edx = ebp + ebp * 4;
    eax = MEM32(esi + edx * 4 + 0x1120);
    ecx = esi + edx * 4 + 0x1120;
    edx = eax;
    edx = edx & 0xFFFF0000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x30000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;
    MEM32(esp + 0xC) = eax;
    goto loc_00238351;

loc_00238349: ;
    MEM32(esp + 0x18) = 0;

loc_00238351: ;
    ecx = MEM32(esp + 0xC);
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00238361; /* jg: greater (signed >) */

loc_0023835D: ;
    eax = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00238361: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00238424; /* jl: less (signed <) */

loc_0023836B: ;
    eax = MEM32(esp + 0x14);
    ebp = ZX8(MEM8(eax + esi + 0x82E));
    ecx = MEM32(0x8F9C8C);
    ecx = ecx & 0x7FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x2710;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edi = MEM32(0x8F9A44);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi & 0x3FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_002383A7; /* jns: not sign (positive) */

loc_002383A2: ;
    edi = 0xA;

loc_002383A7: ;
    PUSH32(esp, 0x002383ACu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002383AC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0023842C; /* jge: greater or equal (signed >=) */

loc_002383B8: ;
    SET_LO16(eax, MEM16(esi + 0x143A));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002383F5; /* jge: greater or equal (signed >=) */

loc_002383C5: ;
    edx = SX16(LO16(eax));
    MEM8(esi + edx * 8 + 0x143F) = 0x20;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x143A);
    MEM8(esi + eax * 8 + 0x1440) = 1;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x143A);
    MEM8(esi + ecx * 8 + 0x143E) = 0xFF;
    MEM16(esi + 0x143A) = MEM16(esi + 0x143A) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x143A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_002383F5: ;
    edx = ebp + ebp * 4;
    eax = MEM32(esi + edx * 4 + 0x12B0);
    ecx = esi + edx * 4 + 0x12B0;
    edx = eax;
    edx = edx & 0xFFFF0000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x30000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = edx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0023842C;

loc_00238424: ;
    MEM32(esp + 0x18) = 0;

loc_0023842C: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 0x10);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00238449; /* jle: less or equal (signed <=) */

loc_0023843D: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023826A; /* jne: not equal / not zero */

loc_00238449: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = ebx;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002385FE; /* jne: not equal / not zero */

loc_0023845F: ;
    /* nop */

loc_00238460: ;
    ecx = MEM32(0x8F9CAC);
    ecx = ecx & 0x7FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x2710;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edi = MEM32(0x8F9804);
    ebp = ZX8(MEM8(esi + ebx + 0xB6));
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi & 0x3FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_00238498; /* jns: not sign (positive) */

loc_00238493: ;
    edi = 0xA;

loc_00238498: ;
    PUSH32(esp, 0x0023849Du); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0023849D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0023851B; /* jge: greater or equal (signed >=) */

loc_002384A9: ;
    SET_LO16(eax, MEM16(esi + 0x143A));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002384E6; /* jge: greater or equal (signed >=) */

loc_002384B6: ;
    edx = SX16(LO16(eax));
    MEM8(esi + edx * 8 + 0x143F) = 0x20;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x143A);
    MEM8(esi + eax * 8 + 0x1440) = 0;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x143A);
    MEM8(esi + ecx * 8 + 0x143E) = 0xFF;
    MEM16(esi + 0x143A) = MEM16(esi + 0x143A) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x143A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_002384E6: ;
    edx = ebp + ebp * 4;
    eax = MEM32(esi + edx * 4 + 0x1120);
    ecx = esi + edx * 4 + 0x1120;
    edx = eax;
    edx = edx & 0xFFFF0000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x30000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;
    MEM32(esp + 0xC) = eax;

loc_0023851B: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0x14 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002385E1; /* jge: greater or equal (signed >=) */

loc_00238526: ;
    ecx = MEM32(0x8F9C8C);
    ecx = ecx & 0x7FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x2710;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edi = MEM32(0x8F9A44);
    ebp = ZX8(MEM8(ebx + esi + 0x82E));
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi & 0x3FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0023855E; /* jns: not sign (positive) */

loc_00238559: ;
    edi = 0xA;

loc_0023855E: ;
    PUSH32(esp, 0x00238563u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00238563: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002385E1; /* jge: greater or equal (signed >=) */

loc_0023856F: ;
    SET_LO16(eax, MEM16(esi + 0x143A));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002385AC; /* jge: greater or equal (signed >=) */

loc_0023857C: ;
    edx = SX16(LO16(eax));
    MEM8(esi + edx * 8 + 0x143F) = 0x20;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x143A);
    MEM8(esi + eax * 8 + 0x1440) = 1;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x143A);
    MEM8(esi + ecx * 8 + 0x143E) = 0xFF;
    MEM16(esi + 0x143A) = MEM16(esi + 0x143A) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x143A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_002385AC: ;
    edx = ebp + ebp * 4;
    eax = MEM32(esi + edx * 4 + 0x12B0);
    ecx = esi + edx * 4 + 0x12B0;
    edx = eax;
    edx = edx & 0xFFFF0000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x30000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;
    MEM32(esp + 0x10) = eax;

loc_002385E1: ;
    eax = ebx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x10);
    ebx = edx;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238460; /* je: equal / zero */

loc_002385FE: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_00238613; /* jle: less or equal (signed <=) */

loc_0023860B: ;
    MEM32(0x8F97D8) = MEM32(0x8F97D8) + 1;
    _fa = (uint32_t)(MEM32(0x8F97D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00238619;

loc_00238613: ;
    MEM32(0x8F97D4) = MEM32(0x8F97D4) + 1;
    _fa = (uint32_t)(MEM32(0x8F97D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00238619: ;
    ecx = MEM32(0x8F97D4);
    _fa = (uint32_t)(MEM32(0x8F97D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F97D8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00238650; /* jne: not equal / not zero */

loc_00238627: ;
    PUSH32(esp, 0x0023862Cu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0023862C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0023864A; /* jge: greater or equal (signed >=) */

loc_0023863A: ;
    MEM32(0x8F97D8) = MEM32(0x8F97D8) + 1;
    _fa = (uint32_t)(MEM32(0x8F97D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0022C320(); return; /* tail jmp 0x0022C320 */

loc_0023864A: ;
    MEM32(0x8F97D4) = MEM32(0x8F97D4) + 1;
    _fa = (uint32_t)(MEM32(0x8F97D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00238650: ;
    eax = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0022C320(); return; /* tail jmp 0x0022C320 */

loc_0023865A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00238770
 * Original: 0x00238770 - 0x002387D0 (96 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00238770: ;
    eax = MEM32(0x8F97D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8F97D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8F97D8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002387CF; /* jne: not equal / not zero */

loc_0023877D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002387CF; /* je: equal / zero */

loc_00238781: ;
    eax = MEM32(0x8F97BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002387CF; /* jne: not equal / not zero */

loc_0023878A: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x143A);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002387CF; /* jle: less or equal (signed <=) */

loc_00238797: ;
    eax = esi + 0x143C;
    /* nop */

loc_002387A0: ;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 3), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) ecx = eax; /* cmovne */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002387A0; /* jne: not equal / not zero */

loc_002387AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002387CF; /* je: equal / zero */

loc_002387B1: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 4);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 5);
    eax = eax + eax * 4;
    eax = ecx + eax * 4;
    ecx = eax + eax * 4;
    eax = esi + ecx * 4 + 0x1120;
    MEM32(eax) = MEM32(eax) | 0x80000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002387CF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002387F0
 * Original: 0x002387F0 - 0x0023883C (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002387F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002387F0: ;
    eax = MEM32(0x8F97D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x8F97D8);
    if (CMP_NE(_fa, _fb)) goto loc_00238803; /* jne: not equal / not zero */

loc_002387FF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023883B; /* je: equal / zero */

loc_00238803: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00238809; /* jl: less (signed <) */

loc_00238807: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0023883B; /* jle: less or equal (signed <=) */

loc_00238809: ;
    eax = esi;
    PUSH32(esp, 0x00238810u); RECOMP_ABI_CALL(0x0022C390u, sub_0022C390); /* call 0x0022C390 */

loc_00238810: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023883B; /* je: equal / zero */

loc_00238814: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 5);
    ecx = ecx + ecx * 4;
    eax = eax + ecx * 4;
    edx = eax + eax * 4;
    ecx = MEM32(esi + edx * 4 + 0x1120);
    eax = esi + edx * 4 + 0x1120;
    ecx = ecx | 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;

loc_0023883B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00238850
 * Original: 0x00238850 - 0x0023886D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00238850: ;
    eax = MEM32(0x8F9CD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238862; /* je: equal / zero */

loc_00238859: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0023885Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0023885F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00238862: ;
    MEM32(0x8F9CD0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00238880
 * Original: 0x00238880 - 0x00238BD4 (852 bytes, 296 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00238880: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x8F9CD0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    eax = MEM32(edi);
    ecx = edi;
    MEM32(esp + 0x10) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0023889Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238899u); } /* indirect call */
    }

loc_0023889C: ;
    edx = MEM32(edi);
    ecx = edi;
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002388A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002388A2u); } /* indirect call */
    }

loc_002388A5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xA00;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x2C) = ebx;
    /* nop */

loc_002388C0: ;
    ebp = MEM32(esp + 0x30);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edi = eax;
    MEM32(esp + 0x1C) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_002388F3; /* jle: less or equal (signed <=) */

loc_002388DE: ;
    eax = MEM32(esp + 0x2C);
    ebx = MEM32(eax + -2544);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002388F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002388F0u); } /* indirect call */
    }

loc_002388F3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0023890F; /* jle: less or equal (signed <=) */

loc_002388F8: ;
    eax = MEM32(esp + 0x2C);
    ebp = MEM32(eax);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00238909u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238906u); } /* indirect call */
    }

loc_00238909: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x30);

loc_0023890F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00238940; /* jle: less or equal (signed <=) */

loc_00238914: ;
    eax = MEM32(esp + 0x2C);
    ebp = MEM32(eax + 0x9F0);
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0023892F; /* jle: less or equal (signed <=) */

loc_00238925: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(MEM32(ecx + 0x13E0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(ecx + 0x13E0);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0023892F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0023893Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238937u); } /* indirect call */
    }

loc_0023893A: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x30);

loc_00238940: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002389CC; /* jle: less or equal (signed <=) */

loc_00238949: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 4 (32-bit) */
    edx = MEM32(esi);
    if (CMP_LE(_fas, _fbs)) goto loc_002389AC; /* jle: less or equal (signed <=) */

loc_00238955: ;
    ecx = MEM32(esp + 0x2C);
    ebp = MEM32(ecx + 0x1DD0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00238968u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238965u); } /* indirect call */
    }

loc_00238968: ;
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x31BC));
    edx = MEM32(esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00238994; /* je: equal / zero */

loc_0023897C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00238983u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238980u); } /* indirect call */
    }

loc_00238983: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023898Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023898Bu); } /* indirect call */
    }

loc_0023898E: ;
    ebp = MEM32(esp + 0x30);
    goto loc_002389CC;

loc_00238994: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0023899Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238998u); } /* indirect call */
    }

loc_0023899B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x002389A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002389A3u); } /* indirect call */
    }

loc_002389A6: ;
    ebp = MEM32(esp + 0x30);
    goto loc_002389CC;

loc_002389AC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002389B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002389B3u); } /* indirect call */
    }

loc_002389B6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x002389C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002389BEu); } /* indirect call */
    }

loc_002389C1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x002389CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002389C9u); } /* indirect call */
    }

loc_002389CC: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebp (32-bit) */
    ecx = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_002389F6; /* je: equal / zero */

loc_002389D9: ;
    eax = MEM32(ecx * 4 + 0x8F0040);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002389F6; /* je: equal / zero */

loc_002389E4: ;
    MEM16(eax + 0x18) = LO16(ebx);
    eax = MEM32(esp + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    MEM16(eax + 0x8F6B78) = LO16(ebx);

loc_002389F6: ;
    edx = MEM32(esp + 0x2C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x58;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x2C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_002388C0; /* jl: less (signed <) */

loc_00238A0F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00238BCC; /* jle: less or equal (signed <=) */

loc_00238A17: ;
    ebp = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x1C) = ecx;
    goto loc_00238A30;

loc_00238A2C: ;
    ebp = MEM32(esp + 0x2C);

loc_00238A30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebp + 0xB0;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = edx;
    goto loc_00238A50;

loc_00238A4A: ;
    ebp = MEM32(esp + 0x2C);
    edi = edi;

loc_00238A50: ;
    eax = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00238A60: ;
    eax = MEM32(edi * 4 + 0x7FCA68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238A92; /* je: equal / zero */

loc_00238A6C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00238A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238A72u); } /* indirect call */
    }

loc_00238A75: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + ecx * 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi * 4 + 0x7FCA68);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00238A92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238A8Fu); } /* indirect call */
    }

loc_00238A92: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x16 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00238A60; /* jl: less (signed <) */

loc_00238A98: ;
    ecx = MEM32(esp + 0x30);
    ebp = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x10) = ebp;
    goto loc_00238AB0;

loc_00238AAC: ;
    ebp = MEM32(esp + 0x10);

loc_00238AB0: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00238AC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238ABEu); } /* indirect call */
    }

loc_00238AC1: ;
    SET_LO8(eax, MEM8(ebp));
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238B20; /* je: equal / zero */

loc_00238ACA: ;
    /* nop */

loc_00238AD0: ;
    eax = MEM32(ebp * 4 + 0x7FCA34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238B14; /* je: equal / zero */

loc_00238ADC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00238AE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238AE3u); } /* indirect call */
    }

loc_00238AE6: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM16(edx + ecx * 2 + 0xB8);
    MEM32(esp + 0x24) = eax;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp * 4 + 0x7FCA34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00238B14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238B11u); } /* indirect call */
    }

loc_00238B14: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00238AD0; /* jl: less (signed <) */

loc_00238B1A: ;
    goto loc_00238B6A;

    /* nop */

loc_00238B20: ;
    eax = MEM32(ebp * 4 + 0x7FC9D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238B64; /* je: equal / zero */

loc_00238B2C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00238B36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238B33u); } /* indirect call */
    }

loc_00238B36: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM16(edx + ecx * 2 + 0xB8);
    MEM32(esp + 0x24) = eax;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp * 4 + 0x7FC9D8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00238B64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238B61u); } /* indirect call */
    }

loc_00238B64: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x17 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00238B20; /* jl: less (signed <) */

loc_00238B6A: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x30);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x38;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x30) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00238AAC; /* jl: less (signed <) */

loc_00238B8A: ;
    eax = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2C (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00238A4A; /* jl: less (signed <) */

loc_00238BAF: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x9F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x9F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_00238A2C; /* jne: not equal / not zero */

loc_00238BCC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00238CB0
 * Original: 0x00238CB0 - 0x00238CBA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238CB0(void)
{

loc_00238CB0: ;
    eax = ecx;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00238CC0
 * Original: 0x00238CC0 - 0x00238CE5 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00238CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00238CC8u); RECOMP_ABI_CALL(0x00026ABDu, sub_00026ABD); /* call 0x00026ABD */

loc_00238CC8: ;
    MEM32(esi + 0x80) = 1;
    PUSH32(esp, 0x00238CD7u); RECOMP_ABI_CALL(0x0002350Cu, sub_0002350C); /* call 0x0002350C */

loc_00238CD7: ;
    ecx = MEM32(eax + 0x50);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00238CE3u); RECOMP_ABI_CALL(0x0001B3EDu, sub_0001B3ED); /* call 0x0001B3ED */

loc_00238CE3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00238CF0
 * Original: 0x00238CF0 - 0x00238D5A (106 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00238CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = 0x7FCC18;
    MEM32(esi + 8) = 0x7FCC44;
    MEM32(esi + 0xC) = 0x7FCD30;
    MEM32(esi + 0x10) = 0x7FCC70;
    MEM32(esi) = 0x7FD180;
    MEM32(esi + 4) = 0x7FD154;
    MEM32(esi + 8) = 0x7FD12C;
    MEM32(esi + 0xC) = 0x7FD0E0;
    MEM32(esi + 0x10) = 0x7FD020;
    ecx = esi + 0x24;
    MEM32(esi + 0x1C) = 0x7FCFE0;
    MEM32(esi + 0x20) = 1;
    PUSH32(esp, 0x00238D47u); RECOMP_ABI_CALL(0x000349DDu, sub_000349DD); /* call 0x000349DD */

loc_00238D47: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1900) = eax;
    MEM8(esi + 0x14) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00238D80
 * Original: 0x00238D80 - 0x00238DC9 (73 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00238D80: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FD180;
    MEM32(esi + 4) = 0x7FD154;
    MEM32(esi + 8) = 0x7FD12C;
    MEM32(esi + 0xC) = 0x7FD0E0;
    MEM32(esi + 0x10) = 0x7FD020;
    MEM32(esi + 0x24) = 0x7FCF70;
    MEM32(esi + 0x1C) = 0x7FCFE0;
    if (TEST_Z(_fa, _fb)) goto loc_00238DC3; /* je: equal / zero */

loc_00238DBA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00238DC0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00238DC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00238DC3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00238DE0
 * Original: 0x00238DE0 - 0x00238DFD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00238DE0: ;
    eax = MEM32(0x8F9CCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238DFC; /* je: equal / zero */

loc_00238DE9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00238DEFu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00238DEF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F9CCC) = 0;

loc_00238DFC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00238E10
 * Original: 0x00238E10 - 0x00238E3E (46 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238E10(void)
{

loc_00238E10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00238E18u); RECOMP_ABI_CALL(0x00021059u, sub_00021059); /* call 0x00021059 */

loc_00238E18: ;
    MEM32(esi) = 0x7FD350;
    MEM32(esi + 4) = 0x7FD324;
    MEM32(esi + 8) = 0x7FD2FC;
    MEM32(esi + 0xC) = 0x7FD2B0;
    MEM32(esi + 0x10) = 0x7FD1F0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00238E50
 * Original: 0x00238E50 - 0x00238E99 (73 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00238E50: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FD180;
    MEM32(esi + 4) = 0x7FD154;
    MEM32(esi + 8) = 0x7FD12C;
    MEM32(esi + 0xC) = 0x7FD0E0;
    MEM32(esi + 0x10) = 0x7FD020;
    MEM32(esi + 0x24) = 0x7FCF70;
    MEM32(esi + 0x1C) = 0x7FCFE0;
    if (TEST_Z(_fa, _fb)) goto loc_00238E93; /* je: equal / zero */

loc_00238E8A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00238E90u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00238E90: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00238E93: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00238EB0
 * Original: 0x00238EB0 - 0x00238EDE (46 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238EB0(void)
{

loc_00238EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00238EB8u); RECOMP_ABI_CALL(0x00021059u, sub_00021059); /* call 0x00021059 */

loc_00238EB8: ;
    MEM32(esi) = 0x7FD4F0;
    MEM32(esi + 4) = 0x7FD4C4;
    MEM32(esi + 8) = 0x7FD49C;
    MEM32(esi + 0xC) = 0x7FD450;
    MEM32(esi + 0x10) = 0x7FD390;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00238EF0
 * Original: 0x00238EF0 - 0x00238F39 (73 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00238EF0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FD180;
    MEM32(esi + 4) = 0x7FD154;
    MEM32(esi + 8) = 0x7FD12C;
    MEM32(esi + 0xC) = 0x7FD0E0;
    MEM32(esi + 0x10) = 0x7FD020;
    MEM32(esi + 0x24) = 0x7FCF70;
    MEM32(esi + 0x1C) = 0x7FCFE0;
    if (TEST_Z(_fa, _fb)) goto loc_00238F33; /* je: equal / zero */

loc_00238F2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00238F30u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00238F30: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00238F33: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00238F50
 * Original: 0x00238F50 - 0x00239D10 (3520 bytes, 981 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00238F50: ;
    _fb = (uint32_t)(0x86C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x86C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, edi);
    goto loc_00238F70;

    /* nop */

loc_00238F70: ;
    edx = MEM32(esp + 0x880);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    esi = ecx;
    esi = esi ^ 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x50) = eax;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x190);
    eax = eax + edx + 0x1114;
    MEM32(esp + 0x28) = eax;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x190);
    eax = eax + edx + 0x1114;
    MEM32(esp + 0x78) = eax;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    MEM32(esp + 0x68) = esi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x5C);
    eax = eax + edx + 0x105C;
    edx = esi + edx + 0x105C;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x60) = edx;
    eax = ecx + ecx * 8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x6C) = eax;
    eax = eax + 0x8F9884;
    esi = 3;

loc_00238FF7: ;
    edi = MEM32(eax + -128);
    ebx = MEM32(eax + -96);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0x3FFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi & 0x3FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax + -64);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0x3FFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax + -32);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0x3FFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax + 0x20);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0x3FFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0x3FFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx + edi;
    if ((_fa != 0)) goto loc_00238FF7; /* jne: not equal / not zero */

loc_00239053: ;
    eax = MEM32(ecx * 4 + 0x8F97D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x74) = edx;
    MEM32(esp + 0x58) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00239BFE; /* jle: less or equal (signed <=) */

loc_0023906E: ;
    eax = ecx + ecx * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x3C) = eax;

loc_00239077: ;
    PUSH32(esp, 0x0023907Cu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0023907C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x74)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x74))); }
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = ebx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002390BC; /* jle: less or equal (signed <=) */

loc_0023908E: ;
    ecx = MEM32(esp + 0x6C);
    ecx = ecx + 0x8F9804;
    goto loc_002390A0;

    /* nop */

loc_002390A0: ;
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002390B8; /* jbe: below or equal (unsigned <=) */

loc_002390AE: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002390A0; /* jg: greater (signed >) */

loc_002390B8: ;
    MEM32(esp + 0x20) = ebx;

loc_002390BC: ;
    PUSH32(esp, 0x002390C1u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002390C1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x38);
    MEM8(esp + ecx * 8 + 0x7F) = 0x20;
    MEM8(esp + ecx * 8 + 0x80) = LO8(eax);
    MEM8(esp + ecx * 8 + 0x81) = LO8(ebx);
    MEM8(esp + ecx * 8 + 0x82) = 0x14;
    MEM8(esp + ecx * 8 + 0x83) = 0x14;
    MEM8(esp + ecx * 8 + 0x7E) = LO8(edx);
    _fa = (uint32_t)(MEM32(0x8F97B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F97B8), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239127; /* je: equal / zero */

loc_00239100: ;
    edx = MEM32(eax * 4 + 0x8F97D4);
    eax = MEM32(esp + 0x68);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x8F97D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax * 4 + 0x8F97D4) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00239127; /* jle: less or equal (signed <=) */

loc_00239114: ;
    _fa = (uint32_t)(MEM32(esp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x64), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00239127; /* jne: not equal / not zero */

loc_0023911A: ;
    MEM8(esp + ecx * 8 + 0x7E) = 3;
    MEM32(esp + 0x64) = 1;

loc_00239127: ;
    eax = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x54);
    edx = ebx + ebx * 4;
    edi = eax + edx * 4;
    SET_LO8(eax, MEM8(edi + 2));
    SET_LO8(edx, MEM8(edi + 0xC));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi + 0xC) = LO8(edx);
    edx = ZX8(MEM8(esp + ecx * 8 + 0x7E));
    MEM8(edi + 2) = LO8(eax);
    MEM16(esi) = MEM16(esi) + 1;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = edx + esi + 0x36;
    MEM8(eax) = MEM8(eax) + 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(esp + ecx * 8 + 0x7E));
    SET_LO8(ecx, MEM8(eax + esi + 0x3A));
    eax = eax + esi + 0x3A;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x24) = ebp;
    ecx = 1;
    _fb = (uint32_t)(0x93) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x93;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 2;
    /* nop */

loc_00239180: ;
    ebp = ZX8(MEM8(eax + -1));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023918C; /* jne: not equal / not zero */

loc_00239188: ;
    MEM32(esp + 0x18) = ecx;

loc_0023918C: ;
    ebp = ZX8(MEM8(eax));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00239197; /* jne: not equal / not zero */

loc_00239193: ;
    MEM32(esp + 0x18) = ecx;

loc_00239197: ;
    ebp = ZX8(MEM8(eax + 1));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002391A3; /* jne: not equal / not zero */

loc_0023919F: ;
    MEM32(esp + 0x18) = ecx;

loc_002391A3: ;
    ebp = ZX8(MEM8(eax + 2));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002391AF; /* jne: not equal / not zero */

loc_002391AB: ;
    MEM32(esp + 0x18) = ecx;

loc_002391AF: ;
    ebp = ZX8(MEM8(eax + 3));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002391BB; /* jne: not equal / not zero */

loc_002391B7: ;
    MEM32(esp + 0x18) = ecx;

loc_002391BB: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00239180; /* jne: not equal / not zero */

loc_002391C2: ;
    eax = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x5C) = edx;
    ecx = 1;
    _fb = (uint32_t)(0xA7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 2;

loc_002391E2: ;
    ebp = ZX8(MEM8(eax + -1));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    ebp = ZX8(MEM8(eax));
    if (CMP_EQ(_fa, _fb)) edx = ecx; /* cmove */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    ebp = ZX8(MEM8(eax + 1));
    if (CMP_EQ(_fa, _fb)) edx = ecx; /* cmove */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    ebp = ZX8(MEM8(eax + 2));
    if (CMP_EQ(_fa, _fb)) edx = ecx; /* cmove */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    ebp = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) edx = ecx; /* cmove */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebp;
    if ((_fa != 0)) goto loc_002391E2; /* jne: not equal / not zero */

loc_00239214: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00239228; /* jne: not equal / not zero */

loc_00239220: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239791; /* je: equal / zero */

loc_00239228: ;
    ecx = MEM32(esp + 0x880);
    edx = MEM32(ecx + 0xF50);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00239791; /* je: equal / zero */

loc_00239241: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = MEM32(esp + 0x3C);
    if (CMP_EQ(_fa, _fb)) goto loc_002392C8; /* je: equal / zero */

loc_0023924D: ;
    ecx = ebx + ebp;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(ecx + 0x8F9808);
    ecx = MEM32(ecx + 0x8F9804);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(esp + 0x70) = eax;
    PUSH32(esp, 0x00239289u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00239289: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3E8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x70) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002392C8; /* jge: greater or equal (signed >=) */

loc_00239297: ;
    SET_LO16(edx, MEM16(esi + 0x14));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(esi + 0x16) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002392C8; /* jle: less or equal (signed <=) */

loc_002392A1: ;
    MEM8(edi + 6) = MEM8(edi + 6) + 1;
    _fa = (uint32_t)(MEM8(edi + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x60);
    MEM16(esi + 0x16) = MEM16(esi + 0x16) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax + 0x18) = MEM16(eax + 0x18) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x18)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x1C);
    SET_LO8(ecx, MEM8(esp + eax * 8 + 0x7F));
    MEM32(esp + 0x24) = 1;
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00239357;

loc_002392C8: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239791; /* je: equal / zero */

loc_002392D4: ;
    edx = MEM32(esp + 0x880);
    edx = MEM32(edx + 0xF50);
    ecx = ebx + ebp;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(ecx + 0x8F980C);
    ecx = MEM32(ecx + 0x8F9804);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    esi = eax;
    PUSH32(esp, 0x00239321u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00239321: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3E8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00239791; /* jge: greater or equal (signed >=) */

loc_00239331: ;
    MEM8(edi + 7) = MEM8(edi + 7) + 1;
    _fa = (uint32_t)(MEM8(edi + 7)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x54);
    MEM16(eax + 8) = MEM16(eax + 8) + 1;
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x60);
    MEM16(eax + 0xA) = MEM16(eax + 0xA) + 1;
    _fa = (uint32_t)(MEM16(eax + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x1C);
    SET_LO8(ecx, MEM8(esp + eax * 8 + 0x7F));
    MEM32(esp + 0x5C) = 1;
    SET_LO8(ecx, LO8(ecx) | 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00239357: ;
    MEM8(esp + eax * 8 + 0x7F) = LO8(ecx);
    PUSH32(esp, 0x00239360u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00239360: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x61 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00239779; /* jge: greater or equal (signed >=) */

loc_00239371: ;
    ecx = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239457; /* je: equal / zero */

loc_00239381: ;
    esi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = edx + esi * 4;
    edx = esi + ecx;
    ecx = ZX8(MEM8(edx + 0x8D));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002393B6; /* je: equal / zero */

loc_0023939A: ;
    eax = ecx + ebp;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = MEM32(eax + 0x8F9808);
    edi = edi & 0x3FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x40) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 1;

loc_002393B6: ;
    ecx = ZX8(MEM8(edx + 0x8E));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002393DB; /* je: equal / zero */

loc_002393C1: ;
    MEM32(esp + eax * 4 + 0x40) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(ecx + 0x8F9808);
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ecx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002393DB: ;
    ecx = ZX8(MEM8(edx + 0x8F));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239400; /* je: equal / zero */

loc_002393E6: ;
    MEM32(esp + eax * 4 + 0x40) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(ecx + 0x8F9808);
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ecx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00239400: ;
    ecx = ZX8(MEM8(edx + 0x90));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239425; /* je: equal / zero */

loc_0023940B: ;
    MEM32(esp + eax * 4 + 0x40) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(ecx + 0x8F9808);
    edx = edx & 0x3FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + edx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00239425: ;
    ecx = MEM32(esp + 0x14);
    edx = ecx + esi * 4 + 0x74;
    ecx = ZX8(MEM8(esi + edx + 0x1D));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002394F7; /* je: equal / zero */

loc_0023943A: ;
    MEM32(esp + eax * 4 + 0x40) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(ecx + 0x8F9808);
    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + eax + 1;
    goto loc_002394F7;

loc_00239457: ;
    esi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(esi + edx * 4 + 0xA2));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239486; /* je: equal / zero */

loc_0023946B: ;
    MEM32(esp + 0x40) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = MEM32(ecx + 0x8F9808);
    edi = edi & 0x3FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 1;

loc_00239486: ;
    ecx = ZX8(MEM8(esi + edx * 4 + 0xA3));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002394AC; /* je: equal / zero */

loc_00239492: ;
    MEM32(esp + eax * 4 + 0x40) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(ecx + 0x8F9808);
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ecx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002394AC: ;
    ecx = ZX8(MEM8(esi + edx * 4 + 0xA4));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002394D2; /* je: equal / zero */

loc_002394B8: ;
    MEM32(esp + eax * 4 + 0x40) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(ecx + 0x8F9808);
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ecx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002394D2: ;
    ecx = ZX8(MEM8(esi + edx * 4 + 0xA5));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002394F7; /* je: equal / zero */

loc_002394DE: ;
    MEM32(esp + eax * 4 + 0x40) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(ecx + 0x8F9808);
    edx = edx & 0x3FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + edx + 1;

loc_002394F7: ;
    PUSH32(esp, 0x002394FCu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002394FC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0023952D; /* jle: less or equal (signed <=) */

loc_00239506: ;
    eax = MEM32(esp + ecx * 4 + 0x40);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(eax + 0x8F9808);
    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0023952D; /* jbe: below or equal (unsigned <=) */

loc_00239521: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00239506; /* jg: greater (signed >) */

loc_0023952D: ;
    esi = MEM32(esp + ecx * 4 + 0x40);
    eax = MEM32(esp + 0x28);
    ecx = esp + ecx * 4 + 0x40;
    SET_LO8(ecx, MEM8(ecx));
    edx = esi + esi * 4;
    eax = eax + edx * 4 + 3;
    MEM8(eax) = MEM8(eax) + 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 0x1C);
    MEM8(esp + edx * 8 + 0x82) = LO8(ecx);
    PUSH32(esp, 0x00239554u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00239554: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00239779; /* jge: greater or equal (signed >=) */

loc_00239565: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239666; /* je: equal / zero */

loc_00239579: ;
    ecx = MEM32(esp + 0x18);
    edx = edx + ecx * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(edx + 0x8D));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002395AD; /* je: equal / zero */

loc_0023958D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002395AD; /* je: equal / zero */

loc_00239591: ;
    eax = ecx + ebp;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = MEM32(eax + 0x8F9808);
    edi = edi & 0x3FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x2C) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 1;

loc_002395AD: ;
    ecx = ZX8(MEM8(edx + 0x8E));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002395D6; /* je: equal / zero */

loc_002395B8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002395D6; /* je: equal / zero */

loc_002395BC: ;
    MEM32(esp + eax * 4 + 0x2C) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(ecx + 0x8F9808);
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ecx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002395D6: ;
    ecx = ZX8(MEM8(edx + 0x8F));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002395FF; /* je: equal / zero */

loc_002395E1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002395FF; /* je: equal / zero */

loc_002395E5: ;
    MEM32(esp + eax * 4 + 0x2C) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(ecx + 0x8F9808);
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ecx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002395FF: ;
    ecx = ZX8(MEM8(edx + 0x90));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239628; /* je: equal / zero */

loc_0023960A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239628; /* je: equal / zero */

loc_0023960E: ;
    MEM32(esp + eax * 4 + 0x2C) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(ecx + 0x8F9808);
    edx = edx & 0x3FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + edx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00239628: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    edx = edx + ecx * 4 + 0x74;
    ecx = ZX8(MEM8(ecx + edx + 0x1D));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023971F; /* je: equal / zero */

loc_00239641: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023971F; /* je: equal / zero */

loc_00239649: ;
    MEM32(esp + eax * 4 + 0x2C) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(ecx + 0x8F9808);
    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + eax + 1;
    goto loc_0023971F;

loc_00239666: ;
    ecx = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(edx + ecx * 4 + 0xA2));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239696; /* je: equal / zero */

loc_00239676: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239696; /* je: equal / zero */

loc_0023967A: ;
    eax = ecx + ebp;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = MEM32(eax + 0x8F9808);
    edi = edi & 0x3FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x2C) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 1;

loc_00239696: ;
    ecx = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(edx + ecx * 4 + 0xA3));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002396C4; /* je: equal / zero */

loc_002396A6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002396C4; /* je: equal / zero */

loc_002396AA: ;
    MEM32(esp + eax * 4 + 0x2C) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(ecx + 0x8F9808);
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ecx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002396C4: ;
    ecx = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(edx + ecx * 4 + 0xA4));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002396F2; /* je: equal / zero */

loc_002396D4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002396F2; /* je: equal / zero */

loc_002396D8: ;
    MEM32(esp + eax * 4 + 0x2C) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(ecx + 0x8F9808);
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ecx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002396F2: ;
    ecx = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(edx + ecx * 4 + 0xA5));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023971F; /* je: equal / zero */

loc_00239702: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023971F; /* je: equal / zero */

loc_00239706: ;
    MEM32(esp + eax * 4 + 0x2C) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(ecx + 0x8F9808);
    edx = edx & 0x3FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + edx + 1;

loc_0023971F: ;
    PUSH32(esp, 0x00239724u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00239724: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00239757; /* jle: less or equal (signed <=) */

loc_0023972E: ;
    edi = edi;

loc_00239730: ;
    eax = MEM32(esp + ecx * 4 + 0x2C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(eax + 0x8F9808);
    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00239757; /* jbe: below or equal (unsigned <=) */

loc_0023974B: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00239730; /* jg: greater (signed >) */

loc_00239757: ;
    eax = MEM32(esp + ecx * 4 + 0x2C);
    ecx = esp + ecx * 4 + 0x2C;
    SET_LO8(ecx, MEM8(ecx));
    edx = eax + eax * 4;
    eax = MEM32(esp + 0x28);
    eax = eax + edx * 4 + 3;
    MEM8(eax) = MEM8(eax) + 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 0x1C);
    MEM8(esp + edx * 8 + 0x83) = LO8(ecx);

loc_00239779: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00239BD9; /* jne: not equal / not zero */

loc_00239785: ;
    eax = MEM32(esp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00239BD9; /* jne: not equal / not zero */

loc_00239791: ;
    esi = MEM32(esp + 0x14);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x81;
    goto loc_002397B0;

    /* nop */

loc_002397B0: ;
    ebp = ZX8(MEM8(ecx + -1));
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    ebp = ZX8(MEM8(ecx));
    if (CMP_EQ(_fa, _fb)) edi = eax; /* cmove */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    ebp = ZX8(MEM8(ecx + 1));
    if (CMP_EQ(_fa, _fb)) edi = eax; /* cmove */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) edi = eax; /* cmove */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002397B0; /* jl: less (signed <) */

loc_002397D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x8D;
    /* nop */

loc_002397E0: ;
    esi = ZX8(MEM8(ecx + -1));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    esi = ZX8(MEM8(ecx));
    if (CMP_EQ(_fa, _fb)) ebx = eax; /* cmove */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) ebx = eax; /* cmove */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002397E0; /* jl: less (signed <) */

loc_002397FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00239816; /* jne: not equal / not zero */

loc_00239803: ;
    PUSH32(esp, 0x00239808u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00239808: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    MEM32(esp + 0x10) = ebx;

loc_00239816: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00239825; /* jne: not equal / not zero */

loc_0023981B: ;
    PUSH32(esp, 0x00239820u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00239820: ;
    edi = eax;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00239825: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x28);
    eax = edx + edi * 2;
    ebp = edi + eax;
    eax = ZX8(MEM8(ebp + 0x80));
    eax = eax + eax * 4;
    MEM8(ecx + eax * 4 + 5) = MEM8(ecx + eax * 4 + 5) + 1;
    _fa = (uint32_t)(MEM8(ecx + eax * 4 + 5)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ecx + eax * 4 + 5;
    eax = edx + edi * 2 + 0x56;
    esi = edi + eax + 0x2B;
    eax = ZX8(MEM8(esi));
    eax = eax + eax * 4;
    MEM8(ecx + eax * 4 + 5) = MEM8(ecx + eax * 4 + 5) + 1;
    _fa = (uint32_t)(MEM8(ecx + eax * 4 + 5)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ecx + eax * 4 + 5;
    eax = ZX8(MEM8(ebp + 0x82));
    eax = eax + eax * 4;
    MEM8(ecx + eax * 4 + 5) = MEM8(ecx + eax * 4 + 5) + 1;
    _fa = (uint32_t)(MEM8(ecx + eax * 4 + 5)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ecx + eax * 4 + 5;
    eax = ZX8(MEM8(edx + ebx * 2 + 0x8C));
    eax = eax + eax * 4;
    MEM8(ecx + eax * 4 + 5) = MEM8(ecx + eax * 4 + 5) + 1;
    _fa = (uint32_t)(MEM8(ecx + eax * 4 + 5)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ecx + eax * 4 + 5;
    eax = ZX8(MEM8(edx + ebx * 2 + 0x8D));
    edx = eax + eax * 4;
    SET_LO8(ebx, MEM8(ecx + edx * 4 + 5));
    eax = ecx + edx * 4 + 5;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ebx);
    PUSH32(esp, 0x0023989Cu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0023989C: ;
    edi = eax;
    edi = edi & 0x80000003u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002398AB; /* jns: not sign (positive) */

loc_002398A6: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi | 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002398AB: ;
    PUSH32(esp, 0x002398B0u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002398B0: ;
    ebx = MEM32(esp + 0x78);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x50);
    ecx = eax + edi * 2;
    eax = edi + ecx;
    ecx = ZX8(MEM8(eax + 0x80));
    ecx = ecx + ecx * 4;
    MEM8(ebx + ecx * 4 + 5) = MEM8(ebx + ecx * 4 + 5) - 1;
    _fa = (uint32_t)(MEM8(ebx + ecx * 4 + 5)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx + ecx * 4 + 5;
    ecx = MEM32(esp + 0x50);
    ecx = ecx + edi * 2 + 0x56;
    ecx = ZX8(MEM8(edi + ecx + 0x2B));
    ecx = ecx + ecx * 4;
    MEM8(ebx + ecx * 4 + 5) = MEM8(ebx + ecx * 4 + 5) - 1;
    _fa = (uint32_t)(MEM8(ebx + ecx * 4 + 5)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(eax + 0x82));
    ecx = ebx + ecx * 4 + 5;
    eax = eax + eax * 4;
    SET_LO8(ecx, MEM8(ebx + eax * 4 + 5));
    eax = ebx + eax * 4 + 5;
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(esp + 0x50);
    eax = ZX8(MEM8(ecx + edx * 2 + 0x8C));
    eax = eax + eax * 4;
    MEM8(ebx + eax * 4 + 5) = MEM8(ebx + eax * 4 + 5) - 1;
    _fa = (uint32_t)(MEM8(ebx + eax * 4 + 5)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = ebx + eax * 4 + 5;
    eax = ZX8(MEM8(ecx + edx * 2 + 0x8D));
    ecx = eax + eax * 4;
    eax = ebx + ecx * 4 + 5;
    MEM8(eax) = MEM8(eax) - 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00239933u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00239933: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x61 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00239BD9; /* jge: greater or equal (signed >=) */

loc_00239944: ;
    ecx = ZX8(MEM8(ebp + 0x80));
    edx = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x3C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239977; /* je: equal / zero */

loc_0023995B: ;
    eax = ebx + ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = MEM32(eax + 0x8F9808);
    edi = edi & 0x3FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x40) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 1;

loc_00239977: ;
    ecx = ZX8(MEM8(esi));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239998; /* je: equal / zero */

loc_0023997E: ;
    MEM32(esp + eax * 4 + 0x40) = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(ecx + 0x8F9808);
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ecx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00239998: ;
    ecx = ZX8(MEM8(ebp + 0x82));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002399BE; /* je: equal / zero */

loc_002399A3: ;
    edx = ebx + ecx;
    MEM32(esp + eax * 4 + 0x40) = ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + 0x8F9808);
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ecx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002399BE: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    ecx = ZX8(MEM8(ecx + edx * 2 + 0x8C));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002399EF; /* je: equal / zero */

loc_002399D4: ;
    edx = ebx + ecx;
    MEM32(esp + eax * 4 + 0x40) = ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + 0x8F9808);
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ecx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002399EF: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(edx + ecx * 2 + 0x8D));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239A1E; /* je: equal / zero */

loc_00239A05: ;
    edx = ebx + ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + eax * 4 + 0x40) = ecx;
    eax = MEM32(edx + 0x8F9808);
    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + eax + 1;

loc_00239A1E: ;
    PUSH32(esp, 0x00239A23u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00239A23: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00239A57; /* jle: less or equal (signed <=) */

loc_00239A2D: ;
    /* nop */

loc_00239A30: ;
    eax = MEM32(esp + ecx * 4 + 0x40);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(eax + 0x8F9808);
    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00239A57; /* jbe: below or equal (unsigned <=) */

loc_00239A4B: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00239A30; /* jg: greater (signed >) */

loc_00239A57: ;
    eax = MEM32(esp + ecx * 4 + 0x40);
    ecx = esp + ecx * 4 + 0x40;
    SET_LO8(ecx, MEM8(ecx));
    edx = eax + eax * 4;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x28);
    eax = eax + edx * 4 + 3;
    MEM8(eax) = MEM8(eax) + 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 0x1C);
    MEM8(esp + edx * 8 + 0x82) = LO8(ecx);
    PUSH32(esp, 0x00239A82u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00239A82: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x5A (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00239BD9; /* jge: greater or equal (signed >=) */

loc_00239A93: ;
    ecx = ZX8(MEM8(ebp + 0x80));
    edx = MEM32(esp + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239ACC; /* je: equal / zero */

loc_00239AA6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239AC8; /* je: equal / zero */

loc_00239AAC: ;
    edx = ebx + ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = MEM32(edx + 0x8F9808);
    edi = edi & 0x3FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x2C) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 1;

loc_00239AC8: ;
    edx = MEM32(esp + 0x20);

loc_00239ACC: ;
    ecx = ZX8(MEM8(esi));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    esi = MEM32(esp + 0x24);
    if (CMP_EQ(_fa, _fb)) goto loc_00239AF5; /* je: equal / zero */

loc_00239AD7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239AF5; /* je: equal / zero */

loc_00239ADB: ;
    MEM32(esp + eax * 4 + 0x2C) = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(ecx + 0x8F9808);
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ecx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00239AF5: ;
    ecx = ZX8(MEM8(ebp + 0x82));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239B1E; /* je: equal / zero */

loc_00239B00: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239B1E; /* je: equal / zero */

loc_00239B04: ;
    MEM32(esp + eax * 4 + 0x2C) = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(ecx + 0x8F9808);
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ecx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00239B1E: ;
    ebp = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    ecx = ZX8(MEM8(ecx + ebp * 2 + 0x8C));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239B50; /* je: equal / zero */

loc_00239B32: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239B50; /* je: equal / zero */

loc_00239B36: ;
    MEM32(esp + eax * 4 + 0x2C) = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(ecx + 0x8F9808);
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ecx + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00239B50: ;
    ecx = MEM32(esp + 0x14);
    ecx = ZX8(MEM8(ecx + ebp * 2 + 0x8D));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239B7D; /* je: equal / zero */

loc_00239B60: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239B7D; /* je: equal / zero */

loc_00239B64: ;
    edx = ebx + ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + eax * 4 + 0x2C) = ecx;
    eax = MEM32(edx + 0x8F9808);
    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + eax + 1;

loc_00239B7D: ;
    PUSH32(esp, 0x00239B82u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00239B82: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00239BB7; /* jle: less or equal (signed <=) */

loc_00239B8C: ;
    /* nop */

loc_00239B90: ;
    eax = MEM32(esp + ecx * 4 + 0x2C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(eax + 0x8F9808);
    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00239BB7; /* jbe: below or equal (unsigned <=) */

loc_00239BAB: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00239B90; /* jg: greater (signed >) */

loc_00239BB7: ;
    eax = MEM32(esp + ecx * 4 + 0x2C);
    ecx = esp + ecx * 4 + 0x2C;
    SET_LO8(ecx, MEM8(ecx));
    edx = eax + eax * 4;
    eax = MEM32(esp + 0x28);
    eax = eax + edx * 4 + 3;
    MEM8(eax) = MEM8(eax) + 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 0x1C);
    MEM8(esp + edx * 8 + 0x83) = LO8(ecx);

loc_00239BD9: ;
    edi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x58);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx * 4 + 0x8F97D4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x58) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00239077; /* jl: less (signed <) */

loc_00239BFE: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    MEM32(esp + 0x38) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00238F70; /* jl: less (signed <) */

loc_00239C0C: ;
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, 0x22C430);
    PUSH32(esp, 8);
    edx = esp + 0x84;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00239C25u); RECOMP_ABI_CALL(0x005CC050u, sub_005CC050); /* call 0x005CC050 */

loc_00239C25: ;
    esi = MEM32(esp + 0x890);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x143A);
    ecx = eax + edi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00239C68; /* jge: greater or equal (signed >=) */

loc_00239C41: ;
    edx = edi * 8;
    PUSH32(esp, edx);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    edx = esi + eax * 8 + 0x143C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00239C5Eu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_00239C5E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO16(edi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi + 0x143A) = MEM16(esi + 0x143A) + LO16(edi);
    _fa = (uint32_t)(MEM16(esi + 0x143A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_00239C68: ;
    PUSH32(esp, 0x00239C6Du); RECOMP_ABI_CALL(0x00238770u, sub_00238770); /* call 0x00238770 */

loc_00239C6D: ;
    edi = MEM32(0x8F97D4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(0x8F97D8);
    if (CMP_NE(_fa, _fb)) goto loc_00239C80; /* jne: not equal / not zero */

loc_00239C7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239CBE; /* je: equal / zero */

loc_00239C80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00239C86; /* jl: less (signed <) */

loc_00239C84: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00239CBE; /* jle: less or equal (signed <=) */

loc_00239C86: ;
    eax = esi;
    PUSH32(esp, 0x00239C8Du); RECOMP_ABI_CALL(0x0022C390u, sub_0022C390); /* call 0x0022C390 */

loc_00239C8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239CBE; /* je: equal / zero */

loc_00239C91: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 5);
    ecx = ecx + ecx * 4;
    eax = eax + ecx * 4;
    edx = eax + eax * 4;
    ecx = MEM32(esi + edx * 4 + 0x1120);
    eax = esi + edx * 4 + 0x1120;
    ecx = ecx | 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    edi = MEM32(0x8F97D4);

loc_00239CBE: ;
    MEM16(esi + 0x105E) = LO16(edi);
    SET_LO16(eax, MEM16(0x8F97D8));
    MEM16(esi + 0x1060) = LO16(eax);
    SET_LO16(ecx, MEM16(0x8F97D8));
    MEM16(esi + 0x10BA) = LO16(ecx);
    SET_LO16(edx, MEM16(0x8F97D4));
    MEM16(esi + 0x10BC) = LO16(edx);
    SET_LO8(eax, MEM8(0x8F97B8));
    MEM8(esi + 0x1438) = LO8(eax);
    SET_LO8(ecx, MEM8(0x8F97BC));
    POP32(esp, edi);
    MEM8(esi + 0x1439) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x86C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x86C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0023A080
 * Original: 0x0023A080 - 0x0023A2E8 (616 bytes, 167 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023A080: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8F9CD0);
    ecx = MEM32(eax + 8);
    edx = (uint32_t)(int32_t)SMEM16(0x896168);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(0x8E9610);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x18) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0023A2D0; /* jle: less or equal (signed <=) */

loc_0023A0BF: ;
    PUSH32(esp, ebp);
    goto loc_0023A0D0;

loc_0023A0C2: ;
    eax = MEM32(esp + 0x20);
    goto loc_0023A0D0;

    /* nop */
    /* nop */

loc_0023A0D0: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x9F0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    ecx = ecx + eax + 0xC;
    MEM32(esp + 0x14) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_0023A0F4; /* jg: greater (signed >) */

loc_0023A0E5: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(0x896168) = LO16(esi);
    MEM32(esp + 0x18) = ebp;
    goto loc_0023A120;

loc_0023A0F4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(0x896168) = LO16(edx);
    MEM32(esp + 0x18) = ebp;
    goto loc_0023A120;

loc_0023A10E: ;
    ecx = MEM32(esp + 0x14);
    goto loc_0023A120;

    /* nop */
    goto loc_0023A120;

    /* nop */

loc_0023A120: ;
    eax = MEM32(ecx + ebp * 4 + 0x9E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0023A1D1; /* jle: less or equal (signed <=) */

loc_0023A12F: ;
    esi = ebp + ebp * 4;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx + esi * 2;
    edi = esi + ecx + 0x970;
    MEM32(esp + 0x10) = eax;

loc_0023A144: ;
    eax = (uint32_t)(int32_t)SMEM8(edi);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esi + eax;
    ebp = MEM32(edx * 4 + 0x8E9100);
    PUSH32(esp, 8);
    MEM16(0x8E9610) = LO16(eax);
    eax = esp + 0xD4;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x74) = ebx;
    MEM32(esp + 0x78) = ebx;
    MEM16(esp + 0x7C) = 4;
    MEM32(esp + 0x70) = 0x7ABD90;
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0023A19Cu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0023A19C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esp + 0x74;
    PUSH32(esp, 0x0023A1ACu); RECOMP_ABI_CALL(0x00020311u, sub_00020311); /* call 0x00020311 */

loc_0023A1AC: ;
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = 0x8978E8;
    PUSH32(esp, 0x0023A1BBu); RECOMP_ABI_CALL(0x0001AABFu, sub_0001AABF); /* call 0x0001AABF */

loc_0023A1BB: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0023A144; /* jne: not equal / not zero */

loc_0023A1CD: ;
    ebp = MEM32(esp + 0x18);

loc_0023A1D1: ;
    eax = MEM32(esp + 0x14);
    edx = ebp;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x460);
    eax = edx + eax + 0xD2;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_0023A1F0: ;
    _fa = (uint32_t)(MEM8(eax + -34)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -34), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023A27A; /* jne: not equal / not zero */

loc_0023A1F9: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A27A; /* je: equal / zero */

loc_0023A1FE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023A208; /* jne: not equal / not zero */

loc_0023A202: ;
    eax = edi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0023A20D;

loc_0023A208: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi + 0x14;

loc_0023A20D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x4D) = LO8(ecx);
    ecx = esi;
    ecx = ecx & 0x80000001u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM16(esp + 0x3C) = 0x30;
    MEM8(esp + 0x4C) = LO8(eax);
    MEM32(esp + 0x30) = 0x7BE90C;
    MEM8(esp + 0x50) = 1;
    MEM8(esp + 0x51) = 1;
    MEM8(esp + 0x52) = 1;
    MEM8(esp + 0x53) = 1;
    MEM8(esp + 0x54) = LO8(ebx);
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x5C) = ebx;
    MEM32(esp + 0x60) = ebx;
    if ((_fas >= 0)) goto loc_0023A260; /* jns: not sign (positive) */

loc_0023A25B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0023A260: ;
    if ((ecx == 0)) goto loc_0023A267; /* je: equal / zero */

loc_0023A262: ;
    PUSH32(esp, 0x0023A267u); RECOMP_ABI_CALL(0x0001CC34u, sub_0001CC34); /* call 0x0001CC34 */

loc_0023A267: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = 0x8978E8;
    PUSH32(esp, 0x0023A276u); RECOMP_ABI_CALL(0x0001AABFu, sub_0001AABF); /* call 0x0001AABF */

loc_0023A276: ;
    eax = MEM32(esp + 0x10);

loc_0023A27A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0023A1F0; /* jl: less (signed <) */

loc_0023A28B: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0023A10E; /* jl: less (signed <) */

loc_0023A299: ;
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0023A0C2; /* jl: less (signed <) */

loc_0023A2AE: ;
    SET_LO16(eax, MEM16(esp + 0x2C));
    SET_LO16(ecx, MEM16(esp + 0x24));
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(0x896168) = LO16(eax);
    MEM16(0x8E9610) = LO16(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0023A2D0: ;
    MEM16(0x8E9610) = LO16(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(0x896168) = LO16(edx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0023A390
 * Original: 0x0023A390 - 0x0023A450 (192 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023A390: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0023A423; /* je: equal / zero */

loc_0023A3A0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0023A3FF; /* je: equal / zero */

loc_0023A3A3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023A44C; /* jne: not equal / not zero */

loc_0023A3AA: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x1904);
    PUSH32(esp, 0x0023A3B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023A3B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A3C9; /* je: equal / zero */

loc_0023A3C0: ;
    ecx = eax;
    PUSH32(esp, 0x0023A3C7u); RECOMP_ABI_CALL(0x000135A3u, sub_000135A3); /* call 0x000135A3 */

loc_0023A3C7: ;
    goto loc_0023A3CB;

loc_0023A3C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023A3CB: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x90);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0023A3DDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023A3DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A3F6; /* je: equal / zero */

loc_0023A3E4: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0023A3EFu); RECOMP_ABI_CALL(0x0002BB35u, sub_0002BB35); /* call 0x0002BB35 */

loc_0023A3EF: ;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0023A3F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0023A3FF: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x1904);
    PUSH32(esp, 0x0023A40Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023A40E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A447; /* je: equal / zero */

loc_0023A415: ;
    ecx = eax;
    PUSH32(esp, 0x0023A41Cu); RECOMP_ABI_CALL(0x000135A3u, sub_000135A3); /* call 0x000135A3 */

loc_0023A41C: ;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0023A423: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x1904);
    PUSH32(esp, 0x0023A432u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023A432: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A447; /* je: equal / zero */

loc_0023A439: ;
    ecx = eax;
    PUSH32(esp, 0x0023A440u); RECOMP_ABI_CALL(0x0001BFAAu, sub_0001BFAA); /* call 0x0001BFAA */

loc_0023A440: ;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0023A447: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;

loc_0023A44C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023A480
 * Original: 0x0023A480 - 0x0023A4E7 (103 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023A480: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023A490u); RECOMP_ABI_CALL(0x002360A0u, sub_002360A0); /* call 0x002360A0 */

loc_0023A490: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023A496u); RECOMP_ABI_CALL(0x0022BF70u, sub_0022BF70); /* call 0x0022BF70 */

loc_0023A496: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023A49Cu); RECOMP_ABI_CALL(0x00236440u, sub_00236440); /* call 0x00236440 */

loc_0023A49C: ;
    eax = esi;
    PUSH32(esp, 0x0023A4A3u); RECOMP_ABI_CALL(0x00237020u, sub_00237020); /* call 0x00237020 */

loc_0023A4A3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023A4A9u); RECOMP_ABI_CALL(0x00238F50u, sub_00238F50); /* call 0x00238F50 */

loc_0023A4A9: ;
    edi = esi;
    PUSH32(esp, 0x0023A4B0u); RECOMP_ABI_CALL(0x002375C0u, sub_002375C0); /* call 0x002375C0 */

loc_0023A4B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023A4B6u); RECOMP_ABI_CALL(0x00237360u, sub_00237360); /* call 0x00237360 */

loc_0023A4B6: ;
    eax = esi;
    PUSH32(esp, 0x0023A4BDu); RECOMP_ABI_CALL(0x00236E70u, sub_00236E70); /* call 0x00236E70 */

loc_0023A4BD: ;
    ebx = esi;
    PUSH32(esp, 0x0023A4C4u); RECOMP_ABI_CALL(0x00236980u, sub_00236980); /* call 0x00236980 */

loc_0023A4C4: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0023A4D8u); RECOMP_ABI_CALL(0x0003531Fu, sub_0003531F); /* call 0x0003531F */

loc_0023A4D8: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0023A4E0u); RECOMP_ABI_CALL(0x00238230u, sub_00238230); /* call 0x00238230 */

loc_0023A4E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0023A500
 * Original: 0x0023A500 - 0x0023A522 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023A500: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0023A508u); RECOMP_ABI_CALL(0x00026FF9u, sub_00026FF9); /* call 0x00026FF9 */

loc_0023A508: ;
    PUSH32(esp, 0x8F5B18);
    PUSH32(esp, 0x0023A512u); RECOMP_ABI_CALL(0x0002B6C1u, sub_0002B6C1); /* call 0x0002B6C1 */

loc_0023A512: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0023A520u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023A51Du); } /* indirect call */
    }

loc_0023A520: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023A530
 * Original: 0x0023A530 - 0x0023A539 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A530(void)
{

loc_0023A530: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0023A540
 * Original: 0x0023A540 - 0x0023A544 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A540(void)
{

loc_0023A540: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0023A550
 * Original: 0x0023A550 - 0x0023A565 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023A550: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A564; /* je: equal / zero */

loc_0023A558: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0023A564u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023A561u); } /* indirect call */
    }

loc_0023A564: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023A570
 * Original: 0x0023A570 - 0x0023A57A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A570(void)
{

loc_0023A570: ;
    eax = MEM32(esp + 4);
    MEM32(0x901D80) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0023A580
 * Original: 0x0023A580 - 0x0023A584 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A580(void)
{

loc_0023A580: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_0023A590
 * Original: 0x0023A590 - 0x0023A594 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A590(void)
{

loc_0023A590: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_0023A5A0
 * Original: 0x0023A5A0 - 0x0023A5A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A5A0(void)
{

loc_0023A5A0: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0023A5B0
 * Original: 0x0023A5B0 - 0x0023A5D0 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A5B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023A5B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
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
 * sub_0023A5E0
 * Original: 0x0023A5E0 - 0x0023A60C (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A5E0(void)
{

loc_0023A5E0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x7FD9B8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0023A5F9u); RECOMP_ABI_CALL(0x00018E81u, sub_00018E81); /* call 0x00018E81 */

loc_0023A5F9: ;
    edx = MEM32(esp + 8);
    MEM32(esi) = 0x7FD9A8;
    MEM32(esi + 0x1C) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0023A620
 * Original: 0x0023A620 - 0x0023A62B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023A620: ;
    MEM32(ecx) = 0x7FD9A8;
    g_seh_ebp = ebp; sub_0002562C(); return; /* tail jmp 0x0002562C */

}

/**
 * sub_0023A630
 * Original: 0x0023A630 - 0x0023A633 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A630(void)
{

loc_0023A630: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0023A640
 * Original: 0x0023A640 - 0x0023A65A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023A640: ;
    eax = ecx;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esp + 4));
    edx = edx & 0xFFFFFF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023A660
 * Original: 0x0023A660 - 0x0023A7F8 (408 bytes, 121 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023A660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0023A660: ;
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
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A67Du); RECOMP_ABI_CALL(0x00014C5Fu, sub_00014C5F); /* call 0x00014C5F */

loc_0023A67D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0023A7C6; /* jbe: below or equal (unsigned <=) */

loc_0023A68B: ;
    goto loc_0023A691;

loc_0023A68D: ;
    esi = MEM32(esp + 0x18);

loc_0023A691: ;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A69Du); RECOMP_ABI_CALL(0x00014B2Eu, sub_00014B2E); /* call 0x00014B2E */

loc_0023A69D: ;
    edi = eax;
    ecx = MEM32(edi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0023A6A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023A6A4u); } /* indirect call */
    }

loc_0023A6A7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(esi, MEM16(eax + 0x38));
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0023A7B9; /* je: equal / zero */

loc_0023A6B9: ;
    ecx = MEM32(esp + 0x10);
    eax = esi;
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0xFFFFFF00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + 8);
    edx = ebx;
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A6E7u); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_0023A6E7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023A7A0; /* jne: not equal / not zero */

loc_0023A6F0: ;
    ecx = MEM32(edi + 0x34);
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023A75B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0023A757: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0023A760;

loc_0023A75B: ;
    eax = 1;

loc_0023A760: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABD64); /* mulss */
    edx = MEM32(esp + 0x14);
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & 0xFFFF0000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 4);
    eax = esp + 0x18;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A79Eu); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_0023A79E: ;
    goto loc_0023A7B9;

loc_0023A7A0: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A7A7u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0023A7A7: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A7AEu); RECOMP_ABI_CALL(0x00021C6Bu, sub_00021C6B); /* call 0x00021C6B */

loc_0023A7AE: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0023A7B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023A7B6u); } /* indirect call */
    }

loc_0023A7B9: ;
    eax = MEM32(esp + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0023A68D; /* jb: below (unsigned <) */

loc_0023A7C6: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x8C2188);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A7D7u); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_0023A7D7: ;
    eax = MEM32(esi + 0x550);
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0023A7EF; /* je: equal / zero */

loc_0023A7E4: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x550) = eax;

loc_0023A7EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023A860
 * Original: 0x0023A860 - 0x0023AB37 (727 bytes, 226 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023A860(void)
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

loc_0023A860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x54));
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 4);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x34) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A883u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0023A883: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 4);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A894u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0023A894: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(edx + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A89Fu); RECOMP_ABI_CALL(0x00014C5Fu, sub_00014C5F); /* call 0x00014C5F */

loc_0023A89F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x14) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_0023AB0E; /* jbe: below or equal (unsigned <=) */

loc_0023A8B3: ;
    goto loc_0023A8C0;

loc_0023A8B5: ;
    esi = MEM32(esp + 0x2C);
    /* nop */

loc_0023A8C0: ;
    eax = MEM32(esi + 0x1C);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A8D0u); RECOMP_ABI_CALL(0x00014B2Eu, sub_00014B2E); /* call 0x00014B2E */

loc_0023A8D0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0023AAF9; /* je: equal / zero */

loc_0023A8DA: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax;
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0x3F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x38) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0023AA14; /* jne: not equal / not zero */

loc_0023A900: ;
    ebx = MEM32(esp + 0x1C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0023AA0D; /* jne: not equal / not zero */

loc_0023A912: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0023A9B9; /* jne: not equal / not zero */

loc_0023A91B: ;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x40 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0023A9B9; /* jne: not equal / not zero */

loc_0023A929: ;
    ebx = MEM32(ebp + 8);
    PUSH32(esp, 4);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A93Au); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0023A93A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edi)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(edi) = MEM32(edi) + 4;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A95Eu); RECOMP_ABI_CALL(0x00018111u, sub_00018111); /* call 0x00018111 */

loc_0023A95E: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(esi + 0x1C);
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x20)); /* fimul dword ptr [esp + 0x20] */
    ecx = MEM32(esp + 0x44);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    if (((0x11) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0x11) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x11) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB82C); /* mulss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x20)) >> 32) & 1);
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x40);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    goto loc_0023AAC9;

loc_0023A9B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = MEM32(ebp + 8);
    MEM32(esp + 0x20) = ebx;
    ecx = edi;
    MEM32(esp + 0x18) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0023A9E2; /* jne: not equal / not zero */

loc_0023A9CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebx) = MEM32(ebx) + 4;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi);
    eax = esp + 0x18;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x20) = eax;
    goto loc_0023A9F7;

loc_0023A9E2: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 0xC0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x40 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0023A9F7; /* jne: not equal / not zero */

loc_0023A9EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edi)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(edi) = MEM32(edi) + 4;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx);
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x18;

loc_0023A9F7: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0023AA08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023AA05u); } /* indirect call */
    }

loc_0023AA08: ;
    goto loc_0023AAC9;

loc_0023AA0D: ;
    ebx = MEM32(ebp + 8);
    ecx = ebx;
    goto loc_0023AA2B;

loc_0023AA14: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0023AAC9; /* jne: not equal / not zero */

loc_0023AA21: ;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi;
    eax = edx;

loc_0023AA2B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0023AAC9; /* je: equal / zero */

loc_0023AA33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0023AAC1; /* jne: not equal / not zero */

loc_0023AA3C: ;
    PUSH32(esp, 4);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023AA48u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0023AA48: ;
    eax = MEM32(esi + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023AA69u); RECOMP_ABI_CALL(0x00018111u, sub_00018111); /* call 0x00018111 */

loc_0023AA69: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(esi + 0x1C);
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x20)); /* fimul dword ptr [esp + 0x20] */
    ecx = MEM32(esp + 0x54);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    if (((0x11) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0x11) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x11) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB82C); /* mulss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x20)) >> 32) & 1);
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x50);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x58);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    goto loc_0023AAC9;

loc_0023AAC1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0023AAC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023AAC6u); } /* indirect call */
    }

loc_0023AAC9: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x38), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0023AAE1; /* jne: not equal / not zero */

loc_0023AAD3: ;
    PUSH32(esp, 4);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023AAE1u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0023AAE1: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0023AAF9; /* jne: not equal / not zero */

loc_0023AAEB: ;
    PUSH32(esp, 4);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023AAF9u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0023AAF9: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x3C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0023A8B5; /* jb: below (unsigned <) */

loc_0023AB0E: ;
    eax = MEM32(ebx);
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0023AB1E; /* je: equal / zero */

loc_0023AB17: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;

loc_0023AB1E: ;
    eax = MEM32(edi);
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0023AB2E; /* je: equal / zero */

loc_0023AB27: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;

loc_0023AB2E: ;
    POP32(esp, edi);
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
 * sub_0023ABF0
 * Original: 0x0023ABF0 - 0x0023AC0E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023ABF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023ABF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0023ABF8u); RECOMP_ABI_CALL(0x00012E69u, sub_00012E69); /* call 0x00012E69 */

loc_0023ABF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0023AC08; /* je: equal / zero */

loc_0023ABFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023AC05u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0023AC05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0023AC08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023AC20
 * Original: 0x0023AC20 - 0x0023AE25 (517 bytes, 182 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023AC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023AC20: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebp = ecx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, edi);

loc_0023AC32: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x8C2140);
    MEM32(esi + 4) = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023AC41: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0x0023AC4Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023AC4D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023AC65; /* je: equal / zero */

loc_0023AC54: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0023AC61u); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023AC61: ;
    edi = eax;
    goto loc_0023AC67;

loc_0023AC65: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023AC67: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0023AC70u); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023AC70: ;
    ecx = edi;
    PUSH32(esp, 0x0023AC77u); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023AC77: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x12 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0023AC41; /* jb: below (unsigned <) */

loc_0023AC7D: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x8C2134);
    MEM32(esi + 4) = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0023AC90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0x0023AC9Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023AC9C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023ACB4; /* je: equal / zero */

loc_0023ACA3: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0023ACB0u); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023ACB0: ;
    edi = eax;
    goto loc_0023ACB6;

loc_0023ACB4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023ACB6: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0023ACBFu); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023ACBF: ;
    ecx = edi;
    PUSH32(esp, 0x0023ACC6u); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023ACC6: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0023AC90; /* jb: below (unsigned <) */

loc_0023ACCC: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0023AC32; /* jl: less (signed <) */

loc_0023ACE0: ;
    eax = MEM32(0x8C2130);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    MEM32(esi + 8) = 0;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0023ACF8u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023ACF8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023AD10; /* je: equal / zero */

loc_0023ACFF: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0023AD0Cu); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023AD0C: ;
    edi = eax;
    goto loc_0023AD12;

loc_0023AD10: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023AD12: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0023AD1Bu); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023AD1B: ;
    ecx = edi;
    PUSH32(esp, 0x0023AD22u); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023AD22: ;
    edx = MEM32(0x8C212C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x0023AD34u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023AD34: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023AD4C; /* je: equal / zero */

loc_0023AD3B: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0023AD48u); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023AD48: ;
    edi = eax;
    goto loc_0023AD4E;

loc_0023AD4C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023AD4E: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0023AD57u); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023AD57: ;
    ecx = edi;
    PUSH32(esp, 0x0023AD5Eu); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023AD5E: ;
    ebx = 0x8C2118;

loc_0023AD63: ;
    edx = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x0023AD71u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023AD71: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023AD89; /* je: equal / zero */

loc_0023AD78: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0023AD85u); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023AD85: ;
    edi = eax;
    goto loc_0023AD8B;

loc_0023AD89: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023AD8B: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0023AD94u); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023AD94: ;
    ecx = edi;
    PUSH32(esp, 0x0023AD9Bu); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023AD9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C2128) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x8C2128 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0023AD63; /* jl: less (signed <) */

loc_0023ADA6: ;
    edx = MEM32(0x8C2114);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x0023ADB8u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023ADB8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023ADD0; /* je: equal / zero */

loc_0023ADBF: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0023ADCCu); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023ADCC: ;
    edi = eax;
    goto loc_0023ADD2;

loc_0023ADD0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023ADD2: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0023ADDBu); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023ADDB: ;
    ecx = edi;
    PUSH32(esp, 0x0023ADE2u); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023ADE2: ;
    edx = MEM32(0x8C2110);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x0023ADF4u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023ADF4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0023AE0E; /* je: equal / zero */

loc_0023ADFD: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0023AE0Au); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023AE0A: ;
    esi = eax;
    goto loc_0023AE10;

loc_0023AE0E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023AE10: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023AE19u); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023AE19: ;
    ecx = esi;
    PUSH32(esp, 0x0023AE20u); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023AE20: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023AEB0
 * Original: 0x0023AEB0 - 0x0023AF2F (127 bytes, 50 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023AEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023AEB0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0023AF29; /* jle: less or equal (signed <=) */

loc_0023AEBE: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    ebp = eax;
    /* nop */

loc_0023AED0: ;
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, 0x7FDBA4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0023AEE0u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0023AEE0: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = esi;
    PUSH32(esp, 0x0023AEF3u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023AEF3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023AF0B; /* je: equal / zero */

loc_0023AEFA: ;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0023AF07u); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023AF07: ;
    edi = eax;
    goto loc_0023AF0D;

loc_0023AF0B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023AF0D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0023AF1Au); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023AF1A: ;
    ecx = edi;
    PUSH32(esp, 0x0023AF21u); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023AF21: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023AED0; /* jne: not equal / not zero */

loc_0023AF25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0023AF29: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0023AF50
 * Original: 0x0023AF50 - 0x0023AF9E (78 bytes, 30 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023AF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023AF50: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    PUSH32(esp, 0x0023AF6Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023AF6F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023AF87; /* je: equal / zero */

loc_0023AF76: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0023AF83u); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023AF83: ;
    esi = eax;
    goto loc_0023AF89;

loc_0023AF87: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023AF89: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023AF92u); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023AF92: ;
    ecx = esi;
    PUSH32(esp, 0x0023AF99u); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023AF99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0023AFC0
 * Original: 0x0023AFC0 - 0x0023B192 (466 bytes, 167 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023AFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023AFC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3C);
    edi = ecx;
    MEM32(esi + 4) = 0x7FDCCC;
    MEM32(esi + 8) = ebp;
    PUSH32(esp, 0x0023AFDEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023AFDE: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023AFF4; /* je: equal / zero */

loc_0023AFE9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0023AFF2u); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023AFF2: ;
    ebp = eax;

loc_0023AFF4: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0023AFFDu); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023AFFD: ;
    ecx = ebp;
    PUSH32(esp, 0x0023B004u); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023B004: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    MEM32(esi + 4) = 0x7FDC9C;
    MEM32(esi + 8) = 1;
    PUSH32(esp, 0x0023B01Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023B01B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B02F; /* je: equal / zero */

loc_0023B022: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0023B02Bu); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023B02B: ;
    ebp = eax;
    goto loc_0023B031;

loc_0023B02F: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023B031: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0023B03Au); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023B03A: ;
    ecx = ebp;
    PUSH32(esp, 0x0023B041u); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023B041: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    MEM32(esi + 4) = 0x7FDC6C;
    MEM32(esi + 8) = 2;
    PUSH32(esp, 0x0023B058u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023B058: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B06C; /* je: equal / zero */

loc_0023B05F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0023B068u); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023B068: ;
    ebp = eax;
    goto loc_0023B06E;

loc_0023B06C: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023B06E: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0023B077u); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023B077: ;
    ecx = ebp;
    PUSH32(esp, 0x0023B07Eu); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023B07E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    MEM32(esi + 4) = 0x7FDC3C;
    MEM32(esi + 8) = 3;
    PUSH32(esp, 0x0023B095u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023B095: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B0A9; /* je: equal / zero */

loc_0023B09C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0023B0A5u); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023B0A5: ;
    ebp = eax;
    goto loc_0023B0AB;

loc_0023B0A9: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023B0AB: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0023B0B4u); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023B0B4: ;
    ecx = ebp;
    PUSH32(esp, 0x0023B0BBu); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023B0BB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 4);
    ecx = edi;
    PUSH32(esp, 0x0023B0C8u); RECOMP_ABI_CALL(0x000301E9u, sub_000301E9); /* call 0x000301E9 */

loc_0023B0C8: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3C);
    MEM32(esi + 4) = 0x7FDC0C;
    MEM32(esi + 8) = ebp;
    PUSH32(esp, 0x0023B0DCu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023B0DC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B0EE; /* je: equal / zero */

loc_0023B0E3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0023B0ECu); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023B0EC: ;
    ebp = eax;

loc_0023B0EE: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0023B0F7u); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023B0F7: ;
    ecx = ebp;
    PUSH32(esp, 0x0023B0FEu); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023B0FE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    MEM32(esi + 4) = 0x7FDBDC;
    MEM32(esi + 8) = 1;
    PUSH32(esp, 0x0023B115u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023B115: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B129; /* je: equal / zero */

loc_0023B11C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0023B125u); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023B125: ;
    ebp = eax;
    goto loc_0023B12B;

loc_0023B129: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023B12B: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0023B134u); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023B134: ;
    ecx = ebp;
    PUSH32(esp, 0x0023B13Bu); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023B13B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x16);
    ecx = edi;
    PUSH32(esp, 0x0023B148u); RECOMP_ABI_CALL(0x000301E9u, sub_000301E9); /* call 0x000301E9 */

loc_0023B148: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3C);
    MEM32(esi + 4) = 0x7FDBAC;
    MEM32(esi + 8) = ebp;
    PUSH32(esp, 0x0023B15Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023B15C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B16E; /* je: equal / zero */

loc_0023B163: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0023B16Cu); RECOMP_ABI_CALL(0x000195BBu, sub_000195BB); /* call 0x000195BB */

loc_0023B16C: ;
    ebp = eax;

loc_0023B16E: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0023B177u); RECOMP_ABI_CALL(0x00035C07u, sub_00035C07); /* call 0x00035C07 */

loc_0023B177: ;
    ecx = ebp;
    PUSH32(esp, 0x0023B17Eu); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023B17E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x27);
    ecx = edi;
    PUSH32(esp, 0x0023B18Bu); RECOMP_ABI_CALL(0x000301E9u, sub_000301E9); /* call 0x000301E9 */

loc_0023B18B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023B210
 * Original: 0x0023B210 - 0x0023B254 (68 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023B210: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x0023B21Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023B21D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B24A; /* je: equal / zero */

loc_0023B226: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FD9B8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0023B239u); RECOMP_ABI_CALL(0x00018E81u, sub_00018E81); /* call 0x00018E81 */

loc_0023B239: ;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi) = 0x7FD9A8;
    MEM32(edi + 8) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0023B24A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023B270
 * Original: 0x0023B270 - 0x0023B2FD (141 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023B270: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0023B27Cu); RECOMP_ABI_CALL(0x00011F55u, sub_00011F55); /* call 0x00011F55 */

loc_0023B27C: ;
    ecx = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B28B; /* je: equal / zero */

loc_0023B285: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0023B28Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023B289u); } /* indirect call */
    }

loc_0023B28B: ;
    PUSH32(esp, edi);
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0x0023B294u); RECOMP_ABI_CALL(0x0002C567u, sub_0002C567); /* call 0x0002C567 */

loc_0023B294: ;
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x0023B29Du); RECOMP_ABI_CALL(0x00027E18u, sub_00027E18); /* call 0x00027E18 */

loc_0023B29D: ;
    ecx = edi;
    PUSH32(esp, 0x0023B2A4u); RECOMP_ABI_CALL(0x0001121Cu, sub_0001121C); /* call 0x0001121C */

loc_0023B2A4: ;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x20), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023B2BC; /* jne: not equal / not zero */

loc_0023B2A9: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0023B2B2u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0023B2B2: ;
    ecx = eax;
    PUSH32(esp, 0x0023B2B9u); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_0023B2B9: ;
    MEM32(esi + 0x14) = ebx;

loc_0023B2BC: ;
    _fa = (uint32_t)(MEM8(esi + 0x21)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x21), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023B2D4; /* jne: not equal / not zero */

loc_0023B2C1: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0023B2CAu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0023B2CA: ;
    ecx = eax;
    PUSH32(esp, 0x0023B2D1u); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_0023B2D1: ;
    MEM32(esi + 0x18) = ebx;

loc_0023B2D4: ;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, 0x0023B2E2u); RECOMP_ABI_CALL(0x00028F07u, sub_00028F07); /* call 0x00028F07 */

loc_0023B2E2: ;
    ecx = edi;
    PUSH32(esp, 0x0023B2E9u); RECOMP_ABI_CALL(0x00018431u, sub_00018431); /* call 0x00018431 */

loc_0023B2E9: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0023B2FA; /* je: equal / zero */

loc_0023B2F1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0023B2F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023B2F5u); } /* indirect call */
    }

loc_0023B2F7: ;
    MEM32(esi + 0xC) = ebx;

loc_0023B2FA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0023B320
 * Original: 0x0023B320 - 0x0023B356 (54 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023B320: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0023B32Eu); RECOMP_ABI_CALL(0x00014C5Fu, sub_00014C5F); /* call 0x00014C5F */

loc_0023B32E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0023B353; /* jbe: below or equal (unsigned <=) */

loc_0023B332: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023B33Bu); RECOMP_ABI_CALL(0x00014B2Eu, sub_00014B2E); /* call 0x00014B2E */

loc_0023B33B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B346; /* je: equal / zero */

loc_0023B33F: ;
    ecx = eax;
    PUSH32(esp, 0x0023B346u); RECOMP_ABI_CALL(0x000120BDu, sub_000120BD); /* call 0x000120BD */

loc_0023B346: ;
    ecx = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0023B34Fu); RECOMP_ABI_CALL(0x00014C5Fu, sub_00014C5F); /* call 0x00014C5F */

loc_0023B34F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0023B332; /* jb: below (unsigned <) */

loc_0023B353: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023B370
 * Original: 0x0023B370 - 0x0023B3A6 (54 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023B370: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0023B37Eu); RECOMP_ABI_CALL(0x00014C5Fu, sub_00014C5F); /* call 0x00014C5F */

loc_0023B37E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0023B3A3; /* jbe: below or equal (unsigned <=) */

loc_0023B382: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023B38Bu); RECOMP_ABI_CALL(0x00014B2Eu, sub_00014B2E); /* call 0x00014B2E */

loc_0023B38B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B396; /* je: equal / zero */

loc_0023B38F: ;
    ecx = eax;
    PUSH32(esp, 0x0023B396u); RECOMP_ABI_CALL(0x00014C32u, sub_00014C32); /* call 0x00014C32 */

loc_0023B396: ;
    ecx = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0023B39Fu); RECOMP_ABI_CALL(0x00014C5Fu, sub_00014C5F); /* call 0x00014C5F */

loc_0023B39F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0023B382; /* jb: below (unsigned <) */

loc_0023B3A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023B3C0
 * Original: 0x0023B3C0 - 0x0023B3F6 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B3C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023B3C0: ;
    edx = MEM32(0x8F9DE8);
    ecx = MEM32(0x8EB280);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(0x8F9DE8) = edx;
    PUSH32(esp, 0x0023B3D9u); RECOMP_ABI_CALL(0x0002E240u, sub_0002E240); /* call 0x0002E240 */

loc_0023B3D9: ;
    esi = MEM32(0x8FC1D0);
    ecx = esi;
    PUSH32(esp, 0x0023B3E6u); RECOMP_ABI_CALL(0x00028FFCu, sub_00028FFC); /* call 0x00028FFC */

loc_0023B3E6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x7FDCFC);
    ecx = esi;
    PUSH32(esp, 0x0023B3F4u); RECOMP_ABI_CALL(0x0001BFE6u, sub_0001BFE6); /* call 0x0001BFE6 */

loc_0023B3F4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023B410
 * Original: 0x0023B410 - 0x0023B414 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B410(void)
{

loc_0023B410: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0023B420
 * Original: 0x0023B420 - 0x0023B428 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B420(void)
{

loc_0023B420: ;
    MEM32(ecx + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0023B430
 * Original: 0x0023B430 - 0x0023B439 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023B430: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0023B440
 * Original: 0x0023B440 - 0x0023B45C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023B440: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023B455u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0023B455: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023B470
 * Original: 0x0023B470 - 0x0023B494 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023B470: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FD9A8;
    PUSH32(esp, 0x0023B47Eu); RECOMP_ABI_CALL(0x0002562Cu, sub_0002562C); /* call 0x0002562C */

loc_0023B47E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0023B48E; /* je: equal / zero */

loc_0023B485: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023B48Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0023B48B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0023B48E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023B4A0
 * Original: 0x0023B4A0 - 0x0023B4C7 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023B4A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FDD08;
    PUSH32(esp, 0x0023B4AEu); RECOMP_ABI_CALL(0x000353ABu, sub_000353AB); /* call 0x000353AB */

loc_0023B4AE: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B4C5; /* je: equal / zero */

loc_0023B4B5: ;
    ecx = esi;
    PUSH32(esp, 0x0023B4BCu); RECOMP_ABI_CALL(0x00012E69u, sub_00012E69); /* call 0x00012E69 */

loc_0023B4BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023B4C2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0023B4C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0023B4C5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023B4D0
 * Original: 0x0023B4D0 - 0x0023B5A4 (212 bytes, 80 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023B4D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B59D; /* je: equal / zero */

loc_0023B4E3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023B51A; /* jne: not equal / not zero */

loc_0023B4E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0023B513; /* jle: less or equal (signed <=) */

loc_0023B4EB: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B4FE; /* je: equal / zero */

loc_0023B4F2: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0023B4FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023B4FBu); } /* indirect call */
    }

loc_0023B4FE: ;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;

loc_0023B513: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0023B51A: ;
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebx);
    ecx = edi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0023B536u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_0023B536: ;
    ebx = eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0023B561; /* jle: less or equal (signed <=) */

loc_0023B542: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B583; /* je: equal / zero */

loc_0023B549: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B583; /* je: equal / zero */

loc_0023B550: ;
    edx = ecx * 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0023B55Fu); RECOMP_ABI_CALL(0x0002E71Du, sub_0002E71D); /* call 0x0002E71D */

loc_0023B55F: ;
    goto loc_0023B580;

loc_0023B561: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B583; /* je: equal / zero */

loc_0023B568: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0023B56F; /* jle: less or equal (signed <=) */

loc_0023B56C: ;
    MEM32(esi + 8) = edi;

loc_0023B56F: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0023B580u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0023B580: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0023B583: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B596; /* je: equal / zero */

loc_0023B58A: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0023B596u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023B593u); } /* indirect call */
    }

loc_0023B596: ;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 4) = edi;
    POP32(esp, ebx);

loc_0023B59D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023B5E0
 * Original: 0x0023B5E0 - 0x0023B61D (61 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023B5E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x7FDD08;
    PUSH32(esp, 0x0023B5EFu); RECOMP_ABI_CALL(0x000353ABu, sub_000353AB); /* call 0x000353AB */

loc_0023B5EF: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B606; /* je: equal / zero */

loc_0023B5F6: ;
    ecx = edi;
    PUSH32(esp, 0x0023B5FDu); RECOMP_ABI_CALL(0x00012E69u, sub_00012E69); /* call 0x00012E69 */

loc_0023B5FD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0023B603u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0023B603: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0023B606: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0023B616; /* je: equal / zero */

loc_0023B60D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023B613u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0023B613: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0023B616: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023B630
 * Original: 0x0023B630 - 0x0023B927 (759 bytes, 236 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023B630: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, 0x0023B64Cu); RECOMP_ABI_CALL(0x00011F55u, sub_00011F55); /* call 0x00011F55 */

loc_0023B64C: ;
    PUSH32(esp, 0x0023B651u); RECOMP_ABI_CALL(0x0002C567u, sub_0002C567); /* call 0x0002C567 */

loc_0023B651: ;
    PUSH32(esp, 0x7FDDC4);
    PUSH32(esp, 0x78);
    edi = eax;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x7FDDB4);
    ecx = edi;
    PUSH32(esp, 0x0023B668u); RECOMP_ABI_CALL(0x000291C3u, sub_000291C3); /* call 0x000291C3 */

loc_0023B668: ;
    PUSH32(esp, 0x7FDDA8);
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x7FDD98);
    ecx = edi;
    MEM32(esp + 0x30) = eax;
    MEM32(0x901D80) = eax;
    PUSH32(esp, 0x0023B686u); RECOMP_ABI_CALL(0x000291C3u, sub_000291C3); /* call 0x000291C3 */

loc_0023B686: ;
    PUSH32(esp, 0x7FDD8C);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x7FDD7C);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x0023B69Fu); RECOMP_ABI_CALL(0x000291C3u, sub_000291C3); /* call 0x000291C3 */

loc_0023B69F: ;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0023B6A8u); RECOMP_ABI_CALL(0x00015E5Cu, sub_00015E5C); /* call 0x00015E5C */

loc_0023B6A8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7FDD6C);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0023B6B7u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0023B6B7: ;
    ecx = eax;
    PUSH32(esp, 0x0023B6BEu); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_0023B6BE: ;
    ebp = eax;
    PUSH32(esp, 0x600);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0023B6CBu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023B6CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x600);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FDD6C);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x0023B6E6u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0023B6E6: ;
    ecx = eax;
    PUSH32(esp, 0x0023B6EDu); RECOMP_ABI_CALL(0x00022913u, sub_00022913); /* call 0x00022913 */

loc_0023B6ED: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esi + 0x20) = LO8(ebx);
    PUSH32(esp, 0x0023B6FCu); RECOMP_ABI_CALL(0x000257D5u, sub_000257D5); /* call 0x000257D5 */

loc_0023B6FC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7FDD5C);
    PUSH32(esp, 0x0023B707u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0023B707: ;
    ecx = eax;
    PUSH32(esp, 0x0023B70Eu); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_0023B70E: ;
    ebp = eax;
    PUSH32(esp, 0x600);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0023B71Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023B71B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x600);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FDD5C);
    PUSH32(esp, 0x0023B736u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0023B736: ;
    ecx = eax;
    PUSH32(esp, 0x0023B73Du); RECOMP_ABI_CALL(0x00022913u, sub_00022913); /* call 0x00022913 */

loc_0023B73D: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM8(esi + 0x21) = LO8(ebx);
    PUSH32(esp, 0x0023B74Cu); RECOMP_ABI_CALL(0x000257D5u, sub_000257D5); /* call 0x000257D5 */

loc_0023B74C: ;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0xE8);
    SET_LO8(ecx, MEM8(eax + 0x34D));
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    MEM8(esp + 0x17) = LO8(ecx);
    PUSH32(esp, 0x7FDD50);
    ecx = edi;
    MEM8(eax + 0x34D) = 1;
    PUSH32(esp, 0x0023B77Au); RECOMP_ABI_CALL(0x00027233u, sub_00027233); /* call 0x00027233 */

loc_0023B77A: ;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0xE8);
    SET_LO8(ecx, MEM8(esp + 0x13));
    MEM8(eax + 0x34D) = LO8(ecx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0023B799u); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_0023B799: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esp + 0x34;
    PUSH32(esp, 0x0023B7A5u); RECOMP_ABI_CALL(0x00017BB7u, sub_00017BB7); /* call 0x00017BB7 */

loc_0023B7A5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x7FDD40);
    ecx = edi;
    PUSH32(esp, 0x0023B7B2u); RECOMP_ABI_CALL(0x0002A17Cu, sub_0002A17C); /* call 0x0002A17C */

loc_0023B7B2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x7FDD34);
    ecx = esp + 0x38;
    MEM32(esi + 0x10) = eax;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0023B7C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023B7C6u); } /* indirect call */
    }

loc_0023B7C9: ;
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x3C) = ebx;
    eax = MEM32(edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x7FDD24);
    ecx = edi;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0023B7E4u); RECOMP_ABI_CALL(0x00017810u, sub_00017810); /* call 0x00017810 */

loc_0023B7E4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebp = eax;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x7FDD18);
    eax = esp + 0x38;
    MEM32(esp + 0x40) = ebx;
    edx = MEM32(ebp);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0023B7FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023B7FCu); } /* indirect call */
    }

loc_0023B7FF: ;
    ecx = MEM32(esp + 0x38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esp + 0x40) = ebx;
    edx = MEM32(ecx);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x7FDD0C);
    ecx = esp + 0x38;
    MEM32(esp + 0x40) = ebx;
    eax = MEM32(ebp);
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x38) = edx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023B826u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023B823u); } /* indirect call */
    }

loc_0023B826: ;
    edx = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x68);
    ebp = MEM32(esp + 0x20);
    MEM32(esp + 0x3C) = ebx;
    eax = MEM32(edx);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x4C) = ebp;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x60) = eax;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    MEM32(esp + 0x50) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x5C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0023B884; /* je: equal / zero */

loc_0023B86D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B884; /* je: equal / zero */

loc_0023B871: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0023B882u); RECOMP_ABI_CALL(0x00014228u, sub_00014228); /* call 0x00014228 */

loc_0023B882: ;
    goto loc_0023B895;

loc_0023B884: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0023B895u); RECOMP_ABI_CALL(0x0001C3F1u, sub_0001C3F1); /* call 0x0001C3F1 */

loc_0023B895: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1018);
    PUSH32(esp, 0x0023B8A0u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023B8A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B8B9; /* je: equal / zero */

loc_0023B8A7: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0023B8B7u); RECOMP_ABI_CALL(0x0001D6F2u, sub_0001D6F2); /* call 0x0001D6F2 */

loc_0023B8B7: ;
    goto loc_0023B8BB;

loc_0023B8B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023B8BB: ;
    PUSH32(esp, 0x8F6A08);
    ecx = 0x8E96A0;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0023B8CDu); RECOMP_ABI_CALL(0x0001BA28u, sub_0001BA28); /* call 0x0001BA28 */

loc_0023B8CD: ;
    PUSH32(esp, 0x0023B8D2u); RECOMP_ABI_CALL(0x0002DFB1u, sub_0002DFB1); /* call 0x0002DFB1 */

loc_0023B8D2: ;
    PUSH32(esp, 0x0023B8D7u); RECOMP_ABI_CALL(0x000114E7u, sub_000114E7); /* call 0x000114E7 */

loc_0023B8D7: ;
    PUSH32(esp, 0x0023B8DCu); RECOMP_ABI_CALL(0x000318BEu, sub_000318BE); /* call 0x000318BE */

loc_0023B8DC: ;
    ecx = edi;
    PUSH32(esp, 0x0023B8E3u); RECOMP_ABI_CALL(0x0001BCC6u, sub_0001BCC6); /* call 0x0001BCC6 */

loc_0023B8E3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B8EE; /* je: equal / zero */

loc_0023B8E7: ;
    ecx = ebp;
    PUSH32(esp, 0x0023B8EEu); RECOMP_ABI_CALL(0x000310C6u, sub_000310C6); /* call 0x000310C6 */

loc_0023B8EE: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023B8FB; /* je: equal / zero */

loc_0023B8F6: ;
    PUSH32(esp, 0x0023B8FBu); RECOMP_ABI_CALL(0x000310C6u, sub_000310C6); /* call 0x000310C6 */

loc_0023B8FB: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0023B90C; /* je: equal / zero */

loc_0023B907: ;
    PUSH32(esp, 0x0023B90Cu); RECOMP_ABI_CALL(0x000310C6u, sub_000310C6); /* call 0x000310C6 */

loc_0023B90C: ;
    PUSH32(esp, 0x0023B911u); RECOMP_ABI_CALL(0x0002C567u, sub_0002C567); /* call 0x0002C567 */

loc_0023B911: ;
    ecx = eax;
    PUSH32(esp, 0x0023B918u); RECOMP_ABI_CALL(0x00011762u, sub_00011762); /* call 0x00011762 */

loc_0023B918: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0023B921u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_0023B921: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023B9F0
 * Original: 0x0023B9F0 - 0x0023BA3B (75 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023B9F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    MEM32(esi) = 0x7FDD08;
    PUSH32(esp, 0x0023BA02u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023BA02: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023BA17; /* je: equal / zero */

loc_0023BA09: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0023BA15u); RECOMP_ABI_CALL(0x00021798u, sub_00021798); /* call 0x00021798 */

loc_0023BA15: ;
    goto loc_0023BA19;

loc_0023BA17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023BA19: ;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    MEM32(0x8F9DE8) = MEM32(0x8F9DE8) + 1;
    _fa = (uint32_t)(MEM32(0x8F9DE8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0023BA35u); RECOMP_ABI_CALL(0x0001E45Du, sub_0001E45D); /* call 0x0001E45D */

loc_0023BA35: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023BA50
 * Original: 0x0023BA50 - 0x0023BA5A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BA50(void)
{

loc_0023BA50: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023BA60
 * Original: 0x0023BA60 - 0x0023BA63 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BA60(void)
{

loc_0023BA60: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0023BA70
 * Original: 0x0023BA70 - 0x0023BA73 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BA70(void)
{

loc_0023BA70: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0023BA80
 * Original: 0x0023BA80 - 0x0023BA8F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BA80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023BA80: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x380) = LO8(eax);
    MEM8(ecx + 0x381) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0023BAA0
 * Original: 0x0023BAA0 - 0x0023BAA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BAA0(void)
{

loc_0023BAA0: ;
    MEM8(ecx + 0x383) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0023BAB0
 * Original: 0x0023BAB0 - 0x0023BAB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BAB0(void)
{

loc_0023BAB0: ;
    MEM8(ecx + 0x383) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0023BAC0
 * Original: 0x0023BAC0 - 0x0023BAC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BAC0(void)
{

loc_0023BAC0: ;
    eax = ecx + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0023BAD0
 * Original: 0x0023BAD0 - 0x0023BAD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BAD0(void)
{

loc_0023BAD0: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0023BAE0
 * Original: 0x0023BAE0 - 0x0023BB80 (160 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023BAE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0023BAEEu); RECOMP_ABI_CALL(0x0002983Au, sub_0002983A); /* call 0x0002983A */

loc_0023BAEE: ;
    MEM32(edi) = 0x7FE250;
    MEM32(edi + 0x30) = 0;
    MEM8(edi + 0x38) = 1;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0023BB08u); RECOMP_ABI_CALL(0x00030824u, sub_00030824); /* call 0x00030824 */

loc_0023BB08: ;
    MEM32(edi + 0x1C) = eax;
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0023BB1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023BB1Au); } /* indirect call */
    }

loc_0023BB1D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x440);
    PUSH32(esp, 0x0023BB29u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0023BB29: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023BB6D; /* je: equal / zero */

loc_0023BB30: ;
    edx = MEM32(edi + 0x1C);
    ecx = MEM32(edx + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0023BB5Cu); RECOMP_ABI_CALL(0x00024907u, sub_00024907); /* call 0x00024907 */

loc_0023BB5C: ;
    MEM32(edi + 0x20) = eax;
    MEM32(edi + 8) = 0x7FE23C;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0023BB6D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x20) = eax;
    MEM32(edi + 8) = 0x7FE23C;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023BBB0
 * Original: 0x0023BBB0 - 0x0023BBC1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023BBB0: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023BBBD; /* jne: not equal / not zero */

loc_0023BBB7: ;
    eax = MEM32(ecx + 0x20);
    MEM32(ecx + 0x30) = eax;

loc_0023BBBD: ;
    eax = MEM32(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_0023BBD0
 * Original: 0x0023BBD0 - 0x0023BBFB (43 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023BBD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x7FE250;
    if (CMP_EQ(_fa, _fb)) goto loc_0023BBE6; /* je: equal / zero */

loc_0023BBE0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0023BBE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023BBE4u); } /* indirect call */
    }

loc_0023BBE6: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023BBF3; /* je: equal / zero */

loc_0023BBED: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0023BBF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023BBF1u); } /* indirect call */
    }

loc_0023BBF3: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000242DB(); return; /* tail jmp 0x000242DB */

}

/**
 * sub_0023BC10
 * Original: 0x0023BC10 - 0x0023BC6D (93 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023BC10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x1C);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023BC1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023BC1Bu); } /* indirect call */
    }

loc_0023BC1E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0023BC25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023BC22u); } /* indirect call */
    }

loc_0023BC25: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023BC35; /* je: equal / zero */

loc_0023BC29: ;
    eax = MEM32(edi + 0x30);
    MEM8(eax + 0x383) = 1;
    goto loc_0023BC3F;

loc_0023BC35: ;
    ecx = MEM32(edi + 0x30);
    MEM8(ecx + 0x383) = 0;

loc_0023BC3F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0023BC46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023BC43u); } /* indirect call */
    }

loc_0023BC46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023BC51; /* jne: not equal / not zero */

loc_0023BC4A: ;
    SET_LO8(eax, MEM8(edi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023BC61; /* je: equal / zero */

loc_0023BC51: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(edi + 0x38) = 0;
    PUSH32(esp, 0x0023BC61u); RECOMP_ABI_CALL(0x00020591u, sub_00020591); /* call 0x00020591 */

loc_0023BC61: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0023BC68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023BC65u); } /* indirect call */
    }

loc_0023BC68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023BC90
 * Original: 0x0023BC90 - 0x0023BC98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023BC90: ;
    ecx = MEM32(ecx + 0x30);
    g_seh_ebp = ebp; sub_0002B680(); return; /* tail jmp 0x0002B680 */

}

/**
 * sub_0023BCA0
 * Original: 0x0023BCA0 - 0x0023BCA7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BCA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023BCA0: ;
    eax = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0023BCB0
 * Original: 0x0023BCB0 - 0x0023BCB7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BCB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023BCB0: ;
    eax = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0023BCC0
 * Original: 0x0023BCC0 - 0x0023BCD2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BCC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023BCC0: ;
    eax = MEM32(ecx + 0x30);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x380) = LO8(ecx);
    MEM8(eax + 0x381) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0023BCE0
 * Original: 0x0023BCE0 - 0x0023BCEB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BCE0(void)
{

loc_0023BCE0: ;
    eax = MEM32(ecx + 0x30);
    MEM8(eax + 0x381) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0023BCF0
 * Original: 0x0023BCF0 - 0x0023BCFB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BCF0(void)
{

loc_0023BCF0: ;
    eax = MEM32(ecx + 0x30);
    MEM8(eax + 0x380) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0023BD00
 * Original: 0x0023BD00 - 0x0023BD40 (64 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023BD00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x7FE250;
    if (CMP_EQ(_fa, _fb)) goto loc_0023BD16; /* je: equal / zero */

loc_0023BD10: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0023BD16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023BD14u); } /* indirect call */
    }

loc_0023BD16: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023BD23; /* je: equal / zero */

loc_0023BD1D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0023BD23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023BD21u); } /* indirect call */
    }

loc_0023BD23: ;
    ecx = esi;
    PUSH32(esp, 0x0023BD2Au); RECOMP_ABI_CALL(0x000242DBu, sub_000242DB); /* call 0x000242DB */

loc_0023BD2A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0023BD3A; /* je: equal / zero */

loc_0023BD31: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023BD37u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0023BD37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0023BD3A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023BD50
 * Original: 0x0023BD50 - 0x0023BD81 (49 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023BD50: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023BD5D; /* jne: not equal / not zero */

loc_0023BD57: ;
    eax = MEM32(ecx + 0x20);
    MEM32(ecx + 0x30) = eax;

loc_0023BD5D: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023BD70u); RECOMP_ABI_CALL(0x0001D445u, sub_0001D445); /* call 0x0001D445 */

loc_0023BD70: ;
    ecx = MEM32(0x8F0680);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0023BD7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023BD7Bu); } /* indirect call */
    }

loc_0023BD7D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023BD90
 * Original: 0x0023BD90 - 0x0023BD95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023BD90: ;
    g_seh_ebp = ebp; sub_0001AF42(); return; /* tail jmp 0x0001AF42 */

}

/**
 * sub_0023BDA0
 * Original: 0x0023BDA0 - 0x0023BDA5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023BDA0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_0023BDB0
 * Original: 0x0023BDB0 - 0x0023BDB5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023BDB0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_0023BDC0
 * Original: 0x0023BDC0 - 0x0023BDC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BDC0(void)
{

loc_0023BDC0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0023BDD0
 * Original: 0x0023BDD0 - 0x0023BEA6 (214 bytes, 83 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BDD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023BDD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 1;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = ecx;
    ecx = 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = ecx;
    ebx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 3;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x18) = ecx;
    goto loc_0023BE10;

loc_0023BE0A: ;
    ebx = MEM32(esp + 0x20);
    edi = edi;

loc_0023BE10: ;
    SET_LO8(ecx, MEM8(eax + edx));
    esi = eax + edx;
    ebp = SX8(LO8(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0023BE98; /* jge: greater or equal (signed >=) */

loc_0023BE1D: ;
    MEM8(ebx + esi) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + edx + 1));
    ebx = MEM32(esp + 0x10);
    ebp = SX8(LO8(ecx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0023BE75; /* jge: greater or equal (signed >=) */

loc_0023BE31: ;
    ebx = MEM32(esp + 0x14);
    MEM8(eax + edi + 1) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + edx + 2));
    ebp = SX8(LO8(ecx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0023BE84; /* jge: greater or equal (signed >=) */

loc_0023BE46: ;
    ebx = MEM32(esp + 0x18);
    MEM8(eax + edi + 2) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + edx + 3));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = SX8(LO8(ecx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0023BE95; /* jge: greater or equal (signed >=) */

loc_0023BE5B: ;
    MEM8(eax + edi + 3) = LO8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0023BE0A; /* jl: less (signed <) */

loc_0023BE67: ;
    MEM8(eax + edi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0023BE75: ;
    MEM8(eax + edi + 1) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0023BE84: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + edi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0023BE95: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0023BE98: ;
    MEM8(eax + edi) = 0;
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
 * sub_0023BEE0
 * Original: 0x0023BEE0 - 0x0023BF41 (97 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023BEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023BEE0: ;
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
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0x10); /* divss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm0 = XMM_MEM(esp); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0023BF60
 * Original: 0x0023BF60 - 0x0023BFA4 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0023BF60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023BF60: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
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
 * sub_0023BFC0
 * Original: 0x0023BFC0 - 0x0023C01F (95 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BFC0(void)
{

loc_0023BFC0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0023C040
 * Original: 0x0023C040 - 0x0023C097 (87 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C040(void)
{

loc_0023C040: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0023C0B0
 * Original: 0x0023C0B0 - 0x0023C13F (143 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C0B0(void)
{

loc_0023C0B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    edx = MEM32(esp + 0xC);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0023C170
 * Original: 0x0023C170 - 0x0023C1F9 (137 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C170(void)
{

loc_0023C170: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    edx = MEM32(esp + 0xC);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0023C220
 * Original: 0x0023C220 - 0x0023C245 (37 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C220(void)
{

loc_0023C220: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax;
    edi = MEM32(edx);
    esi = ecx;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    eax = MEM32(eax + 0xC);
    POP32(esp, edi);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023C250
 * Original: 0x0023C250 - 0x0023C348 (248 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023C250: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0023C25Du); RECOMP_ABI_CALL(0x000289DFu, sub_000289DF); /* call 0x000289DF */

loc_0023C25D: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    esi = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    ecx = MEM32(esp + 4);
    eax = esi;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEM32(eax + 4) = edx;
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    ecx = esp + 4;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x0023C341u); RECOMP_ABI_CALL(0x00032F7Fu, sub_00032F7F); /* call 0x00032F7F */

loc_0023C341: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0023C390
 * Original: 0x0023C390 - 0x0023C3A7 (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C390(void)
{

loc_0023C390: ;
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
 * sub_0023C3B0
 * Original: 0x0023C3B0 - 0x0023C3CA (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C3B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023C3B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023C3D0
 * Original: 0x0023C3D0 - 0x0023C400 (48 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C3D0(void)
{

loc_0023C3D0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = ecx + 0xC;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    esi = eax;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023C410
 * Original: 0x0023C410 - 0x0023C46D (93 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C410(void)
{

loc_0023C410: ;
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023C490
 * Original: 0x0023C490 - 0x0023C4F7 (103 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C490(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0023C490: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C4A1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0023C49D: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;

loc_0023C4A1: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C4B2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_0023C4AC: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_0023C4B2: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C4C3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_0023C4BD: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_0023C4C3: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C4D2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_0023C4CD: ;
    edx = MEM32(eax);
    MEM32(ecx + 0xC) = edx;

loc_0023C4D2: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C4E3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x10)) */

loc_0023C4DD: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x10) = edx;

loc_0023C4E3: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C4F4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x14)) */

loc_0023C4EE: ;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x14) = eax;

loc_0023C4F4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023C510
 * Original: 0x0023C510 - 0x0023C577 (103 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C510(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0023C510: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C521; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0023C51D: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;

loc_0023C521: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C532; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_0023C52C: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_0023C532: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C543; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_0023C53D: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_0023C543: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C552; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_0023C54D: ;
    edx = MEM32(eax);
    MEM32(ecx + 0xC) = edx;

loc_0023C552: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C563; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x10)) */

loc_0023C55D: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x10) = edx;

loc_0023C563: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C574; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x14)) */

loc_0023C56E: ;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x14) = eax;

loc_0023C574: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023C590
 * Original: 0x0023C590 - 0x0023C61C (140 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C590(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0023C590: ;
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C5AF; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0023C5AB: ;
    MEMF(ecx) = xmm1.f[0]; /* movss */

loc_0023C5AF: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C5C7; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0023C5C2: ;
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */

loc_0023C5C7: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C5DF; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0023C5DA: ;
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */

loc_0023C5DF: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C5F2; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 0xC)) */

loc_0023C5ED: ;
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */

loc_0023C5F2: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C605; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 0x10)) */

loc_0023C600: ;
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */

loc_0023C605: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C619; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 0x14)) */

loc_0023C614: ;
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */

loc_0023C619: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023C640
 * Original: 0x0023C640 - 0x0023C6A9 (105 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C640(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0023C640: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C651; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0023C64D: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;

loc_0023C651: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C662; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_0023C65C: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_0023C662: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C673; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_0023C66D: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_0023C673: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C684; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_0023C67E: ;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;

loc_0023C684: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C695; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x10)) */

loc_0023C68F: ;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;

loc_0023C695: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C6A6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x14)) */

loc_0023C6A0: ;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = eax;

loc_0023C6A6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023C6D0
 * Original: 0x0023C6D0 - 0x0023C72B (91 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C6D0(void)
{

loc_0023C6D0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023C750
 * Original: 0x0023C750 - 0x0023C8BC (364 bytes, 102 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C750(void)
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

loc_0023C750: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, ebx);
    edi = esi + 0xC;
    PUSH32(esp, 0x0023C766u); RECOMP_ABI_CALL(0x000381D2u, sub_000381D2); /* call 0x000381D2 */

loc_0023C766: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    ebp = edi;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = ecx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(ebp + 8) = edx;
    ebp = esi;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = ecx;
    ecx = esi;
    esi = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = edx;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebx + 0x20;
    edi = 3;
    /* nop */

loc_0023C7C0: ;
    xmm2 = XMM_SCALAR(MEMF(edx + -32)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(ecx + eax)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C7F7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0023C7E0: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + eax) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    goto loc_0023C80C;

loc_0023C7F7: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + eax) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */

loc_0023C80C: ;
    xmm2 = XMM_SCALAR(MEMF(edx + -16)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(ecx + eax)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C844; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0023C82D: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + eax) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    goto loc_0023C859;

loc_0023C844: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + eax) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */

loc_0023C859: ;
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(ecx + eax)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C890; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0023C879: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + eax) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    goto loc_0023C8A5;

loc_0023C890: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + eax) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */

loc_0023C8A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023C7C0; /* jne: not equal / not zero */

loc_0023C8B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023C920
 * Original: 0x0023C920 - 0x0023C924 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C920(void)
{

loc_0023C920: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0023C930
 * Original: 0x0023C930 - 0x0023C934 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C930(void)
{

loc_0023C930: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0023C940
 * Original: 0x0023C940 - 0x0023C945 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C940(void)
{

loc_0023C940: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 6);
    esp += 4; return; /* ret */

}

/**
 * sub_0023C950
 * Original: 0x0023C950 - 0x0023C9F7 (167 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0023C950: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0023C9F0; /* je: equal / zero */

loc_0023C95F: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023C9F0; /* je: equal / zero */

loc_0023C96E: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x2C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C9F0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x2C)) */

loc_0023C979: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x2C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C9F0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x2C)) */

loc_0023C984: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x3C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x30); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C9F0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x30)) */

loc_0023C98F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x30); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C9F0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x30)) */

loc_0023C99A: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C9F0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x34)) */

loc_0023C9A5: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023C9F0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x34)) */

loc_0023C9B0: ;
    SET_LO8(eax, MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023C9BB; /* jne: not equal / not zero */

loc_0023C9B7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0023C9BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023C9B9u); } /* indirect call */
    }

loc_0023C9BB: ;
    SET_LO8(eax, MEM8(edi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023C9C8; /* jne: not equal / not zero */

loc_0023C9C2: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0023C9C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023C9C6u); } /* indirect call */
    }

loc_0023C9C8: ;
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(ecx, MEM8(edi + 4));
    eax = ZX8(LO8(eax));
    ecx = ZX8(LO8(ecx));
    eax = eax + eax * 2;
    edx = ecx + eax * 4;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx * 4 + 0x8F9DF0); PUSH32(esp, 0x0023C9E8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0023C9E1u); } /* indirect call */
    }

loc_0023C9E8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0023C9F0: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023CA20
 * Original: 0x0023CA20 - 0x0023CA36 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CA20(void)
{

loc_0023CA20: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023CA35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023CA32u); } /* indirect call */
    }

loc_0023CA35: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CA40
 * Original: 0x0023CA40 - 0x0023CA44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CA40(void)
{

loc_0023CA40: ;
    eax = ecx + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CA50
 * Original: 0x0023CA50 - 0x0023CA57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CA50(void)
{

loc_0023CA50: ;
    eax = ecx + 0x90;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CA60
 * Original: 0x0023CA60 - 0x0023CA67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CA60(void)
{

loc_0023CA60: ;
    eax = ecx + 0xAC;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CA70
 * Original: 0x0023CA70 - 0x0023CA77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CA70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023CA70: ;
    fp_push(MEMF(ecx + 0xA0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023CA80
 * Original: 0x0023CA80 - 0x0023CA91 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CA80(void)
{

loc_0023CA80: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0023CA90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023CA8Du); } /* indirect call */
    }

loc_0023CA90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CAA0
 * Original: 0x0023CAA0 - 0x0023CAB6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CAA0(void)
{

loc_0023CAA0: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE2A4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023CAB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023CAB2u); } /* indirect call */
    }

loc_0023CAB5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CAC0
 * Original: 0x0023CAC0 - 0x0023CAD1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CAC0(void)
{

loc_0023CAC0: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0023CAD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023CACDu); } /* indirect call */
    }

loc_0023CAD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CAE0
 * Original: 0x0023CAE0 - 0x0023CAE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CAE0(void)
{

loc_0023CAE0: ;
    eax = ecx + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CAF0
 * Original: 0x0023CAF0 - 0x0023CAF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CAF0(void)
{

loc_0023CAF0: ;
    eax = ecx + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CB00
 * Original: 0x0023CB00 - 0x0023CB23 (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CB00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023CB00: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x110;
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
 * sub_0023CB30
 * Original: 0x0023CB30 - 0x0023CB37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CB30(void)
{

loc_0023CB30: ;
    eax = ecx + 0x110;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CB40
 * Original: 0x0023CB40 - 0x0023CB47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CB40(void)
{

loc_0023CB40: ;
    eax = ecx + 0x120;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CB50
 * Original: 0x0023CB50 - 0x0023CB57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CB50(void)
{

loc_0023CB50: ;
    eax = ecx + 0x150;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CB60
 * Original: 0x0023CB60 - 0x0023CB67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CB60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023CB60: ;
    fp_push(MEMF(ecx + 0x160)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023CB70
 * Original: 0x0023CB70 - 0x0023CB90 (32 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CB70(void)
{

loc_0023CB70: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x164) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x168) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023CBA0
 * Original: 0x0023CBA0 - 0x0023CBA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CBA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023CBA0: ;
    fp_push(MEMF(ecx + 0x164)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023CBB0
 * Original: 0x0023CBB0 - 0x0023CBB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CBB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023CBB0: ;
    fp_push(MEMF(ecx + 0x168)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023CBC0
 * Original: 0x0023CBC0 - 0x0023CBD6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CBC0(void)
{

loc_0023CBC0: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023CBD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023CBD2u); } /* indirect call */
    }

loc_0023CBD5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CBE0
 * Original: 0x0023CBE0 - 0x0023CBE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CBE0(void)
{

loc_0023CBE0: ;
    eax = MEM32(ecx + 0x50);
    esp += 4; return; /* ret */

}

/**
 * sub_0023CBF0
 * Original: 0x0023CBF0 - 0x0023CBF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CBF0(void)
{

loc_0023CBF0: ;
    eax = MEM32(ecx + 0x54);
    esp += 4; return; /* ret */

}

/**
 * sub_0023CC00
 * Original: 0x0023CC00 - 0x0023CC12 (18 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CC00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023CC00: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x58);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x170);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023CC20
 * Original: 0x0023CC20 - 0x0023CC36 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CC20(void)
{

loc_0023CC20: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023CC35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023CC32u); } /* indirect call */
    }

loc_0023CC35: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CC40
 * Original: 0x0023CC40 - 0x0023CC44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CC40(void)
{

loc_0023CC40: ;
    eax = ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CC50
 * Original: 0x0023CC50 - 0x0023CC54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CC50(void)
{

loc_0023CC50: ;
    eax = ecx + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CC60
 * Original: 0x0023CC60 - 0x0023CC76 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CC60(void)
{

loc_0023CC60: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023CC75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023CC72u); } /* indirect call */
    }

loc_0023CC75: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CC80
 * Original: 0x0023CC80 - 0x0023CC84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CC80(void)
{

loc_0023CC80: ;
    eax = ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CC90
 * Original: 0x0023CC90 - 0x0023CC94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CC90(void)
{

loc_0023CC90: ;
    eax = ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CCA0
 * Original: 0x0023CCA0 - 0x0023CCA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CCA0(void)
{

loc_0023CCA0: ;
    eax = ecx + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CCB0
 * Original: 0x0023CCB0 - 0x0023CCB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CCB0(void)
{

loc_0023CCB0: ;
    eax = ecx + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CCC0
 * Original: 0x0023CCC0 - 0x0023CCC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CCC0(void)
{

loc_0023CCC0: ;
    eax = ecx + 0xA0;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CCD0
 * Original: 0x0023CCD0 - 0x0023CCD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CCD0(void)
{

loc_0023CCD0: ;
    eax = ecx + 0x60;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CCE0
 * Original: 0x0023CCE0 - 0x0023CCE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CCE0(void)
{

loc_0023CCE0: ;
    eax = ecx + 0x60;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CCF0
 * Original: 0x0023CCF0 - 0x0023CCF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CCF0(void)
{

loc_0023CCF0: ;
    eax = ecx + 0x90;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CD00
 * Original: 0x0023CD00 - 0x0023CD07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CD00(void)
{

loc_0023CD00: ;
    eax = ecx + 0x390;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CD10
 * Original: 0x0023CD10 - 0x0023CD17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CD10(void)
{

loc_0023CD10: ;
    eax = ecx + 0x390;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CD20
 * Original: 0x0023CD20 - 0x0023CD27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CD20(void)
{

loc_0023CD20: ;
    eax = ecx + 0x3B4;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CD30
 * Original: 0x0023CD30 - 0x0023CD37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CD30(void)
{

loc_0023CD30: ;
    eax = ecx + 0x3C4;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CD40
 * Original: 0x0023CD40 - 0x0023CD70 (48 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CD40(void)
{

loc_0023CD40: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x394) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x39C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x214) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x218) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023CD80
 * Original: 0x0023CD80 - 0x0023CD87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CD80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023CD80: ;
    fp_push(MEMF(ecx + 0x394)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023CD90
 * Original: 0x0023CD90 - 0x0023CD97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CD90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023CD90: ;
    fp_push(MEMF(ecx + 0x39C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023CDA0
 * Original: 0x0023CDA0 - 0x0023CDD0 (48 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CDA0(void)
{

loc_0023CDA0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x398) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x3A0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x384) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x388) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023CDE0
 * Original: 0x0023CDE0 - 0x0023CDE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CDE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023CDE0: ;
    fp_push(MEMF(ecx + 0x398)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023CDF0
 * Original: 0x0023CDF0 - 0x0023CDF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CDF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023CDF0: ;
    fp_push(MEMF(ecx + 0x3A0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023CE00
 * Original: 0x0023CE00 - 0x0023CE07 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CE00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023CE00: ;
    fp_push(MEMF(ecx + 0x3D8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023CE10
 * Original: 0x0023CE10 - 0x0023CE17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CE10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023CE10: ;
    fp_push(MEMF(ecx + 0x3DC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023CE20
 * Original: 0x0023CE20 - 0x0023CE27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CE20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023CE20: ;
    fp_push(MEMF(ecx + 0x3E4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023CE30
 * Original: 0x0023CE30 - 0x0023CE37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CE30(void)
{

loc_0023CE30: ;
    eax = ecx + 0x3AC;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CE40
 * Original: 0x0023CE40 - 0x0023CE47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CE40(void)
{

loc_0023CE40: ;
    eax = ecx + 0x3AC;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CE50
 * Original: 0x0023CE50 - 0x0023CE57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CE50(void)
{

loc_0023CE50: ;
    eax = ecx + 0x3B0;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CE60
 * Original: 0x0023CE60 - 0x0023CE67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CE60(void)
{

loc_0023CE60: ;
    eax = ecx + 0x3B0;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CE70
 * Original: 0x0023CE70 - 0x0023CE77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CE70(void)
{

loc_0023CE70: ;
    eax = ecx + 0xB0;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CE80
 * Original: 0x0023CE80 - 0x0023CE87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CE80(void)
{

loc_0023CE80: ;
    eax = ecx + 0x220;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CE90
 * Original: 0x0023CE90 - 0x0023CEBB (43 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CE90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023CE90: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0x3BC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(ecx + 0x3B8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x3B4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x3C0)); /* fadd dword ptr [ecx + 0x3c0] */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023CED0
 * Original: 0x0023CED0 - 0x0023CED7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CED0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023CED0: ;
    fp_push(MEMF(ecx + 0x3EC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023CEE0
 * Original: 0x0023CEE0 - 0x0023CEF6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CEE0(void)
{

loc_0023CEE0: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE2A4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023CEF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023CEF2u); } /* indirect call */
    }

loc_0023CEF5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CF00
 * Original: 0x0023CF00 - 0x0023CF11 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CF00(void)
{

loc_0023CF00: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0023CF10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023CF0Du); } /* indirect call */
    }

loc_0023CF10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CF20
 * Original: 0x0023CF20 - 0x0023CF56 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023CF20: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM16(eax + 0x24) = LO16(ecx);
    MEM16(eax + 0x26) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0023CF70
 * Original: 0x0023CF70 - 0x0023CF7E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CF70(void)
{

loc_0023CF70: ;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(eax + ecx * 2));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023CF90
 * Original: 0x0023CF90 - 0x0023CF95 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CF90(void)
{

loc_0023CF90: ;
    SET_LO16(eax, MEM16(ecx + 0x24));
    esp += 4; return; /* ret */

}

/**
 * sub_0023CFA0
 * Original: 0x0023CFA0 - 0x0023CFAE (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CFA0(void)
{

loc_0023CFA0: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(eax + ecx * 2));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023CFC0
 * Original: 0x0023CFC0 - 0x0023CFC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CFC0(void)
{

loc_0023CFC0: ;
    eax = ecx + 0x26;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CFD0
 * Original: 0x0023CFD0 - 0x0023CFD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CFD0(void)
{

loc_0023CFD0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_0023CFE0
 * Original: 0x0023CFE0 - 0x0023D0AB (203 bytes, 74 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CFE0(void)
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

loc_0023CFE0: ;
    edx = MEM32(ecx + 0x1C);
    eax = (uint32_t)(int32_t)SMEM16(edx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = eax + eax * 2;
    eax = ebx + eax * 4;
    PUSH32(esp, edi);
    esi = eax;
    ebp = MEM32(esi);
    edi = ecx;
    MEM32(edi) = ebp;
    ebp = MEM32(esi + 4);
    MEM32(edi + 4) = ebp;
    esi = MEM32(esi + 8);
    MEM32(edi + 8) = esi;
    ebp = MEM32(eax);
    edi = ecx + 0xC;
    esi = edi;
    MEM32(esi) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(esi + 4) = ebp;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;
    esi = 1;
    _fa = (uint32_t)(MEM16(ecx + 0x26)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x26), LO16(esi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0023D0A4; /* jle: less or equal (signed <=) */

loc_0023D028: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0023D030;

    /* nop */

loc_0023D030: ;
    eax = (uint32_t)(int32_t)SMEM16(edx);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = eax + eax * 2;
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + eax * 4); /* comiss */
    eax = ebx + eax * 4;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023D047; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + eax * 4)) */

loc_0023D043: ;
    ebp = MEM32(eax);
    MEM32(ecx) = ebp;

loc_0023D047: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023D058; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_0023D052: ;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;

loc_0023D058: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023D069; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_0023D063: ;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;

loc_0023D069: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023D076; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi)) */

loc_0023D072: ;
    ebp = MEM32(eax);
    MEM32(edi) = ebp;

loc_0023D076: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023D087; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x10)) */

loc_0023D081: ;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 0x10) = ebp;

loc_0023D087: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023D098; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x14)) */

loc_0023D092: ;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x14) = eax;

loc_0023D098: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x26);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0023D030; /* jl: less (signed <) */

loc_0023D0A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023D0E0
 * Original: 0x0023D0E0 - 0x0023D0E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D0E0(void)
{

loc_0023D0E0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D0F0
 * Original: 0x0023D0F0 - 0x0023D0F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D0F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023D0F0: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0023D100
 * Original: 0x0023D100 - 0x0023D103 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023D100: ;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0023D110
 * Original: 0x0023D110 - 0x0023D114 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D110(void)
{

loc_0023D110: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D120
 * Original: 0x0023D120 - 0x0023D130 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D120(void)
{

loc_0023D120: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023D140
 * Original: 0x0023D140 - 0x0023D144 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D140(void)
{

loc_0023D140: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D150
 * Original: 0x0023D150 - 0x0023D160 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D150(void)
{

loc_0023D150: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x10);
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023D170
 * Original: 0x0023D170 - 0x0023D174 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D170(void)
{

loc_0023D170: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D180
 * Original: 0x0023D180 - 0x0023D18F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023D180: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x20);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
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
 * sub_0023D1A0
 * Original: 0x0023D1A0 - 0x0023D1B6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D1A0(void)
{

loc_0023D1A0: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023D1B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023D1B2u); } /* indirect call */
    }

loc_0023D1B5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D1C0
 * Original: 0x0023D1C0 - 0x0023D1C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D1C0(void)
{

loc_0023D1C0: ;
    eax = ecx + 0x90;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D1D0
 * Original: 0x0023D1D0 - 0x0023D1F7 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D1D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023D1D0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023D200
 * Original: 0x0023D200 - 0x0023D207 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D200(void)
{

loc_0023D200: ;
    eax = ecx + 0x110;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D210
 * Original: 0x0023D210 - 0x0023D217 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D210(void)
{

loc_0023D210: ;
    eax = ecx + 0x150;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D220
 * Original: 0x0023D220 - 0x0023D227 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D220(void)
{

loc_0023D220: ;
    eax = ecx + 0x160;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D230
 * Original: 0x0023D230 - 0x0023D237 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D230(void)
{

loc_0023D230: ;
    eax = MEM32(ecx + 0x160);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D240
 * Original: 0x0023D240 - 0x0023D256 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D240(void)
{

loc_0023D240: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023D255u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023D252u); } /* indirect call */
    }

loc_0023D255: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D260
 * Original: 0x0023D260 - 0x0023D267 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D260(void)
{

loc_0023D260: ;
    eax = MEM32(ecx + 0xE0);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D270
 * Original: 0x0023D270 - 0x0023D277 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D270(void)
{

loc_0023D270: ;
    eax = MEM32(ecx + 0xE0);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D280
 * Original: 0x0023D280 - 0x0023D287 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D280(void)
{

loc_0023D280: ;
    eax = ecx + 0x90;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D290
 * Original: 0x0023D290 - 0x0023D2A2 (18 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023D290: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0xE8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
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
 * sub_0023D2B0
 * Original: 0x0023D2B0 - 0x0023D2C3 (19 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D2B0(void)
{

loc_0023D2B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0xF0);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023D2D0
 * Original: 0x0023D2D0 - 0x0023D2D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D2D0(void)
{

loc_0023D2D0: ;
    eax = ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D2E0
 * Original: 0x0023D2E0 - 0x0023D2E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D2E0(void)
{

loc_0023D2E0: ;
    SET_LO8(eax, MEM8(ecx + 0xDC));
    esp += 4; return; /* ret */

}

/**
 * sub_0023D2F0
 * Original: 0x0023D2F0 - 0x0023D2F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D2F0(void)
{

loc_0023D2F0: ;
    eax = ecx + 0xD0;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D300
 * Original: 0x0023D300 - 0x0023D316 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D300(void)
{

loc_0023D300: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023D315u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023D312u); } /* indirect call */
    }

loc_0023D315: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D320
 * Original: 0x0023D320 - 0x0023D324 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D320(void)
{

loc_0023D320: ;
    eax = MEM32(ecx + 0x50);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D330
 * Original: 0x0023D330 - 0x0023D33D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D330(void)
{

loc_0023D330: ;
    eax = MEM32(ecx + 0x54);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023D340
 * Original: 0x0023D340 - 0x0023D34D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D340(void)
{

loc_0023D340: ;
    eax = MEM32(ecx + 0x54);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023D350
 * Original: 0x0023D350 - 0x0023D366 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D350(void)
{

loc_0023D350: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE2A4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023D365u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023D362u); } /* indirect call */
    }

loc_0023D365: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D370
 * Original: 0x0023D370 - 0x0023D381 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D370(void)
{

loc_0023D370: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0023D380u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023D37Du); } /* indirect call */
    }

loc_0023D380: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D390
 * Original: 0x0023D390 - 0x0023D39F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023D390: ;
    ecx = MEM32(ecx);
    eax = MEM32(ecx);
    MEM32(esp + 8) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_0023D3B0
 * Original: 0x0023D3B0 - 0x0023D3B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D3B0(void)
{

loc_0023D3B0: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D3C0
 * Original: 0x0023D3C0 - 0x0023D3D6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D3C0(void)
{

loc_0023D3C0: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE29C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023D3D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023D3D2u); } /* indirect call */
    }

loc_0023D3D5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D3E0
 * Original: 0x0023D3E0 - 0x0023D3E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D3E0(void)
{

loc_0023D3E0: ;
    MEM32(ecx) = 0x7FE2AC;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D3F0
 * Original: 0x0023D3F0 - 0x0023D3F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D3F0(void)
{

loc_0023D3F0: ;
    eax = ecx + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D400
 * Original: 0x0023D400 - 0x0023D404 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D400(void)
{

loc_0023D400: ;
    eax = ecx + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D410
 * Original: 0x0023D410 - 0x0023D414 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D410(void)
{

loc_0023D410: ;
    eax = ecx + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D420
 * Original: 0x0023D420 - 0x0023D424 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D420(void)
{

loc_0023D420: ;
    eax = ecx + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D430
 * Original: 0x0023D430 - 0x0023D434 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D430(void)
{

loc_0023D430: ;
    eax = ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D440
 * Original: 0x0023D440 - 0x0023D444 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D440(void)
{

loc_0023D440: ;
    eax = ecx + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D450
 * Original: 0x0023D450 - 0x0023D454 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D450(void)
{

loc_0023D450: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D460
 * Original: 0x0023D460 - 0x0023D482 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023D460: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FE2AC;
    if (TEST_Z(_fa, _fb)) goto loc_0023D47C; /* je: equal / zero */

loc_0023D470: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0023D47Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023D479u); } /* indirect call */
    }

loc_0023D47C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023D490
 * Original: 0x0023D490 - 0x0023D4F1 (97 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023D490: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0x7FE2AC;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    ecx = eax + 0x10;
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x38) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D510
 * Original: 0x0023D510 - 0x0023D521 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D510(void)
{

loc_0023D510: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0023D520u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023D51Du); } /* indirect call */
    }

loc_0023D520: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D530
 * Original: 0x0023D530 - 0x0023D546 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D530(void)
{

loc_0023D530: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE2A4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023D545u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023D542u); } /* indirect call */
    }

loc_0023D545: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D550
 * Original: 0x0023D550 - 0x0023D561 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D550(void)
{

loc_0023D550: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0023D560u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023D55Du); } /* indirect call */
    }

loc_0023D560: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D570
 * Original: 0x0023D570 - 0x0023D5DD (109 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023D570: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    eax = esi + 0x10;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x58;
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi) = 0x7FE2B0;
    PUSH32(esp, 0x0023D5D9u); RECOMP_ABI_CALL(0x000289DFu, sub_000289DF); /* call 0x000289DF */

loc_0023D5D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D600
 * Original: 0x0023D600 - 0x0023D619 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D600(void)
{

loc_0023D600: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x58;
    MEM32(esi) = 0x7FE2B0;
    PUSH32(esp, 0x0023D611u); RECOMP_ABI_CALL(0x00032F7Fu, sub_00032F7F); /* call 0x00032F7F */

loc_0023D611: ;
    MEM32(esi) = 0x7FE2AC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D620
 * Original: 0x0023D620 - 0x0023D624 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D620(void)
{

loc_0023D620: ;
    eax = ecx + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D630
 * Original: 0x0023D630 - 0x0023D641 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023D630: ;
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
 * sub_0023D650
 * Original: 0x0023D650 - 0x0023D699 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023D650: ;
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023D66E; /* je: equal / zero */

loc_0023D65A: ;
    edx = MEM32(eax + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(ecx + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0023D669; /* je: equal / zero */

loc_0023D664: ;
    MEM32(edx + 0x3C) = esi;
    goto loc_0023D677;

loc_0023D669: ;
    MEM32(ecx + 0x14) = esi;
    goto loc_0023D677;

loc_0023D66E: ;
    eax = MEM32(ecx + 8);
    edx = eax + 0x70;
    MEM32(ecx + 8) = edx;

loc_0023D677: ;
    edx = MEM32(ecx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7FE2B4)); /* movss */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = edx;
    MEM32(eax + 0x48) = esi;
    MEM32(eax + 0x4C) = esi;
    MEM32(eax + 0x50) = esi;
    MEM32(eax + 0x54) = esi;
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D6B0
 * Original: 0x0023D6B0 - 0x0023D6E0 (48 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023D6B0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x3C) = 0;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023D6D4; /* je: equal / zero */

loc_0023D6C8: ;
    MEM32(edx + 0x3C) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_0023D6D4: ;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023D6F0
 * Original: 0x0023D6F0 - 0x0023D729 (57 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023D6F0: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(esp + 4);
    MEM32(edx + 0x3C) = eax;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023D715; /* je: equal / zero */

loc_0023D701: ;
    MEM32(eax + 0x38) = edx;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x14) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - eax;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 16; return; /* ret 12 */

loc_0023D715: ;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x14) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - eax;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0023D740
 * Original: 0x0023D740 - 0x0023D877 (311 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023D740(void)
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

loc_0023D740: ;
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
    eax = MEM32(ebp + 0xC);
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x118)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 0xA8); /* subss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x11C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x114)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0xA4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x110)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0xA0); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x168)); /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_0023D871; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0023D7CC: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023D833; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0023D822: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0023D871; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0023D833: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x3E4)); /* fmul dword ptr [eax + 0x3e4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x3D8)); /* fmul dword ptr [eax + 0x3d8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    fp_push(MEMF(0x7AA840)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0023D871; /* jb: below (unsigned <) */

loc_0023D86C: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_0023D871: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_0023D8D0
 * Original: 0x0023D8D0 - 0x0023D8D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D8D0(void)
{

loc_0023D8D0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D8E0
 * Original: 0x0023D8E0 - 0x0023D974 (148 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0023D8E0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023D957; /* je: equal / zero */

loc_0023D8E6: ;
    edx = MEM32(esp + 4);
    /* nop */

loc_0023D8F0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x34); /* comiss */
    if ((_fca > _fcb)) goto loc_0023D922; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx + 0x34)) */

loc_0023D8FB: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023D8F0; /* jne: not equal / not zero */

loc_0023D902: ;
    eax = MEM32(ecx + 4);
    MEM32(eax + 0x38) = edx;
    eax = MEM32(ecx + 4);
    MEM32(edx + 0x3C) = eax;
    MEM32(edx + 0x38) = 0;
    eax = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

loc_0023D922: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x3C);
    MEM32(edx + 0x3C) = esi;
    esi = MEM32(eax + 0x3C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023D944; /* je: equal / zero */

loc_0023D930: ;
    MEM32(esi + 0x38) = edx;
    MEM32(edx + 0x38) = eax;
    MEM32(eax + 0x3C) = edx;
    eax = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

loc_0023D944: ;
    MEM32(ecx) = edx;
    MEM32(edx + 0x38) = eax;
    MEM32(eax + 0x3C) = edx;
    eax = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

loc_0023D957: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(eax + 0x3C) = 0;
    MEM32(eax + 0x38) = 0;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023D9A0
 * Original: 0x0023D9A0 - 0x0023D9E1 (65 bytes, 30 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: standard_frame
 */
void sub_0023D9A0(void)
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

loc_0023D9A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
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
 * sub_0023DA00
 * Original: 0x0023DA00 - 0x0023DA03 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0023DA00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023DA00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0023DA10
 * Original: 0x0023DA10 - 0x0023DD29 (793 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023DA10(void)
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

loc_0023DA10: ;
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
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ebp + 0x14);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    esi = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    ecx = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x58);
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(esp + 0x58);
    edi = MEM32(ebp + 0xC);
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x50);
    edx = esp + 0x30;
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x64) = ecx;
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x78) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023DB3Cu); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_0023DB3C: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x7FE2B8)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0023DD21; /* ja: above (unsigned >) (xmm5.f[0] vs xmm0.f[0]) */

loc_0023DB9E: ;
    eax = MEM32(ebp + 8);
    xmm6 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esi); /* subss */
    MEMF(esp + 0x50) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esi + 4); /* subss */
    ecx = MEM32(esp + 0x50);
    MEMF(esp + 0x54) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esi + 8); /* subss */
    edx = MEM32(esp + 0x54);
    esi = MEM32(ebp + 0x20);
    MEMF(esp + 0x58) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(esp + 0x58);
    MEM32(esp + 0x10) = ecx;
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x10); /* mulss */
    MEMF(esp + 0x5C) = xmm6.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    MEM32(esp + 0x18) = eax;
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x18); /* mulss */
    MEM32(esp + 0x1C) = ecx;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x7FBF9C)); /* movss */
    MEM32(esp + 0x14) = edx;
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0023DD21; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0023DC36: ;
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0023DD21; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0023DC49: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023DC5Du); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_0023DC5D: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x2C); /* mulss */
    edi = MEM32(ebp + 0x24);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x7FBF9C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0023DD21; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0023DCAB: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    if ((_fca > _fcb)) goto loc_0023DD21; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_0023DCB6: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023DCC5u); RECOMP_ABI_CALL(0x00036B02u, sub_00036B02); /* call 0x00036B02 */

loc_0023DCC5: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(ebp + 0x1C);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x7AA840)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0023DD21; /* ja: above (unsigned >) */

loc_0023DCE5: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0023DD21: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
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
 * sub_0023DDF0
 * Original: 0x0023DDF0 - 0x0023DED6 (230 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023DDF0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0023DDF0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm6 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm5 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm4 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023DE6E; /* jb: below (unsigned <) (xmm4.f[0] vs xmm3.f[0]) */

loc_0023DE59: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

loc_0023DE6E: ;
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023DEA5; /* jb: below (unsigned <) (xmm3.f[0] vs xmm4.f[0]) */

loc_0023DE90: ;
    edx = MEM32(ecx);
    eax = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

loc_0023DEA5: ;
    ecx = MEM32(esp + 0x10);
    xmm3.f[0] = xmm3.f[0] / xmm4.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 8); /* addss */
    MEMF(ecx + 8) = xmm2.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0023DF10
 * Original: 0x0023DF10 - 0x0023E17B (619 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023DF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0023DF10: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x2C);
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ecx = MEM32(esp + 0x30);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 8); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 8);
    xmm7 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0xC);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x38);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    esi = MEM32(esp + 4);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(esp + 8);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(esp + 0xC);
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x24) = esi;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    POP32(esp, esi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E04A; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_0023E02D: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E04A; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_0023E032: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x38);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0023E04A: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E0E1; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0023E053: ;
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm7; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E09A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0023E075: ;
    edx = MEM32(ecx);
    eax = MEM32(esp + 0x38);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0023E09A: ;
    ecx = MEM32(esp + 0x38);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax); /* addss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0023E0E1: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E134; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0023E10F: ;
    ecx = MEM32(edx);
    eax = MEM32(esp + 0x38);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0023E134: ;
    ecx = MEM32(esp + 0x38);
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 8); /* addss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0023E220
 * Original: 0x0023E220 - 0x0023E542 (802 bytes, 210 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023E220(void)
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

loc_0023E220: ;
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
    PUSH32(esp, edi);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    xmm6 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(ebp + 0x10);
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(ebp + 8);
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 8); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 4); /* subss */
    xmm4.f[0] = xmm4.f[0] - MEMF(ecx); /* subss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm6.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x18) = 1;
    MEM32(esp + 0x2C) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E30C; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm5.f[0]) */

loc_0023E2AE: ;
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x30) = xmm7.f[0]; /* movss */
    eax = MEM32(esp + 0x30);
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0x24); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 0x34) = xmm7.f[0]; /* movss */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x18) = 2;

loc_0023E30C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E353; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0023E34E: ;
    _fca = xmm5.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0023E366; /* ja: above (unsigned >) (xmm5.f[0] vs xmm6.f[0]) */

loc_0023E353: ;
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm4.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E36F; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm6.f[0]) */

loc_0023E366: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0023E36F: ;
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    _fca = xmm5.f[0]; _fcb = xmm6.f[0]; /* comiss */
    esi = MEM32(ebp + 0x20);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E3A1; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm6.f[0]) */

loc_0023E38E: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm7.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] + xmm0.f[0]; /* addss */
    goto loc_0023E3B2;

loc_0023E3A1: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm4.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */

loc_0023E3B2: ;
    edx = MEM32(ebp + 0x1C);
    MEMF(esi) = xmm4.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm5 = xmm4; /* movaps */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    edi = MEM32(esp + 0x30);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    eax = edx;
    MEM32(eax) = edi;
    edi = MEM32(esp + 0x34);
    MEM32(eax + 4) = edi;
    edi = MEM32(esp + 0x38);
    MEM32(eax + 8) = edi;
    edi = MEM32(esp + 0x3C);
    MEM32(eax + 0xC) = edi;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 8); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    edi = MEM32(esp + 0x20);
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edx + 8); /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    ebx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 4); /* subss */
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx); /* subss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x38) = eax;
    xmm5.f[0] = xmm5.f[0] - MEMF(esp + 0x38); /* subss */
    eax = MEM32(esp + 0x2C);
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEM32(esp + 0x34) = ebx;
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x34); /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEM32(esp + 0x30) = edi;
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x30); /* subss */
    xmm0 = xmm4; /* movaps */
    MEM32(esp + 0x3C) = eax;
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E537; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm1.f[0]) */

loc_0023E51E: ;
    ecx = MEM32(esp + 0x28);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(edx) = edi;
    MEM32(edx + 4) = ebx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = eax;
    MEMF(esi) = xmm0.f[0]; /* movss */

loc_0023E537: ;
    eax = MEM32(esp + 0x18);
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
 * sub_0023E610
 * Original: 0x0023E610 - 0x0023E63F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023E610: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023E628; /* je: equal / zero */

loc_0023E61A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0023E621u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023E61Eu); } /* indirect call */
    }

loc_0023E621: ;
    MEM32(esi + 0x50) = 0;

loc_0023E628: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023E63D; /* je: equal / zero */

loc_0023E62F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0023E636u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023E633u); } /* indirect call */
    }

loc_0023E636: ;
    MEM32(esi + 0x54) = 0;

loc_0023E63D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023E650
 * Original: 0x0023E650 - 0x0023E653 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E650(void)
{

loc_0023E650: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023E660
 * Original: 0x0023E660 - 0x0023E71C (188 bytes, 66 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0023E660: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0023E673u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023E670u); } /* indirect call */
    }

loc_0023E673: ;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0023E67Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023E67Bu); } /* indirect call */
    }

loc_0023E67E: ;
    eax = MEM32(esi + 0x54);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(eax);
    ecx = esi + 0x2C;
    edx = ecx;
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    edi = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = edi;
    edi = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = edi;
    eax = MEM32(eax + 0x14);
    MEM32(edx + 0x14) = eax;
    eax = MEM32(esi + 0x50);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E6BE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0023E6BA: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;

loc_0023E6BE: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E6CF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_0023E6C9: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_0023E6CF: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E6E0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_0023E6DA: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_0023E6E0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E6F1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_0023E6EB: ;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;

loc_0023E6F1: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E702; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x10)) */

loc_0023E6FC: ;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;

loc_0023E702: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0023E713; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x14)) */

loc_0023E70D: ;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = eax;

loc_0023E713: ;
    POP32(esp, edi);
    MEM8(esi + 7) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023E750
 * Original: 0x0023E750 - 0x0023E767 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E750(void)
{

loc_0023E750: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0023E75Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023E758u); } /* indirect call */
    }

loc_0023E75A: ;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0023E761u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023E75Fu); } /* indirect call */
    }

loc_0023E761: ;
    MEM8(esi + 7) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023E770
 * Original: 0x0023E770 - 0x0023E786 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E770(void)
{

loc_0023E770: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FE2A4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0023E785u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023E782u); } /* indirect call */
    }

loc_0023E785: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023E790
 * Original: 0x0023E790 - 0x0023E7A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E790(void)
{

loc_0023E790: ;
    ecx = MEM32(0x8FA274);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0023E7A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023E79Du); } /* indirect call */
    }

loc_0023E7A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023E7B0
 * Original: 0x0023E7B0 - 0x0023E7C9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E7B0(void)
{

loc_0023E7B0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0023E7D0
 * Original: 0x0023E7D0 - 0x0023E7D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E7D0(void)
{

loc_0023E7D0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0023E7E0
 * Original: 0x0023E7E0 - 0x0023E7E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E7E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023E7E0: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023E7F0
 * Original: 0x0023E7F0 - 0x0023E807 (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E7F0(void)
{

loc_0023E7F0: ;
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
 * sub_0023E810
 * Original: 0x0023E810 - 0x0023E813 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023E810: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0023E820
 * Original: 0x0023E820 - 0x0023E823 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023E820: ;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0023E830
 * Original: 0x0023E830 - 0x0023E841 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E830(void)
{

loc_0023E830: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023E850
 * Original: 0x0023E850 - 0x0023E854 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E850(void)
{

loc_0023E850: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0023E860
 * Original: 0x0023E860 - 0x0023E86F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023E860: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}
