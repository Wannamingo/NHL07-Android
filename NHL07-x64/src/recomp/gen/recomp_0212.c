/**
 * nhl_07_recomp - Recompiled code chunk 212
 * Functions: 250 (0x004B63B4 - 0x004BAB9F)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004B63B4
 * Original: 0x004B63B4 - 0x004B63B8 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B63B4(void)
{

loc_004B63B4: ;
    SET_LO8(eax, MEM8(ecx + 0xB));
    esp += 4; return; /* ret */

}

/**
 * sub_004B63B8
 * Original: 0x004B63B8 - 0x004B63BC (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B63B8(void)
{

loc_004B63B8: ;
    SET_LO8(eax, MEM8(ecx + 0xA));
    esp += 4; return; /* ret */

}

/**
 * sub_004B63BC
 * Original: 0x004B63BC - 0x004B63C0 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B63BC(void)
{

loc_004B63BC: ;
    SET_LO8(eax, MEM8(ecx + 9));
    esp += 4; return; /* ret */

}

/**
 * sub_004B63C0
 * Original: 0x004B63C0 - 0x004B63C4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B63C0(void)
{

loc_004B63C0: ;
    SET_LO8(eax, MEM8(ecx + 8));
    esp += 4; return; /* ret */

}

/**
 * sub_004B63C4
 * Original: 0x004B63C4 - 0x004B63C8 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B63C4(void)
{

loc_004B63C4: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_004B63C8
 * Original: 0x004B63C8 - 0x004B63E2 (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B63C8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B63C8: ;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_004B63E2
 * Original: 0x004B63E2 - 0x004B6404 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B63E2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B63E2: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86478C;
    PUSH32(esp, 0x004B63F0u); RECOMP_ABI_CALL(0x004BDD4Au, sub_004BDD4A); /* call 0x004BDD4A */

loc_004B63F0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B63FE; /* je: equal / zero */

loc_004B63F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B63FDu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B63FD: ;
    POP32(esp, ecx);

loc_004B63FE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6404
 * Original: 0x004B6404 - 0x004B6416 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6404(void)
{

loc_004B6404: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B640Cu); RECOMP_ABI_CALL(0x004BDD77u, sub_004BDD77); /* call 0x004BDD77 */

loc_004B640C: ;
    MEM32(esi) = 0x8647A4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B6416
 * Original: 0x004B6416 - 0x004B6421 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6416(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B6416: ;
    MEM32(ecx) = 0x8647A4;
    g_seh_ebp = ebp; sub_004BDD80(); return; /* tail jmp 0x004BDD80 */

}

/**
 * sub_004B6421
 * Original: 0x004B6421 - 0x004B6443 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6421(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6421: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8647A4;
    PUSH32(esp, 0x004B642Fu); RECOMP_ABI_CALL(0x004BDD80u, sub_004BDD80); /* call 0x004BDD80 */

loc_004B642F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B643D; /* je: equal / zero */

loc_004B6436: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B643Cu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004B643C: ;
    POP32(esp, ecx);

loc_004B643D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6443
 * Original: 0x004B6443 - 0x004B6455 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6443(void)
{

loc_004B6443: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B644Bu); RECOMP_ABI_CALL(0x004BDDC5u, sub_004BDDC5); /* call 0x004BDDC5 */

loc_004B644B: ;
    MEM32(esi) = 0x8647B8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B6455
 * Original: 0x004B6455 - 0x004B6460 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6455(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B6455: ;
    MEM32(ecx) = 0x8647B8;
    g_seh_ebp = ebp; sub_004BDDEC(); return; /* tail jmp 0x004BDDEC */

}

/**
 * sub_004B6460
 * Original: 0x004B6460 - 0x004B6486 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6460: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8647B8;
    PUSH32(esp, 0x004B646Eu); RECOMP_ABI_CALL(0x004BDDECu, sub_004BDDEC); /* call 0x004BDDEC */

loc_004B646E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B647C; /* je: equal / zero */

loc_004B6475: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B647Bu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B647B: ;
    POP32(esp, ecx);

loc_004B647C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6486
 * Original: 0x004B6486 - 0x004B649E (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6486(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6486: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004B6498; /* je: equal / zero */

loc_004B6493: ;
    PUSH32(esp, 0x004B6498u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004B6498: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B64AD
 * Original: 0x004B64AD - 0x004B64E5 (56 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B64AD(void)
{

loc_004B64AD: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864808;
    PUSH32(esp, 0x004B64BBu); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004B64BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 4;
    PUSH32(esp, 0x004B64C8u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_004B64C8: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 0x20;
    MEM8(esi + 0x18) = 1;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x004B64DFu); RECOMP_ABI_CALL(0x004B6486u, sub_004B6486); /* call 0x004B6486 */

loc_004B64DF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B64E5
 * Original: 0x004B64E5 - 0x004B64EF (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B64E5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B64E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_004B64EF
 * Original: 0x004B64EF - 0x004B650D (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B64EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B64EF: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864808;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B6504; /* je: equal / zero */

loc_004B64FF: ;
    PUSH32(esp, 0x004B6504u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B6504: ;
    ecx = esi + 4;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DDA4F(); return; /* tail jmp 0x004DDA4F */

}

/**
 * sub_004B650D
 * Original: 0x004B650D - 0x004B653E (49 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B650D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B650D: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(MEM8(eax + 0x60)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x60), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004B6523; /* je: equal / zero */

loc_004B651A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B6523u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6520u); } /* indirect call */
    }

loc_004B6523: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esi);
    edi = MEM32(esi + 0x20);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004B6531u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B652Eu); } /* indirect call */
    }

loc_004B6531: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004B6539u); RECOMP_ABI_CALL(0x004B671Eu, sub_004B671E); /* call 0x004B671E */

loc_004B6539: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B653E
 * Original: 0x004B653E - 0x004B655A (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B653E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B653E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B6546u); RECOMP_ABI_CALL(0x004B64EFu, sub_004B64EF); /* call 0x004B64EF */

loc_004B6546: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B6554; /* je: equal / zero */

loc_004B654D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B6553u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004B6553: ;
    POP32(esp, ecx);

loc_004B6554: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6582
 * Original: 0x004B6582 - 0x004B65A3 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6582(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B6582: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x38;
    MEM32(esi) = 0x864818;
    PUSH32(esp, 0x004B6593u); RECOMP_ABI_CALL(0x004E1588u, sub_004E1588); /* call 0x004E1588 */

loc_004B6593: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x004B659Bu); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004B659B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004BDE48(); return; /* tail jmp 0x004BDE48 */

}

/**
 * sub_004B65A3
 * Original: 0x004B65A3 - 0x004B65AB (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B65A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B65A3: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_004B65AB
 * Original: 0x004B65AB - 0x004B65B0 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B65AB(void)
{

loc_004B65AB: ;
    MEM8(ecx + 0x60) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_004B65B0
 * Original: 0x004B65B0 - 0x004B65B8 (8 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B65B0(void)
{

loc_004B65B0: ;
    MEM8(ecx + 0x60) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004B65B8
 * Original: 0x004B65B8 - 0x004B65E2 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B65B8(void)
{

loc_004B65B8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B65C0u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B65C0: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x86484C;
    PUSH32(esp, 0x004B65CFu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B65CF: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004B65DCu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004B65DC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B6601
 * Original: 0x004B6601 - 0x004B661D (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6601(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6601: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B6609u); RECOMP_ABI_CALL(0x004E1588u, sub_004E1588); /* call 0x004E1588 */

loc_004B6609: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B6617; /* je: equal / zero */

loc_004B6610: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B6616u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B6616: ;
    POP32(esp, ecx);

loc_004B6617: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6627
 * Original: 0x004B6627 - 0x004B666B (68 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6627(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6627: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B662Fu); RECOMP_ABI_CALL(0x004BDE21u, sub_004BDE21); /* call 0x004BDE21 */

loc_004B662F: ;
    MEM32(esi) = 0x864818;
    PUSH32(esp, 0x004B663Au); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004B663A: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 0x24;
    PUSH32(esp, 0x004B6647u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_004B6647: ;
    PUSH32(esp, 0x004B664Cu); RECOMP_ABI_CALL(0x004DC9ADu, sub_004DC9AD); /* call 0x004DC9AD */

loc_004B664C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004B6655u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6652u); } /* indirect call */
    }

loc_004B6655: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    PUSH32(esp, 0x004B6661u); RECOMP_ABI_CALL(0x004B65B8u, sub_004B65B8); /* call 0x004B65B8 */

loc_004B6661: ;
    MEM8(esi + 0x60) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B666B
 * Original: 0x004B666B - 0x004B6687 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B666B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B666B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B6673u); RECOMP_ABI_CALL(0x004B6582u, sub_004B6582); /* call 0x004B6582 */

loc_004B6673: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B6681; /* je: equal / zero */

loc_004B667A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B6680u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B6680: ;
    POP32(esp, ecx);

loc_004B6681: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6687
 * Original: 0x004B6687 - 0x004B66D4 (77 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6687(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B6687: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B66C4; /* jbe: below or equal (unsigned <=) */

loc_004B669A: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x40;
    PUSH32(esp, 0x004B66A3u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B66A3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B66AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B66A7u); } /* indirect call */
    }

loc_004B66AA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B66B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B66B0u); } /* indirect call */
    }

loc_004B66B3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B66B9u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B66B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B66CD; /* je: equal / zero */

loc_004B66BF: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B669A; /* jb: below (unsigned <) */

loc_004B66C4: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x40;
    PUSH32(esp, 0x004B66CDu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B66CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B66D4
 * Original: 0x004B66D4 - 0x004B671E (74 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B66D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B66D4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B6715; /* jbe: below or equal (unsigned <=) */

loc_004B66E2: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x40;

loc_004B66E6: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x004B66EEu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B66EE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B66F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B66F2u); } /* indirect call */
    }

loc_004B66F5: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x004B66FFu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B66FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B670C; /* je: equal / zero */

loc_004B6705: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B66E6; /* jb: below (unsigned <) */

loc_004B670A: ;
    goto loc_004B6714;

loc_004B670C: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x004B6714u); RECOMP_ABI_CALL(0x004DB98Eu, sub_004DB98E); /* call 0x004DB98E */

loc_004B6714: ;
    POP32(esp, ebp);

loc_004B6715: ;
    eax = MEM32(esi + 0x4C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B671E
 * Original: 0x004B671E - 0x004B6753 (53 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B671E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B671E: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0x60)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x60), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B674F; /* je: equal / zero */

loc_004B6726: ;
    PUSH32(esp, esi);
    esi = ecx + 8;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B674D; /* jbe: below or equal (unsigned <=) */

loc_004B6732: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x004B673Au); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004B673A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = MEM32(eax);
    PUSH32(esp, MEM32(esp + 0x14));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B6748u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6746u); } /* indirect call */
    }

loc_004B6748: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B6732; /* jb: below (unsigned <) */

loc_004B674D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004B674F: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B6753
 * Original: 0x004B6753 - 0x004B67C4 (113 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6753(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B6753: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x4C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    eax = esi + 8;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_004B67BF; /* jbe: below or equal (unsigned <=) */

loc_004B6777: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x40)) >> 32) & 1);
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, edi);

loc_004B677F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004B6789u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B6789: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B6792u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B678Fu); } /* indirect call */
    }

loc_004B6792: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B679E; /* je: equal / zero */

loc_004B6796: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B679Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B679Bu); } /* indirect call */
    }

loc_004B679E: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B67A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B67A2u); } /* indirect call */
    }

loc_004B67A5: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004B67B0; /* je: equal / zero */

loc_004B67AA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004B67B0; /* je: equal / zero */

loc_004B67AD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004B67B9; /* jne: not equal / not zero */

loc_004B67B0: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004B67B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B67B6u); } /* indirect call */
    }

loc_004B67B9: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004B677F; /* jb: below (unsigned <) */

loc_004B67BE: ;
    POP32(esp, edi);

loc_004B67BF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004B67C4
 * Original: 0x004B67C4 - 0x004B6835 (113 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B67C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B67C4: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x4C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    eax = esi + 8;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_004B6830; /* jbe: below or equal (unsigned <=) */

loc_004B67E8: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x40)) >> 32) & 1);
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, edi);

loc_004B67F0: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004B67FAu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B67FA: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B6803u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6800u); } /* indirect call */
    }

loc_004B6803: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B680F; /* je: equal / zero */

loc_004B6807: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B680Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B680Cu); } /* indirect call */
    }

loc_004B680F: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B6816u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6813u); } /* indirect call */
    }

loc_004B6816: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004B6821; /* je: equal / zero */

loc_004B681B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004B6821; /* je: equal / zero */

loc_004B681E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004B682A; /* jne: not equal / not zero */

loc_004B6821: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004B682Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6827u); } /* indirect call */
    }

loc_004B682A: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004B67F0; /* jb: below (unsigned <) */

loc_004B682F: ;
    POP32(esp, edi);

loc_004B6830: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004B6835
 * Original: 0x004B6835 - 0x004B6882 (77 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6835(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B6835: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x4C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_004B6878; /* jbe: below or equal (unsigned <=) */

loc_004B6845: ;
    PUSH32(esp, ebp);
    ebp = ecx + 0x40;
    PUSH32(esp, esi);

loc_004B684A: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x004B6852u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B6852: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B685Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6858u); } /* indirect call */
    }

loc_004B685B: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0x004B6865u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B6865: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B6872; /* je: equal / zero */

loc_004B686B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B684A; /* jb: below (unsigned <) */

loc_004B6870: ;
    goto loc_004B6876;

loc_004B6872: ;
    MEM32(esp + 0x10) = esi;

loc_004B6876: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_004B6878: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6882
 * Original: 0x004B6882 - 0x004B6913 (145 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B6882(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6882: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi + 0x38;
    if (CMP_EQ(_fa, _fb)) goto loc_004B690E; /* je: equal / zero */

loc_004B6894: ;
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = eax;
    MEM32(ebp + -8) = ebx;
    if (CMP_AE(_fa, _fb)) edi = ebx; /* cmovae */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B68ABu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B68AB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B68B7u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B68B7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B68CA; /* je: equal / zero */

loc_004B68BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B68C8u); RECOMP_ABI_CALL(0x004B65B8u, sub_004B65B8); /* call 0x004B65B8 */

loc_004B68C8: ;
    goto loc_004B68CC;

loc_004B68CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B68CC: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B68D2u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B68D2: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B68D9u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B68D9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B6909; /* jbe: below or equal (unsigned <=) */

loc_004B68E2: ;
    ecx = MEM32(ebp + 8);
    ebx = MEM32(esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B68EDu); RECOMP_ABI_CALL(0x004BDF44u, sub_004BDF44); /* call 0x004BDF44 */

loc_004B68ED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 8); PUSH32(esp, 0x004B68F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B68F0u); } /* indirect call */
    }

loc_004B68F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B6903; /* je: equal / zero */

loc_004B68F7: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6903u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B6903: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B68E2; /* jb: below (unsigned <) */

loc_004B6909: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004B690E: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6913
 * Original: 0x004B6913 - 0x004B6985 (114 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6913(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B6913: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x4C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B6981; /* jbe: below or equal (unsigned <=) */

loc_004B691F: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, edi);

loc_004B6928: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004B6932u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B6932: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B693Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6938u); } /* indirect call */
    }

loc_004B693B: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004B696B; /* je: equal / zero */

loc_004B6940: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004B695C; /* je: equal / zero */

loc_004B6943: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004B697A; /* jne: not equal / not zero */

loc_004B6946: ;
    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x30); PUSH32(esp, 0x004B694Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B694Au); } /* indirect call */
    }

loc_004B694D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x004B6953u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6950u); } /* indirect call */
    }

loc_004B6953: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B695Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6957u); } /* indirect call */
    }

loc_004B695A: ;
    goto loc_004B697A;

loc_004B695C: ;
    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x30); PUSH32(esp, 0x004B6963u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6960u); } /* indirect call */
    }

loc_004B6963: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x004B6969u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6966u); } /* indirect call */
    }

loc_004B6969: ;
    goto loc_004B697A;

loc_004B696B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004B6972u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B696Fu); } /* indirect call */
    }

loc_004B6972: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004B697Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6977u); } /* indirect call */
    }

loc_004B697A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B6928; /* jb: below (unsigned <) */

loc_004B697F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004B6981: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004B6985
 * Original: 0x004B6985 - 0x004B6A78 (243 bytes, 102 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B6985(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6985: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6998u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B6998: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x800);
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B69A6u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B69A6: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_004B6A11; /* jbe: below or equal (unsigned <=) */

loc_004B69B3: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = esi;

loc_004B69B9: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B69C4u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B69C4: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B69CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B69CAu); } /* indirect call */
    }

loc_004B69CD: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B69D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B69D3u); } /* indirect call */
    }

loc_004B69D6: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004B69F5; /* je: equal / zero */

loc_004B69DA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004B69E0; /* je: equal / zero */

loc_004B69DD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004B6A06; /* jne: not equal / not zero */

loc_004B69E0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004B69E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B69E6u); } /* indirect call */
    }

loc_004B69E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B69F3u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B69F3: ;
    goto loc_004B6A06;

loc_004B69F5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B69FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B69F9u); } /* indirect call */
    }

loc_004B69FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6A06u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004B6A06: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B69B9; /* jb: below (unsigned <) */

loc_004B6A11: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6A16u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B6A16: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6A20u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B6A20: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B6A4D; /* je: equal / zero */

loc_004B6A29: ;
    eax = MEM32(ebp + -44);
    ecx = ebp + -44;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B6A32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6A2Fu); } /* indirect call */
    }

loc_004B6A32: ;
    PUSH32(esp, ebx);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6A3Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B6A3A: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6A41u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004B6A41: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6A4Bu); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B6A4B: ;
    goto loc_004B6A4F;

loc_004B6A4D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B6A4F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6A55u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B6A55: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6A5Cu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B6A5C: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = ebp + -44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004B6A69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6A66u); } /* indirect call */
    }

loc_004B6A69: ;
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6A71u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B6A71: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B6A78
 * Original: 0x004B6A78 - 0x004B6B6F (247 bytes, 102 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B6A78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6A78: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6A8Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B6A8A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x800);
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6A98u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B6A98: ;
    ebx = MEM32(esi + 0x4C);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B6B05; /* jbe: below or equal (unsigned <=) */

loc_004B6AA3: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = esi;

loc_004B6AA9: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6AB4u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B6AB4: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B6ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6ABAu); } /* indirect call */
    }

loc_004B6ABD: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B6AC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6AC3u); } /* indirect call */
    }

loc_004B6AC6: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004B6AEC; /* je: equal / zero */

loc_004B6ACB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004B6AD1; /* je: equal / zero */

loc_004B6ACE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004B6AFD; /* jne: not equal / not zero */

loc_004B6AD1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B6AD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6AD5u); } /* indirect call */
    }

loc_004B6AD8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004B6AE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6ADDu); } /* indirect call */
    }

loc_004B6AE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6AEAu); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004B6AEA: ;
    goto loc_004B6AFD;

loc_004B6AEC: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B6AF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6AF0u); } /* indirect call */
    }

loc_004B6AF3: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6AFDu); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004B6AFD: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B6AA9; /* jb: below (unsigned <) */

loc_004B6B05: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6B0Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B6B0A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6B16u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B6B16: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B6B44; /* je: equal / zero */

loc_004B6B1F: ;
    eax = MEM32(ebp + -40);
    ecx = ebp + -40;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B6B28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6B25u); } /* indirect call */
    }

loc_004B6B28: ;
    PUSH32(esp, 1);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6B31u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B6B31: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6B38u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004B6B38: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6B42u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B6B42: ;
    goto loc_004B6B46;

loc_004B6B44: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B6B46: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6B4Cu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B6B4C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6B53u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B6B53: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = ebp + -40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004B6B60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6B5Du); } /* indirect call */
    }

loc_004B6B60: ;
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B6B68u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B6B68: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B6B00
 * Original: 0x004B6B00 - 0x004B6B6F (111 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B6B00: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_004B6AA9(); return; } /* jb: below (unsigned <) */

loc_004B6B05: ;
    PUSH32(esp, 0x004B6B0Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B6B0A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004B6B16u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B6B16: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B6B44; /* je: equal / zero */

loc_004B6B1F: ;
    eax = MEM32(ebp + -40);
    ecx = ebp + -40;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B6B28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6B25u); } /* indirect call */
    }

loc_004B6B28: ;
    PUSH32(esp, 1);
    esi = eax;
    PUSH32(esp, 0x004B6B31u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B6B31: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B6B38u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004B6B38: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004B6B42u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004B6B42: ;
    goto loc_004B6B46;

loc_004B6B44: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B6B46: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B6B4Cu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B6B4C: ;
    ecx = eax;
    PUSH32(esp, 0x004B6B53u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B6B53: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = ebp + -40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004B6B60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6B5Du); } /* indirect call */
    }

loc_004B6B60: ;
    ecx = ebp + -40;
    PUSH32(esp, 0x004B6B68u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B6B68: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B6B6F
 * Original: 0x004B6B6F - 0x004B6C7D (270 bytes, 92 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B6B6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6B6F: ;
    PUSH32(esp, ebp);
    ebp = esp + -144;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(edi + 0x60));
    MEM32(ebp + 0x8C) = eax;
    eax = MEM32(edi + 0x4C);
    MEM8(ebp + -121) = LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x9C));
    MEM32(ebp + 0x9C) = MEM32(ebp + 0x9C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x9C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -128) = eax;
    MEM8(edi + 0x60) = LO8(ecx);
    if (CMP_BE(_fa, _fb)) goto loc_004B6C61; /* jbe: below or equal (unsigned <=) */

loc_004B6BAF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x98);
    PUSH32(esp, esi);

loc_004B6BB7: ;
    PUSH32(esp, MEM32(ebp + 0x9C));
    ecx = edi + 0x40;
    PUSH32(esp, 0x004B6BC5u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B6BC5: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B6BCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6BCBu); } /* indirect call */
    }

loc_004B6BCE: ;
    MEM32(ebp + -120) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B6BD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6BD5u); } /* indirect call */
    }

loc_004B6BD8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004B6C27; /* je: equal / zero */

loc_004B6BDE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004B6C0C; /* je: equal / zero */

loc_004B6BE1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004B6C4A; /* jne: not equal / not zero */

loc_004B6BE4: ;
    eax = MEM32(esi);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -120));
    ecx = ebx;
    MEM32(ebp + -120) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B6BF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6BF1u); } /* indirect call */
    }

loc_004B6BF4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -120);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B6BFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6BFAu); } /* indirect call */
    }

loc_004B6BFD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B6C04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6C01u); } /* indirect call */
    }

loc_004B6C04: ;
    ebx = MEM32(ebp + 0x98);
    goto loc_004B6C4A;

loc_004B6C0C: ;
    eax = MEM32(esi);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -120));
    ecx = ebx;
    MEM32(ebp + -120) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B6C1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6C19u); } /* indirect call */
    }

loc_004B6C1C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -120);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B6C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6C22u); } /* indirect call */
    }

loc_004B6C25: ;
    goto loc_004B6C04;

loc_004B6C27: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    ecx = ebp + -116;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, MEM32(ebp + -120));
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004B6C3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6C3Cu); } /* indirect call */
    }

