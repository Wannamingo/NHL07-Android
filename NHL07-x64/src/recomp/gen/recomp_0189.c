/**
 * nhl_07_recomp - Recompiled code chunk 189
 * Functions: 250 (0x003EE6F0 - 0x003F2D10)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003EE6F0
 * Original: 0x003EE6F0 - 0x003EE70A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE6F0: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE709; /* je: equal / zero */

loc_003EE6F9: ;
    /* nop */

loc_003EE700: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EE700; /* jne: not equal / not zero */

loc_003EE709: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003EE710
 * Original: 0x003EE710 - 0x003EE741 (49 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE710: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EE71D; /* jne: not equal / not zero */

loc_003EE718: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_003EE71D: ;
    if (CMP_AE(_fa, _fb)) goto loc_003EE72F; /* jae: above or equal (unsigned >=) */

loc_003EE71F: ;
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

loc_003EE72F: ;
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EE750
 * Original: 0x003EE750 - 0x003EE7B7 (103 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE750: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EE765; /* jbe: below or equal (unsigned <=) */

loc_003EE761: ;
    MEM32(edx) = ecx;
    MEM32(esi) = eax;

loc_003EE765: ;
    eax = MEM32(edx);
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(eax) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_003EE784; /* jne: not equal / not zero */

loc_003EE77A: ;
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE784; /* je: equal / zero */

loc_003EE781: ;
    MEM32(eax + 4) = edi;

loc_003EE784: ;
    edi = MEM32(eax + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE78F; /* je: equal / zero */

loc_003EE78B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EE795; /* jne: not equal / not zero */

loc_003EE78F: ;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_003EE795: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003EE7A1; /* je: equal / zero */

loc_003EE79E: ;
    MEM32(ecx + 4) = eax;

loc_003EE7A1: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE7B1; /* je: equal / zero */

loc_003EE7A8: ;
    MEM32(ecx + 8) = eax;
    edx = MEM32(edx);
    MEM32(esi) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003EE7B1: ;
    eax = MEM32(edx);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EE7D0
 * Original: 0x003EE7D0 - 0x003EE7FB (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE7D0: ;
    eax = MEM32(ecx + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003EE7E0; /* je: equal / zero */

loc_003EE7DA: ;
    esi = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = esi;

loc_003EE7E0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE7ED; /* je: equal / zero */

loc_003EE7E7: ;
    esi = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = esi;

loc_003EE7ED: ;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EE810
 * Original: 0x003EE810 - 0x003EE8E5 (213 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE810: ;
    eax = MEM32(ecx + 0xC4);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(0x907D3C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0xC4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x40) = eax;
    eax = MEM32(0x907D3C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0xC4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x54) = eax;
    eax = MEM32(0x907D3C);
    eax = eax + eax * 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0xC4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x68) = eax;
    eax = MEM32(0x907D3C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0xC4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x7C) = eax;
    eax = MEM32(0x907D3C);
    eax = eax + eax * 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0xC4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x90) = eax;
    eax = MEM32(0x907D3C);
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0xC4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xA4) = eax;
    eax = MEM32(0x907D3C);
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0xC4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xB8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003EE920
 * Original: 0x003EE920 - 0x003EE93E (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE920: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(ecx + 0xC4);
    if (CMP_LE(_fas, _fbs)) goto loc_003EE93D; /* jle: less or equal (signed <=) */

loc_003EE92D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);

loc_003EE931: ;
    esi = (uint32_t)(int32_t)SMEM16(ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EE931; /* jne: not equal / not zero */

loc_003EE93C: ;
    POP32(esp, esi);

loc_003EE93D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003EE950
 * Original: 0x003EE950 - 0x003EEA6C (284 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE950: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EEA61; /* jl: less (signed <) */

loc_003EE95A: ;
    PUSH32(esp, ebx);
    eax = ecx + 0x30;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x2C);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi);
    edx = ecx + 0x1C;
    MEM32(edx) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(edi + 8);
    MEM32(edx + 8) = ebx;
    ebx = MEM32(edi + 0xC);
    edi = MEM32(edi + 0x10);
    MEM32(edx + 0xC) = ebx;
    MEM32(edx + 0x10) = edi;
    edx = ecx + 0x44;
    edi = edx;
    ebx = MEM32(edi);
    MEM32(eax) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(edi + 8);
    MEM32(eax + 8) = ebx;
    ebx = MEM32(edi + 0xC);
    edi = MEM32(edi + 0x10);
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    eax = ecx + 0x58;
    edi = eax;
    ebx = MEM32(edi);
    MEM32(edx) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(edi + 8);
    MEM32(edx + 8) = ebx;
    ebx = MEM32(edi + 0xC);
    edi = MEM32(edi + 0x10);
    MEM32(edx + 0xC) = ebx;
    MEM32(edx + 0x10) = edi;
    edx = ecx + 0x6C;
    edi = edx;
    ebx = MEM32(edi);
    MEM32(eax) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(edi + 8);
    MEM32(eax + 8) = ebx;
    ebx = MEM32(edi + 0xC);
    edi = MEM32(edi + 0x10);
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    eax = ecx + 0x80;
    edi = eax;
    ebx = MEM32(edi);
    MEM32(edx) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(edi + 8);
    MEM32(edx + 8) = ebx;
    ebx = MEM32(edi + 0xC);
    edi = MEM32(edi + 0x10);
    MEM32(edx + 0xC) = ebx;
    MEM32(edx + 0x10) = edi;
    edx = ecx + 0x94;
    edi = edx;
    ebx = MEM32(edi);
    MEM32(eax) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(edi + 8);
    MEM32(eax + 8) = ebx;
    ebx = MEM32(edi + 0xC);
    edi = MEM32(edi + 0x10);
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    eax = ecx + 0xA8;
    edi = MEM32(eax);
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    edi = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    MEM32(edx + 0xC) = edi;
    MEM32(edx + 0x10) = eax;
    POP32(esp, edi);
    MEM32(ecx + 0xB8) = esi;
    POP32(esp, esi);
    MEM32(ecx + 0x14) = 7;
    POP32(esp, ebx);

loc_003EEA61: ;
    eax = MEM32(ecx + 0x14);
    edx = eax + eax * 4;
    eax = MEM32(ecx + edx * 4 + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_003EEAC0
 * Original: 0x003EEAC0 - 0x003EEADB (27 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEAC0(void)
{

loc_003EEAC0: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = ecx + eax * 4 + 0x1C;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 8) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EEAF0
 * Original: 0x003EEAF0 - 0x003EEB11 (33 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEAF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EEAF0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x14);
    edx = edx + edx * 4;
    edx = ecx + edx * 4 + 0x1C;
    MEM16(edx) = LO16(eax);
    MEM16(edx + 2) = LO16(eax);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EEB20
 * Original: 0x003EEB20 - 0x003EEB4A (42 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EEB20: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_003EEB41; /* jl: less (signed <) */

loc_003EEB2F: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EEB47; /* je: equal / zero */

loc_003EEB36: ;
    edx = MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EEB47; /* jle: less or equal (signed <=) */

loc_003EEB3D: ;
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003EEB41: ;
    MEM32(ecx + 4) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_003EEB47: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003EEB60
 * Original: 0x003EEB60 - 0x003EEB7E (30 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EEB60: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_003EEB75; /* jns: not sign (positive) */

loc_003EEB66: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EEB7B; /* je: equal / zero */

loc_003EEB6F: ;
    MEM32(ecx) = eax;
    eax = MEM32(eax + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003EEB75: ;
    MEM32(ecx + 4) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_003EEB7B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003EEB90
 * Original: 0x003EEB90 - 0x003EEB9D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEB90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EEB90: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EEBA0
 * Original: 0x003EEBA0 - 0x003EEBF2 (82 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEBA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EEBA0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0x14) = esi;
    MEM32(eax) = esi;
    MEM32(eax + 0xC) = esi;
    edx = eax + 0xC;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(edx) = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(edx) = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(edx) = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(edx) = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(edx) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EEC10
 * Original: 0x003EEC10 - 0x003EECBE (174 bytes, 61 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EEC10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EEC33; /* jne: not equal / not zero */

loc_003EEC1C: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(esi + 0x1C) = LO16(eax);
    MEM16(esi + 0x1E) = LO16(eax);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_003EEC33: ;
    eax = MEM32(ecx + 0x110);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + eax * 2;
    MEM32(ecx + eax * 4 + 0xB8) = edx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = eax + eax * 4;
    PUSH32(esp, ebp);
    ebx = esi + edx * 4 + 0x1C;
    edx = MEM32(esi + 0xC4);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_003EEC73; /* jle: less or equal (signed <=) */

loc_003EEC62: ;
    edi = MEM32(esi + 0x14);
    eax = esi + 0x1C;

loc_003EEC68: ;
    ebp = (uint32_t)(int32_t)SMEM16(eax);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EEC68; /* jne: not equal / not zero */

loc_003EEC73: ;
    MEM32(ebx + 0x10) = edx;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x2C);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x1C);
    ebp = eax + -1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EEC93; /* je: equal / zero */

loc_003EEC87: ;
    eax = eax + eax * 4 + 5;
    eax = MEM32(esi + eax * 4);
    edx = MEM32(eax + 8);
    edi = MEM32(eax);

loc_003EEC93: ;
    eax = MEM32(ecx + 0x110);
    PUSH32(esp, ebx);
    eax = eax + eax * 2;
    eax = ecx + eax * 4 + 0xB8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003EECACu); RECOMP_ABI_CALL(0x0002255Du, sub_0002255D); /* call 0x0002255D */

loc_003EECAC: ;
    eax = MEM32(esi + 0x14);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x14) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 2);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EECF0
 * Original: 0x003EECF0 - 0x003EED85 (149 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EECF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EECF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x2C);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0xB4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ecx + ebx + 0xC;
    PUSH32(esp, edi);
    esi = ecx + 4;
    edi = eax + 0x30;
    ebp = 7;

loc_003EED15: ;
    eax = esi + -4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EED2F; /* je: equal / zero */

loc_003EED1C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EED2F; /* je: equal / zero */

loc_003EED22: ;
    MEM32(eax + 0xC) = 0;
    MEM32(esi) = 0;

loc_003EED2F: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EED4B; /* je: equal / zero */

loc_003EED36: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EED4B; /* je: equal / zero */

loc_003EED3D: ;
    MEM32(ecx + 0xC) = 0;
    MEM32(eax + 4) = 0;

loc_003EED4B: ;
    ecx = esi + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x003EED58u); RECOMP_ABI_CALL(0x000157BDu, sub_000157BD); /* call 0x000157BD */

loc_003EED58: ;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EED15; /* jne: not equal / not zero */

loc_003EED64: ;
    edx = MEM32(ebx + 0xB4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0x80000001u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_003EED78; /* jns: not sign (positive) */

loc_003EED73: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003EED78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0xB4) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EEDB0
 * Original: 0x003EEDB0 - 0x003EEE09 (89 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EEDB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    ecx = edi + esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    MEM32(eax) = esi;
    PUSH32(esp, 0x003EEDC9u); RECOMP_ABI_CALL(0x000368C8u, sub_000368C8); /* call 0x000368C8 */

loc_003EEDC9: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EEDE0; /* je: equal / zero */

loc_003EEDD2: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    goto loc_003EEDE2;

loc_003EEDE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003EEDE2: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esi) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003EEDEE; /* je: equal / zero */

loc_003EEDEB: ;
    MEM32(ecx + 4) = eax;

loc_003EEDEE: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EEDF8; /* je: equal / zero */

loc_003EEDF5: ;
    MEM32(ecx + 8) = eax;

loc_003EEDF8: ;
    edx = MEM32(esi + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EEE20
 * Original: 0x003EEE20 - 0x003EEF1E (254 bytes, 79 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EEE20: ;
    eax = ecx;
    ecx = MEM32(0x907D3C);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    edx = eax + 0x1C;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM16(edx + -40) = LO16(esi);
    MEM16(edx + -38) = LO16(esi);
    MEM32(edx + -36) = esi;
    MEM32(edx + -32) = esi;
    MEM32(edx + -28) = esi;
    MEM32(edx + -24) = esi;
    MEM16(edx + -20) = LO16(esi);
    MEM16(edx + -18) = LO16(esi);
    MEM32(edx + -16) = esi;
    MEM32(edx + -12) = esi;
    MEM32(edx + -8) = esi;
    MEM32(edx + -4) = esi;
    MEM16(edx) = LO16(esi);
    MEM16(edx + 2) = LO16(esi);
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(edx + 0xC) = esi;
    MEM32(edx + 0x10) = esi;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx) = LO16(esi);
    MEM16(edx + 2) = LO16(esi);
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(edx + 0xC) = esi;
    MEM32(edx + 0x10) = esi;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx) = LO16(esi);
    MEM16(edx + 2) = LO16(esi);
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(edx + 0xC) = esi;
    MEM32(edx + 0x10) = esi;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx) = LO16(esi);
    MEM16(edx + 2) = LO16(esi);
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(edx + 0xC) = esi;
    MEM32(edx + 0x10) = esi;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx + -20) = LO16(esi);
    MEM16(edx + -18) = LO16(esi);
    MEM32(edx + -16) = esi;
    MEM32(edx + -12) = esi;
    MEM32(edx + -8) = esi;
    MEM32(edx + -4) = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM16(edx) = LO16(esi);
    MEM16(edx + 2) = LO16(esi);
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(edx + 0xC) = esi;
    MEM32(edx + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) ecx = eax; /* cmove */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0xBC) = esi;
    MEM32(eax + 0xC0) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_003EEF08; /* je: equal / zero */

loc_003EEF05: ;
    MEM32(ecx + 0x10) = eax;

loc_003EEF08: ;
    edx = eax + 0xC8;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0xC4) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EEF60
 * Original: 0x003EEF60 - 0x003EEF9D (61 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EEF60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003EEF97; /* je: equal / zero */

loc_003EEF6B: ;
    MEM32(ecx) = eax;
    ecx = MEM32(ecx + 0xC4);
    edx = ecx + eax + -200;
    PUSH32(esp, edx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x003EEF82u); RECOMP_ABI_CALL(0x000368C8u, sub_000368C8); /* call 0x000368C8 */

loc_003EEF82: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EEF97; /* je: equal / zero */

loc_003EEF8B: ;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003EEF97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EEFB0
 * Original: 0x003EEFB0 - 0x003EF1A5 (501 bytes, 143 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EEFB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ebx = 2;

loc_003EEFC1: ;
    PUSH32(esp, 0x2CEEA);
    PUSH32(esp, 7);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003EEFD0u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_003EEFD0: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x54;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EEFC1; /* jne: not equal / not zero */

loc_003EEFD6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xBC) = ecx;
    MEM32(esi + 0xC0) = ecx;
    MEM32(esi + 0xB8) = ecx;
    edi = MEM32(esp + 0x20);
    eax = esi + 0xB8;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = ecx;
    eax = esi + 0x128;
    MEM32(esi + 0x124) = eax;
    ebx = edi + edi * 2;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    edx = edi + edi * 4;
    MEM32(esp + 0x18) = eax;
    MEM32(esi + 0xB4) = ecx;
    MEM32(esi + 0x10C) = ecx;
    MEM32(esi + 0x110) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x20) = ebp;
    eax = esi + 0x14;
    MEM32(esp + 0x10) = 2;
    edi = edi;

loc_003EF080: ;
    edx = MEM32(esi + 0x124);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    ebp = edx + edi;
    MEM32(eax + 0xC) = ebp;
    ebp = edx + edi * 2;
    MEM32(eax + 0x18) = ebp;
    ebp = edi + edi * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x24) = ebp;
    ebp = edx + edi * 4;
    MEM32(eax + 0x30) = ebp;
    ebp = MEM32(esp + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -4) = ecx;
    MEM32(eax + -8) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x3C) = ebp;
    ebp = MEM32(esp + 0x20);
    MEM32(eax + 0x48) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x40) = ecx;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x10) = edx;
    if ((_fa != 0)) goto loc_003EF080; /* jne: not equal / not zero */

