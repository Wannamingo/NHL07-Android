/**
 * nhl_07_recomp - Recompiled code chunk 164
 * Functions: 250 (0x0032D4E0 - 0x00332BE0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0032D4E0
 * Original: 0x0032D4E0 - 0x0032D52D (77 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D4E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D4E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    edx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032D540
 * Original: 0x0032D540 - 0x0032D590 (80 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D540: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x28);
    ecx = ecx & 0xC44DA037u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFFFF270Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x44DA037;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | 0x1270F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = 0x270F0;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032D5B0
 * Original: 0x0032D5B0 - 0x0032D5C6 (22 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D5B0(void)
{

loc_0032D5B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = ecx;
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
 * sub_0032D5D0
 * Original: 0x0032D5D0 - 0x0032D62F (95 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D5D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_0032D5E0: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032D5E0; /* jne: not equal / not zero */

loc_0032D5EA: ;
    edi = eax;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_0032D5F0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032D5F0; /* jne: not equal / not zero */

loc_0032D5F8: ;
    SET_LO16(ecx, MEM16(0x7FC4F0));
    MEM16(edi) = LO16(ecx);
    ecx = MEM32(esp + 0x14);
    esi = ecx;

loc_0032D608: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032D608; /* jne: not equal / not zero */

loc_0032D60F: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    edx = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0032D616: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032D616; /* jne: not equal / not zero */

loc_0032D61E: ;
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
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
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032D650
 * Original: 0x0032D650 - 0x0032D6C6 (118 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D650: ;
    PUSH32(esp, esi);
    eax = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x829F6C;
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    ecx = eax + 0x28;
    edi = ecx;
    MEM32(edi) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0x14) = esi;
    MEM32(edi + 0x18) = esi;
    MEM32(edi + 0x1C) = esi;
    esi = MEM32(ecx + 0x20);
    esi = esi & 0xC44DA037u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x44DA037;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x20) = esi;
    esi = MEM32(ecx + 0x28);
    esi = esi & 0xFFFF270Fu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x1270F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(ecx + 0x28) = esi;
    MEM32(ecx + 0x24) = 0x270F0;
    MEM32(ecx + 0x2C) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032D6F0
 * Original: 0x0032D6F0 - 0x0032D6F3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D6F0(void)
{

loc_0032D6F0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032D700
 * Original: 0x0032D700 - 0x0032D77F (127 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D700: ;
    PUSH32(esp, esi);
    eax = ecx;
    MEM32(eax) = 0x829F84;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = edx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x30) = edx;
    PUSH32(esp, edi);
    ecx = eax + 0x34;
    edi = ecx;
    MEM32(edi) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0x14) = esi;
    MEM32(edi + 0x18) = esi;
    MEM32(edi + 0x1C) = esi;
    esi = MEM32(ecx + 0x20);
    esi = esi & 0xC44DA037u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x44DA037;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x20) = esi;
    esi = MEM32(ecx + 0x28);
    esi = esi & 0xFFFF270Fu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x1270F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(ecx + 0x28) = esi;
    MEM32(ecx + 0x24) = 0x270F0;
    MEM32(ecx + 0x2C) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032D7A0
 * Original: 0x0032D7A0 - 0x0032D83D (157 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D7A0: ;
    edx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0032D7D6; /* je: equal / zero */

loc_0032D7AB: ;
    xmm0 = XMM_MEM(eax + 0x180); /* movaps */
    XMM_STORE(edx, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x190); /* movaps */
    XMM_STORE(edx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x1A0); /* movaps */
    XMM_STORE(edx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x1B0); /* movaps */
    XMM_STORE(edx + 0x30, xmm0); /* movaps */

loc_0032D7D6: ;
    edx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032D808; /* je: equal / zero */

loc_0032D7DD: ;
    xmm0 = XMM_MEM(eax + 0x400); /* movaps */
    XMM_STORE(edx, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x410); /* movaps */
    XMM_STORE(edx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x420); /* movaps */
    XMM_STORE(edx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x430); /* movaps */
    XMM_STORE(edx + 0x30, xmm0); /* movaps */

loc_0032D808: ;
    ecx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032D83A; /* je: equal / zero */

loc_0032D80F: ;
    xmm0 = XMM_MEM(eax + 0x2C0); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x2D0); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x2E0); /* movaps */
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x2F0); /* movaps */
    XMM_STORE(ecx + 0x30, xmm0); /* movaps */

loc_0032D83A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032D870
 * Original: 0x0032D870 - 0x0032D901 (145 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D870: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(eax) = 0x829F9C;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x48) = ecx;
    PUSH32(esp, edi);
    edx = eax + 0x4C;
    edi = edx;
    MEM32(edi) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0x14) = esi;
    MEM32(edi + 0x18) = esi;
    MEM32(edi + 0x1C) = esi;
    esi = MEM32(edx + 0x20);
    esi = esi & 0xC44DA037u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x44DA037;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0x20) = esi;
    esi = MEM32(edx + 0x28);
    esi = esi & 0xFFFF270Fu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x1270F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(edx + 0x28) = esi;
    MEM32(edx + 0x24) = 0x270F0;
    MEM32(edx + 0x2C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032D930
 * Original: 0x0032D930 - 0x0032D9FF (207 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032D930: ;
    edx = MEM32(ecx + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0032D966; /* je: equal / zero */

loc_0032D93B: ;
    xmm0 = XMM_MEM(eax + 0x180); /* movaps */
    XMM_STORE(edx, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x190); /* movaps */
    XMM_STORE(edx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x1A0); /* movaps */
    XMM_STORE(edx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x1B0); /* movaps */
    XMM_STORE(edx + 0x30, xmm0); /* movaps */

loc_0032D966: ;
    edx = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032D998; /* je: equal / zero */

loc_0032D96D: ;
    xmm0 = XMM_MEM(eax + 0x180); /* movaps */
    XMM_STORE(edx, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x190); /* movaps */
    XMM_STORE(edx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x1A0); /* movaps */
    XMM_STORE(edx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x1B0); /* movaps */
    XMM_STORE(edx + 0x30, xmm0); /* movaps */

loc_0032D998: ;
    edx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032D9CA; /* je: equal / zero */

loc_0032D99F: ;
    xmm0 = XMM_MEM(eax + 0x400); /* movaps */
    XMM_STORE(edx, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x410); /* movaps */
    XMM_STORE(edx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x420); /* movaps */
    XMM_STORE(edx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x430); /* movaps */
    XMM_STORE(edx + 0x30, xmm0); /* movaps */

loc_0032D9CA: ;
    ecx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032D9FC; /* je: equal / zero */

loc_0032D9D1: ;
    xmm0 = XMM_MEM(eax + 0x2C0); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x2D0); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x2E0); /* movaps */
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x2F0); /* movaps */
    XMM_STORE(ecx + 0x30, xmm0); /* movaps */

loc_0032D9FC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032DA40
 * Original: 0x0032DA40 - 0x0032DA85 (69 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DA40(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0032DA40: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032DA6D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0032DA4D: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0032DA6D: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0032DAA0
 * Original: 0x0032DAA0 - 0x0032DAAC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DAA0(void)
{

loc_0032DAA0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 8 + 0x829728);
    esp += 4; return; /* ret */

}

/**
 * sub_0032DAB0
 * Original: 0x0032DAB0 - 0x0032DABC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DAB0(void)
{

loc_0032DAB0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 8 + 0x82972C);
    esp += 4; return; /* ret */

}

/**
 * sub_0032DAC0
 * Original: 0x0032DAC0 - 0x0032DAC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DAC0(void)
{

loc_0032DAC0: ;
    SET_LO8(eax, MEM8(ecx + 0x308));
    esp += 4; return; /* ret */

}

/**
 * sub_0032DAD0
 * Original: 0x0032DAD0 - 0x0032DAFB (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032DAD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    MEM32(esi) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0032DAE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032DADFu); } /* indirect call */
    }

loc_0032DAE2: ;
    edx = MEM32(esi + 0x5C);
    ecx = esi + 0x5C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0032DAEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032DAE8u); } /* indirect call */
    }

loc_0032DAEB: ;
    eax = MEM32(esi + 0xC0);
    ecx = esi + 0xC0;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_0032DB10
 * Original: 0x0032DB10 - 0x0032DB72 (98 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032DB10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0032DB26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032DB23u); } /* indirect call */
    }

loc_0032DB26: ;
    edx = MEM32(esi + 0x5C);
    ebx = esi + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0032DB32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032DB2Fu); } /* indirect call */
    }

loc_0032DB32: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi + 0xC0);
    ebp = esi + 0xC0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0032DB48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032DB45u); } /* indirect call */
    }

loc_0032DB48: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032DB6B; /* je: equal / zero */

loc_0032DB4E: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0032DB56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032DB53u); } /* indirect call */
    }

loc_0032DB56: ;
    ecx = MEM32(esi);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0032DB60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032DB5Du); } /* indirect call */
    }

loc_0032DB60: ;
    eax = MEM32(esi);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0032DB6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032DB68u); } /* indirect call */
    }

loc_0032DB6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032DB90
 * Original: 0x0032DB90 - 0x0032DBA5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DB90(void)
{

loc_0032DB90: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0032DBB0
 * Original: 0x0032DBB0 - 0x0032DBD5 (37 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DBB0(void)
{

loc_0032DBB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0032DBB8u); RECOMP_ABI_CALL(0x00022E4Au, sub_00022E4A); /* call 0x00022E4A */

loc_0032DBB8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x829FB4;
    MEM32(esi + 0x30) = 0;
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x38) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032DBE0
 * Original: 0x0032DBE0 - 0x0032DBEB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032DBE0: ;
    MEM32(ecx) = 0x829FB4;
    g_seh_ebp = ebp; sub_00025DC5(); return; /* tail jmp 0x00025DC5 */

}

/**
 * sub_0032DBF0
 * Original: 0x0032DBF0 - 0x0032DC0A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DBF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032DBF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032DC10
 * Original: 0x0032DC10 - 0x0032DC14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DC10(void)
{

loc_0032DC10: ;
    SET_LO8(eax, MEM8(ecx + 0x38));
    esp += 4; return; /* ret */

}

/**
 * sub_0032DC20
 * Original: 0x0032DC20 - 0x0032DC24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DC20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032DC20: ;
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032DC30
 * Original: 0x0032DC30 - 0x0032DC57 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032DC30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829FB4;
    PUSH32(esp, 0x0032DC3Eu); RECOMP_ABI_CALL(0x00025DC5u, sub_00025DC5); /* call 0x00025DC5 */

loc_0032DC3E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032DC51; /* je: equal / zero */

loc_0032DC45: ;
    ecx = MEM32(0x9093C0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0032DC51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032DC4Eu); } /* indirect call */
    }

loc_0032DC51: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032DC60
 * Original: 0x0032DC60 - 0x0032DC78 (24 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032DC60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x30) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032DC6F; /* jne: not equal / not zero */

loc_0032DC69: ;
    SET_LO8(eax, MEM8(ecx + 0x38));
    esp += 8; return; /* ret 4 */

loc_0032DC6F: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00019034(); return; /* tail jmp 0x00019034 */

}

/**
 * sub_0032DC80
 * Original: 0x0032DC80 - 0x0032DC98 (24 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DC80(void)
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

loc_0032DC80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x30) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032DC8F; /* jne: not equal / not zero */

loc_0032DC89: ;
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_0032DC8F: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000282D7(); return; /* tail jmp 0x000282D7 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032DCA0
 * Original: 0x0032DCA0 - 0x0032DD50 (176 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DCA0(void)
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

loc_0032DCA0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 0x30) = edi;
    PUSH32(esp, 0x0032DCB5u); RECOMP_ABI_CALL(0x000282D7u, sub_000282D7); /* call 0x000282D7 */

loc_0032DCB5: ;
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0032DCC0u); RECOMP_ABI_CALL(0x00019034u, sub_00019034); /* call 0x00019034 */

loc_0032DCC0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi + 0x38) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0032DD47; /* je: equal / zero */

loc_0032DCC9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032DD47; /* je: equal / zero */

loc_0032DCCD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0032DD16u); RECOMP_ABI_CALL(0x00557980u, sub_00557980); /* call 0x00557980 */

loc_0032DD16: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8C4598); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032DD47; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0032DD37: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x38) = LO8(ebx);

loc_0032DD47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_0032DD80
 * Original: 0x0032DD80 - 0x0032DD9D (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DD80(void)
{

loc_0032DD80: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x829FC4;
    MEM32(eax + 4) = ecx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032DDB0
 * Original: 0x0032DDB0 - 0x0032DDB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DDB0(void)
{

loc_0032DDB0: ;
    MEM32(ecx) = 0x829E54;
    esp += 4; return; /* ret */

}

/**
 * sub_0032DDC0
 * Original: 0x0032DDC0 - 0x0032DE83 (195 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0032DDC0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0032DDEDu); RECOMP_ABI_CALL(0x00557E6Bu, sub_00557E6B); /* call 0x00557E6B */

loc_0032DDED: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x2C);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    POP32(esp, esi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032DE7D; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0032DE22: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032DE7D; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_0032DE30: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032DE7D; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0032DE44: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032DE7D; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_0032DE52: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032DE7D; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0032DE66: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032DE7D; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_0032DE74: ;
    eax = 1;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032DE7D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032DEC0
 * Original: 0x0032DEC0 - 0x0032DF4A (138 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0032DEC0(void)
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

loc_0032DEC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032DEDCu); RECOMP_ABI_CALL(0x0055B642u, sub_0055B642); /* call 0x0055B642 */

loc_0032DEDC: ;
    esi = MEM32(ebp + 8);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032DEEAu); RECOMP_ABI_CALL(0x00019615u, sub_00019615); /* call 0x00019615 */

loc_0032DEEA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032DEFE; /* je: equal / zero */

loc_0032DEF1: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0032DEFE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    ecx = MEM32(esp + 0x4C);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032DF40u); RECOMP_ABI_CALL(0x000254E2u, sub_000254E2); /* call 0x000254E2 */