loc_004B6C3F: ;
    eax = MEM32(esi);
    ecx = ebp + -116;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004B6C4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6C47u); } /* indirect call */
    }

loc_004B6C4A: ;
    MEM32(ebp + 0x9C) = MEM32(ebp + 0x9C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x9C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -128)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -128) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B6BB7; /* jb: below (unsigned <) */

loc_004B6C5F: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004B6C61: ;
    SET_LO8(eax, MEM8(ebp + -121));
    ecx = MEM32(ebp + 0x8C);
    MEM8(edi + 0x60) = LO8(eax);
    POP32(esp, edi);
    PUSH32(esp, 0x004B6C73u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B6C73: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x90;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B6C7D
 * Original: 0x004B6C7D - 0x004B6D5A (221 bytes, 82 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B6C7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B6C7D: ;
    PUSH32(esp, ebp);
    ebp = esp + -148;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x114));
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -116) = MEM32(ebp + -116) & 0;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    MEM32(ebp + 0x90) = eax;
    eax = MEM32(ecx + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x9C);
    MEM32(ebp + -124) = ecx;
    SET_LO8(ebx, 1);
    MEM32(ebp + -128) = eax;
    goto loc_004B6CB3;

loc_004B6CB0: ;
    ecx = MEM32(ebp + -124);

loc_004B6CB3: ;
    eax = MEM32(ebp + -116);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -128)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -128) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_004B6D40; /* jae: above or equal (unsigned >=) */

loc_004B6CBF: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x40)) >> 32) & 1);
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004B6CC8u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B6CC8: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B6CD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6CCEu); } /* indirect call */
    }

loc_004B6CD1: ;
    MEM32(ebp + -120) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B6CDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6CD8u); } /* indirect call */
    }

loc_004B6CDB: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004B6D02; /* je: equal / zero */

loc_004B6CE1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004B6CE7; /* je: equal / zero */

loc_004B6CE4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004B6D35; /* jne: not equal / not zero */

loc_004B6CE7: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -120));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B6CF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6CEFu); } /* indirect call */
    }

loc_004B6CF2: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004B6CFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6CF8u); } /* indirect call */
    }

loc_004B6CFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    goto loc_004B6D35;

loc_004B6D02: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    ecx = ebp + -112;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, MEM32(ebp + -120));
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004B6D1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6D17u); } /* indirect call */
    }

loc_004B6D1A: ;
    eax = ebp + -112;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B6D25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6D22u); } /* indirect call */
    }

loc_004B6D25: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B6D2Bu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B6D2B: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ecx);
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_004B6D35: ;
    MEM32(ebp + -116) = MEM32(ebp + -116) + 1;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B6CB0; /* jne: not equal / not zero */

loc_004B6D40: ;
    ecx = MEM32(ebp + 0x90);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    PUSH32(esp, 0x004B6D50u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B6D50: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x94)) >> 32) & 1);
    ebp = ebp + 0x94;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6D6A
 * Original: 0x004B6D6A - 0x004B6D97 (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6D6A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6D6A: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864850;
    if (TEST_Z(_fa, _fb)) goto loc_004B6D81; /* je: equal / zero */

loc_004B6D7A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B6D80u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004B6D80: ;
    POP32(esp, ecx);

loc_004B6D81: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6D97
 * Original: 0x004B6D97 - 0x004B6DB4 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6D97(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6D97: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864858;
    if (TEST_Z(_fa, _fb)) goto loc_004B6DAE; /* je: equal / zero */

loc_004B6DA7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B6DADu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004B6DAD: ;
    POP32(esp, ecx);

loc_004B6DAE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6DB4
 * Original: 0x004B6DB4 - 0x004B6DE7 (51 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6DB4(void)
{

loc_004B6DB4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B6DBCu); RECOMP_ABI_CALL(0x004E31B4u, sub_004E31B4); /* call 0x004E31B4 */

loc_004B6DBC: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x71646566);
    ecx = esi;
    MEM32(esi) = 0x864870;
    MEM32(esi + 8) = 0x864860;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x004B6DE1u); RECOMP_ABI_CALL(0x004E3221u, sub_004E3221); /* call 0x004E3221 */

loc_004B6DE1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6DE7
 * Original: 0x004B6DE7 - 0x004B6E10 (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6DE7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6DE7: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864870;
    MEM32(esi + 8) = 0x864860;
    PUSH32(esp, 0x004B6DFCu); RECOMP_ABI_CALL(0x004E31F2u, sub_004E31F2); /* call 0x004E31F2 */

loc_004B6DFC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B6E0A; /* je: equal / zero */

loc_004B6E03: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B6E09u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B6E09: ;
    POP32(esp, ecx);

loc_004B6E0A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6E10
 * Original: 0x004B6E10 - 0x004B6E1A (10 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6E10(void)
{

loc_004B6E10: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B6E19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6E17u); } /* indirect call */
    }

loc_004B6E19: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B6E1A
 * Original: 0x004B6E1A - 0x004B6E3B (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6E1A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6E1A: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    ecx = MEM32(ecx + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_004B6E2F; /* je: equal / zero */

loc_004B6E27: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B6E2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6E2Bu); } /* indirect call */
    }

loc_004B6E2D: ;
    goto loc_004B6E36;

loc_004B6E2F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0x10));
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004B6E36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6E34u); } /* indirect call */
    }

loc_004B6E36: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6E3B
 * Original: 0x004B6E3B - 0x004B6E45 (10 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6E3B(void)
{

loc_004B6E3B: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B6E44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6E42u); } /* indirect call */
    }

loc_004B6E44: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B6E45
 * Original: 0x004B6E45 - 0x004B6E96 (81 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6E45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B6E45: ;
    PUSH32(esp, 0x004B6E4Au); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B6E4A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004B6E51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6E4Eu); } /* indirect call */
    }

loc_004B6E51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B6E95; /* je: equal / zero */

loc_004B6E55: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004B6E60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6E5Du); } /* indirect call */
    }

loc_004B6E60: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004B6E67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6E64u); } /* indirect call */
    }

loc_004B6E67: ;
    ebx = MEM32(esp + 0x14);
    edi = eax;
    eax = MEM32(ebx);
    PUSH32(esp, 0x64);
    POP32(esp, esi);
    ecx = ebx;
    ebp = edi * 4 + 0x86335C;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004B6E80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6E7Du); } /* indirect call */
    }

loc_004B6E80: ;
    edx = MEM32(ebx);
    PUSH32(esp, 0x63);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) eax = edi; /* cmovl */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004B6E91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6E8Eu); } /* indirect call */
    }

loc_004B6E91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004B6E95: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B6E96
 * Original: 0x004B6E96 - 0x004B6EB3 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6E96(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6E96: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B6E9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6E9Cu); } /* indirect call */
    }

loc_004B6E9F: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B6EB0; /* je: equal / zero */

loc_004B6EA7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B6EB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B6EADu); } /* indirect call */
    }

loc_004B6EB0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B6EB3
 * Original: 0x004B6EB3 - 0x004B6EDD (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6EB3(void)
{

loc_004B6EB3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B6EBBu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B6EBB: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x864880;
    PUSH32(esp, 0x004B6ECAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B6ECA: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004B6ED7u); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004B6ED7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B6EF9
 * Original: 0x004B6EF9 - 0x004B6EFF (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6EF9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6EF9: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_004B6EFF
 * Original: 0x004B6EFF - 0x004B6F0E (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6EFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B6EFF: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B6F0A; /* je: equal / zero */

loc_004B6F05: ;
    g_seh_ebp = ebp; sub_004DD5FD(); return; /* tail jmp 0x004DD5FD */

loc_004B6F0A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B6F0E
 * Original: 0x004B6F0E - 0x004B6F29 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6F0E(void)
{

loc_004B6F0E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004B6F1Eu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004B6F1E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6F3E
 * Original: 0x004B6F3E - 0x004B6F59 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6F3E(void)
{

loc_004B6F3E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004B6F4Eu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004B6F4E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6F6E
 * Original: 0x004B6F6E - 0x004B6F89 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6F6E(void)
{

loc_004B6F6E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004B6F7Eu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004B6F7E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6F89
 * Original: 0x004B6F89 - 0x004B6FB3 (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6F89(void)
{

loc_004B6F89: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B6F91u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B6F91: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x864884;
    PUSH32(esp, 0x004B6FA0u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B6FA0: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 8;
    PUSH32(esp, 0x004B6FADu); RECOMP_ABI_CALL(0x004DB87Du, sub_004DB87D); /* call 0x004DB87D */

loc_004B6FAD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B6FBB
 * Original: 0x004B6FBB - 0x004B6FD7 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6FBB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6FBB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B6FC3u); RECOMP_ABI_CALL(0x004E1CC0u, sub_004E1CC0); /* call 0x004E1CC0 */

loc_004B6FC3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B6FD1; /* je: equal / zero */

loc_004B6FCA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B6FD0u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B6FD0: ;
    POP32(esp, ecx);

loc_004B6FD1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6FD7
 * Original: 0x004B6FD7 - 0x004B6FF3 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6FD7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6FD7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B6FDFu); RECOMP_ABI_CALL(0x004E2138u, sub_004E2138); /* call 0x004E2138 */

loc_004B6FDF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B6FED; /* je: equal / zero */

loc_004B6FE6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B6FECu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B6FEC: ;
    POP32(esp, ecx);

loc_004B6FED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B6FF3
 * Original: 0x004B6FF3 - 0x004B6FFB (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6FF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B6FF3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B6DE7(); return; /* tail jmp 0x004B6DE7 */

}

/**
 * sub_004B6FFB
 * Original: 0x004B6FFB - 0x004B703A (63 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6FFB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B6FFB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B7003u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B7003: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = 0x86426C;
    MEM32(esi + 0xC) = 0x864850;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi) = 0x864898;
    MEM32(esi + 8) = 0x864890;
    MEM32(esi + 0xC) = 0x864888;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B703A
 * Original: 0x004B703A - 0x004B7042 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B703A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B703A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B8631(); return; /* tail jmp 0x004B8631 */

}

/**
 * sub_004B7042
 * Original: 0x004B7042 - 0x004B704A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B7042(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B7042: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B8631(); return; /* tail jmp 0x004B8631 */

}

/**
 * sub_004B704A
 * Original: 0x004B704A - 0x004B708F (69 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B704A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B704A: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x864898;
    MEM32(esi + 8) = 0x864890;
    MEM32(esi + 0xC) = 0x864888;
    if (CMP_EQ(_fa, _fb)) goto loc_004B706D; /* je: equal / zero */

loc_004B7068: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B706Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B706Au); } /* indirect call */
    }

loc_004B706D: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B7079; /* je: equal / zero */

loc_004B7074: ;
    PUSH32(esp, 0x004B7079u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B7079: ;
    MEM32(esi + 0xC) = 0x864850;
    MEM32(esi + 8) = 0x86426C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004B708F
 * Original: 0x004B708F - 0x004B70CF (64 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B708F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B708F: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x34);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = eax + -8;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    esi = eax + 0x10;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004B70C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B70BEu); } /* indirect call */
    }

loc_004B70C0: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B70C8u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B70C8: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B70CF
 * Original: 0x004B70CF - 0x004B7105 (54 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B70CF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B70CF: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    PUSH32(esp, esi);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B70E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B70E4u); } /* indirect call */
    }

loc_004B70E6: ;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004B70F0u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B70F0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 8);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B7101u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B70FFu); } /* indirect call */
    }

loc_004B7101: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B7105
 * Original: 0x004B7105 - 0x004B7130 (43 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B7105(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B7105: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    edi = ecx + 0xB4;
    PUSH32(esp, MEM32(edi));
    esi = ecx + 0xB8;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B711Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B711Du); } /* indirect call */
    }

loc_004B711F: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004B712Bu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B712B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B7130
 * Original: 0x004B7130 - 0x004B716F (63 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B7130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B7130: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B7138u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B7138: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = 0x86426C;
    MEM32(esi + 0xC) = 0x864858;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi) = 0x8648AC;
    MEM32(esi + 8) = 0x8648A4;
    MEM32(esi + 0xC) = 0x86489C;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B716F
 * Original: 0x004B716F - 0x004B7177 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B716F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B716F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B864D(); return; /* tail jmp 0x004B864D */

}

/**
 * sub_004B7177
 * Original: 0x004B7177 - 0x004B717F (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B7177(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B7177: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B864D(); return; /* tail jmp 0x004B864D */

}

/**
 * sub_004B717F
 * Original: 0x004B717F - 0x004B71C4 (69 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B717F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B717F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x8648AC;
    MEM32(esi + 8) = 0x8648A4;
    MEM32(esi + 0xC) = 0x86489C;
    if (CMP_EQ(_fa, _fb)) goto loc_004B71A2; /* je: equal / zero */

loc_004B719D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B71A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B719Fu); } /* indirect call */
    }

loc_004B71A2: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B71AE; /* je: equal / zero */

loc_004B71A9: ;
    PUSH32(esp, 0x004B71AEu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B71AE: ;
    MEM32(esi + 0xC) = 0x864858;
    MEM32(esi + 8) = 0x86426C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004B71C4
 * Original: 0x004B71C4 - 0x004B7223 (95 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B71C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B71C4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x004B71D3u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B71D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004B71DFu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B71DF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B71FC; /* je: equal / zero */

loc_004B71E6: ;
    ecx = esi + -8;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = esi + 4;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x004B71FAu); RECOMP_ABI_CALL(0x004B6DB4u, sub_004B6DB4); /* call 0x004B6DB4 */

loc_004B71FA: ;
    goto loc_004B71FE;

loc_004B71FC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B71FE: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004B7207u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B7207: ;
    ecx = eax;
    PUSH32(esp, 0x004B720Eu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B720E: ;
    ecx = eax;
    PUSH32(esp, 0x004B7215u); RECOMP_ABI_CALL(0x004E32BDu, sub_004E32BD); /* call 0x004E32BD */

loc_004B7215: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B721Du); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B721D: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B7223
 * Original: 0x004B7223 - 0x004B724B (40 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B7223(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B7223: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edi = esi + 0xC;
    PUSH32(esp, MEM32(edi));
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B7235u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7233u); } /* indirect call */
    }

loc_004B7235: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004B723Eu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B723E: ;
    ecx = MEM32(esi + 8);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_004B724B
 * Original: 0x004B724B - 0x004B728B (64 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B724B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B724B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edi (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004B7279; /* jne: not equal / not zero */

loc_004B7257: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B7278; /* jbe: below or equal (unsigned <=) */

loc_004B725F: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x18;

loc_004B7263: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x004B726Bu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B726B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x004B7272u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B726Fu); } /* indirect call */
    }

loc_004B7272: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B7263; /* jb: below (unsigned <) */

loc_004B7277: ;
    POP32(esp, ebp);

loc_004B7278: ;
    POP32(esp, ebx);

loc_004B7279: ;
    PUSH32(esp, 0);
    ecx = esi + 0xAC;
    PUSH32(esp, 0x004B7286u); RECOMP_ABI_CALL(0x004B6F3Eu, sub_004B6F3E); /* call 0x004B6F3E */

loc_004B7286: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B728B
 * Original: 0x004B728B - 0x004B7334 (169 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B728B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B728B: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    MEM32(ebp + 0x70) = eax;
    eax = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004B72AF; /* jne: not equal / not zero */

loc_004B72AA: ;
    eax = 0x7E0960;

loc_004B72AF: ;
    PUSH32(esp, eax);
    ecx = ebp + -132;
    PUSH32(esp, 0x004B72BBu); RECOMP_ABI_CALL(0x004DCC43u, sub_004DCC43); /* call 0x004DCC43 */

loc_004B72BB: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi + 0x64;

loc_004B72C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x8648B0);
    PUSH32(esp, 0x8237D4);
    eax = ebp + 0x60;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B72D6u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004B72D6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xC1);
    eax = ebp + -100;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7B891F);
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    ecx = ebp + -132;
    PUSH32(esp, 0x004B72F6u); RECOMP_ABI_CALL(0x004DCCC6u, sub_004DCCC6); /* call 0x004DCCC6 */

loc_004B72F6: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    edx = ebp + -100;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004B7301u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B72FEu); } /* indirect call */
    }

loc_004B7301: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 9 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B72C0; /* jb: below (unsigned <) */

loc_004B730A: ;
    PUSH32(esp, 0);
    ecx = edi + 0xA4;
    PUSH32(esp, 0x004B7317u); RECOMP_ABI_CALL(0x004B6F6Eu, sub_004B6F6E); /* call 0x004B6F6E */

loc_004B7317: ;
    ecx = ebp + -132;
    PUSH32(esp, 0x004B7322u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004B7322: ;
    ecx = MEM32(ebp + 0x70);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x004B732Du); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B732D: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B7334
 * Original: 0x004B7334 - 0x004B7660 (812 bytes, 283 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B7334(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B7334: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004B7357; /* je: equal / zero */

loc_004B7344: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B7357; /* je: equal / zero */

loc_004B7349: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B7357; /* je: equal / zero */

loc_004B734E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B765A; /* jne: not equal / not zero */

loc_004B7357: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, MEM32(0x863188));
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B7368u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7365u); } /* indirect call */
    }

loc_004B7368: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B736Eu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B736E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B7533; /* je: equal / zero */

loc_004B7378: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x86318C));
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B7385u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7382u); } /* indirect call */
    }

loc_004B7385: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B738Bu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B738B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B7533; /* je: equal / zero */

loc_004B7395: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863210));
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B73A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B739Fu); } /* indirect call */
    }

loc_004B73A2: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B73A8u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B73A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004B749E; /* jne: not equal / not zero */

loc_004B73B2: ;
    ecx = MEM32(esi + 0xA0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004B73BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B73BAu); } /* indirect call */
    }

loc_004B73BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B741A; /* jne: not equal / not zero */

loc_004B73C2: ;
    ecx = MEM32(esi + 0x94);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B73CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B73CAu); } /* indirect call */
    }

loc_004B73CD: ;
    ecx = MEM32(esi + 0x98);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B73D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B73D5u); } /* indirect call */
    }

loc_004B73D8: ;
    ecx = MEM32(esi + 0x9C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B73E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B73E0u); } /* indirect call */
    }

loc_004B73E3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B7659; /* jne: not equal / not zero */

loc_004B73EC: ;
    ecx = MEM32(esi + 0x94);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B73F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B73F6u); } /* indirect call */
    }

loc_004B73F9: ;
    ecx = MEM32(esi + 0x98);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B7406u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7403u); } /* indirect call */
    }

loc_004B7406: ;
    esi = MEM32(esi + 0x9C);
    eax = MEM32(esi);
    ecx = esi;

loc_004B7410: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x63);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B7415u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7412u); } /* indirect call */
    }

loc_004B7415: ;
    goto loc_004B7659;

loc_004B741A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0xB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xB9), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B742F; /* jne: not equal / not zero */

loc_004B7424: ;
    ecx = MEM32(esi + 0x94);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B742Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B742Cu); } /* indirect call */
    }

loc_004B742F: ;
    _fa = (uint32_t)(MEM8(esi + 0xB8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xB8), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B7442; /* jne: not equal / not zero */

loc_004B7437: ;
    ecx = MEM32(esi + 0x98);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B7442u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B743Fu); } /* indirect call */
    }

loc_004B7442: ;
    ecx = MEM32(esi + 0x9C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B744Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B744Au); } /* indirect call */
    }

loc_004B744D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B7659; /* jne: not equal / not zero */

loc_004B7456: ;
    ecx = MEM32(esi + 0x94);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B7463u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7460u); } /* indirect call */
    }

loc_004B7463: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B7468u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B7468: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004B746Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B746Cu); } /* indirect call */
    }

loc_004B746F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B7659; /* je: equal / zero */

loc_004B7477: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004B747Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B747Bu); } /* indirect call */
    }

loc_004B747E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004B7485u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7482u); } /* indirect call */
    }

loc_004B7485: ;
    ecx = MEM32(esi + 0x98);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B7491u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B748Eu); } /* indirect call */
    }

loc_004B7491: ;
    ecx = MEM32(esi + 0x9C);
    eax = MEM32(ecx);
    goto loc_004B7410;

loc_004B749E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863164));
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B74ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B74A8u); } /* indirect call */
    }

loc_004B74AB: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B74B1u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B74B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004B74D5; /* jne: not equal / not zero */

loc_004B74B7: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004B74BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B74BCu); } /* indirect call */
    }

loc_004B74BF: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004B7656; /* jne: not equal / not zero */

loc_004B74CD: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B74D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B74CDu); } /* indirect call */
    }

loc_004B74D0: ;
    goto loc_004B7659;

loc_004B74D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863168));
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B74E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B74DFu); } /* indirect call */
    }

loc_004B74E2: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B74E8u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B74E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004B7659; /* jne: not equal / not zero */

loc_004B74F2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B7500; /* je: equal / zero */

loc_004B74F7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B7659; /* jne: not equal / not zero */

loc_004B7500: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004B7507u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7504u); } /* indirect call */
    }

loc_004B7507: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x34);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0x4000);
    if (CMP_EQ(_fa, _fb)) goto loc_004B7529; /* je: equal / zero */

loc_004B751F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B7524u); RECOMP_ABI_CALL(0x004B4D34u, sub_004B4D34); /* call 0x004B4D34 */

loc_004B7524: ;
    goto loc_004B7659;

loc_004B7529: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B752Eu); RECOMP_ABI_CALL(0x004B4CB7u, sub_004B4CB7); /* call 0x004B4CB7 */

loc_004B752E: ;
    goto loc_004B7659;

loc_004B7533: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    MEM32(ebp + -4) = 5;
    MEM32(ebp + 8) = 0x86328C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004B7549u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7546u); } /* indirect call */
    }

loc_004B7549: ;
    ecx = MEM32(esi + 0x38);
    edi = eax;
    eax = MEM32(ecx);
    MEM8(ebp + 0xF) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B7557u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7554u); } /* indirect call */
    }

loc_004B7557: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B7585; /* jne: not equal / not zero */

loc_004B755D: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B7565u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7562u); } /* indirect call */
    }

loc_004B7565: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B7585; /* jne: not equal / not zero */

loc_004B7569: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(ebp + -4) = 3;
    MEM32(ebp + 8) = 0x8632C0;
    if (CMP_EQ(_fa, _fb)) goto loc_004B7580; /* je: equal / zero */

loc_004B757B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B75A3; /* jne: not equal / not zero */

loc_004B7580: ;
    PUSH32(esp, 4);
    POP32(esp, edi);
    goto loc_004B75A3;

loc_004B7585: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B758Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B758Au); } /* indirect call */
    }

loc_004B758D: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B75A8; /* jne: not equal / not zero */

loc_004B7591: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 8) = 0x8632A0;
    if (CMP_EQ(_fa, _fb)) edi = eax; /* cmove */

loc_004B75A3: ;
    MEM8(ebp + 0xF) = LO8(ebx);
    goto loc_004B75C8;

loc_004B75A8: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B75B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B75ADu); } /* indirect call */
    }

loc_004B75B0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B75C8; /* jne: not equal / not zero */

loc_004B75B4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    PUSH32(esp, 4);
    POP32(esp, eax);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 8) = 0x8632B0;
    if (CMP_NE(_fa, _fb)) goto loc_004B75C8; /* jne: not equal / not zero */