loc_003EF0F8: ;
    edx = MEM32(esi + 0x124);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC0) = eax;
    edx = eax + edi;
    MEM32(esi + 0xCC) = edx;
    edx = eax + edi * 2;
    MEM32(esi + 0xD8) = edx;
    edx = edi + edi * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xE4) = edx;
    MEM32(esi + 0xBC) = ecx;
    MEM32(esi + 0xB8) = ecx;
    edx = eax + edi * 4;
    MEM32(esi + 0xC8) = ecx;
    MEM32(esi + 0xC4) = ecx;
    MEM32(esi + 0xF0) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0xD4) = ecx;
    MEM32(esi + 0xD0) = ecx;
    MEM32(esi + 0xE0) = ecx;
    MEM32(esi + 0xDC) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xEC) = ecx;
    MEM32(esi + 0xE8) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xF8) = ecx;
    MEM32(esi + 0xFC) = edx;
    MEM32(esi + 0xF4) = ecx;
    MEM32(esi + 0x108) = ebx;
    MEM32(esi + 0x104) = ecx;
    MEM32(esi + 0x100) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EF230
 * Original: 0x003EF230 - 0x003EF28B (91 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EF230: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    esi = ecx;
    eax = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_003EF271; /* jne: not equal / not zero */

loc_003EF23F: ;
    SET_LO8(ecx, MEM8(eax));
    eax = MEM32(esp + 0xC);
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = ecx;
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax) = LO8(edx);
    edx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = edx;
    ecx = edx;
    SET_LO8(ecx, MEM8(ecx));
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = ecx;
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + 1) = LO8(edx);
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003EF271: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003EF27Du); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003EF27D: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EF2B0
 * Original: 0x003EF2B0 - 0x003EF2DD (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF2B0(void)
{

loc_003EF2B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003EF2C4u); RECOMP_ABI_CALL(0x00031887u, sub_00031887); /* call 0x00031887 */

loc_003EF2C4: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(esi) = 0x8362FC;
    MEM32(esi + 0x18) = ecx;
    PUSH32(esp, 0x003EF2D7u); RECOMP_ABI_CALL(0x00031EAEu, sub_00031EAE); /* call 0x00031EAE */

loc_003EF2D7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EF2F0
 * Original: 0x003EF2F0 - 0x003EF30A (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF2F0(void)
{

loc_003EF2F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x8362FC;
    PUSH32(esp, 0x003EF302u); RECOMP_ABI_CALL(0x0002C32Du, sub_0002C32D); /* call 0x0002C32D */

loc_003EF302: ;
    MEM32(esi) = 0x836294;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EF310
 * Original: 0x003EF310 - 0x003EF33E (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EF310: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x8362FC;
    PUSH32(esp, 0x003EF322u); RECOMP_ABI_CALL(0x0002C32Du, sub_0002C32D); /* call 0x0002C32D */

loc_003EF322: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x836294;
    if (TEST_Z(_fa, _fb)) goto loc_003EF338; /* je: equal / zero */

loc_003EF32F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EF335u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003EF335: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EF338: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EF350
 * Original: 0x003EF350 - 0x003EF37D (45 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF350(void)
{

loc_003EF350: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003EF364u); RECOMP_ABI_CALL(0x00031887u, sub_00031887); /* call 0x00031887 */

loc_003EF364: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(esi) = 0x83630C;
    MEM32(esi + 0x18) = ecx;
    PUSH32(esp, 0x003EF377u); RECOMP_ABI_CALL(0x00026FBDu, sub_00026FBD); /* call 0x00026FBD */

loc_003EF377: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EF390
 * Original: 0x003EF390 - 0x003EF3B1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF390(void)
{

loc_003EF390: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x83630C;
    PUSH32(esp, 0x003EF3A2u); RECOMP_ABI_CALL(0x00019DEFu, sub_00019DEF); /* call 0x00019DEF */

loc_003EF3A2: ;
    MEM32(esi + 0x18) = 0;
    MEM32(esi) = 0x836294;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EF3C0
 * Original: 0x003EF3C0 - 0x003EF418 (88 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EF3C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x003EF3CDu); RECOMP_ABI_CALL(0x0002A320u, sub_0002A320); /* call 0x0002A320 */

loc_003EF3CD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EF415; /* je: equal / zero */

loc_003EF3D3: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    goto loc_003EF3E0;

    /* nop */

loc_003EF3E0: ;
    eax = MEM32(0x907DD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EF3EF; /* je: equal / zero */

loc_003EF3E9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003EF3ECu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003EF3EAu); } /* indirect call */
    }

loc_003EF3EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EF3EF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003EF3F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EF3F4u); } /* indirect call */
    }

loc_003EF3F7: ;
    eax = MEM32(0x907DD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EF406; /* je: equal / zero */

loc_003EF400: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003EF403u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003EF401u); } /* indirect call */
    }

loc_003EF403: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EF406: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x003EF40Eu); RECOMP_ABI_CALL(0x0001B96Au, sub_0001B96A); /* call 0x0001B96A */

loc_003EF40E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EF3E0; /* jne: not equal / not zero */

loc_003EF414: ;
    POP32(esp, edi);

loc_003EF415: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EF430
 * Original: 0x003EF430 - 0x003EF434 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF430(void)
{

loc_003EF430: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_003EF440
 * Original: 0x003EF440 - 0x003EF454 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF440(void)
{

loc_003EF440: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x907DD0) = eax;
    MEM32(0x907DD4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EF460
 * Original: 0x003EF460 - 0x003EF495 (53 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EF460: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x83630C;
    PUSH32(esp, 0x003EF472u); RECOMP_ABI_CALL(0x00019DEFu, sub_00019DEF); /* call 0x00019DEF */

loc_003EF472: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi + 0x18) = 0;
    MEM32(esi) = 0x836294;
    if (TEST_Z(_fa, _fb)) goto loc_003EF48F; /* je: equal / zero */

loc_003EF486: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EF48Cu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003EF48C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EF48F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EF4B0
 * Original: 0x003EF4B0 - 0x003EF4B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF4B0(void)
{

loc_003EF4B0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_003EF4C0
 * Original: 0x003EF4C0 - 0x003EF4D7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF4C0(void)
{

loc_003EF4C0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003EF4E0
 * Original: 0x003EF4E0 - 0x003EF4F9 (25 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF4E0(void)
{

loc_003EF4E0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EF500
 * Original: 0x003EF500 - 0x003EF519 (25 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF500(void)
{

loc_003EF500: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EF520
 * Original: 0x003EF520 - 0x003EF54B (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EF520: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003EF52Du); RECOMP_ABI_CALL(0x00030293u, sub_00030293); /* call 0x00030293 */

loc_003EF52D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi) = 0x836318;
    MEM32(esi + 0x1C) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EF560
 * Original: 0x003EF560 - 0x003EF57A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF560(void)
{

loc_003EF560: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x836318;
    PUSH32(esp, 0x003EF572u); RECOMP_ABI_CALL(0x000223B9u, sub_000223B9); /* call 0x000223B9 */

loc_003EF572: ;
    MEM32(esi) = 0x836294;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EF580
 * Original: 0x003EF580 - 0x003EF5A6 (38 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF580(void)
{

loc_003EF580: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EF58Cu); RECOMP_ABI_CALL(0x000223B9u, sub_000223B9); /* call 0x000223B9 */

loc_003EF58C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EF599u); RECOMP_ABI_CALL(0x00014E80u, sub_00014E80); /* call 0x00014E80 */

loc_003EF599: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EF5A2u); RECOMP_ABI_CALL(0x00020FB9u, sub_00020FB9); /* call 0x00020FB9 */

loc_003EF5A2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EF5B0
 * Original: 0x003EF5B0 - 0x003EF5B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EF5B0: ;
    ecx = MEM32(ecx + 0x18);
    g_seh_ebp = ebp; sub_000173B0(); return; /* tail jmp 0x000173B0 */

}

/**
 * sub_003EF5C0
 * Original: 0x003EF5C0 - 0x003EF5C7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF5C0(void)
{

loc_003EF5C0: ;
    eax = MEM32(ecx + 0x20);
    MEM32(ecx + 0x24) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003EF5D0
 * Original: 0x003EF5D0 - 0x003EF62D (93 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EF5D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi;
    PUSH32(esp, 0x003EF5DDu); RECOMP_ABI_CALL(0x0002AA23u, sub_0002AA23); /* call 0x0002AA23 */

loc_003EF5DD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EF62A; /* je: equal / zero */

loc_003EF5E3: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EF615; /* jne: not equal / not zero */

loc_003EF5EA: ;
    eax = MEM32(0x907DDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EF5F9; /* je: equal / zero */

loc_003EF5F3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003EF5F6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003EF5F4u); } /* indirect call */
    }

loc_003EF5F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EF5F9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003EF600u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EF5FDu); } /* indirect call */
    }

loc_003EF600: ;
    eax = MEM32(0x907DE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EF60F; /* je: equal / zero */

loc_003EF609: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003EF60Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003EF60Au); } /* indirect call */
    }

loc_003EF60C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EF60F: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(esi + 0x24) = ecx;

loc_003EF615: ;
    edx = MEM32(esi + 0x24);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0x24) = edx;
    PUSH32(esp, 0x003EF624u); RECOMP_ABI_CALL(0x0002D908u, sub_0002D908); /* call 0x0002D908 */

loc_003EF624: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EF5E3; /* jne: not equal / not zero */

loc_003EF62A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EF650
 * Original: 0x003EF650 - 0x003EF664 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF650(void)
{

loc_003EF650: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x907DDC) = eax;
    MEM32(0x907DE0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EF670
 * Original: 0x003EF670 - 0x003EF69E (46 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EF670: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x836318;
    PUSH32(esp, 0x003EF682u); RECOMP_ABI_CALL(0x000223B9u, sub_000223B9); /* call 0x000223B9 */

loc_003EF682: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x836294;
    if (TEST_Z(_fa, _fb)) goto loc_003EF698; /* je: equal / zero */

loc_003EF68F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EF695u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003EF695: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EF698: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EF6B0
 * Original: 0x003EF6B0 - 0x003EF6C4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF6B0(void)
{

loc_003EF6B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EF6BCu); RECOMP_ABI_CALL(0x00020FB9u, sub_00020FB9); /* call 0x00020FB9 */

loc_003EF6BC: ;
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0x24) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EF6D0
 * Original: 0x003EF6D0 - 0x003EF6EA (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF6D0(void)
{

loc_003EF6D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(esi + 0x18) = ecx;
    PUSH32(esp, 0x003EF6E0u); RECOMP_ABI_CALL(0x00020FB9u, sub_00020FB9); /* call 0x00020FB9 */

loc_003EF6E0: ;
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0x24) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EF6F0
 * Original: 0x003EF6F0 - 0x003EF732 (66 bytes, 22 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF6F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EF6F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003EF704u); RECOMP_ABI_CALL(0x00031887u, sub_00031887); /* call 0x00031887 */

loc_003EF704: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(esi) = 0x836318;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x1C) = 1;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x003EF726u); RECOMP_ABI_CALL(0x00020FB9u, sub_00020FB9); /* call 0x00020FB9 */