loc_0032DF40: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0032DF70
 * Original: 0x0032DF70 - 0x0032DF80 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DF70(void)
{

loc_0032DF70: ;
    eax = ecx;
    MEM32(eax) = 0x829FD4;
    MEM32(eax + 4) = 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0032DF90
 * Original: 0x0032DF90 - 0x0032DF97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DF90(void)
{

loc_0032DF90: ;
    MEM32(ecx) = 0x829FD4;
    esp += 4; return; /* ret */

}

/**
 * sub_0032DFA0
 * Original: 0x0032DFA0 - 0x0032DFBF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032DFA0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829FD4;
    if (TEST_Z(_fa, _fb)) goto loc_0032DFB9; /* je: equal / zero */

loc_0032DFB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032DFB6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032DFB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032DFB9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032DFD0
 * Original: 0x0032DFD0 - 0x0032DFDD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DFD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032DFD0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0032DFE0
 * Original: 0x0032DFE0 - 0x0032DFE9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DFE0(void)
{

loc_0032DFE0: ;
    eax = ecx;
    MEM32(eax) = 0x829FE0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032DFF0
 * Original: 0x0032DFF0 - 0x0032DFF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DFF0(void)
{

loc_0032DFF0: ;
    MEM32(ecx) = 0x829FE0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E000
 * Original: 0x0032E000 - 0x0032E01F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E000: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829FE0;
    if (TEST_Z(_fa, _fb)) goto loc_0032E019; /* je: equal / zero */

loc_0032E010: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032E016u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032E016: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032E019: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032E030
 * Original: 0x0032E030 - 0x0032E058 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E030: ;
    eax = ecx;
    PUSH32(esp, esi);
    edx = eax + 0xA4;
    esi = 0x28;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0032E040: ;
    MEM8(edx) = LO8(ecx);
    MEM32(edx + 0x20) = ecx;
    MEM32(edx + 0x24) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0032E040; /* jne: not equal / not zero */

loc_0032E04E: ;
    MEM32(eax + 0x6E4) = ecx;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032E070
 * Original: 0x0032E070 - 0x0032E080 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E070(void)
{

loc_0032E070: ;
    eax = ecx;
    MEM32(eax) = 0x829FF4;
    MEM32(eax + 4) = 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E090
 * Original: 0x0032E090 - 0x0032E0B2 (34 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E090: ;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x82A010);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032E0ACu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032E0AC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032E0C0
 * Original: 0x0032E0C0 - 0x0032E0E4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E0C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E0C0: ;
    eax = ecx;
    MEM32(eax) = 0x82A018;
    MEM32(eax + 4) = 0x1C;
    MEM32(eax + 0xC) = 0;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM16(eax + 0x18) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032E0F0
 * Original: 0x0032E0F0 - 0x0032E10E (30 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E0F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E0F0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x82A010);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032E108u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032E108: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032E120
 * Original: 0x0032E120 - 0x0032E143 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E120: ;
    edx = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x10;
    ecx = 0x46;
    MEM32(edx) = 0x82A030;
    MEM32(edx + 4) = 0x128;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0xC) = eax;
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032E150
 * Original: 0x0032E150 - 0x0032E169 (25 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E150: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A03C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032E163u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032E163: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032E170
 * Original: 0x0032E170 - 0x0032E18B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E170: ;
    ecx = MEM32(0x8FCADC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032E18A; /* je: equal / zero */

loc_0032E17A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0032E180u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E17Eu); } /* indirect call */
    }

loc_0032E180: ;
    MEM32(0x8FCADC) = 0;

loc_0032E18A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E1A0
 * Original: 0x0032E1A0 - 0x0032E1E8 (72 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0032E1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E1A0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    MEM32(ebp) = 0x82A04C;
    esi = ebp + 4;
    edi = 3;

loc_0032E1B4: ;
    PUSH32(esp, 0x17AEF);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x28);
    eax = esi + 0xA4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032E1C9u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_0032E1C9: ;
    MEM32(esi + 0x6E4) = 0;
    MEM32(esi) = 0;
    _fb = (uint32_t)(0x6E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6E8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0032E1B4; /* jne: not equal / not zero */

loc_0032E1E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0032E200
 * Original: 0x0032E200 - 0x0032E2A3 (163 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032E200: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ecx) = 0x82A04C;
    edi = ecx + 0x6E8;
    MEM32(esp + 0x10) = 3;
    /* nop */

loc_0032E220: ;
    eax = MEM32(edi + -1764);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032E270; /* jle: less or equal (signed <=) */

loc_0032E22C: ;
    ebx = edi + -1568;
    esi = ebx + -192;

loc_0032E238: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032E24C; /* je: equal / zero */

loc_0032E23D: ;
    PUSH32(esp, 0x0032E242u); RECOMP_ABI_CALL(0x0001760Du, sub_0001760D); /* call 0x0001760D */

loc_0032E242: ;
    ecx = MEM32(ebx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0032E24Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E249u); } /* indirect call */
    }

loc_0032E24C: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032E259; /* je: equal / zero */

loc_0032E252: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0032E259u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E256u); } /* indirect call */
    }

loc_0032E259: ;
    MEM32(esi) = 0;
    eax = MEM32(edi + -1764);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x28;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0032E238; /* jl: less (signed <) */

loc_0032E270: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032E27C; /* je: equal / zero */

loc_0032E276: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0032E27Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E27Au); } /* indirect call */
    }

loc_0032E27C: ;
    eax = MEM32(esp + 0x10);
    MEM32(edi) = 0;
    MEM32(edi + -1764) = 0;
    _fb = (uint32_t)(0x6E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x6E8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0032E220; /* jne: not equal / not zero */

loc_0032E29D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032E2D0
 * Original: 0x0032E2D0 - 0x0032E3B9 (233 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032E2D0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = 2;
    ebp = ecx + 0x6E8;
    /* nop */

loc_0032E2F0: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032E393; /* je: equal / zero */

loc_0032E2FB: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0032E302u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E2FFu); } /* indirect call */
    }

loc_0032E302: ;
    eax = MEM32(ebp + -1764);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0032E38B; /* jle: less or equal (signed <=) */

loc_0032E312: ;
    edi = ebp + -1568;

loc_0032E318: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032E379; /* jne: not equal / not zero */

loc_0032E31D: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edx + ecx * 4;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0032E337u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E335u); } /* indirect call */
    }

loc_0032E337: ;
    PUSH32(esp, 0x0032E33Cu); RECOMP_ABI_CALL(0x0001760Du, sub_0001760D); /* call 0x0001760D */

loc_0032E33C: ;
    edx = MEM32(eax);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0032E348u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E345u); } /* indirect call */
    }

loc_0032E348: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032E379; /* jne: not equal / not zero */

loc_0032E34C: ;
    ecx = MEM32(ebp);
    eax = MEM32(esi);
    edx = MEM32(ecx);
    ebx = edi + -32;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0032E35Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E358u); } /* indirect call */
    }

loc_0032E35B: ;
    PUSH32(esp, 0x0032E360u); RECOMP_ABI_CALL(0x0001760Du, sub_0001760D); /* call 0x0001760D */

loc_0032E360: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0032E375u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E372u); } /* indirect call */
    }

loc_0032E375: ;
    ebx = MEM32(esp + 0x14);

loc_0032E379: ;
    eax = MEM32(ebp + -1764);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0032E318; /* jl: less (signed <) */

loc_0032E38B: ;
    ecx = MEM32(ebp);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0032E393u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E390u); } /* indirect call */
    }

loc_0032E393: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x1BA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1BA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x6E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x6E8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x530) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x530 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0032E2F0; /* jl: less (signed <) */

loc_0032E3B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032E400
 * Original: 0x0032E400 - 0x0032E406 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E400(void)
{

loc_0032E400: ;
    eax = MEM32(0x8FCAE0);
    esp += 4; return; /* ret */

}

/**
 * sub_0032E410
 * Original: 0x0032E410 - 0x0032E433 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E410: ;
    MEM32(0x8FCAE4) = MEM32(0x8FCAE4) - 1;
    _fa = (uint32_t)(MEM32(0x8FCAE4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0032E432; /* jne: not equal / not zero */

loc_0032E418: ;
    ecx = MEM32(0x8FCAE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032E428; /* je: equal / zero */

loc_0032E422: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0032E428u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E426u); } /* indirect call */
    }

loc_0032E428: ;
    MEM32(0x8FCAE0) = 0;

loc_0032E432: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E440
 * Original: 0x0032E440 - 0x0032E44D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E440(void)
{

loc_0032E440: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM8(eax + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E450
 * Original: 0x0032E450 - 0x0032E451 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E450(void)
{

loc_0032E450: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E460
 * Original: 0x0032E460 - 0x0032E474 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E460: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x82A050;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E480
 * Original: 0x0032E480 - 0x0032E492 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E480: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx) = 0x829FE0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E4A0
 * Original: 0x0032E4A0 - 0x0032E4A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E4A0(void)
{

loc_0032E4A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E4B0
 * Original: 0x0032E4B0 - 0x0032E4B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E4B0(void)
{

loc_0032E4B0: ;
    eax = ecx;
    MEM32(eax) = 0x82A064;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E4C0
 * Original: 0x0032E4C0 - 0x0032E4C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E4C0(void)
{

loc_0032E4C0: ;
    MEM32(ecx) = 0x829FE0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E4D0
 * Original: 0x0032E4D0 - 0x0032E51D (77 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032E4D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032E51B; /* je: equal / zero */

loc_0032E4D9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0032E4E3u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032E4E3: ;
    edi = MEM32(eax + 0x1C);
    ecx = esi;
    PUSH32(esp, 0x0032E4EDu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032E4ED: ;
    ebx = MEM32(eax + 0x18);
    ecx = esi;
    PUSH32(esp, 0x0032E4F7u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032E4F7: ;
    ebp = MEM32(eax + 0x14);
    ecx = esi;
    PUSH32(esp, 0x0032E501u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032E501: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032E518u); RECOMP_ABI_CALL(0x005A3388u, sub_005A3388); /* call 0x005A3388 */

loc_0032E518: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0032E51B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032E530
 * Original: 0x0032E530 - 0x0032E565 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E530: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032E551u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032E551: ;
    ecx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032E561u); RECOMP_ABI_CALL(0x00015C09u, sub_00015C09); /* call 0x00015C09 */

loc_0032E561: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032E580
 * Original: 0x0032E580 - 0x0032E6A8 (296 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032E580: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0032E591u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032E591: ;
    esi = MEM32(esp + 0x44);
    edi = MEM32(eax + 0x18);
    ecx = esi;
    PUSH32(esp, 0x0032E59Fu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032E59F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032E5BE; /* jne: not equal / not zero */

loc_0032E5A4: ;
    ecx = ebx;
    PUSH32(esp, 0x0032E5ABu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032E5AB: ;
    edi = MEM32(eax + 0x1C);
    ecx = esi;
    PUSH32(esp, 0x0032E5B5u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032E5B5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032E5BE; /* jne: not equal / not zero */

loc_0032E5BA: ;
    edi = ebx;
    goto loc_0032E5E4;

loc_0032E5BE: ;
    ecx = esi;
    PUSH32(esp, 0x0032E5C5u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032E5C5: ;
    edi = MEM32(eax + 0x1C);
    ecx = esi;
    PUSH32(esp, 0x0032E5CFu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032E5CF: ;
    eax = MEM32(eax + 0x18);
    PUSH32(esp, 0x100);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0032E5E2u); RECOMP_ABI_CALL(0x005A4E2Du, sub_005A4E2D); /* call 0x005A4E2D */

loc_0032E5E2: ;
    edi = eax;

loc_0032E5E4: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0032E5EEu); RECOMP_ABI_CALL(0x005A3A01u, sub_005A3A01); /* call 0x005A3A01 */

loc_0032E5EE: ;
    ecx = esi;
    PUSH32(esp, 0x0032E5F5u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032E5F5: ;
    eax = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0032E607u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032E607: ;
    ecx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x15) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = ecx;
    ecx = esi;
    PUSH32(esp, 0x0032E61Au); RECOMP_ABI_CALL(0x005A23FEu, sub_005A23FE); /* call 0x005A23FE */

loc_0032E61A: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032E645; /* je: equal / zero */

loc_0032E620: ;
    ecx = esi;
    PUSH32(esp, 0x0032E627u); RECOMP_ABI_CALL(0x005A23FEu, sub_005A23FE); /* call 0x005A23FE */

loc_0032E627: ;
    edx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0032E63Au); RECOMP_ABI_CALL(0x005A23FEu, sub_005A23FE); /* call 0x005A23FE */

loc_0032E63A: ;
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x38) = ebp;

loc_0032E645: ;
    ecx = esi;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x30) = ebp;
    PUSH32(esp, 0x0032E658u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032E658: ;
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x400000));
    ecx = ecx - 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0032E67Cu); RECOMP_ABI_CALL(0x005A46E2u, sub_005A46E2); /* call 0x005A46E2 */

loc_0032E67C: ;
    ecx = esi;
    PUSH32(esp, 0x0032E683u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032E683: ;
    eax = MEM32(eax);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_0032E694; /* jle: less or equal (signed <=) */

loc_0032E68D: ;
    ecx = esi;
    PUSH32(esp, 0x0032E694u); RECOMP_ABI_CALL(0x005A38ECu, sub_005A38EC); /* call 0x005A38EC */

loc_0032E694: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032E6A1; /* je: equal / zero */

loc_0032E698: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0032E69Eu); RECOMP_ABI_CALL(0x005A1E5Eu, sub_005A1E5E); /* call 0x005A1E5E */

loc_0032E69E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032E6A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032E700
 * Original: 0x0032E700 - 0x0032E746 (70 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E700: ;
    eax = MEM32(0x8C45C8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0032E713u); RECOMP_ABI_CALL(0x00015C09u, sub_00015C09); /* call 0x00015C09 */

loc_0032E713: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0032E725; /* je: equal / zero */

loc_0032E71B: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0032E722u); RECOMP_ABI_CALL(0x000310E9u, sub_000310E9); /* call 0x000310E9 */

loc_0032E722: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032E725: ;
    ecx = MEM32(0x8C45CC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0032E733u); RECOMP_ABI_CALL(0x00015C09u, sub_00015C09); /* call 0x00015C09 */

loc_0032E733: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032E741; /* je: equal / zero */

loc_0032E737: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0032E73Eu); RECOMP_ABI_CALL(0x000310E9u, sub_000310E9); /* call 0x000310E9 */

loc_0032E73E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032E741: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032E760
 * Original: 0x0032E760 - 0x0032E783 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E760: ;
    MEM32(0x8FCAE4) = MEM32(0x8FCAE4) - 1;
    _fa = (uint32_t)(MEM32(0x8FCAE4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0032E782; /* jne: not equal / not zero */

loc_0032E768: ;
    ecx = MEM32(0x8FCAE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032E778; /* je: equal / zero */

loc_0032E772: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0032E778u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E776u); } /* indirect call */
    }

loc_0032E778: ;
    MEM32(0x8FCAE0) = 0;

loc_0032E782: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E790
 * Original: 0x0032E790 - 0x0032E797 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E790(void)
{

loc_0032E790: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E7A0
 * Original: 0x0032E7A0 - 0x0032E7A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E7A0(void)
{

loc_0032E7A0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032E7B0
 * Original: 0x0032E7B0 - 0x0032E7B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E7B0(void)
{

loc_0032E7B0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0032E7C0
 * Original: 0x0032E7C0 - 0x0032E7C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E7C0(void)
{

loc_0032E7C0: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E7D0
 * Original: 0x0032E7D0 - 0x0032E7E0 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E7D0(void)
{

loc_0032E7D0: ;
    eax = ecx;
    MEM32(eax) = 0x82A078;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E7F0
 * Original: 0x0032E7F0 - 0x0032E7F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E7F0(void)
{

loc_0032E7F0: ;
    MEM32(ecx) = 0x829FE0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E800
 * Original: 0x0032E800 - 0x0032E868 (104 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032E800: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032E866; /* jne: not equal / not zero */

loc_0032E80A: ;
    ecx = MEM32(0x902558);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0032E821u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E81Eu); } /* indirect call */
    }

loc_0032E821: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032E82E; /* je: equal / zero */

loc_0032E825: ;
    ecx = eax;
    PUSH32(esp, 0x0032E82Cu); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_0032E82C: ;
    goto loc_0032E830;

loc_0032E82E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0032E830: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x909394);
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8C45D0);
    PUSH32(esp, 0x500);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0032E856u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E853u); } /* indirect call */
    }

loc_0032E856: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032E85Fu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0032E85F: ;
    ecx = eax;
    PUSH32(esp, 0x0032E866u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_0032E866: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032E890
 * Original: 0x0032E890 - 0x0032E959 (201 bytes, 78 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032E890: ;
    eax = MEM32(0x909394);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x58);
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 8);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0032E8C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E8BDu); } /* indirect call */
    }

loc_0032E8C0: ;
    ecx = esp + 0x10;
    esi = eax;
    PUSH32(esp, 0x0032E8CBu); RECOMP_ABI_CALL(0x0059DE73u, sub_0059DE73); /* call 0x0059DE73 */

loc_0032E8CB: ;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0032E8D5u); RECOMP_ABI_CALL(0x0059E1E4u, sub_0059E1E4); /* call 0x0059E1E4 */