loc_004B75C6: ;
    edi = eax;

loc_004B75C8: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B75D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B75CDu); } /* indirect call */
    }

loc_004B75D0: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004B75E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B75DEu); } /* indirect call */
    }

loc_004B75E1: ;
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xF), LO8(ebx) (8-bit) */
    ecx = MEM32(esi + 0x4C);
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B762F; /* je: equal / zero */

loc_004B75EB: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004B75EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B75EBu); } /* indirect call */
    }

loc_004B75EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = 0x863220;
    if (CMP_NE(_fa, _fb)) goto loc_004B760C; /* jne: not equal / not zero */

loc_004B75F7: ;
    ecx = MEM32(esi + 0x4C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B75FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B75FCu); } /* indirect call */
    }

loc_004B75FF: ;
    ecx = MEM32(esi + 0x4C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004B760Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7609u); } /* indirect call */
    }

loc_004B760C: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004B7614u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7611u); } /* indirect call */
    }

loc_004B7614: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B7659; /* jne: not equal / not zero */

loc_004B7618: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B7620u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B761Du); } /* indirect call */
    }

loc_004B7620: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004B762Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B762Au); } /* indirect call */
    }

loc_004B762D: ;
    goto loc_004B7659;

loc_004B762F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edi = 0x863228;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004B763Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7639u); } /* indirect call */
    }

loc_004B763C: ;
    ecx = MEM32(esi + 0x4C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B7644u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7641u); } /* indirect call */
    }

loc_004B7644: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004B7651u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B764Eu); } /* indirect call */
    }

loc_004B7651: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);

loc_004B7656: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B7659u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7656u); } /* indirect call */
    }

loc_004B7659: ;
    POP32(esp, ebx);

loc_004B765A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B7660
 * Original: 0x004B7660 - 0x004B780E (430 bytes, 135 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B7660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B7660: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B766Bu); RECOMP_ABI_CALL(0x004BDFD2u, sub_004BDFD2); /* call 0x004BDFD2 */

loc_004B766B: ;
    ebx = esi + 0xC;
    edi = esi + 8;
    ecx = ebx;
    MEM32(edi) = 0x864850;
    PUSH32(esp, 0x004B767Eu); RECOMP_ABI_CALL(0x004BDFA5u, sub_004BDFA5); /* call 0x004BDFA5 */

loc_004B767E: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x004B7686u); RECOMP_ABI_CALL(0x004AD96Au, sub_004AD96A); /* call 0x004AD96A */

loc_004B7686: ;
    ebp = esi + 0x14;
    MEM32(ebp) = 0x864858;
    MEM32(esi) = 0x8648D8;
    MEM32(edi) = 0x8648D0;
    MEM32(ebx) = 0x8648C8;
    MEM32(esi + 0x10) = 0x8648C0;
    MEM32(ebp) = 0x8648B8;
    PUSH32(esp, 0x004B76B5u); RECOMP_ABI_CALL(0x004DC9ADu, sub_004DC9AD); /* call 0x004DC9AD */

loc_004B76B5: ;
    edx = MEM32(eax);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004B76BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B76BCu); } /* indirect call */
    }

loc_004B76BE: ;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, 0x004B76C7u); RECOMP_ABI_CALL(0x004B6EB3u, sub_004B6EB3); /* call 0x004B6EB3 */

loc_004B76C7: ;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = ebx;
    PUSH32(esp, 0x4B6EF9);
    MEM32(esi + 0x64) = ebx;
    PUSH32(esp, 9);
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x6C) = ebx;
    PUSH32(esp, 4);
    eax = esi + 0x78;
    MEM32(esi + 0x70) = ebx;
    PUSH32(esp, eax);
    MEM32(esi + 0x74) = ebx;
    PUSH32(esp, 0x004B7703u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004B7703: ;
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0xC4) = ebx;
    MEM8(esi + 0xC8) = LO8(ebx);
    MEM8(esi + 0xC9) = LO8(ebx);
    PUSH32(esp, 0x004B7750u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B7750: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004B775Au); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B775A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B776B; /* je: equal / zero */

loc_004B7761: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x004B7769u); RECOMP_ABI_CALL(0x004B6FFBu, sub_004B6FFB); /* call 0x004B6FFB */

loc_004B7769: ;
    goto loc_004B776D;

loc_004B776B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B776D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B7773u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B7773: ;
    ecx = eax;
    PUSH32(esp, 0x004B777Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B777A: ;
    edi = esi + 0xB4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004B7788u); RECOMP_ABI_CALL(0x004B6F3Eu, sub_004B6F3E); /* call 0x004B6F3E */

loc_004B7788: ;
    eax = MEM32(edi);
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, 0x004B77A9u); RECOMP_ABI_CALL(0x004BD7BAu, sub_004BD7BA); /* call 0x004BD7BA */

loc_004B77A9: ;
    PUSH32(esp, 0x004B77AEu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B77AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004B77B8u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B77B8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B77C9; /* je: equal / zero */

loc_004B77BF: ;
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x004B77C7u); RECOMP_ABI_CALL(0x004B7130u, sub_004B7130); /* call 0x004B7130 */

loc_004B77C7: ;
    goto loc_004B77CB;

loc_004B77C9: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B77CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B77D1u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B77D1: ;
    ecx = eax;
    PUSH32(esp, 0x004B77D8u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B77D8: ;
    edi = esi + 0xB8;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004B77E6u); RECOMP_ABI_CALL(0x004B6F6Eu, sub_004B6F6E); /* call 0x004B6F6E */

loc_004B77E6: ;
    eax = MEM32(edi);
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, 0x004B7807u); RECOMP_ABI_CALL(0x004BD7BAu, sub_004BD7BA); /* call 0x004BD7BA */

loc_004B7807: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004B780E
 * Original: 0x004B780E - 0x004B7816 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B780E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B780E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B8669(); return; /* tail jmp 0x004B8669 */

}

/**
 * sub_004B7816
 * Original: 0x004B7816 - 0x004B781E (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B7816(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B7816: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B8669(); return; /* tail jmp 0x004B8669 */

}

/**
 * sub_004B781E
 * Original: 0x004B781E - 0x004B7826 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B781E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B781E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B8669(); return; /* tail jmp 0x004B8669 */

}

/**
 * sub_004B7826
 * Original: 0x004B7826 - 0x004B782E (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B7826(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B7826: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B8669(); return; /* tail jmp 0x004B8669 */

}

/**
 * sub_004B782E
 * Original: 0x004B782E - 0x004B79C8 (410 bytes, 122 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B782E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B782E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ebx = esi + 0x10;
    MEM32(esi) = 0x8648D8;
    MEM32(esi + 8) = 0x8648D0;
    MEM32(edi) = 0x8648C8;
    MEM32(ebx) = 0x8648C0;
    MEM32(esi + 0x14) = 0x8648B8;
    ecx = MEM32(esi + 0xC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B7868; /* je: equal / zero */

loc_004B7863: ;
    PUSH32(esp, 0x004B7868u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B7868: ;
    ecx = MEM32(esi + 0xB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B7877; /* je: equal / zero */

loc_004B7872: ;
    PUSH32(esp, 0x004B7877u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B7877: ;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B7886; /* je: equal / zero */

loc_004B7881: ;
    PUSH32(esp, 0x004B7886u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B7886: ;
    ecx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B7895; /* je: equal / zero */

loc_004B7890: ;
    PUSH32(esp, 0x004B7895u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B7895: ;
    ecx = MEM32(esi + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B78A4; /* je: equal / zero */

loc_004B789F: ;
    PUSH32(esp, 0x004B78A4u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B78A4: ;
    ecx = MEM32(esi + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B78B3; /* je: equal / zero */

loc_004B78AE: ;
    PUSH32(esp, 0x004B78B3u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B78B3: ;
    ecx = MEM32(esi + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B78C2; /* je: equal / zero */

loc_004B78BD: ;
    PUSH32(esp, 0x004B78C2u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B78C2: ;
    ecx = MEM32(esi + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B78D1; /* je: equal / zero */

loc_004B78CC: ;
    PUSH32(esp, 0x004B78D1u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B78D1: ;
    ecx = MEM32(esi + 0x9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B78E0; /* je: equal / zero */

loc_004B78DB: ;
    PUSH32(esp, 0x004B78E0u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B78E0: ;
    PUSH32(esp, 0x4B6EFF);
    PUSH32(esp, 9);
    PUSH32(esp, 4);
    eax = esi + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B78F2u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_004B78F2: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B78FE; /* je: equal / zero */

loc_004B78F9: ;
    PUSH32(esp, 0x004B78FEu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B78FE: ;
    ecx = MEM32(esi + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B790A; /* je: equal / zero */

loc_004B7905: ;
    PUSH32(esp, 0x004B790Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B790A: ;
    ecx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B7916; /* je: equal / zero */

loc_004B7911: ;
    PUSH32(esp, 0x004B7916u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B7916: ;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B7922; /* je: equal / zero */

loc_004B791D: ;
    PUSH32(esp, 0x004B7922u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B7922: ;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B792E; /* je: equal / zero */

loc_004B7929: ;
    PUSH32(esp, 0x004B792Eu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B792E: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B793A; /* je: equal / zero */

loc_004B7935: ;
    PUSH32(esp, 0x004B793Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B793A: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B7946; /* je: equal / zero */

loc_004B7941: ;
    PUSH32(esp, 0x004B7946u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B7946: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B7952; /* je: equal / zero */

loc_004B794D: ;
    PUSH32(esp, 0x004B7952u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B7952: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B795E; /* je: equal / zero */

loc_004B7959: ;
    PUSH32(esp, 0x004B795Eu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B795E: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B796A; /* je: equal / zero */

loc_004B7965: ;
    PUSH32(esp, 0x004B796Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B796A: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B7976; /* je: equal / zero */

loc_004B7971: ;
    PUSH32(esp, 0x004B7976u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B7976: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B7982; /* je: equal / zero */

loc_004B797D: ;
    PUSH32(esp, 0x004B7982u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B7982: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B798E; /* je: equal / zero */

loc_004B7989: ;
    PUSH32(esp, 0x004B798Eu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B798E: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B799A; /* je: equal / zero */

loc_004B7995: ;
    PUSH32(esp, 0x004B799Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B799A: ;
    ecx = esi + 0x18;
    PUSH32(esp, 0x004B79A2u); RECOMP_ABI_CALL(0x004E1CC0u, sub_004E1CC0); /* call 0x004E1CC0 */

loc_004B79A2: ;
    ecx = ebx;
    MEM32(esi + 0x14) = 0x864858;
    PUSH32(esp, 0x004B79B0u); RECOMP_ABI_CALL(0x004AD973u, sub_004AD973); /* call 0x004AD973 */

loc_004B79B0: ;
    ecx = edi;
    PUSH32(esp, 0x004B79B7u); RECOMP_ABI_CALL(0x004BDFAEu, sub_004BDFAE); /* call 0x004BDFAE */

loc_004B79B7: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 0x864850;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004BDFE4(); return; /* tail jmp 0x004BDFE4 */

}

/**
 * sub_004B79C8
 * Original: 0x004B79C8 - 0x004B7F5A (1426 bytes, 472 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B79C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B79C8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B79D6u); RECOMP_ABI_CALL(0x004DC9ADu, sub_004DC9AD); /* call 0x004DC9AD */

loc_004B79D6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004B79DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B79DAu); } /* indirect call */
    }

loc_004B79DD: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, 0x20);
    ebx = 0x863220;
    edi = esi + 0x40;
    MEM32(esp + 0x20) = edi;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(0x863164));
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, MEM32(0x863160));
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x004B7A11u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7A11: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004B7A1Cu); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7A1C: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(0x863168));
    edi = esi + 0x44;
    PUSH32(esp, MEM32(0x863160));
    MEM32(esp + 0x44) = edi;
    PUSH32(esp, 0x004B7A3Eu); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7A3E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004B7A49u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7A49: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, 5);
    PUSH32(esp, 5);
    PUSH32(esp, 0x8632E4);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0xB);
    PUSH32(esp, MEM32(0x863174));
    PUSH32(esp, MEM32(0x863160));
    PUSH32(esp, 0x004B7A6Au); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7A6A: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x74;
    PUSH32(esp, 0x004B7A76u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7A76: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    edi = 0x7B891F;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x863178));
    PUSH32(esp, MEM32(0x863160));
    PUSH32(esp, 0x004B7A92u); RECOMP_ABI_CALL(0x004BE1C1u, sub_004BE1C1); /* call 0x004BE1C1 */

loc_004B7A92: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, MEM32(esp + 0x30));
    PUSH32(esp, MEM32(esp + 0x34));
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(0x86317C));
    PUSH32(esp, MEM32(0x863160));
    PUSH32(esp, 0x004B7AB3u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7AB3: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x3C)) >> 32) & 1);
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x50;
    PUSH32(esp, 0x004B7ABFu); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7ABF: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(0x863180));
    PUSH32(esp, MEM32(0x863160));
    PUSH32(esp, 0x004B7ADCu); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7ADC: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x54;
    PUSH32(esp, 0x004B7AE8u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7AE8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x32);
    PUSH32(esp, MEM32(0x863188));
    eax = esi + 0x48;
    PUSH32(esp, MEM32(0x863184));
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x004B7B06u); RECOMP_ABI_CALL(0x004BE1C1u, sub_004BE1C1); /* call 0x004BE1C1 */

loc_004B7B06: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B7B13u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B7B13: ;
    PUSH32(esp, 7);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x32);
    PUSH32(esp, MEM32(0x86318C));
    eax = esi + 0x4C;
    PUSH32(esp, MEM32(0x863184));
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x004B7B32u); RECOMP_ABI_CALL(0x004BE1C1u, sub_004BE1C1); /* call 0x004BE1C1 */

loc_004B7B32: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B7B3Fu); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B7B3F: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0x86328C);
    PUSH32(esp, 5);
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(0x863190));
    PUSH32(esp, MEM32(0x863184));
    PUSH32(esp, 0x004B7B61u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7B61: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, 0x004B7B6Du); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7B6D: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(0x863194));
    PUSH32(esp, MEM32(0x863184));
    PUSH32(esp, 0x004B7B89u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7B89: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x5C;
    PUSH32(esp, 0x004B7B95u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7B95: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(0x863198));
    PUSH32(esp, MEM32(0x863184));
    PUSH32(esp, 0x004B7BB1u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7BB1: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x60;
    PUSH32(esp, 0x004B7BBDu); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7BBD: ;
    eax = MEM32(0x8631A0);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x86319C));
    PUSH32(esp, 0x004B7BD3u); RECOMP_ABI_CALL(0x004BE1C1u, sub_004BE1C1); /* call 0x004BE1C1 */

loc_004B7BD3: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x64;
    PUSH32(esp, 0x004B7BDFu); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B7BDF: ;
    ecx = MEM32(esi + 0x64);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B7BE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7BE4u); } /* indirect call */
    }

loc_004B7BE7: ;
    eax = MEM32(0x8631AC);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x86319C));
    PUSH32(esp, 0x004B7BFDu); RECOMP_ABI_CALL(0x004BE1C1u, sub_004BE1C1); /* call 0x004BE1C1 */

loc_004B7BFD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x68;
    PUSH32(esp, 0x004B7C09u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B7C09: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B7C11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7C0Eu); } /* indirect call */
    }

loc_004B7C11: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x8632CC);
    PUSH32(esp, 6);
    PUSH32(esp, 6);
    PUSH32(esp, MEM32(0x8631B8));
    PUSH32(esp, MEM32(0x86319C));
    PUSH32(esp, 0x004B7C31u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7C31: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x6C;
    PUSH32(esp, 0x004B7C3Du); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7C3D: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(0x8631BC));
    PUSH32(esp, MEM32(0x86319C));
    PUSH32(esp, 0x004B7C59u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7C59: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x70;
    PUSH32(esp, 0x004B7C65u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7C65: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    ebx = 0xC0;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x8631C8));
    PUSH32(esp, MEM32(0x8631C4));
    PUSH32(esp, 0x004B7C82u); RECOMP_ABI_CALL(0x004BE223u, sub_004BE223); /* call 0x004BE223 */

loc_004B7C82: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x78;
    PUSH32(esp, 0x004B7C8Eu); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B7C8E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x8631CC));
    PUSH32(esp, MEM32(0x8631C4));
    PUSH32(esp, 0x004B7CA6u); RECOMP_ABI_CALL(0x004BE223u, sub_004BE223); /* call 0x004BE223 */

loc_004B7CA6: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x7C;
    PUSH32(esp, 0x004B7CB2u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B7CB2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x8631D0));
    PUSH32(esp, MEM32(0x8631C4));
    PUSH32(esp, 0x004B7CCAu); RECOMP_ABI_CALL(0x004BE223u, sub_004BE223); /* call 0x004BE223 */

loc_004B7CCA: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x80;
    PUSH32(esp, 0x004B7CD9u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B7CD9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x8631D4));
    PUSH32(esp, MEM32(0x8631C4));
    PUSH32(esp, 0x004B7CF1u); RECOMP_ABI_CALL(0x004BE223u, sub_004BE223); /* call 0x004BE223 */

loc_004B7CF1: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x84;
    PUSH32(esp, 0x004B7D00u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B7D00: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x8631D8));
    PUSH32(esp, MEM32(0x8631C4));
    PUSH32(esp, 0x004B7D18u); RECOMP_ABI_CALL(0x004BE223u, sub_004BE223); /* call 0x004BE223 */

loc_004B7D18: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x88;
    PUSH32(esp, 0x004B7D27u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B7D27: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x8631DC));
    PUSH32(esp, MEM32(0x8631C4));
    PUSH32(esp, 0x004B7D3Fu); RECOMP_ABI_CALL(0x004BE223u, sub_004BE223); /* call 0x004BE223 */

loc_004B7D3F: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x8C;
    PUSH32(esp, 0x004B7D4Eu); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B7D4E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x8631E0));
    PUSH32(esp, MEM32(0x8631C4));
    PUSH32(esp, 0x004B7D66u); RECOMP_ABI_CALL(0x004BE223u, sub_004BE223); /* call 0x004BE223 */

loc_004B7D66: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x90;
    PUSH32(esp, 0x004B7D75u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B7D75: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x8631E4));
    PUSH32(esp, MEM32(0x8631C4));
    PUSH32(esp, 0x004B7D8Du); RECOMP_ABI_CALL(0x004BE223u, sub_004BE223); /* call 0x004BE223 */

loc_004B7D8D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x94;
    PUSH32(esp, 0x004B7D9Cu); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B7D9C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x8631E8));
    PUSH32(esp, MEM32(0x8631C4));
    PUSH32(esp, 0x004B7DB4u); RECOMP_ABI_CALL(0x004BE223u, sub_004BE223); /* call 0x004BE223 */

loc_004B7DB4: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x98;
    PUSH32(esp, 0x004B7DC3u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B7DC3: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edi = 0x863310;
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x14);
    PUSH32(esp, MEM32(0x863218));
    PUSH32(esp, MEM32(0x863214));
    PUSH32(esp, 0x004B7DE6u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7DE6: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x9C;
    PUSH32(esp, 0x004B7DF5u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7DF5: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x863230);
    PUSH32(esp, 7);
    PUSH32(esp, 7);
    PUSH32(esp, MEM32(0x86321C));
    PUSH32(esp, MEM32(0x863214));
    PUSH32(esp, 0x004B7E14u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7E14: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0xA0;
    PUSH32(esp, 0x004B7E23u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7E23: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x14);
    PUSH32(esp, MEM32(0x863204));
    PUSH32(esp, MEM32(0x863200));
    PUSH32(esp, 0x004B7E3Eu); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7E3E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0xA4;
    PUSH32(esp, 0x004B7E4Du); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7E4D: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edi = 0x863360;
    PUSH32(esp, edi);
    PUSH32(esp, 0x63);
    POP32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x863208));
    PUSH32(esp, MEM32(0x863200));
    PUSH32(esp, 0x004B7E70u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7E70: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0xA8;
    PUSH32(esp, 0x004B7E7Fu); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7E7F: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x86320C));
    PUSH32(esp, MEM32(0x863200));
    PUSH32(esp, 0x004B7E98u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7E98: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0xAC;
    PUSH32(esp, 0x004B7EA7u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7EA7: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x863220);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(0x863210));
    edi = esi + 0xB0;
    PUSH32(esp, MEM32(0x863200));
    PUSH32(esp, 0x004B7ECCu); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004B7ECC: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004B7ED7u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7ED7: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax);
    PUSH32(esp, 8);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x004B7EF3u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004B7EF3: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x004B7F09u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004B7F09: ;
    ecx = MEM32(edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x004B7F1Bu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004B7F1B: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x004B7F31u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004B7F31: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x004B7F47u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004B7F47: ;
    PUSH32(esp, 0x004B7F4Cu); RECOMP_ABI_CALL(0x004DC9B8u, sub_004DC9B8); /* call 0x004DC9B8 */

loc_004B7F4C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004B7F52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7F50u); } /* indirect call */
    }

loc_004B7F52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004B7F5A
 * Original: 0x004B7F5A - 0x004B8348 (1006 bytes, 293 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B7F5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B7F5A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B7F69u); RECOMP_ABI_CALL(0x004DC9B8u, sub_004DC9B8); /* call 0x004DC9B8 */

loc_004B7F69: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B7F70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7F6Du); } /* indirect call */
    }

loc_004B7F70: ;
    edi = esi;
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = esi + 0x10;
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = esi + 0x48;
    ecx = MEM32(ebx);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B7F8Fu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004B7F8F: ;
    ecx = MEM32(esi + 0x4C);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B7FA1u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004B7FA1: ;
    eax = esi + 0xB0;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B7FBBu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004B7FBB: ;
    ecx = MEM32(esi + 0x40);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B7FCDu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004B7FCD: ;
    ecx = MEM32(esi + 0x44);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B7FDFu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004B7FDF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863164));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863160));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B7FF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B7FEFu); } /* indirect call */
    }

loc_004B7FF2: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B7FFDu); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B7FFD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863168));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863160));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B8010u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B800Du); } /* indirect call */
    }

loc_004B8010: ;
    PUSH32(esp, edi);
    ecx = esi + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8019u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B8019: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863174));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863160));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B802Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8029u); } /* indirect call */
    }

loc_004B802C: ;
    PUSH32(esp, edi);
    ecx = esi + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8035u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B8035: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863178));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863160));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B8048u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8045u); } /* indirect call */
    }

loc_004B8048: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x86317C));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863160));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B805Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8058u); } /* indirect call */
    }

loc_004B805B: ;
    PUSH32(esp, edi);
    ecx = esi + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8064u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B8064: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863180));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863160));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B8077u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8074u); } /* indirect call */
    }

loc_004B8077: ;
    PUSH32(esp, edi);
    ecx = esi + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8080u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B8080: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863188));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863184));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B8093u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8090u); } /* indirect call */
    }

loc_004B8093: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B809Bu); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B809B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x86318C));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863184));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B80AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B80ABu); } /* indirect call */
    }

loc_004B80AE: ;
    PUSH32(esp, edi);
    ecx = esi + 0x4C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B80B7u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B80B7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863190));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863184));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B80CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B80C7u); } /* indirect call */
    }