loc_003EF726: ;
    edx = MEM32(esi + 0x20);
    MEM32(esi + 0x24) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EF750
 * Original: 0x003EF750 - 0x003EF79A (74 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF750(void)
{

loc_003EF750: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003EF767u); RECOMP_ABI_CALL(0x00031887u, sub_00031887); /* call 0x00031887 */

loc_003EF767: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x836318;
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(edi + 8);
    PUSH32(esp, esi);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = 0;
    PUSH32(esp, 0x003EF78Du); RECOMP_ABI_CALL(0x00020FB9u, sub_00020FB9); /* call 0x00020FB9 */

loc_003EF78D: ;
    ecx = MEM32(esi + 0x20);
    POP32(esp, edi);
    MEM32(esi + 0x24) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EF7B0
 * Original: 0x003EF7B0 - 0x003EF7C3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF7B0(void)
{

loc_003EF7B0: ;
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEM32(ecx) = eax;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003EF7D0
 * Original: 0x003EF7D0 - 0x003EF7E0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF7D0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003EF7D0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    if ((_fca > _fcb)) goto loc_003EF7DF; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_003EF7DC: ;
    xmm0 = xmm1; /* movaps */

loc_003EF7DF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003EF7F0
 * Original: 0x003EF7F0 - 0x003EF801 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF7F0(void)
{

loc_003EF7F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003EF810
 * Original: 0x003EF810 - 0x003EF826 (22 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF810(void)
{

loc_003EF810: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EF830
 * Original: 0x003EF830 - 0x003EF864 (52 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF830(void)
{

loc_003EF830: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0;
    xmm0 = XMM_SCALAR(MEMF(0x8CFA70)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EF880
 * Original: 0x003EF880 - 0x003EF881 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF880(void)
{

loc_003EF880: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003EF890
 * Original: 0x003EF890 - 0x003EF8AD (29 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EF890: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EF8A7; /* je: equal / zero */

loc_003EF89B: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EF8A4u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003EF8A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EF8A7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EF8C0
 * Original: 0x003EF8C0 - 0x003EF8F0 (48 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF8C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EF8C0: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEM32(eax) = esi;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EF900
 * Original: 0x003EF900 - 0x003EF932 (50 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EF900: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esp + 8);
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EF940
 * Original: 0x003EF940 - 0x003EF969 (41 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003EF940: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EF960; /* jl: less (signed <) */

loc_003EF94D: ;
    if (CMP_NE(_fa, _fb)) goto loc_003EF95A; /* jne: not equal / not zero */

loc_003EF94F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    if ((_fca > _fcb)) goto loc_003EF960; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_003EF95A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003EF960: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EF980
 * Original: 0x003EF980 - 0x003EF9B7 (55 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003EF980: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EF9AE; /* jl: less (signed <) */

loc_003EF98D: ;
    if (CMP_NE(_fa, _fb)) goto loc_003EF9A8; /* jne: not equal / not zero */

loc_003EF98F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    if ((_fca > _fcb)) goto loc_003EF9AE; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_003EF99A: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x836328); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    if ((_fca >= _fcb)) goto loc_003EF9AE; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_003EF9A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003EF9AE: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EF9D0
 * Original: 0x003EF9D0 - 0x003EF9F9 (41 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003EF9D0: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EF9F0; /* jg: greater (signed >) */

loc_003EF9DD: ;
    if (CMP_NE(_fa, _fb)) goto loc_003EF9EA; /* jne: not equal / not zero */

loc_003EF9DF: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 4); /* comiss */
    if ((_fca > _fcb)) goto loc_003EF9F0; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 4)) */

loc_003EF9EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003EF9F0: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EFA10
 * Original: 0x003EFA10 - 0x003EFA50 (64 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003EFA10: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EFA47; /* jg: greater (signed >) */

loc_003EFA1D: ;
    if (CMP_NE(_fa, _fb)) goto loc_003EFA41; /* jne: not equal / not zero */

loc_003EFA1F: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 4); /* comiss */
    if ((_fca > _fcb)) goto loc_003EFA47; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 4)) */

loc_003EFA2A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x836328); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_003EFA47; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003EFA41: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003EFA47: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EFA60
 * Original: 0x003EFA60 - 0x003EFA9D (61 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003EFA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003EFA60: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EFA98; /* jne: not equal / not zero */

loc_003EFA6A: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003EFA83; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003EFA7C: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_003EFA83: ;
    xmm1 = XMM_SCALAR(MEMF(0x836328)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003EFA98; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003EFA90: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_003EFA98: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EFAB0
 * Original: 0x003EFAB0 - 0x003EFAB5 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFAB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EFAB0: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003EFAC0
 * Original: 0x003EFAC0 - 0x003EFAC5 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFAC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EFAC0: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003EFAD0
 * Original: 0x003EFAD0 - 0x003EFB1F (79 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003EFAD0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EFB11; /* jne: not equal / not zero */

loc_003EFADA: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003EFAF3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003EFAEC: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_003EFAF3: ;
    xmm1 = XMM_SCALAR(MEMF(0x836328)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003EFB11; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003EFB00: ;
    eax = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

loc_003EFB11: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EFB40
 * Original: 0x003EFB40 - 0x003EFB4F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFB40(void)
{

loc_003EFB40: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx) = 0;
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003EFB60
 * Original: 0x003EFB60 - 0x003EFB6C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFB60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003EFB60: ;
    fp_push((double)SMEM32(ecx)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x8CFA70)); /* fdiv dword ptr [0x8cfa70] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003EFB70
 * Original: 0x003EFB70 - 0x003EFB74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFB70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003EFB70: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003EFB80
 * Original: 0x003EFB80 - 0x003EFB83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFB80(void)
{

loc_003EFB80: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EFB90
 * Original: 0x003EFB90 - 0x003EFB96 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFB90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003EFB90: ;
    fp_push((double)SMEM32(ecx)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003EFBA0
 * Original: 0x003EFBA0 - 0x003EFBAF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFBA0(void)
{

loc_003EFBA0: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    MEMF(0x8CFA70) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003EFBC0
 * Original: 0x003EFBC0 - 0x003EFBC9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFBC0(void)
{

loc_003EFBC0: ;
    eax = (int32_t)MEMF(0x8CFA70); /* cvttss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_003EFBD0
 * Original: 0x003EFBD0 - 0x003EFBFB (43 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EFBD0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esi) = 0;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003EFBF5; /* je: equal / zero */

loc_003EFBE9: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EFBF2u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003EFBF2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EFBF5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EFC10
 * Original: 0x003EFC10 - 0x003EFC61 (81 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EFC10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(ecx);
    edx = MEM32(esi);
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003EFC58; /* je: equal / zero */

loc_003EFC4A: ;
    PUSH32(esp, 8);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EFC55u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003EFC55: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EFC58: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EFC80
 * Original: 0x003EFC80 - 0x003EFCDA (90 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EFC80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(esp + 4) = eax;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003EFCD1; /* je: equal / zero */

loc_003EFCC3: ;
    PUSH32(esp, 8);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EFCCEu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003EFCCE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EFCD1: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EFCF0
 * Original: 0x003EFCF0 - 0x003EFD4C (92 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EFCF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = (float)(int32_t)MEM32(eax); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(esp + 4) = eax;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003EFD45; /* je: equal / zero */

loc_003EFD37: ;
    PUSH32(esp, 8);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EFD42u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003EFD42: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EFD45: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003EFD70
 * Original: 0x003EFD70 - 0x003EFDCC (92 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EFD70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm0.f[0] = (float)(int32_t)MEM32(eax); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(esp + 4) = eax;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003EFDC5; /* je: equal / zero */

loc_003EFDB7: ;
    PUSH32(esp, 8);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EFDC2u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003EFDC2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EFDC5: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003EFDF0
 * Original: 0x003EFDF0 - 0x003EFE4A (90 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EFDF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x10); /* divss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(esp + 4) = eax;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003EFE41; /* je: equal / zero */

loc_003EFE33: ;
    PUSH32(esp, 8);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EFE3Eu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003EFE3E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EFE41: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EFE60
 * Original: 0x003EFE60 - 0x003EFE8D (45 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFE60(void)
{

loc_003EFE60: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003EFE74u); RECOMP_ABI_CALL(0x00031887u, sub_00031887); /* call 0x00031887 */

loc_003EFE74: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(esi) = 0x83632C;
    MEM32(esi + 0x18) = ecx;
    PUSH32(esp, 0x003EFE87u); RECOMP_ABI_CALL(0x0003084Cu, sub_0003084C); /* call 0x0003084C */

loc_003EFE87: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EFEA0
 * Original: 0x003EFEA0 - 0x003EFEC1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFEA0(void)
{

loc_003EFEA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x83632C;
    PUSH32(esp, 0x003EFEB2u); RECOMP_ABI_CALL(0x0002433Fu, sub_0002433F); /* call 0x0002433F */

loc_003EFEB2: ;
    MEM32(esi + 0x18) = 0;
    MEM32(esi) = 0x836294;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EFED0
 * Original: 0x003EFED0 - 0x003EFED4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFED0(void)
{

loc_003EFED0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_003EFEE0
 * Original: 0x003EFEE0 - 0x003EFF38 (88 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EFEE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x003EFEEDu); RECOMP_ABI_CALL(0x00034F87u, sub_00034F87); /* call 0x00034F87 */

loc_003EFEED: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EFF35; /* je: equal / zero */

loc_003EFEF3: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    goto loc_003EFF00;

    /* nop */

loc_003EFF00: ;
    eax = MEM32(0x907DF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EFF0F; /* je: equal / zero */

loc_003EFF09: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003EFF0Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003EFF0Au); } /* indirect call */
    }

loc_003EFF0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EFF0F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003EFF17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EFF14u); } /* indirect call */
    }

loc_003EFF17: ;
    eax = MEM32(0x907DF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EFF26; /* je: equal / zero */

loc_003EFF20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003EFF23u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003EFF21u); } /* indirect call */
    }

loc_003EFF23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EFF26: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x003EFF2Eu); RECOMP_ABI_CALL(0x0001B0C8u, sub_0001B0C8); /* call 0x0001B0C8 */

loc_003EFF2E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EFF00; /* jne: not equal / not zero */

loc_003EFF34: ;
    POP32(esp, edi);

loc_003EFF35: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EFF50
 * Original: 0x003EFF50 - 0x003EFF64 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFF50(void)
{

loc_003EFF50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x907DF4) = eax;
    MEM32(0x907DF8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003EFF70
 * Original: 0x003EFF70 - 0x003EFFA5 (53 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EFF70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x83632C;
    PUSH32(esp, 0x003EFF82u); RECOMP_ABI_CALL(0x0002433Fu, sub_0002433F); /* call 0x0002433F */

loc_003EFF82: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi + 0x18) = 0;
    MEM32(esi) = 0x836294;
    if (TEST_Z(_fa, _fb)) goto loc_003EFF9F; /* je: equal / zero */

loc_003EFF96: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EFF9Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003EFF9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EFF9F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EFFC0
 * Original: 0x003EFFC0 - 0x003EFFC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFFC0(void)
{

loc_003EFFC0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_003EFFD0
 * Original: 0x003EFFD0 - 0x003EFFF2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EFFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EFFD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x83633C;
    PUSH32(esp, 0x003EFFE2u); RECOMP_ABI_CALL(0x0001B95Bu, sub_0001B95B); /* call 0x0001B95B */

loc_003EFFE2: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x003EFFEAu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003EFFEA: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00034DCA(); return; /* tail jmp 0x00034DCA */

}

/**
 * sub_003F0000
 * Original: 0x003F0000 - 0x003F000B (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F0000: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003F0008u); RECOMP_ABI_CALL(0x0001DDBEu, sub_0001DDBE); /* call 0x0001DDBE */

loc_003F0008: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0010
 * Original: 0x003F0010 - 0x003F0014 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0010(void)
{

loc_003F0010: ;
    eax = MEM32(ecx + 0x54);
    esp += 4; return; /* ret */

}

/**
 * sub_003F0020
 * Original: 0x003F0020 - 0x003F002A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0020(void)
{

loc_003F0020: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x54) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0030
 * Original: 0x003F0030 - 0x003F0038 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0030: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001FAF6(); return; /* tail jmp 0x0001FAF6 */

}

/**
 * sub_003F0040
 * Original: 0x003F0040 - 0x003F0044 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0040(void)
{

loc_003F0040: ;
    eax = ecx + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0050
 * Original: 0x003F0050 - 0x003F006D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F0050: ;
    eax = MEM32(esp + 4);
    edx = ecx + 0x1C;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_003F0060: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F0060; /* jne: not equal / not zero */

loc_003F006A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0080
 * Original: 0x003F0080 - 0x003F0084 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0080(void)
{

loc_003F0080: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0090
 * Original: 0x003F0090 - 0x003F00C6 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0090: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x5C;
    MEM32(esi) = 0x836354;
    MEM32(ecx) = 0x836348;
    PUSH32(esp, 0x003F00A7u); RECOMP_ABI_CALL(0x000323C2u, sub_000323C2); /* call 0x000323C2 */

loc_003F00A7: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x83633C;
    PUSH32(esp, 0x003F00B6u); RECOMP_ABI_CALL(0x0001B95Bu, sub_0001B95B); /* call 0x0001B95B */

loc_003F00B6: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x003F00BEu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F00BE: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00034DCA(); return; /* tail jmp 0x00034DCA */

}

/**
 * sub_003F00E0
 * Original: 0x003F00E0 - 0x003F011D (61 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F00E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F00E0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    esi = edi + -16;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003F00FBu); RECOMP_ABI_CALL(0x0002D5B6u, sub_0002D5B6); /* call 0x0002D5B6 */

loc_003F00FB: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003F0103u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003F0103: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003F010Cu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F010C: ;
    ecx = MEM32(edi + -68);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F0115u); RECOMP_ABI_CALL(0x00019BB0u, sub_00019BB0); /* call 0x00019BB0 */

loc_003F0115: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0130
 * Original: 0x003F0130 - 0x003F0166 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0130: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x5C;
    MEM32(esi) = 0x83636C;
    MEM32(ecx) = 0x836360;
    PUSH32(esp, 0x003F0147u); RECOMP_ABI_CALL(0x000220DAu, sub_000220DA); /* call 0x000220DA */

loc_003F0147: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x83633C;
    PUSH32(esp, 0x003F0156u); RECOMP_ABI_CALL(0x0001B95Bu, sub_0001B95B); /* call 0x0001B95B */

loc_003F0156: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x003F015Eu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F015E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00034DCA(); return; /* tail jmp 0x00034DCA */

}

/**
 * sub_003F0180
 * Original: 0x003F0180 - 0x003F0188 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0180: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00017531(); return; /* tail jmp 0x00017531 */

}

/**
 * sub_003F0190
 * Original: 0x003F0190 - 0x003F0198 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0190: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00038231(); return; /* tail jmp 0x00038231 */

}

/**
 * sub_003F01A0
 * Original: 0x003F01A0 - 0x003F01FB (91 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F01A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F01A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003F01B9u); RECOMP_ABI_CALL(0x000314D1u, sub_000314D1); /* call 0x000314D1 */

loc_003F01B9: ;
    SET_LO8(eax, 1);
    edi = esi + 0x4C;
    ecx = edi;
    MEM32(esi) = 0x83633C;
    MEM8(esi + 0x44) = LO8(ebx);
    MEM8(esi + 0x45) = LO8(eax);
    MEM8(esi + 0x46) = LO8(eax);
    MEM32(esi + 0x48) = ebx;
    PUSH32(esp, 0x003F01D7u); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_003F01D7: ;
    ecx = edi;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x44) = LO8(ebx);
    MEM8(esi + 0x1C) = LO8(ebx);
    PUSH32(esp, 0x003F01EAu); RECOMP_ABI_CALL(0x0001DDBEu, sub_0001DDBE); /* call 0x0001DDBE */

loc_003F01EA: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F01F3u); RECOMP_ABI_CALL(0x0001A281u, sub_0001A281); /* call 0x0001A281 */

loc_003F01F3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F0220
 * Original: 0x003F0220 - 0x003F0257 (55 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F0220: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x83633C;
    PUSH32(esp, 0x003F0232u); RECOMP_ABI_CALL(0x0001B95Bu, sub_0001B95B); /* call 0x0001B95B */

loc_003F0232: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x003F023Au); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F023A: ;
    ecx = esi;
    PUSH32(esp, 0x003F0241u); RECOMP_ABI_CALL(0x00034DCAu, sub_00034DCA); /* call 0x00034DCA */

loc_003F0241: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F0251; /* je: equal / zero */

loc_003F0248: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F024Eu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F024E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F0251: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0270
 * Original: 0x003F0270 - 0x003F02AB (59 bytes, 25 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0270: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x003F0285u); RECOMP_ABI_CALL(0x0002CC83u, sub_0002CC83); /* call 0x0002CC83 */

loc_003F0285: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edi = esi + 0x5C;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x003F0296u); RECOMP_ABI_CALL(0x000243B2u, sub_000243B2); /* call 0x000243B2 */

loc_003F0296: ;
    MEM32(edi) = 0x836348;
    POP32(esp, edi);
    MEM32(esi) = 0x836354;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003F02C0
 * Original: 0x003F02C0 - 0x003F030B (75 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F02C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F02C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x5C;
    MEM32(esi) = 0x836354;
    MEM32(ecx) = 0x836348;
    PUSH32(esp, 0x003F02D7u); RECOMP_ABI_CALL(0x000323C2u, sub_000323C2); /* call 0x000323C2 */

loc_003F02D7: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x83633C;
    PUSH32(esp, 0x003F02E6u); RECOMP_ABI_CALL(0x0001B95Bu, sub_0001B95B); /* call 0x0001B95B */

loc_003F02E6: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x003F02EEu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F02EE: ;
    ecx = esi;
    PUSH32(esp, 0x003F02F5u); RECOMP_ABI_CALL(0x00034DCAu, sub_00034DCA); /* call 0x00034DCA */

loc_003F02F5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F0305; /* je: equal / zero */

loc_003F02FC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F0302u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F0302: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F0305: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0320
 * Original: 0x003F0320 - 0x003F0356 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0320: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x5C;
    MEM32(esi) = 0x83636C;
    MEM32(ecx) = 0x836360;
    PUSH32(esp, 0x003F0337u); RECOMP_ABI_CALL(0x000220DAu, sub_000220DA); /* call 0x000220DA */

loc_003F0337: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x83633C;
    PUSH32(esp, 0x003F0346u); RECOMP_ABI_CALL(0x0001B95Bu, sub_0001B95B); /* call 0x0001B95B */

loc_003F0346: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x003F034Eu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F034E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00034DCA(); return; /* tail jmp 0x00034DCA */

}

/**
 * sub_003F0370
 * Original: 0x003F0370 - 0x003F03AB (59 bytes, 25 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0370: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x003F0385u); RECOMP_ABI_CALL(0x0002CC83u, sub_0002CC83); /* call 0x0002CC83 */

loc_003F0385: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edi = esi + 0x5C;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x003F0396u); RECOMP_ABI_CALL(0x00030FBDu, sub_00030FBD); /* call 0x00030FBD */

loc_003F0396: ;
    MEM32(edi) = 0x836360;
    POP32(esp, edi);
    MEM32(esi) = 0x83636C;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003F03C0
 * Original: 0x003F03C0 - 0x003F040B (75 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F03C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F03C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x5C;
    MEM32(esi) = 0x83636C;
    MEM32(ecx) = 0x836360;
    PUSH32(esp, 0x003F03D7u); RECOMP_ABI_CALL(0x000220DAu, sub_000220DA); /* call 0x000220DA */

loc_003F03D7: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x83633C;
    PUSH32(esp, 0x003F03E6u); RECOMP_ABI_CALL(0x0001B95Bu, sub_0001B95B); /* call 0x0001B95B */

loc_003F03E6: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x003F03EEu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F03EE: ;
    ecx = esi;
    PUSH32(esp, 0x003F03F5u); RECOMP_ABI_CALL(0x00034DCAu, sub_00034DCA); /* call 0x00034DCA */

loc_003F03F5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F0405; /* je: equal / zero */

loc_003F03FC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F0402u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F0402: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F0405: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0420
 * Original: 0x003F0420 - 0x003F045B (59 bytes, 25 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0420: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x003F0435u); RECOMP_ABI_CALL(0x0002CC83u, sub_0002CC83); /* call 0x0002CC83 */

loc_003F0435: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edi = esi + 0x5C;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x003F0446u); RECOMP_ABI_CALL(0x00030FBDu, sub_00030FBD); /* call 0x00030FBD */

loc_003F0446: ;
    MEM32(edi) = 0x836384;
    POP32(esp, edi);
    MEM32(esi) = 0x836378;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003F0470
 * Original: 0x003F0470 - 0x003F0478 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0470: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00012AE0(); return; /* tail jmp 0x00012AE0 */

}

/**
 * sub_003F0480
 * Original: 0x003F0480 - 0x003F04CB (75 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F0480: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x5C;
    MEM32(esi) = 0x83636C;
    MEM32(ecx) = 0x836360;
    PUSH32(esp, 0x003F0497u); RECOMP_ABI_CALL(0x000220DAu, sub_000220DA); /* call 0x000220DA */

loc_003F0497: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = 0x83633C;
    PUSH32(esp, 0x003F04A6u); RECOMP_ABI_CALL(0x0001B95Bu, sub_0001B95B); /* call 0x0001B95B */

loc_003F04A6: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x003F04AEu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F04AE: ;
    ecx = esi;
    PUSH32(esp, 0x003F04B5u); RECOMP_ABI_CALL(0x00034DCAu, sub_00034DCA); /* call 0x00034DCA */

loc_003F04B5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F04C5; /* je: equal / zero */

loc_003F04BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F04C2u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003F04C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F04C5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F04E0
 * Original: 0x003F04E0 - 0x003F04E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F04E0(void)
{

loc_003F04E0: ;
    eax = MEM32(0x907E00);
    esp += 4; return; /* ret */

}

/**
 * sub_003F04F0
 * Original: 0x003F04F0 - 0x003F050C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F04F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F04F0: ;
    ecx = MEM32(0x907E00);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0501; /* je: equal / zero */

loc_003F04FA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003F0501u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F04FEu); } /* indirect call */
    }