loc_0032E8D5: ;
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, 0x82A08C);
    PUSH32(esp, edx);
    edi = eax;
    PUSH32(esp, 0x0032E8EBu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032E8EB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032E914; /* jne: not equal / not zero */

loc_0032E8F2: ;
    ecx = MEM32(esp + 0x5C);
    eax = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032E8FFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0032E8FF: ;
    edx = MEM32(esp + 0x68);
    MEM32(edx) = eax;
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032E90Fu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0032E90F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0032E935;

loc_0032E914: ;
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(ebx) = edi;
    PUSH32(esp, 0x0032E921u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0032E921: ;
    ecx = MEM32(esp + 0x68);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(ecx) = eax;
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0032E935u); RECOMP_ABI_CALL(0x0059DF4Fu, sub_0059DF4F); /* call 0x0059DF4F */

loc_0032E935: ;
    ecx = MEM32(esp + 0x54);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0032E93Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E93Cu); } /* indirect call */
    }

loc_0032E93F: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0032E948u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E945u); } /* indirect call */
    }

loc_0032E948: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0032E951u); RECOMP_ABI_CALL(0x0059DEB2u, sub_0059DEB2); /* call 0x0059DEB2 */

loc_0032E951: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032E990
 * Original: 0x0032E990 - 0x0032ECAD (797 bytes, 249 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032E990: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x84));
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x94);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x20);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0032E9B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032E9AEu); } /* indirect call */
    }

loc_0032E9B0: ;
    ebx = MEM32(esp + 0x9C);
    eax = MEM32(esi + 8);
    edx = ebx + 0x24;
    PUSH32(esp, edx);
    edx = MEM32(edi + 4);
    ebp = ebx + 0x20;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032E9D1u); RECOMP_ABI_CALL(0x00036017u, sub_00036017); /* call 0x00036017 */

loc_0032E9D1: ;
    PUSH32(esp, 0x20);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0032E9DEu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032E9DE: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x82A010);
    PUSH32(esp, ecx);
    edx = esp + 0x9C;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x823880);
    PUSH32(esp, edx);
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x4C) = ebx;
    PUSH32(esp, 0x0032EA03u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032EA03: ;
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    eax = MEM32(edi + 4);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x100);
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032EA23u); RECOMP_ABI_CALL(0x00036017u, sub_00036017); /* call 0x00036017 */

loc_0032EA23: ;
    ecx = MEM32(0x8C45D4);
    ebp = MEM32(ebp);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0032EA37u); RECOMP_ABI_CALL(0x00015C09u, sub_00015C09); /* call 0x00015C09 */

loc_0032EA37: ;
    edi = MEM32(esp + 0x10);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x0032EA44u); RECOMP_ABI_CALL(0x005A2986u, sub_005A2986); /* call 0x005A2986 */

loc_0032EA44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0032EA68; /* jle: less or equal (signed <=) */

loc_0032EA48: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0032EA5Fu); RECOMP_ABI_CALL(0x005A29FFu, sub_005A29FF); /* call 0x005A29FF */

loc_0032EA5F: ;
    edx = MEM32(esp + 0x14);
    ebp = edx + edi;
    goto loc_0032EA6A;

loc_0032EA68: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0032EA6A: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0032EA73u); RECOMP_ABI_CALL(0x005A3A01u, sub_005A3A01); /* call 0x005A3A01 */

loc_0032EA73: ;
    ecx = esi;
    MEM32(esp + 0x20) = 0x7D;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = 1;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x4C) = ebx;
    PUSH32(esp, 0x0032EAAAu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EAAA: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x60) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x60 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032EB54; /* je: equal / zero */

loc_0032EAB3: ;
    ecx = esi;
    PUSH32(esp, 0x0032EABAu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EABA: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x61 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032EB54; /* je: equal / zero */

loc_0032EAC3: ;
    ecx = esi;
    PUSH32(esp, 0x0032EACAu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EACA: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x62) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x62 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032EB54; /* je: equal / zero */

loc_0032EAD3: ;
    ecx = esi;
    PUSH32(esp, 0x0032EADAu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EADA: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 8 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032EB46; /* je: equal / zero */

loc_0032EADF: ;
    ecx = esi;
    PUSH32(esp, 0x0032EAE6u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EAE6: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 9 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032EB46; /* je: equal / zero */

loc_0032EAEB: ;
    ecx = esi;
    PUSH32(esp, 0x0032EAF2u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EAF2: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032EB46; /* je: equal / zero */

loc_0032EAF7: ;
    ecx = esi;
    PUSH32(esp, 0x0032EAFEu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EAFE: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032EB46; /* je: equal / zero */

loc_0032EB03: ;
    ecx = esi;
    PUSH32(esp, 0x0032EB0Au); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EB0A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xC (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032EB46; /* je: equal / zero */

loc_0032EB0F: ;
    ecx = esi;
    PUSH32(esp, 0x0032EB16u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EB16: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xD (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032EB46; /* je: equal / zero */

loc_0032EB1B: ;
    ecx = esi;
    PUSH32(esp, 0x0032EB22u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EB22: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xE (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032EB46; /* je: equal / zero */

loc_0032EB27: ;
    ecx = esi;
    PUSH32(esp, 0x0032EB2Eu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EB2E: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xF (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032EB46; /* je: equal / zero */

loc_0032EB33: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0032EB44u); RECOMP_ABI_CALL(0x005A4A44u, sub_005A4A44); /* call 0x005A4A44 */

loc_0032EB44: ;
    goto loc_0032EB60;

loc_0032EB46: ;
    PUSH32(esp, 0x100);
    ecx = esi;
    PUSH32(esp, 0x0032EB52u); RECOMP_ABI_CALL(0x005A5900u, sub_005A5900); /* call 0x005A5900 */

loc_0032EB52: ;
    goto loc_0032EB60;

loc_0032EB54: ;
    PUSH32(esp, 0x100);
    ecx = esi;
    PUSH32(esp, 0x0032EB60u); RECOMP_ABI_CALL(0x005A567Eu, sub_005A567E); /* call 0x005A567E */

loc_0032EB60: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0032EB69u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EB69: ;
    ebx = MEM32(eax + 0x18);
    ecx = esi;
    PUSH32(esp, 0x0032EB73u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EB73: ;
    ecx = MEM32(eax + 0x1C);
    MEM32(esp + 0x18) = ecx;
    ecx = ebp;
    PUSH32(esp, 0x0032EB81u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EB81: ;
    edx = MEM32(eax + 0x1C);
    ecx = ebp;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0032EB8Fu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EB8F: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax + 0x18);
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x82982C); /* mulss */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, eax);
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x829828); /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0032EBCAu); RECOMP_ABI_CALL(0x005A3388u, sub_005A3388); /* call 0x005A3388 */

loc_0032EBCA: ;
    ecx = edi;
    PUSH32(esp, 0x0032EBD1u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EBD1: ;
    edx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0032EBE1; /* jle: less or equal (signed <=) */

loc_0032EBDA: ;
    ecx = edi;
    PUSH32(esp, 0x0032EBE1u); RECOMP_ABI_CALL(0x005A38ECu, sub_005A38EC); /* call 0x005A38EC */

loc_0032EBE1: ;
    ecx = esi;
    PUSH32(esp, 0x0032EBE8u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EBE8: ;
    eax = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0032EBFAu); RECOMP_ABI_CALL(0x005A23FEu, sub_005A23FE); /* call 0x005A23FE */

loc_0032EBFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032EC27; /* je: equal / zero */

loc_0032EBFE: ;
    ecx = esi;
    PUSH32(esp, 0x0032EC05u); RECOMP_ABI_CALL(0x005A23FEu, sub_005A23FE); /* call 0x005A23FE */

loc_0032EC05: ;
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x24) = ecx;
    ecx = esi;
    PUSH32(esp, 0x0032EC18u); RECOMP_ABI_CALL(0x005A23FEu, sub_005A23FE); /* call 0x005A23FE */

loc_0032EC18: ;
    edx = MEM32(eax + 0x18);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x48) = ebx;
    goto loc_0032EC29;

loc_0032EC27: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0032EC29: ;
    ecx = esi;
    PUSH32(esp, 0x0032EC30u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EC30: ;
    eax = MEM32(eax);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x15) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x0032EC4Bu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EC4B: ;
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x400000));
    ecx = ecx - 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x3C) = ecx;
    ecx = esi;
    PUSH32(esp, 0x0032EC69u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0032EC69: ;
    edx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF0000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = esp + 0x20;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esp + 0x48) = edx;
    PUSH32(esp, 0x0032EC88u); RECOMP_ABI_CALL(0x005A46E2u, sub_005A46E2); /* call 0x005A46E2 */

loc_0032EC88: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0032EC8Eu); RECOMP_ABI_CALL(0x005A1E5Eu, sub_005A1E5E); /* call 0x005A1E5E */

loc_0032EC8E: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032EC98u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032EC98: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x84)) >> 32) & 1);
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032ED80
 * Original: 0x0032ED80 - 0x0032EDB5 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032ED80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032ED80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032EDB3; /* je: equal / zero */

loc_0032ED8A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032ED90u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0032ED90: ;
    ecx = eax;
    PUSH32(esp, 0x0032ED97u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0032ED97: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0032ED9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032ED9Cu); } /* indirect call */
    }

loc_0032ED9F: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032EDAC; /* je: equal / zero */

loc_0032EDA6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0032EDACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032EDAAu); } /* indirect call */
    }

loc_0032EDAC: ;
    MEM32(esi + 4) = 0;

loc_0032EDB3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032EDD0
 * Original: 0x0032EDD0 - 0x0032EDE8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032EDD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032EDD0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 6;
    MEM32(eax + 4) = 4;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0032EDF0
 * Original: 0x0032EDF0 - 0x0032EE5B (107 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032EDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032EDF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032EE0F; /* je: equal / zero */

loc_0032EDFE: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032EE0Cu); RECOMP_ABI_CALL(0x0055D5A6u, sub_0055D5A6); /* call 0x0055D5A6 */

loc_0032EE0C: ;
    MEM32(esi + 0x50) = edi;

loc_0032EE0F: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032EE27; /* je: equal / zero */

loc_0032EE16: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, 0x0032EE24u); RECOMP_ABI_CALL(0x0055D5A6u, sub_0055D5A6); /* call 0x0055D5A6 */

loc_0032EE24: ;
    MEM32(esi + 0x54) = edi;

loc_0032EE27: ;
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032EE3F; /* je: equal / zero */

loc_0032EE2E: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032EE3Cu); RECOMP_ABI_CALL(0x0055D70Fu, sub_0055D70F); /* call 0x0055D70F */

loc_0032EE3C: ;
    MEM32(esi + 0x64) = edi;

loc_0032EE3F: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032EE57; /* je: equal / zero */

loc_0032EE46: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032EE54u); RECOMP_ABI_CALL(0x0055D70Fu, sub_0055D70F); /* call 0x0055D70F */

loc_0032EE54: ;
    MEM32(esi + 0x68) = edi;

loc_0032EE57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032EE80
 * Original: 0x0032EE80 - 0x0032EEE8 (104 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032EE80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032EE80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0x82A09C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032EEA3u); RECOMP_ABI_CALL(0x0055B805u, sub_0055B805); /* call 0x0055B805 */

loc_0032EEA3: ;
    eax = MEM32(esp + 0x18);
    edi = ZX8(MEM8(eax));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + 2));
    ecx = esi + 0x60;
    SET_LO8(edx, MEM8(eax + 1));
    eax = ZX8(MEM8(eax + 3));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0x82A09C);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032EEE0u); RECOMP_ABI_CALL(0x0055BACEu, sub_0055BACE); /* call 0x0055BACE */

loc_0032EEE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032EF10
 * Original: 0x0032EF10 - 0x0032EF78 (104 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032EF10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032EF10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, 0x82A09C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032EF33u); RECOMP_ABI_CALL(0x0055B805u, sub_0055B805); /* call 0x0055B805 */

loc_0032EF33: ;
    eax = MEM32(esp + 0x18);
    edi = ZX8(MEM8(eax));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + 2));
    ecx = esi + 0x5C;
    SET_LO8(edx, MEM8(eax + 1));
    eax = ZX8(MEM8(eax + 3));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, 0x82A09C);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032EF70u); RECOMP_ABI_CALL(0x0055BACEu, sub_0055BACE); /* call 0x0055BACE */

loc_0032EF70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032EFA0
 * Original: 0x0032EFA0 - 0x0032F00F (111 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032EFA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032EFA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032EFB1u); RECOMP_ABI_CALL(0x0055A1EFu, sub_0055A1EF); /* call 0x0055A1EF */

loc_0032EFB1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032EFC5u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0032EFC5: ;
    ecx = eax;
    PUSH32(esp, 0x0032EFCCu); RECOMP_ABI_CALL(0x0055D468u, sub_0055D468); /* call 0x0055D468 */

loc_0032EFCC: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0;
    MEM32(eax) = 0;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032EFF3u); RECOMP_ABI_CALL(0x0055A5F2u, sub_0055A5F2); /* call 0x0055A5F2 */

loc_0032EFF3: ;
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032F005u); RECOMP_ABI_CALL(0x00559AD5u, sub_00559AD5); /* call 0x00559AD5 */