loc_004B80CA: ;
    PUSH32(esp, edi);
    ecx = esi + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B80D3u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B80D3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863194));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863184));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B80E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B80E3u); } /* indirect call */
    }

loc_004B80E6: ;
    PUSH32(esp, edi);
    ecx = esi + 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B80EFu); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B80EF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863198));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863184));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B8102u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B80FFu); } /* indirect call */
    }

loc_004B8102: ;
    PUSH32(esp, edi);
    ecx = esi + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B810Bu); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B810B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631A0));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x86319C));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B811Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B811Bu); } /* indirect call */
    }

loc_004B811E: ;
    PUSH32(esp, edi);
    ecx = esi + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8127u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B8127: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631AC));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x86319C));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B813Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8137u); } /* indirect call */
    }

loc_004B813A: ;
    PUSH32(esp, edi);
    ecx = esi + 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8143u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B8143: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631B8));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x86319C));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B8156u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8153u); } /* indirect call */
    }

loc_004B8156: ;
    PUSH32(esp, edi);
    ecx = esi + 0x6C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B815Fu); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B815F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631BC));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x86319C));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B8172u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B816Fu); } /* indirect call */
    }

loc_004B8172: ;
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B817Bu); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B817B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631C8));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x8631C4));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B818Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B818Bu); } /* indirect call */
    }

loc_004B818E: ;
    PUSH32(esp, edi);
    ecx = esi + 0x78;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8197u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B8197: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631CC));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x8631C4));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B81AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B81A7u); } /* indirect call */
    }

loc_004B81AA: ;
    PUSH32(esp, edi);
    ecx = esi + 0x7C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B81B3u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B81B3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631D0));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x8631C4));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B81C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B81C3u); } /* indirect call */
    }

loc_004B81C6: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B81D2u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B81D2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631D4));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x8631C4));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B81E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B81E2u); } /* indirect call */
    }

loc_004B81E5: ;
    PUSH32(esp, edi);
    ecx = esi + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B81F1u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B81F1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631D8));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x8631C4));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B8204u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8201u); } /* indirect call */
    }

loc_004B8204: ;
    PUSH32(esp, edi);
    ecx = esi + 0x88;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8210u); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B8210: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631DC));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x8631C4));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B8223u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8220u); } /* indirect call */
    }

loc_004B8223: ;
    PUSH32(esp, edi);
    ecx = esi + 0x8C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B822Fu); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B822F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631E0));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x8631C4));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B8242u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B823Fu); } /* indirect call */
    }

loc_004B8242: ;
    PUSH32(esp, edi);
    ecx = esi + 0x90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B824Eu); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B824E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631E4));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x8631C4));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B8261u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B825Eu); } /* indirect call */
    }

loc_004B8261: ;
    PUSH32(esp, edi);
    ecx = esi + 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B826Du); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B826D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631E8));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x8631C4));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B8280u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B827Du); } /* indirect call */
    }

loc_004B8280: ;
    PUSH32(esp, edi);
    ecx = esi + 0x98;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B828Cu); RECOMP_ABI_CALL(0x004B6F0Eu, sub_004B6F0E); /* call 0x004B6F0E */

loc_004B828C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863218));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863214));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B829Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B829Cu); } /* indirect call */
    }

loc_004B829F: ;
    PUSH32(esp, edi);
    ecx = esi + 0x9C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B82ABu); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B82AB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x86321C));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863214));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B82BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B82BBu); } /* indirect call */
    }

loc_004B82BE: ;
    PUSH32(esp, edi);
    ecx = esi + 0xA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B82CAu); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B82CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863204));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863200));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B82DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B82DAu); } /* indirect call */
    }

loc_004B82DD: ;
    PUSH32(esp, edi);
    ecx = esi + 0xA4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B82E9u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B82E9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863208));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863200));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B82FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B82F9u); } /* indirect call */
    }

loc_004B82FC: ;
    PUSH32(esp, edi);
    ecx = esi + 0xA8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8308u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B8308: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x86320C));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863200));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B831Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8318u); } /* indirect call */
    }

loc_004B831B: ;
    PUSH32(esp, edi);
    ecx = esi + 0xAC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8327u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B8327: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863210));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(0x863200));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004B833Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8337u); } /* indirect call */
    }

loc_004B833A: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8343u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004B8343: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B8348
 * Original: 0x004B8348 - 0x004B83C6 (126 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8348(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B8348: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x2C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_004B837E; /* jbe: below or equal (unsigned <=) */

loc_004B8357: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004B8360u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B8360: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8369u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8366u); } /* indirect call */
    }

loc_004B8369: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x004B8373u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B8373: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B83BD; /* je: equal / zero */

loc_004B8379: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B8357; /* jb: below (unsigned <) */

loc_004B837E: ;
    PUSH32(esp, 0x004B8383u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B8383: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x004B838Fu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B838F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B83A3; /* je: equal / zero */

loc_004B8396: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = eax;
    PUSH32(esp, 0x004B83A1u); RECOMP_ABI_CALL(0x004B6627u, sub_004B6627); /* call 0x004B6627 */

loc_004B83A1: ;
    goto loc_004B83A5;

loc_004B83A3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B83A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B83ABu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B83AB: ;
    ecx = eax;
    PUSH32(esp, 0x004B83B2u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B83B2: ;
    edi = eax;
    PUSH32(esp, edi);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004B83BDu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B83BD: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B83C6
 * Original: 0x004B83C6 - 0x004B8413 (77 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B83C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B83C6: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x2C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_004B8409; /* jbe: below or equal (unsigned <=) */

loc_004B83D6: ;
    PUSH32(esp, ebp);
    ebp = ecx + 0x20;
    PUSH32(esp, esi);

loc_004B83DB: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x004B83E3u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B83E3: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B83ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B83E9u); } /* indirect call */
    }

loc_004B83EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0x004B83F6u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004B83F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B8403; /* je: equal / zero */

loc_004B83FC: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B83DB; /* jb: below (unsigned <) */

loc_004B8401: ;
    goto loc_004B8407;

loc_004B8403: ;
    MEM32(esp + 0x10) = esi;

loc_004B8407: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_004B8409: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B8413
 * Original: 0x004B8413 - 0x004B84D4 (193 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B8413(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8413: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8421u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B8421: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004B8428u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8425u); } /* indirect call */
    }

loc_004B8428: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B84D0; /* je: equal / zero */

loc_004B8430: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004B843Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8437u); } /* indirect call */
    }

loc_004B843A: ;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8441u); RECOMP_ABI_CALL(0x004DCA1Bu, sub_004DCA1B); /* call 0x004DCA1B */

loc_004B8441: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004B844Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8448u); } /* indirect call */
    }

loc_004B844B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ebx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B8456: ;
    ecx = MEM32(edx + 0x863310);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004B8464; /* jge: greater or equal (signed >=) */

loc_004B8460: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B847C; /* jne: not equal / not zero */

loc_004B8464: ;
    esi = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + esi * 4 + -88) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004B847C; /* je: equal / zero */

loc_004B8472: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B847A; /* je: equal / zero */

loc_004B8476: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004B847C; /* jle: less or equal (signed <=) */

loc_004B847A: ;
    edi = ecx;

loc_004B847C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x50 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B8456; /* jb: below (unsigned <) */

loc_004B8484: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004B848Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B848Bu); } /* indirect call */
    }

loc_004B848E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004B84A0; /* je: equal / zero */

loc_004B8495: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B849D; /* je: equal / zero */

loc_004B8499: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004B84A0; /* jle: less or equal (signed <=) */

loc_004B849D: ;
    MEM32(ebp + 8) = edi;

loc_004B84A0: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B84BB; /* jne: not equal / not zero */

loc_004B84A6: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0xA4);
    MEM8(eax + 0xC9) = 1;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B84BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B84B8u); } /* indirect call */
    }

loc_004B84BB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -88;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004B84CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B84CAu); } /* indirect call */
    }

loc_004B84CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004B84D0: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B84D4
 * Original: 0x004B84D4 - 0x004B8532 (94 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B84D4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B84D4: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004B84DCu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004B84DC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004B84E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B84E0u); } /* indirect call */
    }

loc_004B84E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B852E; /* je: equal / zero */

loc_004B84E7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004B84EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B84ECu); } /* indirect call */
    }

loc_004B84EF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004B84F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B84F3u); } /* indirect call */
    }

loc_004B84F6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B850E; /* jne: not equal / not zero */

loc_004B84FD: ;
    ecx = MEM32(edi + 0xA8);
    MEM8(edi + 0xC8) = LO8(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B850Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B850Bu); } /* indirect call */
    }

loc_004B850E: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004B8519u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8516u); } /* indirect call */
    }

loc_004B8519: ;
    edx = MEM32(edi);
    PUSH32(esp, esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) eax = esi; /* cmovg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x863360);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004B852Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B852Au); } /* indirect call */
    }

loc_004B852D: ;
    POP32(esp, esi);

loc_004B852E: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B8532
 * Original: 0x004B8532 - 0x004B859B (105 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8532(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B8532: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B8540u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B8540: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004B854Cu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B854C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B855E; /* je: equal / zero */

loc_004B8553: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004B855Cu); RECOMP_ABI_CALL(0x004B6F89u, sub_004B6F89); /* call 0x004B6F89 */

loc_004B855C: ;
    goto loc_004B8560;

loc_004B855E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B8560: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B8566u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B8566: ;
    ecx = eax;
    PUSH32(esp, 0x004B856Du); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B856D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004B8592; /* jbe: below or equal (unsigned <=) */

loc_004B8575: ;
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax + 8;

loc_004B857C: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x004B8584u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B8584: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x004B858Cu); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B858C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B857C; /* jb: below (unsigned <) */

loc_004B8591: ;
    POP32(esp, ebp);

loc_004B8592: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004B859B
 * Original: 0x004B859B - 0x004B85CB (48 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B859B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B859B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x004B85A8u); RECOMP_ABI_CALL(0x004B83C6u, sub_004B83C6); /* call 0x004B83C6 */

loc_004B85A8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B85C6; /* je: equal / zero */

loc_004B85AE: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = edi;
    PUSH32(esp, 0x004B85B9u); RECOMP_ABI_CALL(0x004B66D4u, sub_004B66D4); /* call 0x004B66D4 */

loc_004B85B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B85C6; /* jne: not equal / not zero */

loc_004B85BD: ;
    PUSH32(esp, edi);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004B85C6u); RECOMP_ABI_CALL(0x004DBA5Au, sub_004DBA5A); /* call 0x004DBA5A */

loc_004B85C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B85CB
 * Original: 0x004B85CB - 0x004B862C (97 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B85CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B85CB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B85F2; /* jbe: below or equal (unsigned <=) */

loc_004B85D9: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x20;

loc_004B85DD: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x004B85E5u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B85E5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004B85ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B85E9u); } /* indirect call */
    }

loc_004B85EC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B85DD; /* jb: below (unsigned <) */

loc_004B85F1: ;
    POP32(esp, ebp);

loc_004B85F2: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0xC4) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0xC);
    ecx = eax + 8;
    eax = MEM32(ecx);
    edi = esi + 0xC0;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004B861Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8619u); } /* indirect call */
    }

loc_004B861C: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004B8624u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B8624: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B862C
 * Original: 0x004B862C - 0x004B8631 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B862C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B862C: ;
    g_seh_ebp = ebp; sub_004B83C6(); return; /* tail jmp 0x004B83C6 */

}

/**
 * sub_004B8631
 * Original: 0x004B8631 - 0x004B864D (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8631(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8631: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B8639u); RECOMP_ABI_CALL(0x004B704Au, sub_004B704A); /* call 0x004B704A */

loc_004B8639: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B8647; /* je: equal / zero */

loc_004B8640: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B8646u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B8646: ;
    POP32(esp, ecx);

loc_004B8647: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B864D
 * Original: 0x004B864D - 0x004B8669 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B864D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B864D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B8655u); RECOMP_ABI_CALL(0x004B717Fu, sub_004B717F); /* call 0x004B717F */

loc_004B8655: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B8663; /* je: equal / zero */

loc_004B865C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B8662u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B8662: ;
    POP32(esp, ecx);

loc_004B8663: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B8669
 * Original: 0x004B8669 - 0x004B8685 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8669(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8669: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B8671u); RECOMP_ABI_CALL(0x004B782Eu, sub_004B782E); /* call 0x004B782E */

loc_004B8671: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B867F; /* je: equal / zero */

loc_004B8678: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B867Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B867E: ;
    POP32(esp, ecx);

loc_004B867F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B8685
 * Original: 0x004B8685 - 0x004B86A1 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8685(void)
{

loc_004B8685: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B868Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B868D: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004B869Bu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004B869B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B86A6
 * Original: 0x004B86A6 - 0x004B86C2 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B86A6(void)
{

loc_004B86A6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B86AEu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B86AE: ;
    PUSH32(esp, 0xA);
    ecx = esi + 8;
    PUSH32(esp, 0x004B86B8u); RECOMP_ABI_CALL(0x004B8685u, sub_004B8685); /* call 0x004B8685 */

loc_004B86B8: ;
    MEM32(esi) = 0x8648F8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B86C2
 * Original: 0x004B86C2 - 0x004B86DB (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B86C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B86C2: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x8648F8;
    PUSH32(esp, 0x004B86D3u); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004B86D3: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004B86DB
 * Original: 0x004B86DB - 0x004B86F7 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B86DB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B86DB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B86E3u); RECOMP_ABI_CALL(0x004B86C2u, sub_004B86C2); /* call 0x004B86C2 */

loc_004B86E3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B86F1; /* je: equal / zero */

loc_004B86EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B86F0u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B86F0: ;
    POP32(esp, ecx);

loc_004B86F1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B86F7
 * Original: 0x004B86F7 - 0x004B87B1 (186 bytes, 75 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B86F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B86F7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    POP32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF4); PUSH32(esp, 0x004B870Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8704u); } /* indirect call */
    }

loc_004B870A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B87A8; /* jne: not equal / not zero */

loc_004B8712: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x104); PUSH32(esp, 0x004B871Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8716u); } /* indirect call */
    }

loc_004B871C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B87A8; /* jne: not equal / not zero */

loc_004B8724: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x004B872Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8728u); } /* indirect call */
    }

loc_004B872E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B87A3; /* jne: not equal / not zero */

loc_004B8732: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x004B873Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8736u); } /* indirect call */
    }

loc_004B873C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B87A3; /* jne: not equal / not zero */

loc_004B8740: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x110); PUSH32(esp, 0x004B874Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8744u); } /* indirect call */
    }

loc_004B874A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B87A3; /* jne: not equal / not zero */

loc_004B874E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x114); PUSH32(esp, 0x004B8758u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8752u); } /* indirect call */
    }

loc_004B8758: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8760; /* je: equal / zero */

loc_004B875C: ;
    PUSH32(esp, 2);
    goto loc_004B87A0;

loc_004B8760: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xE8); PUSH32(esp, 0x004B876Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8764u); } /* indirect call */
    }

loc_004B876A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8772; /* je: equal / zero */

loc_004B876E: ;
    PUSH32(esp, 3);
    goto loc_004B87A0;

loc_004B8772: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004B8779u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8776u); } /* indirect call */
    }

loc_004B8779: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B8793; /* jne: not equal / not zero */

loc_004B877D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x004B8784u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8781u); } /* indirect call */
    }

loc_004B8784: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B8793; /* jne: not equal / not zero */

loc_004B8788: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B878Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B878Cu); } /* indirect call */
    }

loc_004B878F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B87AA; /* je: equal / zero */

loc_004B8793: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B879Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8797u); } /* indirect call */
    }

loc_004B879A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B87AA; /* jne: not equal / not zero */

loc_004B879E: ;
    PUSH32(esp, 4);

loc_004B87A0: ;
    POP32(esp, edi);
    goto loc_004B87AA;

loc_004B87A3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004B87AA;

loc_004B87A8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B87AA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B87B1
 * Original: 0x004B87B1 - 0x004B87D7 (38 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B87B1(void)
{

loc_004B87B1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B87B9u); RECOMP_ABI_CALL(0x004BE285u, sub_004BE285); /* call 0x004BE285 */

loc_004B87B9: ;
    MEM32(esi) = 0x864900;
    PUSH32(esp, 0x004B87C4u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_004B87C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 8;
    PUSH32(esp, 0x004B87D1u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_004B87D1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B87D7
 * Original: 0x004B87D7 - 0x004B87F0 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B87D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B87D7: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x864900;
    PUSH32(esp, 0x004B87E8u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_004B87E8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004BE297(); return; /* tail jmp 0x004BE297 */

}

/**
 * sub_004B8800
 * Original: 0x004B8800 - 0x004B881C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8800: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B8808u); RECOMP_ABI_CALL(0x004B87D7u, sub_004B87D7); /* call 0x004B87D7 */

loc_004B8808: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B8816; /* je: equal / zero */

loc_004B880F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B8815u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B8815: ;
    POP32(esp, ecx);

loc_004B8816: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B881C
 * Original: 0x004B881C - 0x004B898C (368 bytes, 136 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B881C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B881C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    ebx = MEM32(esi + 0x84);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(ebp + -8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8844u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B8844: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8850u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B8850: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8862; /* je: equal / zero */

loc_004B8857: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8860u); RECOMP_ABI_CALL(0x004AE892u, sub_004AE892); /* call 0x004AE892 */

loc_004B8860: ;
    goto loc_004B8864;

loc_004B8862: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B8864: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B886Au); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B886A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8871u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B8871: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edi = eax;
    MEM32(ebp + -16) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_004B88AF; /* jbe: below or equal (unsigned <=) */

loc_004B887E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = esi;

loc_004B8884: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + -12);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B888Fu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B888F: ;
    ecx = MEM32(ebp + -8);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004B889Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8897u); } /* indirect call */
    }

loc_004B889A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B88A7; /* je: equal / zero */

loc_004B889E: ;
    PUSH32(esp, esi);
    ecx = edi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B88A7u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004B88A7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B8884; /* jb: below (unsigned <) */

loc_004B88AF: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8983; /* je: equal / zero */

loc_004B88B9: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004B8983; /* je: equal / zero */

loc_004B88C7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B8983; /* jbe: below or equal (unsigned <=) */

loc_004B88DA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004B88DD: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B88E5u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B88E5: ;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B88EEu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004B88EE: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B88F9u); RECOMP_ABI_CALL(0x004B86F7u, sub_004B86F7); /* call 0x004B86F7 */

loc_004B88F9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    esi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004B8953; /* je: equal / zero */

loc_004B8902: ;
    eax = esi + -1;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B890Du); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004B890D: ;
    PUSH32(esp, eax);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8916u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004B8916: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8921u); RECOMP_ABI_CALL(0x004B86F7u, sub_004B86F7); /* call 0x004B86F7 */

loc_004B8921: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004B8945; /* ja: above (unsigned >) */

loc_004B8926: ;
    if (CMP_NE(_fa, _fb)) goto loc_004B8953; /* jne: not equal / not zero */

loc_004B8928: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8930u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B892Du); } /* indirect call */
    }

loc_004B8930: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8939u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8936u); } /* indirect call */
    }

loc_004B8939: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B893Fu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_004B893F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_004B8953; /* jle: less or equal (signed <=) */

loc_004B8945: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8950u); RECOMP_ABI_CALL(0x004DB8DCu, sub_004DB8DC); /* call 0x004DB8DC */

loc_004B8950: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004B8902; /* jne: not equal / not zero */

loc_004B8953: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B895Eu); RECOMP_ABI_CALL(0x004DB8DCu, sub_004DB8DC); /* call 0x004DB8DC */

loc_004B895E: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004B88DD; /* jb: below (unsigned <) */

loc_004B8968: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8974; /* je: equal / zero */

loc_004B896F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8974u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B8974: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8980; /* je: equal / zero */

loc_004B897B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8980u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004B8980: ;
    edi = MEM32(ebp + -16);

loc_004B8983: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B898C
 * Original: 0x004B898C - 0x004B8995 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B898C(void)
{

loc_004B898C: ;
    eax = ecx;
    MEM32(eax) = 0x864910;
    esp += 4; return; /* ret */

}

/**
 * sub_004B8995
 * Original: 0x004B8995 - 0x004B899C (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8995(void)
{

loc_004B8995: ;
    MEM32(ecx) = 0x864910;
    esp += 4; return; /* ret */

}

/**
 * sub_004B899C
 * Original: 0x004B899C - 0x004B89B9 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B899C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B899C: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864910;
    if (TEST_Z(_fa, _fb)) goto loc_004B89B3; /* je: equal / zero */

loc_004B89AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B89B2u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004B89B2: ;
    POP32(esp, ecx);

loc_004B89B3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B89B9
 * Original: 0x004B89B9 - 0x004B89D5 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B89B9(void)
{

loc_004B89B9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B89C1u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B89C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004B89CFu); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004B89CF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B89DA
 * Original: 0x004B89DA - 0x004B89F6 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B89DA(void)
{

loc_004B89DA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B89E2u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B89E2: ;
    PUSH32(esp, 4);
    ecx = esi + 8;
    PUSH32(esp, 0x004B89ECu); RECOMP_ABI_CALL(0x004B89B9u, sub_004B89B9); /* call 0x004B89B9 */

loc_004B89EC: ;
    MEM32(esi) = 0x86491C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B89F6
 * Original: 0x004B89F6 - 0x004B8A0F (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B89F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B89F6: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x86491C;
    PUSH32(esp, 0x004B8A07u); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004B8A07: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004B8A0F
 * Original: 0x004B8A0F - 0x004B8A4B (60 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8A0F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8A0F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B8A17u); RECOMP_ABI_CALL(0x004B89F6u, sub_004B89F6); /* call 0x004B89F6 */

loc_004B8A17: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B8A25; /* je: equal / zero */

loc_004B8A1E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B8A24u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B8A24: ;
    POP32(esp, ecx);

loc_004B8A25: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B8A4B
 * Original: 0x004B8A4B - 0x004B8A51 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8A4B(void)
{

loc_004B8A4B: ;
    eax = 0x4E20;
    esp += 4; return; /* ret */

}

/**
 * sub_004B8A5A
 * Original: 0x004B8A5A - 0x004B8A85 (43 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8A5A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8A5A: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x15), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004B8A76; /* jne: not equal / not zero */

loc_004B8A66: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8A76; /* je: equal / zero */

loc_004B8A6C: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8A76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8A73u); } /* indirect call */
    }

loc_004B8A76: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004B8A81u); RECOMP_ABI_CALL(0x004BE3D9u, sub_004BE3D9); /* call 0x004BE3D9 */

loc_004B8A81: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B8A85
 * Original: 0x004B8A85 - 0x004B8AB8 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8A85(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8A85: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8AB2; /* je: equal / zero */

loc_004B8A91: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF95u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xFFFFFF95u (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B8AAD; /* je: equal / zero */

loc_004B8A9A: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8AA5; /* je: equal / zero */

loc_004B8AA1: ;
    PUSH32(esp, 0);
    goto loc_004B8AAF;

loc_004B8AA5: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B8AA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8AA5u); } /* indirect call */
    }

loc_004B8AA7: ;
    MEM8(esi + 0x24) = 0;
    goto loc_004B8AB2;

