/**
 * nhl_07_recomp - Recompiled code chunk 82
 * Functions: 250 (0x00087400 - 0x00090640)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00087400
 * Original: 0x00087400 - 0x00087421 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087400: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    esi = ecx;
    PUSH32(esp, 0x0008740Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0008740C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008741D; /* je: equal / zero */

loc_00087413: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0008741Bu); RECOMP_ABI_CALL(0x00019D95u, sub_00019D95); /* call 0x00019D95 */

loc_0008741B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008741D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00087430
 * Original: 0x00087430 - 0x000874AF (127 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087430: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0008743Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_0008743E: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    MEM32(esi) = 0x7BA300;
    SET_LO8(eax, LO8(eax) ^ MEM8(edi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x1C));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x1C) = LO8(ecx);
    SET_LO8(eax, MEM8(edi + 0x1C));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x1C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x1C));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x1C) = LO8(ecx);
    SET_LO8(eax, MEM8(edi + 0x1C));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x1C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x1C));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 0x10);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x1C) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x1C));
    SET_LO8(eax, MEM8(edi + 0x1C));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 0x1F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x1C) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x1D));
    MEM8(esi + 0x1D) = LO8(eax);
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(edi + 0x24);
    POP32(esp, edi);
    MEM32(esi + 0x24) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000874D0
 * Original: 0x000874D0 - 0x0008753E (110 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000874D0(void)
{

loc_000874D0: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    esi = ecx;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00087502u); RECOMP_ABI_CALL(0x00011CF3u, sub_00011CF3); /* call 0x00011CF3 */

loc_00087502: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0x28);
    MEM32(esi) = 0x7BA310;
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(edx);
    MEM32(esi + 0x28) = eax;
    ecx = MEM32(edx + 4);
    SET_LO16(eax, MEM16(esp + 0x24));
    MEM32(esi + 0x2C) = ecx;
    edx = MEM32(edx + 8);
    MEM16(esi + 0x34) = LO16(eax);
    MEM32(esi + 0x30) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_00087560
 * Original: 0x00087560 - 0x000875BC (92 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087560: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    SET_LO8(edx, MEM8(esp + 4));
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(LO8(edx)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        SET_LO8(edx, _sv << _sc);
        _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM16(eax + 0xC) = 9;
    MEM32(eax) = 0x7BA320;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(eax + 0x1D) = LO8(ecx);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ecx + 4);
    SET_LO16(edx, MEM16(esp + 8));
    MEM32(eax + 0x24) = ecx;
    MEM16(eax + 0x1E) = LO16(edx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000875E0
 * Original: 0x000875E0 - 0x000875E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000875E0(void)
{

loc_000875E0: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_000875F0
 * Original: 0x000875F0 - 0x000875F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000875F0(void)
{

loc_000875F0: ;
    eax = 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00087600
 * Original: 0x00087600 - 0x00087621 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087600: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    esi = ecx;
    PUSH32(esp, 0x0008760Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0008760C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008761D; /* je: equal / zero */

loc_00087613: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0008761Bu); RECOMP_ABI_CALL(0x000297C7u, sub_000297C7); /* call 0x000297C7 */

loc_0008761B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008761D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00087630
 * Original: 0x00087630 - 0x00087687 (87 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087630: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0008763Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_0008763E: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    MEM32(esi) = 0x7BA320;
    SET_LO8(eax, LO8(eax) ^ MEM8(edi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x1C));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x1C) = LO8(ecx);
    SET_LO8(eax, LO8(ecx));
    SET_LO8(ecx, MEM8(edi + 0x1C));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 0x1C));
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x1C) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x1D));
    MEM8(esi + 0x1D) = LO8(edx);
    SET_LO16(eax, MEM16(edi + 0x1E));
    MEM16(esi + 0x1E) = LO16(eax);
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(edi + 0x24);
    POP32(esp, edi);
    MEM32(esi + 0x24) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000876A0
 * Original: 0x000876A0 - 0x00087709 (105 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000876A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000876A0: ;
    SET_LO8(edx, MEM8(esp + 8));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    SET_LO8(edx, MEM8(esp + 4));
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(eax) = 0x7BA320;
    { uint32_t _sv=(uint32_t)(LO8(edx)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        SET_LO8(edx, _sv << _sc);
        _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM16(eax + 0xC) = 9;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM8(eax + 0x1D) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ecx + 4);
    SET_LO16(edx, MEM16(esp + 0x18));
    MEM32(eax + 0x24) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM16(eax + 0x1E) = LO16(edx);
    MEM32(eax) = 0x7BA330;
    MEM8(eax + 0x28) = LO8(ecx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00087730
 * Original: 0x00087730 - 0x00087757 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087730: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM16(eax + 0xC) = 0xA;
    MEM32(eax) = 0x7BA340;
    MEM8(eax + 0x1C) = LO8(ecx);
    MEM8(eax + 0x1D) = LO8(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00087760
 * Original: 0x00087760 - 0x00087766 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087760(void)
{

loc_00087760: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00087770
 * Original: 0x00087770 - 0x00087776 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087770(void)
{

loc_00087770: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00087780
 * Original: 0x00087780 - 0x000877BA (58 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087780: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x0008778Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0008778D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000877B5; /* je: equal / zero */

loc_00087796: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0008779Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_0008779E: ;
    MEM32(esi) = 0x7BA340;
    SET_LO8(eax, MEM8(edi + 0x1C));
    MEM8(esi + 0x1C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x1D));
    POP32(esp, edi);
    MEM8(esi + 0x1D) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000877B5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000877D0
 * Original: 0x000877D0 - 0x000877F7 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000877D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000877D0: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM16(eax + 0xC) = 0xA;
    MEM8(eax + 0x1C) = LO8(ecx);
    MEM8(eax + 0x1D) = LO8(edx);
    MEM32(eax) = 0x7BA350;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00087800
 * Original: 0x00087800 - 0x00087843 (67 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087800: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(edx, MEM8(esp + 4));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM16(eax + 0xC) = 0x23;
    MEM32(eax) = 0x7BA360;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1D) = LO8(ecx);
    ecx = MEM32(esp + 0xC);
    MEM8(eax + 0x1C) = LO8(edx);
    edx = MEM32(ecx);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0x24) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00087860
 * Original: 0x00087860 - 0x00087866 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087860(void)
{

loc_00087860: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00087870
 * Original: 0x00087870 - 0x00087876 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087870(void)
{

loc_00087870: ;
    eax = 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00087880
 * Original: 0x00087880 - 0x000878C6 (70 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087880: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    edi = ecx;
    PUSH32(esp, 0x0008788Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0008788D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000878C1; /* je: equal / zero */

loc_00087896: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0008789Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_0008789E: ;
    MEM32(esi) = 0x7BA360;
    SET_LO8(eax, MEM8(edi + 0x1C));
    MEM8(esi + 0x1C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x1D));
    MEM8(esi + 0x1D) = LO8(ecx);
    edx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(edi + 0x24);
    MEM32(esi + 0x24) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000878C1: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000878E0
 * Original: 0x000878E0 - 0x00087929 (73 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000878E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000878E0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(edx, MEM8(esp + 4));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM32(eax) = 0x7BA360;
    MEM16(eax + 0xC) = 0x23;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1D) = LO8(ecx);
    ecx = MEM32(esp + 0xC);
    MEM8(eax + 0x1C) = LO8(edx);
    edx = MEM32(ecx);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax) = 0x7BA370;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00087940
 * Original: 0x00087940 - 0x00087962 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087940: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0x16;
    MEM32(eax) = 0x7BA380;
    MEM16(eax + 0x1C) = LO16(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00087970
 * Original: 0x00087970 - 0x00087976 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087970(void)
{

loc_00087970: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_00087980
 * Original: 0x00087980 - 0x00087986 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087980(void)
{

loc_00087980: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00087990
 * Original: 0x00087990 - 0x000879C6 (54 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087990: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x0008799Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0008799D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000879C1; /* je: equal / zero */

loc_000879A6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000879AEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000879AE: ;
    MEM32(esi) = 0x7BA380;
    SET_LO16(eax, MEM16(edi + 0x1C));
    MEM16(esi + 0x1C) = LO16(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000879C1: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000879E0
 * Original: 0x000879E0 - 0x00087A12 (50 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000879E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000879E0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0x1C) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 0xC) = 0x16;
    MEM32(eax) = 0x7BA390;
    MEM32(eax + 0x20) = edx;
    MEM16(eax + 0x24) = LO16(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00087A20
 * Original: 0x00087A20 - 0x00087A42 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087A20: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0x15;
    MEM32(eax) = 0x7BA3A0;
    MEM16(eax + 0x1C) = LO16(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00087A50
 * Original: 0x00087A50 - 0x00087A56 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087A50(void)
{

loc_00087A50: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_00087A60
 * Original: 0x00087A60 - 0x00087A66 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087A60(void)
{

loc_00087A60: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00087A70
 * Original: 0x00087A70 - 0x00087AA6 (54 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087A70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x00087A7Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00087A7D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087AA1; /* je: equal / zero */

loc_00087A86: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00087A8Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_00087A8E: ;
    MEM32(esi) = 0x7BA3A0;
    SET_LO16(eax, MEM16(edi + 0x1C));
    MEM16(esi + 0x1C) = LO16(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00087AA1: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00087AC0
 * Original: 0x00087AC0 - 0x00087AF2 (50 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087AC0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0x1C) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 0xC) = 0x15;
    MEM32(eax) = 0x7BA3B0;
    MEM32(eax + 0x20) = edx;
    MEM16(eax + 0x24) = LO16(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00087B00
 * Original: 0x00087B00 - 0x00087B17 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087B00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087B00: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 8;
    MEM32(eax) = 0x7BA3C0;
    esp += 4; return; /* ret */

}

/**
 * sub_00087B20
 * Original: 0x00087B20 - 0x00087B23 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00087B20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087B20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00087B30
 * Original: 0x00087B30 - 0x00087B36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087B30(void)
{

loc_00087B30: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00087B40
 * Original: 0x00087B40 - 0x00087B6E (46 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087B40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    edi = ecx;
    PUSH32(esp, 0x00087B4Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00087B4D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087B69; /* je: equal / zero */

loc_00087B56: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00087B5Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_00087B5E: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7BA3C0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00087B69: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00087B80
 * Original: 0x00087B80 - 0x00087BA0 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087B80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087B80: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 0xC) = 8;
    MEM32(eax) = 0x7BA3D0;
    MEM32(eax + 0x1C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00087BB0
 * Original: 0x00087BB0 - 0x00087BD0 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087BB0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 0xC) = 0x4F;
    MEM32(eax) = 0x7BA3E0;
    MEM32(eax + 0x1C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00087BE0
 * Original: 0x00087BE0 - 0x00087BE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00087BE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087BE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00087BF0
 * Original: 0x00087BF0 - 0x00087BF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087BF0(void)
{

loc_00087BF0: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00087C00
 * Original: 0x00087C00 - 0x00087C34 (52 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087C00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x00087C0Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00087C0D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087C2F; /* je: equal / zero */

loc_00087C16: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00087C1Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_00087C1E: ;
    MEM32(esi) = 0x7BA3E0;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00087C2F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00087C50
 * Original: 0x00087C50 - 0x00087C70 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087C50: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 0xC) = 0x4F;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x7BA3F0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00087C80
 * Original: 0x00087C80 - 0x00087F5F (735 bytes, 173 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087C80(void)
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

loc_00087C80: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esi + 0xF0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087C94u); RECOMP_ABI_CALL(0x0003117Au, sub_0003117A); /* call 0x0003117A */

loc_00087C94: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00087CB9; /* je: equal / zero */

loc_00087C9E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00087E3C; /* jne: not equal / not zero */

loc_00087CA5: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9928)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    goto loc_00087CEA;

loc_00087CB9: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E992C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x7AD3DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00087CE5; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00087CD8: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AD38C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00087CEA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00087CE5: ;
    MEMF(esp) = xmm1.f[0]; /* movss */

loc_00087CEA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x8EACE4);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = MEM32(esi + 0x20);
    fp_top() = sin(fp_top()); /* fsin */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x48;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 8;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x00087D3Eu); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_00087D3E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 4); /* mulss */

loc_00087D66: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    fp_pop(); /* fstp st(0) */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00087D77; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00087D74: ;
    xmm0 = xmm1; /* movaps */

loc_00087D77: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x198)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AB2D0); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7BA118); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x7BA414); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7BA158); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x897568)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp); /* cvttss2si */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(0x8EACE4);
    MEM16(ecx + 0x10) = LO16(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_00087F5B; /* jle: less or equal (signed <=) */

loc_00087DD0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00087F5B; /* jg: greater (signed >) */

loc_00087DD9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00087F5B; /* jne: not equal / not zero */

loc_00087DE2: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00087DF0; /* jne: not equal / not zero */

loc_00087DE7: ;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087F5B; /* je: equal / zero */

loc_00087DF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E989C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7BA180); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7BA0F8); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00087E10; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00087E0D: ;
    xmm1 = xmm0; /* movaps */

loc_00087E10: ;
    eax = MEM32(0x904A88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp) = xmm1.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00087EEE; /* jne: not equal / not zero */

loc_00087E22: ;
    eax = (int32_t)MEMF(esp); /* cvttss2si */
    edx = MEM32(0x8EACE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7BA40C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x3C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    goto loc_00087F1C;

loc_00087E3C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00087CEA; /* jne: not equal / not zero */

loc_00087E45: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00087E4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087E49u); } /* indirect call */
    }

loc_00087E4C: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */
    MEM32(esp + 0x10) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x30); /* subss */
    MEM32(esp + 0x14) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 8;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00087EC1u); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_00087EC1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    goto loc_00087D66;

loc_00087EEE: ;
    eax = (int32_t)MEMF(esp); /* cvttss2si */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA1);
    ecx = eax;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(0x8EACE4);
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
    PUSH32(esp, eax);
    PUSH32(esp, 0x7BA400);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);

loc_00087F1C: ;
    PUSH32(esp, 0x00087F21u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00087F21: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087F5B; /* je: equal / zero */

loc_00087F2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087F5B; /* je: equal / zero */

loc_00087F31: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x1C;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM16(esp + 0x28) = 0x4F;
    MEM32(esp + 0x38) = 0xC;
    MEM32(esp + 0x1C) = 0x7BA3F0;
    PUSH32(esp, 0x00087F5Bu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00087F5B: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00088020
 * Original: 0x00088020 - 0x00088B60 (2880 bytes, 717 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088020(void)
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

loc_00088020: ;
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x10C);
    ebx = ecx;
    esi = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008803Du); RECOMP_ABI_CALL(0x00087C80u, sub_00087C80); /* call 0x00087C80 */

loc_0008803D: ;
    eax = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00088055; /* je: equal / zero */

loc_00088047: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008805C; /* jne: not equal / not zero */

loc_0008804A: ;
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0x00088053u); RECOMP_ABI_CALL(0x00084D10u, sub_00084D10); /* call 0x00084D10 */

loc_00088053: ;
    goto loc_0008805C;

loc_00088055: ;
    ecx = esi;
    PUSH32(esp, 0x0008805Cu); RECOMP_ABI_CALL(0x00084DE0u, sub_00084DE0); /* call 0x00084DE0 */

loc_0008805C: ;
    eax = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0008832E; /* je: equal / zero */

loc_00088065: ;
    ecx = MEM32(esi + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7BA420); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008809D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7BA420)) */

loc_00088079: ;
    edx = MEM32(0x8EACE4);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x38);
    eax = esp;
    edi = esp + 0x28;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x00088090u); RECOMP_ABI_CALL(0x00085A60u, sub_00085A60); /* call 0x00085A60 */

loc_00088090: ;
    edx = MEM32(eax);
    eax = MEM32(0x8EACE4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x38) = edx;

loc_0008809D: ;
    eax = MEM32(0x8EACE4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x36);
    eax = MEM32(eax + 0x38);
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    PUSH32(esp, 0x000880C4u); RECOMP_ABI_CALL(0x00018F03u, sub_00018F03); /* call 0x00018F03 */

loc_000880C4: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    ecx = MEM32(0x8EACE4);
    MEM16(ecx + 0x36) = LO16(eax);
    edx = MEM32(0x8E8F84);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000880EBu); RECOMP_ABI_CALL(0x00031FE4u, sub_00031FE4); /* call 0x00031FE4 */

loc_000880EB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000882BA; /* jne: not equal / not zero */

loc_000880F4: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9324)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    PUSH32(esp, 0x454);
    PUSH32(esp, 0x7BA278);
    PUSH32(esp, 0x3E8);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008811Eu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0008811E: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AB1DC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AD340); /* mulss */
    eax = MEM32(0x8EACE4);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = MEMF(0x8F95EC); /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008816D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x8F95EC)) */

loc_00088160: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_0008816D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00088174u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088171u); } /* indirect call */
    }

loc_00088174: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_00088194; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008818C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00088194: ;
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x30); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x897558); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_push(MEMF(esp + 0x84)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000881FB; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000881F6: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00088217; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000881FB: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00088206; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00088200: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00088217;

loc_00088206: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00088217; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00088213: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00088217: ;
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00088224u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088221u); } /* indirect call */
    }

loc_00088224: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00088278; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00088235: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00088244u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00088244: ;
    esi = eax;
    eax = MEM32(0x8EACE4);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00088259u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00088259: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000882BA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_00088265: ;
    edx = MEM32(0x8EACE4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(edx + 0x38) = xmm0.f[0]; /* movss */
    goto loc_000882BA;

loc_00088278: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00088287u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00088287: ;
    edx = MEM32(0x8EACE4);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x38;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008829Du); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0008829D: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esi); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000882BA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi)) */

loc_000882A9: ;
    ecx = MEM32(0x8EACE4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */

loc_000882BA: ;
    eax = MEM32(0x8EACE4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x36);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x38);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = ecx;
    ecx = esp;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx) = edx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    ecx = MEM32(0x8E8F84);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000882F4u); RECOMP_ABI_CALL(0x0001BAF5u, sub_0001BAF5); /* call 0x0001BAF5 */

loc_000882F4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088313; /* je: equal / zero */

loc_000882F9: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00088308u); RECOMP_ABI_CALL(0x00025E1Au, sub_00025E1A); /* call 0x00025E1A */

loc_00088308: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xF8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00088313: ;
    ecx = MEM32(0x8E8F84);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00088323u); RECOMP_ABI_CALL(0x00025E1Au, sub_00025E1A); /* call 0x00025E1A */

loc_00088323: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xF8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008832E: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0x8F0044;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(eax);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088349; /* je: equal / zero */

loc_00088345: ;
    ebp = ecx;
    goto loc_0008834B;

loc_00088349: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008834B: ;
    ecx = MEM32(0x8EACE4);
    ebx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088383; /* je: equal / zero */

loc_00088359: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088383; /* je: equal / zero */

loc_0008835E: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088376; /* je: equal / zero */

loc_00088367: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088376; /* je: equal / zero */

loc_0008836B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00088371u); RECOMP_ABI_CALL(0x0001579Fu, sub_0001579F); /* call 0x0001579F */

loc_00088371: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00088378;

loc_00088376: ;
    SET_LO8(eax, 1);

loc_00088378: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088383; /* je: equal / zero */

loc_0008837C: ;
    ebx = MEM32(ebx * 4 + 0x7BA298);

loc_00088383: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edx = MEM32(0x8EACE4);
    MEM32(edx + 0x30) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000883D9; /* je: equal / zero */

loc_00088390: ;
    ecx = MEM32(0x8E99DC);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0008839Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008839Cu); } /* indirect call */
    }

loc_0008839F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000883D9; /* je: equal / zero */

loc_000883A3: ;
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000883B8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000883B3: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000883BD;

loc_000883B8: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_000883BD: ;
    xmm1 = XMM_SCALAR(MEMF(0x7BA140)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000883D9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000883CA: ;
    ecx = ebp;
    PUSH32(esp, 0x000883D1u); RECOMP_ABI_CALL(0x0002C0C1u, sub_0002C0C1); /* call 0x0002C0C1 */

loc_000883D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00088B55; /* jne: not equal / not zero */

loc_000883D9: ;
    edx = MEM32(0x8EACE4);
    _fa = (uint32_t)(MEM32(edx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x30), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000883F7; /* jne: not equal / not zero */

loc_000883E5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000883EBu); RECOMP_ABI_CALL(0x00020CD0u, sub_00020CD0); /* call 0x00020CD0 */

loc_000883EB: ;
    ecx = MEM32(0x8EACE4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x30) = eax;

loc_000883F7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7ABD7C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00088414; /* je: equal / zero */

loc_00088409: ;
    ecx = ebp;
    PUSH32(esp, 0x00088410u); RECOMP_ABI_CALL(0x00029182u, sub_00029182); /* call 0x00029182 */

loc_00088410: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088422; /* je: equal / zero */

loc_00088414: ;
    xmm0 = XMM_SCALAR(MEMF(0x7BA41C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00088422: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(0x8EACE4);
    ecx = MEM32(eax + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008843Au); RECOMP_ABI_CALL(0x00030586u, sub_00030586); /* call 0x00030586 */

loc_0008843A: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00088444u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088441u); } /* indirect call */
    }

loc_00088444: ;
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(0x8E8F84);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(edx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    MEM32(esp + 0x40) = ecx;
    edx = MEM32(eax + 4);
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x4C); /* addss */
    MEM32(esp + 0x44) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x48) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000884C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000884BEu); } /* indirect call */
    }

loc_000884C1: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0x20);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    edx = MEM32(esi);
    ecx = esi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00088502; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000884E4: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000884E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000884E4u); } /* indirect call */
    }

loc_000884E7: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0x20);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    goto loc_00088525;

loc_00088502: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00088505u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088502u); } /* indirect call */
    }

loc_00088505: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0x20);
    eax = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x38); /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00088525: ;
    xmm2 = XMM_SCALAR(MEMF(0x7ABD78)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x7BA418); /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000885D8; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00088544: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00088554; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_0008854F: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0008855B;

loc_00088554: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_0008855B: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000885D8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00088560: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    ecx = MEM32(esp + 0x64);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    edx = MEM32(esp + 0x68);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x6C);
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;
    if ((_fca >= _fcb)) goto loc_000885CB; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000885C3: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_000885CB: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7BA16C); /* mulss */
    goto loc_00088A99;

loc_000885D8: ;
    ecx = MEM32(0x8EACE4);
    eax = MEM32(ecx + 0x28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000885ED; /* je: equal / zero */

loc_000885E4: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000885ED; /* je: equal / zero */

loc_000885E9: ;
    PUSH32(esp, 7);
    goto loc_000885EF;

loc_000885ED: ;
    PUSH32(esp, 5);

loc_000885EF: ;
    ecx = esi;
    PUSH32(esp, 0x000885F6u); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_000885F6: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x42400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00088615u); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_00088615: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00088635; /* jne: not equal / not zero */

loc_00088621: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB1D0); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00088635: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xCC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x40); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x44); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x48); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x45340000);
    PUSH32(esp, 0x44700000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000886AAu); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_000886AA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    xmm1 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x124)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000886E1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000886CB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7BA16C); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_000886F1;