loc_0032F005: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032F030
 * Original: 0x0032F030 - 0x0032F037 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F030(void)
{

loc_0032F030: ;
    MEM32(ecx) = 0x829EDC;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F040
 * Original: 0x0032F040 - 0x0032F05E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F040(void)
{

loc_0032F040: ;
    eax = ecx;
    MEM32(eax) = 0x82A0A4;
    ecx = 0x1010101;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM16(eax + 0x10) = LO16(ecx);
    MEM8(eax + 0x12) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032F070
 * Original: 0x0032F070 - 0x0032F08F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F070: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829EDC;
    if (TEST_Z(_fa, _fb)) goto loc_0032F089; /* je: equal / zero */

loc_0032F080: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032F086u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032F086: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032F089: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F0A0
 * Original: 0x0032F0A0 - 0x0032F0E5 (69 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F0A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032F0A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 1);
    edi = ecx + 4;
    esi = 0x8C45F0;

loc_0032F0B2: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032F0C7; /* jne: not equal / not zero */

loc_0032F0B7: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0032F0C0u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0032F0C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032F0DC; /* jne: not equal / not zero */

loc_0032F0C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C462C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C462C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0032F0B2; /* jl: less (signed <) */

loc_0032F0D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0032F0DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F100
 * Original: 0x0032F100 - 0x0032F10C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F100(void)
{

loc_0032F100: ;
    eax = MEM32(esp + 4);
    MEM8(eax + ecx + 4) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F110
 * Original: 0x0032F110 - 0x0032F11C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F110(void)
{

loc_0032F110: ;
    eax = MEM32(esp + 4);
    MEM8(eax + ecx + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F120
 * Original: 0x0032F120 - 0x0032F1BB (155 bytes, 60 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032F120: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0032F134u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_0032F134: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0032F1A5; /* jbe: below or equal (unsigned <=) */

loc_0032F138: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032F140u); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_0032F140: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032F199; /* je: equal / zero */

loc_0032F144: ;
    PUSH32(esp, 0x40);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032F15Du); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_0032F15D: ;
    ecx = eax;
    PUSH32(esp, 0x0032F164u); RECOMP_ABI_CALL(0x0055B62Eu, sub_0055B62E); /* call 0x0055B62E */

loc_0032F164: ;
    ecx = eax;
    PUSH32(esp, 0x0032F16Bu); RECOMP_ABI_CALL(0x00572399u, sub_00572399); /* call 0x00572399 */

loc_0032F16B: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032F17A; /* je: equal / zero */

loc_0032F172: ;
    MEM32(esp + 0xC) = 0;

loc_0032F17A: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0032F183u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0032F183: ;
    eax = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032F192u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0032F192: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032F1B0; /* jne: not equal / not zero */

loc_0032F199: ;
    ecx = MEM32(edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0032F1A1u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_0032F1A1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0032F138; /* jb: below (unsigned <) */

loc_0032F1A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0032F1B0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F1F0
 * Original: 0x0032F1F0 - 0x0032F295 (165 bytes, 62 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F1F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032F1F0: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    ecx = MEM32(ebp);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0032F204u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_0032F204: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0032F28A; /* jbe: below or equal (unsigned <=) */

loc_0032F20C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x5C);

loc_0032F211: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x60) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0032F27E; /* jge: greater or equal (signed >=) */

loc_0032F217: ;
    PUSH32(esp, 0x40);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032F231u); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_0032F231: ;
    ecx = eax;
    PUSH32(esp, 0x0032F238u); RECOMP_ABI_CALL(0x0055B62Eu, sub_0055B62E); /* call 0x0055B62E */

loc_0032F238: ;
    ecx = eax;
    PUSH32(esp, 0x0032F23Fu); RECOMP_ABI_CALL(0x00572399u, sub_00572399); /* call 0x00572399 */

loc_0032F23F: ;
    _fa = (uint32_t)(MEM8(esp + 0x5C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x5C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032F24E; /* je: equal / zero */

loc_0032F246: ;
    MEM32(esp + 0x5C) = 0;

loc_0032F24E: ;
    ecx = esp + 0x5C;
    PUSH32(esp, 0x0032F257u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0032F257: ;
    eax = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032F266u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0032F266: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032F271; /* je: equal / zero */

loc_0032F26D: ;
    MEM32(ebx + edi * 4) = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0032F271: ;
    ecx = MEM32(ebp);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0032F27Au); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_0032F27A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0032F211; /* jb: below (unsigned <) */

loc_0032F27E: ;
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0032F28A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0032F2C0
 * Original: 0x0032F2C0 - 0x0032F2E4 (36 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F2C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0032F2DF; /* jl: less (signed <) */

loc_0032F2CC: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x0032F2D3u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_0032F2D3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0032F2DF; /* jae: above or equal (unsigned >=) */

loc_0032F2D7: ;
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0032F2DFu); RECOMP_ABI_CALL(0x0001686Bu, sub_0001686B); /* call 0x0001686B */

loc_0032F2DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F2F0
 * Original: 0x0032F2F0 - 0x0032F314 (36 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F2F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0032F30F; /* jl: less (signed <) */

loc_0032F2FC: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x0032F303u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_0032F303: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0032F30F; /* jae: above or equal (unsigned >=) */

loc_0032F307: ;
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0032F30Fu); RECOMP_ABI_CALL(0x0001BB22u, sub_0001BB22); /* call 0x0001BB22 */

loc_0032F30F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F320
 * Original: 0x0032F320 - 0x0032F348 (40 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F320: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0032F32Du); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_0032F32D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0032F345; /* jbe: below or equal (unsigned <=) */

loc_0032F331: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032F339u); RECOMP_ABI_CALL(0x0001686Bu, sub_0001686B); /* call 0x0001686B */

loc_0032F339: ;
    ecx = MEM32(edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0032F341u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_0032F341: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0032F331; /* jb: below (unsigned <) */

loc_0032F345: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032F360
 * Original: 0x0032F360 - 0x0032F388 (40 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F360: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0032F36Du); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_0032F36D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0032F385; /* jbe: below or equal (unsigned <=) */

loc_0032F371: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032F379u); RECOMP_ABI_CALL(0x0001BB22u, sub_0001BB22); /* call 0x0001BB22 */

loc_0032F379: ;
    ecx = MEM32(edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0032F381u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_0032F381: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0032F371; /* jb: below (unsigned <) */

loc_0032F385: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032F3A0
 * Original: 0x0032F3A0 - 0x0032F3F4 (84 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F3A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC1D0);
    eax = MEM32(ecx + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032F3DB; /* jne: not equal / not zero */

loc_0032F3B3: ;
    eax = MEM32(ecx + 0x1E0);
    eax = MEM32(eax + 0xF8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032F3E1; /* je: equal / zero */

loc_0032F3C5: ;
    ecx = MEM32(eax + 0x28);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032F3D2u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_0032F3D2: ;
    ecx = MEM32(eax + 0x28);
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0032F3DB: ;
    ecx = MEM32(eax + 0xB4);

loc_0032F3E1: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032F3EBu); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_0032F3EB: ;
    ecx = MEM32(eax + 0x28);
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F410
 * Original: 0x0032F410 - 0x0032F420 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F410(void)
{

loc_0032F410: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F430
 * Original: 0x0032F430 - 0x0032F43E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F430: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032F43D; /* je: equal / zero */

loc_0032F436: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032F43Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032F43C: ;
    POP32(esp, ecx);

loc_0032F43D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F450
 * Original: 0x0032F450 - 0x0032F4AA (90 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F450: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = esi + esi * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x0032F466u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0032F466: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032F49E; /* je: equal / zero */

loc_0032F46D: ;
    edx = esi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0032F4A0; /* jl: less (signed <) */

loc_0032F474: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = eax + 8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0032F480;

    /* nop */

loc_0032F480: ;
    MEMF(ecx + -8) = xmm0.f[0]; /* movss */
    MEMF(ecx + -4) = xmm0.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0032F480; /* jne: not equal / not zero */

loc_0032F494: ;
    MEM32(edi + 4) = esi;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0032F49E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0032F4A0: ;
    MEM32(edi + 4) = esi;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F4C0
 * Original: 0x0032F4C0 - 0x0032F512 (82 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032F4C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_BE(_fa, _fb)) goto loc_0032F50E; /* jbe: below or equal (unsigned <=) */

loc_0032F4E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0032F4F2: ;
    ebp = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = esi;
    MEM32(ebp + 8) = edi;
    ebp = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0032F4F2; /* jb: below (unsigned <) */

loc_0032F50A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0032F50E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032F530
 * Original: 0x0032F530 - 0x0032F533 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F530(void)
{

loc_0032F530: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032F540
 * Original: 0x0032F540 - 0x0032F550 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F540(void)
{

loc_0032F540: ;
    eax = ecx;
    MEM32(eax) = 0x82A0B0;
    MEM32(eax + 4) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F560
 * Original: 0x0032F560 - 0x0032F567 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F560(void)
{

loc_0032F560: ;
    MEM32(ecx) = 0x82A0B0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F570
 * Original: 0x0032F570 - 0x0032F573 (3 bytes, 1 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F570(void)
{

loc_0032F570: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0032F580
 * Original: 0x0032F580 - 0x0032F58A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F580(void)
{

loc_0032F580: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F590
 * Original: 0x0032F590 - 0x0032F5AF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F590: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82A0B0;
    if (TEST_Z(_fa, _fb)) goto loc_0032F5A9; /* je: equal / zero */

loc_0032F5A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032F5A6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032F5A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032F5A9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F5C0
 * Original: 0x0032F5C0 - 0x0032F5D0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F5C0(void)
{

loc_0032F5C0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 0x34) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F5E0
 * Original: 0x0032F5E0 - 0x0032F5E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F5E0(void)
{

loc_0032F5E0: ;
    eax = MEM32(ecx + 0x7C);
    esp += 4; return; /* ret */

}

/**
 * sub_0032F5F0
 * Original: 0x0032F5F0 - 0x0032F5FA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F5F0(void)
{

loc_0032F5F0: ;
    eax = ecx;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F600
 * Original: 0x0032F600 - 0x0032F60F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F600: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032F60E; /* je: equal / zero */

loc_0032F607: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032F60Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032F60D: ;
    POP32(esp, ecx);

loc_0032F60E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F620
 * Original: 0x0032F620 - 0x0032F627 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F620(void)
{

loc_0032F620: ;
    eax = ecx + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F630
 * Original: 0x0032F630 - 0x0032F639 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F630(void)
{

loc_0032F630: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F640
 * Original: 0x0032F640 - 0x0032F64D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F640: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F650
 * Original: 0x0032F650 - 0x0032F65F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F650: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
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
 * sub_0032F670
 * Original: 0x0032F670 - 0x0032F67C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F670: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0032F680
 * Original: 0x0032F680 - 0x0032F68E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F680(void)
{

loc_0032F680: ;
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F6A0
 * Original: 0x0032F6A0 - 0x0032F6AC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F6A0: ;
    edx = MEM32(ecx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0032F6B0
 * Original: 0x0032F6B0 - 0x0032F6B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F6B0(void)
{

loc_0032F6B0: ;
    eax = MEM32(ecx + 0x78);
    esp += 4; return; /* ret */

}

/**
 * sub_0032F6C0
 * Original: 0x0032F6C0 - 0x0032F6FC (60 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F6C0: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = ecx;
    ecx = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0032F6E7; /* je: equal / zero */

loc_0032F6CE: ;
    eax = MEM32(edx);
    PUSH32(esp, esi);
    esi = 1;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0032F6E7: ;
    eax = 1;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx);
    eax = ~eax;
    eax = eax | 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032F710
 * Original: 0x0032F710 - 0x0032F72D (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032F710: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx & MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, LO8(edx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F740
 * Original: 0x0032F740 - 0x0032F75D (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032F740: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    edx = 1;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F770
 * Original: 0x0032F770 - 0x0032F787 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F770: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0032F778u); RECOMP_ABI_CALL(0x00012C39u, sub_00012C39); /* call 0x00012C39 */

loc_0032F778: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esi + 8) = 0;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032F790
 * Original: 0x0032F790 - 0x0032F7A6 (22 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F790(void)
{

loc_0032F790: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM8(eax + 8) = 1;
    MEM32(eax + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F7B0
 * Original: 0x0032F7B0 - 0x0032F7BB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F7B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F7B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 8) = LO8(eax);
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F7C0
 * Original: 0x0032F7C0 - 0x0032F7C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F7C0(void)
{

loc_0032F7C0: ;
    SET_LO8(eax, MEM8(ecx + 8));
    esp += 4; return; /* ret */

}

/**
 * sub_0032F7D0
 * Original: 0x0032F7D0 - 0x0032F7DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F7D0(void)
{

loc_0032F7D0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 8) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F7E0
 * Original: 0x0032F7E0 - 0x0032F803 (35 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F7E0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_0032F7F0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032F800; /* je: equal / zero */

loc_0032F7F4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0032F7F0; /* jl: less (signed <) */

loc_0032F7FD: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0032F800: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F810
 * Original: 0x0032F810 - 0x0032F817 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F810(void)
{

loc_0032F810: ;
    eax = ecx + 0x120;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F820
 * Original: 0x0032F820 - 0x0032F827 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F820(void)
{

loc_0032F820: ;
    eax = ecx + 0x214;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F830
 * Original: 0x0032F830 - 0x0032F834 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F830(void)
{

loc_0032F830: ;
    SET_LO8(eax, MEM8(ecx + 3));
    esp += 4; return; /* ret */

}

/**
 * sub_0032F840
 * Original: 0x0032F840 - 0x0032F844 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F840(void)
{

loc_0032F840: ;
    SET_LO8(eax, MEM8(ecx + 2));
    esp += 4; return; /* ret */

}

/**
 * sub_0032F850
 * Original: 0x0032F850 - 0x0032F854 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F850(void)
{

loc_0032F850: ;
    SET_LO8(eax, MEM8(ecx + 1));
    esp += 4; return; /* ret */

}

/**
 * sub_0032F860
 * Original: 0x0032F860 - 0x0032F863 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F860(void)
{

loc_0032F860: ;
    SET_LO8(eax, MEM8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_0032F870
 * Original: 0x0032F870 - 0x0032F87A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F870(void)
{

loc_0032F870: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 3) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F880
 * Original: 0x0032F880 - 0x0032F88A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F880(void)
{

loc_0032F880: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 2) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F890
 * Original: 0x0032F890 - 0x0032F89A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F890(void)
{

loc_0032F890: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 1) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F8A0
 * Original: 0x0032F8A0 - 0x0032F8A9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F8A0(void)
{

loc_0032F8A0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F8B0
 * Original: 0x0032F8B0 - 0x0032F8B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F8B0(void)
{

loc_0032F8B0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F8C0
 * Original: 0x0032F8C0 - 0x0032F8DE (30 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F8C0(void)
{

loc_0032F8C0: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(ecx + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(ecx + 2) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(ecx + 1) = LO8(eax);
    MEM8(ecx) = LO8(edx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0032F8F0
 * Original: 0x0032F8F0 - 0x0032F90D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F8F0(void)
{

loc_0032F8F0: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax + 3));
    MEM8(ecx + 3) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(ecx + 2) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(ecx + 1) = LO8(edx);
    SET_LO8(eax, MEM8(eax));
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F920
 * Original: 0x0032F920 - 0x0032F950 (48 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F920(void)
{

loc_0032F920: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0032F960
 * Original: 0x0032F960 - 0x0032F973 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F960(void)
{

loc_0032F960: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F980
 * Original: 0x0032F980 - 0x0032F9A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F980: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 0x24) = ecx;
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x28) = 0xFFFFFFFFu;
    MEM32(eax + 0x30) = ecx;
    MEM8(eax + 0x44) = LO8(ecx);
    MEM8(eax + 0x45) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032F9B0
 * Original: 0x0032F9B0 - 0x0032F9B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F9B0(void)
{

loc_0032F9B0: ;
    MEM32(ecx) = 0x82A0C0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F9C0
 * Original: 0x0032F9C0 - 0x0032F9DF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032F9C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82A0C0;
    if (TEST_Z(_fa, _fb)) goto loc_0032F9D9; /* je: equal / zero */

loc_0032F9D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032F9D6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032F9D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032F9D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032F9F0
 * Original: 0x0032F9F0 - 0x0032F9F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F9F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032F9F0: ;
    fp_push(MEMF(ecx + 0x74)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032FA00
 * Original: 0x0032FA00 - 0x0032FA04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FA00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032FA00: ;
    fp_push(MEMF(ecx + 0x78)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032FA10
 * Original: 0x0032FA10 - 0x0032FA14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FA10(void)
{

loc_0032FA10: ;
    SET_LO8(eax, MEM8(ecx + 0x4D));
    esp += 4; return; /* ret */

}

/**
 * sub_0032FA20
 * Original: 0x0032FA20 - 0x0032FA27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FA20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032FA20: ;
    fp_push(MEMF(0x8C4648)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032FA30
 * Original: 0x0032FA30 - 0x0032FA37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FA30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0032FA30: ;
    fp_push(MEMF(0x8C464C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032FA40
 * Original: 0x0032FA40 - 0x0032FA4D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FA40(void)
{

loc_0032FA40: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM8(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032FA50
 * Original: 0x0032FA50 - 0x0032FA70 (32 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FA50(void)
{

loc_0032FA50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82A0E4);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0032FA64u); RECOMP_ABI_CALL(0x00018E81u, sub_00018E81); /* call 0x00018E81 */

loc_0032FA64: ;
    MEM32(esi) = 0x82A0D4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032FA80
 * Original: 0x0032FA80 - 0x0032FAAD (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032FA80: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    PUSH32(esp, esi);
    edx = eax + 0xC;
    esi = 0xC0;
    edi = edi;

loc_0032FA90: ;
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0032FA90; /* jne: not equal / not zero */

loc_0032FAA4: ;
    MEM32(eax + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032FAC0
 * Original: 0x0032FAC0 - 0x0032FAD5 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FAC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032FAC0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x90C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax + eax * 2;
    eax = ecx + edx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032FAE0
 * Original: 0x0032FAE0 - 0x0032FAE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FAE0(void)
{

loc_0032FAE0: ;
    eax = ecx + 0x91C;
    esp += 4; return; /* ret */

}

/**
 * sub_0032FAF0
 * Original: 0x0032FAF0 - 0x0032FAF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FAF0(void)
{

loc_0032FAF0: ;
    eax = ecx + 0xA74;
    esp += 4; return; /* ret */

}

/**
 * sub_0032FB00
 * Original: 0x0032FB00 - 0x0032FB23 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032FB00: ;
    _fa = (uint32_t)(MEM8(0x8FCA90)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x8FCA90), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032FB22; /* je: equal / zero */

loc_0032FB09: ;
    eax = MEM32(ecx + 0x78);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    MEM32(ecx + 0x78) = eax;
    eax = MEM32(ecx + 0x48);
    eax = MEM32(eax + 0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032FB22; /* jle: less or equal (signed <=) */

loc_0032FB1F: ;
    MEM32(ecx + 0x78) = eax;

loc_0032FB22: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032FB30
 * Original: 0x0032FB30 - 0x0032FB31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FB30(void)
{

loc_0032FB30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032FB40
 * Original: 0x0032FB40 - 0x0032FB49 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FB40(void)
{

loc_0032FB40: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032FB50
 * Original: 0x0032FB50 - 0x0032FB51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FB50(void)
{

loc_0032FB50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032FB60
 * Original: 0x0032FB60 - 0x0032FB6D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FB60(void)
{

loc_0032FB60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    MEM8(ecx + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032FB70
 * Original: 0x0032FB70 - 0x0032FB71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FB70(void)
{

loc_0032FB70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032FB80
 * Original: 0x0032FB80 - 0x0032FCA0 (288 bytes, 103 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032FB80: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0032FB94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032FB91u); } /* indirect call */
    }

loc_0032FB94: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ebx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0032FB9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032FB9Cu); } /* indirect call */
    }

loc_0032FB9F: ;
    ecx = MEM32(esp + 0x34);
    ecx = MEM32(ecx + 4);
    ecx = ecx + ecx + 2;
    MEM8(esi + 4) = 1;
    edx = ecx + ecx * 2;
    edx = ebx + edx * 4;
    edi = edx + -12;
    ebp = MEM32(edi);
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = ebp;
    edi = edx;
    ebp = MEM32(edi);
    MEM32(esp + 0x24) = ebp;
    ebp = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x2C) = edi;
    edi = eax + -1;
    ebp = ecx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0032FC2D; /* jl: less (signed <) */

loc_0032FBEF: ;
    eax = edi + edi * 2;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebx + eax * 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x10) = edi;

loc_0032FC00: ;
    edi = eax + -48;
    ebp = MEM32(edi);
    MEM32(eax) = ebp;
    ebp = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    eax = MEM32(esp + 0x34);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x10) = edi;
    if ((_fa != 0)) goto loc_0032FC00; /* jne: not equal / not zero */

loc_0032FC29: ;
    eax = MEM32(esp + 0x14);

loc_0032FC2D: ;
    edi = MEM32(esp + 0x18);
    ebp = edx;
    MEM32(ebp) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(ebp + 4) = edi;
    edi = MEM32(esp + 0x20);
    MEM32(ebp + 8) = edi;
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ebp;
    ebp = MEM32(esp + 0x1C);
    MEM32(edx + 4) = ebp;
    MEM32(edx + 8) = edi;
    edi = MEM32(esp + 0x28);
    edx = ecx + ecx * 2 + 6;
    edx = ebx + edx * 4;
    ecx = ecx + ecx * 2 + 9;
    ebp = edx;
    edx = MEM32(esp + 0x24);
    MEM32(ebp) = edx;
    ecx = ebx + ecx * 4;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ebp + 4) = edi;
    edi = MEM32(esp + 0x2C);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(ebp + 8) = edi;
    esi = MEM32(esi);
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0032FC96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032FC93u); } /* indirect call */
    }

loc_0032FC96: ;
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
 * sub_0032FCF0
 * Original: 0x0032FCF0 - 0x0032FDB6 (198 bytes, 76 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032FCF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0032FDAF; /* je: equal / zero */

loc_0032FD05: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(esi + 4) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0032FD17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032FD14u); } /* indirect call */
    }

loc_0032FD17: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ebp = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0032FD22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032FD1Fu); } /* indirect call */
    }

loc_0032FD22: ;
    ecx = MEM32(esp + 0x1C);
    ecx = MEM32(ecx + 4);
    edx = eax + -1;
    ecx = ecx + ecx + 2;
    ebx = edx + -4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0032FD66; /* jg: greater (signed >) */

loc_0032FD3B: ;
    esi = ecx + ecx * 2;
    edi = ebp + esi * 4;
    esi = ecx + ecx * 2 + 0xC;
    esi = ebp + esi * 4;
    MEM32(esp + 0x1C) = esi;
    esi = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + esi * 2;
    esi = MEM32(esp + 0x1C);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
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
    esi = MEM32(esp + 0x10);

loc_0032FD66: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0032FD9E; /* jge: greater or equal (signed >=) */

loc_0032FD6A: ;
    eax = edx + edx * 2;
    ecx = ebp + eax * 4;
    eax = ebx + ebx * 2;
    ebp = ebp + eax * 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0032FD80: ;
    eax = ecx;
    ebx = MEM32(eax);
    edi = ebp;
    MEM32(edi) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(edi + 4) = ebx;
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 8) = eax;
    if ((_fa != 0)) goto loc_0032FD80; /* jne: not equal / not zero */

loc_0032FD9A: ;
    eax = MEM32(esp + 0x14);

loc_0032FD9E: ;
    esi = MEM32(esi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0032FDACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032FDA9u); } /* indirect call */
    }

loc_0032FDAC: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0032FDAF: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032FDF0
 * Original: 0x0032FDF0 - 0x0032FEC9 (217 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0032FDF0: ;
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm7 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_0032FE08; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0032FE05: ;
    xmm7 = xmm0; /* movaps */

loc_0032FE08: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm6 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_0032FE1C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0032FE19: ;
    xmm6 = xmm0; /* movaps */

loc_0032FE1C: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm5 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_0032FE31; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0032FE2E: ;
    xmm5 = xmm0; /* movaps */

loc_0032FE31: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_0032FE46; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0032FE43: ;
    xmm4 = xmm0; /* movaps */

loc_0032FE46: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032FE5A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0032FE55: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0032FE61;

loc_0032FE5A: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */

loc_0032FE61: ;
    xmm3 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032FE72; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_0032FE6E: ;
    SET_LO8(ecx, 1);
    goto loc_0032FE74;

loc_0032FE72: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0032FE74: ;
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0032FE87; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0032FE80: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_0032FE87: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032FE90; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_0032FE8C: ;
    SET_LO8(eax, 1);
    goto loc_0032FE92;

loc_0032FE90: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0032FE92: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032FEAC; /* je: equal / zero */

loc_0032FE96: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032FEC4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_0032FEA4: ;
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032FEC4; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0032FEA9: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0032FEAC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032FEC4; /* je: equal / zero */

loc_0032FEB0: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032FEC4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm7.f[0]) */

loc_0032FEBD: ;
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    SET_LO8(eax, 1);
    if ((_fca > _fcb)) goto loc_0032FEC8; /* ja: above (unsigned >) (xmm6.f[0] vs xmm0.f[0]) */

loc_0032FEC4: ;
    SET_LO8(eax, MEM8(esp + 0xC));

loc_0032FEC8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032FF00
 * Original: 0x0032FF00 - 0x00330159 (601 bytes, 177 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FF00(void)
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

loc_0032FF00: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    ebx = ecx;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEM32(esp + 0x10) = ebx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebx);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x88)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0033014F; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0032FF62: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x8C); /* comiss */
    if ((_fca > _fcb)) goto loc_0033014F; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax + 0x8C)) */

loc_0032FF6F: ;
    ecx = MEM32(eax + 0x7C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0032FFA1; /* jle: less or equal (signed <=) */

loc_0032FF7C: ;
    edi = MEM32(eax + 0x84);

loc_0032FF82: ;
    eax = ecx + esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm1 = XMM_SCALAR(MEMF(edi + eax * 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) ecx = eax; /* cmova */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) esi = eax; /* cmovbe */
    eax = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0032FF82; /* jg: greater (signed >) */

loc_0032FFA1: ;
    PUSH32(esp, 0x161FE);
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEM32(ebp + 4) = esi;
    MEM32(ebp) = ebx;
    PUSH32(esp, 0x0032FFBAu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_0032FFBA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    ebx = esi + 1;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edx;
    /* nop */

loc_0032FFD0: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x7C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) eax = ebx; /* cmovge */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033001B; /* jge: greater or equal (signed >=) */

loc_0032FFE3: ;
    edx = MEM32(ecx);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = edi + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0032FFF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032FFF4u); } /* indirect call */
    }

loc_0032FFF7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = esp + 0x1C;
    eax = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033000Cu); RECOMP_ABI_CALL(0x000378CCu, sub_000378CC); /* call 0x000378CC */

loc_0033000C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00330016; /* jne: not equal / not zero */

loc_00330013: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0032FFD0;

loc_00330016: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00330027; /* jne: not equal / not zero */

loc_0033001B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00330027: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    edx = MEM32(esp + 0x1C);
    xmm6 = xmm2; /* movaps */
    ecx = ebp + 0x14;
    MEM32(ecx) = edx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x48); /* subss */
    ecx = MEM32(esp + 0x1C);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x44); /* subss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x40); /* subss */
    edx = MEM32(esp + 0x20);
    eax = ebp + 0x20;
    xmm3 = xmm2; /* movaps */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x24);
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    MEM32(eax + 4) = edx;
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEM32(eax + 8) = ecx;
    MEMF(esp + 0x5C) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(ebp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x34) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0033014F: ;
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00330000
 * Original: 0x00330000 - 0x00330159 (345 bytes, 95 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330000(void)
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

loc_00330000: ;
    eax = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033000Cu); RECOMP_ABI_CALL(0x000378CCu, sub_000378CC); /* call 0x000378CC */