loc_004B8AAD: ;
    PUSH32(esp, 2);

loc_004B8AAF: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8AB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8AAFu); } /* indirect call */
    }

loc_004B8AB2: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B8AB8
 * Original: 0x004B8AB8 - 0x004B8AE3 (43 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8AB8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8AB8: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x15), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004B8AD4; /* jne: not equal / not zero */

loc_004B8AC4: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8AD4; /* je: equal / zero */

loc_004B8ACA: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8AD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8AD1u); } /* indirect call */
    }

loc_004B8AD4: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004B8ADFu); RECOMP_ABI_CALL(0x004BE3D9u, sub_004BE3D9); /* call 0x004BE3D9 */

loc_004B8ADF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B8AE3
 * Original: 0x004B8AE3 - 0x004B8B12 (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8AE3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8AE3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8B0C; /* je: equal / zero */

loc_004B8AEF: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF95u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xFFFFFF95u (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B8B07; /* je: equal / zero */

loc_004B8AF8: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8B03; /* je: equal / zero */

loc_004B8AFF: ;
    PUSH32(esp, 0);
    goto loc_004B8B09;

loc_004B8B03: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B8B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8B03u); } /* indirect call */
    }

loc_004B8B05: ;
    goto loc_004B8B0C;

loc_004B8B07: ;
    PUSH32(esp, 2);

loc_004B8B09: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8B0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8B09u); } /* indirect call */
    }

loc_004B8B0C: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B8B12
 * Original: 0x004B8B12 - 0x004B8B47 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8B12(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8B12: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8B41; /* je: equal / zero */

loc_004B8B1E: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8B3D; /* je: equal / zero */

loc_004B8B29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74696D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74696D65 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B8B39; /* je: equal / zero */

loc_004B8B32: ;
    PUSH32(esp, 0);

loc_004B8B34: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8B37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8B34u); } /* indirect call */
    }

loc_004B8B37: ;
    goto loc_004B8B41;

loc_004B8B39: ;
    PUSH32(esp, 2);
    goto loc_004B8B34;

loc_004B8B3D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B8B41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8B3Fu); } /* indirect call */
    }

loc_004B8B41: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B8B47
 * Original: 0x004B8B47 - 0x004B8B72 (43 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8B47(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8B47: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x15), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004B8B63; /* jne: not equal / not zero */

loc_004B8B53: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8B63; /* je: equal / zero */

loc_004B8B59: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8B63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8B60u); } /* indirect call */
    }

loc_004B8B63: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004B8B6Eu); RECOMP_ABI_CALL(0x004BE3D9u, sub_004BE3D9); /* call 0x004BE3D9 */

loc_004B8B6E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B8B72
 * Original: 0x004B8B72 - 0x004B8BA1 (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8B72(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8B72: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8B9B; /* je: equal / zero */

loc_004B8B7E: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF95u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xFFFFFF95u (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B8B96; /* je: equal / zero */

loc_004B8B87: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8B92; /* je: equal / zero */

loc_004B8B8E: ;
    PUSH32(esp, 0);
    goto loc_004B8B98;

loc_004B8B92: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B8B94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8B92u); } /* indirect call */
    }

loc_004B8B94: ;
    goto loc_004B8B9B;

loc_004B8B96: ;
    PUSH32(esp, 2);

loc_004B8B98: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8B9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8B98u); } /* indirect call */
    }

loc_004B8B9B: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B8BA1
 * Original: 0x004B8BA1 - 0x004B8BD6 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8BA1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8BA1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8BD0; /* je: equal / zero */

loc_004B8BAD: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8BCC; /* je: equal / zero */

loc_004B8BB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74696D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74696D65 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B8BC8; /* je: equal / zero */

loc_004B8BC1: ;
    PUSH32(esp, 0);

loc_004B8BC3: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8BC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8BC3u); } /* indirect call */
    }

loc_004B8BC6: ;
    goto loc_004B8BD0;

loc_004B8BC8: ;
    PUSH32(esp, 2);
    goto loc_004B8BC3;

loc_004B8BCC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B8BD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8BCEu); } /* indirect call */
    }

loc_004B8BD0: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B8BD6
 * Original: 0x004B8BD6 - 0x004B8C01 (43 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8BD6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8BD6: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x15), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004B8BF2; /* jne: not equal / not zero */

loc_004B8BE2: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8BF2; /* je: equal / zero */

loc_004B8BE8: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8BF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8BEFu); } /* indirect call */
    }

loc_004B8BF2: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004B8BFDu); RECOMP_ABI_CALL(0x004BE3D9u, sub_004BE3D9); /* call 0x004BE3D9 */

loc_004B8BFD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B8C01
 * Original: 0x004B8C01 - 0x004B8C30 (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8C01(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8C01: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8C2A; /* je: equal / zero */

loc_004B8C0D: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF95u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xFFFFFF95u (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B8C25; /* je: equal / zero */

loc_004B8C16: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8C21; /* je: equal / zero */

loc_004B8C1D: ;
    PUSH32(esp, 0);
    goto loc_004B8C27;

loc_004B8C21: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B8C23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8C21u); } /* indirect call */
    }

loc_004B8C23: ;
    goto loc_004B8C2A;

loc_004B8C25: ;
    PUSH32(esp, 2);

loc_004B8C27: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8C2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8C27u); } /* indirect call */
    }

loc_004B8C2A: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B8C30
 * Original: 0x004B8C30 - 0x004B8C65 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8C30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8C5F; /* je: equal / zero */

loc_004B8C3C: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8C5B; /* je: equal / zero */

loc_004B8C47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74696D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74696D65 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B8C57; /* je: equal / zero */

loc_004B8C50: ;
    PUSH32(esp, 0);

loc_004B8C52: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8C55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8C52u); } /* indirect call */
    }

loc_004B8C55: ;
    goto loc_004B8C5F;

loc_004B8C57: ;
    PUSH32(esp, 2);
    goto loc_004B8C52;

loc_004B8C5B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B8C5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8C5Du); } /* indirect call */
    }

loc_004B8C5F: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B8C65
 * Original: 0x004B8C65 - 0x004B8C90 (43 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8C65(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8C65: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x15), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004B8C81; /* jne: not equal / not zero */

loc_004B8C71: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8C81; /* je: equal / zero */

loc_004B8C77: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8C81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8C7Eu); } /* indirect call */
    }

loc_004B8C81: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004B8C8Cu); RECOMP_ABI_CALL(0x004BE3D9u, sub_004BE3D9); /* call 0x004BE3D9 */

loc_004B8C8C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B8C90
 * Original: 0x004B8C90 - 0x004B8CCA (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8C90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8CC4; /* je: equal / zero */

loc_004B8C9C: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF95u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xFFFFFF95u (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B8CBF; /* je: equal / zero */

loc_004B8CA5: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xFFFFFFFBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8CBB; /* je: equal / zero */

loc_004B8CAC: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8CB7; /* je: equal / zero */

loc_004B8CB3: ;
    PUSH32(esp, 0);
    goto loc_004B8CC1;

loc_004B8CB7: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B8CB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8CB7u); } /* indirect call */
    }

loc_004B8CB9: ;
    goto loc_004B8CC4;

loc_004B8CBB: ;
    PUSH32(esp, 3);
    goto loc_004B8CC1;

loc_004B8CBF: ;
    PUSH32(esp, 2);

loc_004B8CC1: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8CC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8CC1u); } /* indirect call */
    }

loc_004B8CC4: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B8CCA
 * Original: 0x004B8CCA - 0x004B8D01 (55 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8CCA(void)
{

loc_004B8CCA: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x14));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x67616D65);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x004B8CE7u); RECOMP_ABI_CALL(0x004BAC94u, sub_004BAC94); /* call 0x004BAC94 */

loc_004B8CE7: ;
    MEM32(esi) = 0x864994;
    MEM32(esi + 8) = 0x864964;
    MEM32(esi + 0xC) = 0x864948;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004B8D01
 * Original: 0x004B8D01 - 0x004B8D05 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8D01(void)
{

loc_004B8D01: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_004B8D05
 * Original: 0x004B8D05 - 0x004B8D09 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8D05(void)
{

loc_004B8D05: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_004B8D09
 * Original: 0x004B8D09 - 0x004B8D14 (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8D09(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8D09: ;
    SET_LO8(eax, MEM8(ecx + 8));
    SET_LO8(eax, LO8(eax) & 0xDF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 8) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_004B8D14
 * Original: 0x004B8D14 - 0x004B8D19 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8D14(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8D14: ;
    MEM8(ecx + 8) = MEM8(ecx + 8) & 0xCF;
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_004B8D19
 * Original: 0x004B8D19 - 0x004B8D22 (9 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8D19(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8D19: ;
    SET_LO8(eax, MEM8(ecx + 8));
    { uint32_t _sv=(uint32_t)(LO8(eax)), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        SET_LO8(eax, _sv >> _sc);
        _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_004B8D22
 * Original: 0x004B8D22 - 0x004B8D3B (25 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8D22(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B8D22: ;
    MEM32(ecx) = 0x864994;
    MEM32(ecx + 8) = 0x864964;
    MEM32(ecx + 0xC) = 0x864948;
    g_seh_ebp = ebp; sub_004BAB9F(); return; /* tail jmp 0x004BAB9F */

}

/**
 * sub_004B8D3B
 * Original: 0x004B8D3B - 0x004B8D71 (54 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8D3B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8D3B: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B8D43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8D40u); } /* indirect call */
    }

loc_004B8D43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8D58; /* je: equal / zero */

loc_004B8D47: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(0x8D7C54));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B8D56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8D53u); } /* indirect call */
    }

loc_004B8D56: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004B8D58: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B8D5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8D5Cu); } /* indirect call */
    }

loc_004B8D5E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x128); PUSH32(esp, 0x004B8D68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8D62u); } /* indirect call */
    }

loc_004B8D68: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B8D6Eu); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_004B8D6E: ;
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B8D71
 * Original: 0x004B8D71 - 0x004B8D79 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8D71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B8D71: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B8DB4(); return; /* tail jmp 0x004B8DB4 */

}

/**
 * sub_004B8D79
 * Original: 0x004B8D79 - 0x004B8D81 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8D79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B8D79: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B8D01(); return; /* tail jmp 0x004B8D01 */

}

/**
 * sub_004B8D81
 * Original: 0x004B8D81 - 0x004B8D89 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8D81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B8D81: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B8D05(); return; /* tail jmp 0x004B8D05 */

}

/**
 * sub_004B8D89
 * Original: 0x004B8D89 - 0x004B8D91 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8D89(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B8D89: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B8DB4(); return; /* tail jmp 0x004B8DB4 */

}

/**
 * sub_004B8D91
 * Original: 0x004B8D91 - 0x004B8D95 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8D91(void)
{

loc_004B8D91: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_004B8D95
 * Original: 0x004B8D95 - 0x004B8D9D (8 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8D95(void)
{

loc_004B8D95: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_004B8D9D
 * Original: 0x004B8D9D - 0x004B8DB4 (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8D9D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8D9D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = esi + 0x18;
    PUSH32(esp, 0x004B8DACu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004B8DAC: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xF3;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B8DB4
 * Original: 0x004B8DB4 - 0x004B8DD0 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8DB4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8DB4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B8DBCu); RECOMP_ABI_CALL(0x004B8D22u, sub_004B8D22); /* call 0x004B8D22 */

loc_004B8DBC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B8DCA; /* je: equal / zero */

loc_004B8DC3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B8DC9u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B8DC9: ;
    POP32(esp, ecx);

loc_004B8DCA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B8DD0
 * Original: 0x004B8DD0 - 0x004B8E6F (159 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B8DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax + 0x14);
    ecx = ecx & 0xFFFFF1FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xAC);
    eax = MEM32(esi + 0x2C);
    ecx = eax + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B8E13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8E10u); } /* indirect call */
    }

loc_004B8E13: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x864944);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004B8E2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8E27u); } /* indirect call */
    }

loc_004B8E2A: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8E34u); RECOMP_ABI_CALL(0x005DF030u, sub_005DF030); /* call 0x005DF030 */

loc_004B8E34: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B8E40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8E3Eu); } /* indirect call */
    }

loc_004B8E40: ;
    edx = 0x4B8A85;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B8E51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8E4Eu); } /* indirect call */
    }

loc_004B8E51: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8E58u); RECOMP_ABI_CALL(0x005DF960u, sub_005DF960); /* call 0x005DF960 */

loc_004B8E58: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8E63u); RECOMP_ABI_CALL(0x004BE3DEu, sub_004BE3DE); /* call 0x004BE3DE */

loc_004B8E63: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B8E6Du); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004B8E6D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B8E6F
 * Original: 0x004B8E6F - 0x004B8ED7 (104 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8E6F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8E6F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8ED1; /* je: equal / zero */

loc_004B8E7E: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8ECA; /* je: equal / zero */

loc_004B8E89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74696D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74696D65 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8EC6; /* je: equal / zero */

loc_004B8E90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x75757372) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x75757372 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8E9F; /* je: equal / zero */

loc_004B8E97: ;
    PUSH32(esp, ebx);

loc_004B8E98: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8E9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8E9Au); } /* indirect call */
    }

loc_004B8E9D: ;
    goto loc_004B8ED1;

loc_004B8E9F: ;
    eax = MEM32(esi + 0x2C);
    ecx = eax + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B8EA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8EA7u); } /* indirect call */
    }

loc_004B8EA9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004B8EB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8EADu); } /* indirect call */
    }

loc_004B8EB0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8EBF; /* je: equal / zero */

loc_004B8EB4: ;
    ecx = esi;
    PUSH32(esp, 0x004B8EBBu); RECOMP_ABI_CALL(0x004B8DD0u, sub_004B8DD0); /* call 0x004B8DD0 */

loc_004B8EBB: ;
    SET_LO8(ebx, 1);
    goto loc_004B8ED1;

loc_004B8EBF: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 5);
    goto loc_004B8E98;

loc_004B8EC6: ;
    PUSH32(esp, 2);
    goto loc_004B8E98;

loc_004B8ECA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B8ECEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8ECCu); } /* indirect call */
    }

loc_004B8ECE: ;
    MEM8(esi + 0x24) = LO8(ebx);

loc_004B8ED1: ;
    MEM8(esi + 0xC) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004B8ED7
 * Original: 0x004B8ED7 - 0x004B8F94 (189 bytes, 71 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8ED7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8ED7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B8EE6u); RECOMP_ABI_CALL(0x004BE303u, sub_004BE303); /* call 0x004BE303 */

loc_004B8EE6: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi) = 0x8649A8;
    MEM32(esi + 8) = 0x864998;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ebx = MEM32(eax + 0x2C);
    ecx = edi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B8F0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8F0Du); } /* indirect call */
    }

loc_004B8F0F: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    eax = eax & 0xF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B8F74; /* jne: not equal / not zero */

loc_004B8F20: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    edi = MEM32(eax + 0xAC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B8F5C; /* je: equal / zero */

loc_004B8F39: ;
    eax = 0x4B8AE3;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8F48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8F45u); } /* indirect call */
    }

loc_004B8F48: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B8F4Fu); RECOMP_ABI_CALL(0x005DF800u, sub_005DF800); /* call 0x005DF800 */

loc_004B8F4F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B8F5Au); RECOMP_ABI_CALL(0x004BE3DEu, sub_004BE3DE); /* call 0x004BE3DE */

loc_004B8F5A: ;
    goto loc_004B8F8C;

loc_004B8F5C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B8F65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8F62u); } /* indirect call */
    }

loc_004B8F65: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B8F6Cu); RECOMP_ABI_CALL(0x005DF800u, sub_005DF800); /* call 0x005DF800 */

loc_004B8F6C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0xC) = LO8(ebx);
    goto loc_004B8F8C;

loc_004B8F74: ;
    eax = 0x4B8B12;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x004B8F84u); RECOMP_ABI_CALL(0x004B0DE8u, sub_004B0DE8); /* call 0x004B0DE8 */

loc_004B8F84: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B8F8Cu); RECOMP_ABI_CALL(0x004BE3F3u, sub_004BE3F3); /* call 0x004BE3F3 */

loc_004B8F8C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B8F94
 * Original: 0x004B8F94 - 0x004B8FBD (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8F94(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8F94: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8649A8;
    MEM32(esi + 8) = 0x864998;
    PUSH32(esp, 0x004B8FA9u); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004B8FA9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B8FB7; /* je: equal / zero */

loc_004B8FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B8FB6u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B8FB6: ;
    POP32(esp, ecx);

loc_004B8FB7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B8FBD
 * Original: 0x004B8FBD - 0x004B8FC5 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8FBD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B8FBD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B8F94(); return; /* tail jmp 0x004B8F94 */

}

/**
 * sub_004B8FC5
 * Original: 0x004B8FC5 - 0x004B9067 (162 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8FC5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B8FC5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B8FD4u); RECOMP_ABI_CALL(0x004BE303u, sub_004BE303); /* call 0x004BE303 */

loc_004B8FD4: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi) = 0x8649BC;
    MEM32(esi + 8) = 0x8649AC;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ebx = MEM32(eax + 0x2C);
    ecx = edi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B8FFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B8FFBu); } /* indirect call */
    }

loc_004B8FFD: ;
    ecx = MEM32(edi + 0x14);
    ecx = ecx & 0xF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B9045; /* jne: not equal / not zero */

loc_004B900E: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x30);
    edi = MEM32(ecx + 0xAC);
    edx = 0x4B8B72;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B9031u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B902Eu); } /* indirect call */
    }

loc_004B9031: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B9038u); RECOMP_ABI_CALL(0x005DF800u, sub_005DF800); /* call 0x005DF800 */

loc_004B9038: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B9043u); RECOMP_ABI_CALL(0x004BE3DEu, sub_004BE3DE); /* call 0x004BE3DE */

loc_004B9043: ;
    goto loc_004B905F;

loc_004B9045: ;
    eax = 0x4B8BA1;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x004B9057u); RECOMP_ABI_CALL(0x004B0E25u, sub_004B0E25); /* call 0x004B0E25 */

loc_004B9057: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B905Fu); RECOMP_ABI_CALL(0x004BE3F3u, sub_004BE3F3); /* call 0x004BE3F3 */

loc_004B905F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B9067
 * Original: 0x004B9067 - 0x004B9090 (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9067(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9067: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8649BC;
    MEM32(esi + 8) = 0x8649AC;
    PUSH32(esp, 0x004B907Cu); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004B907C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B908A; /* je: equal / zero */

loc_004B9083: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B9089u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B9089: ;
    POP32(esp, ecx);

loc_004B908A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9090
 * Original: 0x004B9090 - 0x004B9098 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B9090: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B9067(); return; /* tail jmp 0x004B9067 */

}

/**
 * sub_004B9098
 * Original: 0x004B9098 - 0x004B9162 (202 bytes, 76 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9098(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9098: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004B90A7u); RECOMP_ABI_CALL(0x004BE303u, sub_004BE303); /* call 0x004BE303 */

loc_004B90A7: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi) = 0x8649D0;
    MEM32(esi + 8) = 0x8649C0;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ebx = MEM32(eax + 0x2C);
    ecx = edi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B90D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B90CEu); } /* indirect call */
    }

loc_004B90D0: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    eax = eax & 0xF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B9135; /* jne: not equal / not zero */

loc_004B90E1: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    edi = MEM32(eax + 0xAC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B911D; /* je: equal / zero */

loc_004B90FA: ;
    eax = 0x4B8C01;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9109u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9106u); } /* indirect call */
    }

loc_004B9109: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B9110u); RECOMP_ABI_CALL(0x005DF800u, sub_005DF800); /* call 0x005DF800 */

loc_004B9110: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B911Bu); RECOMP_ABI_CALL(0x004BE3DEu, sub_004BE3DE); /* call 0x004BE3DE */

loc_004B911B: ;
    goto loc_004B915A;

loc_004B911D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9126u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9123u); } /* indirect call */
    }

loc_004B9126: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B912Du); RECOMP_ABI_CALL(0x005DF800u, sub_005DF800); /* call 0x005DF800 */

loc_004B912D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0xC) = LO8(ebx);
    goto loc_004B915A;

loc_004B9135: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x14), 0 (8-bit) */
    eax = 0x4B8C30;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_004B914A; /* je: equal / zero */

loc_004B9146: ;
    PUSH32(esp, 5);
    goto loc_004B914C;

loc_004B914A: ;
    PUSH32(esp, 2);

loc_004B914C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B9152u); RECOMP_ABI_CALL(0x004B0E25u, sub_004B0E25); /* call 0x004B0E25 */

loc_004B9152: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B915Au); RECOMP_ABI_CALL(0x004BE3F3u, sub_004BE3F3); /* call 0x004BE3F3 */

loc_004B915A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B9162
 * Original: 0x004B9162 - 0x004B918B (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9162(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9162: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8649D0;
    MEM32(esi + 8) = 0x8649C0;
    PUSH32(esp, 0x004B9177u); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004B9177: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B9185; /* je: equal / zero */

loc_004B917E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B9184u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B9184: ;
    POP32(esp, ecx);

loc_004B9185: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B918B
 * Original: 0x004B918B - 0x004B9206 (123 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B918B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B918B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B9162(); return; /* tail jmp 0x004B9162 */

    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9200; /* je: equal / zero */

loc_004B91A2: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B91C0; /* je: equal / zero */

loc_004B91AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74696D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74696D65 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B91BC; /* je: equal / zero */

loc_004B91B6: ;
    PUSH32(esp, ebx);

loc_004B91B7: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B91BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B91B7u); } /* indirect call */
    }

loc_004B91BA: ;
    goto loc_004B9200;

loc_004B91BC: ;
    PUSH32(esp, 2);
    goto loc_004B91B7;

loc_004B91C0: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xAC);
    eax = MEM32(esi + 0x10);
    ecx = eax + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B91DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B91DAu); } /* indirect call */
    }

loc_004B91DC: ;
    edx = 0x4B8C90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B91EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B91E8u); } /* indirect call */
    }

loc_004B91EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B91F2u); RECOMP_ABI_CALL(0x005E08B0u, sub_005E08B0); /* call 0x005E08B0 */

loc_004B91F2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B91FDu); RECOMP_ABI_CALL(0x004BE3DEu, sub_004BE3DE); /* call 0x004BE3DE */

loc_004B91FD: ;
    SET_LO8(ebx, 1);
    POP32(esp, edi);

loc_004B9200: ;
    MEM8(esi + 0xC) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004B9206
 * Original: 0x004B9206 - 0x004B929D (151 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9206(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B9206: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9225; /* je: equal / zero */

loc_004B9214: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9225; /* je: equal / zero */

loc_004B9218: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9221u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B921Eu); } /* indirect call */
    }

loc_004B9221: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004B9298;

loc_004B9225: ;
    PUSH32(esp, esi);
    esi = edi + -12;
    SET_LO8(eax, MEM8(esi + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x004B9238u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B9238: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004B9244u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B9244: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9256; /* je: equal / zero */

loc_004B924B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004B9254u); RECOMP_ABI_CALL(0x004B8ED7u, sub_004B8ED7); /* call 0x004B8ED7 */

loc_004B9254: ;
    goto loc_004B9258;

loc_004B9256: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B9258: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B925Eu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B925E: ;
    ecx = eax;
    PUSH32(esp, 0x004B9265u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B9265: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E20);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B928Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9289u); } /* indirect call */
    }