loc_000886E1: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_000886F1: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0xB4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    edx = ecx;
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = ecx;
    PUSH32(esp, 0x0008871Cu); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_0008871C: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x24) / fp_top()); /* fdivr dword ptr [esp + 0x24] */
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x6C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x42340000);
    edx = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM32(esp + 0x44) = ecx;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00088747u); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_00088747: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    eax = MEM32(esi + 0x20);
    ecx = eax + 0x30;
    ebx = MEM32(ecx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp;
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = ebx;
    MEM32(edx + 8) = ecx;
    edx = MEM32(eax + 0x60);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = esp + 0xAC;
    PUSH32(esp, 0x0008877Eu); RECOMP_ABI_CALL(0x0002AAB9u, sub_0002AAB9); /* call 0x0002AAB9 */

loc_0008877E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0xC4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0xC8); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC0); /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x9C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xAC)); /* movss */
    MEMF(esp + 0x58) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x5C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xBC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    eax = esp + 0x64;
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    MEMF(esp + 0x64) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x00088858u); RECOMP_ABI_CALL(0x0001262Bu, sub_0001262B); /* call 0x0001262B */

loc_00088858: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0xBF19999Au);
    ecx = MEM32(esp + 0x7C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00088876u); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_00088876: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8E9304;
    PUSH32(esp, 0x00088887u); RECOMP_ABI_CALL(0x00022BEDu, sub_00022BED); /* call 0x00022BED */

loc_00088887: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x1C)); /* fdiv dword ptr [esp + 0x1c] */
    PUSH32(esp, 0x2710);
    PUSH32(esp, 0x40490FDB);
    PUSH32(esp, 0xC0490FDBu);
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000888A9u); RECOMP_ABI_CALL(0x00024065u, sub_00024065); /* call 0x00024065 */

loc_000888A9: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00088919; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000888F1: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x44B24000);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00088908u); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_00088908: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_00088919: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xCC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x40); /* subss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x48); /* subss */
    edx = esp + 0x88;
    PUSH32(esp, edx);
    ecx = esp + 0x74;
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008898Au); RECOMP_ABI_CALL(0x0001262Bu, sub_0001262B); /* call 0x0001262B */

loc_0008898A: ;
    eax = MEM32(esp + 0x7C);
    ecx = MEM32(esp + 0x80);
    edx = MEM32(esp + 0x84);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000889C1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000889B9: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_000889CB;

loc_000889C1: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_000889CB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB82C); /* mulss */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000889F8u); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_000889F8: ;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00088A18; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00088A10: ;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    goto loc_00088A22;

loc_00088A18: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00088A22: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB82C); /* mulss */
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088A4Fu); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_00088A4F: ;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    ecx = esp + 0xE0;
    PUSH32(esp, 0x00088A6Fu); RECOMP_ABI_CALL(0x000232DCu, sub_000232DC); /* call 0x000232DC */

loc_00088A6F: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x50)); /* fadd dword ptr [esp + 0x50] */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x4C); /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */

loc_00088A99: ;
    eax = MEM32(esi);
    ecx = esi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00088AA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088AA3u); } /* indirect call */
    }

loc_00088AA6: ;
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    edx = MEM32(0x8E8F84);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00088AC4u); RECOMP_ABI_CALL(0x00031FE4u, sub_00031FE4); /* call 0x00031FE4 */

loc_00088AC4: ;
    eax = MEM32(0x8EACE4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x8E8F84);
    edx = esp + 0x38;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00088AE7u); RECOMP_ABI_CALL(0x0002041Fu, sub_0002041F); /* call 0x0002041F */

loc_00088AE7: ;
    ecx = MEM32(0x8EACE4);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00088AFCu); RECOMP_ABI_CALL(0x0002DE35u, sub_0002DE35); /* call 0x0002DE35 */

loc_00088AFC: ;
    edx = MEM32(0x8E8F84);
    ecx = MEM32(edx + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x00088B0Fu); RECOMP_ABI_CALL(0x00025E1Au, sub_00025E1A); /* call 0x00025E1A */

loc_00088B0F: ;
    eax = MEM32(0x8EACE4);
    MEM8(eax + 4) = 1;
    ecx = MEM32(0x8EACE4);
    edx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    eax = MEM32(esp + 0x38);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esp + 0x3C);
    MEM32(ecx + 8) = edx;
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
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088B55; /* je: equal / zero */

loc_00088B4C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088B52u); RECOMP_ABI_CALL(0x0001B429u, sub_0001B429); /* call 0x0001B429 */

loc_00088B52: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00088B55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xF8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00088E30
 * Original: 0x00088E30 - 0x00088F5B (299 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088E30(void)
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

loc_00088E30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(edi + 0x400));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088F4F; /* je: equal / zero */

loc_00088E44: ;
    PUSH32(esp, 0x62A);
    PUSH32(esp, 0x7BA278);
    PUSH32(esp, 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00088E57u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00088E57: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00088E9C; /* ja: above (unsigned >) */

loc_00088E5F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x88F5C); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00088E66u) goto loc_00088E66;
    if (_jt == 0x00088E6Du) goto loc_00088E6D;
    if (_jt == 0x00088E74u) goto loc_00088E74;
    if (_jt == 0x00088E7Bu) goto loc_00088E7B;
    if (_jt == 0x00088E82u) goto loc_00088E82;
    if (_jt == 0x00088E89u) goto loc_00088E89;
    if (_jt == 0x00088E90u) goto loc_00088E90;
    if (_jt == 0x00088E97u) goto loc_00088E97;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00088E66: ;
    esi = 2;
    goto loc_00088E9C;

loc_00088E6D: ;
    esi = 0x20;
    goto loc_00088E9C;

loc_00088E74: ;
    esi = 1;
    goto loc_00088E9C;

loc_00088E7B: ;
    esi = 0x10;
    goto loc_00088E9C;

loc_00088E82: ;
    esi = 4;
    goto loc_00088E9C;

loc_00088E89: ;
    esi = 0x40;
    goto loc_00088E9C;

loc_00088E90: ;
    esi = 8;
    goto loc_00088E9C;

loc_00088E97: ;
    esi = 0x80;

loc_00088E9C: ;
    PUSH32(esp, 0x648);
    PUSH32(esp, 0x7BA278);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00088EADu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00088EAD: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F95F4)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00088ED5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00088ED0: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00088F00; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00088ED5: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00088EE0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00088EDA: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00088F00;

loc_00088EE0: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00088EF2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00088EE9: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_00088F00;

loc_00088EF2: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_00088F00: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00088F0Eu); RECOMP_ABI_CALL(0x0001C491u, sub_0001C491); /* call 0x0001C491 */

loc_00088F0E: ;
    ecx = eax;
    PUSH32(esp, 0x00088F15u); RECOMP_ABI_CALL(0x000150F1u, sub_000150F1); /* call 0x000150F1 */

loc_00088F15: ;
    xmm0 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00088F2A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00088F25: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00088F3A;

loc_00088F2A: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00088F3A; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00088F36: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_00088F3A: ;
    MEM32(edi + 0x3E4) = 1;
    MEMF(edi + 0x3E8) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00088F4F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00088F55u); RECOMP_ABI_CALL(0x00034A19u, sub_00034A19); /* call 0x00034A19 */

loc_00088F55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00088FD0
 * Original: 0x00088FD0 - 0x00089306 (822 bytes, 222 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088FD0(void)
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

loc_00088FD0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(esi + 0x20);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    PUSH32(esp, edi);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0x20);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7BA188); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008904E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7BA188)) */

loc_0008904A: ;
    SET_LO8(eax, 1);
    goto loc_00089050;

loc_0008904E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00089050: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = ZX8(LO8(eax));
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = 0x8EB410;
    PUSH32(esp, 0x0008907Eu); RECOMP_ABI_CALL(0x0002C4F4u, sub_0002C4F4); /* call 0x0002C4F4 */

loc_0008907E: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000890AE; /* je: equal / zero */

loc_00089084: ;
    eax = MEM32(esi + 0x3D8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089098; /* jne: not equal / not zero */

loc_00089092: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000890AE; /* je: equal / zero */

loc_00089098: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E99A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7D0); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_000890AE: ;
    ecx = 0x8EACF8;
    PUSH32(esp, 0x000890B8u); RECOMP_ABI_CALL(0x00033970u, sub_00033970); /* call 0x00033970 */

loc_000890B8: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 0x8EACF8;
    PUSH32(esp, 0x000890CDu); RECOMP_ABI_CALL(0x000344BAu, sub_000344BA); /* call 0x000344BA */

loc_000890CD: ;
    ecx = 0x8EACF8;
    PUSH32(esp, 0x000890D7u); RECOMP_ABI_CALL(0x00019AD4u, sub_00019AD4); /* call 0x00019AD4 */

loc_000890D7: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = 0x8EACF8;
    PUSH32(esp, 0x000890EBu); RECOMP_ABI_CALL(0x0001F5C9u, sub_0001F5C9); /* call 0x0001F5C9 */

loc_000890EB: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x1C); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x8EAD0C); /* divss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8EACFC); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x14); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x8EAD10); /* divss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8EAD00); /* addss */
    ecx = esi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00089145u); RECOMP_ABI_CALL(0x000869B0u, sub_000869B0); /* call 0x000869B0 */

loc_00089145: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x30);
    ebp = MEM32(esp + 0x28);
    if (CMP_EQ(_fa, _fb)) goto loc_00089189; /* je: equal / zero */

loc_00089155: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    eax = esp + 0x40;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x0008916Du); RECOMP_ABI_CALL(0x00085640u, sub_00085640); /* call 0x00085640 */

loc_0008916D: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    goto loc_000891E0;

loc_00089189: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x34);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    eax = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = ecx;

loc_000891E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD340)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008922E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00089224: ;
    edx = MEM32(esp + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    goto loc_0008926B;

loc_0008922E: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008924C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00089247: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008926B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008924C: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00089257; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00089251: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0008926B;

loc_00089257: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0008926B; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00089267: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0008926B: ;
    eax = MEM32(0x8EACE0);
    ecx = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebp;
    MEM32(eax + 4) = esi;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEM32(eax + 8) = edi;
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00089293; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008928E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000892AF; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00089293: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008929E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00089298: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000892AF;

loc_0008929E: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000892AF; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000892AB: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000892AF: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000892C4u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_000892C4: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8F95FC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000892F0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8F95FC)) */

loc_000892D4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000892F0; /* jne: not equal / not zero */

loc_000892D8: ;
    ecx = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x44);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000892F0: ;
    eax = MEM32(esp + 0x44);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_000893E0
 * Original: 0x000893E0 - 0x00089419 (57 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000893E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000893E0: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000893E7u); RECOMP_ABI_CALL(0x0001C3DDu, sub_0001C3DD); /* call 0x0001C3DD */

loc_000893E7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000893FC; /* je: equal / zero */

loc_000893EE: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000893F6u); RECOMP_ABI_CALL(0x0002FD20u, sub_0002FD20); /* call 0x0002FD20 */

loc_000893F6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    esp += 4; return; /* ret */

loc_000893FC: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x00089413u); RECOMP_ABI_CALL(0x00088FD0u, sub_00088FD0); /* call 0x00088FD0 */

loc_00089413: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00089430
 * Original: 0x00089430 - 0x0008968D (605 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089430(void)
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

loc_00089430: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x4C); /* cvtsi2ss */
    eax = MEM32(esi + 0x20);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x30); /* addss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x4C); /* mulss */
    ecx = MEM32(esi + 0x20);
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x38); /* addss */
    ebx = MEM32(esp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(0x7BA430)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7B8DF8)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x10);
    eax = ecx;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    ebp = MEM32(esp + 0x4C);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BA42C)); /* movss */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BA428)); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7B047C)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BA424)); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00089511u); RECOMP_ABI_CALL(0x0001195Bu, sub_0001195B); /* call 0x0001195B */

loc_00089511: ;
    edx = MEM32(esp + 0x2C);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x00089527u); RECOMP_ABI_CALL(0x0001195Bu, sub_0001195B); /* call 0x0001195B */

loc_00089527: ;
    xmm3 = XMM_SCALAR(MEMF(0x7BA140)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    edx = eax;
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008955F; /* jne: not equal / not zero */

loc_00089545: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008954F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0008954A: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00089556;

loc_0008954F: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00089556: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00089684; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_0008955F: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000895A5; /* je: equal / zero */

loc_00089568: ;
    ecx = MEM32(esp + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089592; /* je: equal / zero */

loc_00089570: ;
    edi = MEM32(esi + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00089592; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00089580: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089592; /* jne: not equal / not zero */

loc_00089585: ;
    ecx = MEM32(ecx + 0x20);
    _fca = xmm3.f[0]; _fcb = MEMF(ecx + 0x38); /* comiss */
    if ((_fca >= _fcb)) goto loc_00089684; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs MEMF(ecx + 0x38)) */

loc_00089592: ;
    SET_LO8(ecx, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000895EE; /* jge: greater or equal (signed >=) */

loc_0008959C: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000895A5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089684; /* je: equal / zero */

loc_000895AE: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000895DF; /* je: equal / zero */

loc_000895B6: ;
    ecx = MEM32(esi + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000895DF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000895C6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000895DF; /* jne: not equal / not zero */

loc_000895CA: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7BA2EC); /* comiss */
    if ((_fca >= _fcb)) goto loc_00089684; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7BA2EC)) */

loc_000895DF: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008959C; /* jl: less (signed <) */

loc_000895E9: ;
    eax = 0xFFFFFFFFu;

loc_000895EE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00089681u); RECOMP_ABI_CALL(0x00086FB0u, sub_00086FB0); /* call 0x00086FB0 */

loc_00089681: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00089684: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00089730
 * Original: 0x00089730 - 0x00089A26 (758 bytes, 216 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089730(void)
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

loc_00089730: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8EACE0);
    xmm1 = XMM_SCALAR(MEMF(0x8E9984)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8EFCC4); /* mulss */
    PUSH32(esp, ebx);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9968)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00089797; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008978A: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089797; /* jne: not equal / not zero */

loc_00089791: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00089797: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000897AB; /* jne: not equal / not zero */

loc_0008979D: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E99A8)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_000897AB: ;
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ebx = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_0008982D; /* je: equal / zero */

loc_000897B6: ;
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = eax + 0x2C;
    if (CMP_EQ(_fa, _fb)) goto loc_0008982D; /* je: equal / zero */

loc_000897C0: ;
    edx = MEM32(ecx + 0x1D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000897CCu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000897CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089822; /* je: equal / zero */

loc_000897D3: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089822; /* je: equal / zero */

loc_000897D9: ;
    eax = MEM32(0x8EACE0);
    edi = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000897E8u); RECOMP_ABI_CALL(0x0001C3DDu, sub_0001C3DD); /* call 0x0001C3DD */

loc_000897E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089800; /* je: equal / zero */

loc_000897EF: ;
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000897FBu); RECOMP_ABI_CALL(0x0002FD20u, sub_0002FD20); /* call 0x0002FD20 */

loc_000897FB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00089816;

loc_00089800: ;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00089813u); RECOMP_ABI_CALL(0x00088FD0u, sub_00088FD0); /* call 0x00088FD0 */

loc_00089813: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00089816: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00089822: ;
    eax = MEM32(0x8EACE0);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_0008982D: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000898C8; /* jne: not equal / not zero */

loc_00089839: ;
    ecx = MEM32(0x8E8F84);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00089849u); RECOMP_ABI_CALL(0x0002335Eu, sub_0002335E); /* call 0x0002335E */

loc_00089849: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7BA190); /* mulss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x8E99B4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AA820); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x7BA18C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008989B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00089895: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0008989B: ;
    edx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0x000898B9u); RECOMP_ABI_CALL(0x0001BAF5u, sub_0001BAF5); /* call 0x0001BAF5 */

loc_000898B9: ;
    eax = ebp;
    PUSH32(esp, 0x000898C0u); RECOMP_ABI_CALL(0x00085770u, sub_00085770); /* call 0x00085770 */

loc_000898C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000898C8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    PUSH32(esp, ecx);
    eax = esp;
    MEMF(eax) = xmm2.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0008996C; /* jne: not equal / not zero */

loc_000898D8: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000898E6u); RECOMP_ABI_CALL(0x00018184u, sub_00018184); /* call 0x00018184 */

loc_000898E6: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(0x8E996C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x8E9968); /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 4);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x8E9934)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8E994C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7ABE28); /* mulss */
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(ecx + 8);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    edx = esp + 0x20;
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008994Eu); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_0008994E: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008995Du); RECOMP_ABI_CALL(0x00025E1Au, sub_00025E1A); /* call 0x00025E1A */

loc_0008995D: ;
    eax = ebp;
    PUSH32(esp, 0x00089964u); RECOMP_ABI_CALL(0x00085770u, sub_00085770); /* call 0x00085770 */

loc_00089964: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008996C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    ecx = MEM32(0x8E8F84);
    ecx = MEM32(ecx + 0x20);
    if (CMP_NE(_fa, _fb)) goto loc_000899DC; /* jne: not equal / not zero */

loc_0008997A: ;
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0x00089984u); RECOMP_ABI_CALL(0x00018184u, sub_00018184); /* call 0x00018184 */

loc_00089984: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7B0478)); /* movss */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(ecx + 8);
    edx = esp + 0x20;
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000899BEu); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_000899BE: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000899CDu); RECOMP_ABI_CALL(0x00025E1Au, sub_00025E1A); /* call 0x00025E1A */

loc_000899CD: ;
    eax = ebp;
    PUSH32(esp, 0x000899D4u); RECOMP_ABI_CALL(0x00085770u, sub_00085770); /* call 0x00085770 */

loc_000899D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000899DC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000899E2u); RECOMP_ABI_CALL(0x00018184u, sub_00018184); /* call 0x00018184 */

loc_000899E2: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(ecx + 8);
    edx = esp + 0x20;
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00089A17u); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_00089A17: ;
    eax = ebp;
    PUSH32(esp, 0x00089A1Eu); RECOMP_ABI_CALL(0x00085770u, sub_00085770); /* call 0x00085770 */

loc_00089A1E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00089AF0
 * Original: 0x00089AF0 - 0x00089B57 (103 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089AF0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    SET_LO8(edx, MEM8(ecx + 0x39));
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x34);
    SET_LO8(ecx, MEM8(eax + 0x39));
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM8(esp + 0x25) = LO8(edx);
    edx = MEM32(esp);
    MEM8(esp + 0x24) = LO8(ecx);
    ecx = esp + 8;
    MEM16(esp + 0x14) = 0x23;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 8) = 0x7BA370;
    PUSH32(esp, 0x00089B53u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00089B53: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00089B70
 * Original: 0x00089B70 - 0x00089D4C (476 bytes, 123 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089B70(void)
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

loc_00089B70: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x5C));
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00089C26; /* je: equal / zero */

loc_00089B81: ;
    edx = MEM32(eax + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7BA148); /* comiss */
    if ((_fca > _fcb)) goto loc_00089C26; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7BA148)) */

loc_00089B99: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00089BA7; /* je: equal / zero */

loc_00089B9E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00089D47; /* jne: not equal / not zero */

loc_00089BA7: ;
    ecx = MEM32(0x8EACE4);
    SET_LO16(ecx, MEM16(ecx + 0x10));
    xmm0 = XMM_SCALAR(MEMF(0x7ABD70)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x1C); /* comiss */
    MEM16(esp + 0x4C) = LO16(ecx);
    MEM32(esp + 0x48) = ebx;
    ecx = esp + 0x28;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00089BF9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x1C)) */

loc_00089BCC: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = edx;
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(eax + 0x39));
    MEM16(esp + 0x34) = 0x15;
    MEM16(esp + 0x44) = LO16(edx);
    MEM32(esp + 0x28) = 0x7BA3B0;
    PUSH32(esp, 0x00089BF4u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00089BF4: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x5C)) >> 32) & 1);
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089BF9: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = edx;
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(eax + 0x39));
    MEM16(esp + 0x34) = 0x16;
    MEM16(esp + 0x44) = LO16(edx);
    MEM32(esp + 0x28) = 0x7BA390;
    PUSH32(esp, 0x00089C21u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00089C21: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x5C)) >> 32) & 1);
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00089C26: ;
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0x20);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00089C73; /* jne: not equal / not zero */

loc_00089C6E: ;
    _fa = (uint32_t)(MEM32(eax + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x5C), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00089C75; /* je: equal / zero */

loc_00089C73: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00089C75: ;
    edx = MEM32(0x8EACE4);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7BA2E0); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x18)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00089CB6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7BA2E0)) */

loc_00089C8E: ;
    xmm2 = XMM_SCALAR(MEMF(0x7ABD78)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00089CB6; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00089C9B: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00089CB6; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(0x7AA840)) */

loc_00089CA4: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB1DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM8(esp + 4) = 1;
    if ((_fca > _fcb)) goto loc_00089CBB; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00089CB6: ;
    MEM8(esp + 4) = 0;

loc_00089CBB: ;
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(edx + 0x10));
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    PUSH32(esp, 0x00089CCAu); RECOMP_ABI_CALL(0x000121B2u, sub_000121B2); /* call 0x000121B2 */

loc_00089CCA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x00089CDCu); RECOMP_ABI_CALL(0x0001EB51u, sub_0001EB51); /* call 0x0001EB51 */

loc_00089CDC: ;
    ecx = MEM32(0x8EACE4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x00089CEEu); RECOMP_ABI_CALL(0x0003264Cu, sub_0003264C); /* call 0x0003264C */

loc_00089CEE: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM8(esp + 0x1C) = LO8(eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x50;
    PUSH32(esp, 0x00089D17u); RECOMP_ABI_CALL(0x00011CF3u, sub_00011CF3); /* call 0x00011CF3 */

loc_00089D17: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x60) = ecx;
    ecx = esp + 0x30;
    MEM32(esp + 0x30) = 0x7BA310;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x5C) = eax;
    MEM16(esp + 0x64) = LO16(esi);
    PUSH32(esp, 0x00089D45u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00089D45: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00089D47: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x5C)) >> 32) & 1);
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00089DD0
 * Original: 0x00089DD0 - 0x00089E70 (160 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089DD0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    ecx = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00089DFDu); RECOMP_ABI_CALL(0x00031E5Eu, sub_00031E5E); /* call 0x00031E5E */

loc_00089DFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089E6B; /* jne: not equal / not zero */

loc_00089E01: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7BA274); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7BA270); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    ecx = MEM32(esp + 0x44);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x28);
    ecx = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x8EACE0);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), ecx (32-bit) */
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00089E62u); RECOMP_ABI_CALL(0x0001D512u, sub_0001D512); /* call 0x0001D512 */