loc_003F0501: ;
    MEM32(0x907E00) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0520
 * Original: 0x003F0520 - 0x003F0529 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0520(void)
{

loc_003F0520: ;
    eax = ecx;
    MEM32(eax) = 0x836390;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0530
 * Original: 0x003F0530 - 0x003F053B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0530(void)
{

loc_003F0530: ;
    eax = ecx;
    MEM32(eax) = 0x836390;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F0540
 * Original: 0x003F0540 - 0x003F0547 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0540(void)
{

loc_003F0540: ;
    MEM32(ecx) = 0x836390;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0550
 * Original: 0x003F0550 - 0x003F056F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F0550: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x836390;
    if (TEST_Z(_fa, _fb)) goto loc_003F0569; /* je: equal / zero */

loc_003F0560: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F0566u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F0566: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F0569: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0580
 * Original: 0x003F0580 - 0x003F05A6 (38 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F0580: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x2000000;
    MEM32(eax + 4) = 0x2000000;
    MEM32(eax + 8) = 0x10;
    MEM32(eax + 0xC) = 0x80;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003F05B0
 * Original: 0x003F05B0 - 0x003F05B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F05B0(void)
{

loc_003F05B0: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    esp += 4; return; /* ret */

}

/**
 * sub_003F05C0
 * Original: 0x003F05C0 - 0x003F05E5 (37 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F05C0(void)
{

loc_003F05C0: ;
    eax = ecx;
    MEM32(eax) = 0x3C;
    MEM32(eax + 4) = 0x3C;
    MEM32(eax + 8) = 0x1E;
    MEM32(eax + 0xC) = 9;
    MEM32(eax + 0x10) = 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_003F05F0
 * Original: 0x003F05F0 - 0x003F05FF (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F05F0(void)
{

loc_003F05F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    MEM32(0x907224) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0610
 * Original: 0x003F0610 - 0x003F0614 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0610(void)
{

loc_003F0610: ;
    SET_LO8(eax, MEM8(ecx + 0x18));
    esp += 4; return; /* ret */

}

/**
 * sub_003F0620
 * Original: 0x003F0620 - 0x003F0624 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0620(void)
{

loc_003F0620: ;
    SET_LO8(eax, MEM8(ecx + 0x19));
    esp += 4; return; /* ret */

}

/**
 * sub_003F0630
 * Original: 0x003F0630 - 0x003F0633 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0630(void)
{

loc_003F0630: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0640
 * Original: 0x003F0640 - 0x003F0660 (32 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0640(void)
{

loc_003F0640: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x836840);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003F0654u); RECOMP_ABI_CALL(0x000243B2u, sub_000243B2); /* call 0x000243B2 */

loc_003F0654: ;
    MEM32(esi) = 0x836834;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003F0670
 * Original: 0x003F0670 - 0x003F067B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0670: ;
    MEM32(ecx) = 0x836834;
    g_seh_ebp = ebp; sub_000323C2(); return; /* tail jmp 0x000323C2 */

}

/**
 * sub_003F0680
 * Original: 0x003F0680 - 0x003F06A5 (37 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0680(void)
{

loc_003F0680: ;
    PUSH32(esp, 0x003F0685u); RECOMP_ABI_CALL(0x00017B17u, sub_00017B17); /* call 0x00017B17 */

loc_003F0685: ;
    PUSH32(esp, 0x003F068Au); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_003F068A: ;
    PUSH32(esp, 0x003F068Fu); RECOMP_ABI_CALL(0x00024C59u, sub_00024C59); /* call 0x00024C59 */

loc_003F068F: ;
    ecx = eax;
    PUSH32(esp, 0x003F0696u); RECOMP_ABI_CALL(0x00013E81u, sub_00013E81); /* call 0x00013E81 */

loc_003F0696: ;
    PUSH32(esp, 0x003F069Bu); RECOMP_ABI_CALL(0x0003302Eu, sub_0003302E); /* call 0x0003302E */

loc_003F069B: ;
    ecx = eax;
    PUSH32(esp, 0x003F06A2u); RECOMP_ABI_CALL(0x0002BEF5u, sub_0002BEF5); /* call 0x0002BEF5 */

loc_003F06A2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F06B0
 * Original: 0x003F06B0 - 0x003F0716 (102 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F06B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F06B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x836864);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003F06C3u); RECOMP_ABI_CALL(0x000377EBu, sub_000377EB); /* call 0x000377EB */

loc_003F06C3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    MEM32(esi) = 0x836850;
    MEM32(esi + 0xB4) = 0;
    PUSH32(esp, 0x003F06DCu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003F06DC: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0707; /* je: equal / zero */

loc_003F06E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x836840);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003F06F4u); RECOMP_ABI_CALL(0x000243B2u, sub_000243B2); /* call 0x000243B2 */

loc_003F06F4: ;
    MEM32(edi) = 0x836834;
    MEM32(esi + 0xB4) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_003F0707: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xB4) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003F0730
 * Original: 0x003F0730 - 0x003F075B (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0730: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x836850;
    if (CMP_EQ(_fa, _fb)) goto loc_003F0749; /* je: equal / zero */

loc_003F0743: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003F0749u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0747u); } /* indirect call */
    }

loc_003F0749: ;
    MEM32(esi + 0xB4) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00021932(); return; /* tail jmp 0x00021932 */

}

/**
 * sub_003F0770
 * Original: 0x003F0770 - 0x003F0793 (35 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0770(void)
{

loc_003F0770: ;
    eax = ecx;
    ecx = 0x3C;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x1E;
    MEM32(eax + 0x14) = 9;
    MEM32(eax + 0x18) = 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_003F07A0
 * Original: 0x003F07A0 - 0x003F07D8 (56 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F07A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F07A0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx + 4;
    MEM32(ebx) = 0x836874;
    PUSH32(esp, 0x003F07B3u); RECOMP_ABI_CALL(0x0002672Fu, sub_0002672F); /* call 0x0002672F */

loc_003F07B3: ;
    esi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x18) = eax;
    MEM8(ebx + 0x1C) = LO8(eax);
    MEM32(ebx + 0x20) = eax;
    edi = ebx + 0x24;
    MEM8(ebx + 0x1D) = 1;
    ecx = 0x2E;
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
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F07F0
 * Original: 0x003F07F0 - 0x003F07FE (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F07F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F07F0: ;
    MEM32(ecx) = 0x836874;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001EB2E(); return; /* tail jmp 0x0001EB2E */

}

/**
 * sub_003F0810
 * Original: 0x003F0810 - 0x003F0821 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F0810: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003F081Eu); RECOMP_ABI_CALL(0x00014408u, sub_00014408); /* call 0x00014408 */

loc_003F081E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0830
 * Original: 0x003F0830 - 0x003F0838 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0830: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000330AB(); return; /* tail jmp 0x000330AB */

}

/**
 * sub_003F0840
 * Original: 0x003F0840 - 0x003F0B66 (806 bytes, 276 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003F0840(void)
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

loc_003F0840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x40));
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0854u); RECOMP_ABI_CALL(0x0059E4ABu, sub_0059E4AB); /* call 0x0059E4AB */

loc_003F0854: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003F085Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0859u); } /* indirect call */
    }

loc_003F085C: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003F0864u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0861u); } /* indirect call */
    }

loc_003F0864: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0869u); RECOMP_ABI_CALL(0x0059E895u, sub_0059E895); /* call 0x0059E895 */

loc_003F0869: ;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = 0;
    fp_push((double)SMEM64(esp + 0x28)); /* fild */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    /* nop */

loc_003F0880: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003F0888u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0885u); } /* indirect call */
    }

loc_003F0888: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esp + 0x20;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F089Fu); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003F089F: ;
    /* nop */

loc_003F08A0: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003F08A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F08A5u); } /* indirect call */
    }

loc_003F08A8: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = 0x907E14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F08B7u); RECOMP_ABI_CALL(0x000240BFu, sub_000240BF); /* call 0x000240BF */

loc_003F08B7: ;
    ecx = 0x907E14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F08C1u); RECOMP_ABI_CALL(0x00029650u, sub_00029650); /* call 0x00029650 */

loc_003F08C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_003F092A; /* jle: less or equal (signed <=) */

loc_003F08C5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F08D2u); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003F08D2: ;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = 0x907E14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F08E2u); RECOMP_ABI_CALL(0x00024844u, sub_00024844); /* call 0x00024844 */

loc_003F08E2: ;
    PUSH32(esp, eax);
    ecx = 0x907E14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F08EDu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003F08ED: ;
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F08F6u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F08F6: ;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F08FFu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F08FF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0904u); RECOMP_ABI_CALL(0x00014E4Eu, sub_00014E4E); /* call 0x00014E4E */

loc_003F0904: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F090Bu); RECOMP_ABI_CALL(0x000249D9u, sub_000249D9); /* call 0x000249D9 */

loc_003F090B: ;
    eax = MEM32(ebp + 0xD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_003F091C; /* jle: less or equal (signed <=) */

loc_003F0915: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0xD8) = eax;

loc_003F091C: ;
    ecx = 0x907E14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0926u); RECOMP_ABI_CALL(0x00029650u, sub_00029650); /* call 0x00029650 */

loc_003F0926: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_003F08C5; /* jg: greater (signed >) */

loc_003F092A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F092Fu); RECOMP_ABI_CALL(0x0002C62Fu, sub_0002C62F); /* call 0x0002C62F */

loc_003F092F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003F0936u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0933u); } /* indirect call */
    }

loc_003F0936: ;
    edi = ebp + 4;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0940u); RECOMP_ABI_CALL(0x0001E41Cu, sub_0001E41C); /* call 0x0001E41C */

loc_003F0940: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0967; /* je: equal / zero */

loc_003F0946: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0959; /* je: equal / zero */

loc_003F094D: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0959u); RECOMP_ABI_CALL(0x000325DEu, sub_000325DE); /* call 0x000325DE */

loc_003F0959: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0961u); RECOMP_ABI_CALL(0x0001C324u, sub_0001C324); /* call 0x0001C324 */

loc_003F0961: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003F0946; /* jne: not equal / not zero */

loc_003F0967: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F096Cu); RECOMP_ABI_CALL(0x0002C62Fu, sub_0002C62F); /* call 0x0002C62F */

loc_003F096C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003F0973u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0970u); } /* indirect call */
    }

loc_003F0973: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0978u); RECOMP_ABI_CALL(0x0002C62Fu, sub_0002C62F); /* call 0x0002C62F */

loc_003F0978: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003F097Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F097Cu); } /* indirect call */
    }

loc_003F097F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0984u); RECOMP_ABI_CALL(0x0002C62Fu, sub_0002C62F); /* call 0x0002C62F */

loc_003F0984: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003F098Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0988u); } /* indirect call */
    }

loc_003F098B: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0997u); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003F0997: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F099Eu); RECOMP_ABI_CALL(0x0001E41Cu, sub_0001E41C); /* call 0x0001E41C */

loc_003F099E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F09C5; /* je: equal / zero */

loc_003F09A4: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F09B7; /* je: equal / zero */

loc_003F09AB: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F09B7u); RECOMP_ABI_CALL(0x000364BDu, sub_000364BD); /* call 0x000364BD */

loc_003F09B7: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F09BFu); RECOMP_ABI_CALL(0x0001C324u, sub_0001C324); /* call 0x0001C324 */

loc_003F09BF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003F09A4; /* jne: not equal / not zero */

loc_003F09C5: ;
    ecx = edi;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F09CEu); RECOMP_ABI_CALL(0x0001E41Cu, sub_0001E41C); /* call 0x0001E41C */

loc_003F09CE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0A1E; /* je: equal / zero */

loc_003F09D4: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F09FE; /* je: equal / zero */

loc_003F09DB: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F09E2u); RECOMP_ABI_CALL(0x0001B1AEu, sub_0001B1AE); /* call 0x0001B1AE */

loc_003F09E2: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F09EAu); RECOMP_ABI_CALL(0x00026A1Du, sub_00026A1D); /* call 0x00026A1D */

loc_003F09EA: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F09F1u); RECOMP_ABI_CALL(0x0002CC47u, sub_0002CC47); /* call 0x0002CC47 */

loc_003F09F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F09FE; /* je: equal / zero */

loc_003F09F5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003F09FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F09F9u); } /* indirect call */
    }

loc_003F09FC: ;
    SET_LO8(ebx, 1);

loc_003F09FE: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0A06u); RECOMP_ABI_CALL(0x0001C324u, sub_0001C324); /* call 0x0001C324 */

loc_003F0A06: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003F09D4; /* jne: not equal / not zero */

loc_003F0A0C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0A1E; /* je: equal / zero */

loc_003F0A10: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0A15u); RECOMP_ABI_CALL(0x0002C62Fu, sub_0002C62F); /* call 0x0002C62F */

loc_003F0A15: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003F0A1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0A19u); } /* indirect call */
    }

loc_003F0A1C: ;
    goto loc_003F09C5;

loc_003F0A1E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0A23u); RECOMP_ABI_CALL(0x0002C62Fu, sub_0002C62F); /* call 0x0002C62F */

loc_003F0A23: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003F0A2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0A27u); } /* indirect call */
    }

loc_003F0A2A: ;
    SET_LO8(eax, MEM8(ebp + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0AC0; /* je: equal / zero */

loc_003F0A35: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0A3Cu); RECOMP_ABI_CALL(0x0001E41Cu, sub_0001E41C); /* call 0x0001E41C */

loc_003F0A3C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0A65; /* je: equal / zero */

loc_003F0A42: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0A57; /* je: equal / zero */

loc_003F0A49: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0A57; /* je: equal / zero */

loc_003F0A50: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0A57u); RECOMP_ABI_CALL(0x00031A1Cu, sub_00031A1C); /* call 0x00031A1C */

loc_003F0A57: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0A5Fu); RECOMP_ABI_CALL(0x0001C324u, sub_0001C324); /* call 0x0001C324 */

loc_003F0A5F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003F0A42; /* jne: not equal / not zero */

loc_003F0A65: ;
    eax = MEM32(ebp + 0xD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003F0AC0; /* jne: not equal / not zero */

loc_003F0A6F: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x003F0A77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0A74u); } /* indirect call */
    }

loc_003F0A77: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0A7Cu); RECOMP_ABI_CALL(0x0001F0BFu, sub_0001F0BF); /* call 0x0001F0BF */

loc_003F0A7C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0A83u); RECOMP_ABI_CALL(0x00014D9Fu, sub_00014D9F); /* call 0x00014D9F */

loc_003F0A83: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0A8Au); RECOMP_ABI_CALL(0x0001E41Cu, sub_0001E41C); /* call 0x0001E41C */

loc_003F0A8A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0AB3; /* je: equal / zero */

loc_003F0A90: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0AA5; /* je: equal / zero */

loc_003F0A97: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0AA5; /* je: equal / zero */

loc_003F0A9E: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0AA5u); RECOMP_ABI_CALL(0x0002CB84u, sub_0002CB84); /* call 0x0002CB84 */

loc_003F0AA5: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0AADu); RECOMP_ABI_CALL(0x0001C324u, sub_0001C324); /* call 0x0001C324 */

loc_003F0AAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003F0A90; /* jne: not equal / not zero */

loc_003F0AB3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0AB8u); RECOMP_ABI_CALL(0x0001F0BFu, sub_0001F0BF); /* call 0x0001F0BF */

loc_003F0AB8: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0ABFu); RECOMP_ABI_CALL(0x00029DFDu, sub_00029DFD); /* call 0x00029DFD */

loc_003F0ABF: ;
    /* nop */

loc_003F0AC0: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    edi = edx;
    edx = MEM32(esp + 0x20);
    esi = eax;
    eax = MEM32(esp + 0x24);
    ecx = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edi;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    fp_push((double)SMEM64(esp + 0x30)); /* fild */
    PUSH32(esp, ecx);
    ecx = esp + 0x4C;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0AF3u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_003F0AF3: ;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0AFDu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003F0AFD: ;
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0B06u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F0B06: ;
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0B0Fu); RECOMP_ABI_CALL(0x00029650u, sub_00029650); /* call 0x00029650 */

loc_003F0B0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003F0AC0; /* jl: less (signed <) */

loc_003F0B14: ;
    eax = MEM32(ebp);
    ecx = ebp;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x24) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x003F0B24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0B21u); } /* indirect call */
    }

loc_003F0B24: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0B2Du); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F0B2D: ;
    SET_LO8(eax, MEM8(ebp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F08A0; /* je: equal / zero */

loc_003F0B38: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x003F0B40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0B3Du); } /* indirect call */
    }