loc_004B928C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B9294u); RECOMP_ABI_CALL(0x004B8D9Du, sub_004B8D9D); /* call 0x004B8D9D */

loc_004B9294: ;
    eax = MEM32(edi + 0xC);
    POP32(esp, esi);

loc_004B9298: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B929D
 * Original: 0x004B929D - 0x004B9334 (151 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B929D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B929D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B92BC; /* je: equal / zero */

loc_004B92AB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B92BC; /* je: equal / zero */

loc_004B92AF: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B92B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B92B5u); } /* indirect call */
    }

loc_004B92B8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004B932F;

loc_004B92BC: ;
    PUSH32(esp, esi);
    esi = edi + -8;
    SET_LO8(eax, MEM8(esi + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x004B92CFu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B92CF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004B92DBu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B92DB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B92ED; /* je: equal / zero */

loc_004B92E2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004B92EBu); RECOMP_ABI_CALL(0x004B8FC5u, sub_004B8FC5); /* call 0x004B8FC5 */

loc_004B92EB: ;
    goto loc_004B92EF;

loc_004B92ED: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B92EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B92F5u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B92F5: ;
    ecx = eax;
    PUSH32(esp, 0x004B92FCu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B92FC: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E20);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B9323u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9320u); } /* indirect call */
    }

loc_004B9323: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B932Bu); RECOMP_ABI_CALL(0x004B8D9Du, sub_004B8D9D); /* call 0x004B8D9D */

loc_004B932B: ;
    eax = MEM32(edi + 0x10);
    POP32(esp, esi);

loc_004B932F: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9334
 * Original: 0x004B9334 - 0x004B93CE (154 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9334(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B9334: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B9352; /* je: equal / zero */

loc_004B933F: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B9352; /* je: equal / zero */

loc_004B9347: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B934Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B934Bu); } /* indirect call */
    }

loc_004B934E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004B93C9;

loc_004B9352: ;
    PUSH32(esp, esi);
    esi = edi + -8;
    SET_LO8(eax, MEM8(esi + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x004B9365u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B9365: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004B936Fu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B936F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B9388; /* je: equal / zero */

loc_004B9376: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B9386u); RECOMP_ABI_CALL(0x004B9098u, sub_004B9098); /* call 0x004B9098 */

loc_004B9386: ;
    goto loc_004B938A;

loc_004B9388: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B938A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B9390u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B9390: ;
    ecx = eax;
    PUSH32(esp, 0x004B9397u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B9397: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E20);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B93BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B93BAu); } /* indirect call */
    }

loc_004B93BD: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B93C5u); RECOMP_ABI_CALL(0x004B8D9Du, sub_004B8D9D); /* call 0x004B8D9D */

loc_004B93C5: ;
    eax = MEM32(edi + 0x10);
    POP32(esp, esi);

loc_004B93C9: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B93CE
 * Original: 0x004B93CE - 0x004B93D6 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B93CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B93CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B8D91(); return; /* tail jmp 0x004B8D91 */

}

/**
 * sub_004B93D6
 * Original: 0x004B93D6 - 0x004B93DE (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B93D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B93D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B8D95(); return; /* tail jmp 0x004B8D95 */

}

/**
 * sub_004B93DE
 * Original: 0x004B93DE - 0x004B94A4 (198 bytes, 78 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B93DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B93DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B93EFu); RECOMP_ABI_CALL(0x004BE303u, sub_004BE303); /* call 0x004BE303 */

loc_004B93EF: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi) = 0x8649E4;
    MEM32(esi + 8) = 0x8649D4;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = edi;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x2C);
    ecx = edi + 8;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B941Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B941Bu); } /* indirect call */
    }

loc_004B941D: ;
    ebx = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004B9426u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9423u); } /* indirect call */
    }

loc_004B9426: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B945F; /* jne: not equal / not zero */

loc_004B942A: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004B9431u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B942Eu); } /* indirect call */
    }

loc_004B9431: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9456; /* je: equal / zero */

loc_004B9435: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004B943Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9439u); } /* indirect call */
    }

loc_004B943C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9456; /* je: equal / zero */

loc_004B9440: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004B9447u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9444u); } /* indirect call */
    }

loc_004B9447: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B945F; /* jne: not equal / not zero */

loc_004B944B: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B9452u); RECOMP_ABI_CALL(0x004ABB98u, sub_004ABB98); /* call 0x004ABB98 */

loc_004B9452: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B945F; /* jne: not equal / not zero */

loc_004B9456: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B945Du); RECOMP_ABI_CALL(0x004B8DD0u, sub_004B8DD0); /* call 0x004B8DD0 */

loc_004B945D: ;
    goto loc_004B949B;

loc_004B945F: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004B9466u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9463u); } /* indirect call */
    }

loc_004B9466: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B947E; /* jne: not equal / not zero */

loc_004B946A: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B947Eu); RECOMP_ABI_CALL(0x004AEDDDu, sub_004AEDDD); /* call 0x004AEDDD */

loc_004B947E: ;
    ecx = MEM32(ebp + 8);
    MEM8(edi + 0x15) = MEM8(edi + 0x15) & 0xF0;
    _fa = (uint32_t)(MEM8(edi + 0x15)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = 0x4B8E6F;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B9493u); RECOMP_ABI_CALL(0x004B0D81u, sub_004B0D81); /* call 0x004B0D81 */

loc_004B9493: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B949Bu); RECOMP_ABI_CALL(0x004BE3F3u, sub_004BE3F3); /* call 0x004BE3F3 */

loc_004B949B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B94A4
 * Original: 0x004B94A4 - 0x004B94CD (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B94A4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B94A4: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8649E4;
    MEM32(esi + 8) = 0x8649D4;
    PUSH32(esp, 0x004B94B9u); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004B94B9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B94C7; /* je: equal / zero */

loc_004B94C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B94C6u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B94C6: ;
    POP32(esp, ecx);

loc_004B94C7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B94CD
 * Original: 0x004B94CD - 0x004B94D5 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B94CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B94CD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B94A4(); return; /* tail jmp 0x004B94A4 */

}

/**
 * sub_004B94D5
 * Original: 0x004B94D5 - 0x004B9583 (174 bytes, 65 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B94D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B94D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B94E6u); RECOMP_ABI_CALL(0x004BE303u, sub_004BE303); /* call 0x004BE303 */

loc_004B94E6: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi) = 0x8649F8;
    MEM32(esi + 8) = 0x8649E8;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x2C);
    ecx = edi + 8;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B9511u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B950Fu); } /* indirect call */
    }

loc_004B9511: ;
    ebx = eax;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B951Cu); RECOMP_ABI_CALL(0x004ACEBEu, sub_004ACEBE); /* call 0x004ACEBE */

loc_004B951C: ;
    eax = MEM32(edi + 0x14);
    eax = eax & 0xF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B955F; /* jne: not equal / not zero */

loc_004B952B: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    edi = MEM32(eax + 0xAC);
    eax = 0x4B8C90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B954Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9548u); } /* indirect call */
    }

loc_004B954B: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B9552u); RECOMP_ABI_CALL(0x005E08B0u, sub_005E08B0); /* call 0x005E08B0 */

loc_004B9552: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B955Du); RECOMP_ABI_CALL(0x004BE3DEu, sub_004BE3DE); /* call 0x004BE3DE */

loc_004B955D: ;
    goto loc_004B957A;

loc_004B955F: ;
    ecx = MEM32(ebp + 8);
    eax = 0x4B9193;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B9572u); RECOMP_ABI_CALL(0x004B0E25u, sub_004B0E25); /* call 0x004B0E25 */

loc_004B9572: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B957Au); RECOMP_ABI_CALL(0x004BE3F3u, sub_004BE3F3); /* call 0x004BE3F3 */

loc_004B957A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B9583
 * Original: 0x004B9583 - 0x004B95AC (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9583(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9583: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8649F8;
    MEM32(esi + 8) = 0x8649E8;
    PUSH32(esp, 0x004B9598u); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004B9598: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B95A6; /* je: equal / zero */

loc_004B959F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B95A5u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B95A5: ;
    POP32(esp, ecx);

loc_004B95A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B95AC
 * Original: 0x004B95AC - 0x004B95B4 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B95AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B95AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B9583(); return; /* tail jmp 0x004B9583 */

}

/**
 * sub_004B95B4
 * Original: 0x004B95B4 - 0x004B964B (151 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B95B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B95B4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B95D3; /* je: equal / zero */

loc_004B95C2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B95D3; /* je: equal / zero */

loc_004B95C6: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B95CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B95CCu); } /* indirect call */
    }

loc_004B95CF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004B9646;

loc_004B95D3: ;
    PUSH32(esp, esi);
    esi = edi + -12;
    SET_LO8(eax, MEM8(esi + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x004B95E6u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B95E6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x004B95F2u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B95F2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9604; /* je: equal / zero */

loc_004B95F9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004B9602u); RECOMP_ABI_CALL(0x004B93DEu, sub_004B93DE); /* call 0x004B93DE */

loc_004B9602: ;
    goto loc_004B9606;

loc_004B9604: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B9606: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B960Cu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B960C: ;
    ecx = eax;
    PUSH32(esp, 0x004B9613u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B9613: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E20);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B963Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9637u); } /* indirect call */
    }

loc_004B963A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B9642u); RECOMP_ABI_CALL(0x004B8D9Du, sub_004B8D9D); /* call 0x004B8D9D */

loc_004B9642: ;
    eax = MEM32(edi + 0xC);
    POP32(esp, esi);

loc_004B9646: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B964B
 * Original: 0x004B964B - 0x004B96E2 (151 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B964B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B964B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B966A; /* je: equal / zero */

loc_004B9659: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B966A; /* je: equal / zero */

loc_004B965D: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9666u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9663u); } /* indirect call */
    }

loc_004B9666: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004B96DD;

loc_004B966A: ;
    PUSH32(esp, esi);
    esi = edi + -8;
    SET_LO8(eax, MEM8(esi + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x004B967Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B967D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004B9689u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004B9689: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B969B; /* je: equal / zero */

loc_004B9690: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004B9699u); RECOMP_ABI_CALL(0x004B94D5u, sub_004B94D5); /* call 0x004B94D5 */

loc_004B9699: ;
    goto loc_004B969D;

loc_004B969B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B969D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004B96A3u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004B96A3: ;
    ecx = eax;
    PUSH32(esp, 0x004B96AAu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004B96AA: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E20);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B96D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B96CEu); } /* indirect call */
    }

loc_004B96D1: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B96D9u); RECOMP_ABI_CALL(0x004B8D9Du, sub_004B8D9D); /* call 0x004B8D9D */

loc_004B96D9: ;
    eax = MEM32(edi + 0x10);
    POP32(esp, esi);

loc_004B96DD: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B96E2
 * Original: 0x004B96E2 - 0x004B96FE (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B96E2(void)
{

loc_004B96E2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B96EAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004B96EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004B96F8u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004B96F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9703
 * Original: 0x004B9703 - 0x004B971F (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9703(void)
{

loc_004B9703: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B970Bu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004B970B: ;
    PUSH32(esp, 4);
    ecx = esi + 8;
    PUSH32(esp, 0x004B9715u); RECOMP_ABI_CALL(0x004B96E2u, sub_004B96E2); /* call 0x004B96E2 */

loc_004B9715: ;
    MEM32(esi) = 0x8649FC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B971F
 * Original: 0x004B971F - 0x004B9738 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B971F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B971F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x8649FC;
    PUSH32(esp, 0x004B9730u); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004B9730: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004B9738
 * Original: 0x004B9738 - 0x004B975E (38 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9738(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9738: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B9740u); RECOMP_ABI_CALL(0x004B971Fu, sub_004B971F); /* call 0x004B971F */

loc_004B9740: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B974E; /* je: equal / zero */

loc_004B9747: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B974Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B974D: ;
    POP32(esp, ecx);

loc_004B974E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B975E
 * Original: 0x004B975E - 0x004B9770 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B975E(void)
{

loc_004B975E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B9766u); RECOMP_ABI_CALL(0x004BE475u, sub_004BE475); /* call 0x004BE475 */

loc_004B9766: ;
    MEM32(esi) = 0x864A14;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B9770
 * Original: 0x004B9770 - 0x004B9776 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9770(void)
{

loc_004B9770: ;
    eax = 0x66726E64;
    esp += 4; return; /* ret */

}

/**
 * sub_004B9781
 * Original: 0x004B9781 - 0x004B97A3 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9781(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9781: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864A14;
    PUSH32(esp, 0x004B978Fu); RECOMP_ABI_CALL(0x004BE487u, sub_004BE487); /* call 0x004BE487 */

loc_004B978F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B979D; /* je: equal / zero */

loc_004B9796: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B979Cu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B979C: ;
    POP32(esp, ecx);

loc_004B979D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B97A3
 * Original: 0x004B97A3 - 0x004B9807 (100 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B97A3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B97A3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = edi + 8;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B97B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B97B0u); } /* indirect call */
    }

loc_004B97B2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B97B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B97B6u); } /* indirect call */
    }

loc_004B97B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_004B97C5; /* je: equal / zero */

loc_004B97BF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    goto loc_004B97F6;

loc_004B97C5: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x2C);
    eax = MEM32(edi + 0x14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1C) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B97E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B97E0u); } /* indirect call */
    }

loc_004B97E3: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004B97EBu); RECOMP_ABI_CALL(0x004B0A18u, sub_004B0A18); /* call 0x004B0A18 */

loc_004B97EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_004B97FF; /* jne: not equal / not zero */

loc_004B97F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;

loc_004B97F6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B97FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B97F8u); } /* indirect call */
    }

loc_004B97FB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004B9802;

loc_004B97FF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004B9802: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9807
 * Original: 0x004B9807 - 0x004B9819 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9807(void)
{

loc_004B9807: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B980Fu); RECOMP_ABI_CALL(0x004BE475u, sub_004BE475); /* call 0x004BE475 */

loc_004B980F: ;
    MEM32(esi) = 0x864A20;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B9819
 * Original: 0x004B9819 - 0x004B981F (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9819(void)
{

loc_004B9819: ;
    eax = 0x766F6970;
    esp += 4; return; /* ret */

}

/**
 * sub_004B982A
 * Original: 0x004B982A - 0x004B984C (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B982A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B982A: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864A20;
    PUSH32(esp, 0x004B9838u); RECOMP_ABI_CALL(0x004BE487u, sub_004BE487); /* call 0x004BE487 */

loc_004B9838: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B9846; /* je: equal / zero */

loc_004B983F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B9845u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B9845: ;
    POP32(esp, ecx);

loc_004B9846: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B984C
 * Original: 0x004B984C - 0x004B997A (302 bytes, 122 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B984C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B984C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(0x90E7AC);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B9864u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9862u); } /* indirect call */
    }

loc_004B9864: ;
    ebx = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004B986Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B986Au); } /* indirect call */
    }

loc_004B986D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631B4));
    ebp = eax;
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 0x34);
    edi = MEM32(eax + 0x2C);
    eax = MEM32(eax + 8);
    PUSH32(esp, MEM32(0x86319C));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004B988Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B988Bu); } /* indirect call */
    }

loc_004B988E: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B9899u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9896u); } /* indirect call */
    }

loc_004B9899: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B98A6; /* je: equal / zero */

loc_004B989D: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004B989F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    goto loc_004B9961;

loc_004B98A6: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x67616D65);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004B98B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B98AFu); } /* indirect call */
    }

loc_004B98B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B9906; /* jne: not equal / not zero */

loc_004B98B6: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x766F6970);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004B98C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B98BFu); } /* indirect call */
    }

loc_004B98C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B9906; /* jne: not equal / not zero */

loc_004B98C6: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x004B98CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B98CBu); } /* indirect call */
    }

loc_004B98CE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x004B98D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B98D2u); } /* indirect call */
    }

loc_004B98D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B989D; /* jne: not equal / not zero */

loc_004B98DD: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x004B98E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B98E2u); } /* indirect call */
    }

loc_004B98E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B9906; /* jne: not equal / not zero */

loc_004B98E9: ;
    ebp = 0x766F6970;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x004B98F6u); RECOMP_ABI_CALL(0x004B07D5u, sub_004B07D5); /* call 0x004B07D5 */

loc_004B98F6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B9906; /* jne: not equal / not zero */

loc_004B98FA: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x004B9902u); RECOMP_ABI_CALL(0x004B07F2u, sub_004B07F2); /* call 0x004B07F2 */

loc_004B9902: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B990A; /* je: equal / zero */

loc_004B9906: ;
    PUSH32(esp, 0);
    goto loc_004B995F;

loc_004B990A: ;
    ecx = MEM32(esp + 0x10);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B993D; /* je: equal / zero */

loc_004B9914: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004B9919u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9916u); } /* indirect call */
    }

loc_004B9919: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B989F; /* je: equal / zero */

loc_004B991E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004B9932; /* jne: not equal / not zero */

loc_004B9923: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004B992Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9927u); } /* indirect call */
    }

loc_004B992A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004B989F; /* je: equal / zero */

loc_004B9932: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004B9935: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_004B993D: ;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + 0x14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    if (((0x1C) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0x1C) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1C) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B9952u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B994Fu); } /* indirect call */
    }

loc_004B9952: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004B995Au); RECOMP_ABI_CALL(0x004B0A18u, sub_004B0A18); /* call 0x004B0A18 */

loc_004B995A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004B9932; /* jne: not equal / not zero */

loc_004B995E: ;
    PUSH32(esp, ebp);

loc_004B995F: ;
    PUSH32(esp, 1);

loc_004B9961: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B9968u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9965u); } /* indirect call */
    }

loc_004B9968: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004B9935;

    PUSH32(esp, 1);
    PUSH32(esp, 0x004B9973u); RECOMP_ABI_CALL(0x004ACBA0u, sub_004ACBA0); /* call 0x004ACBA0 */

loc_004B9973: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_004B997A
 * Original: 0x004B997A - 0x004B998C (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B997A(void)
{

loc_004B997A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B9982u); RECOMP_ABI_CALL(0x004BE475u, sub_004BE475); /* call 0x004BE475 */

loc_004B9982: ;
    MEM32(esi) = 0x864A2C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B998C
 * Original: 0x004B998C - 0x004B9992 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B998C(void)
{

loc_004B998C: ;
    eax = 0x67616D65;
    esp += 4; return; /* ret */

}

/**
 * sub_004B999D
 * Original: 0x004B999D - 0x004B99BF (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B999D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B999D: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864A2C;
    PUSH32(esp, 0x004B99ABu); RECOMP_ABI_CALL(0x004BE487u, sub_004BE487); /* call 0x004BE487 */

loc_004B99AB: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B99B9; /* je: equal / zero */

loc_004B99B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B99B8u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B99B8: ;
    POP32(esp, ecx);

loc_004B99B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B99BF
 * Original: 0x004B99BF - 0x004B9B23 (356 bytes, 143 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004B99BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B99BF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 8;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B99D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B99CFu); } /* indirect call */
    }

loc_004B99D1: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004B99DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B99D8u); } /* indirect call */
    }

loc_004B99DB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B99F1; /* je: equal / zero */

loc_004B99DF: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B99EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B99E7u); } /* indirect call */
    }

loc_004B99EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004B9B1D;

loc_004B99F1: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x2C);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x67616D65);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004B9A0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9A09u); } /* indirect call */
    }

loc_004B9A0C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_004B9A22; /* je: equal / zero */

loc_004B9A12: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);

loc_004B9A16: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004B9A1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9A18u); } /* indirect call */
    }

loc_004B9A1B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004B9B1C;

loc_004B9A22: ;
    eax = MEM32(esi + 0x14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1C) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004B9A31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9A2Eu); } /* indirect call */
    }

loc_004B9A31: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B9A39u); RECOMP_ABI_CALL(0x004B0A18u, sub_004B0A18); /* call 0x004B0A18 */

loc_004B9A39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B9A46; /* jne: not equal / not zero */

loc_004B9A3D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    goto loc_004B9B12;

loc_004B9A46: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B9A51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9A4Eu); } /* indirect call */
    }

loc_004B9A51: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9B19; /* je: equal / zero */

loc_004B9A59: ;
    esi = MEM32(0x90E7AC);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004B9A66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9A63u); } /* indirect call */
    }

loc_004B9A66: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x8631B0));
    ebx = eax;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 8);
    PUSH32(esp, MEM32(0x86319C));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004B9A82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9A7Fu); } /* indirect call */
    }

loc_004B9A82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9AED; /* je: equal / zero */

loc_004B9A86: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004B9A8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9A8Au); } /* indirect call */
    }

loc_004B9A8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004B9AED; /* je: equal / zero */

loc_004B9A95: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B9A9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9A99u); } /* indirect call */
    }

loc_004B9A9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9AB1; /* je: equal / zero */

loc_004B9AA0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x8D7C58));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B9AAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9AACu); } /* indirect call */
    }

loc_004B9AAF: ;
    goto loc_004B9AC8;

loc_004B9AB1: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004B9ABDu); RECOMP_ABI_CALL(0x004ACBA0u, sub_004ACBA0); /* call 0x004ACBA0 */

loc_004B9ABD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9AED; /* je: equal / zero */

loc_004B9AC1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x004B9AC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9AC5u); } /* indirect call */
    }

loc_004B9AC8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B9AED; /* jbe: below or equal (unsigned <=) */

loc_004B9ACE: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x004B9AD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9AD2u); } /* indirect call */
    }

loc_004B9AD5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004B9ADCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9AD9u); } /* indirect call */
    }

loc_004B9ADC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004B9AE4; /* jbe: below or equal (unsigned <=) */

loc_004B9AE0: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004B9AE8;

loc_004B9AE4: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;

loc_004B9AE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004B9B0E; /* ja: above (unsigned >) */

loc_004B9AED: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x004B9AF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9AF1u); } /* indirect call */
    }

loc_004B9AF4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9B19; /* je: equal / zero */

loc_004B9AFA: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004B9B01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9AFEu); } /* indirect call */
    }

loc_004B9B01: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004B9B0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9B07u); } /* indirect call */
    }

loc_004B9B0A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004B9B19; /* jne: not equal / not zero */

loc_004B9B0E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_004B9B12: ;
    ecx = edi;
    goto loc_004B9A16;

loc_004B9B19: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004B9B1C: ;
    POP32(esp, ebx);

loc_004B9B1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9B23
 * Original: 0x004B9B23 - 0x004B9B45 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9B23(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9B23: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9B36; /* je: equal / zero */

loc_004B9B2C: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9B36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9B33u); } /* indirect call */
    }

loc_004B9B36: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004B9B41u); RECOMP_ABI_CALL(0x004BE3D9u, sub_004BE3D9); /* call 0x004BE3D9 */

loc_004B9B41: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9B45
 * Original: 0x004B9B45 - 0x004B9B7E (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9B45(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9B45: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9B78; /* je: equal / zero */

loc_004B9B51: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9B70; /* je: equal / zero */

loc_004B9B5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74696D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74696D65 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B9B6C; /* je: equal / zero */

loc_004B9B65: ;
    PUSH32(esp, 0);

loc_004B9B67: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9B6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9B67u); } /* indirect call */
    }