loc_00089E62: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00089E6Bu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00089E6B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00089EA0
 * Original: 0x00089EA0 - 0x00089EDD (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089EA0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x24);
    SET_LO8(ecx, MEM8(eax + 0x39));
    SET_LO8(eax, MEM8(edx + 0x39));
    MEM8(esp + 0x1C) = LO8(ecx);
    ecx = esp;
    MEM16(esp + 0xC) = 0xA;
    MEM8(esp + 0x1D) = LO8(eax);
    MEM32(esp) = 0x7BA350;
    PUSH32(esp, 0x00089ED9u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00089ED9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00089EF0
 * Original: 0x00089EF0 - 0x00089F3A (74 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00089EF0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ebx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00089F38; /* ja: above (unsigned >) */

loc_00089EFB: ;
    ecx = ZX8(MEM8(ecx + 0x89F44));
    { uint32_t _jt = MEM32(ecx * 4 + 0x89F3C); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00089F09u) goto loc_00089F09;
    if (_jt == 0x00089F38u) goto loc_00089F38;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00089F09: ;
    ecx = MEM32(esp + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00089F2E; /* je: equal / zero */

loc_00089F10: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00089F22; /* je: equal / zero */

loc_00089F13: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00089F38; /* jne: not equal / not zero */

loc_00089F16: ;
    ecx = 3;
    PUSH32(esp, 0x00089F20u); RECOMP_ABI_CALL(0x00089B70u, sub_00089B70); /* call 0x00089B70 */

loc_00089F20: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00089F22: ;
    ecx = 2;
    PUSH32(esp, 0x00089F2Cu); RECOMP_ABI_CALL(0x00089B70u, sub_00089B70); /* call 0x00089B70 */

loc_00089F2C: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00089F2E: ;
    ecx = 1;
    PUSH32(esp, 0x00089F38u); RECOMP_ABI_CALL(0x00089B70u, sub_00089B70); /* call 0x00089B70 */

loc_00089F38: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00089F3A
 * Original: 0x00089F3A - 0x00089F60 (38 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089F3A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089F3A: ;
    edi = edi;
    MEM32(edi + -1623719928) = MEM32(edi + -1623719928) | ebx;
    _fa = (uint32_t)(MEM32(edi + -1623719928)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_00089F60
 * Original: 0x00089F60 - 0x0008A197 (567 bytes, 166 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00089F60: ;
    eax = MEM32(0x8EACE0);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM8(eax + 4) = 1;
    PUSH32(esp, 0x00089F79u); RECOMP_ABI_CALL(0x00089730u, sub_00089730); /* call 0x00089730 */

loc_00089F79: ;
    ecx = MEM32(0x895AB0);
    edx = MEM32(ecx);
    eax = MEM32(0x8EACE0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edx;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00089F9Cu); RECOMP_ABI_CALL(0x00031FE4u, sub_00031FE4); /* call 0x00031FE4 */

loc_00089F9C: ;
    ecx = esi;
    PUSH32(esp, 0x00089FA3u); RECOMP_ABI_CALL(0x0001AF38u, sub_0001AF38); /* call 0x0001AF38 */

loc_00089FA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00089FA9; /* jge: greater or equal (signed >=) */

loc_00089FA7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00089FA9: ;
    MEM32(esi + 0x2C) = eax;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x38) = LO8(eax);
    ecx = MEM32(0x8E8F84);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x20);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = 0x8B21B8;
    PUSH32(esp, 0x00089FD2u); RECOMP_ABI_CALL(0x00013B2Fu, sub_00013B2F); /* call 0x00013B2F */

loc_00089FD2: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10011);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x00089FEDu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_00089FED: ;
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ebp = 0xA;
    if (CMP_NE(_fa, _fb)) goto loc_0008A068; /* jne: not equal / not zero */

loc_00089FFD: ;
    eax = MEM32(esi + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A010; /* je: equal / zero */

loc_0008A007: ;
    eax = eax ^ 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x42C) = eax;

loc_0008A010: ;
    eax = MEM32(esi + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A023; /* je: equal / zero */

loc_0008A01A: ;
    eax = eax ^ 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x42C) = eax;

loc_0008A023: ;
    eax = MEM32(esi + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A036; /* je: equal / zero */

loc_0008A02D: ;
    eax = eax ^ 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x42C) = eax;

loc_0008A036: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0008A040;

    /* nop */

loc_0008A040: ;
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
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008A056u); RECOMP_ABI_CALL(0x00020E7Eu, sub_00020E7E); /* call 0x00020E7E */

loc_0008A056: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A062; /* je: equal / zero */

loc_0008A05A: ;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008A062; /* jge: greater or equal (signed >=) */

loc_0008A05F: ;
    MEM32(eax + 0x2C) = ebp;

loc_0008A062: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008A040; /* jl: less (signed <) */

loc_0008A068: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x0008A06Fu); RECOMP_ABI_CALL(0x0002E678u, sub_0002E678); /* call 0x0002E678 */

loc_0008A06F: ;
    eax = MEM32(0x8EACE0);
    SET_LO8(ecx, MEM8(eax + 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A171; /* je: equal / zero */

loc_0008A082: ;
    edi = eax + 0x2C;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A171; /* je: equal / zero */

loc_0008A08F: ;
    ecx = MEM32(eax + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008A09Bu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0008A09B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A171; /* je: equal / zero */

loc_0008A0A6: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A171; /* je: equal / zero */

loc_0008A0B0: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    SET_LO8(ecx, MEM8(esi + 0x39));
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    SET_LO8(eax, MEM8(edi + 0x39));
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x39) = LO8(eax);
    eax = MEM32(esp + 0x18);
    MEM8(esp + 0x38) = LO8(ecx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM16(esp + 0x28) = 0x23;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x1C) = 0x7BA370;
    PUSH32(esp, 0x0008A115u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0008A115: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x0008A121u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0008A121: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A132; /* je: equal / zero */

loc_0008A128: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0008A130u); RECOMP_ABI_CALL(0x00028296u, sub_00028296); /* call 0x00028296 */

loc_0008A130: ;
    goto loc_0008A134;

loc_0008A132: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008A134: ;
    ecx = MEM32(edi + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008A141u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0008A141: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x0008A14Bu); RECOMP_ABI_CALL(0x000284F3u, sub_000284F3); /* call 0x000284F3 */

loc_0008A14B: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    eax = MEM32(edx * 4 + 0x8F00F8);
    MEM32(eax + 0x4C) = edi;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    edx = 1;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 5);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008A16Cu); RECOMP_ABI_CALL(0x00013AADu, sub_00013AAD); /* call 0x00013AAD */

loc_0008A16C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008A17D;

loc_0008A171: ;
    eax = MEM32(0x8E8F84);
    MEM32(eax + 0x2C) = 5;

loc_0008A17D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008A185u); RECOMP_ABI_CALL(0x000164F6u, sub_000164F6); /* call 0x000164F6 */

loc_0008A185: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0008A18Du); RECOMP_ABI_CALL(0x000164F6u, sub_000164F6); /* call 0x000164F6 */

loc_0008A18D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008A230
 * Original: 0x0008A230 - 0x0008A2E4 (180 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A230(void)
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

loc_0008A230: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8EACE0);
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0008A2C8; /* je: equal / zero */

loc_0008A246: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0008A24Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A24Bu); } /* indirect call */
    }

loc_0008A24E: ;
    eax = MEM32(0x8EACE0);
    ecx = MEM32(eax + 0x20);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 5);
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008A2C8; /* jp: parity */

loc_0008A26C: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    ecx = MEM32(0x8E8F84);
    _fa = (uint32_t)(MEM32(ecx + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xA8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008A289; /* jne: not equal / not zero */

loc_0008A27E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008A284u); RECOMP_ABI_CALL(0x0002AEABu, sub_0002AEAB); /* call 0x0002AEAB */

loc_0008A284: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008A2C8;

loc_0008A289: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008A2C8; /* jne: not equal / not zero */

loc_0008A28F: ;
    eax = MEM32(esi + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0008A2A2; /* je: equal / zero */

loc_0008A299: ;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x42C) = eax;

loc_0008A2A2: ;
    eax = MEM32(esi + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0008A2B5; /* je: equal / zero */

loc_0008A2AC: ;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x42C) = eax;

loc_0008A2B5: ;
    eax = MEM32(esi + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0008A2C8; /* je: equal / zero */

loc_0008A2BF: ;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x42C) = eax;

loc_0008A2C8: ;
    PUSH32(esp, 0x40800000);
    ecx = esi;
    PUSH32(esp, 0x0008A2D4u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0008A2D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A2E1; /* je: equal / zero */

loc_0008A2D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008A2DEu); RECOMP_ABI_CALL(0x00035342u, sub_00035342); /* call 0x00035342 */

loc_0008A2DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008A2E1: ;
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
 * sub_0008A320
 * Original: 0x0008A320 - 0x0008A3EF (207 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008A320: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0008A356; /* jne: not equal / not zero */

loc_0008A330: ;
    eax = MEM32(esi + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A343; /* je: equal / zero */

loc_0008A33A: ;
    eax = eax ^ 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x42C) = eax;

loc_0008A343: ;
    eax = MEM32(esi + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A356; /* je: equal / zero */

loc_0008A34D: ;
    eax = eax ^ 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x42C) = eax;

loc_0008A356: ;
    ebp = MEM32(esp + 0x34);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A39E; /* jne: not equal / not zero */

loc_0008A35F: ;
    _fa = (uint32_t)(MEM32(0x8EFCBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFCBC), 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0008A39E; /* jg: greater (signed >) */

loc_0008A368: ;
    eax = MEM32(0x8E9394);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A39E; /* je: equal / zero */

loc_0008A371: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A39E; /* je: equal / zero */

loc_0008A375: ;
    SET_LO8(eax, MEM8(eax + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x30) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A39E; /* jne: not equal / not zero */

loc_0008A37D: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0008A38Bu); RECOMP_ABI_CALL(0x00026446u, sub_00026446); /* call 0x00026446 */

loc_0008A38B: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0008A394u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0008A394: ;
    edx = MEM32(0x8EACE4);
    MEM8(edx + 0x20) = 1;

loc_0008A39E: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(0x8EACE4);
    edi = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    MEM32(eax + 0x28) = edi;
    PUSH32(esp, edx);
    eax = edi;
    ecx = ebp;
    edx = esi;
    PUSH32(esp, 0x0008A3BFu); RECOMP_ABI_CALL(0x00088020u, sub_00088020); /* call 0x00088020 */

loc_0008A3BF: ;
    eax = MEM32(0x895AB0);
    ecx = MEM32(eax);
    edx = MEM32(0x8EACE4);
    MEM32(edx + 8) = ecx;
    eax = MEM32(0x8E8F84);
    MEM32(eax + 0x2C) = 5;
    PUSH32(esp, ebp);
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0x0008A3E5u); RECOMP_ABI_CALL(0x00089EF0u, sub_00089EF0); /* call 0x00089EF0 */

loc_0008A3E5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008A430
 * Original: 0x0008A430 - 0x0008A686 (598 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008A430: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8EACE4);
    MEM32(eax + 0x30) = 0xFFFFFFFFu;
    ecx = MEM32(0x8EACE4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = esi;
    edx = MEM32(esi + 0x3E4);
    eax = MEM32(0x8EACE4);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(esi + 0x3E8);
    edx = MEM32(0x8EACE4);
    MEM32(edx + 0x2C) = ecx;
    eax = MEM32(0x8EACE4);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A4BB; /* jne: not equal / not zero */

loc_0008A473: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008A5DD; /* jl: less (signed <) */

loc_0008A481: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = MEM32(ecx * 4 + 0x8F6A6C);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A5DD; /* je: equal / zero */

loc_0008A495: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3E8)); /* movss */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008A4ADu); RECOMP_ABI_CALL(0x000293ADu, sub_000293AD); /* call 0x000293AD */

loc_0008A4AD: ;
    ecx = MEM32(0x8EACE4);
    MEM32(ecx + 0x30) = eax;
    goto loc_0008A5DA;

loc_0008A4BB: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A4D0u); RECOMP_ABI_CALL(0x0001DFC1u, sub_0001DFC1); /* call 0x0001DFC1 */

loc_0008A4D0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8F9614); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008A5AA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8F9614)) */

loc_0008A4E3: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A5AA; /* je: equal / zero */

loc_0008A4ED: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008A4F7u); RECOMP_ABI_CALL(0x000293ADu, sub_000293AD); /* call 0x000293AD */

loc_0008A4F7: ;
    edx = MEM32(0x8EACE4);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(edx + 0x30) = eax;
    eax = MEM32(0x8EACE4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    eax = esp;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008A527; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008A522: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0008A537;

loc_0008A527: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0008A537; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0008A533: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_0008A537: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008A548u); RECOMP_ABI_CALL(0x0001A542u, sub_0001A542); /* call 0x0001A542 */

loc_0008A548: ;
    xmm0 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, ecx);
    eax = esp;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008A560; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008A55B: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0008A570;

loc_0008A560: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0008A570; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0008A56C: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_0008A570: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0008A581u); RECOMP_ABI_CALL(0x0001A542u, sub_0001A542); /* call 0x0001A542 */

loc_0008A581: ;
    ecx = esi;
    MEM8(esi + 0x38) = 5;
    PUSH32(esp, 0x0008A58Cu); RECOMP_ABI_CALL(0x0001481Du, sub_0001481D); /* call 0x0001481D */

loc_0008A58C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A594; /* je: equal / zero */

loc_0008A590: ;
    MEM8(eax + 0x38) = 5;

loc_0008A594: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E98A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0008A5DD;

loc_0008A5AA: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3E8)); /* movss */
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008A5C2u); RECOMP_ABI_CALL(0x000293ADu, sub_000293AD); /* call 0x000293AD */

loc_0008A5C2: ;
    edx = MEM32(0x8EACE4);
    MEM32(edx + 0x30) = eax;
    eax = MEM32(esi + 0x3E8);
    ecx = MEM32(0x8EACE4);
    MEM32(ecx + 0x38) = eax;

loc_0008A5DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008A5DD: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(0x8EACE4);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008A5FCu); RECOMP_ABI_CALL(0x000350D6u, sub_000350D6); /* call 0x000350D6 */

loc_0008A5FC: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008A642; /* jl: less (signed <) */

loc_0008A609: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008A617u); RECOMP_ABI_CALL(0x00016F50u, sub_00016F50); /* call 0x00016F50 */

loc_0008A617: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AEBC8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7BA16C); /* mulss */
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A63Fu); RECOMP_ABI_CALL(0x00032D31u, sub_00032D31); /* call 0x00032D31 */

loc_0008A63F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008A642: ;
    xmm0 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008A657; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008A652: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0008A667;

loc_0008A657: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0008A667; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0008A663: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_0008A667: ;
    MEM32(esi + 0x3E4) = 0;
    MEMF(esi + 0x3E8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x54);
    MEM32(ecx + 0xC) = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008A720
 * Original: 0x0008A720 - 0x0008A825 (261 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A720: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 0x8EB410;
    PUSH32(esp, 0x0008A73Cu); RECOMP_ABI_CALL(0x0001261Cu, sub_0001261C); /* call 0x0001261C */

loc_0008A73C: ;
    edx = MEM32(0x8EACE0);
    MEM32(edx + 0xC) = esi;
    ecx = eax;
    eax = MEM32(0x8EACE0);
    MEM32(eax + 0x24) = 0;
    xmm0 = XMM_SCALAR(MEMF(0x8E9974)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(0x8EACE0);
    MEM16(edx + 0x10) = LO16(eax);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = MEM32(0x8EACE0);
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(0x8EACE0);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(edx + 0x2C) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0008A7D2; /* jne: not equal / not zero */

loc_0008A7A3: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(0x8EACE0);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    ecx = eax + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB82C); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008A7CDu); RECOMP_ABI_CALL(0x0003768Du, sub_0003768D); /* call 0x0003768D */

loc_0008A7CD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008A7EC;

loc_0008A7D2: ;
    eax = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(esp + 4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 8) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = eax;

loc_0008A7EC: ;
    ecx = MEM32(0x8EACE0);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    eax = MEM32(0x8EACE0);
    PUSH32(esp, esi);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0008A81Bu); RECOMP_ABI_CALL(0x0002AEABu, sub_0002AEAB); /* call 0x0002AEAB */

loc_0008A81B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008A870
 * Original: 0x0008A870 - 0x0008A973 (259 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A870: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 0x8EB410;
    PUSH32(esp, 0x0008A88Cu); RECOMP_ABI_CALL(0x0001261Cu, sub_0001261C); /* call 0x0001261C */

loc_0008A88C: ;
    edx = MEM32(0x8EACE0);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(edx + 0xC) = esi;
    ecx = eax;
    eax = MEM32(0x8EACE0);
    MEM32(eax + 0x24) = 0;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(0x8EACE0);
    MEM16(edx + 0x10) = LO16(eax);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = MEM32(0x8EACE0);
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(0x8EACE0);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(edx + 0x2C) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0008A920; /* jne: not equal / not zero */

loc_0008A8F1: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(0x8EACE0);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    ecx = eax + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB82C); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008A91Bu); RECOMP_ABI_CALL(0x0003768Du, sub_0003768D); /* call 0x0003768D */

loc_0008A91B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008A93A;

loc_0008A920: ;
    eax = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(esp + 4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 8) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = eax;

loc_0008A93A: ;
    ecx = MEM32(0x8EACE0);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    eax = MEM32(0x8EACE0);
    PUSH32(esp, esi);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0008A969u); RECOMP_ABI_CALL(0x0002AEABu, sub_0002AEAB); /* call 0x0002AEAB */

loc_0008A969: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008A9C0
 * Original: 0x0008A9C0 - 0x0008AC12 (594 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A9C0(void)
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

loc_0008A9C0: ;
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A9DC; /* jne: not equal / not zero */

loc_0008A9D0: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008AB8D; /* jne: not equal / not zero */

loc_0008A9DC: ;
    ecx = MEM32(0x8EACE0);
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008AA17; /* je: equal / zero */

loc_0008A9EA: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = ecx + 0x2C;
    if (CMP_EQ(_fa, _fb)) goto loc_0008AA17; /* je: equal / zero */

loc_0008A9F4: ;
    ecx = MEM32(eax + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008AA00u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0008AA00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AA11; /* je: equal / zero */

loc_0008AA07: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008AAB2; /* jne: not equal / not zero */

loc_0008AA11: ;
    ecx = MEM32(0x8EACE0);

loc_0008AA17: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    edx = MEM32(esi + 0x20);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008AA52; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008AA3A: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008AA52; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008AA3F: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008AA50u); RECOMP_ABI_CALL(0x00021B3Au, sub_00021B3A); /* call 0x00021B3A */

loc_0008AA50: ;
    goto loc_0008AABF;

loc_0008AA52: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008AA71; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008AA57: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0008AA6Fu); RECOMP_ABI_CALL(0x00021B3Au, sub_00021B3A); /* call 0x00021B3A */

loc_0008AA6F: ;
    goto loc_0008AABF;

loc_0008AA71: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008AA94; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008AA7A: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0008AA92u); RECOMP_ABI_CALL(0x00021B3Au, sub_00021B3A); /* call 0x00021B3A */

loc_0008AA92: ;
    goto loc_0008AABF;

loc_0008AA94: ;
    eax = esp + 8;
    xmm2 = xmm1; /* movaps */
    PUSH32(esp, eax);
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0008AAB0u); RECOMP_ABI_CALL(0x00021B3Au, sub_00021B3A); /* call 0x00021B3A */

loc_0008AAB0: ;
    goto loc_0008AABF;

loc_0008AAB2: ;
    ecx = MEM32(edi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008AABFu); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_0008AABF: ;
    edi = MEM32(0x8EACE0);
    ecx = MEM32(edi + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008AB92; /* jne: not equal / not zero */

loc_0008AAD3: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AB92; /* je: equal / zero */

loc_0008AADC: ;
    eax = MEM32(eax * 4 + 0x8974E0);

loc_0008AAE3: ;
    edx = eax * 8;
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0x897414);

loc_0008AAF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008AB8C; /* jl: less (signed <) */

loc_0008AAF9: ;
    eax = edx + 0x897410;
    MEM32(edi + 0x20) = eax;
    eax = MEM32(0x8EACE0);
    edx = MEM32(eax + 0x20);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008AB80; /* jl: less (signed <) */

loc_0008AB0F: ;
    xmm1 = XMM_SCALAR(MEMF(0x8E9B10)); /* movss */
    eax = edx;
    MEM32(esp + 0xC) = 3;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    edx = (uint32_t)(int32_t)SMEM8(eax + 5);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008AB4C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008AB46: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_0008AB4C: ;
    edi = MEM32(esp + 8);
    eax = MEM32(eax);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x84C40);
    PUSH32(esp, 0x2B71B);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0008AB7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008AB77u); } /* indirect call */
    }

loc_0008AB7A: ;
    ecx = MEM32(esi + 0x54);
    MEM32(ecx + 0xC) = ebp;

loc_0008AB80: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008AB8C; /* jne: not equal / not zero */

loc_0008AB85: ;
    MEM32(esi + 0x42C) = MEM32(esi + 0x42C) | 0x40;
    _fa = (uint32_t)(MEM32(esi + 0x42C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0008AB8C: ;
    POP32(esp, edi);

loc_0008AB8D: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008AB92: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008ABA1; /* jne: not equal / not zero */

loc_0008AB97: ;
    eax = 4;
    goto loc_0008AAE3;

loc_0008ABA1: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008AC06; /* jne: not equal / not zero */

loc_0008ABA6: ;
    ecx = MEM32(esi + 0x438);
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFDu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0008ABCE; /* ja: above (unsigned >) */

loc_0008ABB4: ;
    edx = ZX8(MEM8(ecx + 0x8AC1C));
    { uint32_t _jt = MEM32(edx * 4 + 0x8AC14); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0008ABC2u) goto loc_0008ABC2;
    if (_jt == 0x0008ABCEu) goto loc_0008ABCE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0008ABC2: ;
    eax = MEM32(eax * 4 + 0x897520);
    goto loc_0008AAE3;

loc_0008ABCE: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7ABD68)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x34); /* comiss */
    eax = MEM32(eax * 4 + 0x897500);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008AAE3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x34)) */

loc_0008ABF0: ;
    edx = eax * 8;
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0x897415);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0008AAF1;

loc_0008AC06: ;
    eax = MEM32(eax * 4 + 0x8974C0);
    goto loc_0008AAE3;

}

/**
 * sub_0008ACC0
 * Original: 0x0008ACC0 - 0x0008AEDD (541 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008ACC0(void)
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

loc_0008ACC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x54);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008AD06; /* je: equal / zero */

loc_0008ACD5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AD06; /* je: equal / zero */

loc_0008ACDA: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008ACE6u); RECOMP_ABI_CALL(0x0001B2F3u, sub_0001B2F3); /* call 0x0001B2F3 */

loc_0008ACE6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008ACF7; /* je: equal / zero */

loc_0008ACEA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008ACF0u); RECOMP_ABI_CALL(0x00032291u, sub_00032291); /* call 0x00032291 */

loc_0008ACF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AD06; /* je: equal / zero */

loc_0008ACF7: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008AD0F; /* jne: not equal / not zero */

loc_0008ACFD: ;
    _fa = (uint32_t)(MEM8(esi + 0x42C)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x42C), 5 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008AD31; /* je: equal / zero */

loc_0008AD06: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008AD0F: ;
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008AD1Bu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0008AD1B: ;
    eax = MEM32(eax + 0x28);
    ecx = MEM32(eax);
    edx = eax + 0xC;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008AD06; /* jne: not equal / not zero */

loc_0008AD2A: ;
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AD06; /* je: equal / zero */

loc_0008AD31: ;
    ecx = MEM32(0x8E9998);
    eax = MEM32(0x8EACE0);
    ebp = MEM32(esp + 0x24);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = MEM32(esp + 0x2C);
    MEM32(eax + 0xC) = esi;
    eax = MEM32(esp + 0x28);
    edx = MEM32(0x8EACE0);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) ebp = ecx; /* cmovge */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(edx + 0x24) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0008ADE0; /* jne: not equal / not zero */

loc_0008AD61: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008ADC2; /* je: equal / zero */

loc_0008AD65: ;
    eax = MEM32(0x8E8F84);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008AD71u); RECOMP_ABI_CALL(0x000331EBu, sub_000331EB); /* call 0x000331EB */