loc_003F0B40: ;
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F0B49u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F0B49: ;
    SET_LO8(eax, MEM8(0x907EF8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0880; /* je: equal / zero */

loc_003F0B56: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x003F0B5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0B5Bu); } /* indirect call */
    }

loc_003F0B5E: ;
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
 * sub_003F0C30
 * Original: 0x003F0C30 - 0x003F0C84 (84 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F0C30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 4;
    PUSH32(esp, 0x003F0C40u); RECOMP_ABI_CALL(0x00034541u, sub_00034541); /* call 0x00034541 */

loc_003F0C40: ;
    ecx = esp + 4;
    PUSH32(esp, 0x003F0C49u); RECOMP_ABI_CALL(0x000300D1u, sub_000300D1); /* call 0x000300D1 */

loc_003F0C49: ;
    eax = MEM32(esi + 0x24);
    SET_LO8(ecx, MEM8(esi + 0xD4));
    edx = esp + 4;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    MEM8(esp + 8) = LO8(ecx);
    PUSH32(esp, 0x003F0C64u); RECOMP_ABI_CALL(0x00017B3Fu, sub_00017B3F); /* call 0x00017B3F */

loc_003F0C64: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0xC8) = eax;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F0C7Au); RECOMP_ABI_CALL(0x000161C7u, sub_000161C7); /* call 0x000161C7 */

loc_003F0C7A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0CA0
 * Original: 0x003F0CA0 - 0x003F0D37 (151 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F0CA0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F0CAFu); RECOMP_ABI_CALL(0x0002CF53u, sub_0002CF53); /* call 0x0002CF53 */

loc_003F0CAF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003F0CB7u); RECOMP_ABI_CALL(0x0002D7F0u, sub_0002D7F0); /* call 0x0002D7F0 */

loc_003F0CB7: ;
    ecx = esp + 4;
    PUSH32(esp, 0x003F0CC0u); RECOMP_ABI_CALL(0x00018D2Du, sub_00018D2D); /* call 0x00018D2D */

loc_003F0CC0: ;
    eax = 1;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB8);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x003F0CE9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003F0CE9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0D10; /* je: equal / zero */

loc_003F0CF0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0xD6));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0xD5));
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003F0D0Eu); RECOMP_ABI_CALL(0x00025FD7u, sub_00025FD7); /* call 0x00025FD7 */

loc_003F0D0E: ;
    goto loc_003F0D12;

loc_003F0D10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F0D12: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esi + 4;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x003F0D1Fu); RECOMP_ABI_CALL(0x00014408u, sub_00014408); /* call 0x00014408 */

loc_003F0D1F: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F0D28u); RECOMP_ABI_CALL(0x00026239u, sub_00026239); /* call 0x00026239 */

loc_003F0D28: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003F0D32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0D2Fu); } /* indirect call */
    }

loc_003F0D32: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F0D60
 * Original: 0x003F0D60 - 0x003F0DB9 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0D60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003F0D72u); RECOMP_ABI_CALL(0x000330ABu, sub_000330AB); /* call 0x000330AB */

loc_003F0D72: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0D7F; /* je: equal / zero */

loc_003F0D79: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003F0D7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0D7Du); } /* indirect call */
    }

loc_003F0D7F: ;
    MEM32(esi + 0x18) = 0;
    PUSH32(esp, 0x003F0D8Bu); RECOMP_ABI_CALL(0x0002E03Du, sub_0002E03D); /* call 0x0002E03D */

loc_003F0D8B: ;
    PUSH32(esp, 0x003F0D90u); RECOMP_ABI_CALL(0x00021FB3u, sub_00021FB3); /* call 0x00021FB3 */

loc_003F0D90: ;
    PUSH32(esp, 0x003F0D95u); RECOMP_ABI_CALL(0x00024948u, sub_00024948); /* call 0x00024948 */

loc_003F0D95: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x003F0D9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0D99u); } /* indirect call */
    }

loc_003F0D9C: ;
    PUSH32(esp, 0x003F0DA1u); RECOMP_ABI_CALL(0x00030AB8u, sub_00030AB8); /* call 0x00030AB8 */

loc_003F0DA1: ;
    PUSH32(esp, 0x003F0DA6u); RECOMP_ABI_CALL(0x0003293Au, sub_0003293A); /* call 0x0003293A */

loc_003F0DA6: ;
    PUSH32(esp, 0x003F0DABu); RECOMP_ABI_CALL(0x00038051u, sub_00038051); /* call 0x00038051 */

loc_003F0DAB: ;
    ecx = edi;
    PUSH32(esp, 0x003F0DB2u); RECOMP_ABI_CALL(0x00021B12u, sub_00021B12); /* call 0x00021B12 */

loc_003F0DB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000225DF(); return; /* tail jmp 0x000225DF */

}

/**
 * sub_003F0DD0
 * Original: 0x003F0DD0 - 0x003F0DD5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0DD0(void)
{

loc_003F0DD0: ;
    MEM8(ecx + 0x1C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0DE0
 * Original: 0x003F0DE0 - 0x003F0DE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0DE0(void)
{

loc_003F0DE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F0DF0
 * Original: 0x003F0DF0 - 0x003F0DFA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0DF0(void)
{

loc_003F0DF0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x1C) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0E00
 * Original: 0x003F0E00 - 0x003F0E23 (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F0E00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(ecx + 0x6C) = esi;
    PUSH32(esp, 0x003F0E0Du); RECOMP_ABI_CALL(0x0002C567u, sub_0002C567); /* call 0x0002C567 */

loc_003F0E0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0E1F; /* je: equal / zero */

loc_003F0E11: ;
    PUSH32(esp, 0x003F0E16u); RECOMP_ABI_CALL(0x0002C567u, sub_0002C567); /* call 0x0002C567 */

loc_003F0E16: ;
    MEM32(eax + 0x34) = esi;
    MEM32(0x907224) = esi;

loc_003F0E1F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0E30
 * Original: 0x003F0E30 - 0x003F0E54 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F0E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x836834;
    PUSH32(esp, 0x003F0E3Eu); RECOMP_ABI_CALL(0x000323C2u, sub_000323C2); /* call 0x000323C2 */

loc_003F0E3E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F0E4E; /* je: equal / zero */

loc_003F0E45: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F0E4Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F0E4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F0E4E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0E60
 * Original: 0x003F0E60 - 0x003F0EA0 (64 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F0E60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x836850;
    if (CMP_EQ(_fa, _fb)) goto loc_003F0E79; /* je: equal / zero */

loc_003F0E73: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003F0E79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F0E77u); } /* indirect call */
    }

loc_003F0E79: ;
    ecx = esi;
    MEM32(esi + 0xB4) = 0;
    PUSH32(esp, 0x003F0E8Au); RECOMP_ABI_CALL(0x00021932u, sub_00021932); /* call 0x00021932 */

loc_003F0E8A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F0E9A; /* je: equal / zero */

loc_003F0E91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F0E97u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F0E97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F0E9A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0EB0
 * Original: 0x003F0EB0 - 0x003F0F2F (127 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F0EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x3C;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    edx = esi + 0x14;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    ecx = esi + 0x30;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = 0x1E;
    MEM32(esi + 0x28) = 9;
    MEM32(esi + 0x2C) = 0x64;
    PUSH32(esp, 0x003F0F05u); RECOMP_ABI_CALL(0x000292C7u, sub_000292C7); /* call 0x000292C7 */

loc_003F0F05: ;
    eax = 0x2000000;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x5C) = edi;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x54) = 0x10;
    MEM32(esi + 0x58) = 0x80;
    MEM32(esi + 0xB4) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F0F50
 * Original: 0x003F0F50 - 0x003F0F77 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F0F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    MEM32(esi) = 0x836874;
    PUSH32(esp, 0x003F0F61u); RECOMP_ABI_CALL(0x0001EB2Eu, sub_0001EB2E); /* call 0x0001EB2E */

loc_003F0F61: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F0F71; /* je: equal / zero */

loc_003F0F68: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F0F6Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F0F6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F0F71: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F0F80
 * Original: 0x003F0F80 - 0x003F0F88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F0F80: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001FAF6(); return; /* tail jmp 0x0001FAF6 */

}

/**
 * sub_003F0F90
 * Original: 0x003F0F90 - 0x003F1029 (153 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F0F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F0F90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003F0F9Eu); RECOMP_ABI_CALL(0x00037E26u, sub_00037E26); /* call 0x00037E26 */

loc_003F0F9E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAC);
    MEM32(esi) = 0x836D50;
    MEM32(esi + 0xC8) = ebx;
    MEM32(esi + 0xCC) = ebx;
    PUSH32(esp, 0x003F0FBDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003F0FBD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0FD3; /* je: equal / zero */

loc_003F0FC4: ;
    PUSH32(esp, 0x836D34);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x003F0FD1u); RECOMP_ABI_CALL(0x0002D3EAu, sub_0002D3EA); /* call 0x0002D3EA */

loc_003F0FD1: ;
    goto loc_003F0FD5;

loc_003F0FD3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F0FD5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x88);
    MEM32(esi + 0xC8) = eax;
    PUSH32(esp, 0x003F0FE6u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003F0FE6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F0FFC; /* je: equal / zero */

loc_003F0FED: ;
    PUSH32(esp, 0x836D1C);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x003F0FFAu); RECOMP_ABI_CALL(0x0003531Au, sub_0003531A); /* call 0x0003531A */

loc_003F0FFA: ;
    goto loc_003F0FFE;

loc_003F0FFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F0FFE: ;
    ecx = MEM32(esi + 0xC8);
    MEM32(esi + 0xCC) = eax;
    MEM8(ecx + 0x44) = 1;
    edx = MEM32(esi + 0xCC);
    MEM8(edx + 0x44) = LO8(ebx);
    eax = MEM32(esi + 0x2C);
    MEM32(eax + 4) = ebx;
    PUSH32(esp, 0x003F1022u); RECOMP_ABI_CALL(0x00023AF7u, sub_00023AF7); /* call 0x00023AF7 */

loc_003F1022: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1050
 * Original: 0x003F1050 - 0x003F109A (74 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F1050: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x836D50;
    PUSH32(esp, 0x003F105Eu); RECOMP_ABI_CALL(0x0003518Fu, sub_0003518F); /* call 0x0003518F */

loc_003F105E: ;
    ecx = MEM32(esi + 0xCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F106E; /* je: equal / zero */

loc_003F1068: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003F106Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F106Cu); } /* indirect call */
    }

loc_003F106E: ;
    ecx = MEM32(esi + 0xC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0xCC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003F1088; /* je: equal / zero */

loc_003F1082: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003F1088u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F1086u); } /* indirect call */
    }

loc_003F1088: ;
    MEM32(esi + 0xC8) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00031657(); return; /* tail jmp 0x00031657 */

}

/**
 * sub_003F10B0
 * Original: 0x003F10B0 - 0x003F1105 (85 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F10B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F10B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x907DE8);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x003F10C0u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003F10C0: ;
    ecx = MEM32(esi + 0xC8);
    PUSH32(esp, 0x907DE8);
    PUSH32(esp, 0x003F10D0u); RECOMP_ABI_CALL(0x00011E3Du, sub_00011E3D); /* call 0x00011E3D */

loc_003F10D0: ;
    ecx = MEM32(esi + 0xCC);
    PUSH32(esp, 0x907DE8);
    PUSH32(esp, 0x003F10E0u); RECOMP_ABI_CALL(0x00011E3Du, sub_00011E3D); /* call 0x00011E3D */

loc_003F10E0: ;
    ecx = MEM32(esi + 0x2C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    edx = MEM32(esi + 0xC8);
    MEM8(edx + 0x44) = 1;
    ecx = MEM32(esi + 0xCC);
    MEM8(ecx + 0x44) = LO8(eax);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003F1103u); RECOMP_ABI_CALL(0x00028070u, sub_00028070); /* call 0x00028070 */

loc_003F1103: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1120
 * Original: 0x003F1120 - 0x003F1127 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1120(void)
{

loc_003F1120: ;
    eax = MEM32(ecx + 0xC8);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1130
 * Original: 0x003F1130 - 0x003F1137 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1130(void)
{

loc_003F1130: ;
    eax = MEM32(ecx + 0xCC);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1140
 * Original: 0x003F1140 - 0x003F115A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1140(void)
{

loc_003F1140: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xCC);
    PUSH32(esp, 0x003F114Eu); RECOMP_ABI_CALL(0x0002FAE6u, sub_0002FAE6); /* call 0x0002FAE6 */

loc_003F114E: ;
    eax = MEM32(esi + 0xC8);
    MEM8(eax + 0x44) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1160
 * Original: 0x003F1160 - 0x003F117A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1160(void)
{

loc_003F1160: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xCC);
    PUSH32(esp, 0x003F116Eu); RECOMP_ABI_CALL(0x00012A0Eu, sub_00012A0E); /* call 0x00012A0E */

loc_003F116E: ;
    eax = MEM32(esi + 0xC8);
    MEM8(eax + 0x44) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1180
 * Original: 0x003F1180 - 0x003F118B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1180(void)
{

loc_003F1180: ;
    eax = MEM32(ecx + 0xC8);
    MEM8(eax + 0x44) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003F1190
 * Original: 0x003F1190 - 0x003F119B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1190(void)
{

loc_003F1190: ;
    eax = MEM32(ecx + 0xC8);
    MEM8(eax + 0x44) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003F11A0
 * Original: 0x003F11A0 - 0x003F11FF (95 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F11A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F11A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x836D50;
    PUSH32(esp, 0x003F11AEu); RECOMP_ABI_CALL(0x0003518Fu, sub_0003518F); /* call 0x0003518F */

loc_003F11AE: ;
    ecx = MEM32(esi + 0xCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F11BE; /* je: equal / zero */

loc_003F11B8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003F11BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F11BCu); } /* indirect call */
    }

loc_003F11BE: ;
    ecx = MEM32(esi + 0xC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0xCC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003F11D8; /* je: equal / zero */

loc_003F11D2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003F11D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F11D6u); } /* indirect call */
    }

loc_003F11D8: ;
    ecx = esi;
    MEM32(esi + 0xC8) = 0;
    PUSH32(esp, 0x003F11E9u); RECOMP_ABI_CALL(0x00031657u, sub_00031657); /* call 0x00031657 */

loc_003F11E9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F11F9; /* je: equal / zero */

loc_003F11F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F11F6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F11F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F11F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1220
 * Original: 0x003F1220 - 0x003F122D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1220(void)
{

loc_003F1220: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x548) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1230
 * Original: 0x003F1230 - 0x003F12A5 (117 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F1230: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003F1247u); RECOMP_ABI_CALL(0x00015498u, sub_00015498); /* call 0x00015498 */

loc_003F1247: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ebx = esi + 0x78;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x003F1255u); RECOMP_ABI_CALL(0x000243B2u, sub_000243B2); /* call 0x000243B2 */

loc_003F1255: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = esi + 0x9C;
    MEM32(esi) = 0x836D80;
    MEM32(esi + 0x5C) = 0x836D74;
    MEM32(ebx) = 0x836D68;
    MEM32(esi + 0x94) = edi;
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003F128Du); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003F128D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    ecx = esi + 0xA4;
    PUSH32(esp, 0x003F129Cu); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003F129C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F12D0
 * Original: 0x003F12D0 - 0x003F1310 (64 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F12D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F12D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x78;
    ecx = esi + 0xA4;
    MEM32(esi) = 0x836D80;
    MEM32(esi + 0x5C) = 0x836D74;
    MEM32(edi) = 0x836D68;
    PUSH32(esp, 0x003F12F5u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F12F5: ;
    ecx = esi + 0x9C;
    PUSH32(esp, 0x003F1300u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F1300: ;
    ecx = edi;
    PUSH32(esp, 0x003F1307u); RECOMP_ABI_CALL(0x000323C2u, sub_000323C2); /* call 0x000323C2 */

loc_003F1307: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00011564(); return; /* tail jmp 0x00011564 */

}

/**
 * sub_003F1320
 * Original: 0x003F1320 - 0x003F1347 (39 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1320(void)
{

loc_003F1320: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x9C;
    PUSH32(esp, 0x003F1333u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003F1333: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi + 0xA4;
    PUSH32(esp, 0x003F1343u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003F1343: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F1350
 * Original: 0x003F1350 - 0x003F143A (234 bytes, 78 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003F1350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F1350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + -24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F1433; /* je: equal / zero */

loc_003F1367: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F1379u); RECOMP_ABI_CALL(0x000280D9u, sub_000280D9); /* call 0x000280D9 */

loc_003F1379: ;
    ecx = MEM32(esi + -68);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F138Eu); RECOMP_ABI_CALL(0x00026A1Du, sub_00026A1D); /* call 0x00026A1D */