loc_004B9B6A: ;
    goto loc_004B9B78;

loc_004B9B6C: ;
    PUSH32(esp, 2);
    goto loc_004B9B67;

loc_004B9B70: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B9B74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9B72u); } /* indirect call */
    }

loc_004B9B74: ;
    MEM8(esi + 0x24) = 0;

loc_004B9B78: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B9B7E
 * Original: 0x004B9B7E - 0x004B9BA0 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9B7E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9B7E: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9B91; /* je: equal / zero */

loc_004B9B87: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9B91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9B8Eu); } /* indirect call */
    }

loc_004B9B91: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004B9B9Cu); RECOMP_ABI_CALL(0x004BE3D9u, sub_004BE3D9); /* call 0x004BE3D9 */

loc_004B9B9C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9BA0
 * Original: 0x004B9BA0 - 0x004B9BD5 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9BA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9BCF; /* je: equal / zero */

loc_004B9BAC: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9BCB; /* je: equal / zero */

loc_004B9BB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74696D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74696D65 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B9BC7; /* je: equal / zero */

loc_004B9BC0: ;
    PUSH32(esp, 0);

loc_004B9BC2: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9BC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9BC2u); } /* indirect call */
    }

loc_004B9BC5: ;
    goto loc_004B9BCF;

loc_004B9BC7: ;
    PUSH32(esp, 2);
    goto loc_004B9BC2;

loc_004B9BCB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B9BCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9BCDu); } /* indirect call */
    }

loc_004B9BCF: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B9BD5
 * Original: 0x004B9BD5 - 0x004B9BF7 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9BD5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9BD5: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9BE8; /* je: equal / zero */

loc_004B9BDE: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9BE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9BE5u); } /* indirect call */
    }

loc_004B9BE8: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004B9BF3u); RECOMP_ABI_CALL(0x004BE3D9u, sub_004BE3D9); /* call 0x004BE3D9 */

loc_004B9BF3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9BF7
 * Original: 0x004B9BF7 - 0x004B9C2C (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9BF7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9BF7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9C26; /* je: equal / zero */

loc_004B9C03: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9C22; /* je: equal / zero */

loc_004B9C0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74696D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74696D65 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B9C1E; /* je: equal / zero */

loc_004B9C17: ;
    PUSH32(esp, 0);

loc_004B9C19: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9C1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9C19u); } /* indirect call */
    }

loc_004B9C1C: ;
    goto loc_004B9C26;

loc_004B9C1E: ;
    PUSH32(esp, 2);
    goto loc_004B9C19;

loc_004B9C22: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B9C26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9C24u); } /* indirect call */
    }

loc_004B9C26: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B9C2C
 * Original: 0x004B9C2C - 0x004B9C4E (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9C2C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9C2C: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9C3F; /* je: equal / zero */

loc_004B9C35: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9C3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9C3Cu); } /* indirect call */
    }

loc_004B9C3F: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004B9C4Au); RECOMP_ABI_CALL(0x004BE3D9u, sub_004BE3D9); /* call 0x004BE3D9 */

loc_004B9C4A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9C4E
 * Original: 0x004B9C4E - 0x004B9C83 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9C4E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9C4E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9C7D; /* je: equal / zero */

loc_004B9C5A: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9C79; /* je: equal / zero */

loc_004B9C65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74696D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74696D65 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B9C75; /* je: equal / zero */

loc_004B9C6E: ;
    PUSH32(esp, 0);

loc_004B9C70: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9C73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9C70u); } /* indirect call */
    }

loc_004B9C73: ;
    goto loc_004B9C7D;

loc_004B9C75: ;
    PUSH32(esp, 2);
    goto loc_004B9C70;

loc_004B9C79: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B9C7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9C7Bu); } /* indirect call */
    }

loc_004B9C7D: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B9C83
 * Original: 0x004B9C83 - 0x004B9CA5 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9C83(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9C83: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9C96; /* je: equal / zero */

loc_004B9C8C: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9C96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9C93u); } /* indirect call */
    }

loc_004B9C96: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004B9CA1u); RECOMP_ABI_CALL(0x004BE3D9u, sub_004BE3D9); /* call 0x004BE3D9 */

loc_004B9CA1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9CA5
 * Original: 0x004B9CA5 - 0x004B9CDF (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9CA5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9CA5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9CD9; /* je: equal / zero */

loc_004B9CB1: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF95u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xFFFFFF95u (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B9CD4; /* je: equal / zero */

loc_004B9CBA: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xFFFFFFFBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9CD0; /* je: equal / zero */

loc_004B9CC1: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9CCC; /* je: equal / zero */

loc_004B9CC8: ;
    PUSH32(esp, 0);
    goto loc_004B9CD6;

loc_004B9CCC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B9CCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9CCCu); } /* indirect call */
    }

loc_004B9CCE: ;
    goto loc_004B9CD9;

loc_004B9CD0: ;
    PUSH32(esp, 3);
    goto loc_004B9CD6;

loc_004B9CD4: ;
    PUSH32(esp, 2);

loc_004B9CD6: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9CD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9CD6u); } /* indirect call */
    }

loc_004B9CD9: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B9CDF
 * Original: 0x004B9CDF - 0x004B9D14 (53 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9CDF(void)
{

loc_004B9CDF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esp + 0x14));
    esi = ecx;
    PUSH32(esp, 0x766F6970);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x004B9CFAu); RECOMP_ABI_CALL(0x004BAC94u, sub_004BAC94); /* call 0x004BAC94 */

loc_004B9CFA: ;
    MEM32(esi) = 0x864A84;
    MEM32(esi + 8) = 0x864A54;
    MEM32(esi + 0xC) = 0x864A38;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B9D14
 * Original: 0x004B9D14 - 0x004B9D18 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9D14(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9D14: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_004B9D18
 * Original: 0x004B9D18 - 0x004B9D31 (25 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9D18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B9D18: ;
    MEM32(ecx) = 0x864A84;
    MEM32(ecx + 8) = 0x864A54;
    MEM32(ecx + 0xC) = 0x864A38;
    g_seh_ebp = ebp; sub_004BAB9F(); return; /* tail jmp 0x004BAB9F */

}

/**
 * sub_004B9D31
 * Original: 0x004B9D31 - 0x004B9D5D (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9D31(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9D31: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004B9D41;

    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004B9D41;

loc_004B9D41: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B9D49u); RECOMP_ABI_CALL(0x004B9D18u, sub_004B9D18); /* call 0x004B9D18 */

loc_004B9D49: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B9D57; /* je: equal / zero */

loc_004B9D50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B9D56u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B9D56: ;
    POP32(esp, ecx);

loc_004B9D57: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9D39
 * Original: 0x004B9D39 - 0x004B9D5D (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9D39(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9D39: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004B9D41;

loc_004B9D41: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B9D49u); RECOMP_ABI_CALL(0x004B9D18u, sub_004B9D18); /* call 0x004B9D18 */

loc_004B9D49: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B9D57; /* je: equal / zero */

loc_004B9D50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B9D56u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B9D56: ;
    POP32(esp, ecx);

loc_004B9D57: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9D41
 * Original: 0x004B9D41 - 0x004B9D5D (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9D41(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9D41: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004B9D49u); RECOMP_ABI_CALL(0x004B9D18u, sub_004B9D18); /* call 0x004B9D18 */

loc_004B9D49: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B9D57; /* je: equal / zero */

loc_004B9D50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B9D56u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B9D56: ;
    POP32(esp, ecx);

loc_004B9D57: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9D5D
 * Original: 0x004B9D5D - 0x004B9DAA (77 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9D5D(void)
{

loc_004B9D5D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004B9D69u); RECOMP_ABI_CALL(0x004BE303u, sub_004BE303); /* call 0x004BE303 */

loc_004B9D69: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x28) = eax;
    MEM32(esi) = 0x864A98;
    MEM32(esi + 8) = 0x864A88;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x2C);
    eax = 0x4B9B45;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x004B9D9Cu); RECOMP_ABI_CALL(0x004B0D81u, sub_004B0D81); /* call 0x004B0D81 */

loc_004B9D9C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B9DA4u); RECOMP_ABI_CALL(0x004BE3F3u, sub_004BE3F3); /* call 0x004BE3F3 */

loc_004B9DA4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B9DAA
 * Original: 0x004B9DAA - 0x004B9DD3 (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9DAA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9DAA: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864A98;
    MEM32(esi + 8) = 0x864A88;
    PUSH32(esp, 0x004B9DBFu); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004B9DBF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B9DCD; /* je: equal / zero */

loc_004B9DC6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B9DCCu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B9DCC: ;
    POP32(esp, ecx);

loc_004B9DCD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9DD3
 * Original: 0x004B9DD3 - 0x004B9DDB (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9DD3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B9DD3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B9DAA(); return; /* tail jmp 0x004B9DAA */

}

/**
 * sub_004B9DDB
 * Original: 0x004B9DDB - 0x004B9E28 (77 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9DDB(void)
{

loc_004B9DDB: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004B9DE7u); RECOMP_ABI_CALL(0x004BE303u, sub_004BE303); /* call 0x004BE303 */

loc_004B9DE7: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x28) = eax;
    MEM32(esi) = 0x864AAC;
    MEM32(esi + 8) = 0x864A9C;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x2C);
    eax = 0x4B9BA0;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x004B9E1Au); RECOMP_ABI_CALL(0x004B0DE8u, sub_004B0DE8); /* call 0x004B0DE8 */

loc_004B9E1A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B9E22u); RECOMP_ABI_CALL(0x004BE3F3u, sub_004BE3F3); /* call 0x004BE3F3 */

loc_004B9E22: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B9E28
 * Original: 0x004B9E28 - 0x004B9E51 (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9E28(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9E28: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864AAC;
    MEM32(esi + 8) = 0x864A9C;
    PUSH32(esp, 0x004B9E3Du); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004B9E3D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B9E4B; /* je: equal / zero */

loc_004B9E44: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B9E4Au); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B9E4A: ;
    POP32(esp, ecx);

loc_004B9E4B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9E51
 * Original: 0x004B9E51 - 0x004B9E59 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9E51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B9E51: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B9E28(); return; /* tail jmp 0x004B9E28 */

}

/**
 * sub_004B9E59
 * Original: 0x004B9E59 - 0x004B9EA8 (79 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9E59(void)
{

loc_004B9E59: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004B9E65u); RECOMP_ABI_CALL(0x004BE303u, sub_004BE303); /* call 0x004BE303 */

loc_004B9E65: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x28) = eax;
    MEM32(esi) = 0x864AC0;
    MEM32(esi + 8) = 0x864AB0;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x2C);
    eax = 0x4B9BF7;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x004B9E9Au); RECOMP_ABI_CALL(0x004B0E25u, sub_004B0E25); /* call 0x004B0E25 */

loc_004B9E9A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B9EA2u); RECOMP_ABI_CALL(0x004BE3F3u, sub_004BE3F3); /* call 0x004BE3F3 */

loc_004B9EA2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B9EA8
 * Original: 0x004B9EA8 - 0x004B9ED1 (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9EA8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9EA8: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864AC0;
    MEM32(esi + 8) = 0x864AB0;
    PUSH32(esp, 0x004B9EBDu); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004B9EBD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B9ECB; /* je: equal / zero */

loc_004B9EC4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B9ECAu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B9ECA: ;
    POP32(esp, ecx);

loc_004B9ECB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9ED1
 * Original: 0x004B9ED1 - 0x004B9ED9 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9ED1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B9ED1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B9EA8(); return; /* tail jmp 0x004B9EA8 */

}

/**
 * sub_004B9ED9
 * Original: 0x004B9ED9 - 0x004B9F34 (91 bytes, 31 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9ED9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B9ED9: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004B9EE5u); RECOMP_ABI_CALL(0x004BE303u, sub_004BE303); /* call 0x004BE303 */

loc_004B9EE5: ;
    eax = MEM32(esp + 0x10);
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM32(esi + 0x28) = eax;
    MEM32(esi) = 0x864AD4;
    MEM32(esi + 8) = 0x864AC4;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x2C);
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = 0x4B9C4E;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x004B9F26u); RECOMP_ABI_CALL(0x004B0E25u, sub_004B0E25); /* call 0x004B0E25 */

loc_004B9F26: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B9F2Eu); RECOMP_ABI_CALL(0x004BE3F3u, sub_004BE3F3); /* call 0x004BE3F3 */

loc_004B9F2E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B9F34
 * Original: 0x004B9F34 - 0x004B9F5D (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9F34(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004B9F34: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864AD4;
    MEM32(esi + 8) = 0x864AC4;
    PUSH32(esp, 0x004B9F49u); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004B9F49: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004B9F57; /* je: equal / zero */

loc_004B9F50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004B9F56u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004B9F56: ;
    POP32(esp, ecx);

loc_004B9F57: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9F5D
 * Original: 0x004B9F5D - 0x004B9FD8 (123 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9F5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B9F5D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004B9F34(); return; /* tail jmp 0x004B9F34 */

    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9FD2; /* je: equal / zero */

loc_004B9F74: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004B9F92; /* je: equal / zero */

loc_004B9F7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74696D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74696D65 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004B9F8E; /* je: equal / zero */

loc_004B9F88: ;
    PUSH32(esp, ebx);

loc_004B9F89: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9F8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9F89u); } /* indirect call */
    }

loc_004B9F8C: ;
    goto loc_004B9FD2;

loc_004B9F8E: ;
    PUSH32(esp, 2);
    goto loc_004B9F89;

loc_004B9F92: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xAC);
    eax = MEM32(esi + 0x10);
    ecx = eax + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004B9FAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9FACu); } /* indirect call */
    }

loc_004B9FAE: ;
    edx = 0x4B9CA5;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004B9FBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9FBAu); } /* indirect call */
    }

loc_004B9FBD: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004B9FC4u); RECOMP_ABI_CALL(0x005E08B0u, sub_005E08B0); /* call 0x005E08B0 */

loc_004B9FC4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004B9FCFu); RECOMP_ABI_CALL(0x004BE3DEu, sub_004BE3DE); /* call 0x004BE3DE */

loc_004B9FCF: ;
    SET_LO8(ebx, 1);
    POP32(esp, edi);

loc_004B9FD2: ;
    MEM8(esi + 0xC) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004B9FD8
 * Original: 0x004B9FD8 - 0x004BA06E (150 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9FD8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004B9FD8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B9FF6; /* je: equal / zero */

loc_004B9FE3: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004B9FF2; /* je: equal / zero */

loc_004B9FEB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004B9FF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004B9FEFu); } /* indirect call */
    }

loc_004B9FF2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004BA069;

loc_004B9FF6: ;
    PUSH32(esp, esi);
    esi = edi + -12;
    SET_LO8(eax, MEM8(esi + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x004BA009u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BA009: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004BA013u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BA013: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004BA028; /* je: equal / zero */

loc_004BA01A: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BA026u); RECOMP_ABI_CALL(0x004B9D5Du, sub_004B9D5D); /* call 0x004B9D5D */

loc_004BA026: ;
    goto loc_004BA02A;

loc_004BA028: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BA02A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BA030u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BA030: ;
    ecx = eax;
    PUSH32(esp, 0x004BA037u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BA037: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E20);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BA05Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA05Au); } /* indirect call */
    }

loc_004BA05D: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BA065u); RECOMP_ABI_CALL(0x004B8D9Du, sub_004B8D9D); /* call 0x004B8D9D */

loc_004BA065: ;
    eax = MEM32(edi + 0xC);
    POP32(esp, esi);

loc_004BA069: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA06E
 * Original: 0x004BA06E - 0x004BA105 (151 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA06E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004BA06E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA08D; /* je: equal / zero */

loc_004BA07C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA08D; /* je: equal / zero */

loc_004BA080: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BA089u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA086u); } /* indirect call */
    }

loc_004BA089: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004BA100;

loc_004BA08D: ;
    PUSH32(esp, esi);
    esi = edi + -12;
    SET_LO8(eax, MEM8(esi + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x004BA0A0u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BA0A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004BA0ACu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BA0AC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA0BE; /* je: equal / zero */

loc_004BA0B3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004BA0BCu); RECOMP_ABI_CALL(0x004B9DDBu, sub_004B9DDB); /* call 0x004B9DDB */

loc_004BA0BC: ;
    goto loc_004BA0C0;

loc_004BA0BE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BA0C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BA0C6u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BA0C6: ;
    ecx = eax;
    PUSH32(esp, 0x004BA0CDu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BA0CD: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E20);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BA0F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA0F1u); } /* indirect call */
    }

loc_004BA0F4: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BA0FCu); RECOMP_ABI_CALL(0x004B8D9Du, sub_004B8D9D); /* call 0x004B8D9D */

loc_004BA0FC: ;
    eax = MEM32(edi + 0xC);
    POP32(esp, esi);

loc_004BA100: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA105
 * Original: 0x004BA105 - 0x004BA19C (151 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA105(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004BA105: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA124; /* je: equal / zero */

loc_004BA113: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA124; /* je: equal / zero */

loc_004BA117: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BA120u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA11Du); } /* indirect call */
    }

loc_004BA120: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004BA197;

loc_004BA124: ;
    PUSH32(esp, esi);
    esi = edi + -8;
    SET_LO8(eax, MEM8(esi + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x004BA137u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BA137: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004BA143u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BA143: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA155; /* je: equal / zero */

loc_004BA14A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004BA153u); RECOMP_ABI_CALL(0x004B9E59u, sub_004B9E59); /* call 0x004B9E59 */

loc_004BA153: ;
    goto loc_004BA157;

loc_004BA155: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BA157: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BA15Du); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BA15D: ;
    ecx = eax;
    PUSH32(esp, 0x004BA164u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BA164: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E20);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BA18Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA188u); } /* indirect call */
    }

loc_004BA18B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BA193u); RECOMP_ABI_CALL(0x004B8D9Du, sub_004B8D9D); /* call 0x004B8D9D */

loc_004BA193: ;
    eax = MEM32(edi + 0x10);
    POP32(esp, esi);

loc_004BA197: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA19C
 * Original: 0x004BA19C - 0x004BA236 (154 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA19C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004BA19C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004BA1BA; /* je: equal / zero */

loc_004BA1A7: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004BA1BA; /* je: equal / zero */

loc_004BA1AF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BA1B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA1B3u); } /* indirect call */
    }

loc_004BA1B6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004BA231;

loc_004BA1BA: ;
    PUSH32(esp, esi);
    esi = edi + -8;
    SET_LO8(eax, MEM8(esi + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x004BA1CDu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BA1CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004BA1D7u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BA1D7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004BA1F0; /* je: equal / zero */

loc_004BA1DE: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BA1EEu); RECOMP_ABI_CALL(0x004B9ED9u, sub_004B9ED9); /* call 0x004B9ED9 */

loc_004BA1EE: ;
    goto loc_004BA1F2;

loc_004BA1F0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BA1F2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BA1F8u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BA1F8: ;
    ecx = eax;
    PUSH32(esp, 0x004BA1FFu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BA1FF: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E20);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BA225u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA222u); } /* indirect call */
    }

loc_004BA225: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BA22Du); RECOMP_ABI_CALL(0x004B8D9Du, sub_004B8D9D); /* call 0x004B8D9D */

loc_004BA22D: ;
    eax = MEM32(edi + 0x10);
    POP32(esp, esi);

loc_004BA231: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BA236
 * Original: 0x004BA236 - 0x004BA295 (95 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA236(void)
{

loc_004BA236: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004BA244u); RECOMP_ABI_CALL(0x004BE303u, sub_004BE303); /* call 0x004BE303 */

loc_004BA244: ;
    eax = MEM32(esp + 0x10);
    ecx = edi + 8;
    MEM32(esi) = 0x864AE8;
    MEM32(esi + 8) = 0x864AD8;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BA25Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA25Du); } /* indirect call */
    }

loc_004BA25F: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004BA268u); RECOMP_ABI_CALL(0x004ACEBEu, sub_004ACEBE); /* call 0x004ACEBE */

loc_004BA268: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x2C);
    eax = 0x4B9F65;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004BA286u); RECOMP_ABI_CALL(0x004B0E25u, sub_004B0E25); /* call 0x004B0E25 */

loc_004BA286: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BA28Eu); RECOMP_ABI_CALL(0x004BE3F3u, sub_004BE3F3); /* call 0x004BE3F3 */

loc_004BA28E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BA295
 * Original: 0x004BA295 - 0x004BA2BE (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA295(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA295: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864AE8;
    MEM32(esi + 8) = 0x864AD8;
    PUSH32(esp, 0x004BA2AAu); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004BA2AA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BA2B8; /* je: equal / zero */

loc_004BA2B1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BA2B7u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BA2B7: ;
    POP32(esp, ecx);

loc_004BA2B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA2BE
 * Original: 0x004BA2BE - 0x004BA2C6 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA2BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BA2BE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004BA295(); return; /* tail jmp 0x004BA295 */

}

/**
 * sub_004BA2C6
 * Original: 0x004BA2C6 - 0x004BA35D (151 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA2C6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004BA2C6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA2E5; /* je: equal / zero */

loc_004BA2D4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA2E5; /* je: equal / zero */

loc_004BA2D8: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BA2E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA2DEu); } /* indirect call */
    }

loc_004BA2E1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004BA358;

loc_004BA2E5: ;
    PUSH32(esp, esi);
    esi = edi + -8;
    SET_LO8(eax, MEM8(esi + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x004BA2F8u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BA2F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004BA304u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BA304: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA316; /* je: equal / zero */

loc_004BA30B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004BA314u); RECOMP_ABI_CALL(0x004BA236u, sub_004BA236); /* call 0x004BA236 */

loc_004BA314: ;
    goto loc_004BA318;

loc_004BA316: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BA318: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BA31Eu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BA31E: ;
    ecx = eax;
    PUSH32(esp, 0x004BA325u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BA325: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E20);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BA34Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA349u); } /* indirect call */
    }

loc_004BA34C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BA354u); RECOMP_ABI_CALL(0x004B8D9Du, sub_004B8D9D); /* call 0x004B8D9D */

loc_004BA354: ;
    eax = MEM32(edi + 0x10);
    POP32(esp, esi);

loc_004BA358: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA35D
 * Original: 0x004BA35D - 0x004BA3C4 (103 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA35D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA35D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA3BE; /* je: equal / zero */

loc_004BA369: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF95u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFF95u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA3B7; /* je: equal / zero */

loc_004BA372: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA3B3; /* je: equal / zero */

loc_004BA377: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA38E; /* je: equal / zero */

loc_004BA37C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004BA386; /* je: equal / zero */

loc_004BA382: ;
    PUSH32(esp, 0);
    goto loc_004BA3BB;

loc_004BA386: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BA388u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA386u); } /* indirect call */
    }

loc_004BA388: ;
    MEM8(esi + 0x24) = 0;
    goto loc_004BA3BE;

loc_004BA38E: ;
    eax = MEM32(esi + 0x10);
    ecx = eax + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BA398u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA396u); } /* indirect call */
    }

loc_004BA398: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x004BA3A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA39Cu); } /* indirect call */
    }

loc_004BA3A2: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004BA3AF; /* je: equal / zero */