loc_0008AD71: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7BA434)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7BA190); /* mulss */
    xmm1.f[0] = xmm1.f[0] / MEMF(0x8E99B4); /* divss */
    xmm2 = XMM_SCALAR(MEMF(0x8E9970)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008ADAC; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0008ADA7: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0008AE01;

loc_0008ADAC: ;
    xmm1 = XMM_SCALAR(MEMF(0x8E996C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008AE01; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008ADBD: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0008AE01;

loc_0008ADC2: ;
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8E996C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8E9970); /* addss */
    goto loc_0008AE01;

loc_0008ADE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AE01; /* je: equal / zero */

loc_0008ADE5: ;
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8E996C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8E9968); /* addss */

loc_0008AE01: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008AE0F; /* jne: not equal / not zero */

loc_0008AE07: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD370); /* mulss */

loc_0008AE0F: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(0x8EACE0);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEM16(ecx + 0x10) = LO16(eax);
    edx = MEM32(0x8EACE0);
    MEMF(edx + 0x28) = xmm1.f[0]; /* movss */
    eax = MEM32(0x8EACE0);
    MEM32(eax + 0x2C) = edi;
    eax = MEM32(0x8EACE0);
    if (CMP_EQ(_fa, _fb)) goto loc_0008AE4D; /* je: equal / zero */

loc_0008AE47: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008AEA9; /* jne: not equal / not zero */

loc_0008AE4D: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB82C); /* mulss */
    edx = MEM32(0x8E8F84);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0008AE85u); RECOMP_ABI_CALL(0x0003768Du, sub_0003768D); /* call 0x0003768D */

loc_0008AE85: ;
    eax = MEM32(0x8EACE0);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x8EACE0);

loc_0008AEA9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    eax = esp;
    PUSH32(esp, edi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008AEC4u); RECOMP_ABI_CALL(0x00089430u, sub_00089430); /* call 0x00089430 */

loc_0008AEC4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008AD06; /* jne: not equal / not zero */

loc_0008AECF: ;
    PUSH32(esp, 0x0008AED4u); RECOMP_ABI_CALL(0x0008A9C0u, sub_0008A9C0); /* call 0x0008A9C0 */

loc_0008AED4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
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
 * sub_0008AF70
 * Original: 0x0008AF70 - 0x0008B008 (152 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AF70(void)
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

loc_0008AF70: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008B003; /* jne: not equal / not zero */

loc_0008AF8B: ;
    ecx = MEM32(0x8EACE4);
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AF9E; /* je: equal / zero */

loc_0008AF98: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B003; /* je: equal / zero */

loc_0008AF9E: ;
    edx = esi;
    eax = esp + 8;
    PUSH32(esp, 0x0008AFA9u); RECOMP_ABI_CALL(0x00085340u, sub_00085340); /* call 0x00085340 */

loc_0008AFA9: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9A90)); /* movss */
    PUSH32(esp, 8);
    ecx = esi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008AFC0u); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_0008AFC0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AD310)); /* fmul dword ptr [0x7ad310] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AD440)); /* fadd dword ptr [0x7ad440] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, esi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008B000u); RECOMP_ABI_CALL(0x000127BBu, sub_000127BB); /* call 0x000127BB */

loc_0008B000: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008B003: ;
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
 * sub_0008B030
 * Original: 0x0008B030 - 0x0008B0AD (125 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008B030: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(edx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008B0A5; /* jne: not equal / not zero */

loc_0008B03A: ;
    eax = MEM32(edx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B04C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008B04A: ;
    goto loc_0008B054;

loc_0008B04C: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x30); /* subss */

loc_0008B054: ;
    xmm2 = XMM_SCALAR(MEMF(0x7B04A0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B088; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0008B061: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B070; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008B06B: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0008B075;

loc_0008B070: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_0008B075: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7BA140); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B088; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7BA140)) */

loc_0008B07E: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008B084u); RECOMP_ABI_CALL(0x0001C72Fu, sub_0001C72F); /* call 0x0001C72F */

loc_0008B084: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B088: ;
    ecx = MEM32(0x8E998C);
    eax = MEM32(eax + 0x60);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edx);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x0008B0A1u); RECOMP_ABI_CALL(0x000127BBu, sub_000127BB); /* call 0x000127BB */

loc_0008B0A1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B0A5: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008B0ABu); RECOMP_ABI_CALL(0x00034A19u, sub_00034A19); /* call 0x00034A19 */

loc_0008B0AB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008B0D0
 * Original: 0x0008B0D0 - 0x0008B219 (329 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B0D0(void)
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

loc_0008B0D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0008B0E6; /* jne: not equal / not zero */

loc_0008B0E0: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0008B0E6: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1DE4); /* comiss */
    edi = MEM32(esp + 0x14);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B1AD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B1DE4)) */

loc_0008B0FF: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B1AD; /* je: equal / zero */

loc_0008B109: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0008B1AD; /* jge: greater or equal (signed >=) */

loc_0008B117: ;
    eax = MEM32(edi + 0xF0);
    SET_LO8(edx, MEM8(eax + 0x54));
    SET_LO8(ecx, 0x83);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(edx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B1AD; /* jne: not equal / not zero */

loc_0008B12A: ;
    _fa = (uint32_t)(MEM8(eax + 0x53)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x53), LO8(ecx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B1AD; /* jne: not equal / not zero */

loc_0008B12F: ;
    eax = MEM32(0x8E93A8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B1AD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0008B142: ;
    xmm0 = XMM_SCALAR(MEMF(0x7BA43C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B1AD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_0008B150: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008B157u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_0008B157: ;
    fp_push(MEMF(0x7BA438)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0008B1AD; /* jbe: below or equal (unsigned <=) */

loc_0008B166: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B1AD; /* je: equal / zero */

loc_0008B16C: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008B179u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_0008B179: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0008B1AD; /* jne: not equal / not zero */

loc_0008B180: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8F95EC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008B19Bu); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_0008B19B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008B1A4u); RECOMP_ABI_CALL(0x000127BBu, sub_000127BB); /* call 0x000127BB */

loc_0008B1A4: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0008B1AD: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008B1B9u); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_0008B1B9: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008B1C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B1C0u); } /* indirect call */
    }

loc_0008B1C3: ;
    fp_push((double)SMEM32(0x8E9998)); /* fild */
    fp_push(MEMF(0x7BA2DC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x8E997C)); /* fdiv dword ptr [0x8e997c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    eax = (int32_t)MEMF(esp + 8); /* cvttss2si */
    ecx = MEM32(0x8E9960);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0008B1F9; /* jl: less (signed <) */

loc_0008B1EF: ;
    ecx = MEM32(0x8E9998);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0008B1FB; /* jle: less or equal (signed <=) */

loc_0008B1F9: ;
    eax = ecx;

loc_0008B1FB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, esi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008B212u); RECOMP_ABI_CALL(0x000127BBu, sub_000127BB); /* call 0x000127BB */

loc_0008B212: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
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
 * sub_0008B270
 * Original: 0x0008B270 - 0x0008B2AC (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0008B270: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008B2A6; /* jp: parity */

loc_0008B285: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008B2A6; /* jp: parity */

loc_0008B294: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008B2A6; /* jp: parity */

loc_0008B2A3: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0008B2A6: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0008B2C0
 * Original: 0x0008B2C0 - 0x0008B2C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B2C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008B2C0: ;
    fp_push(MEMF(ecx + 0x94)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008B2D0
 * Original: 0x0008B2D0 - 0x0008B2DE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B2D0(void)
{

loc_0008B2D0: ;
    eax = ZX8(MEM8(esp + 4));
    MEM32(ecx + 0x98) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008B2F0
 * Original: 0x0008B2F0 - 0x0008B2F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B2F0(void)
{

loc_0008B2F0: ;
    SET_LO8(eax, MEM8(ecx + 0x382));
    esp += 4; return; /* ret */

}

/**
 * sub_0008B300
 * Original: 0x0008B300 - 0x0008B394 (148 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0008B300: ;
    PUSH32(esp, ecx);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x9C)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x30); /* ucomiss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    edx = ecx + 0x30;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008B355; /* jp: parity */

loc_0008B320: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xA0)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(edx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008B355; /* jp: parity */

loc_0008B332: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xA4)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(edx + 8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008B355; /* jp: parity */

loc_0008B344: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xA8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0008B392; /* jnp: not parity */

loc_0008B355: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = edx;
    esi = MEM32(eax);
    MEM32(ecx + 0x9C) = esi;
    esi = MEM32(eax + 4);
    MEM32(ecx + 0xA0) = esi;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0xA4) = eax;
    MEMF(ecx + 0xA8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 0xAC);
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    esi = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0008B391u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B38Bu); } /* indirect call */
    }

loc_0008B391: ;
    POP32(esp, esi);

loc_0008B392: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008B3C0
 * Original: 0x0008B3C0 - 0x0008B433 (115 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008B3C0: ;
    eax = MEM32(ecx + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B430; /* je: equal / zero */

loc_0008B3CA: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x84)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x60); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8975C4)); /* movss */
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B3F1; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008B3EC: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008B428; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008B3F1: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B402; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008B3F6: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008B402: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B41A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008B40B: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008B41A: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0008B428: ;
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008B430: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008B450
 * Original: 0x0008B450 - 0x0008B4D2 (130 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008B450: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B4CE; /* je: equal / zero */

loc_0008B45B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x8C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x60); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8975C4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B490; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008B478: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B490; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008B47D: ;
    eax = esp;
    PUSH32(esp, eax);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008B48Cu); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_0008B48C: ;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0008B490: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B49E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008B495: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_0008B4BB;

loc_0008B49E: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B4B0; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008B4A7: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_0008B4BB;

loc_0008B4B0: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_0008B4BB: ;
    eax = esp;
    PUSH32(esp, eax);
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0008B4CAu); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_0008B4CA: ;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0008B4CE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008B500
 * Original: 0x0008B500 - 0x0008B51C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B500: ;
    eax = MEM32(ecx + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B519; /* je: equal / zero */

loc_0008B50A: ;
    eax = MEM32(ecx + 0x90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008B516u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_0008B516: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008B519: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008B530
 * Original: 0x0008B530 - 0x0008B5BD (141 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008B530: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B5B8; /* je: equal / zero */

loc_0008B53E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x8C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x60); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8975C4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B568; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008B55B: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B568; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008B560: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_0008B599;

loc_0008B568: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B576; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008B56D: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_0008B593;

loc_0008B576: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B588; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008B57F: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_0008B593;

loc_0008B588: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_0008B593: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_0008B599: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008B5A5u); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_0008B5A5: ;
    ecx = MEM32(esi + 0x90);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0008B5B3u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_0008B5B3: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0008B5B8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008B5E0
 * Original: 0x0008B5E0 - 0x0008B6B7 (215 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008B5E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B6B2; /* je: equal / zero */

loc_0008B5F2: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x60); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8975C4)); /* movss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B619; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008B614: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008B63E; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008B619: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B624; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008B61E: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0008B63E;

loc_0008B624: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0008B63B; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0008B637: ;
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */

loc_0008B63B: ;
    xmm0 = xmm3; /* movaps */

loc_0008B63E: ;
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x8C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x60); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B662; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008B655: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B662; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008B65A: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_0008B693;

loc_0008B662: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B670; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008B667: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_0008B68D;

loc_0008B670: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B682; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008B679: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_0008B68D;

loc_0008B682: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_0008B68D: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_0008B693: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008B69Fu); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_0008B69F: ;
    ecx = MEM32(esi + 0x90);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0008B6ADu); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_0008B6AD: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0008B6B2: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008B6F0
 * Original: 0x0008B6F0 - 0x0008B706 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B6F0: ;
    eax = MEM32(ecx + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = ecx + 0x84;
    if (CMP_NE(_fa, _fb)) goto loc_0008B705; /* jne: not equal / not zero */

loc_0008B700: ;
    eax = 0x8F95B0;

loc_0008B705: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008B710
 * Original: 0x0008B710 - 0x0008B726 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B710: ;
    eax = MEM32(ecx + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = ecx + 0x88;
    if (CMP_NE(_fa, _fb)) goto loc_0008B725; /* jne: not equal / not zero */

loc_0008B720: ;
    eax = 0x8F95B0;

loc_0008B725: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008B730
 * Original: 0x0008B730 - 0x0008B748 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B730(void)
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

loc_0008B730: ;
    eax = MEM32(ecx + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B741; /* je: equal / zero */

loc_0008B73A: ;
    fp_push(MEMF(ecx + 0x90)); /* fld float */
    esp += 4; return; /* ret */

loc_0008B741: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008B750
 * Original: 0x0008B750 - 0x0008B766 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B750: ;
    eax = MEM32(ecx + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = ecx + 0x8C;
    if (CMP_NE(_fa, _fb)) goto loc_0008B765; /* jne: not equal / not zero */

loc_0008B760: ;
    eax = 0x8F95B0;

loc_0008B765: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008B770
 * Original: 0x0008B770 - 0x0008B77F (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B770(void)
{

loc_0008B770: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x84) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008B790
 * Original: 0x0008B790 - 0x0008B79F (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B790(void)
{

loc_0008B790: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x88) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008B7B0
 * Original: 0x0008B7B0 - 0x0008B7C1 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B7B0(void)
{

loc_0008B7B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x90) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008B7D0
 * Original: 0x0008B7D0 - 0x0008B7DF (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B7D0(void)
{

loc_0008B7D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x8C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008B7F0
 * Original: 0x0008B7F0 - 0x0008B819 (41 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B7F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B7F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0008B7F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B7F5u); } /* indirect call */
    }

loc_0008B7F8: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x70);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008B812u); RECOMP_ABI_CALL(0x000323E5u, sub_000323E5); /* call 0x000323E5 */

loc_0008B812: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0008B830
 * Original: 0x0008B830 - 0x0008B89D (109 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008B830: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7BA8AC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = MEM32(esp);
    eax = ecx + 0x9C;
    MEM32(eax) = edx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8975C4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B881; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008B875: ;
    MEMF(ecx + 0xA8) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B881: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0008B891; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0008B88D: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_0008B891: ;
    MEMF(ecx + 0xA8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008B8C0
 * Original: 0x0008B8C0 - 0x0008B8CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B8C0(void)
{

loc_0008B8C0: ;
    MEM32(ecx + 0x80) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0008B8D0
 * Original: 0x0008B8D0 - 0x0008B8F1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B8D0(void)
{

loc_0008B8D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008B8E5u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_0008B8E5: ;
    MEM32(esi + 0x80) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008B900
 * Original: 0x0008B900 - 0x0008B93B (59 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B900: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7BA8B0);
    ecx = edi;
    PUSH32(esp, 0x0008B915u); RECOMP_ABI_CALL(0x00020717u, sub_00020717); /* call 0x00020717 */

loc_0008B915: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0008B91Du); RECOMP_ABI_CALL(0x00020D9Du, sub_00020D9D); /* call 0x00020D9D */

loc_0008B91D: ;
    esi = MEM32(esi + 0x80);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B92F; /* je: equal / zero */

loc_0008B927: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0008B92Fu); RECOMP_ABI_CALL(0x000259C4u, sub_000259C4); /* call 0x000259C4 */

loc_0008B92F: ;
    ecx = edi;
    PUSH32(esp, 0x0008B936u); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_0008B936: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008B950
 * Original: 0x0008B950 - 0x0008B9FA (170 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B950: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0008B95Du); RECOMP_ABI_CALL(0x000362ECu, sub_000362EC); /* call 0x000362EC */

loc_0008B95D: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x7BA8C4;
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(esi + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x98) = eax;
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(esi + 0xA8) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0xAC) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0008BA30
 * Original: 0x0008BA30 - 0x0008BA5D (45 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BA30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    MEM32(esi) = 0x7BA8C4;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008BA4Bu); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_0008BA4B: ;
    MEM32(esi + 0x80) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002563B(); return; /* tail jmp 0x0002563B */

}

/**
 * sub_0008BA70
 * Original: 0x0008BA70 - 0x0008BB09 (153 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BA70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BA70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0008BA7Bu); RECOMP_ABI_CALL(0x0001C75Cu, sub_0001C75C); /* call 0x0001C75C */

loc_0008BA7B: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(esi + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 4);
    eax = esi + 0x9C;
    MEM32(eax) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(esi + 0x98) = 0;
    MEM32(eax + 8) = ecx;
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(esi + 0xA8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008BB30
 * Original: 0x0008BB30 - 0x0008BBB3 (131 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008BB30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0008BB3Bu); RECOMP_ABI_CALL(0x000370B1u, sub_000370B1); /* call 0x000370B1 */

loc_0008BB3B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7BA8AC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 4);
    eax = esi + 0x9C;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x8975C4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(eax + 4) = edx;
    MEM32(esi + 0x98) = 0;
    MEM32(eax + 8) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008BB96; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008BB89: ;
    MEMF(esi + 0xA8) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008BB96: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0008BBA6; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0008BBA2: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_0008BBA6: ;
    MEMF(esi + 0xA8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008BBE0
 * Original: 0x0008BBE0 - 0x0008BC9F (191 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BBE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x70);
    ecx = MEM32(eax * 4 + 0x8E8EB8);
    eax = MEM32(ecx + 0x28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BC0B; /* je: equal / zero */

loc_0008BBF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BC0B; /* je: equal / zero */

loc_0008BBFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BC0B; /* je: equal / zero */

loc_0008BC01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BC0B; /* je: equal / zero */

loc_0008BC06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008BC0D; /* jne: not equal / not zero */

loc_0008BC0B: ;
    edx = ecx;

loc_0008BC0D: ;
    ecx = MEM32(edx + 0x48);
    PUSH32(esp, 0x0008BC15u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0008BC15: ;
    SET_LO8(ecx, MEM8(eax + 0x382));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BC2E; /* je: equal / zero */

loc_0008BC1F: ;
    MEM32(edi + 0x98) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0008BC2E: ;
    ecx = MEM32(edi + 0xAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x44);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0008BC3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BC3Cu); } /* indirect call */
    }

loc_0008BC3F: ;
    eax = MEM32(eax);
    MEM32(edi + 0x84) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0008BC4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BC4Bu); } /* indirect call */
    }

loc_0008BC4E: ;
    eax = MEM32(eax);
    MEM32(edi + 0x88) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0008BC5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BC5Au); } /* indirect call */
    }

loc_0008BC5D: ;
    eax = MEM32(eax);
    MEM32(edi + 0x8C) = eax;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x94)); /* movss */
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0008BC7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BC77u); } /* indirect call */
    }