loc_0033000C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00330016; /* jne: not equal / not zero */

loc_00330013: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0032FFD0(); return; /* tail jmp 0x0032FFD0 */

loc_00330016: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00330027; /* jne: not equal / not zero */

loc_0033001B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00330027: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    edx = MEM32(esp + 0x1C);
    xmm6 = xmm2; /* movaps */
    ecx = ebp + 0x14;
    MEM32(ecx) = edx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x48); /* subss */
    ecx = MEM32(esp + 0x1C);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x44); /* subss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x40); /* subss */
    edx = MEM32(esp + 0x20);
    eax = ebp + 0x20;
    xmm3 = xmm2; /* movaps */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x24);
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    MEM32(eax + 4) = edx;
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEM32(eax + 8) = ecx;
    MEMF(esp + 0x5C) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(ebp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x34) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00330027
 * Original: 0x00330027 - 0x00330159 (306 bytes, 76 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330027(void)
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

loc_00330027: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    edx = MEM32(esp + 0x1C);
    xmm6 = xmm2; /* movaps */
    ecx = ebp + 0x14;
    MEM32(ecx) = edx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x48); /* subss */
    ecx = MEM32(esp + 0x1C);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x44); /* subss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x40); /* subss */
    edx = MEM32(esp + 0x20);
    eax = ebp + 0x20;
    xmm3 = xmm2; /* movaps */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x24);
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    MEM32(eax + 4) = edx;
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEM32(eax + 8) = ecx;
    MEMF(esp + 0x5C) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(ebp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x34) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00330033
 * Original: 0x00330033 - 0x00330159 (294 bytes, 74 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330033(void)
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

loc_00330033: ;
    xmm4 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    edx = MEM32(esp + 0x1C);
    xmm6 = xmm2; /* movaps */
    ecx = ebp + 0x14;
    MEM32(ecx) = edx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x48); /* subss */
    ecx = MEM32(esp + 0x1C);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x44); /* subss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x40); /* subss */
    edx = MEM32(esp + 0x20);
    eax = ebp + 0x20;
    xmm3 = xmm2; /* movaps */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x24);
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    MEM32(eax + 4) = edx;
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEM32(eax + 8) = ecx;
    MEMF(esp + 0x5C) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(ebp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x34) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003301F0
 * Original: 0x003301F0 - 0x0033022B (59 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003301F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003301F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00330240
 * Original: 0x00330240 - 0x00330264 (36 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00330240: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00330248u); RECOMP_ABI_CALL(0x005582DAu, sub_005582DA); /* call 0x005582DA */

loc_00330248: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033025E; /* je: equal / zero */

loc_0033024F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033025E; /* je: equal / zero */

loc_00330253: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033025Bu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0033025B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033025E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00330270
 * Original: 0x00330270 - 0x00330337 (199 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00330270: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x00330287u); RECOMP_ABI_CALL(0x005582DBu, sub_005582DB); /* call 0x005582DB */

loc_00330287: ;
    ecx = MEM32(esi + 8);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00330298u); RECOMP_ABI_CALL(0x00558464u, sub_00558464); /* call 0x00558464 */

loc_00330298: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x003302C3u); RECOMP_ABI_CALL(0x00557980u, sub_00557980); /* call 0x00557980 */

loc_003302C3: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x003302E9u); RECOMP_ABI_CALL(0x00557E6Bu, sub_00557E6B); /* call 0x00557E6B */

loc_003302E9: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033030Au); RECOMP_ABI_CALL(0x00557A00u, sub_00557A00); /* call 0x00557A00 */

loc_0033030A: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00330332u); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_00330332: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00330370
 * Original: 0x00330370 - 0x003303C6 (86 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00330370: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 4) = 2;
    MEM32(edi) = 0x82A0FC;
    MEM32(edi + 8) = 0;
    esi = edi + 0xC;
    ebx = 4;

loc_00330391: ;
    PUSH32(esp, 0x285CA);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003303A3u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_003303A3: ;
    MEM32(esi) = 0;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00330391; /* jne: not equal / not zero */