loc_003F138E: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F1395u); RECOMP_ABI_CALL(0x0002D5B6u, sub_0002D5B6); /* call 0x0002D5B6 */

loc_003F1395: ;
    ecx = MEM32(esi + -68);
    eax = esp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F13A2u); RECOMP_ABI_CALL(0x00019BB0u, sub_00019BB0); /* call 0x00019BB0 */

loc_003F13A2: ;
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F13B4u); RECOMP_ABI_CALL(0x00024844u, sub_00024844); /* call 0x00024844 */

loc_003F13B4: ;
    eax = esi + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F13C6u); RECOMP_ABI_CALL(0x00024844u, sub_00024844); /* call 0x00024844 */

loc_003F13C6: ;
    edx = esp + 0x18;
    _fb = (uint32_t)(0xFFFFFFA4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFA4u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F13D5u); RECOMP_ABI_CALL(0x0001FCBDu, sub_0001FCBD); /* call 0x0001FCBD */

loc_003F13D5: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F13DCu); RECOMP_ABI_CALL(0x0002CC47u, sub_0002CC47); /* call 0x0002CC47 */

loc_003F13DC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F13EC; /* je: equal / zero */

loc_003F13E0: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F13ECu); RECOMP_ABI_CALL(0x00011E3Du, sub_00011E3D); /* call 0x00011E3D */

loc_003F13EC: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F13F8u); RECOMP_ABI_CALL(0x0001FCBDu, sub_0001FCBD); /* call 0x0001FCBD */

loc_003F13F8: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F13FFu); RECOMP_ABI_CALL(0x0001D9DBu, sub_0001D9DB); /* call 0x0001D9DB */

loc_003F13FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F140F; /* je: equal / zero */

loc_003F1403: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F140Fu); RECOMP_ABI_CALL(0x00011E3Du, sub_00011E3D); /* call 0x00011E3D */

loc_003F140F: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F1418u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F1418: ;
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F1421u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F1421: ;
    ecx = esp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F142Au); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F142A: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003F1433u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F1433: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1480
 * Original: 0x003F1480 - 0x003F14DF (95 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F1480: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + -52));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F14D8; /* je: equal / zero */

loc_003F148D: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F14A0u); RECOMP_ABI_CALL(0x000280D9u, sub_000280D9); /* call 0x000280D9 */

loc_003F14A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    _fb = (uint32_t)(0xFFFFFF88u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFF88u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003F14B7u); RECOMP_ABI_CALL(0x0001FCBDu, sub_0001FCBD); /* call 0x0001FCBD */

loc_003F14B7: ;
    ecx = eax;
    PUSH32(esp, 0x003F14BEu); RECOMP_ABI_CALL(0x0002D5B6u, sub_0002D5B6); /* call 0x0002D5B6 */

loc_003F14BE: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003F14C6u); RECOMP_ABI_CALL(0x00011E3Du, sub_00011E3D); /* call 0x00011E3D */

loc_003F14C6: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003F14CFu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F14CF: ;
    ecx = esp + 4;
    PUSH32(esp, 0x003F14D8u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F14D8: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1500
 * Original: 0x003F1500 - 0x003F1553 (83 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1500(void)
{

loc_003F1500: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003F1516u); RECOMP_ABI_CALL(0x00023467u, sub_00023467); /* call 0x00023467 */

loc_003F1516: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi + 0x78;
    MEM32(esi) = 0x836D98;
    MEM32(esi + 0x5C) = 0x836D8C;
    PUSH32(esp, 0x003F152Fu); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003F152F: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x84) = 0;
    MEM8(esi + 0x44) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F1570
 * Original: 0x003F1570 - 0x003F1590 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F1570: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x78;
    MEM32(esi) = 0x836D98;
    MEM32(esi + 0x5C) = 0x836D8C;
    PUSH32(esp, 0x003F1588u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F1588: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00036792(); return; /* tail jmp 0x00036792 */

}

/**
 * sub_003F15A0
 * Original: 0x003F15A0 - 0x003F15FE (94 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F15A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F15A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F15BC; /* jne: not equal / not zero */

loc_003F15B0: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003F15BCu); RECOMP_ABI_CALL(0x0001A407u, sub_0001A407); /* call 0x0001A407 */

loc_003F15BC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    MEM8(esi + 0x44) = 1;
    PUSH32(esp, 0x003F15CDu); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003F15CD: ;
    PUSH32(esp, eax);
    ecx = esi + 0x78;
    PUSH32(esp, 0x003F15D6u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003F15D6: ;
    ecx = esp + 4;
    PUSH32(esp, 0x003F15DFu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F15DF: ;
    eax = MEM32(esi + 0x48);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x548) = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003F1620
 * Original: 0x003F1620 - 0x003F163F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1620(void)
{

loc_003F1620: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003F162Fu); RECOMP_ABI_CALL(0x0001A407u, sub_0001A407); /* call 0x0001A407 */

loc_003F162F: ;
    eax = MEM32(esi + 0x48);
    MEM8(eax + 0x548) = 0;
    MEM8(esi + 0x44) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1650
 * Original: 0x003F1650 - 0x003F1661 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1650(void)
{

loc_003F1650: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x80) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1670
 * Original: 0x003F1670 - 0x003F1677 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1670(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003F1670: ;
    fp_push(MEMF(ecx + 0x80)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003F1680
 * Original: 0x003F1680 - 0x003F16CA (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F1680: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, 0x003F1695u); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003F1695: ;
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003F16A7u); RECOMP_ABI_CALL(0x00034136u, sub_00034136); /* call 0x00034136 */

loc_003F16A7: ;
    ecx = eax;
    PUSH32(esp, 0x003F16AEu); RECOMP_ABI_CALL(0x00024844u, sub_00024844); /* call 0x00024844 */

loc_003F16AE: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003F16B7u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F16B7: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003F16C0u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F16C0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F16E0
 * Original: 0x003F16E0 - 0x003F177B (155 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F16E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F16E0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esp + 0x24;
    PUSH32(esp, 0x003F16F8u); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_003F16F8: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003F170Au); RECOMP_ABI_CALL(0x00034136u, sub_00034136); /* call 0x00034136 */

loc_003F170A: ;
    ecx = eax;
    PUSH32(esp, 0x003F1711u); RECOMP_ABI_CALL(0x00024844u, sub_00024844); /* call 0x00024844 */

loc_003F1711: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003F171Au); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F171A: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x003F1723u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F1723: ;
    edi = MEM32(esp + 0x28);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003F1733u); RECOMP_ABI_CALL(0x0002CC47u, sub_0002CC47); /* call 0x0002CC47 */

loc_003F1733: ;
    ecx = esp + 0xC;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x003F173Eu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F173E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F1769; /* je: equal / zero */

loc_003F1742: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003F174Eu); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_003F174E: ;
    PUSH32(esp, eax);
    ecx = esi + 0x78;
    PUSH32(esp, 0x003F1757u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003F1757: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x003F1760u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F1760: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003F1769: ;
    PUSH32(esp, edi);
    ecx = esi + 0x78;
    PUSH32(esp, 0x003F1772u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003F1772: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F17B0
 * Original: 0x003F17B0 - 0x003F1816 (102 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F17B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F17B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + -24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F180F; /* je: equal / zero */

loc_003F17BD: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edi = esi + 0x1C;
    PUSH32(esp, 0x003F17D4u); RECOMP_ABI_CALL(0x000157B8u, sub_000157B8); /* call 0x000157B8 */

loc_003F17D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003F17E4u); RECOMP_ABI_CALL(0x0002D5B6u, sub_0002D5B6); /* call 0x0002D5B6 */

loc_003F17E4: ;
    PUSH32(esp, eax);
    ecx = esi + -92;
    PUSH32(esp, 0x003F17EDu); RECOMP_ABI_CALL(0x0001D2B5u, sub_0001D2B5); /* call 0x0001D2B5 */

loc_003F17ED: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003F17F6u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F17F6: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003F17FFu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F17FF: ;
    ecx = MEM32(esi + -20);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x540) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x540;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003F180Eu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003F180E: ;
    POP32(esp, edi);

loc_003F180F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1830
 * Original: 0x003F1830 - 0x003F183D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1830(void)
{

loc_003F1830: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x84) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1840
 * Original: 0x003F1840 - 0x003F1847 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1840(void)
{

loc_003F1840: ;
    eax = MEM32(ecx + 0x84);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1850
 * Original: 0x003F1850 - 0x003F1858 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F1850: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0001F61E(); return; /* tail jmp 0x0001F61E */

}

/**
 * sub_003F1860
 * Original: 0x003F1860 - 0x003F1868 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F1860: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0001F61E(); return; /* tail jmp 0x0001F61E */

}

/**
 * sub_003F1870
 * Original: 0x003F1870 - 0x003F1878 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F1870: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00018765(); return; /* tail jmp 0x00018765 */

}

/**
 * sub_003F1880
 * Original: 0x003F1880 - 0x003F18D5 (85 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F1880: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x78;
    ecx = esi + 0xA4;
    MEM32(esi) = 0x836D80;
    MEM32(esi + 0x5C) = 0x836D74;
    MEM32(edi) = 0x836D68;
    PUSH32(esp, 0x003F18A5u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F18A5: ;
    ecx = esi + 0x9C;
    PUSH32(esp, 0x003F18B0u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F18B0: ;
    ecx = edi;
    PUSH32(esp, 0x003F18B7u); RECOMP_ABI_CALL(0x000323C2u, sub_000323C2); /* call 0x000323C2 */

loc_003F18B7: ;
    ecx = esi;
    PUSH32(esp, 0x003F18BEu); RECOMP_ABI_CALL(0x00011564u, sub_00011564); /* call 0x00011564 */

loc_003F18BE: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F18CE; /* je: equal / zero */

loc_003F18C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F18CBu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F18CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F18CE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F18F0
 * Original: 0x003F18F0 - 0x003F1925 (53 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F18F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F18F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x78;
    MEM32(esi) = 0x836D98;
    MEM32(esi + 0x5C) = 0x836D8C;
    PUSH32(esp, 0x003F1908u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003F1908: ;
    ecx = esi;
    PUSH32(esp, 0x003F190Fu); RECOMP_ABI_CALL(0x00036792u, sub_00036792); /* call 0x00036792 */

loc_003F190F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F191F; /* je: equal / zero */

loc_003F1916: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F191Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F191C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F191F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1940
 * Original: 0x003F1940 - 0x003F194D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1940(void)
{

loc_003F1940: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1950
 * Original: 0x003F1950 - 0x003F19BC (108 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F1950: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x836DBC);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003F1964u); RECOMP_ABI_CALL(0x000377EBu, sub_000377EB); /* call 0x000377EB */

loc_003F1964: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0xC0;
    MEM32(esi) = 0x836DA8;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xBC) = ebx;
    MEM32(edi) = ebx;
    MEM32(esi + 0xC4) = ebx;
    PUSH32(esp, 0x003F1991u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_003F1991: ;
    MEM32(esi + 0xB8) = eax;
    PUSH32(esp, 0x003F199Cu); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_003F199C: ;
    MEM32(esi + 0xBC) = eax;
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F19B4u); RECOMP_ABI_CALL(0x0055D26Du, sub_0055D26D); /* call 0x0055D26D */

loc_003F19B4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F19E0
 * Original: 0x003F19E0 - 0x003F1A48 (104 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F19E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F19E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC0);
    edx = MEM32(esi + 0xBC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    MEM32(esi) = 0x836DA8;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x003F1A04u); RECOMP_ABI_CALL(0x0055D588u, sub_0055D588); /* call 0x0055D588 */

loc_003F1A04: ;
    ecx = MEM32(esi + 0xB4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 0xC0) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003F1A31; /* je: equal / zero */

loc_003F1A16: ;
    PUSH32(esp, 0x003F1A1Bu); RECOMP_ABI_CALL(0x00023868u, sub_00023868); /* call 0x00023868 */

loc_003F1A1B: ;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F1A2B; /* je: equal / zero */

loc_003F1A25: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003F1A2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F1A29u); } /* indirect call */
    }

loc_003F1A2B: ;
    MEM32(esi + 0xB4) = edi;

loc_003F1A31: ;
    ecx = esi;
    MEM32(esi + 0xB8) = edi;
    MEM32(esi + 0xBC) = edi;
    PUSH32(esp, 0x003F1A44u); RECOMP_ABI_CALL(0x00021932u, sub_00021932); /* call 0x00021932 */

loc_003F1A44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1A70
 * Original: 0x003F1A70 - 0x003F1B98 (296 bytes, 101 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F1A70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F1B91; /* je: equal / zero */

loc_003F1A84: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F1A8Eu); RECOMP_ABI_CALL(0x000330B5u, sub_000330B5); /* call 0x000330B5 */

loc_003F1A8E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F1B74; /* je: equal / zero */

loc_003F1A98: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x003F1AA1u); RECOMP_ABI_CALL(0x0001AC54u, sub_0001AC54); /* call 0x0001AC54 */

loc_003F1AA1: ;
    ecx = MEM32(edi + 0xC0);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F1AB2u); RECOMP_ABI_CALL(0x00557FF4u, sub_00557FF4); /* call 0x00557FF4 */

loc_003F1AB2: ;
    PUSH32(esp, 0x003F1AB7u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_003F1AB7: ;
    ebx = MEM32(eax + 0xC);
    ecx = esi;
    PUSH32(esp, 0x003F1AC1u); RECOMP_ABI_CALL(0x0001AC54u, sub_0001AC54); /* call 0x0001AC54 */

loc_003F1AC1: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x003F1ACEu); RECOMP_ABI_CALL(0x00557FF4u, sub_00557FF4); /* call 0x00557FF4 */

loc_003F1ACE: ;
    eax = MEM32(esi + 0x34);
    edx = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x2C);
    ebx = eax;
    PUSH32(esp, ebx);
    ebp = edx;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xC0);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esi + 0x28);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F1AFAu); RECOMP_ABI_CALL(0x00557A00u, sub_00557A00); /* call 0x00557A00 */

loc_003F1AFA: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x28);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x003F1B0Du); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_003F1B0D: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x003F1B26u); RECOMP_ABI_CALL(0x00557A00u, sub_00557A00); /* call 0x00557A00 */

loc_003F1B26: ;
    eax = MEM32(esi + 0x40);
    ebx = MEM32(esi + 0x38);
    ebp = MEM32(esi + 0x3C);
    esi = MEM32(esi + 0x44);
    ecx = MEM32(edi + 0xC0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x003F1B51u); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_003F1B51: ;
    PUSH32(esp, 0x003F1B56u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_003F1B56: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F1B72u); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_003F1B72: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003F1B74: ;
    eax = MEM32(edi + 0xC0);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F1B84u); RECOMP_ABI_CALL(0x00035167u, sub_00035167); /* call 0x00035167 */

loc_003F1B84: ;
    ecx = MEM32(edi + 0xB4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F1B90u); RECOMP_ABI_CALL(0x0002D6C9u, sub_0002D6C9); /* call 0x0002D6C9 */

loc_003F1B90: ;
    POP32(esp, esi);