loc_0008BC7D: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    POP32(esp, esi);
    MEMF(edi + 0x90) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x98) = 1;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BCD0
 * Original: 0x0008BCD0 - 0x0008BD5A (138 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008BCD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(eax * 4 + 0x8E8EB8);
    ecx = MEM32(ecx + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BCEC; /* je: equal / zero */

loc_0008BCE7: ;
    PUSH32(esp, 0x0008BCECu); RECOMP_ABI_CALL(0x00035D79u, sub_00035D79); /* call 0x00035D79 */

loc_0008BCEC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7BA8AC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    edx = esi + 0x9C;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    MEM32(edx) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x8975C4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008BD3D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008BD30: ;
    MEMF(esi + 0xA8) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008BD3D: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0008BD4D; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0008BD49: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_0008BD4D: ;
    MEMF(esi + 0xA8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008BD80
 * Original: 0x0008BD80 - 0x0008BDC2 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BD80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    MEM32(esi) = 0x7BA8C4;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008BD9Bu); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_0008BD9B: ;
    ecx = esi;
    MEM32(esi + 0x80) = 0;
    PUSH32(esp, 0x0008BDACu); RECOMP_ABI_CALL(0x0002563Bu, sub_0002563B); /* call 0x0002563B */

loc_0008BDAC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008BDBC; /* je: equal / zero */

loc_0008BDB3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008BDB9u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0008BDB9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008BDBC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008BDE0
 * Original: 0x0008BDE0 - 0x0008BE24 (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008BDE0(void)
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

loc_0008BDE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
    MEMF(esp) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
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
 * sub_0008BE40
 * Original: 0x0008BE40 - 0x0008BE75 (53 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BE40(void)
{

loc_0008BE40: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008BE90
 * Original: 0x0008BE90 - 0x0008BE94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BE90(void)
{

loc_0008BE90: ;
    eax = MEM32(ecx + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BEA0
 * Original: 0x0008BEA0 - 0x0008BEA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BEA0(void)
{

loc_0008BEA0: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BEB0
 * Original: 0x0008BEB0 - 0x0008BEB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BEB0(void)
{

loc_0008BEB0: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BEC0
 * Original: 0x0008BEC0 - 0x0008BEC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BEC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008BEC0: ;
    fp_push(MEMF(ecx + 0x370)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BED0
 * Original: 0x0008BED0 - 0x0008BED7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BED0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008BED0: ;
    fp_push(MEMF(ecx + 0x374)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BEE0
 * Original: 0x0008BEE0 - 0x0008BEE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BEE0(void)
{

loc_0008BEE0: ;
    eax = MEM32(ecx + 0x378);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BEF0
 * Original: 0x0008BEF0 - 0x0008BEF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BEF0(void)
{

loc_0008BEF0: ;
    eax = MEM32(ecx + 0x37C);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BF00
 * Original: 0x0008BF00 - 0x0008BF07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BF00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008BF00: ;
    fp_push(MEMF(ecx + 0x504)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BF10
 * Original: 0x0008BF10 - 0x0008BF17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BF10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008BF10: ;
    fp_push(MEMF(ecx + 0x508)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BF20
 * Original: 0x0008BF20 - 0x0008BF27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BF20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008BF20: ;
    fp_push(MEMF(ecx + 0x510)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BF30
 * Original: 0x0008BF30 - 0x0008BF37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BF30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008BF30: ;
    fp_push(MEMF(ecx + 0x514)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BF40
 * Original: 0x0008BF40 - 0x0008BF47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BF40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008BF40: ;
    fp_push(MEMF(ecx + 0x518)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BF50
 * Original: 0x0008BF50 - 0x0008BF57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BF50(void)
{

loc_0008BF50: ;
    eax = MEM32(ecx + 0x51C);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BF60
 * Original: 0x0008BF60 - 0x0008BF67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BF60(void)
{

loc_0008BF60: ;
    eax = MEM32(ecx + 0x520);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BF70
 * Original: 0x0008BF70 - 0x0008BF77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BF70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008BF70: ;
    fp_push(MEMF(ecx + 0x478)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BF80
 * Original: 0x0008BF80 - 0x0008BF87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BF80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008BF80: ;
    fp_push(MEMF(ecx + 0x4D8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BF90
 * Original: 0x0008BF90 - 0x0008BF97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BF90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008BF90: ;
    fp_push(MEMF(ecx + 0x4E8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BFA0
 * Original: 0x0008BFA0 - 0x0008BFA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BFA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008BFA0: ;
    fp_push(MEMF(ecx + 0x4D4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BFB0
 * Original: 0x0008BFB0 - 0x0008BFB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BFB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008BFB0: ;
    fp_push(MEMF(ecx + 0x4F0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BFC0
 * Original: 0x0008BFC0 - 0x0008BFC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BFC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008BFC0: ;
    fp_push(MEMF(0x7BAB64)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BFD0
 * Original: 0x0008BFD0 - 0x0008BFD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BFD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008BFD0: ;
    fp_push(MEMF(0x7BAB68)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BFE0
 * Original: 0x0008BFE0 - 0x0008BFE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BFE0(void)
{

loc_0008BFE0: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BFF0
 * Original: 0x0008BFF0 - 0x0008BFF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BFF0(void)
{

loc_0008BFF0: ;
    eax = MEM32(ecx + 0x258);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C000
 * Original: 0x0008C000 - 0x0008C007 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C000(void)
{

loc_0008C000: ;
    eax = MEM32(ecx + 0x25C);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C010
 * Original: 0x0008C010 - 0x0008C017 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C010(void)
{

loc_0008C010: ;
    eax = MEM32(ecx + 0x260);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C020
 * Original: 0x0008C020 - 0x0008C027 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C020(void)
{

loc_0008C020: ;
    eax = MEM32(ecx + 0x264);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C030
 * Original: 0x0008C030 - 0x0008C037 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C030(void)
{

loc_0008C030: ;
    eax = MEM32(ecx + 0x268);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C040
 * Original: 0x0008C040 - 0x0008C04A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C040(void)
{

loc_0008C040: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C050
 * Original: 0x0008C050 - 0x0008C05A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C050(void)
{

loc_0008C050: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C060
 * Original: 0x0008C060 - 0x0008C0E4 (132 bytes, 44 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0008C060: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7B1D9C)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0xC) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = eax;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    PUSH32(esp, edi);
    edi = MEM32(0x8E8F84);
    _fb = (uint32_t)(MEM32(edi + 0xA8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(MEM32(edi + 0xA8)));
    edx = edx - MEM32(edi + 0xA8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x2C) = edx;
    edx = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x6C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C0B0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008C0AD: ;
    xmm0 = xmm1; /* movaps */

loc_0008C0B0: ;
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x20);
    edx = MEM32(edx + 0x6C);
    MEM32(esi + 0x28) = edx;
    eax = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x38);
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008C0D9u); RECOMP_ABI_CALL(0x00014052u, sub_00014052); /* call 0x00014052 */

loc_0008C0D9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0008C110
 * Original: 0x0008C110 - 0x0008C116 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C110(void)
{

loc_0008C110: ;
    eax = MEM32(0x8F03A0);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C120
 * Original: 0x0008C120 - 0x0008C126 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C120(void)
{

loc_0008C120: ;
    eax = MEM32(0x8F03A4);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C130
 * Original: 0x0008C130 - 0x0008C136 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C130(void)
{

loc_0008C130: ;
    eax = MEM32(0x8F03A8);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C140
 * Original: 0x0008C140 - 0x0008C146 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C140(void)
{

loc_0008C140: ;
    eax = MEM32(0x8F03AC);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C150
 * Original: 0x0008C150 - 0x0008C16E (30 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C150(void)
{

loc_0008C150: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM8(ecx + 0x3E0) = 1;
    MEM32(ecx + 0x3E4) = eax;
    MEM32(ecx + 0x3E8) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008C180
 * Original: 0x0008C180 - 0x0008C193 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C180: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x54);
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0008C1A0
 * Original: 0x0008C1A0 - 0x0008C1E7 (71 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C1A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C1A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008C1B8u); RECOMP_ABI_CALL(0x00029EF2u, sub_00029EF2); /* call 0x00029EF2 */

loc_0008C1B8: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x0008C1C0u); RECOMP_ABI_CALL(0x0002A389u, sub_0002A389); /* call 0x0002A389 */

loc_0008C1C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9B74)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008C1DCu); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_0008C1DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008C1E2u); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_0008C1E2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C200
 * Original: 0x0008C200 - 0x0008C239 (57 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C200: ;
    eax = MEM32(0x8E9B10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008C212u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0008C212: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C237; /* je: equal / zero */

loc_0008C216: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008C224u); RECOMP_ABI_CALL(0x00022ADAu, sub_00022ADA); /* call 0x00022ADA */

loc_0008C224: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008C22Au); RECOMP_ABI_CALL(0x00035342u, sub_00035342); /* call 0x00035342 */

loc_0008C22A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0008C234u); RECOMP_ABI_CALL(0x0001AF38u, sub_0001AF38); /* call 0x0001AF38 */

loc_0008C234: ;
    MEM32(esi + 0x2C) = eax;

loc_0008C237: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C250
 * Original: 0x0008C250 - 0x0008C286 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C250: ;
    eax = MEM32(0x8E9B10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008C262u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0008C262: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C27B; /* je: equal / zero */

loc_0008C266: ;
    ecx = MEM32(esi + 0x54);
    MEM8(ecx + 8) = 0;
    edx = MEM32(esi + 0x54);
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx + 6) = LO8(eax);
    ecx = MEM32(esi + 0x54);
    MEM8(ecx + 7) = LO8(eax);

loc_0008C27B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008C281u); RECOMP_ABI_CALL(0x0001231Fu, sub_0001231F); /* call 0x0001231F */

loc_0008C281: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C2A0
 * Original: 0x0008C2A0 - 0x0008C2AF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C2A0(void)
{

loc_0008C2A0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x258) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0008C2C0
 * Original: 0x0008C2C0 - 0x0008C2CF (15 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C2C0(void)
{

loc_0008C2C0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x260) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0008C2E0
 * Original: 0x0008C2E0 - 0x0008C35C (124 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C2E0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008C2E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x60); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8975F8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C303; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C2FE: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008C337; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008C303: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C313; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C308: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    goto loc_0008C337;

loc_0008C313: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C327; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C31C: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    goto loc_0008C337;

loc_0008C327: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp) = xmm2.f[0]; /* movss */

loc_0008C337: ;
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    eax = MEM32(ecx + 0x268);
    edx = MEM32(ecx + 0x264);
    ecx = eax + edx * 2;
    eax = MEM32(ecx * 4 + 0x7BACD8);
    MEMF(esp) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C380
 * Original: 0x0008C380 - 0x0008C3AB (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C380: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8E9B88); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008C3A0u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_0008C3A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008C3A6u); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_0008C3A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C3C0
 * Original: 0x0008C3C0 - 0x0008C3E6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C3C0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3E5; /* je: equal / zero */

loc_0008C3C4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    eax = 2;
    if (CMP_NE(_fa, _fb)) goto loc_0008C3D3; /* jne: not equal / not zero */

loc_0008C3CE: ;
    eax = 5;

loc_0008C3D3: ;
    ecx = MEM32(esp + 4);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008C3E2u); RECOMP_ABI_CALL(0x000226FCu, sub_000226FC); /* call 0x000226FC */

loc_0008C3E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008C3E5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008C3F0
 * Original: 0x0008C3F0 - 0x0008C5F6 (518 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C3F0(void)
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

loc_0008C3F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x8975F8)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C42B; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C426: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008C462; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008C42B: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C43C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C430: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0008C462;

loc_0008C43C: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C451; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C445: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    goto loc_0008C462;

loc_0008C451: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */

loc_0008C462: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8E9B78)); /* fmul dword ptr [0x8e9b78] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AA840)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0008C4AA; /* jbe: below or equal (unsigned <=) */

loc_0008C494: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9B78)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_0008C4B0;

loc_0008C4AA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_0008C4B0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x0008C4E5u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_0008C4E5: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8975F8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C516; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C509: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C516; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008C50E: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0008C547;

loc_0008C516: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C524; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C51B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_0008C541;

loc_0008C524: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C536; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C52D: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_0008C541;

loc_0008C536: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_0008C541: ;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */

loc_0008C547: ;
    ecx = MEM32(esi + 0x20);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008C554u); RECOMP_ABI_CALL(0x0002CCC4u, sub_0002CCC4); /* call 0x0002CCC4 */

loc_0008C554: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C564; /* je: equal / zero */

loc_0008C55C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C5E8; /* jne: not equal / not zero */

loc_0008C564: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008C5E8; /* jl: less (signed <) */

loc_0008C56E: ;
    eax = MEM32(esi + 0x54);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C5E8; /* je: equal / zero */

loc_0008C579: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C5E8; /* je: equal / zero */

loc_0008C57E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7BAB64)); /* movss */
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x264);
    ecx = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0008C59Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C597u); } /* indirect call */
    }

loc_0008C59A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C5AC; /* je: equal / zero */

loc_0008C59E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7BADD8)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0008C5AC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C5C7; /* jne: not equal / not zero */

loc_0008C5B1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    goto loc_0008C5D6;

loc_0008C5C7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C5E7; /* jne: not equal / not zero */

loc_0008C5CC: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);

loc_0008C5D6: ;
    PUSH32(esp, 0x0008C5DBu); RECOMP_ABI_CALL(0x00013D7Du, sub_00013D7D); /* call 0x00013D7D */

loc_0008C5DB: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008C5E7u); RECOMP_ABI_CALL(0x0001C56Du, sub_0001C56D); /* call 0x0001C56D */

loc_0008C5E7: ;
    POP32(esp, edi);

loc_0008C5E8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008C5EEu); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_0008C5EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0008C680
 * Original: 0x0008C680 - 0x0008C85A (474 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008C680: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1DE4); /* comiss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C830; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B1DE4)) */

loc_0008C6A3: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9BA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7C8); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8975F8)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C6CE; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C6C9: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008C70B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008C6CE: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C6DF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C6D3: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_0008C705;

loc_0008C6DF: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C6F4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C6E8: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    goto loc_0008C705;

loc_0008C6F4: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */

loc_0008C705: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */

loc_0008C70B: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008C724u); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_0008C724: ;
    esi = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x60); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x8975F8)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C752; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008C745: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C752; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0008C74A: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_0008C77A;

loc_0008C752: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C760; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008C757: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    goto loc_0008C774;

loc_0008C760: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0008C774; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008C770: ;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_0008C774: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_0008C77A: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008C789u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0008C789: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C7A2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0008C797: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    goto loc_0008C82A;

loc_0008C7A2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7BA8F4); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8975F8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C7E2; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7BA8F4)) */

loc_0008C7B9: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C7E2; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008C7BE: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008C7CDu); RECOMP_ABI_CALL(0x0002F109u, sub_0002F109); /* call 0x0002F109 */

loc_0008C7CD: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8975F8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0008C7E2: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C7FF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C7FA: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008C82A; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008C7FF: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C80A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C804: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0008C82A;

loc_0008C80A: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C81C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C813: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_0008C82A;

loc_0008C81C: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0008C82A: ;
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    POP32(esp, esi);

loc_0008C830: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9BA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x20);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008C84Cu); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_0008C84C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C852u); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_0008C852: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008C8D0
 * Original: 0x0008C8D0 - 0x0008CA9D (461 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008C8D0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x8975F8)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9BA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7C8); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C912; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C90D: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008C94F; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008C912: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C923; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C917: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    goto loc_0008C949;

loc_0008C923: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C938; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008C92C: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    goto loc_0008C949;

loc_0008C938: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */

loc_0008C949: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */

loc_0008C94F: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008C967u); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_0008C967: ;
    esi = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x60); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x8975F8)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C995; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008C988: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C995; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0008C98D: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_0008C9BD;

loc_0008C995: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C9A3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008C99A: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    goto loc_0008C9B7;

loc_0008C9A3: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0008C9B7; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008C9B3: ;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_0008C9B7: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_0008C9BD: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008C9CCu); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0008C9CC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C9E5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0008C9DA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    goto loc_0008CA6D;

loc_0008C9E5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7BA8F4); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8975F8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008CA25; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7BA8F4)) */

loc_0008C9FC: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008CA25; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008CA01: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008CA10u); RECOMP_ABI_CALL(0x0002F109u, sub_0002F109); /* call 0x0002F109 */

loc_0008CA10: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8975F8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0008CA25: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008CA42; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008CA3D: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008CA6D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008CA42: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008CA4D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008CA47: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0008CA6D;

loc_0008CA4D: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008CA5F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008CA56: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_0008CA6D;

loc_0008CA5F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0008CA6D: ;
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9BA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x20);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008CA8Eu); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_0008CA8E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008CA94u); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_0008CA94: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008CB10
 * Original: 0x0008CB10 - 0x0008CDF7 (743 bytes, 200 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0008CB10(void)
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

loc_0008CB10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0008CB21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CB1Eu); } /* indirect call */
    }

loc_0008CB21: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = eax;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008CB58u); RECOMP_ABI_CALL(0x0002D359u, sub_0002D359); /* call 0x0002D359 */

loc_0008CB58: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008CCEA; /* je: equal / zero */

loc_0008CB63: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 5);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008CB96u); RECOMP_ABI_CALL(0x0001AD35u, sub_0001AD35); /* call 0x0001AD35 */

loc_0008CB96: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x34); /* subss */
    eax = MEM32(esp + 0x40);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    ecx = MEM32(esp + 0x44);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x18) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = edx;
    if ((_fca > _fcb)) goto loc_0008CBFF; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008CBF2: ;
    xmm1 = XMM_SCALAR(MEMF(0x7BAB64)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008CC08; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008CBFF: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0008CC08: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x20);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7BACBC)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x6C); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008CC6C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008CC5F: ;
    xmm1 = XMM_SCALAR(MEMF(0x7BACC0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008CC6F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008CC6C: ;
    xmm0 = xmm1; /* movaps */

loc_0008CC6F: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AB7CC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008CCD2; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AB7CC)) */

loc_0008CCBD: ;
    PUSH32(esp, ecx);
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    ecx = esp + 0x18;
    MEMF(esp) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008CCD0u); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_0008CCD0: ;
    fp_pop(); /* fstp st(0) */

loc_0008CCD2: ;
    edx = MEM32(0x8E8F84);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008CCE5u); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_0008CCE5: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008CCEA: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x8E9A1C);
    PUSH32(esp, 0x75B);
    PUSH32(esp, 0x7BADDC);
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008CD12u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0008CD12: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x8975F8)); /* movss */
    ecx = eax;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7C8); /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008CD41; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008CD3C: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008CD60; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008CD41: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008CD4C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008CD46: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0008CD60;

loc_0008CD4C: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0008CD60; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0008CD5C: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0008CD60: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008CD76; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008CD71: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008CD98; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008CD76: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008CD81; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008CD7B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0008CD92;

loc_0008CD81: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0008CD92; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008CD8E: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0008CD92: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_0008CD98: ;
    eax = MEM32(0x8E9A18);
    edi = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x75F);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x7BADDC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008CDB8u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0008CDB8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8E8F84);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008CDF2u); RECOMP_ABI_CALL(0x0001BAF5u, sub_0001BAF5); /* call 0x0001BAF5 */

loc_0008CDF2: ;
    POP32(esp, edi);
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
 * sub_0008CEB0
 * Original: 0x0008CEB0 - 0x0008CED7 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CEB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CEB0: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM16(eax + 0xC) = 0x3C;
    MEM32(eax) = 0x7BAE04;
    MEM8(eax + 0x1C) = LO8(ecx);
    MEM8(eax + 0x1D) = LO8(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008CEE0
 * Original: 0x0008CEE0 - 0x0008CEE6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CEE0(void)
{

loc_0008CEE0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CEF0
 * Original: 0x0008CEF0 - 0x0008CEF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CEF0(void)
{

loc_0008CEF0: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CF00
 * Original: 0x0008CF00 - 0x0008CF3A (58 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CF00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x0008CF0Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0008CF0D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008CF35; /* je: equal / zero */

loc_0008CF16: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0008CF1Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_0008CF1E: ;
    MEM32(esi) = 0x7BAE04;
    SET_LO8(eax, MEM8(edi + 0x1C));
    MEM8(esi + 0x1C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x1D));
    POP32(esp, edi);
    MEM8(esi + 0x1D) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008CF35: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008CF50
 * Original: 0x0008CF50 - 0x0008CF77 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CF50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CF50: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM16(eax + 0xC) = 0x3C;
    MEM8(eax + 0x1C) = LO8(ecx);
    MEM8(eax + 0x1D) = LO8(edx);
    MEM32(eax) = 0x7BAE14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008CF80
 * Original: 0x0008CF80 - 0x0008CFA7 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CF80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CF80: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM16(eax + 0xC) = 0x3B;
    MEM32(eax) = 0x7B1DF0;
    MEM8(eax + 0x1C) = LO8(ecx);
    MEM8(eax + 0x1D) = LO8(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008CFB0
 * Original: 0x0008CFB0 - 0x0008D008 (88 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CFB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CFB0: ;
    SET_LO8(edx, MEM8(esp + 8));
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esp + 8));
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 8);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, eax);
    edi = esi + 0x28;
    PUSH32(esp, edi);
    MEM16(esi + 0xC) = 0x3B;
    MEM8(esi + 0x1C) = LO8(ecx);
    MEM8(esi + 0x1D) = LO8(edx);
    MEM32(esi) = 0x7B1E00;
    PUSH32(esp, 0x0008CFE2u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0008CFE2: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(eax);
    MEM32(edi) = edx;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0008D020
 * Original: 0x0008D020 - 0x0008D4D3 (1203 bytes, 365 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0008D020(void)
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

loc_0008D020: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D03Cu); RECOMP_ABI_CALL(0x0001C036u, sub_0001C036); /* call 0x0001C036 */

loc_0008D03C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D4C3; /* jne: not equal / not zero */

loc_0008D044: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0008D04Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D048u); } /* indirect call */
    }

loc_0008D04B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D4CB; /* je: equal / zero */

loc_0008D053: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D0E2; /* jne: not equal / not zero */

loc_0008D05B: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D0D1; /* je: equal / zero */

loc_0008D064: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D0D1; /* je: equal / zero */

loc_0008D068: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esi);
    edi = MEM32(esi + 0x20);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = esi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0008D095u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D092u); } /* indirect call */
    }

loc_0008D095: ;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D0A4u); RECOMP_ABI_CALL(0x0001AD35u, sub_0001AD35); /* call 0x0001AD35 */

loc_0008D0A4: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x48) = ecx;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4CAFC800);
    PUSH32(esp, esi);
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x5C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D0CCu); RECOMP_ABI_CALL(0x00023F2Au, sub_00023F2A); /* call 0x00023F2A */

loc_0008D0CC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008D0DC;

loc_0008D0D1: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D0D8u); RECOMP_ABI_CALL(0x0001481Du, sub_0001481D); /* call 0x0001481D */

loc_0008D0D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D0EF; /* je: equal / zero */

loc_0008D0DC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D0EF; /* je: equal / zero */

loc_0008D0E2: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0008D0E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D0E6u); } /* indirect call */
    }

loc_0008D0E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D0EF; /* jne: not equal / not zero */

loc_0008D0ED: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008D0EF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x20) = 0x8C1A0;
    MEM8(esp + 0x12) = 0;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D4CB; /* je: equal / zero */

loc_0008D10D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D112u); RECOMP_ABI_CALL(0x0001C491u, sub_0001C491); /* call 0x0001C491 */

loc_0008D112: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D122; /* jne: not equal / not zero */

loc_0008D117: ;
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D423; /* jne: not equal / not zero */

loc_0008D122: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D164u); RECOMP_ABI_CALL(0x00012EAAu, sub_00012EAA); /* call 0x00012EAA */

loc_0008D164: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edi);
    ecx = esp + 0x58;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D185u); RECOMP_ABI_CALL(0x000266C6u, sub_000266C6); /* call 0x000266C6 */

loc_0008D185: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D18Cu); RECOMP_ABI_CALL(0x0001245Fu, sub_0001245F); /* call 0x0001245F */

loc_0008D18C: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(0x8F03A4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D226; /* je: equal / zero */

loc_0008D1A1: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D1B8u); RECOMP_ABI_CALL(0x000335C4u, sub_000335C4); /* call 0x000335C4 */

loc_0008D1B8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0008D1EF; /* jne: not equal / not zero */

loc_0008D1C3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D1E4u); RECOMP_ABI_CALL(0x000335C4u, sub_000335C4); /* call 0x000335C4 */

loc_0008D1E4: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0008D226; /* je: equal / zero */

loc_0008D1EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D1F9u); RECOMP_ABI_CALL(0x0002B059u, sub_0002B059); /* call 0x0002B059 */

loc_0008D1F9: ;
    ecx = MEM32(esp + 0x24);
    ebx = MEM32(ecx + 4);
    edx = ecx;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x20) = 0x1F99D;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x12) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0008D453; /* jne: not equal / not zero */

loc_0008D226: ;
    eax = MEM32(esi + 0x2B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8E9748)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8E9748) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008D241; /* jle: less or equal (signed <=) */

loc_0008D234: ;
    ebx = MEM32(0x8E9754);
    PUSH32(esp, 0x10A);
    goto loc_0008D24C;

loc_0008D241: ;
    ebx = MEM32(0x8E9758);
    PUSH32(esp, 0x111);

loc_0008D24C: ;
    PUSH32(esp, 0x7BADDC);
    PUSH32(esp, 0x64);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D258u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0008D258: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ebx = MEM32(0x8F03AC);
    MEM8(esp + 0x13) = (CMP_L(_fas, _fbs)) ? 1 : 0; /* setl */
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) ebx = MEM32(0x8F03A8); /* cmove */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D38B; /* je: equal / zero */

loc_0008D27D: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D294u); RECOMP_ABI_CALL(0x000335C4u, sub_000335C4); /* call 0x000335C4 */

loc_0008D294: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0008D2CF; /* jne: not equal / not zero */

loc_0008D29F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edx = esp + 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D2C0u); RECOMP_ABI_CALL(0x000335C4u, sub_000335C4); /* call 0x000335C4 */

loc_0008D2C0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0008D38B; /* je: equal / zero */

loc_0008D2CF: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 4);
    ecx = esp + 0x80;
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xB0) = 0xA;
    ebx = ebx + ebx + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D306u); RECOMP_ABI_CALL(0x00030DF6u, sub_00030DF6); /* call 0x00030DF6 */

loc_0008D306: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D30Fu); RECOMP_ABI_CALL(0x00031B25u, sub_00031B25); /* call 0x00031B25 */

loc_0008D30F: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0xC4;
    MEM32(esp + 0x3C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D332u); RECOMP_ABI_CALL(0x00015989u, sub_00015989); /* call 0x00015989 */

loc_0008D332: ;
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D347u); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_0008D347: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D34Eu); RECOMP_ABI_CALL(0x0001E13Du, sub_0001E13D); /* call 0x0001E13D */

loc_0008D34E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D38B; /* je: equal / zero */

loc_0008D352: ;
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D360u); RECOMP_ABI_CALL(0x0002B059u, sub_0002B059); /* call 0x0002B059 */

loc_0008D360: ;
    ebx = MEM32(ebx + 4);
    edx = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x20) = 0x1F99D;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x12) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0008D453; /* jne: not equal / not zero */

loc_0008D38B: ;
    eax = MEM32(0x8F03A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0008D423; /* je: equal / zero */

loc_0008D39C: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D3B3u); RECOMP_ABI_CALL(0x000335C4u, sub_000335C4); /* call 0x000335C4 */

loc_0008D3B3: ;
    ebx = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0008D3F2; /* jne: not equal / not zero */

loc_0008D3C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D3E5u); RECOMP_ABI_CALL(0x000335C4u, sub_000335C4); /* call 0x000335C4 */

loc_0008D3E5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0008D423; /* je: equal / zero */

loc_0008D3F0: ;
    ebx = eax;

loc_0008D3F2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D3FCu); RECOMP_ABI_CALL(0x0002B059u, sub_0002B059); /* call 0x0002B059 */

loc_0008D3FC: ;
    ebx = MEM32(ebx + 4);
    ecx = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x20) = 0x1F99D;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x12) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0008D453; /* jne: not equal / not zero */

loc_0008D423: ;
    edx = MEM32(0x8EADA0);
    eax = MEM32(edx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D4CB; /* jne: not equal / not zero */

loc_0008D434: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008D4CB; /* jl: less (signed <) */

loc_0008D442: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    ebx = 0xF3;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0008D44Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D44Cu); } /* indirect call */
    }

loc_0008D44F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D4C3; /* je: equal / zero */

loc_0008D453: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8C200);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0008D478u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D475u); } /* indirect call */
    }