loc_003303AF: ;
    MEM32(edi + 0x7C) = 0;
    MEM32(edi + 0x84) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003303E0
 * Original: 0x003303E0 - 0x00330432 (82 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003303E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003303E0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x82A0FC;
    if (CMP_EQ(_fa, _fb)) goto loc_00330417; /* je: equal / zero */

loc_003303F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 0x10;
    ebx = 2;
    /* nop */

loc_00330400: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033040F; /* je: equal / zero */

loc_00330406: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033040Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033040C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033040F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00330400; /* jne: not equal / not zero */

loc_00330415: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00330417: ;
    eax = MEM32(edi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033042A; /* je: equal / zero */

loc_00330421: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00330427u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00330427: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033042A: ;
    MEM32(edi) = 0x82A0B0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00330450
 * Original: 0x00330450 - 0x00330467 (23 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00330450: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    eax = eax + eax * 2;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx + eax * 4 + 0x10);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00330470
 * Original: 0x00330470 - 0x0033047E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330470(void)
{

loc_00330470: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2 + 6;
    eax = MEM32(ecx + eax * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00330490
 * Original: 0x00330490 - 0x003304BC (44 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330490(void)
{

loc_00330490: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    ecx = MEM32(ecx + eax * 4 + 0x10);
    eax = MEM32(esp + 8);
    edx = eax + eax * 2;
    eax = ecx + edx * 4;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003304D0
 * Original: 0x003304D0 - 0x00330543 (115 bytes, 46 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003304D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003304D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_003304E3; /* jge: greater or equal (signed >=) */

loc_003304DE: ;
    ebx = 1;

loc_003304E3: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003304F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003304EEu); } /* indirect call */
    }

loc_003304F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033053D; /* je: equal / zero */

loc_003304F5: ;
    eax = MEM32(esp + 0x14);
    ecx = esi + esi * 2;
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edx = eax + eax * 2;
    eax = MEM32(edi + ecx * 4 + 0x10);
    eax = eax + edx * 4;
    if (CMP_LE(_fas, _fbs)) goto loc_0033053D; /* jle: less or equal (signed <=) */

loc_0033050E: ;
    edx = MEM32(esp + 0x20);
    ecx = ebx + ebx * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebp);
    /* nop */

loc_00330520: ;
    edi = eax;
    ebp = MEM32(edi);
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = edi;
    if ((_fa != 0)) goto loc_00330520; /* jne: not equal / not zero */

loc_0033053C: ;
    POP32(esp, ebp);

loc_0033053D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00330560
 * Original: 0x00330560 - 0x0033056E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330560(void)
{

loc_00330560: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = MEM32(eax + ecx + 0xC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00330580
 * Original: 0x00330580 - 0x0033063F (191 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330580(void)
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

loc_00330580: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x7C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00330594u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00330594: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x84) = eax;
    eax = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi + 0x80) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003305B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003305AEu); } /* indirect call */
    }

loc_003305B1: ;
    edx = MEM32(esi + 0x7C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003305FF; /* jbe: below or equal (unsigned <=) */

loc_003305BA: ;
    /* nop */

loc_003305C0: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x84);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x7C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003305C0; /* jb: below (unsigned <) */

loc_003305FF: ;
    eax = MEM32(esi + 0x84);
    ecx = MEM32(esi + 0x7C);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx * 4 + -4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    edx = MEM32(eax);
    ecx = eax + ecx * 4 + -4;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033062C; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax)) */

loc_00330619: ;
    MEM32(esi + 0x88) = edx;
    eax = MEM32(ecx);
    MEM32(esi + 0x8C) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0033062C: ;
    MEM32(esi + 0x8C) = edx;
    eax = MEM32(ecx);
    MEM32(esi + 0x88) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_00330670
 * Original: 0x00330670 - 0x0033067C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330670(void)
{

loc_00330670: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x8C462C);
    esp += 4; return; /* ret */

}

/**
 * sub_00330680
 * Original: 0x00330680 - 0x00330694 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330680(void)
{

loc_00330680: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003306A0
 * Original: 0x003306A0 - 0x003306B9 (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003306A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003306A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003306A5: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003306B6; /* jne: not equal / not zero */

loc_003306AA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003306A5; /* jl: less (signed <) */

loc_003306B3: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_003306B6: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_003306C0
 * Original: 0x003306C0 - 0x0033071E (94 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003306C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003306C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = ecx;
    SET_LO8(ecx, MEM8(eax + 8));
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    edx = ebp + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_003306E9; /* je: equal / zero */

loc_003306D6: ;
    esi = MEM32(eax);
    edi = edx;
    ecx = 0xB;
    ebx = 1;
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
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003306E9: ;
    SET_LO8(ecx, MEM8(eax + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00330700; /* je: equal / zero */

loc_003306F0: ;
    esi = MEM32(eax + 0xC);
    edi = edx;
    ecx = 0xB;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
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
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00330700: ;
    SET_LO8(ecx, MEM8(eax + 0x20));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00330714; /* je: equal / zero */

loc_00330707: ;
    esi = MEM32(eax + 0x18);
    ecx = 0xB;
    edi = edx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
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

loc_00330714: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = ebx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00330740
 * Original: 0x00330740 - 0x003307A7 (103 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00330740: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 8;

loc_00330745: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033078D; /* je: equal / zero */

loc_0033074A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00330745; /* jl: less (signed <) */

loc_00330753: ;
    xmm3 = XMM_SCALAR(MEMF(0x829844)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx;
    PUSH32(esp, esi);

loc_00330763: ;
    esi = MEM32(edx);
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00330774; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0033076F: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0033077B;

loc_00330774: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0033077B: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0033078E; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_00330780: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00330763; /* jl: less (signed <) */

loc_00330789: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);

loc_0033078D: ;
    esp += 4; return; /* ret */

loc_0033078E: ;
    edx = eax + eax * 2;
    ecx = ecx + edx * 4;
    MEM8(ecx + 8) = 0;
    MEM32(ecx + 4) = 0;
    MEM32(ecx) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003307C0
 * Original: 0x003307C0 - 0x0033084C (140 bytes, 35 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003307C0(void)
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

loc_003307C0: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00330847; /* ja: above (unsigned >) (xmm3.f[0] vs xmm1.f[0]) */

loc_003307CE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7A9EBC); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7D6830); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0033081E; /* jle: less or equal (signed <=) */

loc_003307FC: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    /* nop */

loc_00330810: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0033083F; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0033081A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00330810; /* jg: greater (signed >) */

loc_0033081E: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    ecx = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    SET_LO8(eax, 1);
    esp += 24; return; /* ret 20 */

loc_0033083F: ;
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm3.f[0]; /* movss */

loc_00330847: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00330870
 * Original: 0x00330870 - 0x0033087E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00330870: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033087D; /* je: equal / zero */

loc_00330876: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033087Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033087C: ;
    POP32(esp, ecx);

loc_0033087D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00330890
 * Original: 0x00330890 - 0x003308B5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00330890: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003308A3; /* je: equal / zero */

loc_0033089A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003308A0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003308A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003308A3: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003308B3; /* je: equal / zero */

loc_003308AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003308B0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003308B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003308B3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003308C0
 * Original: 0x003308C0 - 0x00330955 (149 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003308C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003308C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 4) = eax;
    esi = MEM32(eax + 0x7C);
    eax = esi + esi * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x003308DFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003308DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00330916; /* je: equal / zero */

loc_003308E6: ;
    edx = esi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00330918; /* jl: less (signed <) */

loc_003308ED: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = eax + 8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00330900;

    /* nop */
    /* nop */

loc_00330900: ;
    MEMF(ecx + -8) = xmm0.f[0]; /* movss */
    MEMF(ecx + -4) = xmm0.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00330900; /* jne: not equal / not zero */

loc_00330914: ;
    goto loc_00330918;

loc_00330916: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00330918: ;
    ecx = MEM32(edi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(edi + 0xC) = eax;
    eax = MEM32(edi + 8);
    edx = MEM32(ecx);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0033092Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033092Bu); } /* indirect call */
    }

loc_0033092E: ;
    ecx = MEM32(edi + 8);
    esi = edi + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0033093Cu); RECOMP_ABI_CALL(0x0002BEB9u, sub_0002BEB9); /* call 0x0002BEB9 */

loc_0033093C: ;
    ecx = esi;
    PUSH32(esp, 0x00330943u); RECOMP_ABI_CALL(0x00012C39u, sub_00012C39); /* call 0x00012C39 */

loc_00330943: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM8(esi + 8) = 0;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00330980
 * Original: 0x00330980 - 0x00330BB1 (561 bytes, 176 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330980(void)
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

loc_00330980: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x88)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00330BA8; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_003309D0: ;
    _fca = xmm2.f[0]; _fcb = MEMF(ebx + 0xC); /* comiss */
    if ((_fca > _fcb)) goto loc_00330BA8; /* ja: above (unsigned >) (xmm2.f[0] vs MEMF(ebx + 0xC)) */

loc_003309DA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00330A14; /* jle: less or equal (signed <=) */

loc_003309E8: ;
    ebp = MEM32(ebx + 4);
    goto loc_003309F0;

    /* nop */

loc_003309F0: ;
    eax = esi + edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm0 = XMM_SCALAR(MEMF(ebp + eax * 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) esi = eax; /* cmova */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) edi = eax; /* cmovbe */
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003309F0; /* jg: greater (signed >) */

loc_00330A10: ;
    edx = MEM32(esp + 0x30);

loc_00330A14: ;
    ebx = MEM32(ebx + 4);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + edi * 4); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00330A2C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00330A27: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00330A33;

loc_00330A2C: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_00330A33: ;
    xmm2.f[0] = xmm2.f[0] - MEMF(ebx + esi * 4); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00330A42; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_00330A3D: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00330A46;

loc_00330A42: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_00330A46: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    eax = MEM32(edx);
    MEM32(edx + 4) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00330A55; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00330A50: ;
    MEM32(eax + 0x20) = edi;
    goto loc_00330A58;

loc_00330A55: ;
    MEM32(eax + 0x20) = esi;

loc_00330A58: ;
    esi = MEM32(edx);
    edx = MEM32(esi + 0x20);
    xmm3 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    eax = edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm3.f[0] = xmm3.f[0] * xmm3.f[0]; /* mulss */
    MEM32(esp + 0x10) = edx;
    ebx = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00330B02; /* jl: less (signed <) */

loc_00330A77: ;
    ecx = MEM32(ecx + 0xC);
    edi = eax + eax * 2;
    edi = ecx + edi * 4;
    ecx = edi;
    ebp = MEM32(ecx);
    MEM32(esp + 0x20) = ebp;
    ebp = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = ecx;
    goto loc_00330AA0;

    /* nop */
    /* nop */

loc_00330AA0: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x28); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00330AFE; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_00330ADC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    ebp = MEM32(ecx);
    MEM32(esp + 0x20) = ebp;
    ebp = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x10) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00330AA0; /* jge: greater or equal (signed >=) */

loc_00330AFE: ;
    ecx = MEM32(esp + 0x1C);

loc_00330B02: ;
    eax = edx + 1;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00330B8C; /* jge: greater or equal (signed >=) */

loc_00330B10: ;
    ecx = MEM32(ecx + 0xC);
    edi = eax + eax * 2;
    ecx = ecx + edi * 4;
    edi = ecx;
    ebp = MEM32(edi);
    MEM32(esp + 0x20) = ebp;
    ebp = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = edi;
    /* nop */

loc_00330B30: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x28); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00330B8C; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_00330B6C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx;
    ebp = MEM32(edi);
    MEM32(esp + 0x20) = ebp;
    ebp = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    ebx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00330B30; /* jl: less (signed <) */

loc_00330B8C: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x30);
    POP32(esp, edi);
    MEM32(esi + 0x24) = edx;
    ecx = MEM32(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x28) = ebx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00330BA8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00330C40
 * Original: 0x00330C40 - 0x00330C5A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00330C40: ;
    PUSH32(esp, esi);
    esi = ecx + 0x10;
    ecx = esi;
    PUSH32(esp, 0x00330C4Bu); RECOMP_ABI_CALL(0x00012C39u, sub_00012C39); /* call 0x00012C39 */

loc_00330C4B: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esi + 8) = 0;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00330C60
 * Original: 0x00330C60 - 0x00330C75 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00330C60: ;
    eax = MEM32(ecx + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx + 0x18) = 1;
    MEM32(ecx + 0x1C) = 0;
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00330C80
 * Original: 0x00330C80 - 0x00330D33 (179 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00330C80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00330D2E; /* je: equal / zero */

loc_00330C91: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00330CA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00330CA3u); } /* indirect call */
    }

loc_00330CA6: ;
    ecx = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00330D15; /* jbe: below or equal (unsigned <=) */

loc_00330CAF: ;
    edx = ebx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebp + 4;
    MEM32(esp + 0x10) = ebx;
    goto loc_00330CC0;

loc_00330CBC: ;
    ebx = MEM32(esp + 0x10);

loc_00330CC0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    ebp = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 8); /* addss */
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(esp + 0x18);
    MEM32(ebx + 4) = ebp;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 8) = ebp;
    ebx = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00330CBC; /* jb: below (unsigned <) */

loc_00330D15: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00330D27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00330D24u); } /* indirect call */
    }

loc_00330D27: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM8(esi + 0x18) = 0;
    POP32(esp, ebx);

loc_00330D2E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00330D60
 * Original: 0x00330D60 - 0x00330DBC (92 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00330D60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    edi = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00330D73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00330D70u); } /* indirect call */
    }

loc_00330D73: ;
    edx = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00330DA4; /* jbe: below or equal (unsigned <=) */

loc_00330D7C: ;
    PUSH32(esp, ebx);
    edx = edi;
    PUSH32(esp, ebp);

loc_00330D80: ;
    edi = edx;
    ebp = MEM32(edi);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 8) = edi;
    edi = MEM32(esi + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00330D80; /* jb: below (unsigned <) */

loc_00330DA2: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00330DA4: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00330DB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00330DB3u); } /* indirect call */
    }

loc_00330DB6: ;
    POP32(esp, edi);
    MEM8(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00330DE0
 * Original: 0x00330DE0 - 0x00330F31 (337 bytes, 90 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330DE0(void)
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

loc_00330DE0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x24);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xC);
    esi = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    ebx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00330E32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00330E2Fu); } /* indirect call */
    }

loc_00330E32: ;
    ecx = MEM32(esp + 0x28);
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    eax = MEM32(edi + 0x10);
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x34); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x829350); /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7CC); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 4); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax + 8); /* addss */
    POP32(esp, edi);
    POP32(esp, esi);
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    POP32(esp, ebx);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00330F1B; /* jb: below (unsigned <) (xmm0.f[0] vs xmm5.f[0]) */

loc_00330F09: ;
    xmm1 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 4) = xmm5.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00330F1B: ;
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 4) = xmm5.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_00330F90
 * Original: 0x00330F90 - 0x00330FB0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330F90(void)
{

loc_00330F90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82A134);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00330FA4u); RECOMP_ABI_CALL(0x00018E81u, sub_00018E81); /* call 0x00018E81 */

loc_00330FA4: ;
    MEM32(esi) = 0x82A124;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00330FC0
 * Original: 0x00330FC0 - 0x00330FC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330FC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00330FC0: ;
    fp_push(MEMF(0x8FCB34)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00330FD0
 * Original: 0x00330FD0 - 0x00330FE4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00330FD0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0x3E8;
    esp += 4; return; /* ret */

}