loc_003F1B91: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1BF0
 * Original: 0x003F1BF0 - 0x003F1C0C (28 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F1BF0: ;
    MEM32(ecx + 0xC4) = 0;
    ecx = MEM32(ecx + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F1C09; /* je: equal / zero */

loc_003F1C04: ;
    PUSH32(esp, 0x003F1C09u); RECOMP_ABI_CALL(0x000271D4u, sub_000271D4); /* call 0x000271D4 */

loc_003F1C09: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1C20
 * Original: 0x003F1C20 - 0x003F1C50 (48 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F1C20: ;
    eax = MEM32(ecx + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F1C34; /* je: equal / zero */

loc_003F1C2A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC4) = eax;
    esp += 8; return; /* ret 4 */

loc_003F1C34: ;
    MEM32(ecx + 0xC4) = 1;
    ecx = MEM32(ecx + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F1C4D; /* je: equal / zero */

loc_003F1C48: ;
    PUSH32(esp, 0x003F1C4Du); RECOMP_ABI_CALL(0x0002C6C0u, sub_0002C6C0); /* call 0x0002C6C0 */

loc_003F1C4D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1C60
 * Original: 0x003F1C60 - 0x003F1D10 (176 bytes, 62 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F1C60: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ebx = ecx;
    ecx = MEM32(0x9094C4);
    eax = MEM32(ecx);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x003F1C78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F1C75u); } /* indirect call */
    }

loc_003F1C78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F1C85; /* je: equal / zero */

loc_003F1C7C: ;
    ecx = eax;
    PUSH32(esp, 0x003F1C83u); RECOMP_ABI_CALL(0x0002BE6Eu, sub_0002BE6E); /* call 0x0002BE6E */

loc_003F1C83: ;
    goto loc_003F1C87;

loc_003F1C85: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F1C87: ;
    ecx = MEM32(ebx + 0xB8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    MEM32(ebx + 0xB4) = eax;
    PUSH32(esp, ebp);
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, 0x003F1CA4u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003F1CA4: ;
    ecx = eax;
    PUSH32(esp, 0x003F1CABu); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_003F1CAB: ;
    esi = eax;
    edx = esi + 1;
    PUSH32(esp, 0x500);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F1CBBu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003F1CBB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x100);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003F1CD3u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003F1CD3: ;
    ecx = eax;
    PUSH32(esp, 0x003F1CDAu); RECOMP_ABI_CALL(0x00022913u, sub_00022913); /* call 0x00022913 */

loc_003F1CDA: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(edi + esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_003F1CF1; /* je: equal / zero */

loc_003F1CE8: ;
    ecx = MEM32(ebx + 0xB4);
    MEM32(ecx + 0x10) = eax;

loc_003F1CF1: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 0xB4);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003F1D02u); RECOMP_ABI_CALL(0x00035360u, sub_00035360); /* call 0x00035360 */

loc_003F1D02: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003F1D08u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F1D08: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003F1D40
 * Original: 0x003F1D40 - 0x003F1D6D (45 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F1D40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, 0x003F1D4Eu); RECOMP_ABI_CALL(0x00017C02u, sub_00017C02); /* call 0x00017C02 */

loc_003F1D4E: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F1D69; /* je: equal / zero */

loc_003F1D56: ;
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F1D69u); RECOMP_ABI_CALL(0x0002D6C9u, sub_0002D6C9); /* call 0x0002D6C9 */

loc_003F1D69: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1D80
 * Original: 0x003F1D80 - 0x003F1DAE (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F1D80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F1DAC; /* je: equal / zero */

loc_003F1D8D: ;
    PUSH32(esp, 0x003F1D92u); RECOMP_ABI_CALL(0x00023868u, sub_00023868); /* call 0x00023868 */

loc_003F1D92: ;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F1DA2; /* je: equal / zero */

loc_003F1D9C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003F1DA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F1DA0u); } /* indirect call */
    }

loc_003F1DA2: ;
    MEM32(esi + 0xB4) = 0;

loc_003F1DAC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1DC0
 * Original: 0x003F1DC0 - 0x003F1DDE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F1DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003F1DC8u); RECOMP_ABI_CALL(0x00031657u, sub_00031657); /* call 0x00031657 */

loc_003F1DC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F1DD8; /* je: equal / zero */

loc_003F1DCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F1DD5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F1DD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F1DD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1DF0
 * Original: 0x003F1DF0 - 0x003F1DFA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1DF0(void)
{

loc_003F1DF0: ;
    eax = MEM32(esp + 4);
    MEM32(0x907BA4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003F1E00
 * Original: 0x003F1E00 - 0x003F1E0A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1E00(void)
{

loc_003F1E00: ;
    eax = MEM32(esp + 4);
    MEM32(0x907BA8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003F1E10
 * Original: 0x003F1E10 - 0x003F1E1A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1E10(void)
{

loc_003F1E10: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1E20
 * Original: 0x003F1E20 - 0x003F1E29 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1E20(void)
{

loc_003F1E20: ;
    eax = ecx;
    MEM32(eax) = 0x836DD0;
    esp += 4; return; /* ret */

}

/**
 * sub_003F1E30
 * Original: 0x003F1E30 - 0x003F1E39 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1E30(void)
{

loc_003F1E30: ;
    eax = ecx;
    MEM32(eax) = 0x836DDC;
    esp += 4; return; /* ret */

}

/**
 * sub_003F1E40
 * Original: 0x003F1E40 - 0x003F1E7C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1E40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F1E40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F1E46u); RECOMP_ABI_CALL(0x00015EC0u, sub_00015EC0); /* call 0x00015EC0 */

loc_003F1E46: ;
    eax = MEM32(0x907E78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F1E51u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F1E51: ;
    ecx = MEM32(0x907E74);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    MEM32(0x907E78) = esi;
    PUSH32(esp, 0x003F1E65u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F1E65: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x907E74) = esi;
    MEM32(0x907BA4) = esi;
    MEM32(0x907BA8) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F1E90
 * Original: 0x003F1E90 - 0x003F1EA3 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1E90(void)
{

loc_003F1E90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x907E74);
    MEM32(0x907E7C) = eax;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003F1EB0
 * Original: 0x003F1EB0 - 0x003F1EC2 (18 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1EB0(void)
{

loc_003F1EB0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x836DE8;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1ED0
 * Original: 0x003F1ED0 - 0x003F1EE7 (23 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1ED0(void)
{

loc_003F1ED0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x003F1EE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F1EE1u); } /* indirect call */
    }

loc_003F1EE4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F1EF0
 * Original: 0x003F1EF0 - 0x003F1EF8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F1EF0: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_003F1F00
 * Original: 0x003F1F00 - 0x003F1F09 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1F00(void)
{

loc_003F1F00: ;
    eax = ecx;
    MEM32(eax) = 0x836DF4;
    esp += 4; return; /* ret */

}

/**
 * sub_003F1F10
 * Original: 0x003F1F10 - 0x003F1F13 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1F10(void)
{

loc_003F1F10: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003F1F20
 * Original: 0x003F1F20 - 0x003F1F2E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1F20(void)
{

loc_003F1F20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F1F2Au); RECOMP_ABI_CALL(0x00032890u, sub_00032890); /* call 0x00032890 */

loc_003F1F2A: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F1F40
 * Original: 0x003F1F40 - 0x003F1FD6 (150 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F1F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F1F40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F1F53; /* jne: not equal / not zero */

loc_003F1F4B: ;
    eax = MEM32(0x909394);
    eax = MEM32(eax + 8);

loc_003F1F53: ;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    MEM32(0x907E7C) = eax;
    PUSH32(esp, 0x003F1F61u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003F1F61: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F1F7E; /* je: equal / zero */

loc_003F1F68: ;
    ecx = MEM32(0x907E7C);
    MEM32(eax) = 0x836DE8;
    MEM32(eax + 4) = ecx;
    MEM32(0x907E74) = eax;
    goto loc_003F1F88;

loc_003F1F7E: ;
    MEM32(0x907E74) = 0;

loc_003F1F88: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x003F1F91u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003F1F91: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F1FA0; /* je: equal / zero */

loc_003F1F98: ;
    MEM32(eax) = 0x836DF4;
    goto loc_003F1FA2;

loc_003F1FA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F1FA2: ;
    ecx = MEM32(0x907E74);
    edx = esi + 8;
    PUSH32(esp, edx);
    MEM32(0x907E78) = eax;
    MEM32(0x907BA4) = ecx;
    MEM32(0x907BA8) = eax;
    PUSH32(esp, 0x003F1FC1u); RECOMP_ABI_CALL(0x00022161u, sub_00022161); /* call 0x00022161 */

loc_003F1FC1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003F1FC9u); RECOMP_ABI_CALL(0x000288BDu, sub_000288BD); /* call 0x000288BD */

loc_003F1FC9: ;
    eax = MEM32(esi + 4);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001B96F(); return; /* tail jmp 0x0001B96F */

}

/**
 * sub_003F2000
 * Original: 0x003F2000 - 0x003F2032 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2000: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F202E; /* je: equal / zero */

loc_003F200A: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F2018; /* je: equal / zero */

loc_003F2011: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F201C; /* jne: not equal / not zero */

loc_003F2018: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003F201C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F2024u); RECOMP_ABI_CALL(0x005CD23Au, sub_005CD23A); /* call 0x005CD23A */

loc_003F2024: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_003F202E: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F2040
 * Original: 0x003F2040 - 0x003F209D (93 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2040: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F2051; /* je: equal / zero */

loc_003F204A: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F2055; /* jne: not equal / not zero */

loc_003F2051: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003F2055: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F206E; /* je: equal / zero */

loc_003F205C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F2064u); RECOMP_ABI_CALL(0x005CD23Au, sub_005CD23A); /* call 0x005CD23A */

loc_003F2064: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_003F206E: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F2076u); RECOMP_ABI_CALL(0x005CD366u, sub_005CD366); /* call 0x005CD366 */

loc_003F2076: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_003F2092; /* je: equal / zero */

loc_003F2086: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F208Fu); RECOMP_ABI_CALL(0x0059D40Fu, sub_0059D40F); /* call 0x0059D40F */

loc_003F208F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F2092: ;
    MEM32(esi + 4) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F20C0
 * Original: 0x003F20C0 - 0x003F20C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F20C0(void)
{

loc_003F20C0: ;
    eax = 0x47D0877;
    esp += 4; return; /* ret */

}

/**
 * sub_003F20D0
 * Original: 0x003F20D0 - 0x003F20D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F20D0(void)
{

loc_003F20D0: ;
    eax = MEM32(0x907E84);
    esp += 4; return; /* ret */

}

/**
 * sub_003F20E0
 * Original: 0x003F20E0 - 0x003F20FB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F20E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F20E0: ;
    ecx = MEM32(0x907E84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F20F0; /* je: equal / zero */

loc_003F20EA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003F20F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F20EEu); } /* indirect call */
    }

loc_003F20F0: ;
    MEM32(0x907E84) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2110
 * Original: 0x003F2110 - 0x003F2136 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F2110: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x836E1C;
    if (CMP_EQ(_fa, _fb)) goto loc_003F212E; /* je: equal / zero */

loc_003F2120: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003F2127u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F2124u); } /* indirect call */
    }

loc_003F2127: ;
    MEM32(esi + 0x1C) = 0;

loc_003F212E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000323C2(); return; /* tail jmp 0x000323C2 */

}

/**
 * sub_003F2140
 * Original: 0x003F2140 - 0x003F2143 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2140(void)
{

loc_003F2140: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2150
 * Original: 0x003F2150 - 0x003F2169 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2150(void)
{

loc_003F2150: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003F215Du); RECOMP_ABI_CALL(0x00031F76u, sub_00031F76); /* call 0x00031F76 */

loc_003F215D: ;
    MEM32(esi) = 0x836E28;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2170
 * Original: 0x003F2170 - 0x003F2192 (34 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2170: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    edx = esp;
    PUSH32(esp, edx);
    MEM32(esp + 4) = 0x47D0877;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x003F218Cu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_003F218C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F21A0
 * Original: 0x003F21A0 - 0x003F21AF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F21A0(void)
{

loc_003F21A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F21ACu); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_003F21AC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F21C0
 * Original: 0x003F21C0 - 0x003F21C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F21C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F21C0: ;
    g_seh_ebp = ebp; sub_00033551(); return; /* tail jmp 0x00033551 */

}

/**
 * sub_003F21D0
 * Original: 0x003F21D0 - 0x003F21F7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F21D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F21D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x836E28;
    PUSH32(esp, 0x003F21DEu); RECOMP_ABI_CALL(0x00017301u, sub_00017301); /* call 0x00017301 */

loc_003F21DE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F21F1; /* je: equal / zero */

loc_003F21E5: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003F21F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F21EEu); } /* indirect call */
    }

loc_003F21F1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2200
 * Original: 0x003F2200 - 0x003F2215 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2200(void)
{

loc_003F2200: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x836E38);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003F2214u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F2212u); } /* indirect call */
    }

loc_003F2214: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2220
 * Original: 0x003F2220 - 0x003F2228 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F2220: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_003F2230
 * Original: 0x003F2230 - 0x003F2234 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2230: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003F2240
 * Original: 0x003F2240 - 0x003F2309 (201 bytes, 76 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2240: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F2256; /* jne: not equal / not zero */

loc_003F2248: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F2265; /* je: equal / zero */

loc_003F224F: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F2265; /* je: equal / zero */

loc_003F2256: ;
    ecx = esi;
    PUSH32(esp, 0x003F225Du); RECOMP_ABI_CALL(0x0001DD19u, sub_0001DD19); /* call 0x0001DD19 */

loc_003F225D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F22FD; /* je: equal / zero */

loc_003F2265: ;
    eax = MEM32(0x8CFAF4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = esi + 0x14;
    edi = ebx;
    MEM8(esi + 0x114) = 0;
    ecx = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_003F2280: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(edi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F2280; /* jne: not equal / not zero */

loc_003F228A: ;
    edx = eax + 1;
    /* nop */

loc_003F2290: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F2290; /* jne: not equal / not zero */

loc_003F2297: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x10);
    ecx = 0x80;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003F22ACu); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_003F22AC: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x301);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003F22BCu); RECOMP_ABI_CALL(0x005CD697u, sub_005CD697); /* call 0x005CD697 */

loc_003F22BC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003F22FD; /* je: equal / zero */

loc_003F22C8: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F22E5; /* je: equal / zero */

loc_003F22CF: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x836E48);
    PUSH32(esp, 0x003F22DFu); RECOMP_ABI_CALL(0x0059D354u, sub_0059D354); /* call 0x0059D354 */

loc_003F22DF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;

loc_003F22E5: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F2303; /* jne: not equal / not zero */

loc_003F22EC: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F22F4u); RECOMP_ABI_CALL(0x005CD366u, sub_005CD366); /* call 0x005CD366 */

loc_003F22F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0xFFFFFFFFu;

loc_003F22FD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003F2303: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2340
 * Original: 0x003F2340 - 0x003F23A8 (104 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2340: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F234F; /* je: equal / zero */

loc_003F2348: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F2355; /* jne: not equal / not zero */

loc_003F234F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003F2355: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003F2378; /* jb: below (unsigned <) */

loc_003F2366: ;
    ecx = esi;
    PUSH32(esp, 0x003F236Du); RECOMP_ABI_CALL(0x000371A1u, sub_000371A1); /* call 0x000371A1 */

loc_003F236D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F2378; /* jne: not equal / not zero */

loc_003F2371: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003F2378: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x10);
    ecx = eax + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003F2371; /* jae: above or equal (unsigned >=) */

loc_003F2385: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003F2396u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003F2396: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F23D0
 * Original: 0x003F23D0 - 0x003F23F5 (37 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F23D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F23D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, edi);
    edi = eax + 1;
    goto loc_003F23E0;

    /* nop */

loc_003F23E0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F23E0; /* jne: not equal / not zero */

loc_003F23E7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F23F0u); RECOMP_ABI_CALL(0x00027008u, sub_00027008); /* call 0x00027008 */

loc_003F23F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2400
 * Original: 0x003F2400 - 0x003F243B (59 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2400: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x836E1C;
    if (CMP_EQ(_fa, _fb)) goto loc_003F241E; /* je: equal / zero */

loc_003F2410: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003F2417u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F2414u); } /* indirect call */
    }

loc_003F2417: ;
    MEM32(esi + 0x1C) = 0;

loc_003F241E: ;
    ecx = esi;
    PUSH32(esp, 0x003F2425u); RECOMP_ABI_CALL(0x000323C2u, sub_000323C2); /* call 0x000323C2 */

loc_003F2425: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F2435; /* je: equal / zero */

loc_003F242C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003F2432u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003F2432: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003F2435: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2450
 * Original: 0x003F2450 - 0x003F2462 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2450(void)
{

loc_003F2450: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F245Fu); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_003F245F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2470
 * Original: 0x003F2470 - 0x003F2478 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F2470: ;
    ecx = MEM32(ecx + 0x1C);
    g_seh_ebp = ebp; sub_00033551(); return; /* tail jmp 0x00033551 */

}

/**
 * sub_003F2480
 * Original: 0x003F2480 - 0x003F24AD (45 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2480: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 0x1C);
    MEM32(esp + 0xC) = eax;
    eax = esp;
    edx = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 4) = 0x47D0877;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x003F24A7u); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_003F24A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F24C0
 * Original: 0x003F24C0 - 0x003F2512 (82 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F24C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F24C0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx;
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax + 1;
    /* nop */

loc_003F24D0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F24D0; /* jne: not equal / not zero */