loc_004BA3AB: ;
    PUSH32(esp, 4);
    goto loc_004BA3BB;

loc_004BA3AF: ;
    PUSH32(esp, 5);
    goto loc_004BA3BB;

loc_004BA3B3: ;
    PUSH32(esp, 3);
    goto loc_004BA3B9;

loc_004BA3B7: ;
    PUSH32(esp, 2);

loc_004BA3B9: ;
    eax = MEM32(ecx);

loc_004BA3BB: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BA3BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA3BBu); } /* indirect call */
    }

loc_004BA3BE: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BA3C4
 * Original: 0x004BA3C4 - 0x004BA3F1 (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA3C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA3C4: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x28)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x28), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA3E2; /* je: equal / zero */

loc_004BA3CD: ;
    PUSH32(esp, 0x004BA3D2u); RECOMP_ABI_CALL(0x00454720u, sub_00454720); /* call 0x00454720 */

loc_004BA3D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004BA3E2; /* jb: below (unsigned <) */

loc_004BA3D7: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BA3DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA3DCu); } /* indirect call */
    }

loc_004BA3DE: ;
    MEM8(esi + 4) = 0;

loc_004BA3E2: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x004BA3EDu); RECOMP_ABI_CALL(0x004BE37Fu, sub_004BE37F); /* call 0x004BE37F */

loc_004BA3ED: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA3F1
 * Original: 0x004BA3F1 - 0x004BA425 (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA3F1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA3F1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA41F; /* je: equal / zero */

loc_004BA400: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF95u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0xFFFFFF95u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA418; /* je: equal / zero */

loc_004BA407: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA410; /* je: equal / zero */

loc_004BA40D: ;
    PUSH32(esp, ebx);
    goto loc_004BA41A;

loc_004BA410: ;
    MEM8(esi + 0x30) = 1;
    SET_LO8(ebx, 1);
    goto loc_004BA41F;

loc_004BA418: ;
    PUSH32(esp, 2);

loc_004BA41A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BA41Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA41Cu); } /* indirect call */
    }

loc_004BA41F: ;
    MEM8(esi + 0xC) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004BA425
 * Original: 0x004BA425 - 0x004BA454 (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA425(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA425: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA44E; /* je: equal / zero */

loc_004BA431: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF95u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xFFFFFF95u (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004BA449; /* je: equal / zero */

loc_004BA43A: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA445; /* je: equal / zero */

loc_004BA441: ;
    PUSH32(esp, 0);
    goto loc_004BA44B;

loc_004BA445: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BA447u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA445u); } /* indirect call */
    }

loc_004BA447: ;
    goto loc_004BA44E;

loc_004BA449: ;
    PUSH32(esp, 2);

loc_004BA44B: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BA44Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA44Bu); } /* indirect call */
    }

loc_004BA44E: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BA454
 * Original: 0x004BA454 - 0x004BA483 (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA454(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA454: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA47D; /* je: equal / zero */

loc_004BA460: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF95u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xFFFFFF95u (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004BA478; /* je: equal / zero */

loc_004BA469: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA474; /* je: equal / zero */

loc_004BA470: ;
    PUSH32(esp, 0);
    goto loc_004BA47A;

loc_004BA474: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BA476u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA474u); } /* indirect call */
    }

loc_004BA476: ;
    goto loc_004BA47D;

loc_004BA478: ;
    PUSH32(esp, 2);

loc_004BA47A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BA47Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA47Au); } /* indirect call */
    }

loc_004BA47D: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BA483
 * Original: 0x004BA483 - 0x004BA4C4 (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA483(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA483: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA4BE; /* je: equal / zero */

loc_004BA48F: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF95u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xFFFFFF95u (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004BA4B9; /* je: equal / zero */

loc_004BA498: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xFFFFFFFBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA4AE; /* je: equal / zero */

loc_004BA49F: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA4AA; /* je: equal / zero */

loc_004BA4A6: ;
    PUSH32(esp, 0);
    goto loc_004BA4BB;

loc_004BA4AA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BA4ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA4AAu); } /* indirect call */
    }

loc_004BA4AC: ;
    goto loc_004BA4BE;

loc_004BA4AE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BA4B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA4B0u); } /* indirect call */
    }

loc_004BA4B3: ;
    MEM8(esi + 0x24) = 0;
    goto loc_004BA4BE;

loc_004BA4B9: ;
    PUSH32(esp, 2);

loc_004BA4BB: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BA4BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA4BBu); } /* indirect call */
    }

loc_004BA4BE: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004BA4C4
 * Original: 0x004BA4C4 - 0x004BA4F9 (53 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA4C4(void)
{

loc_004BA4C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esp + 0x14));
    esi = ecx;
    PUSH32(esp, 0x66726E64);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x004BA4DFu); RECOMP_ABI_CALL(0x004BAC94u, sub_004BAC94); /* call 0x004BAC94 */

loc_004BA4DF: ;
    MEM32(esi) = 0x864B38;
    MEM32(esi + 8) = 0x864B08;
    MEM32(esi + 0xC) = 0x864AEC;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004BA4F9
 * Original: 0x004BA4F9 - 0x004BA512 (25 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA4F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BA4F9: ;
    MEM32(ecx) = 0x864B38;
    MEM32(ecx + 8) = 0x864B08;
    MEM32(ecx + 0xC) = 0x864AEC;
    g_seh_ebp = ebp; sub_004BAB9F(); return; /* tail jmp 0x004BAB9F */

}

/**
 * sub_004BA512
 * Original: 0x004BA512 - 0x004BA53E (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA512(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA512: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004BA522;

    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004BA522;

loc_004BA522: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BA52Au); RECOMP_ABI_CALL(0x004BA4F9u, sub_004BA4F9); /* call 0x004BA4F9 */

loc_004BA52A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BA538; /* je: equal / zero */

loc_004BA531: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BA537u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BA537: ;
    POP32(esp, ecx);

loc_004BA538: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA51A
 * Original: 0x004BA51A - 0x004BA53E (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA51A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA51A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004BA522;

loc_004BA522: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BA52Au); RECOMP_ABI_CALL(0x004BA4F9u, sub_004BA4F9); /* call 0x004BA4F9 */

loc_004BA52A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BA538; /* je: equal / zero */

loc_004BA531: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BA537u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BA537: ;
    POP32(esp, ecx);

loc_004BA538: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA522
 * Original: 0x004BA522 - 0x004BA53E (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA522(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA522: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004BA52Au); RECOMP_ABI_CALL(0x004BA4F9u, sub_004BA4F9); /* call 0x004BA4F9 */

loc_004BA52A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BA538; /* je: equal / zero */

loc_004BA531: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BA537u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BA537: ;
    POP32(esp, ecx);

loc_004BA538: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA53E
 * Original: 0x004BA53E - 0x004BA5C8 (138 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA53E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA53E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004BA54Du); RECOMP_ABI_CALL(0x004BE303u, sub_004BE303); /* call 0x004BE303 */

loc_004BA54D: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi) = 0x864B4C;
    MEM32(esi + 8) = 0x864B3C;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    ebx = MEM32(eax + 0xAC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BA57Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA579u); } /* indirect call */
    }

loc_004BA57B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x004BA585u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA57Fu); } /* indirect call */
    }

loc_004BA585: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA599; /* je: equal / zero */

loc_004BA589: ;
    MEM32(esi + 0x18) = 0x4BA35D;
    MEM32(esi + 0x20) = 0xFFFFFFFEu;
    goto loc_004BA5C0;

loc_004BA599: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BA59Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA59Du); } /* indirect call */
    }

loc_004BA59F: ;
    edx = 0x4BA35D;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BA5AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA5ABu); } /* indirect call */
    }

loc_004BA5AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004BA5B5u); RECOMP_ABI_CALL(0x005E0AA0u, sub_005E0AA0); /* call 0x005E0AA0 */

loc_004BA5B5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BA5C0u); RECOMP_ABI_CALL(0x004BE3DEu, sub_004BE3DE); /* call 0x004BE3DE */

loc_004BA5C0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BA5C8
 * Original: 0x004BA5C8 - 0x004BA5F1 (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA5C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA5C8: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864B4C;
    MEM32(esi + 8) = 0x864B3C;
    PUSH32(esp, 0x004BA5DDu); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004BA5DD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BA5EB; /* je: equal / zero */

loc_004BA5E4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BA5EAu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BA5EA: ;
    POP32(esp, ecx);

loc_004BA5EB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA5F1
 * Original: 0x004BA5F1 - 0x004BA5F9 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA5F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BA5F1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004BA5C8(); return; /* tail jmp 0x004BA5C8 */

}

/**
 * sub_004BA5F9
 * Original: 0x004BA5F9 - 0x004BA66B (114 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA5F9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA5F9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004BA608u); RECOMP_ABI_CALL(0x004BE303u, sub_004BE303); /* call 0x004BE303 */

loc_004BA608: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi) = 0x864B60;
    MEM32(esi + 8) = 0x864B50;
    MEM32(esi + 0x28) = eax;
    MEM8(esi + 0x30) = 0;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    ebx = MEM32(eax + 0xAC);
    ecx = edi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BA638u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA636u); } /* indirect call */
    }

loc_004BA638: ;
    edx = 0x4BA3F1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, 2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BA649u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA646u); } /* indirect call */
    }

loc_004BA649: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004BA650u); RECOMP_ABI_CALL(0x005DF750u, sub_005DF750); /* call 0x005DF750 */

loc_004BA650: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BA65Bu); RECOMP_ABI_CALL(0x004BE3DEu, sub_004BE3DE); /* call 0x004BE3DE */

loc_004BA65B: ;
    PUSH32(esp, 0x004BA660u); RECOMP_ABI_CALL(0x00454720u, sub_00454720); /* call 0x00454720 */

loc_004BA660: ;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BA66B
 * Original: 0x004BA66B - 0x004BA694 (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA66B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA66B: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864B60;
    MEM32(esi + 8) = 0x864B50;
    PUSH32(esp, 0x004BA680u); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004BA680: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BA68E; /* je: equal / zero */

loc_004BA687: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BA68Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BA68D: ;
    POP32(esp, ecx);

loc_004BA68E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA694
 * Original: 0x004BA694 - 0x004BA69C (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA694(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BA694: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004BA66B(); return; /* tail jmp 0x004BA66B */

}

/**
 * sub_004BA69C
 * Original: 0x004BA69C - 0x004BA702 (102 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA69C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA69C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004BA6ABu); RECOMP_ABI_CALL(0x004BE303u, sub_004BE303); /* call 0x004BE303 */

loc_004BA6AB: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi) = 0x864B74;
    MEM32(esi + 8) = 0x864B64;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    ebx = MEM32(eax + 0xAC);
    ecx = edi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BA6D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA6D5u); } /* indirect call */
    }

loc_004BA6D7: ;
    edx = 0x4BA425;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BA6E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA6E5u); } /* indirect call */
    }

loc_004BA6E8: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004BA6EFu); RECOMP_ABI_CALL(0x005DF750u, sub_005DF750); /* call 0x005DF750 */

loc_004BA6EF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BA6FAu); RECOMP_ABI_CALL(0x004BE3DEu, sub_004BE3DE); /* call 0x004BE3DE */

loc_004BA6FA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BA702
 * Original: 0x004BA702 - 0x004BA72B (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA702(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA702: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864B74;
    MEM32(esi + 8) = 0x864B64;
    PUSH32(esp, 0x004BA717u); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004BA717: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BA725; /* je: equal / zero */

loc_004BA71E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BA724u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BA724: ;
    POP32(esp, ecx);

loc_004BA725: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA72B
 * Original: 0x004BA72B - 0x004BA733 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA72B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BA72B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004BA702(); return; /* tail jmp 0x004BA702 */

}

/**
 * sub_004BA733
 * Original: 0x004BA733 - 0x004BA799 (102 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA733(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA733: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004BA742u); RECOMP_ABI_CALL(0x004BE303u, sub_004BE303); /* call 0x004BE303 */

loc_004BA742: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi) = 0x864B88;
    MEM32(esi + 8) = 0x864B78;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    ebx = MEM32(eax + 0xAC);
    ecx = edi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BA76Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA76Cu); } /* indirect call */
    }

loc_004BA76E: ;
    edx = 0x4BA454;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BA77Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA77Cu); } /* indirect call */
    }

loc_004BA77F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004BA786u); RECOMP_ABI_CALL(0x005DF750u, sub_005DF750); /* call 0x005DF750 */

loc_004BA786: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BA791u); RECOMP_ABI_CALL(0x004BE3DEu, sub_004BE3DE); /* call 0x004BE3DE */

loc_004BA791: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BA799
 * Original: 0x004BA799 - 0x004BA7C2 (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA799(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA799: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864B88;
    MEM32(esi + 8) = 0x864B78;
    PUSH32(esp, 0x004BA7AEu); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004BA7AE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BA7BC; /* je: equal / zero */

loc_004BA7B5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BA7BBu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BA7BB: ;
    POP32(esp, ecx);

loc_004BA7BC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA7C2
 * Original: 0x004BA7C2 - 0x004BA7CA (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA7C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BA7C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004BA799(); return; /* tail jmp 0x004BA799 */

}

/**
 * sub_004BA7CA
 * Original: 0x004BA7CA - 0x004BA841 (119 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA7CA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA7CA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004BA7D9u); RECOMP_ABI_CALL(0x004BE303u, sub_004BE303); /* call 0x004BE303 */

loc_004BA7D9: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x864B9C;
    MEM32(esi + 8) = 0x864B8C;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BA7F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA7F4u); } /* indirect call */
    }

loc_004BA7F6: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x004BA7FFu); RECOMP_ABI_CALL(0x004ACEBEu, sub_004ACEBE); /* call 0x004ACEBE */

loc_004BA7FF: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    ebx = MEM32(eax + 0xAC);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004BA816u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA814u); } /* indirect call */
    }

loc_004BA816: ;
    edx = 0x4BA483;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BA827u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA824u); } /* indirect call */
    }

loc_004BA827: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004BA82Eu); RECOMP_ABI_CALL(0x005DF750u, sub_005DF750); /* call 0x005DF750 */

loc_004BA82E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BA839u); RECOMP_ABI_CALL(0x004BE3DEu, sub_004BE3DE); /* call 0x004BE3DE */

loc_004BA839: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BA841
 * Original: 0x004BA841 - 0x004BA86A (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA841(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BA841: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x864B9C;
    MEM32(esi + 8) = 0x864B8C;
    PUSH32(esp, 0x004BA856u); RECOMP_ABI_CALL(0x004BE351u, sub_004BE351); /* call 0x004BE351 */

loc_004BA856: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004BA864; /* je: equal / zero */

loc_004BA85D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004BA863u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004BA863: ;
    POP32(esp, ecx);

loc_004BA864: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA86A
 * Original: 0x004BA86A - 0x004BA872 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA86A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BA86A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004BA841(); return; /* tail jmp 0x004BA841 */

}

/**
 * sub_004BA872
 * Original: 0x004BA872 - 0x004BA909 (151 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA872(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004BA872: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA891; /* je: equal / zero */

loc_004BA880: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA891; /* je: equal / zero */

loc_004BA884: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BA88Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA88Au); } /* indirect call */
    }

loc_004BA88D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004BA904;

loc_004BA891: ;
    PUSH32(esp, esi);
    esi = edi + -12;
    SET_LO8(eax, MEM8(esi + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x004BA8A4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BA8A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004BA8B0u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BA8B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA8C2; /* je: equal / zero */

loc_004BA8B7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004BA8C0u); RECOMP_ABI_CALL(0x004BA53Eu, sub_004BA53E); /* call 0x004BA53E */

loc_004BA8C0: ;
    goto loc_004BA8C4;

loc_004BA8C2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BA8C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BA8CAu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BA8CA: ;
    ecx = eax;
    PUSH32(esp, 0x004BA8D1u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BA8D1: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E20);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BA8F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA8F5u); } /* indirect call */
    }

loc_004BA8F8: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BA900u); RECOMP_ABI_CALL(0x004B8D9Du, sub_004B8D9D); /* call 0x004B8D9D */

loc_004BA900: ;
    eax = MEM32(edi + 0xC);
    POP32(esp, esi);

loc_004BA904: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA909
 * Original: 0x004BA909 - 0x004BA9A0 (151 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA909(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004BA909: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA928; /* je: equal / zero */

loc_004BA917: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA928; /* je: equal / zero */

loc_004BA91B: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BA924u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA921u); } /* indirect call */
    }

loc_004BA924: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004BA99B;

loc_004BA928: ;
    PUSH32(esp, esi);
    esi = edi + -12;
    SET_LO8(eax, MEM8(esi + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x004BA93Bu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BA93B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x004BA947u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BA947: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA959; /* je: equal / zero */

loc_004BA94E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004BA957u); RECOMP_ABI_CALL(0x004BA5F9u, sub_004BA5F9); /* call 0x004BA5F9 */

loc_004BA957: ;
    goto loc_004BA95B;

loc_004BA959: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BA95B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BA961u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BA961: ;
    ecx = eax;
    PUSH32(esp, 0x004BA968u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BA968: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E20);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BA98Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA98Cu); } /* indirect call */
    }

loc_004BA98F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BA997u); RECOMP_ABI_CALL(0x004B8D9Du, sub_004B8D9D); /* call 0x004B8D9D */

loc_004BA997: ;
    eax = MEM32(edi + 0xC);
    POP32(esp, esi);

loc_004BA99B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA9A0
 * Original: 0x004BA9A0 - 0x004BAA37 (151 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004BA9A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA9BF; /* je: equal / zero */

loc_004BA9AE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA9BF; /* je: equal / zero */

loc_004BA9B2: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BA9BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BA9B8u); } /* indirect call */
    }

loc_004BA9BB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004BAA32;

loc_004BA9BF: ;
    PUSH32(esp, esi);
    esi = edi + -8;
    SET_LO8(eax, MEM8(esi + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x004BA9D2u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BA9D2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004BA9DEu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BA9DE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BA9F0; /* je: equal / zero */

loc_004BA9E5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004BA9EEu); RECOMP_ABI_CALL(0x004BA69Cu, sub_004BA69C); /* call 0x004BA69C */

loc_004BA9EE: ;
    goto loc_004BA9F2;

loc_004BA9F0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BA9F2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BA9F8u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BA9F8: ;
    ecx = eax;
    PUSH32(esp, 0x004BA9FFu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BA9FF: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E20);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BAA26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BAA23u); } /* indirect call */
    }

loc_004BAA26: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BAA2Eu); RECOMP_ABI_CALL(0x004B8D9Du, sub_004B8D9D); /* call 0x004B8D9D */

loc_004BAA2E: ;
    eax = MEM32(edi + 0x10);
    POP32(esp, esi);

loc_004BAA32: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BAA37
 * Original: 0x004BAA37 - 0x004BAACE (151 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BAA37(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004BAA37: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BAA56; /* je: equal / zero */

loc_004BAA45: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BAA56; /* je: equal / zero */

loc_004BAA49: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BAA52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BAA4Fu); } /* indirect call */
    }

loc_004BAA52: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004BAAC9;

loc_004BAA56: ;
    PUSH32(esp, esi);
    esi = edi + -8;
    SET_LO8(eax, MEM8(esi + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x004BAA69u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BAA69: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004BAA75u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BAA75: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BAA87; /* je: equal / zero */

loc_004BAA7C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004BAA85u); RECOMP_ABI_CALL(0x004BA733u, sub_004BA733); /* call 0x004BA733 */

loc_004BAA85: ;
    goto loc_004BAA89;

loc_004BAA87: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BAA89: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BAA8Fu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BAA8F: ;
    ecx = eax;
    PUSH32(esp, 0x004BAA96u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BAA96: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E20);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BAABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BAABAu); } /* indirect call */
    }

loc_004BAABD: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BAAC5u); RECOMP_ABI_CALL(0x004B8D9Du, sub_004B8D9D); /* call 0x004B8D9D */

loc_004BAAC5: ;
    eax = MEM32(edi + 0x10);
    POP32(esp, esi);

loc_004BAAC9: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BAACE
 * Original: 0x004BAACE - 0x004BAB65 (151 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BAACE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004BAACE: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BAAED; /* je: equal / zero */

loc_004BAADC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BAAED; /* je: equal / zero */

loc_004BAAE0: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BAAE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BAAE6u); } /* indirect call */
    }

loc_004BAAE9: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004BAB60;

loc_004BAAED: ;
    PUSH32(esp, esi);
    esi = edi + -8;
    SET_LO8(eax, MEM8(esi + 0x10));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x004BAB00u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004BAB00: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004BAB0Cu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004BAB0C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004BAB1E; /* je: equal / zero */

loc_004BAB13: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004BAB1Cu); RECOMP_ABI_CALL(0x004BA7CAu, sub_004BA7CA); /* call 0x004BA7CA */

loc_004BAB1C: ;
    goto loc_004BAB20;

loc_004BAB1E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004BAB20: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004BAB26u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004BAB26: ;
    ecx = eax;
    PUSH32(esp, 0x004BAB2Du); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004BAB2D: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4E20);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004BAB54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BAB51u); } /* indirect call */
    }

loc_004BAB54: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004BAB5Cu); RECOMP_ABI_CALL(0x004B8D9Du, sub_004B8D9D); /* call 0x004B8D9D */

loc_004BAB5C: ;
    eax = MEM32(edi + 0x10);
    POP32(esp, esi);

loc_004BAB60: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BAB65
 * Original: 0x004BAB65 - 0x004BAB75 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BAB65(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BAB65: ;
    eax = MEM32(ecx + 0x14);
    eax = eax ^ MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) ^ eax;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BAB75
 * Original: 0x004BAB75 - 0x004BAB8D (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BAB75(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004BAB75: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004BAB87; /* je: equal / zero */

loc_004BAB82: ;
    PUSH32(esp, 0x004BAB87u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004BAB87: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BAB9F
 * Original: 0x004BAB9F - 0x004BAC13 (116 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BAB9F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BAB9F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x18;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = esi + 8;
    ebp = esi + 0xC;
    MEM32(esi) = 0x864BEC;
    MEM32(ebx) = 0x864BBC;
    MEM32(ebp) = 0x864BA0;
    if (CMP_EQ(_fa, _fb)) goto loc_004BABD5; /* je: equal / zero */

loc_004BABC7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004BABCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004BABC9u); } /* indirect call */
    }

loc_004BABCC: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004BABD5u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004BABD5: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BABE1; /* je: equal / zero */

loc_004BABDC: ;
    PUSH32(esp, 0x004BABE1u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004BABE1: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BABED; /* je: equal / zero */

loc_004BABE8: ;
    PUSH32(esp, 0x004BABEDu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004BABED: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004BABFA; /* je: equal / zero */

loc_004BABF3: ;
    ecx = edi;
    PUSH32(esp, 0x004BABFAu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004BABFA: ;
    ecx = ebp;
    PUSH32(esp, 0x004BAC01u); RECOMP_ABI_CALL(0x004BE4EAu, sub_004BE4EA); /* call 0x004BE4EA */

loc_004BAC01: ;
    ecx = ebx;
    PUSH32(esp, 0x004BAC08u); RECOMP_ABI_CALL(0x004BE4BDu, sub_004BE4BD); /* call 0x004BE4BD */

loc_004BAC08: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}