loc_0008D478: ;
    ecx = MEM32(esi + 0x48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D480u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0008D480: ;
    MEM8(eax + 0x3E0) = 1;
    MEM32(eax + 0x3E4) = 0;
    MEM32(eax + 0x3E8) = ebx;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D4B2; /* je: equal / zero */

loc_0008D49F: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D4B2u); RECOMP_ABI_CALL(0x0002A483u, sub_0002A483); /* call 0x0002A483 */

loc_0008D4B2: ;
    eax = MEM32(esi + 0x54);
    MEM8(eax + 5) = MEM8(eax + 5) & 0xF0;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(esi + 0x54);
    MEM32(edx + 0xC) = 4;

loc_0008D4C3: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008D4CB: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
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
 * sub_0008D600
 * Original: 0x0008D600 - 0x0008D6D8 (216 bytes, 63 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D600: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(ecx));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x74) = 0xA;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x50;
    PUSH32(esp, 0x0008D62Eu); RECOMP_ABI_CALL(0x00030DF6u, sub_00030DF6); /* call 0x00030DF6 */

loc_0008D62E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM8(esp + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0008D6C1; /* je: equal / zero */

loc_0008D63B: ;
    PUSH32(esp, 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008D64Au); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0008D64A: ;
    SET_LO8(eax, MEM8(edi + 0x39));
    SET_LO8(ecx, MEM8(esi + 0x39));
    PUSH32(esp, 8);
    edx = esp + 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = 9;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM16(esp + 0x34) = 0x3B;
    MEM8(esp + 0x44) = LO8(eax);
    MEM8(esp + 0x45) = LO8(ecx);
    MEM32(esp + 0x28) = 0x7B1E00;
    PUSH32(esp, 0x0008D684u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0008D684: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = 7;
    MEM32(esp + 0x3C) = 6;
    MEM32(esp + 0x44) = ecx;
    PUSH32(esp, 0x0008D6B6u); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_0008D6B6: ;
    ecx = eax;
    PUSH32(esp, 0x0008D6BDu); RECOMP_ABI_CALL(0x0001E13Du, sub_0001E13D); /* call 0x0001E13D */

loc_0008D6BD: ;
    MEM8(esp + 4) = LO8(eax);

loc_0008D6C1: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008D6D0u); RECOMP_ABI_CALL(0x00011307u, sub_00011307); /* call 0x00011307 */

loc_0008D6D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008D710
 * Original: 0x0008D710 - 0x0008D898 (392 bytes, 115 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0008D710: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x70));
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0008D71Du); RECOMP_ABI_CALL(0x00017635u, sub_00017635); /* call 0x00017635 */

loc_0008D71D: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0xD);
    ecx = edi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008D730u); RECOMP_ABI_CALL(0x00017635u, sub_00017635); /* call 0x00017635 */

loc_0008D730: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x78);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    ebx = 0xA;
    if ((_fa == 0)) goto loc_0008D755; /* je: equal / zero */

loc_0008D748: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(5));
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0008D75B; /* jne: not equal / not zero */

loc_0008D74D: ;
    ebx = MEM32(0x8E9BBC);
    goto loc_0008D75B;

loc_0008D755: ;
    ebx = MEM32(0x8E9BC0);

loc_0008D75B: ;
    PUSH32(esp, 0x383);
    PUSH32(esp, 0x7BADDC);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0008D76Cu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0008D76C: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008D893; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_0008D786: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x70) = 8;
    PUSH32(esp, 0x0008D79Eu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0008D79E: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D7C8; /* je: equal / zero */

loc_0008D7A4: ;
    PUSH32(esp, 0x0008D7A9u); RECOMP_ABI_CALL(0x0001C491u, sub_0001C491); /* call 0x0001C491 */

loc_0008D7A9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x28) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008D7BF; /* jne: not equal / not zero */

loc_0008D7AE: ;
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008D7BF; /* je: equal / zero */

loc_0008D7B3: ;
    eax = 1;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    goto loc_0008D7CA;

loc_0008D7BF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    goto loc_0008D7CA;

loc_0008D7C8: ;
    PUSH32(esp, 1);

loc_0008D7CA: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    ecx = esp + 0x4C;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008D7D7u); RECOMP_ABI_CALL(0x00030DF6u, sub_00030DF6); /* call 0x00030DF6 */

loc_0008D7D7: ;
    PUSH32(esp, 8);
    eax = esp + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D7E4u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0008D7E4: ;
    ecx = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(esi + 0x39));
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 8);
    MEM32(esp + 0x18) = ecx;
    SET_LO8(ecx, MEM8(edi + 0x39));
    eax = esp + 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 6;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM16(esp + 0x34) = 0x3B;
    MEM8(esp + 0x44) = LO8(ecx);
    MEM8(esp + 0x45) = LO8(edx);
    MEM32(esp + 0x28) = 0x7B1E00;
    PUSH32(esp, 0x0008D829u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0008D829: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    MEM32(esp + 0x38) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    MEM32(esp + 0x38) = 4;
    MEM32(esp + 0x3C) = 6;
    MEM32(esp + 0x44) = edx;
    PUSH32(esp, 0x0008D85Bu); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_0008D85B: ;
    ecx = eax;
    PUSH32(esp, 0x0008D862u); RECOMP_ABI_CALL(0x0001E13Du, sub_0001E13D); /* call 0x0001E13D */

loc_0008D862: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0xC) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0008D881; /* je: equal / zero */

loc_0008D86A: ;
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x50;
    PUSH32(esp, 0x0008D879u); RECOMP_ABI_CALL(0x00030DF6u, sub_00030DF6); /* call 0x00030DF6 */

loc_0008D879: ;
    MEM32(esp + 0x70) = 0xE;

loc_0008D881: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D890u); RECOMP_ABI_CALL(0x00011307u, sub_00011307); /* call 0x00011307 */

loc_0008D890: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008D893: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x70)) >> 32) & 1);
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008D900
 * Original: 0x0008D900 - 0x0008D946 (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D900: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008D90Bu); RECOMP_ABI_CALL(0x00021158u, sub_00021158); /* call 0x00021158 */

loc_0008D90B: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0xA8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008D942; /* jl: less (signed <) */

loc_0008D91D: ;
    PUSH32(esp, 6);
    ecx = 0x8EFCB8;
    PUSH32(esp, 0x0008D929u); RECOMP_ABI_CALL(0x00026DE7u, sub_00026DE7); /* call 0x00026DE7 */

loc_0008D929: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008D942; /* jge: greater or equal (signed >=) */

loc_0008D939: ;
    PUSH32(esp, 0x0008D93Eu); RECOMP_ABI_CALL(0x0008CB10u, sub_0008CB10); /* call 0x0008CB10 */

loc_0008D93E: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008D942: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008D960
 * Original: 0x0008D960 - 0x0008D9A0 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D960: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008D96Bu); RECOMP_ABI_CALL(0x00021158u, sub_00021158); /* call 0x00021158 */

loc_0008D96B: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0xA8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008D99E; /* jl: less (signed <) */

loc_0008D97D: ;
    PUSH32(esp, 8);
    ecx = 0x8EFCB8;
    PUSH32(esp, 0x0008D989u); RECOMP_ABI_CALL(0x00026DE7u, sub_00026DE7); /* call 0x00026DE7 */

loc_0008D989: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008D99E; /* jge: greater or equal (signed >=) */

loc_0008D999: ;
    PUSH32(esp, 0x0008D99Eu); RECOMP_ABI_CALL(0x0008CB10u, sub_0008CB10); /* call 0x0008CB10 */

loc_0008D99E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008D9B0
 * Original: 0x0008D9B0 - 0x0008DB64 (436 bytes, 122 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D9B0(void)
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

loc_0008D9B0: ;
    eax = MEM32(esi + 0x54);
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x70));
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008DB60; /* je: equal / zero */

loc_0008D9C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008DB60; /* je: equal / zero */

loc_0008D9CB: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0008D9F0; /* jl: less (signed <) */

loc_0008D9DB: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x8E8FA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x8E8FA8), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008D9F0; /* jne: not equal / not zero */

loc_0008D9E4: ;
    PUSH32(esp, 9);
    ecx = 0x8EFCB8;
    PUSH32(esp, 0x0008D9F0u); RECOMP_ABI_CALL(0x00026DE7u, sub_00026DE7); /* call 0x00026DE7 */

loc_0008D9F0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0008D9FAu); RECOMP_ABI_CALL(0x00017635u, sub_00017635); /* call 0x00017635 */

loc_0008D9FA: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0xD);
    ecx = edi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008DA0Du); RECOMP_ABI_CALL(0x00017635u, sub_00017635); /* call 0x00017635 */

loc_0008DA0D: ;
    ebp = MEM32(0x8E9BBC);
    PUSH32(esp, 0x383);
    PUSH32(esp, 0x7BADDC);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0x14);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008DA2Eu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0008DA2E: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebp));
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    POP32(esp, ebp);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008DB60; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_0008DA49: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x6C) = 8;
    PUSH32(esp, 0x0008DA61u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0008DA61: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DA8B; /* je: equal / zero */

loc_0008DA65: ;
    PUSH32(esp, 0x0008DA6Au); RECOMP_ABI_CALL(0x0001C491u, sub_0001C491); /* call 0x0001C491 */

loc_0008DA6A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x28) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008DA82; /* jne: not equal / not zero */

loc_0008DA6F: ;
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DA82; /* je: equal / zero */

loc_0008DA76: ;
    eax = 1;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    goto loc_0008DA8D;

loc_0008DA82: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    goto loc_0008DA8D;

loc_0008DA8B: ;
    PUSH32(esp, 1);

loc_0008DA8D: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    ecx = esp + 0x48;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008DA9Au); RECOMP_ABI_CALL(0x00030DF6u, sub_00030DF6); /* call 0x00030DF6 */

loc_0008DA9A: ;
    PUSH32(esp, 8);
    edx = esp + 4;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008DAA8u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0008DAA8: ;
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(esi + 0x39));
    _cf = 0; /* logical op clears CF */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 8);
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(edi + 0x39));
    edx = esp + 0x44;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = 6;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    MEM16(esp + 0x30) = 0x3B;
    MEM8(esp + 0x40) = LO8(eax);
    MEM8(esp + 0x41) = LO8(ecx);
    MEM32(esp + 0x24) = 0x7B1E00;
    PUSH32(esp, 0x0008DAF6u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0008DAF6: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = 4;
    MEM32(esp + 0x38) = 6;
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, 0x0008DB28u); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_0008DB28: ;
    ecx = eax;
    PUSH32(esp, 0x0008DB2Fu); RECOMP_ABI_CALL(0x0001E13Du, sub_0001E13D); /* call 0x0001E13D */

loc_0008DB2F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 8) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0008DB4E; /* je: equal / zero */

loc_0008DB37: ;
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x0008DB46u); RECOMP_ABI_CALL(0x00030DF6u, sub_00030DF6); /* call 0x00030DF6 */

loc_0008DB46: ;
    MEM32(esp + 0x6C) = 0xE;

loc_0008DB4E: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008DB5Du); RECOMP_ABI_CALL(0x00011307u, sub_00011307); /* call 0x00011307 */

loc_0008DB5D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008DB60: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x70)) >> 32) & 1);
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008DBE0
 * Original: 0x0008DBE0 - 0x0008DD06 (294 bytes, 99 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008DBE0: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x70) = 8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0008DC01u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0008DC01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DC17; /* je: equal / zero */

loc_0008DC05: ;
    PUSH32(esp, 0x0008DC0Au); RECOMP_ABI_CALL(0x0001C491u, sub_0001C491); /* call 0x0001C491 */

loc_0008DC0A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008DC17; /* jne: not equal / not zero */

loc_0008DC0F: ;
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DC17; /* je: equal / zero */

loc_0008DC14: ;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0008DC17: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x50;
    PUSH32(esp, 0x0008DC25u); RECOMP_ABI_CALL(0x00030DF6u, sub_00030DF6); /* call 0x00030DF6 */

loc_0008DC25: ;
    PUSH32(esp, 8);
    eax = esp + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008DC32u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0008DC32: ;
    SET_LO8(ecx, MEM8(edi + 0x39));
    SET_LO8(edx, MEM8(esi + 0x39));
    PUSH32(esp, 8);
    eax = esp + 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 7;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM16(esp + 0x34) = 0x3B;
    MEM8(esp + 0x44) = LO8(ecx);
    MEM8(esp + 0x45) = LO8(edx);
    MEM32(esp + 0x28) = 0x7B1E00;
    PUSH32(esp, 0x0008DC6Cu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0008DC6C: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEM32(esp + 0x54) = ecx;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x5C) = ebp;
    MEM32(esp + 0x60) = 6;
    MEM32(esp + 0x68) = edx;
    PUSH32(esp, 0x0008DC9Bu); RECOMP_ABI_CALL(0x00011389u, sub_00011389); /* call 0x00011389 */

loc_0008DC9B: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0008DCB2u); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_0008DCB2: ;
    ecx = eax;
    PUSH32(esp, 0x0008DCB9u); RECOMP_ABI_CALL(0x0001E13Du, sub_0001E13D); /* call 0x0001E13D */

loc_0008DCB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DCEC; /* je: equal / zero */

loc_0008DCBD: ;
    PUSH32(esp, 4);
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x50;
    PUSH32(esp, 0x0008DCCCu); RECOMP_ABI_CALL(0x00030DF6u, sub_00030DF6); /* call 0x00030DF6 */

loc_0008DCCC: ;
    MEM32(esp + 0x70) = 0xE;

loc_0008DCD4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    ecx = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008DCE3u); RECOMP_ABI_CALL(0x00011307u, sub_00011307); /* call 0x00011307 */

loc_0008DCE3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008DCEC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008DCD4; /* jne: not equal / not zero */

loc_0008DCF0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008DCFDu); RECOMP_ABI_CALL(0x00011307u, sub_00011307); /* call 0x00011307 */

loc_0008DCFD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008DD50
 * Original: 0x0008DD50 - 0x0008DDA5 (85 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008DD50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x54);
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008DD7D; /* jne: not equal / not zero */

loc_0008DD62: ;
    eax = MEM32(esi + 0x248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008DD7D; /* jne: not equal / not zero */

loc_0008DD6C: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DD7D; /* je: equal / zero */

loc_0008DD72: ;
    ecx = esi;
    PUSH32(esp, 0x0008DD79u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0008DD79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DD82; /* je: equal / zero */

loc_0008DD7D: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0008DD82: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x0008DD8Bu); RECOMP_ABI_CALL(0x0008D020u, sub_0008D020); /* call 0x0008D020 */

loc_0008DD8B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DDA0; /* je: equal / zero */

loc_0008DD8F: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0008DD9Bu); RECOMP_ABI_CALL(0x000226FCu, sub_000226FC); /* call 0x000226FC */

loc_0008DD9B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_0008DDA0: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008DDC0
 * Original: 0x0008DDC0 - 0x0008DFC4 (516 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DDC0(void)
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

loc_0008DDC0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, edi);
    esi = eax;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0008DDD9u); RECOMP_ABI_CALL(0x0001B2F3u, sub_0001B2F3); /* call 0x0001B2F3 */

loc_0008DDD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DF25; /* je: equal / zero */

loc_0008DDE1: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008DDEDu); RECOMP_ABI_CALL(0x00015E61u, sub_00015E61); /* call 0x00015E61 */

loc_0008DDED: ;
    ebp = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008DE0A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0008DDFD: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_0008DE16;

loc_0008DE0A: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0008DE12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DE0Fu); } /* indirect call */
    }

loc_0008DE12: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_0008DE16: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0008DE1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DE1Bu); } /* indirect call */
    }

loc_0008DE1E: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7A9980)); /* fsub dword ptr [0x7a9980] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0008DFBC; /* ja: above (unsigned >) */

loc_0008DE32: ;
    eax = MEM32(edi + 0x54);
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008DFA3; /* jne: not equal / not zero */

loc_0008DE41: ;
    SET_LO8(ecx, LO8(ecx) & 0xF1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 5) = LO8(ecx);
    eax = MEM32(esi + 0x54);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40400000);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008DE97; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0008DE68: ;
    edx = MEM32(edi + 0x54);
    MEM8(edx + 8) = 1;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249CF);
    PUSH32(esp, 0x8C250);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0008DE8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DE89u); } /* indirect call */
    }

loc_0008DE8C: ;
    eax = MEM32(esi + 0x54);
    MEM8(eax + 8) = 1;
    SET_LO8(ebx, 1);
    goto loc_0008DEB4;

loc_0008DE97: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249CF);
    PUSH32(esp, 0x1231F);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0008DEB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DEB1u); } /* indirect call */
    }

loc_0008DEB4: ;
    edx = MEM32(ebp + 8);
    ebp = MEM32(ebp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF4 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x69 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008DED3; /* jl: less (signed <) */

loc_0008DECE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x6A (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008DEDA; /* jle: less or equal (signed <=) */

loc_0008DED3: ;
    SET_LO8(ecx, LO8(ebx));
    PUSH32(esp, 0x0008DEDAu); RECOMP_ABI_CALL(0x0008D600u, sub_0008D600); /* call 0x0008D600 */

loc_0008DEDA: ;
    edx = MEM32(esi + 0x54);
    MEM32(edx + 0xC) = 4;
    eax = MEM32(esi + 0x54);
    MEM32(eax) = MEM32(eax) | 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x54);
    MEM32(eax) = MEM32(eax) | 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(eax, MEM8(edi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DFA3; /* jge: greater or equal (signed >=) */

loc_0008DEFE: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0008DF07u); RECOMP_ABI_CALL(0x000144FDu, sub_000144FD); /* call 0x000144FD */

loc_0008DF07: ;
    SET_LO8(eax, MEM8(edi + 0x39));
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = 1;
    MEM8(esp + 0x34) = LO8(eax);
    PUSH32(esp, 0x0008DF20u); RECOMP_ABI_CALL(0x00025C0Du, sub_00025C0D); /* call 0x00025C0D */

loc_0008DF20: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008DFA3;

loc_0008DF25: ;
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8E9BB0); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008DF40u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_0008DF40: ;
    edx = MEM32(esi + 0x54);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DFA3; /* je: equal / zero */

loc_0008DF4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DFA3; /* je: equal / zero */

loc_0008DF50: ;
    PUSH32(esp, 0x0008DF55u); RECOMP_ABI_CALL(0x0001C491u, sub_0001C491); /* call 0x0001C491 */

loc_0008DF55: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008DF68; /* jne: not equal / not zero */

loc_0008DF5A: ;
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DF68; /* je: equal / zero */

loc_0008DF61: ;
    eax = 1;
    goto loc_0008DF6A;

loc_0008DF68: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008DF6A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x44) = 0xA;
    ecx = ecx + ecx + -1;
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0008DF94u); RECOMP_ABI_CALL(0x00030DF6u, sub_00030DF6); /* call 0x00030DF6 */

loc_0008DF94: ;
    edx = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008DFA0u); RECOMP_ABI_CALL(0x00011307u, sub_00011307); /* call 0x00011307 */

loc_0008DFA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008DFA3: ;
    ecx = MEM32(esi + 0x3D8);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x8AC088 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008DFB7; /* jne: not equal / not zero */

loc_0008DFB1: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DFBC; /* je: equal / zero */

loc_0008DFB7: ;
    PUSH32(esp, 0x0008DFBCu); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_0008DFBC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008E050
 * Original: 0x0008E050 - 0x0008E204 (436 bytes, 122 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E050(void)
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

loc_0008E050: ;
    eax = MEM32(esi + 0x54);
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x70));
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008E200; /* je: equal / zero */

loc_0008E062: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008E200; /* je: equal / zero */

loc_0008E06B: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0008E090; /* jl: less (signed <) */

loc_0008E07B: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x8E8FA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x8E8FA8), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008E090; /* jne: not equal / not zero */

loc_0008E084: ;
    PUSH32(esp, 7);
    ecx = 0x8EFCB8;
    PUSH32(esp, 0x0008E090u); RECOMP_ABI_CALL(0x00026DE7u, sub_00026DE7); /* call 0x00026DE7 */

loc_0008E090: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0008E09Au); RECOMP_ABI_CALL(0x00017635u, sub_00017635); /* call 0x00017635 */

loc_0008E09A: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0xD);
    ecx = edi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008E0ADu); RECOMP_ABI_CALL(0x00017635u, sub_00017635); /* call 0x00017635 */

loc_0008E0AD: ;
    ebp = MEM32(0x8E9BC0);
    PUSH32(esp, 0x383);
    PUSH32(esp, 0x7BADDC);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0x14);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008E0CEu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0008E0CE: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebp));
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    POP32(esp, ebp);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008E200; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_0008E0E9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x6C) = 8;
    PUSH32(esp, 0x0008E101u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0008E101: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E12B; /* je: equal / zero */

loc_0008E105: ;
    PUSH32(esp, 0x0008E10Au); RECOMP_ABI_CALL(0x0001C491u, sub_0001C491); /* call 0x0001C491 */

loc_0008E10A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x28) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008E122; /* jne: not equal / not zero */

loc_0008E10F: ;
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E122; /* je: equal / zero */

loc_0008E116: ;
    eax = 1;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    goto loc_0008E12D;

loc_0008E122: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    goto loc_0008E12D;

loc_0008E12B: ;
    PUSH32(esp, 1);

loc_0008E12D: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    ecx = esp + 0x48;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008E13Au); RECOMP_ABI_CALL(0x00030DF6u, sub_00030DF6); /* call 0x00030DF6 */

loc_0008E13A: ;
    PUSH32(esp, 8);
    edx = esp + 4;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008E148u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0008E148: ;
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(esi + 0x39));
    _cf = 0; /* logical op clears CF */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 8);
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(edi + 0x39));
    edx = esp + 0x44;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = 6;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    MEM16(esp + 0x30) = 0x3B;
    MEM8(esp + 0x40) = LO8(eax);
    MEM8(esp + 0x41) = LO8(ecx);
    MEM32(esp + 0x24) = 0x7B1E00;
    PUSH32(esp, 0x0008E196u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0008E196: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = 4;
    MEM32(esp + 0x38) = 6;
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, 0x0008E1C8u); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_0008E1C8: ;
    ecx = eax;
    PUSH32(esp, 0x0008E1CFu); RECOMP_ABI_CALL(0x0001E13Du, sub_0001E13D); /* call 0x0001E13D */

loc_0008E1CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 8) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0008E1EE; /* je: equal / zero */

loc_0008E1D7: ;
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x0008E1E6u); RECOMP_ABI_CALL(0x00030DF6u, sub_00030DF6); /* call 0x00030DF6 */

loc_0008E1E6: ;
    MEM32(esp + 0x6C) = 0xE;

loc_0008E1EE: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008E1FDu); RECOMP_ABI_CALL(0x00011307u, sub_00011307); /* call 0x00011307 */

loc_0008E1FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008E200: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x70)) >> 32) & 1);
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008E280
 * Original: 0x0008E280 - 0x0008E506 (646 bytes, 201 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0008E280(void)
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

loc_0008E280: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0008E3EF; /* je: equal / zero */

loc_0008E2AA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(edi);
    esi = MEM32(edi + 0x20);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = edi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0008E2D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E2D4u); } /* indirect call */
    }

loc_0008E2D7: ;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E2E6u); RECOMP_ABI_CALL(0x0001AD35u, sub_0001AD35); /* call 0x0001AD35 */

loc_0008E2E6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(edi);
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = edi;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0008E316u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E313u); } /* indirect call */
    }