loc_003F24D7: ;
    ecx = MEM32(esi + 0x28);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F24E3u); RECOMP_ABI_CALL(0x00027008u, sub_00027008); /* call 0x00027008 */

loc_003F24E3: ;
    esi = MEM32(esi + 0x28);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F250D; /* je: equal / zero */

loc_003F24ED: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F250D; /* je: equal / zero */

loc_003F24F4: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F250D; /* je: equal / zero */

loc_003F24FB: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F2503u); RECOMP_ABI_CALL(0x005CD23Au, sub_005CD23A); /* call 0x005CD23A */

loc_003F2503: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_003F250D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2530
 * Original: 0x003F2530 - 0x003F255E (46 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F2530: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003F253Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F253Cu); } /* indirect call */
    }

loc_003F253F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003F2547u); RECOMP_ABI_CALL(0x00018521u, sub_00018521); /* call 0x00018521 */

loc_003F2547: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003F255B; /* je: equal / zero */

loc_003F254C: ;
    edx = MEM32(eax);
    MEM32(esp + 4) = 1;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_003F255B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2570
 * Original: 0x003F2570 - 0x003F258B (27 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2570: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    MEM32(eax) = 0x836E64;
    ecx = MEM32(edx + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F25A0
 * Original: 0x003F25A0 - 0x003F25C0 (32 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F25A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F25A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47D0877) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x47D0877 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F25BD; /* jne: not equal / not zero */

loc_003F25AC: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(ecx + 4);
    eax = MEM32(eax);
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_003F25BD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F25D0
 * Original: 0x003F25D0 - 0x003F25FA (42 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F25D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F25D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    MEM32(esi) = 0x836E64;
    PUSH32(esp, 0x003F25E1u); RECOMP_ABI_CALL(0x00035F72u, sub_00035F72); /* call 0x00035F72 */

loc_003F25E1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003F25F4; /* je: equal / zero */

loc_003F25E8: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003F25F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F25F1u); } /* indirect call */
    }

loc_003F25F4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2610
 * Original: 0x003F2610 - 0x003F261C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2610: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003F261B; /* jne: not equal / not zero */

loc_003F2615: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003F261Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F2619u); } /* indirect call */
    }

loc_003F261B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2620
 * Original: 0x003F2620 - 0x003F2658 (56 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2620: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x10) = ecx;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi) = 0xFFFFFFFFu;
    MEM32(esi + 0xC) = 0;
    MEM8(esi + 8) = LO8(edx);
    PUSH32(esp, 0x003F2652u); RECOMP_ABI_CALL(0x0002B7E3u, sub_0002B7E3); /* call 0x0002B7E3 */

loc_003F2652: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003F2670
 * Original: 0x003F2670 - 0x003F269F (47 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F2670: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003F2680u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F267Du); } /* indirect call */
    }

loc_003F2680: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003F2688u); RECOMP_ABI_CALL(0x00018521u, sub_00018521); /* call 0x00018521 */

loc_003F2688: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003F269C; /* je: equal / zero */

loc_003F268D: ;
    edx = MEM32(eax);
    MEM32(esp + 4) = 1;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_003F269C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F26B0
 * Original: 0x003F26B0 - 0x003F272C (124 bytes, 39 insns)
 * Category: game_debug
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F26B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F26B0: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fa == 0)) goto loc_003F26DD; /* je: equal / zero */

loc_003F26C2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003F26D6; /* je: equal / zero */

loc_003F26C5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003F26CF; /* je: equal / zero */

loc_003F26C8: ;
    ecx = 0x836ED4;
    goto loc_003F26E2;

loc_003F26CF: ;
    ecx = 0x836ECC;
    goto loc_003F26E2;

loc_003F26D6: ;
    ecx = 0x836EC0;
    goto loc_003F26E2;

loc_003F26DD: ;
    ecx = 0x836EB0;

loc_003F26E2: ;
    eax = MEM32(esp + 0x414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F26F2; /* jne: not equal / not zero */

loc_003F26ED: ;
    eax = 0x7B891F;

loc_003F26F2: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x410);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x410);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x836E70);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F2713u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003F2713: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003F2722u); RECOMP_ABI_CALL(0x0001A3D5u, sub_0001A3D5); /* call 0x0001A3D5 */

loc_003F2722: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003F2750
 * Original: 0x003F2750 - 0x003F2766 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F2750: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x836EE4);
    esi = ecx;
    PUSH32(esp, 0x003F275Du); RECOMP_ABI_CALL(0x0001A3D5u, sub_0001A3D5); /* call 0x0001A3D5 */

loc_003F275D: ;
    ecx = MEM32(esi + 0x28);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001DD19(); return; /* tail jmp 0x0001DD19 */

}

/**
 * sub_003F2770
 * Original: 0x003F2770 - 0x003F27C3 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2770: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x118);
    edi = ecx;
    PUSH32(esp, 0x003F2780u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003F2780: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F27BB; /* je: equal / zero */

loc_003F2789: ;
    eax = MEM32(0x8CFAF8);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi) = 0xFFFFFFFFu;
    MEM32(esi + 4) = 0;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x10) = 0x400;
    MEM8(esi + 8) = 1;
    PUSH32(esp, 0x003F27B5u); RECOMP_ABI_CALL(0x0002B7E3u, sub_0002B7E3); /* call 0x0002B7E3 */

loc_003F27B5: ;
    MEM32(edi + 0x28) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003F27BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x28) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F27E0
 * Original: 0x003F27E0 - 0x003F282B (75 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F27E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F27E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x836E38);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003F27F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F27F3u); } /* indirect call */
    }

loc_003F27F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_003F2813; /* je: equal / zero */

loc_003F27FD: ;
    MEM32(eax) = 0x836E64;
    ecx = MEM32(edx + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    esi = eax;
    goto loc_003F2815;

loc_003F2813: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F2815: ;
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003F281Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F281Au); } /* indirect call */
    }

loc_003F281D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003F2826u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_003F2826: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2840
 * Original: 0x003F2840 - 0x003F2952 (274 bytes, 75 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2840: ;
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x44C (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003F292A; /* jg: greater (signed >) */

loc_003F2857: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003F28F8; /* je: equal / zero */

loc_003F285D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F28B1; /* je: equal / zero */

loc_003F2862: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F2945; /* jne: not equal / not zero */

loc_003F286D: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x836EC0);
    PUSH32(esp, 0x836EF4);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, 0x836E70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F288Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003F288C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003F289Bu); RECOMP_ABI_CALL(0x0001A3D5u, sub_0001A3D5); /* call 0x0001A3D5 */

loc_003F289B: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x003F28A4u); RECOMP_ABI_CALL(0x0001DD69u, sub_0001DD69); /* call 0x0001DD69 */

loc_003F28A4: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003F28B1: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x003F28BAu); RECOMP_ABI_CALL(0x0001DD69u, sub_0001DD69); /* call 0x0001DD69 */

loc_003F28BA: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x836EB0);
    PUSH32(esp, 0x836EF4);
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, 0x836E70);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F28DCu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003F28DC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003F28EBu); RECOMP_ABI_CALL(0x0001A3D5u, sub_0001A3D5); /* call 0x0001A3D5 */

loc_003F28EB: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003F28F8: ;
    ecx = esp + 4;
    edx = esp + 8;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    MEM32(esp + 8) = 2;
    MEM32(esp + 0xC) = 0x47D0877;
    PUSH32(esp, 0x003F291Du); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_003F291D: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003F292A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003F2945; /* jne: not equal / not zero */

loc_003F2931: ;
    PUSH32(esp, 0x836EE4);
    ecx = esi;
    PUSH32(esp, 0x003F293Du); RECOMP_ABI_CALL(0x0001A3D5u, sub_0001A3D5); /* call 0x0001A3D5 */

loc_003F293D: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0x003F2945u); RECOMP_ABI_CALL(0x0001DD19u, sub_0001DD19); /* call 0x0001DD19 */

loc_003F2945: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F29A0
 * Original: 0x003F29A0 - 0x003F29EC (76 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F29A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F29A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1C);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x836E38);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003F29B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F29B4u); } /* indirect call */
    }

loc_003F29B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_003F29D4; /* je: equal / zero */

loc_003F29BE: ;
    MEM32(eax) = 0x836E64;
    ecx = MEM32(edx + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    esi = eax;
    goto loc_003F29D6;

loc_003F29D4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003F29D6: ;
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003F29DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F29DBu); } /* indirect call */
    }

loc_003F29DE: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003F29E7u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_003F29E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2A00
 * Original: 0x003F2A00 - 0x003F2A16 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2A00(void)
{

loc_003F2A00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003F2A08u); RECOMP_ABI_CALL(0x0002069Fu, sub_0002069F); /* call 0x0002069F */

loc_003F2A08: ;
    PUSH32(esp, 0x836EFC);
    ecx = esi;
    PUSH32(esp, 0x003F2A14u); RECOMP_ABI_CALL(0x0001A3D5u, sub_0001A3D5); /* call 0x0001A3D5 */

loc_003F2A14: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003F2A20
 * Original: 0x003F2A20 - 0x003F2AA1 (129 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2A20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x836F0C);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003F2A3Au); RECOMP_ABI_CALL(0x000243B2u, sub_000243B2); /* call 0x000243B2 */

loc_003F2A3A: ;
    ecx = esi;
    MEM32(esi) = 0x836E1C;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = edi;
    PUSH32(esp, 0x003F2A56u); RECOMP_ABI_CALL(0x0002069Fu, sub_0002069F); /* call 0x0002069F */

loc_003F2A56: ;
    PUSH32(esp, 0x836EFC);
    ecx = esi;
    PUSH32(esp, 0x003F2A62u); RECOMP_ABI_CALL(0x0001A3D5u, sub_0001A3D5); /* call 0x0001A3D5 */

loc_003F2A62: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x829E44);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003F2A73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003F2A71u); } /* indirect call */
    }

loc_003F2A73: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F2A96; /* je: equal / zero */

loc_003F2A79: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003F2A85u); RECOMP_ABI_CALL(0x00031F76u, sub_00031F76); /* call 0x00031F76 */

loc_003F2A85: ;
    MEM32(edi) = 0x836E28;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003F2A96: ;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003F2AD0
 * Original: 0x003F2AD0 - 0x003F2AFF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2AD0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x003F2AD9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003F2AD9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F2AF4; /* je: equal / zero */

loc_003F2AE0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003F2AEEu); RECOMP_ABI_CALL(0x00033B69u, sub_00033B69); /* call 0x00033B69 */

loc_003F2AEE: ;
    MEM32(0x907E84) = eax;
    esp += 4; return; /* ret */

loc_003F2AF4: ;
    MEM32(0x907E84) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2B10
 * Original: 0x003F2B10 - 0x003F2B21 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2B10(void)
{

loc_003F2B10: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x8CFB08);
    PUSH32(esp, 0x003F2B20u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_003F2B20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2B30
 * Original: 0x003F2B30 - 0x003F2B3A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2B30(void)
{

loc_003F2B30: ;
    eax = MEM32(esp + 4);
    MEM32(0x909368) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2B40
 * Original: 0x003F2B40 - 0x003F2B4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2B40(void)
{

loc_003F2B40: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x424) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2B50
 * Original: 0x003F2B50 - 0x003F2B5A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2B50(void)
{

loc_003F2B50: ;
    eax = MEM32(esp + 4);
    MEM32(0x909774) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2B60
 * Original: 0x003F2B60 - 0x003F2B6A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2B60(void)
{

loc_003F2B60: ;
    eax = MEM32(esp + 4);
    MEM32(0x909798) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2B70
 * Original: 0x003F2B70 - 0x003F2B7A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2B70(void)
{

loc_003F2B70: ;
    eax = MEM32(esp + 4);
    MEM32(0x9094C4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003F2B80
 * Original: 0x003F2B80 - 0x003F2B86 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2B80(void)
{

loc_003F2B80: ;
    eax = MEM32(0x907E90);
    esp += 4; return; /* ret */

}

/**
 * sub_003F2B90
 * Original: 0x003F2B90 - 0x003F2C5D (205 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F2B90: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(ebx) = 0;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    SET_LO8(eax, 0x80);
    MEM8(ebx + 7) = LO8(eax);
    MEM8(ebx + 6) = LO8(eax);
    MEM8(ebx + 5) = LO8(eax);
    MEM8(ebx + 4) = LO8(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebx + 8) = 0xF;
    edi = ebx + 0x1C;
    ecx = 0x13;
    esi = ebp;
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
    eax = MEM32(ebp + 0x48);
    MEM32(ebx + 0x18) = eax;
    MEM32(0x909368) = eax;
    eax = MEM32(ebx + 0x18);
    MEM32(0x909774) = eax;
    PUSH32(esp, 0x003F2BD9u); RECOMP_ABI_CALL(0x000191D3u, sub_000191D3); /* call 0x000191D3 */

loc_003F2BD9: ;
    PUSH32(esp, 0x003F2BDEu); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_003F2BDE: ;
    MEM32(ebx) = eax;
    SET_LO8(edx, MEM8(ebp + 0x38));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax + 0x424) = ecx;
    edx = MEM32(ebp + 0x44);
    eax = MEM32(ebp + 0x3C);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x836F44);
    PUSH32(esp, 0x003F2C04u); RECOMP_ABI_CALL(0x0002142Du, sub_0002142D); /* call 0x0002142D */

loc_003F2C04: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F2C54; /* je: equal / zero */

loc_003F2C08: ;
    ecx = MEM32(ebx + 0x5C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    PUSH32(esp, 0x003F2C13u); RECOMP_ABI_CALL(0x0002D2BEu, sub_0002D2BE); /* call 0x0002D2BE */

loc_003F2C13: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x003F2C1Au); RECOMP_ABI_CALL(0x00031823u, sub_00031823); /* call 0x00031823 */

loc_003F2C1A: ;
    edx = MEM32(ebx + 0x18);
    MEM32(0x909798) = edx;
    PUSH32(esp, 0x003F2C28u); RECOMP_ABI_CALL(0x00030761u, sub_00030761); /* call 0x00030761 */

loc_003F2C28: ;
    ecx = MEM32(ebx);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x459C4000);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x3FAAAAAB);
    PUSH32(esp, 0x42700000);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003F2C4Bu); RECOMP_ABI_CALL(0x00557A00u, sub_00557A00); /* call 0x00557A00 */

loc_003F2C4B: ;
    edx = MEM32(ebx + 0x18);
    MEM32(0x9094C4) = edx;

loc_003F2C54: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2C90
 * Original: 0x003F2C90 - 0x003F2C9C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F2C90: ;
    ecx = MEM32(ecx);
    PUSH32(esp, 0x003F2C97u); RECOMP_ABI_CALL(0x000249C0u, sub_000249C0); /* call 0x000249C0 */

loc_003F2C97: ;
    g_seh_ebp = ebp; sub_0003103F(); return; /* tail jmp 0x0003103F */

}

/**
 * sub_003F2CA0
 * Original: 0x003F2CA0 - 0x003F2CAC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2CA0(void)
{

loc_003F2CA0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2CB0
 * Original: 0x003F2CB0 - 0x003F2CC5 (21 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2CB0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax + eax + 0xD;
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003F2CD0
 * Original: 0x003F2CD0 - 0x003F2CF5 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2CD0(void)
{

loc_003F2CD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, 0x003F2CDBu); RECOMP_ABI_CALL(0x00020B5Eu, sub_00020B5E); /* call 0x00020B5E */

loc_003F2CDB: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003F2CF2u); RECOMP_ABI_CALL(0x00557F14u, sub_00557F14); /* call 0x00557F14 */

loc_003F2CF2: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003F2D00
 * Original: 0x003F2D00 - 0x003F2D07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003F2D00: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00026761(); return; /* tail jmp 0x00026761 */

}

/**
 * sub_003F2D10
 * Original: 0x003F2D10 - 0x003F2D54 (68 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003F2D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003F2D10: ;
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x003F2D1Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003F2D1C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003F2D3F; /* je: equal / zero */

loc_003F2D23: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003F2D2Fu); RECOMP_ABI_CALL(0x0001596Bu, sub_0001596B); /* call 0x0001596B */

loc_003F2D2F: ;
    MEM32(0x907E90) = eax;
    MEM32(0x8CFDE0) = 0;
    esp += 4; return; /* ret */

loc_003F2D3F: ;
    MEM32(0x907E90) = 0;
    MEM32(0x8CFDE0) = 0;
    esp += 4; return; /* ret */

}