/**
 * sub_00330FF0
 * Original: 0x00330FF0 - 0x0033104D (93 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330FF0(void)
{

loc_00330FF0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00331070
 * Original: 0x00331070 - 0x003310D8 (104 bytes, 25 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331070: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = MEM32(esp + 0x14);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esp + 0xC);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp);
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00331100
 * Original: 0x00331100 - 0x0033118B (139 bytes, 33 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331100: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp);
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    MEM32(eax) = ecx;
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 4);
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003311B0
 * Original: 0x003311B0 - 0x00331255 (165 bytes, 39 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003311B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003311B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(eax, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00331280
 * Original: 0x00331280 - 0x003312B5 (53 bytes, 12 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331280(void)
{

loc_00331280: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = MEM32(esp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    edx = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(edx) = xmm1.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003312D0
 * Original: 0x003312D0 - 0x003312E5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003312D0(void)
{

loc_003312D0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003312F0
 * Original: 0x003312F0 - 0x00331312 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003312F0(void)
{

loc_003312F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00331320
 * Original: 0x00331320 - 0x00331343 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331320(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00331320: ;
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0033133E; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00331333: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00331342; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0033133E: ;
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_00331342: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00331350
 * Original: 0x00331350 - 0x00331369 (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331350: ;
    eax = MEM32(ecx + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x32;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = MEM32(ecx + 0x48);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00331370
 * Original: 0x00331370 - 0x0033137C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331370: ;
    eax = MEM32(ecx + 0x4C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x8C47C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8C47C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00331380
 * Original: 0x00331380 - 0x003313A0 (32 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331380: ;
    eax = MEM32(0x8FCB18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033139D; /* je: equal / zero */

loc_00331389: ;
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEMF(eax + 0x8C4818) = xmm0.f[0]; /* movss */

loc_0033139D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003313B0
 * Original: 0x003313B0 - 0x00331496 (230 bytes, 69 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003313B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003313B0: ;
    eax = MEM32(0x8FCB18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00331493; /* je: equal / zero */

loc_003313BD: ;
    eax = MEM32(ecx + 0x44);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    edi = 0x32;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = MEM32(ecx + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ecx + 0x44) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003313E7; /* jne: not equal / not zero */

loc_003313E0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM32(ecx + 0x48) = edx;

loc_003313E7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEM32(esi) = 0x19;
    xmm1 = XMM_SCALAR(MEMF(0x8C463C)); /* movss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    eax = MEM32(ecx + 0x4C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1 = XMM_SCALAR(MEMF(eax + 0x8C47CC)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(0x8C4638); /* divss */
    eax = MEM32(esp + 0xC);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esp + 0x10);
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esp + 0x14);
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x34) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x38) = eax;
    eax = MEM32(esp + 0x18);
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax);
    MEM32(esi + 0x40) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x44) = edx;
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    MEM32(esi + 0x48) = eax;
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);

loc_00331493: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003314D0
 * Original: 0x003314D0 - 0x003317B9 (745 bytes, 190 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003314D0(void)
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

loc_003314D0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x8FCB18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003317B2; /* je: equal / zero */

loc_003314E4: ;
    eax = MEM32(ecx + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    esi = 0x32;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fa = (uint32_t)(MEM32(ecx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x48), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003317B1; /* je: equal / zero */

loc_003314FA: ;
    eax = MEM32(edi + 0x44);
    edx = MEM32(edi + 0x40);
    esi = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x32;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(edi + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(edi + 0x44) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00331522; /* jne: not equal / not zero */

loc_0033151B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(edi + 0x48) = edx;

loc_00331522: ;
    eax = MEM32(esp + 0x48);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    MEM32(esi) = 0x19;
    edx = MEM32(eax);
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi + 0x10) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 0x4C);
    MEM32(esi + 0x18) = edx;
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    edx = MEM32(ecx);
    MEM32(esi + 0x20) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esi + 0x24) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esi + 0x28) = edx;
    MEMF(esi + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x1C);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x1C);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x30) = ecx;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(esp + 0x34) = edx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x2C) = eax;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    xmm6 = xmm1; /* movaps */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x24;
    MEMF(esp + 0x28) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003316B0u); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_003316B0: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x30;
    PUSH32(esp, 0x003316C0u); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_003316C0: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x003316D0u); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_003316D0: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esp + 0x50);
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
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(edi + 0x4C);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x8C4810)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x58); /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00331753u); RECOMP_ABI_CALL(0x00017275u, sub_00017275); /* call 0x00017275 */

loc_00331753: ;
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x34) = edx;
    eax = MEM32(eax + 8);
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(esi + 0x38) = eax;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00331793u); RECOMP_ABI_CALL(0x00017275u, sub_00017275); /* call 0x00017275 */

loc_00331793: ;
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi + 0x40) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x44) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x48) = eax;
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */

loc_003317B1: ;
    POP32(esp, esi);

loc_003317B2: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00331880
 * Original: 0x00331880 - 0x00331883 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331880(void)
{

loc_00331880: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00331890
 * Original: 0x00331890 - 0x00331891 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331890(void)
{

loc_00331890: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003318A0
 * Original: 0x003318A0 - 0x003318FE (94 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003318A0(void)
{

loc_003318A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = ecx;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00331920
 * Original: 0x00331920 - 0x00331952 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331920: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00331930; /* je: equal / zero */

loc_0033192A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00331930u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033192Eu); } /* indirect call */
    }

loc_00331930: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00331939u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00331939: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FCB0C) = 0;
    MEM32(0x8FCB10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00331960
 * Original: 0x00331960 - 0x003319A7 (71 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331960: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00331970; /* je: equal / zero */

loc_0033196A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00331970u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033196Eu); } /* indirect call */
    }

loc_00331970: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00331979u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00331979: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(0x8FCB0C) = 0;
    MEM32(0x8FCB10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_003319A1; /* je: equal / zero */

loc_00331998: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033199Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0033199E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003319A1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003319C0
 * Original: 0x003319C0 - 0x00331A08 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003319C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003319C0: ;
    eax = MEM32(0x8FCB18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    MEM32(0x8FCB10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00331A07; /* je: equal / zero */

loc_003319D3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x003319DBu); RECOMP_ABI_CALL(0x005589ADu, sub_005589AD); /* call 0x005589AD */

loc_003319DB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003319E0: ;
    eax = MEM32(0x8FCB2C);
    edx = MEM32(esi + eax);
    ecx = esi + eax + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FCB10);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003319FEu); RECOMP_ABI_CALL(0x0055A6ACu, sub_0055A6AC); /* call 0x0055A6AC */

loc_003319FE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x30 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003319E0; /* jb: below (unsigned <) */

loc_00331A06: ;
    POP32(esp, esi);

loc_00331A07: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00331A20
 * Original: 0x00331A20 - 0x00331B3B (283 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00331A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331A20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8FCB18);
    eax = MEM32(eax + 0x4C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x8C47C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8C47C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    ecx = eax + 0x20;
    edx = MEM32(ecx);
    MEM32(esp + 0xC) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    edx = MEM32(ecx + 4);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    MEM32(esp + 0x10) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEM32(esp + 0x14) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    esi = 0x8FCCD4;
    goto loc_00331AA0;

    /* nop */

loc_00331AA0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331AA5u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00331AA5: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7A9EC4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331AC7u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00331AC7: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7A9EC4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331AE8u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00331AE8: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7A9EC4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331B0Au); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00331B0A: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7A9EC4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8FDCD4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8FDCD4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00331AA0; /* jl: less (signed <) */

loc_00331B36: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00331B90
 * Original: 0x00331B90 - 0x00331D90 (512 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331B90: ;
    eax = 0x5E40;
    PUSH32(esp, 0x00331B9Au); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_00331B9A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30);
    MEM8(0x90691C) = 1;
    PUSH32(esp, 0x00331BAEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00331BAE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edx = 0x3E8;
    if (CMP_EQ(_fa, _fb)) goto loc_00331BE8; /* je: equal / zero */

loc_00331BBA: ;
    ecx = eax + 0x10;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = edx;
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebx;
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebx;
    MEM32(ecx + 0xC) = edx;
    MEM32(0x8FCB2C) = eax;
    goto loc_00331BEE;

loc_00331BE8: ;
    MEM32(0x8FCB2C) = ebx;

loc_00331BEE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x2F74;
    ecx = edx;
    /* nop */

loc_00331C00: ;
    MEMF(eax + -8) = xmm0.f[0]; /* movss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00331C00; /* jne: not equal / not zero */

loc_00331C14: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00331C20;

    /* nop */
    /* nop */

loc_00331C20: ;
    MEM32(esp + eax * 4 + 0x8C) = eax;
    MEM32(esp + eax * 4 + 0x1FCC) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00331C20; /* jl: less (signed <) */

loc_00331C33: ;
    PUSH32(esp, 0x00331C38u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00331C38: ;
    ecx = esp + 0x10;
    edi = eax;
    PUSH32(esp, 0x00331C43u); RECOMP_ABI_CALL(0x0056A600u, sub_0056A600); /* call 0x0056A600 */

loc_00331C43: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x82A178);
    PUSH32(esp, 0x00331C50u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_00331C50: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00331C5Eu); RECOMP_ABI_CALL(0x0056798Eu, sub_0056798E); /* call 0x0056798E */

loc_00331C5E: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2EE0);
    ecx = esp + 0x2F74;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x829C64);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00331C80u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_00331C80: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFA0);
    eax = esp + 0x1034;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A09C);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00331CA2u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_00331CA2: ;
    edx = MEM32(esp + 0x5E50);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00331CB8u); RECOMP_ABI_CALL(0x0056A770u, sub_0056A770); /* call 0x0056A770 */

loc_00331CB8: ;
    PUSH32(esp, 0xFA0);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A168);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00331CD8u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_00331CD8: ;
    PUSH32(esp, 0xFA0);
    eax = esp + 0x1FD0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A158);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00331CF8u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_00331CF8: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x829858);
    PUSH32(esp, 0x82A150);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00331D12u); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_00331D12: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x8FCB30);
    PUSH32(esp, 0x82A144);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00331D2Cu); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_00331D2C: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00331D3Au); RECOMP_ABI_CALL(0x005679BBu, sub_005679BB); /* call 0x005679BB */

loc_00331D3A: ;
    edx = MEM32(0x8FCB2C);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00331D4Fu); RECOMP_ABI_CALL(0x0056973Eu, sub_0056973E); /* call 0x0056973E */

loc_00331D4F: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00331D58u); RECOMP_ABI_CALL(0x0056A677u, sub_0056A677); /* call 0x0056A677 */

loc_00331D58: ;
    esi = 0x10;
    /* nop */

loc_00331D60: ;
    eax = MEM32(0x8FCB2C);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ecx = esi + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00331D79u); RECOMP_ABI_CALL(0x0055D322u, sub_0055D322); /* call 0x0055D322 */

loc_00331D79: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x30 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00331D60; /* jb: below (unsigned <) */

loc_00331D81: ;
    PUSH32(esp, 0x00331D86u); RECOMP_ABI_CALL(0x00015E11u, sub_00015E11); /* call 0x00015E11 */

loc_00331D86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x5E40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5E40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00331E10
 * Original: 0x00331E10 - 0x00331E11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331E10(void)
{

loc_00331E10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00331E20
 * Original: 0x00331E20 - 0x00331E21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331E20(void)
{

loc_00331E20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00331E30
 * Original: 0x00331E30 - 0x00331E31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331E30(void)
{

loc_00331E30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00331E40
 * Original: 0x00331E40 - 0x00331E41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331E40(void)
{

loc_00331E40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00331E50
 * Original: 0x00331E50 - 0x00331E9A (74 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331E50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331E50: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x550);
    edx = eax + 8;
    MEM32(ecx + 0x550) = edx;
    ecx = MEM32(0x8FCA84);
    xmm0 = XMM_SCALAR(MEMF(0x8FCA88)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7B1DE8); /* addss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(0x8FCA88) = xmm0.f[0]; /* movss */
    MEM32(0x8FCA84) = ecx;
    MEM32(eax) = ecx;
    xmm0 = XMM_SCALAR(MEMF(0x8FCA88)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331EB0
 * Original: 0x00331EB0 - 0x00331ED8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331EB0: ;
    eax = ecx + 0x414;
    PUSH32(esp, eax);
    edx = ecx + 0x408;
    eax = ecx + 0x3FC;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x3F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FCB18);
    PUSH32(esp, 0x00331ED7u); RECOMP_ABI_CALL(0x00030E8Cu, sub_00030E8C); /* call 0x00030E8C */

loc_00331ED7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00331EF0
 * Original: 0x00331EF0 - 0x00331EFD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331EF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00331EF0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x8FCC90)); /* fdiv dword ptr [0x8fcc90] */
    fp_top() = -fp_top(); /* fchs */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00331F00
 * Original: 0x00331F00 - 0x00331F21 (33 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331F00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00331F0Du); RECOMP_ABI_CALL(0x000258DEu, sub_000258DE); /* call 0x000258DE */

loc_00331F0D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;
    MEM8(esi + 0x48) = LO8(eax);
    MEM32(esi) = 0x82A190;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331F30
 * Original: 0x00331F30 - 0x00331F35 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331F30(void)
{

loc_00331F30: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331F40
 * Original: 0x00331F40 - 0x00331F49 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331F40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00331F40: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00331F50
 * Original: 0x00331F50 - 0x00331F57 (7 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331F50(void)
{

loc_00331F50: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00331F60
 * Original: 0x00331F60 - 0x00331F6D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331F60(void)
{

loc_00331F60: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x44) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331F70
 * Original: 0x00331F70 - 0x00331F7A (10 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331F70(void)
{

loc_00331F70: ;
    MEM32(ecx + 0x44) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331F80
 * Original: 0x00331F80 - 0x00331F83 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331F80(void)
{

loc_00331F80: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331F90
 * Original: 0x00331F90 - 0x00331FA0 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331F90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x41);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00331FB0
 * Original: 0x00331FB0 - 0x00331FB9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331FB0(void)
{

loc_00331FB0: ;
    eax = ecx;
    MEM32(eax) = 0x82A1C0;
    esp += 4; return; /* ret */

}

/**
 * sub_00331FC0
 * Original: 0x00331FC0 - 0x00331FD9 (25 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331FC0(void)
{

loc_00331FC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00331FE0
 * Original: 0x00331FE0 - 0x00331FF9 (25 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331FE0(void)
{

loc_00331FE0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00332000
 * Original: 0x00332000 - 0x00332075 (117 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332000(void)
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

loc_00332000: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00332043; /* je: equal / zero */

loc_00332008: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00332020; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_00332019: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    goto loc_0033202A;

loc_00332020: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */

loc_0033202A: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00332032; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033202F: ;
    xmm0 = xmm1; /* movaps */

loc_00332032: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00332043; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0033203D: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00332043: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00332058; /* jp: parity */

loc_00332052: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp += 12; return; /* ret 8 */

loc_00332058: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xC)); /* fsub dword ptr [ecx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003320A0
 * Original: 0x003320A0 - 0x003320AB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003320A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003320A0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7C8)); /* fmul dword ptr [0x7ab7c8] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003320B0
 * Original: 0x003320B0 - 0x003320C2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003320B0(void)
{

loc_003320B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003320BAu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003320BA: ;
    ecx = eax;
    PUSH32(esp, 0x003320C1u); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_003320C1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003320D0
 * Original: 0x003320D0 - 0x003320D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003320D0(void)
{

loc_003320D0: ;
    eax = MEM32(0x8FCB68);
    esp += 4; return; /* ret */

}

/**
 * sub_003320E0
 * Original: 0x003320E0 - 0x003320FB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003320E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003320E0: ;
    ecx = MEM32(0x8FCB68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003320FA; /* je: equal / zero */

loc_003320EA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003320F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003320EEu); } /* indirect call */
    }

loc_003320F0: ;
    MEM32(0x8FCB68) = 0;

loc_003320FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00332110
 * Original: 0x00332110 - 0x003322A6 (406 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00332110: ;
    ecx = MEM32(ecx + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x829354)); /* movss */
    PUSH32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 2;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);