loc_0008E316: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x48;
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E324u); RECOMP_ABI_CALL(0x0002D359u, sub_0002D359); /* call 0x0002D359 */

loc_0008E324: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E32F; /* je: equal / zero */

loc_0008E32B: ;
    ebx = esp + 0x40;

loc_0008E32F: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x24;
    MEM32(esp + 0x28) = edx;
    edx = MEM32(0x8E9B90);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x38) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E359u); RECOMP_ABI_CALL(0x00023F2Au, sub_00023F2A); /* call 0x00023F2A */

loc_0008E359: ;
    ecx = MEM32(0x8E9A10);
    edx = MEM32(0x8E8F84);
    PUSH32(esp, ebx);
    esi = eax;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E375u); RECOMP_ABI_CALL(0x0002F29Eu, sub_0002F29E); /* call 0x0002F29E */

loc_0008E375: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E3CB; /* je: equal / zero */

loc_0008E37C: ;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E383u); RECOMP_ABI_CALL(0x0008D900u, sub_0008D900); /* call 0x0008D900 */

loc_0008E383: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E3CB; /* je: equal / zero */

loc_0008E387: ;
    ecx = MEM32(esp + 0x18);
    eax = 0xA;
    MEM32(edi + 0x2C) = eax;
    edx = MEM32(ecx * 4 + 0x8E9058);
    MEM32(edx + 0x2C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = eax;
    SET_LO8(eax, MEM8(edi + 0x39));
    ecx = esp + 0x50;
    MEM16(esp + 0x5C) = 0x3C;
    MEM8(esp + 0x6C) = LO8(eax);
    MEM8(esp + 0x6D) = 1;
    MEM32(esp + 0x50) = 0x7BAE14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E3CBu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0008E3CB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E3EF; /* je: equal / zero */

loc_0008E3CF: ;
    edx = MEM32(0x8E9A14);
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E3E3u); RECOMP_ABI_CALL(0x0003781Du, sub_0003781D); /* call 0x0003781D */

loc_0008E3E3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E3EF; /* je: equal / zero */

loc_0008E3EA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E3EFu); RECOMP_ABI_CALL(0x0008E050u, sub_0008E050); /* call 0x0008E050 */

loc_0008E3EF: ;
    eax = MEM32(edi + 0x260);
    xmm0 = XMM_SCALAR(MEMF(0x8E9B18)); /* movss */
    esi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0008E470; /* jne: not equal / not zero */

loc_0008E40C: ;
    ecx = MEM32(edi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0008E414u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E411u); } /* indirect call */
    }

loc_0008E414: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    fp_push(MEMF(0x7AD450)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0008E4FF; /* jbe: below or equal (unsigned <=) */

loc_0008E436: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E456; /* je: equal / zero */

loc_0008E442: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E44Eu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0008E44E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E4FF; /* je: equal / zero */

loc_0008E456: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E45Cu); RECOMP_ABI_CALL(0x000183BEu, sub_000183BE); /* call 0x000183BE */

loc_0008E45C: ;
    eax = MEM32(edi + 0x54);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008E470: ;
    SET_LO8(eax, MEM8(edi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = MEM32(esp + 0x18);
    if (CMP_GE(_fas, _fbs)) goto loc_0008E497; /* jge: greater or equal (signed >=) */

loc_0008E47E: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E486u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0008E486: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E497; /* je: equal / zero */

loc_0008E48A: ;
    MEM32(edi + 0x260) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008E497: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E49Eu); RECOMP_ABI_CALL(0x0008C2E0u, sub_0008C2E0); /* call 0x0008C2E0 */

loc_0008E49E: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx);
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008E4A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E4A5u); } /* indirect call */
    }

loc_0008E4A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008E4B8; /* jne: not equal / not zero */

loc_0008E4AC: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E4B4u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0008E4B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E4FF; /* je: equal / zero */

loc_0008E4B8: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8C3F0);
    PUSH32(esp, 0x8E280);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0008E4D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E4D3u); } /* indirect call */
    }

loc_0008E4D6: ;
    ecx = MEM32(edi + 0x54);
    MEM32(ecx + 0xC) = 6;
    ecx = MEM32(edi + 0x48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E4E8u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0008E4E8: ;
    MEM8(eax + 0x3E0) = 1;
    MEM32(eax + 0x3E4) = 0;
    MEM32(eax + 0x3E8) = esi;

loc_0008E4FF: ;
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
 * sub_0008E5B0
 * Original: 0x0008E5B0 - 0x0008E884 (724 bytes, 226 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0008E5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E5B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E9B10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E5CCu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0008E5CC: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    edx = MEM32(0x8E8F84);
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(MEM32(edx + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0xA8), ecx (32-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0008E6EB; /* je: equal / zero */

loc_0008E5E8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(edi);
    esi = MEM32(edi + 0x20);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = edi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0008E615u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E612u); } /* indirect call */
    }

loc_0008E615: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E624u); RECOMP_ABI_CALL(0x0001AD35u, sub_0001AD35); /* call 0x0001AD35 */

loc_0008E624: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(edi);
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = edi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0008E654u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E651u); } /* indirect call */
    }

loc_0008E654: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x38;
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E662u); RECOMP_ABI_CALL(0x0002D359u, sub_0002D359); /* call 0x0002D359 */

loc_0008E662: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E66D; /* je: equal / zero */

loc_0008E669: ;
    ebx = esp + 0x30;

loc_0008E66D: ;
    edx = MEM32(0x8E9A10);
    eax = MEM32(0x8E8F84);
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E686u); RECOMP_ABI_CALL(0x0002F29Eu, sub_0002F29E); /* call 0x0002F29E */

loc_0008E686: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E694; /* je: equal / zero */

loc_0008E68D: ;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E694u); RECOMP_ABI_CALL(0x0008D960u, sub_0008D960); /* call 0x0008D960 */

loc_0008E694: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x8E9B90);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E6BEu); RECOMP_ABI_CALL(0x00023F2Au, sub_00023F2A); /* call 0x00023F2A */

loc_0008E6BE: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E6E7; /* je: equal / zero */

loc_0008E6C7: ;
    ecx = MEM32(0x8E9A14);
    PUSH32(esp, ebx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E6DBu); RECOMP_ABI_CALL(0x0003781Du, sub_0003781D); /* call 0x0003781D */

loc_0008E6DB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E6E7; /* je: equal / zero */

loc_0008E6E2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E6E7u); RECOMP_ABI_CALL(0x0008D9B0u, sub_0008D9B0); /* call 0x0008D9B0 */

loc_0008E6E7: ;
    SET_LO8(ebx, MEM8(esp + 0x13));

loc_0008E6EB: ;
    eax = MEM32(edi + 0x258);
    esi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008E7B5; /* jne: not equal / not zero */

loc_0008E6FE: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008E706u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E703u); } /* indirect call */
    }

loc_0008E706: ;
    _fb = (uint32_t)(0xFFFFFF19u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF19u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0008E86D; /* ja: above (unsigned >) */

loc_0008E714: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x8E884); /* switch: 8 entries, 5 targets */
    if (_jt == 0x0008E71Bu) goto loc_0008E71B;
    if (_jt == 0x0008E731u) goto loc_0008E731;
    if (_jt == 0x0008E740u) goto loc_0008E740;
    if (_jt == 0x0008E772u) goto loc_0008E772;
    if (_jt == 0x0008E77Bu) goto loc_0008E77B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0008E71B: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E722u); RECOMP_ABI_CALL(0x00031391u, sub_00031391); /* call 0x00031391 */

loc_0008E722: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E86D; /* je: equal / zero */

loc_0008E72A: ;
    eax = 0xEE;
    goto loc_0008E796;

loc_0008E731: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E86D; /* je: equal / zero */

loc_0008E739: ;
    eax = 0xEE;
    goto loc_0008E796;

loc_0008E740: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E86D; /* je: equal / zero */

loc_0008E748: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E74Eu); RECOMP_ABI_CALL(0x00035342u, sub_00035342); /* call 0x00035342 */

loc_0008E74E: ;
    eax = MEM32(edi + 0x54);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edi + 0x54);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    MEM32(eax + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E768u); RECOMP_ABI_CALL(0x0001AF38u, sub_0001AF38); /* call 0x0001AF38 */

loc_0008E768: ;
    MEM32(edi + 0x2C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008E772: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E779u); RECOMP_ABI_CALL(0x00031391u, sub_00031391); /* call 0x00031391 */

loc_0008E779: ;
    goto loc_0008E789;

loc_0008E77B: ;
    ecx = MEM32(0x8E9B10);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E789u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0008E789: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E86D; /* je: equal / zero */

loc_0008E791: ;
    eax = 0xEB;

loc_0008E796: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8C680);
    PUSH32(esp, 0x35342);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    goto loc_0008E866;

loc_0008E7B5: ;
    SET_LO8(eax, MEM8(edi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008E7E5; /* jge: greater or equal (signed >=) */

loc_0008E7BF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E7E5; /* je: equal / zero */

loc_0008E7C3: ;
    MEM32(edi + 0x258) = esi;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E7DBu); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_0008E7DB: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E7E2u); RECOMP_ABI_CALL(0x0002C3DCu, sub_0002C3DC); /* call 0x0002C3DC */

loc_0008E7E2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008E7E5: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008E7EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E7EAu); } /* indirect call */
    }

loc_0008E7ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E844; /* je: equal / zero */

loc_0008E7F4: ;
    ecx = MEM32(edi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0008E7FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E7F9u); } /* indirect call */
    }

loc_0008E7FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xED) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xED (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E844; /* je: equal / zero */

loc_0008E803: ;
    ecx = MEM32(edi + 0x25C);
    esi = MEM32(ecx * 4 + 0x7BACC8);
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008E818u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E815u); } /* indirect call */
    }

loc_0008E818: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008E820; /* jne: not equal / not zero */

loc_0008E81C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E86D; /* je: equal / zero */

loc_0008E820: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8C680);
    PUSH32(esp, 0x8E5B0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0008E842u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E83Fu); } /* indirect call */
    }

loc_0008E842: ;
    goto loc_0008E86D;

loc_0008E844: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E86D; /* je: equal / zero */

loc_0008E848: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8C680);
    PUSH32(esp, 0x8E5B0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xED);

loc_0008E866: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0008E86Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E86Au); } /* indirect call */
    }

loc_0008E86D: ;
    eax = MEM32(edi + 0x54);
    MEM32(eax + 0xC) = 7;
    edi = MEM32(edi + 0x54);
    MEM32(edi) = MEM32(edi) | 4;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E970
 * Original: 0x0008E970 - 0x0008E9CA (90 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E970: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x54);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E9C8; /* je: equal / zero */

loc_0008E97E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E9C8; /* je: equal / zero */

loc_0008E983: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0x0008E98Eu); RECOMP_ABI_CALL(0x000121B2u, sub_000121B2); /* call 0x000121B2 */

loc_0008E98E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = MEM32(0x8E8F84);
    if (CMP_NE(_fa, _fb)) goto loc_0008E9A4; /* jne: not equal / not zero */

loc_0008E998: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    _fa = (uint32_t)(MEM32(eax + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E9C8; /* je: equal / zero */

loc_0008E9A4: ;
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008E9C3; /* jl: less (signed <) */

loc_0008E9AE: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x8E8FA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x8E8FA8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008E9C3; /* jne: not equal / not zero */

loc_0008E9B7: ;
    PUSH32(esp, 0xB);
    ecx = 0x8EFCB8;
    PUSH32(esp, 0x0008E9C3u); RECOMP_ABI_CALL(0x00026DE7u, sub_00026DE7); /* call 0x00026DE7 */

loc_0008E9C3: ;
    PUSH32(esp, 0x0008E9C8u); RECOMP_ABI_CALL(0x0008DBE0u, sub_0008DBE0); /* call 0x0008DBE0 */

loc_0008E9C8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E9E0
 * Original: 0x0008E9E0 - 0x0008EB73 (403 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0008E9E0(void)
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

loc_0008E9E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0xA8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008EB6D; /* je: equal / zero */

loc_0008EA06: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008EA12u); RECOMP_ABI_CALL(0x0002D91Cu, sub_0002D91C); /* call 0x0002D91C */

loc_0008EA12: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EB6D; /* je: equal / zero */

loc_0008EA1A: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008EA26u); RECOMP_ABI_CALL(0x00033024u, sub_00033024); /* call 0x00033024 */

loc_0008EA26: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    ecx = MEM32(0x8EB3BC);
    edi = MEM32(edx * 4 + 0x8E8EB8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008EA3Du); RECOMP_ABI_CALL(0x0001B2F3u, sub_0001B2F3); /* call 0x0001B2F3 */

loc_0008EA3D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EAA0; /* je: equal / zero */

loc_0008EA41: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008EA4Du); RECOMP_ABI_CALL(0x00015E61u, sub_00015E61); /* call 0x00015E61 */

loc_0008EA4D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008EA68; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0008EA5B: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_0008EA73;

loc_0008EA68: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008EA6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EA6Cu); } /* indirect call */
    }

loc_0008EA6F: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0008EA73: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0008EA7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EA78u); } /* indirect call */
    }

loc_0008EA7B: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7A9980)); /* fsub dword ptr [0x7a9980] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0008EB6D; /* jb: below (unsigned <) */

loc_0008EA91: ;
    eax = edi;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008EA9Au); RECOMP_ABI_CALL(0x0008DDC0u, sub_0008DDC0); /* call 0x0008DDC0 */

loc_0008EA9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008EAA0: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008EAACu); RECOMP_ABI_CALL(0x0002673Eu, sub_0002673E); /* call 0x0002673E */

loc_0008EAAC: ;
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x28) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x24) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x20) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    edx = MEM32(esp + 0x1C);
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x8E9A10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008EB6D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_0008EB64: ;
    eax = edi;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008EB6Du); RECOMP_ABI_CALL(0x0008DDC0u, sub_0008DDC0); /* call 0x0008DDC0 */

loc_0008EB6D: ;
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
 * sub_0008EBE0
 * Original: 0x0008EBE0 - 0x0008ED33 (339 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0008EBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008EBE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0xA8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008ED06; /* je: equal / zero */

loc_0008EC07: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(edi);
    esi = MEM32(edi + 0x20);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = edi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0008EC34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EC31u); } /* indirect call */
    }

loc_0008EC34: ;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008EC43u); RECOMP_ABI_CALL(0x0001AD35u, sub_0001AD35); /* call 0x0001AD35 */

loc_0008EC43: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(edi);
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = edi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0008EC73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EC70u); } /* indirect call */
    }

loc_0008EC73: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x38;
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008EC81u); RECOMP_ABI_CALL(0x0002D359u, sub_0002D359); /* call 0x0002D359 */

loc_0008EC81: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EC8C; /* je: equal / zero */

loc_0008EC88: ;
    ebx = esp + 0x30;

loc_0008EC8C: ;
    edx = MEM32(0x8E9A10);
    eax = MEM32(0x8E8F84);
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ECA5u); RECOMP_ABI_CALL(0x0002F29Eu, sub_0002F29E); /* call 0x0002F29E */

loc_0008ECA5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008ECB3; /* je: equal / zero */

loc_0008ECAC: ;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ECB3u); RECOMP_ABI_CALL(0x0008D900u, sub_0008D900); /* call 0x0008D900 */

loc_0008ECB3: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x8E9B90);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ECDDu); RECOMP_ABI_CALL(0x00023F2Au, sub_00023F2A); /* call 0x00023F2A */

loc_0008ECDD: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008ED06; /* je: equal / zero */

loc_0008ECE6: ;
    ecx = MEM32(0x8E9A14);
    PUSH32(esp, ebx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ECFAu); RECOMP_ABI_CALL(0x0003781Du, sub_0003781D); /* call 0x0003781D */

loc_0008ECFA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008ED06; /* je: equal / zero */

loc_0008ED01: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ED06u); RECOMP_ABI_CALL(0x0008E050u, sub_0008E050); /* call 0x0008E050 */

loc_0008ED06: ;
    edx = MEM32(0x8E9B10);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ED14u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0008ED14: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008ED2C; /* je: equal / zero */

loc_0008ED18: ;
    eax = MEM32(edi + 0x54);
    ecx = edi;
    MEM32(eax + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ED29u); RECOMP_ABI_CALL(0x0001AF38u, sub_0001AF38); /* call 0x0001AF38 */

loc_0008ED29: ;
    MEM32(edi + 0x2C) = eax;

loc_0008ED2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0008ED90
 * Original: 0x0008ED90 - 0x0008EE5B (203 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008ED90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008ED90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008EE59; /* jne: not equal / not zero */

loc_0008EDA3: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EE59; /* je: equal / zero */

loc_0008EDAD: ;
    eax = MEM32(esi + 0x54);
    MEM32(esi + 0x258) = 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008EDD0; /* jne: not equal / not zero */

loc_0008EDC0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008EDCBu); RECOMP_ABI_CALL(0x0002C3DCu, sub_0002C3DC); /* call 0x0002C3DC */

loc_0008EDCB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008EDD0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008EE59; /* jne: not equal / not zero */

loc_0008EDD9: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, 0x0008EDE1u); RECOMP_ABI_CALL(0x0001A6B9u, sub_0001A6B9); /* call 0x0001A6B9 */

loc_0008EDE1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008EE15; /* jne: not equal / not zero */

loc_0008EDE5: ;
    ecx = MEM32(0x8E9BB8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x0008EDF4u); RECOMP_ABI_CALL(0x000200DCu, sub_000200DC); /* call 0x000200DC */

loc_0008EDF4: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8C8D0);
    PUSH32(esp, 0x8E5B0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xE7);
    goto loc_0008EE42;

loc_0008EE15: ;
    eax = MEM32(0x8E9BB4);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EE23u); RECOMP_ABI_CALL(0x000200DCu, sub_000200DC); /* call 0x000200DC */

loc_0008EE23: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8C680);
    PUSH32(esp, 0x8E5B0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xEC);

loc_0008EE42: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0008EE49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EE46u); } /* indirect call */
    }

loc_0008EE49: ;
    eax = MEM32(esi + 0x54);
    MEM32(eax) = MEM32(eax) | 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x54);
    MEM32(eax + 0xC) = 7;

loc_0008EE59: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008EE90
 * Original: 0x0008EE90 - 0x0008EF6F (223 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008EE90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008EEED; /* jne: not equal / not zero */

loc_0008EE9F: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EEED; /* je: equal / zero */

loc_0008EEA5: ;
    SET_LO8(ecx, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008EEBE; /* jge: greater or equal (signed >=) */

loc_0008EEAF: ;
    eax = MEM32(0x8E8F84);
    edx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008EEED; /* jl: less (signed <) */

loc_0008EEBE: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008EEDD; /* jne: not equal / not zero */

loc_0008EEC7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008EEED; /* jl: less (signed <) */

loc_0008EECB: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008EED6u); RECOMP_ABI_CALL(0x000322FFu, sub_000322FF); /* call 0x000322FF */

loc_0008EED6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008EEDD: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008EEED; /* jne: not equal / not zero */

loc_0008EEE2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0008EEE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EEE6u); } /* indirect call */
    }

loc_0008EEE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008EEF1; /* jne: not equal / not zero */

loc_0008EEED: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008EEF1: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esi + 0x260) = 0;
    PUSH32(esp, 0x0008EF07u); RECOMP_ABI_CALL(0x000322FFu, sub_000322FF); /* call 0x000322FF */

loc_0008EF07: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0008EF11u); RECOMP_ABI_CALL(0x0008C2E0u, sub_0008C2E0); /* call 0x0008C2E0 */

loc_0008EF11: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008EF1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EF18u); } /* indirect call */
    }

loc_0008EF1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EF6A; /* je: equal / zero */

loc_0008EF1F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8C3F0);
    PUSH32(esp, 0x8E280);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0008EF41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EF3Eu); } /* indirect call */
    }

loc_0008EF41: ;
    ecx = MEM32(esi + 0x54);
    MEM32(ecx + 0xC) = 6;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x0008EF53u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0008EF53: ;
    MEM8(eax + 0x3E0) = 1;
    MEM32(eax + 0x3E4) = 0;
    MEM32(eax + 0x3E8) = edi;

loc_0008EF6A: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008EFB0
 * Original: 0x0008EFB0 - 0x0008F15C (428 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0008EFB0(void)
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

loc_0008EFB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0008EFC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EFC4u); } /* indirect call */
    }

loc_0008EFC7: ;
    fp_push(MEMF(0x7BAB68)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0008F131; /* jbe: below or equal (unsigned <=) */

loc_0008EFD9: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0008EFE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EFDEu); } /* indirect call */
    }

loc_0008EFE1: ;
    fp_push(MEMF(0x7AD42C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0008F131; /* jbe: below or equal (unsigned <=) */

loc_0008EFF1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(edi);
    esi = MEM32(edi + 0x20);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = edi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0008F01Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F01Bu); } /* indirect call */
    }

loc_0008F01E: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F02Du); RECOMP_ABI_CALL(0x0001AD35u, sub_0001AD35); /* call 0x0001AD35 */

loc_0008F02D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(edi);
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = edi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0008F063u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F060u); } /* indirect call */
    }

loc_0008F063: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x38;
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F071u); RECOMP_ABI_CALL(0x0002D359u, sub_0002D359); /* call 0x0002D359 */

loc_0008F071: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F080; /* je: equal / zero */

loc_0008F078: ;
    ecx = esp + 0x30;
    MEM32(esp + 0xC) = ecx;

loc_0008F080: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    eax = MEM32(0x8E9B90);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F0B5u); RECOMP_ABI_CALL(0x00023F2Au, sub_00023F2A); /* call 0x00023F2A */

loc_0008F0B5: ;
    esi = eax;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008F0C7; /* je: equal / zero */

loc_0008F0C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008F107; /* jne: not equal / not zero */

loc_0008F0C7: ;
    edx = MEM32(0x8E9B90);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F0D9u); RECOMP_ABI_CALL(0x0001D78Du, sub_0001D78D); /* call 0x0001D78D */

loc_0008F0D9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0008F105; /* je: equal / zero */

loc_0008F0E2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F107; /* je: equal / zero */

loc_0008F0E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F0EDu); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_0008F0ED: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F0F8u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_0008F0F8: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0008F107; /* jbe: below or equal (unsigned <=) */

loc_0008F105: ;
    esi = ebx;

loc_0008F107: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F131; /* je: equal / zero */

loc_0008F10B: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x8E9A14);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F123u); RECOMP_ABI_CALL(0x00032B4Cu, sub_00032B4C); /* call 0x00032B4C */

loc_0008F123: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F131; /* je: equal / zero */

loc_0008F12A: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F131u); RECOMP_ABI_CALL(0x0008E970u, sub_0008E970); /* call 0x0008E970 */

loc_0008F131: ;
    eax = MEM32(0x8E9B10);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F13Eu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0008F13E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F155; /* je: equal / zero */

loc_0008F142: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F148u); RECOMP_ABI_CALL(0x000183BEu, sub_000183BE); /* call 0x000183BE */

loc_0008F148: ;
    ecx = MEM32(edi + 0x54);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xC) = 0;

loc_0008F155: ;
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
 * sub_0008F1D0
 * Original: 0x0008F1D0 - 0x0008F370 (416 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F1D0(void)
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

loc_0008F1D0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0008F1E3; /* jne: not equal / not zero */

loc_0008F1DC: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008F1E3: ;
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7BAB68)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008F244; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0008F23E: ;
    MEMF(esp + 8) = xmm4.f[0]; /* movss */

loc_0008F244: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008F2B7; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0008F2B1: ;
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */

loc_0008F2B7: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x24) = ecx;
    ecx = 0x8E985C;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x0008F2D9u); RECOMP_ABI_CALL(0x0002FCF3u, sub_0002FCF3); /* call 0x0002FCF3 */

loc_0008F2D9: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7D0)); /* fmul dword ptr [0x7ab7d0] */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008F2F2u); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_0008F2F2: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0008F368; /* ja: above (unsigned >) */

loc_0008F305: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008F310u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_0008F310: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0008F368; /* ja: above (unsigned >) */

loc_0008F318: ;
    eax = ZX8(MEM8(eax + 0x8F378));
    { uint32_t _jt = MEM32(eax * 4 + 0x8F370); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0008F326u) goto loc_0008F326;
    if (_jt == 0x0008F368u) goto loc_0008F368;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0008F326: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008F331u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_0008F331: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0008F357; /* jl: less (signed <) */

loc_0008F339: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0008F357; /* jg: greater (signed >) */

loc_0008F33E: ;
    edx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6C)); /* movss */
    eax = MEM32(edi + 0x20);
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7BAB64); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x6C); /* comiss */
    if ((_fca > _fcb)) goto loc_0008F368; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax + 0x6C)) */

loc_0008F357: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008F35Fu); RECOMP_ABI_CALL(0x0001C149u, sub_0001C149); /* call 0x0001C149 */

loc_0008F35F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008F368: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
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
 * sub_0008F3F0
 * Original: 0x0008F3F0 - 0x0008F520 (304 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F3F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008F4DB; /* jne: not equal / not zero */

loc_0008F403: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F4DB; /* je: equal / zero */

loc_0008F40D: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008F42A; /* jge: greater or equal (signed >=) */

loc_0008F417: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008F4DB; /* jl: less (signed <) */

loc_0008F42A: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F4DB; /* je: equal / zero */

loc_0008F437: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008F4DB; /* jne: not equal / not zero */

loc_0008F440: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0008F447u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F444u); } /* indirect call */
    }

loc_0008F447: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F4DB; /* je: equal / zero */

loc_0008F44F: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(0x8E9B90);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edi = 0xC5;
    PUSH32(esp, 0x0008F469u); RECOMP_ABI_CALL(0x00023F2Au, sub_00023F2A); /* call 0x00023F2A */

loc_0008F469: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F48F; /* je: equal / zero */

loc_0008F470: ;
    edx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008F47Du); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_0008F47D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F48A; /* je: equal / zero */

loc_0008F485: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008F48F; /* jne: not equal / not zero */

loc_0008F48A: ;
    edi = 0xC8;

loc_0008F48F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8C380);
    PUSH32(esp, 0x8EFB0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0008F4B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F4AEu); } /* indirect call */
    }

loc_0008F4B1: ;
    ecx = MEM32(esi + 0x54);
    MEM32(ecx + 0xC) = 9;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x0008F4C3u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0008F4C3: ;
    MEM32(eax + 0x3E8) = edi;
    MEM8(eax + 0x3E0) = 1;
    MEM32(eax + 0x3E4) = 1;
    POP32(esp, edi);

loc_0008F4DB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F520
 * Original: 0x0008F520 - 0x0008F550 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008F520(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008F520: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    eax = MEM32(esp + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008F560
 * Original: 0x0008F560 - 0x0008F58E (46 bytes, 16 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008F560(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008F560: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008F5A0
 * Original: 0x0008F5A0 - 0x0008F5B3 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F5A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F5A0: ;
    edx = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 4;
    ecx = 0x33;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F5C0
 * Original: 0x0008F5C0 - 0x0008F5C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F5C0(void)
{

loc_0008F5C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008F5D0
 * Original: 0x0008F5D0 - 0x0008F60E (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F5D0: ;
    eax = MEM32(0x8EAD98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008F60D; /* jne: not equal / not zero */

loc_0008F5D9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD0);
    PUSH32(esp, 0x0008F5E5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0008F5E5: ;
    edx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F603; /* je: equal / zero */

loc_0008F5EE: ;
    PUSH32(esp, edi);
    edi = edx + 4;
    ecx = 0x33;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x8EAD98) = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0008F603: ;
    MEM32(0x8EAD98) = 0;

loc_0008F60D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008F620
 * Original: 0x0008F620 - 0x0008F639 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F620: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0008F633; /* je: equal / zero */

loc_0008F62A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008F630u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0008F630: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008F633: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008F640
 * Original: 0x0008F640 - 0x0008F64F (15 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F640(void)
{

loc_0008F640: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008F660
 * Original: 0x0008F660 - 0x0008F686 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F660: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 4;
    edi = 0x33;
    /* nop */

loc_0008F670: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F67D; /* je: equal / zero */

loc_0008F676: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0008F67Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F67Au); } /* indirect call */
    }

loc_0008F67D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008F670; /* jne: not equal / not zero */

loc_0008F683: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F690
 * Original: 0x0008F690 - 0x0008F6B6 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F690: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 4;
    edi = 0x33;
    /* nop */

loc_0008F6A0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F6AD; /* je: equal / zero */

loc_0008F6A6: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008F6ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F6AAu); } /* indirect call */
    }

loc_0008F6AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008F6A0; /* jne: not equal / not zero */

loc_0008F6B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F6C0
 * Original: 0x0008F6C0 - 0x0008F772 (178 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008F6C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8F95D0);
    eax = esi + 0x30;
    MEM32(eax) = ecx;
    edx = MEM32(0x8F95D4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x8F95D8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x8F95D0);
    edx = esi + 0x3C;
    MEM32(edx) = eax;
    ecx = MEM32(0x8F95D4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8F95D8);
    MEM32(edx + 8) = eax;
    edx = MEM32(0x8F95D0);
    ecx = esi + 0x48;
    MEM32(ecx) = edx;
    eax = MEM32(0x8F95D4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x8F95D8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(0x8F95D0);
    eax = esi + 0x54;
    MEM32(eax) = ecx;
    edx = MEM32(0x8F95D4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x8F95D8);
    MEM32(eax + 8) = ecx;
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008F76Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F767u); } /* indirect call */
    }

loc_0008F76A: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_0008F7A0
 * Original: 0x0008F7A0 - 0x0008F7DA (58 bytes, 18 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008F7A0(void)
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

loc_0008F7A0: ;
    fp_push(MEMF(ecx + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_push(MEMF(0x8B54DC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8B54E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8B54E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(ecx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008F7F0
 * Original: 0x0008F7F0 - 0x0008F85B (107 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F7F0(void)
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

loc_0008F7F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_push(MEMF(0x8B54DC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8B54E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8B54E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0008F82Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F82Au); } /* indirect call */
    }

loc_0008F82D: ;
    ecx = esi + 0x30;
    eax = MEM32(ecx);
    edx = esi + 0x3C;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    edx = esi + 0x48;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x54;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008F880
 * Original: 0x0008F880 - 0x0008F888 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F880(void)
{

loc_0008F880: ;
    MEM32(ecx + 0x10) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0008F890
 * Original: 0x0008F890 - 0x0008F8AB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F890(void)
{

loc_0008F890: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008F8A2u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_0008F8A2: ;
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F8C0
 * Original: 0x0008F8C0 - 0x0008F8F3 (51 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F8C0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F8EF; /* je: equal / zero */

loc_0008F8CA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7BAE4C);
    ecx = esi;
    PUSH32(esp, 0x0008F8DCu); RECOMP_ABI_CALL(0x00020717u, sub_00020717); /* call 0x00020717 */

loc_0008F8DC: ;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008F8E7u); RECOMP_ABI_CALL(0x000259C4u, sub_000259C4); /* call 0x000259C4 */

loc_0008F8E7: ;
    ecx = esi;
    PUSH32(esp, 0x0008F8EEu); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_0008F8EE: ;
    POP32(esp, esi);

loc_0008F8EF: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008F900
 * Original: 0x0008F900 - 0x0008F905 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008F900: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_0008F910
 * Original: 0x0008F910 - 0x0008F946 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008F910(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008F910: ;
    fp_push(MEMF(ecx + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_push(MEMF(0x8B54DC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8B54E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8B54E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(ecx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008F960
 * Original: 0x0008F960 - 0x0008F9C5 (101 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F960: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edx = ecx + 0x3C;
    MEM32(edx) = edi;
    edi = MEM32(esi + 4);
    MEM32(edx + 4) = edi;
    esi = MEM32(esi + 8);
    MEM32(edx + 8) = esi;
    esi = MEM32(eax);
    edx = ecx + 0x30;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    esi = MEM32(0x8F95D0);
    eax = ecx + 0x54;
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(0x8F95D4);
    MEM32(edx + 4) = esi;
    esi = MEM32(0x8F95D8);
    MEM32(edx + 8) = esi;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008F9E0
 * Original: 0x0008F9E0 - 0x0008FA21 (65 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F9E0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008F9E0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x34); /* addss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x38); /* addss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008FA1E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x34)) */

loc_0008FA19: ;
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */

loc_0008FA1E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008FA40
 * Original: 0x0008FA40 - 0x0008FA5A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FA40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008FA40: ;
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
 * sub_0008FA60
 * Original: 0x0008FA60 - 0x0008FA7A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FA60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008FA60: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008FA80
 * Original: 0x0008FA80 - 0x0008FAB2 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008FA80(void)
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

loc_0008FA80: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008FA9C; /* jp: parity */

loc_0008FA91: ;
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0008FA9C: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008FAC0
 * Original: 0x0008FAC0 - 0x0008FB8D (205 bytes, 60 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FAC0(void)
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

loc_0008FAC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    eax = ecx + 0x48;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    esi = eax;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x50)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x897640)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008FB1E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008FB19: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008FB4C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008FB1E: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008FB2C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008FB23: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_0008FB49;

loc_0008FB2C: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008FB3E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008FB35: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_0008FB49;

loc_0008FB3E: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_0008FB49: ;
    xmm0 = xmm2; /* movaps */

loc_0008FB4C: ;
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x50)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x6C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008FBC0
 * Original: 0x0008FBC0 - 0x0008FC0C (76 bytes, 22 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008FBC0(void)
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

loc_0008FBC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008FBF4; /* jp: parity */

loc_0008FBE7: ;
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0008FBF4: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008FC20
 * Original: 0x0008FC20 - 0x0008FC2F (15 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FC20(void)
{

loc_0008FC20: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008FC40
 * Original: 0x0008FC40 - 0x0008FC5D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008FC40: ;
    eax = MEM32(0x8EAD98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FC52; /* je: equal / zero */

loc_0008FC49: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008FC4Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0008FC4F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008FC52: ;
    MEM32(0x8EAD98) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0008FC70
 * Original: 0x0008FC70 - 0x0008FD5C (236 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FC70(void)
{

loc_0008FC70: ;
    eax = ecx;
    MEM32(eax) = 0x7BAE5C;
    edx = MEM32(0x8B5500);
    ecx = eax + 0x20;
    MEM32(ecx) = edx;
    edx = MEM32(0x8B5504);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x8B5508);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x8B550C);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(0x8F95D0);
    ecx = eax + 0x30;
    MEM32(ecx) = edx;
    edx = MEM32(0x8F95D4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x8F95D8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x8F95D0);
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    edx = MEM32(0x8F95D4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x8F95D8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x8F95D0);
    ecx = eax + 0x48;
    MEM32(ecx) = edx;
    edx = MEM32(0x8F95D4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x8F95D8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x8F95D0);
    ecx = eax + 0x54;
    MEM32(ecx) = edx;
    edx = MEM32(0x8F95D4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x8F95D8);
    MEM32(ecx + 8) = edx;
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    ecx = MEM32(esp + 4);
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x10) = 0;
    edx = MEM32(0x8EAD98);
    MEM32(edx + ecx * 4 + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008FDA0
 * Original: 0x0008FDA0 - 0x0008FDCC (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FDA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008FDA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    MEM32(esi) = 0x7BAE5C;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008FDB8u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_0008FDB8: ;
    ecx = MEM32(esi + 0x70);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    edx = MEM32(0x8EAD98);
    MEM32(edx + ecx * 4 + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008FDE0
 * Original: 0x0008FDE0 - 0x0008FE4B (107 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FDE0(void)
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

loc_0008FDE0: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008FDFD; /* jp: parity */

loc_0008FDF1: ;
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    goto loc_0008FE12;

loc_0008FDFD: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */

loc_0008FE12: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x30); /* addss */
    MEMF(ecx + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x34); /* addss */
    MEMF(ecx + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x38); /* addss */
    MEMF(ecx + 0x38) = xmm1.f[0]; /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008FE4A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x34)) */

loc_0008FE45: ;
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */

loc_0008FE4A: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008FE70
 * Original: 0x0008FE70 - 0x0008FEAE (62 bytes, 19 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008FE70(void)
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

loc_0008FE70: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(ecx + 0x6C) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008FE94; /* jp: parity */

loc_0008FE87: ;
    MEMF(ecx + 0x48) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_0008FE94: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008FEC0
 * Original: 0x0008FEC0 - 0x0008FF10 (80 bytes, 24 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008FEC0(void)
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

loc_0008FEC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x6C); /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 0x6C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008FEDD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008FED8: ;
    MEMF(ecx + 0x6C) = xmm1.f[0]; /* movss */

loc_0008FEDD: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008FEF8; /* jp: parity */

loc_0008FEEB: ;
    MEMF(ecx + 0x48) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_0008FEF8: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008FF30
 * Original: 0x0008FF30 - 0x0008FF78 (72 bytes, 22 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008FF30(void)
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

loc_0008FF30: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008FF75; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008FF40: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(ecx + 0x6C) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008FF5E; /* jp: parity */

loc_0008FF51: ;
    MEMF(ecx + 0x48) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_0008FF5E: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */

loc_0008FF75: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008FF90
 * Original: 0x0008FF90 - 0x0008FFCF (63 bytes, 21 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008FF90(void)
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

loc_0008FF90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0x64) = edx;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008FFB7; /* jp: parity */

loc_0008FFAA: ;
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_0008FFB7: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008FFE0
 * Original: 0x0008FFE0 - 0x0009006D (141 bytes, 43 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008FFE0(void)
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

loc_0008FFE0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x64)); /* movss */
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x897640)); /* movss */
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00090007; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00090002: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00090035; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00090007: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00090012; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0009000C: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00090035;

loc_00090012: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00090027; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0009001E: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_00090035;

loc_00090027: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */

loc_00090035: ;
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090055; /* jp: parity */

loc_00090048: ;
    MEMF(ecx + 0x48) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm2.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_00090055: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090000
 * Original: 0x00090000 - 0x0009006D (109 bytes, 36 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090000(void)
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

loc_00090000: ;
    if (_cf /* jb: below (unsigned <) */) goto loc_00090007;

loc_00090002: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00090035; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00090007: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00090012; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0009000C: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00090035;

loc_00090012: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00090027; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0009001E: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_00090035;

loc_00090027: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */

loc_00090035: ;
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090055; /* jp: parity */

loc_00090048: ;
    MEMF(ecx + 0x48) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm2.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_00090055: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090007
 * Original: 0x00090007 - 0x0009006D (102 bytes, 33 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090007(void)
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

loc_00090007: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00090012; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0009000C: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00090035;

loc_00090012: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00090027; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0009001E: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_00090035;

loc_00090027: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */

loc_00090035: ;
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090055; /* jp: parity */

loc_00090048: ;
    MEMF(ecx + 0x48) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm2.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_00090055: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009000A
 * Original: 0x0009000A - 0x0009006D (99 bytes, 32 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009000A(void)
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

loc_0009000A: ;
    if (_flags /* jbe: below or equal (unsigned <=) */) goto loc_00090012;

loc_0009000C: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00090035;

loc_00090012: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00090027; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0009001E: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_00090035;

loc_00090027: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */

loc_00090035: ;
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090055; /* jp: parity */

loc_00090048: ;
    MEMF(ecx + 0x48) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm2.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_00090055: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090010
 * Original: 0x00090010 - 0x0009006D (93 bytes, 30 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090010(void)
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

loc_00090010: ;
    goto loc_00090035;

    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00090027; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0009001E: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_00090035;

loc_00090027: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */

loc_00090035: ;
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090055; /* jp: parity */

loc_00090048: ;
    MEMF(ecx + 0x48) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm2.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_00090055: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009003F
 * Original: 0x0009003F - 0x0009006D (46 bytes, 16 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009003F(void)
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

loc_0009003F: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090055; /* jp: parity */

loc_00090048: ;
    MEMF(ecx + 0x48) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm2.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_00090055: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090042
 * Original: 0x00090042 - 0x0009006D (43 bytes, 15 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090042(void)
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

loc_00090042: ;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090055; /* jp: parity */

loc_00090048: ;
    MEMF(ecx + 0x48) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm2.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_00090055: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090046
 * Original: 0x00090046 - 0x0009006D (39 bytes, 13 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090046(void)
{
    int _flags = 0; /* fallback flag var */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00090046: ;
    if (_flags /* jp: parity */) goto loc_00090055;

loc_00090048: ;
    MEMF(ecx + 0x48) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm2.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_00090055: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090048
 * Original: 0x00090048 - 0x0009006D (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090048(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00090048: ;
    MEMF(ecx + 0x48) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm2.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009004D
 * Original: 0x0009004D - 0x0009006D (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009004D(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009004D: ;
    MEMF(ecx + 0x50) = xmm2.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090052
 * Original: 0x00090052 - 0x0009006D (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090052(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00090052: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090055
 * Original: 0x00090055 - 0x0009006D (24 bytes, 9 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090055(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00090055: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090058
 * Original: 0x00090058 - 0x0009006D (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090058(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00090058: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009005A
 * Original: 0x0009005A - 0x0009006D (19 bytes, 7 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009005A(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009005A: ;
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009005C
 * Original: 0x0009005C - 0x0009006D (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009005C(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009005C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090062
 * Original: 0x00090062 - 0x0009006D (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090062(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00090062: ;
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090064
 * Original: 0x00090064 - 0x0009006D (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090064(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00090064: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009006A
 * Original: 0x0009006A - 0x0009006D (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009006A(void)
{

loc_0009006A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00090090
 * Original: 0x00090090 - 0x000900C8 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090090(void)
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

loc_00090090: ;
    eax = MEM32(ecx + 0x60);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0x64) = eax;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000900B2; /* jp: parity */

loc_000900A7: ;
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000900B2: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090093
 * Original: 0x00090093 - 0x000900C8 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090093(void)
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

loc_00090093: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0x64) = eax;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000900B2; /* jp: parity */

loc_000900A7: ;
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000900B2: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090099
 * Original: 0x00090099 - 0x000900C8 (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090099(void)
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

loc_00090099: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000900B2; /* jp: parity */

loc_000900A7: ;
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000900B2: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009009E
 * Original: 0x0009009E - 0x000900C8 (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0009009E(void)
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

loc_0009009E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000900B2; /* jp: parity */

loc_000900A7: ;
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000900B2: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000900A2
 * Original: 0x000900A2 - 0x000900C8 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000900A2(void)
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

loc_000900A2: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000900B2; /* jp: parity */

loc_000900A7: ;
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000900B2: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000900AC
 * Original: 0x000900AC - 0x000900C8 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000900AC(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000900AC: ;
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000900E0
 * Original: 0x000900E0 - 0x00090168 (136 bytes, 42 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000900E0(void)
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

loc_000900E0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x897640)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00090102; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000900FD: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00090130; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00090102: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009010D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00090107: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00090130;

loc_0009010D: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00090122; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00090119: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_00090130;

loc_00090122: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */

loc_00090130: ;
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090150; /* jp: parity */

loc_00090143: ;
    MEMF(ecx + 0x48) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm2.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_00090150: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090190
 * Original: 0x00090190 - 0x00090216 (134 bytes, 42 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090190(void)
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

loc_00090190: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x64); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x897640)); /* movss */
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000901B4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000901AF: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000901E2; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000901B4: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000901BF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000901B9: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000901E2;

loc_000901BF: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000901D4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000901CB: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_000901E2;

loc_000901D4: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */

loc_000901E2: ;
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090200; /* jp: parity */

loc_000901F5: ;
    MEMF(ecx + 0x48) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm2.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_00090200: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090240
 * Original: 0x00090240 - 0x00090280 (64 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090240: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    MEM32(esi) = 0x7BAE5C;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00090258u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_00090258: ;
    ecx = MEM32(esi + 0x70);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    edx = MEM32(0x8EAD98);
    MEM32(edx + ecx * 4 + 4) = eax;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009027A; /* je: equal / zero */

loc_00090271: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00090277u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00090277: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009027A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00090290
 * Original: 0x00090290 - 0x0009029C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090290: ;
    eax = MEM32(esp + 4);
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
 * sub_000902A0
 * Original: 0x000902A0 - 0x000902BC (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000902A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000902A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000902D0
 * Original: 0x000902D0 - 0x000902EC (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000902D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000902D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00090300
 * Original: 0x00090300 - 0x00090322 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00090300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00090330
 * Original: 0x00090330 - 0x00090352 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00090330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090330: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00090360
 * Original: 0x00090360 - 0x0009036E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090360: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00090380
 * Original: 0x00090380 - 0x000903C0 (64 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00090380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(eax, xmm1); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(eax + 0x10, xmm1); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax + 0x30, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000903D0
 * Original: 0x000903D0 - 0x00090432 (98 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000903D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000903D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = esp + 8;
    PUSH32(esp, esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000903FE; /* je: equal / zero */

loc_000903EC: ;
    edx = esp + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000903FE; /* je: equal / zero */

loc_000903F4: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000903FCu); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_000903FC: ;
    goto loc_00090419;

loc_000903FE: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009040Au); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_0009040A: ;
    ecx = 0x10;
    esi = esp + 0x5C;
    edi = esp + 0x1C;
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

loc_00090419: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = esp + 0x10;
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
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00090450
 * Original: 0x00090450 - 0x00090497 (71 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090450(void)
{

loc_00090450: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(esp + 4);
    xmm3 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 8); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm3.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000904B0
 * Original: 0x000904B0 - 0x000904EF (63 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000904B0(void)
{

loc_000904B0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax); /* subss */
    eax = MEM32(esp + 4);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00090500
 * Original: 0x00090500 - 0x0009051B (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090500(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00090500: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
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
 * sub_00090530
 * Original: 0x00090530 - 0x0009054B (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090530(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00090530: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
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
 * sub_00090560
 * Original: 0x00090560 - 0x00090576 (22 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090560(void)
{

loc_00090560: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = ecx;
    ecx = 0x10;
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
 * sub_00090580
 * Original: 0x00090580 - 0x00090598 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090580(void)
{

loc_00090580: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x34) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x38) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000905A0
 * Original: 0x000905A0 - 0x000905A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000905A0(void)
{

loc_000905A0: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000905B0
 * Original: 0x000905B0 - 0x000905CD (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000905B0(void)
{

loc_000905B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
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
 * sub_000905E0
 * Original: 0x000905E0 - 0x000905FE (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000905E0(void)
{

loc_000905E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x1C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00090602
 * Original: 0x00090602 - 0x00090610 (14 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090602(void)
{

loc_00090602: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_00090610
 * Original: 0x00090610 - 0x0009062E (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090610(void)
{

loc_00090610: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x28) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00090640
 * Original: 0x00090640 - 0x0009065E (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090640(void)
{

loc_00090640: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x38) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x3C) = eax;
    esp += 8; return; /* ret 4 */

}