loc_00332130: ;
    SET_LO8(ebx, MEM8(ecx + -76));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033214C; /* jne: not equal / not zero */

loc_00332137: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033214C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0033213C: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = edx + -2;
    if ((_fca > _fcb)) goto loc_003322A3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033214C: ;
    SET_LO8(ebx, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033216A; /* jne: not equal / not zero */

loc_00332153: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x60); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033216A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x60)) */

loc_00332159: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = edx + -1;
    if ((_fca > _fcb)) goto loc_003322A3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033216A: ;
    SET_LO8(ebx, MEM8(ecx + 0x74));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033218D; /* jne: not equal / not zero */

loc_00332171: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033218D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC0)) */

loc_0033217A: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = edx;
    if ((_fca > _fcb)) goto loc_003322A3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033218D: ;
    SET_LO8(ebx, MEM8(ecx + 0xD4));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003321B4; /* jne: not equal / not zero */

loc_00332197: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x120); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003321B4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x120)) */

loc_003321A0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x120)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = edx + 1;
    if ((_fca > _fcb)) goto loc_003322A3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_003321B4: ;
    SET_LO8(ebx, MEM8(ecx + 0x134));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003321DB; /* jne: not equal / not zero */

loc_003321BE: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x180); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003321DB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x180)) */

loc_003321C7: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x180)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = edx + 2;
    if ((_fca > _fcb)) goto loc_003322A3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_003321DB: ;
    SET_LO8(ebx, MEM8(ecx + 0x194));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332202; /* jne: not equal / not zero */

loc_003321E5: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x1E0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00332202; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x1E0)) */

loc_003321EE: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1E0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = edx + 3;
    if ((_fca > _fcb)) goto loc_003322A3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00332202: ;
    SET_LO8(ebx, MEM8(ecx + 0x1F4));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332225; /* jne: not equal / not zero */

loc_0033220C: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x240); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00332225; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x240)) */

loc_00332215: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x240)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = edx + 4;
    if ((_fca > _fcb)) goto loc_003322A3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00332225: ;
    SET_LO8(ebx, MEM8(ecx + 0x254));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332248; /* jne: not equal / not zero */

loc_0033222F: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x2A0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00332248; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x2A0)) */

loc_00332238: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2A0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = edx + 5;
    if ((_fca > _fcb)) goto loc_003322A3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00332248: ;
    SET_LO8(ebx, MEM8(ecx + 0x2B4));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033226B; /* jne: not equal / not zero */

loc_00332252: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x300); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033226B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x300)) */

loc_0033225B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x300)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = edx + 6;
    if ((_fca > _fcb)) goto loc_003322A3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033226B: ;
    SET_LO8(ebx, MEM8(ecx + 0x314));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033228E; /* jne: not equal / not zero */

loc_00332275: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x360); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0033228E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x360)) */

loc_0033227E: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x360)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = edx + 7;
    if ((_fca > _fcb)) goto loc_003322A3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0033228E: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xA;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edx + -2;
    _fb = (uint32_t)(0x3C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00332130; /* jl: less (signed <) */

loc_003322A3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00332310
 * Original: 0x00332310 - 0x003323F9 (233 bytes, 74 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332310: ;
    ecx = MEM32(ecx + 0x10);
    SET_LO8(eax, MEM8(esp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 2;
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00332330: ;
    SET_LO8(ebx, MEM8(ecx + -2));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00332346; /* je: equal / zero */

loc_00332337: ;
    ebx = ZX8(MEM8(ecx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332346; /* jne: not equal / not zero */

loc_0033233E: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332346; /* jne: not equal / not zero */

loc_00332343: ;
    esi = edx + -2;

loc_00332346: ;
    SET_LO8(ebx, MEM8(ecx + 0x5E));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033235D; /* je: equal / zero */

loc_0033234D: ;
    ebx = ZX8(MEM8(ecx + 0x60));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033235D; /* jne: not equal / not zero */

loc_00332355: ;
    _fa = (uint32_t)(MEM8(ecx + 0x61)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x61), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033235D; /* jne: not equal / not zero */

loc_0033235A: ;
    esi = edx + -1;

loc_0033235D: ;
    SET_LO8(ebx, MEM8(ecx + 0xBE));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033237C; /* je: equal / zero */

loc_00332367: ;
    ebx = ZX8(MEM8(ecx + 0xC0));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033237C; /* jne: not equal / not zero */

loc_00332372: ;
    _fa = (uint32_t)(MEM8(ecx + 0xC1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xC1), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033237C; /* jne: not equal / not zero */

loc_0033237A: ;
    esi = edx;

loc_0033237C: ;
    SET_LO8(ebx, MEM8(ecx + 0x11E));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033239C; /* je: equal / zero */

loc_00332386: ;
    ebx = ZX8(MEM8(ecx + 0x120));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033239C; /* jne: not equal / not zero */

loc_00332391: ;
    _fa = (uint32_t)(MEM8(ecx + 0x121)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x121), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033239C; /* jne: not equal / not zero */

loc_00332399: ;
    esi = edx + 1;

loc_0033239C: ;
    SET_LO8(ebx, MEM8(ecx + 0x17E));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003323BC; /* je: equal / zero */

loc_003323A6: ;
    ebx = ZX8(MEM8(ecx + 0x180));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003323BC; /* jne: not equal / not zero */

loc_003323B1: ;
    _fa = (uint32_t)(MEM8(ecx + 0x181)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x181), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003323BC; /* jne: not equal / not zero */

loc_003323B9: ;
    esi = edx + 2;

loc_003323BC: ;
    SET_LO8(ebx, MEM8(ecx + 0x1DE));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003323DC; /* je: equal / zero */

loc_003323C6: ;
    ebx = ZX8(MEM8(ecx + 0x1E0));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003323DC; /* jne: not equal / not zero */

loc_003323D1: ;
    _fa = (uint32_t)(MEM8(ecx + 0x1E1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x1E1), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003323DC; /* jne: not equal / not zero */

loc_003323D9: ;
    esi = edx + 3;

loc_003323DC: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx + -2;
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x240;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00332330; /* jl: less (signed <) */

loc_003323F1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00332440
 * Original: 0x00332440 - 0x0033246D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332440: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x82A1D0;
    if (CMP_EQ(_fa, _fb)) goto loc_0033246A; /* je: equal / zero */

loc_00332451: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033245Cu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0033245C: ;
    ecx = eax;
    PUSH32(esp, 0x00332463u); RECOMP_ABI_CALL(0x0055D5A6u, sub_0055D5A6); /* call 0x0055D5A6 */

loc_00332463: ;
    MEM32(esi + 0x1C) = 0;

loc_0033246A: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00332480
 * Original: 0x00332480 - 0x003324EA (106 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332480: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM8(ecx + 0x12) = 0xFF;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0x10) = LO8(eax);
    MEM8(ecx + 0x11) = LO8(eax);
    MEM8(ecx + 0x13) = LO8(eax);
    MEM16(ecx + 0x14) = LO16(eax);
    MEM32(ecx + 0x18) = eax;
    MEM8(ecx + 0x4C) = LO8(eax);
    MEM16(ecx + 0x3C) = LO16(eax);
    MEMF(ecx + 0x40) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x44) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x54) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x58) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x5C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00332510
 * Original: 0x00332510 - 0x0033266D (349 bytes, 87 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332510(void)
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

loc_00332510: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332666; /* jne: not equal / not zero */

loc_00332521: ;
    eax = MEM32(esp + 0x24);
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    MEM8(edi + 0x4C) = 1;
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0xC;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0033258Bu); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_0033258B: ;
    fp_pop(); /* fstp st(0) */
    xmm4 = XMM_SCALAR(MEMF(0x8298AC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 4); /* addss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    edx = MEM32(esp + 0xC);
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edi + 0x3C) = MEM16(edi + 0x3C) + 2;
    _fa = (uint32_t)(MEM16(edi + 0x3C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    eax = edi + 0x24;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    edx = edi + 0x30;
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(edx + 8) = eax;
    MEM8(edi + 0x10) = 1;
    MEM8(edi + 0x11) = 0;
    edx = MEM32(esi);
    ecx = edi + 0x40;
    MEM32(ecx) = edx;
    eax = MEM32(esi + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esi + 8);
    MEM32(ecx + 8) = edx;
    MEMF(edi + 0x5C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);

loc_00332666: ;
    POP32(esp, edi);
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
 * sub_003326D0
 * Original: 0x003326D0 - 0x00332823 (339 bytes, 85 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003326D0(void)
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

loc_003326D0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033281C; /* jne: not equal / not zero */

loc_003326E1: ;
    _fa = (uint32_t)(MEM16(edi + 0x3C)) & 0xFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x3C), 0x32 (16-bit) */
    MEM8(edi + 0x4C) = 1;
    if (CMP_AE(_fa, _fb)) goto loc_0033281C; /* jae: above or equal (unsigned >=) */

loc_003326F0: ;
    eax = MEM32(esp + 0x24);
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0xC;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00332756u); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_00332756: ;
    fp_pop(); /* fstp st(0) */
    xmm4 = XMM_SCALAR(MEMF(0x8298AC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    ecx = MEM32(esi);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 4); /* addss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    eax = edi + 0x40;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edi + 0x3C) = MEM16(edi + 0x3C) + 2;
    _fa = (uint32_t)(MEM16(edi + 0x3C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 8);
    edx = edi + 0x24;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    ecx = edi + 0x30;
    MEM32(ecx) = edx;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);

loc_0033281C: ;
    POP32(esp, edi);
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
 * sub_00332880
 * Original: 0x00332880 - 0x003328AC (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332880: ;
    SET_LO16(eax, MEM16(ecx + 0x3C));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)0xA));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xC8 (16-bit) */
    MEM8(ecx + 0x11) = 1;
    MEM8(ecx + 0x10) = 0;
    MEM16(ecx + 0x14) = LO16(eax);
    if (CMP_BE(_fa, _fb)) goto loc_003328A4; /* jbe: below or equal (unsigned <=) */

loc_0033289A: ;
    eax = 0xC8;
    MEM16(ecx + 0x14) = LO16(eax);
    esp += 4; return; /* ret */

loc_003328A4: ;
    eax = ZX16(LO16(eax));
    MEM16(ecx + 0x14) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003328C0
 * Original: 0x003328C0 - 0x003328D2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003328C0(void)
{

loc_003328C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003328CAu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003328CA: ;
    ecx = eax;
    PUSH32(esp, 0x003328D1u); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_003328D1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003328E0
 * Original: 0x003328E0 - 0x003328E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003328E0(void)
{

loc_003328E0: ;
    eax = MEM32(0x8FCB6C);
    esp += 4; return; /* ret */

}

/**
 * sub_003328F0
 * Original: 0x003328F0 - 0x0033290B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003328F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003328F0: ;
    ecx = MEM32(0x8FCB6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033290A; /* je: equal / zero */

loc_003328FA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00332900u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003328FEu); } /* indirect call */
    }

loc_00332900: ;
    MEM32(0x8FCB6C) = 0;

loc_0033290A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00332920
 * Original: 0x00332920 - 0x00332941 (33 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332920(void)
{

loc_00332920: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, 0x861);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A09C);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0033293Eu); RECOMP_ABI_CALL(0x0055BACEu, sub_0055BACE); /* call 0x0055BACE */

loc_0033293E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00332950
 * Original: 0x00332950 - 0x00332AA8 (344 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332950: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x20;
    /* nop */

loc_00332960: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00332960; /* ja: above (unsigned >) */

loc_00332968: ;
    eax = edi * 4;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00332977u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00332977: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x39F8) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x40;

loc_00332987: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00332987; /* ja: above (unsigned >) */

loc_0033298F: ;
    ecx = ebx * 4;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033299Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0033299E: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x3A00)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEM32(esi + 0x39FC) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00332A07; /* jl: less (signed <) */

loc_003329BE: ;
    ecx = edi + -3;

loc_003329C1: ;
    edx = MEM32(esi + 0x39F8);
    MEMF(edx + eax * 4) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x39F8);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edx + eax * 4 + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x39F8);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edx + eax * 4 + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x39F8);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edx + eax * 4 + 0xC) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    if (CMP_L(_fas, _fbs)) goto loc_003329C1; /* jl: less (signed <) */

loc_00332A07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00332A24; /* jge: greater or equal (signed >=) */

loc_00332A0B: ;
    goto loc_00332A10;

    /* nop */

loc_00332A10: ;
    ecx = MEM32(esi + 0x39F8);
    MEMF(ecx + eax * 4) = xmm1.f[0]; /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    if (CMP_L(_fas, _fbs)) goto loc_00332A10; /* jl: less (signed <) */

loc_00332A24: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x3A04)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00332A86; /* jl: less (signed <) */

loc_00332A33: ;
    ecx = ebx + -3;
    goto loc_00332A40;

    /* nop */
    /* nop */

loc_00332A40: ;
    edx = MEM32(esi + 0x39FC);
    MEMF(edx + eax * 4) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x39FC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edx + eax * 4 + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x39FC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edx + eax * 4 + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x39FC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edx + eax * 4 + 0xC) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    if (CMP_L(_fas, _fbs)) goto loc_00332A40; /* jl: less (signed <) */

loc_00332A86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00332AA4; /* jge: greater or equal (signed >=) */

loc_00332A8A: ;
    /* nop */

loc_00332A90: ;
    ecx = MEM32(esi + 0x39FC);
    MEMF(ecx + eax * 4) = xmm1.f[0]; /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    if (CMP_L(_fas, _fbs)) goto loc_00332A90; /* jl: less (signed <) */

loc_00332AA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00332B00
 * Original: 0x00332B00 - 0x00332BA9 (169 bytes, 57 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00332B00: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x39F8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x3A00); /* subss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00332B23: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00332B3E; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00332B2F: ;
    ecx = edx + 1;
    ebx = 0x20;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm1 = xmm0; /* movaps */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00332B3E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 1;
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332B23; /* jne: not equal / not zero */

loc_00332B50: ;
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 0x3A04); /* subss */
    esi = MEM32(esi + 0x39FC);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm1 = xmm3; /* movaps */
    goto loc_00332B70;

    /* nop */

loc_00332B70: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00332B8C; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00332B7D: ;
    ecx = edx + 1;
    ebx = 0x40;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm1 = xmm0; /* movaps */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00332B8C: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 1;
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332B70; /* jne: not equal / not zero */

loc_00332B9E: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00332BE0
 * Original: 0x00332BE0 - 0x00332C07 (39 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332BE0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x41);
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x41;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x41;
    PUSH32(esp, esi);

loc_00332BF4: ;
    esi = eax + -65;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00332BF4; /* jne: not equal / not zero */

loc_00332C03: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}
