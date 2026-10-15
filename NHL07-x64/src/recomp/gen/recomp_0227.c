/**
 * nhl_07_recomp - Recompiled code chunk 227
 * Functions: 250 (0x004E7349 - 0x004EB8E2)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004E7349
 * Original: 0x004E7349 - 0x004E736B (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7349(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E7349: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D0F8;
    PUSH32(esp, 0x004E7357u); RECOMP_ABI_CALL(0x0060CA49u, sub_0060CA49); /* call 0x0060CA49 */

loc_004E7357: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E7365; /* je: equal / zero */

loc_004E735E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E7364u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E7364: ;
    POP32(esp, ecx);

loc_004E7365: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E736B
 * Original: 0x004E736B - 0x004E737D (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E736B(void)
{

loc_004E736B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E7373u); RECOMP_ABI_CALL(0x0060CA76u, sub_0060CA76); /* call 0x0060CA76 */

loc_004E7373: ;
    MEM32(esi) = 0x86D108;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E737D
 * Original: 0x004E737D - 0x004E7394 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E737D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E737D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004E7386u); RECOMP_ABI_CALL(0x00607CD0u, sub_00607CD0); /* call 0x00607CD0 */

loc_004E7386: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E7394
 * Original: 0x004E7394 - 0x004E73BB (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7394(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E7394: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D108;
    PUSH32(esp, 0x004E73A2u); RECOMP_ABI_CALL(0x0060CA7Fu, sub_0060CA7F); /* call 0x0060CA7F */

loc_004E73A2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E73B0; /* je: equal / zero */

loc_004E73A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E73AFu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004E73AF: ;
    POP32(esp, ecx);

loc_004E73B0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E73BB
 * Original: 0x004E73BB - 0x004E73DA (31 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E73BB(void)
{

loc_004E73BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004E73C7u); RECOMP_ABI_CALL(0x004BFAA5u, sub_004BFAA5); /* call 0x004BFAA5 */

loc_004E73C7: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(esi + 0xC) = LO8(eax);
    MEM32(esi) = 0x86D110;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E73DA
 * Original: 0x004E73DA - 0x004E73FC (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E73DA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E73DA: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D110;
    PUSH32(esp, 0x004E73E8u); RECOMP_ABI_CALL(0x004BFAC0u, sub_004BFAC0); /* call 0x004BFAC0 */

loc_004E73E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E73F6; /* je: equal / zero */

loc_004E73EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E73F5u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E73F5: ;
    POP32(esp, ecx);

loc_004E73F6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E73FC
 * Original: 0x004E73FC - 0x004E7414 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E73FC(void)
{

loc_004E73FC: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004E7408u); RECOMP_ABI_CALL(0x004BFAA5u, sub_004BFAA5); /* call 0x004BFAA5 */

loc_004E7408: ;
    MEM32(esi) = 0x86D11C;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E7414
 * Original: 0x004E7414 - 0x004E7427 (19 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7414(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E7414: ;
    PUSH32(esp, 0x004E7419u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E7419: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004E7420u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E741Du); } /* indirect call */
    }

loc_004E7420: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_004E7427
 * Original: 0x004E7427 - 0x004E7449 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7427(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E7427: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D11C;
    PUSH32(esp, 0x004E7435u); RECOMP_ABI_CALL(0x004BFAC0u, sub_004BFAC0); /* call 0x004BFAC0 */

loc_004E7435: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E7443; /* je: equal / zero */

loc_004E743C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E7442u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E7442: ;
    POP32(esp, ecx);

loc_004E7443: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E7449
 * Original: 0x004E7449 - 0x004E7461 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7449(void)
{

loc_004E7449: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004E7455u); RECOMP_ABI_CALL(0x004BFAA5u, sub_004BFAA5); /* call 0x004BFAA5 */

loc_004E7455: ;
    MEM32(esi) = 0x86D128;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E7461
 * Original: 0x004E7461 - 0x004E7483 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7461(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E7461: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D128;
    PUSH32(esp, 0x004E746Fu); RECOMP_ABI_CALL(0x004BFAC0u, sub_004BFAC0); /* call 0x004BFAC0 */

loc_004E746F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E747D; /* je: equal / zero */

loc_004E7476: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E747Cu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E747C: ;
    POP32(esp, ecx);

loc_004E747D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E7483
 * Original: 0x004E7483 - 0x004E749B (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7483(void)
{

loc_004E7483: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004E748Fu); RECOMP_ABI_CALL(0x004BFAA5u, sub_004BFAA5); /* call 0x004BFAA5 */

loc_004E748F: ;
    MEM32(esi) = 0x86D134;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E749B
 * Original: 0x004E749B - 0x004E74BD (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E749B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E749B: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D134;
    PUSH32(esp, 0x004E74A9u); RECOMP_ABI_CALL(0x004BFAC0u, sub_004BFAC0); /* call 0x004BFAC0 */

loc_004E74A9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E74B7; /* je: equal / zero */

loc_004E74B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E74B6u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E74B6: ;
    POP32(esp, ecx);

loc_004E74B7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E74BD
 * Original: 0x004E74BD - 0x004E74D4 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E74BD(void)
{

loc_004E74BD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7DEFE8);
    esi = ecx;
    PUSH32(esp, 0x004E74CAu); RECOMP_ABI_CALL(0x004BFAA5u, sub_004BFAA5); /* call 0x004BFAA5 */

loc_004E74CA: ;
    MEM32(esi) = 0x86D140;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E74D4
 * Original: 0x004E74D4 - 0x004E74F6 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E74D4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E74D4: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D140;
    PUSH32(esp, 0x004E74E2u); RECOMP_ABI_CALL(0x004BFAC0u, sub_004BFAC0); /* call 0x004BFAC0 */

loc_004E74E2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E74F0; /* je: equal / zero */

loc_004E74E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E74EFu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E74EF: ;
    POP32(esp, ecx);

loc_004E74F0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E74F6
 * Original: 0x004E74F6 - 0x004E7511 (27 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E74F6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E74F6: ;
    edx = MEM32(ecx + 0x10);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7510; /* je: equal / zero */

loc_004E74FF: ;
    PUSH32(esp, MEM32(ecx + 0x14));
    PUSH32(esp, edx);
    PUSH32(esp, 0x004E7508u); RECOMP_ABI_CALL(0x00607C70u, sub_00607C70); /* call 0x00607C70 */

loc_004E7508: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    POP32(esp, ecx);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

loc_004E7510: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004E7511
 * Original: 0x004E7511 - 0x004E7536 (37 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7511(void)
{

loc_004E7511: ;
    PUSH32(esp, MEM32(ecx + 0x3C));
    PUSH32(esp, MEM32(ecx + 0x38));
    PUSH32(esp, 0x004E751Cu); RECOMP_ABI_CALL(0x006079B0u, sub_006079B0); /* call 0x006079B0 */

loc_004E751C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x86D14C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E752Bu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004E752B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E7533u); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004E7533: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E7536
 * Original: 0x004E7536 - 0x004E755B (37 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7536(void)
{

loc_004E7536: ;
    PUSH32(esp, MEM32(ecx + 0x3C));
    PUSH32(esp, MEM32(ecx + 0x38));
    PUSH32(esp, 0x004E7541u); RECOMP_ABI_CALL(0x006079B0u, sub_006079B0); /* call 0x006079B0 */

loc_004E7541: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x86D154);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E7550u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004E7550: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E7558u); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004E7558: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E755B
 * Original: 0x004E755B - 0x004E75EF (148 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E755B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E755B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004E756Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7567u); } /* indirect call */
    }

loc_004E756A: ;
    PUSH32(esp, 0);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E7573u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7573: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E7581u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004E7581: ;
    eax = MEM32(ebp + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x20);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x86D174);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E7599u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004E7599: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E75AF; /* je: equal / zero */

loc_004E759F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -32;
    PUSH32(esp, 0x86D168);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E75AFu); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004E75AF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E75B4u); RECOMP_ABI_CALL(0x004DC997u, sub_004DC997); /* call 0x004DC997 */

loc_004E75B4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004E75BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E75B8u); } /* indirect call */
    }

loc_004E75BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86D15C);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E75C9u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004E75C9: ;
    eax = MEM32(ebp + -32);
    ecx = ebp + -32;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004E75D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E75CFu); } /* indirect call */
    }

loc_004E75D2: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x3C));
    PUSH32(esp, MEM32(esi + 0x38));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E75DEu); RECOMP_ABI_CALL(0x00607A40u, sub_00607A40); /* call 0x00607A40 */

loc_004E75DE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E75E9u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004E75E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E75EF
 * Original: 0x004E75EF - 0x004E765B (108 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E75EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E75EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    esi = ecx;
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_004E7617; /* je: equal / zero */

loc_004E7601: ;
    ecx = esi + 0x48;
    MEM32(esi + 0x24) = 0x86D1D8;
    MEM32(esi + 0x2C) = 0x86D1D0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E7617u); RECOMP_ABI_CALL(0x004E9E9Bu, sub_004E9E9B); /* call 0x004E9E9B */

loc_004E7617: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E7622u); RECOMP_ABI_CALL(0x004E9B74u, sub_004E9B74); /* call 0x004E9B74 */

loc_004E7622: ;
    eax = MEM32(esi + 0x24);
    MEM32(esi) = 0x86D1B4;
    MEM32(esi + 0x28) = 0x86D190;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 0x24) = 0x86D17C;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 4);
    ecx = eax + -36;
    MEM32(eax + esi + 0x20) = ecx;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E765B
 * Original: 0x004E765B - 0x004E77F0 (405 bytes, 104 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E765B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E765B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E7663u); RECOMP_ABI_CALL(0x004DC997u, sub_004DC997); /* call 0x004DC997 */

loc_004E7663: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004E766Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7667u); } /* indirect call */
    }

loc_004E766A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7677; /* je: equal / zero */

loc_004E766E: ;
    MEM32(esi + 0x14) = 5;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004E7677: ;
    PUSH32(esp, 0x004E767Cu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E767C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x90);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004E768Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E768Bu); } /* indirect call */
    }

loc_004E768D: ;
    MEM32(esi + 0x18) = eax;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x18);
    ecx = 0x86D270;
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 0x18);
    MEM32(eax + 8) = 0x86D268;
    edx = MEM32(esi + 0x18);
    eax = 0x7B891F;
    MEM32(edx + 0xC) = eax;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x10) = 1;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x14) = 0x86D25C;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x18) = 0x86D254;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x1C) = eax;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x20) = 2;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x24) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x28) = 0x86D24C;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x2C) = eax;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x30) = 3;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x34) = 0x86D240;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x38) = 0x86D238;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x3C) = eax;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x40) = 4;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x44) = 0x86D230;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x48) = 0x86D228;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x4C) = eax;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x50) = 5;
    edx = MEM32(esi + 0x18);
    ecx = 0x86D21C;
    MEM32(edx + 0x54) = ecx;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x58) = 0x86D214;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x5C) = eax;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x60) = 6;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x64) = 0x86D204;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x68) = 0x86D1FC;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x6C) = eax;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x70) = 7;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x74) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x78) = 0x86D1F4;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x7C) = eax;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x80) = 8;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x84) = 0x86D1E8;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x88) = 0x86D1E0;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x8C) = eax;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x004E77E0u); RECOMP_ABI_CALL(0x006078A0u, sub_006078A0); /* call 0x006078A0 */

loc_004E77E0: ;
    PUSH32(esp, eax);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x004E77E9u); RECOMP_ABI_CALL(0x00607CC0u, sub_00607CC0); /* call 0x00607CC0 */

loc_004E77E9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E77F0
 * Original: 0x004E77F0 - 0x004E7824 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E77F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E77F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E780C; /* je: equal / zero */

loc_004E77F9: ;
    PUSH32(esp, 0x004E77FEu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E77FE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x40));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E7808u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7805u); } /* indirect call */
    }

loc_004E7808: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004E780C: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7822; /* je: equal / zero */

loc_004E7813: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E7819u); RECOMP_ABI_CALL(0x00607940u, sub_00607940); /* call 0x00607940 */

loc_004E7819: ;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_004E7822: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E7824
 * Original: 0x004E7824 - 0x004E787E (90 bytes, 32 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7824(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E7824: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E782Cu); RECOMP_ABI_CALL(0x004DC997u, sub_004DC997); /* call 0x004DC997 */

loc_004E782C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004E7833u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7830u); } /* indirect call */
    }

loc_004E7833: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E784A; /* je: equal / zero */

loc_004E7837: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004E7845u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E7845: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E787A;

loc_004E784A: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x86D27C);
    PUSH32(esp, MEM32(esi + 0x3C));
    PUSH32(esp, MEM32(esi + 0x38));
    PUSH32(esp, 0x004E7867u); RECOMP_ABI_CALL(0x006079B0u, sub_006079B0); /* call 0x006079B0 */

loc_004E7867: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E786Fu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004E786F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E7877u); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_004E7877: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E787A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E787E
 * Original: 0x004E787E - 0x004E78D0 (82 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E787E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E787E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + -12));
    PUSH32(esp, MEM32(esi + -16));
    PUSH32(esp, 0x004E788Cu); RECOMP_ABI_CALL(0x00607B70u, sub_00607B70); /* call 0x00607B70 */

loc_004E788C: ;
    PUSH32(esp, 0x004E7891u); RECOMP_ABI_CALL(0x00453A10u, sub_00453A10); /* call 0x00453A10 */

loc_004E7891: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004E7898u); RECOMP_ABI_CALL(0x00453DC0u, sub_00453DC0); /* call 0x00453DC0 */

loc_004E7898: ;
    PUSH32(esp, 0x696E676D);
    PUSH32(esp, 0x004E78A2u); RECOMP_ABI_CALL(0x004580C0u, sub_004580C0); /* call 0x004580C0 */

loc_004E78A2: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x004E78ACu); RECOMP_ABI_CALL(0x004535C0u, sub_004535C0); /* call 0x004535C0 */

loc_004E78AC: ;
    PUSH32(esp, 0x004E78B1u); RECOMP_ABI_CALL(0x004580E0u, sub_004580E0); /* call 0x004580E0 */

loc_004E78B1: ;
    PUSH32(esp, 0x82FA88);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7469746C);
    PUSH32(esp, 0x004E78C4u); RECOMP_ABI_CALL(0x00453A80u, sub_00453A80); /* call 0x00453A80 */

loc_004E78C4: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + -72;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E77F0(); return; /* tail jmp 0x004E77F0 */

}

/**
 * sub_004E78D0
 * Original: 0x004E78D0 - 0x004E78D8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E78D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E78D0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E82AC(); return; /* tail jmp 0x004E82AC */

}

/**
 * sub_004E78D8
 * Original: 0x004E78D8 - 0x004E78E3 (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E78D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E78D8: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E9CF4(); return; /* tail jmp 0x004E9CF4 */

}

/**
 * sub_004E78E3
 * Original: 0x004E78E3 - 0x004E78EE (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E78E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E78E3: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E9D20(); return; /* tail jmp 0x004E9D20 */

}

/**
 * sub_004E78EE
 * Original: 0x004E78EE - 0x004E78F6 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E78EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E78EE: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E787E(); return; /* tail jmp 0x004E787E */

}

/**
 * sub_004E78F6
 * Original: 0x004E78F6 - 0x004E7901 (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E78F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E78F6: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E82AC(); return; /* tail jmp 0x004E82AC */

}

/**
 * sub_004E7901
 * Original: 0x004E7901 - 0x004E7948 (71 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7901(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E7901: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004E7924;

    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E9CF4(); return; /* tail jmp 0x004E9CF4 */

    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E9D20(); return; /* tail jmp 0x004E9D20 */

    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004E7924;

loc_004E7924: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E792Cu); RECOMP_ABI_CALL(0x004E72DDu, sub_004E72DD); /* call 0x004E72DD */

loc_004E792C: ;
    ecx = esi + 0x3C;
    PUSH32(esp, 0x004E7934u); RECOMP_ABI_CALL(0x004E9EA4u, sub_004E9EA4); /* call 0x004E9EA4 */

loc_004E7934: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E7942; /* je: equal / zero */

loc_004E793B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E7941u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E7941: ;
    POP32(esp, ecx);

loc_004E7942: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E7909
 * Original: 0x004E7909 - 0x004E7911 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7909(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E7909: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E9CF4(); return; /* tail jmp 0x004E9CF4 */

}

/**
 * sub_004E7911
 * Original: 0x004E7911 - 0x004E7919 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7911(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E7911: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E9D20(); return; /* tail jmp 0x004E9D20 */

}

/**
 * sub_004E7919
 * Original: 0x004E7919 - 0x004E7948 (47 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7919(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E7919: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004E7924;

loc_004E7924: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E792Cu); RECOMP_ABI_CALL(0x004E72DDu, sub_004E72DD); /* call 0x004E72DD */

loc_004E792C: ;
    ecx = esi + 0x3C;
    PUSH32(esp, 0x004E7934u); RECOMP_ABI_CALL(0x004E9EA4u, sub_004E9EA4); /* call 0x004E9EA4 */

loc_004E7934: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E7942; /* je: equal / zero */

loc_004E793B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E7941u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E7941: ;
    POP32(esp, ecx);

loc_004E7942: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E7924
 * Original: 0x004E7924 - 0x004E7948 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7924(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E7924: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E792Cu); RECOMP_ABI_CALL(0x004E72DDu, sub_004E72DD); /* call 0x004E72DD */

loc_004E792C: ;
    ecx = esi + 0x3C;
    PUSH32(esp, 0x004E7934u); RECOMP_ABI_CALL(0x004E9EA4u, sub_004E9EA4); /* call 0x004E9EA4 */

loc_004E7934: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E7942; /* je: equal / zero */

loc_004E793B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E7941u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E7941: ;
    POP32(esp, ecx);

loc_004E7942: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E7948
 * Original: 0x004E7948 - 0x004E79E9 (161 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7948(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E7948: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E79A1; /* je: equal / zero */

loc_004E795C: ;
    eax = MEM32(eax + 0x24);
    esi = MEM32(eax + 0x10);
    ebx = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E79E4; /* jbe: below or equal (unsigned <=) */

loc_004E796C: ;
    PUSH32(esp, 0x004E7971u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E7971: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004E7978u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7975u); } /* indirect call */
    }

loc_004E7978: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E7980; /* jne: not equal / not zero */

loc_004E797C: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004E798A;

loc_004E7980: ;
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 4);
    ebp = ecx + eax + 0x24;

loc_004E798A: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004E7992u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E7992: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E799Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7997u); } /* indirect call */
    }

loc_004E799A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E796C; /* jb: below (unsigned <) */

loc_004E799F: ;
    goto loc_004E79E4;

loc_004E79A1: ;
    eax = MEM32(eax + 0x28);
    esi = MEM32(eax + 0x28);
    ebx = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E79E4; /* jbe: below or equal (unsigned <=) */

loc_004E79B1: ;
    PUSH32(esp, 0x004E79B6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E79B6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004E79BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E79BAu); } /* indirect call */
    }

loc_004E79BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E79C5; /* jne: not equal / not zero */

loc_004E79C1: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004E79CF;

loc_004E79C5: ;
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 4);
    ebp = ecx + eax + 0x24;

loc_004E79CF: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004E79D7u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E79D7: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E79DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E79DCu); } /* indirect call */
    }

loc_004E79DF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E79B1; /* jb: below (unsigned <) */

loc_004E79E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E79E9
 * Original: 0x004E79E9 - 0x004E7A43 (90 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E79E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E79E9: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E7A3E; /* jbe: below or equal (unsigned <=) */

loc_004E7A0B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_004E7A0D: ;
    PUSH32(esp, 0x004E7A12u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E7A12: ;
    PUSH32(esp, ebp);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x004E7A1Cu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E7A1C: ;
    edi = MEM32(eax);
    eax = MEM32(edi);
    edx = MEM32(ebx);
    ecx = ebx;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004E7A2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7A28u); } /* indirect call */
    }

loc_004E7A2B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004E7A35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7A32u); } /* indirect call */
    }

loc_004E7A35: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E7A0D; /* jb: below (unsigned <) */

loc_004E7A3C: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004E7A3E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E7A43
 * Original: 0x004E7A43 - 0x004E7A9D (90 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7A43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E7A43: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E7A98; /* jbe: below or equal (unsigned <=) */

loc_004E7A65: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_004E7A67: ;
    PUSH32(esp, 0x004E7A6Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E7A6C: ;
    PUSH32(esp, ebp);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x004E7A76u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E7A76: ;
    edi = MEM32(eax);
    eax = MEM32(edi);
    edx = MEM32(ebx);
    ecx = ebx;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004E7A85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7A82u); } /* indirect call */
    }

loc_004E7A85: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E7A8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7A8Cu); } /* indirect call */
    }

loc_004E7A8F: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E7A67; /* jb: below (unsigned <) */

loc_004E7A96: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004E7A98: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E7A9D
 * Original: 0x004E7A9D - 0x004E7AF7 (90 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7A9D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E7A9D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E7AF2; /* jbe: below or equal (unsigned <=) */

loc_004E7ABF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_004E7AC1: ;
    PUSH32(esp, 0x004E7AC6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004E7AC6: ;
    PUSH32(esp, ebp);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x004E7AD0u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E7AD0: ;
    edi = MEM32(eax);
    eax = MEM32(edi);
    edx = MEM32(ebx);
    ecx = ebx;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004E7ADFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7ADCu); } /* indirect call */
    }

loc_004E7ADF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E7AE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7AE6u); } /* indirect call */
    }

loc_004E7AE9: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E7AC1; /* jb: below (unsigned <) */

loc_004E7AF0: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004E7AF2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E7AF7
 * Original: 0x004E7AF7 - 0x004E7C07 (272 bytes, 112 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7AF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E7AF7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E7AFFu); RECOMP_ABI_CALL(0x004DC997u, sub_004DC997); /* call 0x004DC997 */

loc_004E7AFF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004E7B06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7B03u); } /* indirect call */
    }

loc_004E7B06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7B1B; /* je: equal / zero */

loc_004E7B0A: ;
    ecx = MEM32(0x90E7AC);
    _fb = (uint32_t)(0xFFFFFFD8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFD8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E7B19u); RECOMP_ABI_CALL(0x004DC533u, sub_004DC533); /* call 0x004DC533 */

loc_004E7B19: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004E7B1B: ;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x004E7B26u); RECOMP_ABI_CALL(0x00607C70u, sub_00607C70); /* call 0x00607C70 */

loc_004E7B26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004E7C05; /* jne: not equal / not zero */

loc_004E7B31: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x004E7B3Cu); RECOMP_ABI_CALL(0x00607CC0u, sub_00607CC0); /* call 0x00607CC0 */

loc_004E7B3C: ;
    MEM32(esi + 0x14) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    if ((_fa == 0)) goto loc_004E7BDE; /* je: equal / zero */

loc_004E7B48: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004E7B97; /* je: equal / zero */

loc_004E7B4B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004E7B69; /* je: equal / zero */

loc_004E7B4E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004E7C02; /* jne: not equal / not zero */

loc_004E7B55: ;
    ecx = MEM32(0x90E7AC);
    _fb = (uint32_t)(0xFFFFFFD8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFD8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E7B64u); RECOMP_ABI_CALL(0x004DC533u, sub_004DC533); /* call 0x004DC533 */

loc_004E7B64: ;
    goto loc_004E7C02;

loc_004E7B69: ;
    edi = esi + -32;
    MEM8(esi + 8) = 0;
    ebp = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E7C02; /* jbe: below or equal (unsigned <=) */

loc_004E7B7D: ;
    _fb = (uint32_t)(0xFFFFFFD8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFD8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E7B80: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004E7B88u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E7B88: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E7B90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7B8Du); } /* indirect call */
    }

loc_004E7B90: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E7B80; /* jb: below (unsigned <) */

loc_004E7B95: ;
    goto loc_004E7C02;

loc_004E7B97: ;
    ebx = esi + -40;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E7BA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7B9Eu); } /* indirect call */
    }

loc_004E7BA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E7BA8; /* jne: not equal / not zero */

loc_004E7BA5: ;
    MEM8(esi + 8) = LO8(eax);

loc_004E7BA8: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7BBB; /* je: equal / zero */

loc_004E7BAE: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004E7BB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7BB6u); } /* indirect call */
    }

loc_004E7BB9: ;
    goto loc_004E7C02;

loc_004E7BBB: ;
    ebp = MEM32(esi + -20);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFE0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E7C02; /* jbe: below or equal (unsigned <=) */

loc_004E7BC7: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004E7BCFu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E7BCF: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004E7BD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7BD4u); } /* indirect call */
    }

loc_004E7BD7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E7BC7; /* jb: below (unsigned <) */

loc_004E7BDC: ;
    goto loc_004E7C02;

loc_004E7BDE: ;
    edi = esi + -32;
    ebp = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E7C02; /* jbe: below or equal (unsigned <=) */

loc_004E7BEA: ;
    _fb = (uint32_t)(0xFFFFFFD8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFD8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E7BED: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004E7BF5u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E7BF5: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004E7BFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7BFAu); } /* indirect call */
    }

loc_004E7BFD: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E7BED; /* jb: below (unsigned <) */

loc_004E7C02: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004E7C05: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E7C07
 * Original: 0x004E7C07 - 0x004E7C51 (74 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7C07(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E7C07: ;
    _fa = (uint32_t)(MEM8(0x90E7EC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x90E7EC), 1 (8-bit) */
    eax = MEM32(0x90E7AC);
    PUSH32(esp, esi);
    MEM8(eax + 0x15) = 1;
    esi = 0x90E7E8;
    if (TEST_NZ(_fa, _fb)) goto loc_004E7C42; /* jne: not equal / not zero */

loc_004E7C1F: ;
    MEM32(0x90E7EC) = MEM32(0x90E7EC) | 1;
    _fa = (uint32_t)(MEM32(0x90E7EC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    PUSH32(esp, 0x004E7C2Du); RECOMP_ABI_CALL(0x0060CA76u, sub_0060CA76); /* call 0x0060CA76 */

loc_004E7C2D: ;
    PUSH32(esp, 0x6B6F11);
    MEM32(0x90E7E8) = 0x86D108;
    PUSH32(esp, 0x004E7C41u); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_004E7C41: ;
    POP32(esp, ecx);

loc_004E7C42: ;
    PUSH32(esp, 0x004E7C47u); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004E7C47: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004E7C4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E7C4Cu); } /* indirect call */
    }

loc_004E7C4F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E7C51
 * Original: 0x004E7C51 - 0x004E7C8B (58 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7C51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E7C51: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    MEM32(esi) = 0x86D1B4;
    MEM32(esi + 0x28) = 0x86D190;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 0x24) = 0x86D17C;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 4);
    ecx = eax + -36;
    MEM32(eax + esi + 0x20) = ecx;
    ecx = esi;
    PUSH32(esp, 0x004E7C83u); RECOMP_ABI_CALL(0x004E77F0u, sub_004E77F0); /* call 0x004E77F0 */

loc_004E7C83: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E72DD(); return; /* tail jmp 0x004E72DD */

}

/**
 * sub_004E7C8B
 * Original: 0x004E7C8B - 0x004E81EE (1379 bytes, 503 insns)
 * Category: game_vtable
 * CC: thiscall, 5023 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7C8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E7C8B: ;
    _fb = (uint32_t)(0xFFFFFFD8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFD8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004E77F0(); return; /* tail jmp 0x004E77F0 */

    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + -12));
    PUSH32(esp, MEM32(esi + -16));
    PUSH32(esp, 0x004E7CA4u); RECOMP_ABI_CALL(0x00607BC0u, sub_00607BC0); /* call 0x00607BC0 */

loc_004E7CA4: ;
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, MEM32(esi + -16));
    PUSH32(esp, 0x004E7CAFu); RECOMP_ABI_CALL(0x00607C50u, sub_00607C50); /* call 0x00607C50 */

loc_004E7CAF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004E811A; /* ja: above (unsigned >) */

loc_004E7CBB: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x4E81CA); /* switch: 9 entries, 9 targets */
    if (_jt == 0x004E7CC2u) goto loc_004E7CC2;
    if (_jt == 0x004E7D67u) goto loc_004E7D67;
    if (_jt == 0x004E7DC2u) goto loc_004E7DC2;
    if (_jt == 0x004E7E60u) goto loc_004E7E60;
    if (_jt == 0x004E7EC0u) goto loc_004E7EC0;
    if (_jt == 0x004E7F60u) goto loc_004E7F60;
    if (_jt == 0x004E7FC0u) goto loc_004E7FC0;
    if (_jt == 0x004E806Bu) goto loc_004E806B;
    if (_jt == 0x004E80C1u) goto loc_004E80C1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004E7CC2: ;
    PUSH32(esp, 0x004E7CC7u); RECOMP_ABI_CALL(0x00453A10u, sub_00453A10); /* call 0x00453A10 */

loc_004E7CC7: ;
    PUSH32(esp, 0x004E7CCCu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7CCC: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004E7CD8u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7CD8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7CEB; /* je: equal / zero */

loc_004E7CDF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    ecx = eax;
    PUSH32(esp, 0x004E7CE9u); RECOMP_ABI_CALL(0x004BE6C9u, sub_004BE6C9); /* call 0x004BE6C9 */

loc_004E7CE9: ;
    goto loc_004E7CED;

loc_004E7CEB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E7CED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E7CF3u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E7CF3: ;
    ecx = eax;
    PUSH32(esp, 0x004E7CFAu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E7CFA: ;
    esi = eax;
    PUSH32(esp, 0x004E7D01u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7D01: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004E7D0Bu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7D0B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7D20; /* je: equal / zero */

loc_004E7D12: ;
    PUSH32(esp, 0x82F498);
    ecx = eax;
    PUSH32(esp, 0x004E7D1Eu); RECOMP_ABI_CALL(0x004E73FCu, sub_004E73FC); /* call 0x004E73FC */

loc_004E7D1E: ;
    goto loc_004E7D22;

loc_004E7D20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E7D22: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E7D28u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E7D28: ;
    ecx = eax;
    PUSH32(esp, 0x004E7D2Fu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E7D2F: ;
    ebx = esi + 8;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004E7D3Au); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004E7D3A: ;
    PUSH32(esp, 0x004E7D3Fu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7D3F: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x004E7D49u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7D49: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8055; /* je: equal / zero */

loc_004E7D54: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x82F494);

loc_004E7D5B: ;
    ecx = eax;
    PUSH32(esp, 0x004E7D62u); RECOMP_ABI_CALL(0x004E73BBu, sub_004E73BB); /* call 0x004E73BB */

loc_004E7D62: ;
    goto loc_004E8057;

loc_004E7D67: ;
    PUSH32(esp, 0x004E7D6Cu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7D6C: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004E7D78u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7D78: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7D8B; /* je: equal / zero */

loc_004E7D7F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004E7D89u); RECOMP_ABI_CALL(0x004BE6C9u, sub_004BE6C9); /* call 0x004BE6C9 */

loc_004E7D89: ;
    goto loc_004E7D8D;

loc_004E7D8B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E7D8D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E7D93u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E7D93: ;
    ecx = eax;
    PUSH32(esp, 0x004E7D9Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E7D9A: ;
    esi = eax;
    PUSH32(esp, 0x004E7DA1u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7DA1: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004E7DABu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7DAB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8175; /* je: equal / zero */

loc_004E7DB6: ;
    ecx = eax;
    PUSH32(esp, 0x004E7DBDu); RECOMP_ABI_CALL(0x004E74BDu, sub_004E74BD); /* call 0x004E74BD */

loc_004E7DBD: ;
    goto loc_004E8177;

loc_004E7DC2: ;
    PUSH32(esp, 0x004E7DC7u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7DC7: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004E7DD3u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7DD3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7DE6; /* je: equal / zero */

loc_004E7DDA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    ecx = eax;
    PUSH32(esp, 0x004E7DE4u); RECOMP_ABI_CALL(0x004BE6C9u, sub_004BE6C9); /* call 0x004BE6C9 */

loc_004E7DE4: ;
    goto loc_004E7DE8;

loc_004E7DE6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E7DE8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E7DEEu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E7DEE: ;
    ecx = eax;
    PUSH32(esp, 0x004E7DF5u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E7DF5: ;
    esi = eax;
    PUSH32(esp, 0x004E7DFCu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7DFC: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004E7E06u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7E06: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7E1B; /* je: equal / zero */

loc_004E7E0D: ;
    PUSH32(esp, 0x86D2C8);
    ecx = eax;
    PUSH32(esp, 0x004E7E19u); RECOMP_ABI_CALL(0x004E73FCu, sub_004E73FC); /* call 0x004E73FC */

loc_004E7E19: ;
    goto loc_004E7E1D;

loc_004E7E1B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E7E1D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E7E23u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E7E23: ;
    ecx = eax;
    PUSH32(esp, 0x004E7E2Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E7E2A: ;
    ebx = esi + 8;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004E7E35u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004E7E35: ;
    PUSH32(esp, 0x004E7E3Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7E3A: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004E7E44u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7E44: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8055; /* je: equal / zero */

loc_004E7E4F: ;
    PUSH32(esp, 0x86D2C0);
    ecx = eax;
    PUSH32(esp, 0x004E7E5Bu); RECOMP_ABI_CALL(0x004E7483u, sub_004E7483); /* call 0x004E7483 */

loc_004E7E5B: ;
    goto loc_004E8057;

loc_004E7E60: ;
    PUSH32(esp, 0x004E7E65u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7E65: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004E7E71u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7E71: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7E84; /* je: equal / zero */

loc_004E7E78: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    ecx = eax;
    PUSH32(esp, 0x004E7E82u); RECOMP_ABI_CALL(0x004BE6C9u, sub_004BE6C9); /* call 0x004BE6C9 */

loc_004E7E82: ;
    goto loc_004E7E86;

loc_004E7E84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E7E86: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E7E8Cu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E7E8C: ;
    ecx = eax;
    PUSH32(esp, 0x004E7E93u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E7E93: ;
    esi = eax;
    PUSH32(esp, 0x004E7E9Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7E9A: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004E7EA4u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7EA4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7E1B; /* je: equal / zero */

loc_004E7EAF: ;
    PUSH32(esp, 0x86D2B8);
    ecx = eax;
    PUSH32(esp, 0x004E7EBBu); RECOMP_ABI_CALL(0x004E7449u, sub_004E7449); /* call 0x004E7449 */

loc_004E7EBB: ;
    goto loc_004E7E1D;

loc_004E7EC0: ;
    PUSH32(esp, 0x004E7EC5u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7EC5: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004E7ED1u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7ED1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7EE4; /* je: equal / zero */

loc_004E7ED8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    ecx = eax;
    PUSH32(esp, 0x004E7EE2u); RECOMP_ABI_CALL(0x004BE6C9u, sub_004BE6C9); /* call 0x004BE6C9 */

loc_004E7EE2: ;
    goto loc_004E7EE6;

loc_004E7EE4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E7EE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E7EECu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E7EEC: ;
    ecx = eax;
    PUSH32(esp, 0x004E7EF3u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E7EF3: ;
    esi = eax;
    PUSH32(esp, 0x004E7EFAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7EFA: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x004E7F04u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7F04: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7F1B; /* je: equal / zero */

loc_004E7F0B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x86D2C0);
    ecx = eax;
    PUSH32(esp, 0x004E7F19u); RECOMP_ABI_CALL(0x004E73BBu, sub_004E73BB); /* call 0x004E73BB */

loc_004E7F19: ;
    goto loc_004E7F1D;

loc_004E7F1B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E7F1D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E7F23u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E7F23: ;
    ecx = eax;
    PUSH32(esp, 0x004E7F2Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E7F2A: ;
    ebx = esi + 8;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004E7F35u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004E7F35: ;
    PUSH32(esp, 0x004E7F3Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7F3A: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004E7F44u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7F44: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8055; /* je: equal / zero */

loc_004E7F4F: ;
    PUSH32(esp, 0x86D2AC);
    ecx = eax;
    PUSH32(esp, 0x004E7F5Bu); RECOMP_ABI_CALL(0x004E73FCu, sub_004E73FC); /* call 0x004E73FC */

loc_004E7F5B: ;
    goto loc_004E8057;

loc_004E7F60: ;
    PUSH32(esp, 0x004E7F65u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7F65: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004E7F71u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7F71: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7F84; /* je: equal / zero */

loc_004E7F78: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    ecx = eax;
    PUSH32(esp, 0x004E7F82u); RECOMP_ABI_CALL(0x004BE6C9u, sub_004BE6C9); /* call 0x004BE6C9 */

loc_004E7F82: ;
    goto loc_004E7F86;

loc_004E7F84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E7F86: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E7F8Cu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E7F8C: ;
    ecx = eax;
    PUSH32(esp, 0x004E7F93u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E7F93: ;
    esi = eax;
    PUSH32(esp, 0x004E7F9Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7F9A: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004E7FA4u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7FA4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7F1B; /* je: equal / zero */

loc_004E7FAF: ;
    PUSH32(esp, 0x86D2A0);
    ecx = eax;
    PUSH32(esp, 0x004E7FBBu); RECOMP_ABI_CALL(0x004E7449u, sub_004E7449); /* call 0x004E7449 */

loc_004E7FBB: ;
    goto loc_004E7F1D;

loc_004E7FC0: ;
    PUSH32(esp, 0x004E7FC5u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7FC5: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004E7FD1u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E7FD1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E7FE4; /* je: equal / zero */

loc_004E7FD8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    ecx = eax;
    PUSH32(esp, 0x004E7FE2u); RECOMP_ABI_CALL(0x004BE6C9u, sub_004BE6C9); /* call 0x004BE6C9 */

loc_004E7FE2: ;
    goto loc_004E7FE6;

loc_004E7FE4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E7FE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E7FECu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E7FEC: ;
    ecx = eax;
    PUSH32(esp, 0x004E7FF3u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E7FF3: ;
    esi = eax;
    PUSH32(esp, 0x004E7FFAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E7FFA: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004E8004u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E8004: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8019; /* je: equal / zero */

loc_004E800B: ;
    PUSH32(esp, 0x86D294);
    ecx = eax;
    PUSH32(esp, 0x004E8017u); RECOMP_ABI_CALL(0x004E73FCu, sub_004E73FC); /* call 0x004E73FC */

loc_004E8017: ;
    goto loc_004E801B;

loc_004E8019: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E801B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E8021u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E8021: ;
    ecx = eax;
    PUSH32(esp, 0x004E8028u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E8028: ;
    ebx = esi + 8;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004E8033u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004E8033: ;
    PUSH32(esp, 0x004E8038u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E8038: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x004E8042u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E8042: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8055; /* je: equal / zero */

loc_004E8049: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x86D2C0);
    goto loc_004E7D5B;

loc_004E8055: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E8057: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E805Du); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E805D: ;
    ecx = eax;
    PUSH32(esp, 0x004E8064u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E8064: ;
    ecx = ebx;
    goto loc_004E8187;

loc_004E806B: ;
    PUSH32(esp, 0x004E8070u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E8070: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004E807Cu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E807C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E808F; /* je: equal / zero */

loc_004E8083: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004E808Du); RECOMP_ABI_CALL(0x004BE6C9u, sub_004BE6C9); /* call 0x004BE6C9 */

loc_004E808D: ;
    goto loc_004E8091;

loc_004E808F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E8091: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E8097u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E8097: ;
    ecx = eax;
    PUSH32(esp, 0x004E809Eu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E809E: ;
    esi = eax;
    PUSH32(esp, 0x004E80A5u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E80A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004E80AFu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E80AF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8175; /* je: equal / zero */

loc_004E80BA: ;
    PUSH32(esp, 0x830420);
    goto loc_004E8111;

loc_004E80C1: ;
    PUSH32(esp, 0x004E80C6u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E80C6: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004E80D2u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E80D2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E80E5; /* je: equal / zero */

loc_004E80D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004E80E3u); RECOMP_ABI_CALL(0x004BE6C9u, sub_004BE6C9); /* call 0x004BE6C9 */

loc_004E80E3: ;
    goto loc_004E80E7;

loc_004E80E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E80E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E80EDu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E80ED: ;
    ecx = eax;
    PUSH32(esp, 0x004E80F4u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E80F4: ;
    esi = eax;
    PUSH32(esp, 0x004E80FBu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E80FB: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004E8105u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E8105: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8175; /* je: equal / zero */

loc_004E810C: ;
    PUSH32(esp, 0x86D288);

loc_004E8111: ;
    ecx = eax;
    PUSH32(esp, 0x004E8118u); RECOMP_ABI_CALL(0x004E7483u, sub_004E7483); /* call 0x004E7483 */

loc_004E8118: ;
    goto loc_004E8177;

loc_004E811A: ;
    PUSH32(esp, 0x004E811Fu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E811F: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004E812Bu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E812B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E813E; /* je: equal / zero */

loc_004E8132: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004E813Cu); RECOMP_ABI_CALL(0x004BE6C9u, sub_004BE6C9); /* call 0x004BE6C9 */

loc_004E813C: ;
    goto loc_004E8140;

loc_004E813E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E8140: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E8146u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E8146: ;
    ecx = eax;
    PUSH32(esp, 0x004E814Du); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E814D: ;
    esi = eax;
    PUSH32(esp, 0x004E8154u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E8154: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x004E815Eu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E815E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8175; /* je: equal / zero */

loc_004E8165: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x7DEFE8);
    ecx = eax;
    PUSH32(esp, 0x004E8173u); RECOMP_ABI_CALL(0x004E73BBu, sub_004E73BB); /* call 0x004E73BB */

loc_004E8173: ;
    goto loc_004E8177;

loc_004E8175: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E8177: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E817Du); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E817D: ;
    ecx = eax;
    PUSH32(esp, 0x004E8184u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E8184: ;
    ecx = esi + 8;

loc_004E8187: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E818Du); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004E818D: ;
    PUSH32(esp, 0x004E8192u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E8192: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x004E819Cu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E819C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E81B6; /* je: equal / zero */

loc_004E81A3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 4));
    PUSH32(esp, 0x004E81B4u); RECOMP_ABI_CALL(0x004BFC0Au, sub_004BFC0A); /* call 0x004BFC0A */

loc_004E81B4: ;
    goto loc_004E81B8;

loc_004E81B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E81B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E81BEu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E81BE: ;
    ecx = eax;
    PUSH32(esp, 0x004E81C5u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E81C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + 0x7E) = MEM8(eax + 0x7E) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + 0x7E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if ((_fas <= 0)) { g_seh_ebp = ebp; sub_004E8227(); return; } /* jle: less or equal (signed <=) */

loc_004E81D9: ;
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + 0x7F) = MEM8(eax + 0x7F) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + 0x7F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if ((_fas > 0)) { g_seh_ebp = ebp; sub_004E822F(); return; } /* jg: greater (signed >) */

loc_004E81E1: ;
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi + 0x7D) = MEM8(edi + 0x7D) + HI8(eax);
    _fa = (uint32_t)(MEM8(edi + 0x7D)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + -128) = MEM8(ebx + -128) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebx + -128)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_004E81EE(); return; /* fallthrough 0x004E81EE */

}

/**
 * sub_004E81EE
 * Original: 0x004E81EE - 0x004E82A4 (182 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E81EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E81EE: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004E81FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E81F7u); } /* indirect call */
    }

loc_004E81FA: ;
    ebx = eax;
    PUSH32(esp, 0x004E8201u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E8201: ;
    PUSH32(esp, eax);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004E820Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E820D: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8228; /* je: equal / zero */

loc_004E8216: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E821Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E821Bu); } /* indirect call */
    }

loc_004E821E: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004E8226u); RECOMP_ABI_CALL(0x004DFD3Fu, sub_004DFD3F); /* call 0x004DFD3F */

loc_004E8226: ;
    goto loc_004E822A;

loc_004E8228: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E822A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E8230u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E8230: ;
    ecx = eax;
    PUSH32(esp, 0x004E8237u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E8237: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi);
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E8244u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E8241u); } /* indirect call */
    }

loc_004E8244: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004E829A; /* jle: less or equal (signed <=) */

loc_004E8248: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E824F: ;
    PUSH32(esp, 0x004E8254u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E8254: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004E8260u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E8260: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8271; /* je: equal / zero */

loc_004E8267: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x004E826Fu); RECOMP_ABI_CALL(0x004E731Au, sub_004E731A); /* call 0x004E731A */

loc_004E826F: ;
    goto loc_004E8273;

loc_004E8271: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E8273: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E8279u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E8279: ;
    ecx = eax;
    PUSH32(esp, 0x004E8280u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E8280: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x004E8288u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_004E8288: ;
    eax = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x100;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E8296u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E8293u); } /* indirect call */
    }

loc_004E8296: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004E824F; /* jl: less (signed <) */

loc_004E829A: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E82A4
 * Original: 0x004E82A4 - 0x004E82AC (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E82A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E82A4: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E7C93(); return; /* tail jmp 0x004E7C93 */

}

/**
 * sub_004E82AC
 * Original: 0x004E82AC - 0x004E82D0 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E82AC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E82AC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E82B4u); RECOMP_ABI_CALL(0x004E7C51u, sub_004E7C51); /* call 0x004E7C51 */

loc_004E82B4: ;
    ecx = esi + 0x48;
    PUSH32(esp, 0x004E82BCu); RECOMP_ABI_CALL(0x004E9EA4u, sub_004E9EA4); /* call 0x004E9EA4 */

loc_004E82BC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E82CA; /* je: equal / zero */

loc_004E82C3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E82C9u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E82C9: ;
    POP32(esp, ecx);

loc_004E82CA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E82D0
 * Original: 0x004E82D0 - 0x004E832D (93 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E82D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E82D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x004E82DAu); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004E82DA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004E82E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E82DEu); } /* indirect call */
    }

loc_004E82E1: ;
    edi = eax;
    PUSH32(esp, 0x004E82E8u); RECOMP_ABI_CALL(0x004551E0u, sub_004551E0); /* call 0x004551E0 */

loc_004E82E8: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x6C6F636B);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E82F6u); RECOMP_ABI_CALL(0x004554D0u, sub_004554D0); /* call 0x004554D0 */

loc_004E82F6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x706F7274);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E8302u); RECOMP_ABI_CALL(0x004554D0u, sub_004554D0); /* call 0x004554D0 */

loc_004E8302: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E8308u); RECOMP_ABI_CALL(0x004553E0u, sub_004553E0); /* call 0x004553E0 */

loc_004E8308: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E8319; /* je: equal / zero */

loc_004E830F: ;
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x20), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E8319; /* jne: not equal / not zero */

loc_004E8315: ;
    PUSH32(esp, 0);
    goto loc_004E831B;

loc_004E8319: ;
    PUSH32(esp, 1);

loc_004E831B: ;
    PUSH32(esp, 0x73706B72);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E8326u); RECOMP_ABI_CALL(0x004554D0u, sub_004554D0); /* call 0x004554D0 */

loc_004E8326: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E832D
 * Original: 0x004E832D - 0x004E8331 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E832D(void)
{

loc_004E832D: ;
    SET_LO8(eax, MEM8(ecx + 0x20));
    esp += 4; return; /* ret */

}

/**
 * sub_004E8331
 * Original: 0x004E8331 - 0x004E8336 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8331(void)
{

loc_004E8331: ;
    MEM8(ecx + 0x20) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_004E8336
 * Original: 0x004E8336 - 0x004E833B (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8336(void)
{

loc_004E8336: ;
    MEM8(ecx + 0x20) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004E833B
 * Original: 0x004E833B - 0x004E83C5 (138 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E833B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E833B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E834Bu); RECOMP_ABI_CALL(0x004E9EE3u, sub_004E9EE3); /* call 0x004E9EE3 */

loc_004E834B: ;
    ebx = esi + 0x14;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8355u); RECOMP_ABI_CALL(0x004AD96Au, sub_004AD96A); /* call 0x004AD96A */

loc_004E8355: ;
    edi = esi + 0x18;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E835Fu); RECOMP_ABI_CALL(0x004DCA26u, sub_004DCA26); /* call 0x004DCA26 */

loc_004E835F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x86D2F4;
    MEM32(esi + 8) = 0x86D2E4;
    MEM32(ebx) = 0x86D2DC;
    MEM32(edi) = 0x86D2D0;
    MEM32(esi + 0x1C) = eax;
    MEM8(esi + 0x20) = LO8(eax);
    MEM32(esi + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8388u); RECOMP_ABI_CALL(0x004DCA05u, sub_004DCA05); /* call 0x004DCA05 */

loc_004E8388: ;
    edx = MEM32(eax);
    ecx = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E839Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E8398u); } /* indirect call */
    }

loc_004E839B: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E83A9u); RECOMP_ABI_CALL(0x00454F70u, sub_00454F70); /* call 0x00454F70 */

loc_004E83A9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E83B3u); RECOMP_ABI_CALL(0x004E9F67u, sub_004E9F67); /* call 0x004E9F67 */

loc_004E83B3: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E83BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E83BCu); } /* indirect call */
    }

loc_004E83BE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004E83C5
 * Original: 0x004E83C5 - 0x004E83C8 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E83C5(void)
{

loc_004E83C5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E83C8
 * Original: 0x004E83C8 - 0x004E83D0 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E83C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E83C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E861F(); return; /* tail jmp 0x004E861F */

}

/**
 * sub_004E83D0
 * Original: 0x004E83D0 - 0x004E83D8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E83D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E83D0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E861F(); return; /* tail jmp 0x004E861F */

}

/**
 * sub_004E83D8
 * Original: 0x004E83D8 - 0x004E83E0 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E83D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E83D8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E861F(); return; /* tail jmp 0x004E861F */

}

/**
 * sub_004E83E0
 * Original: 0x004E83E0 - 0x004E8440 (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E83E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E83E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + 0x18;
    MEM32(esi) = 0x86D2F4;
    MEM32(esi + 8) = 0x86D2E4;
    ebx = esi + 0x14;
    MEM32(ebx) = 0x86D2DC;
    MEM32(edi) = 0x86D2D0;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E8410u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E840Du); } /* indirect call */
    }

loc_004E8410: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E841C; /* je: equal / zero */

loc_004E8417: ;
    PUSH32(esp, 0x004E841Cu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E841C: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8428; /* je: equal / zero */

loc_004E8423: ;
    PUSH32(esp, 0x004E8428u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E8428: ;
    ecx = edi;
    PUSH32(esp, 0x004E842Fu); RECOMP_ABI_CALL(0x004DCA2Fu, sub_004DCA2F); /* call 0x004DCA2F */

loc_004E842F: ;
    ecx = ebx;
    PUSH32(esp, 0x004E8436u); RECOMP_ABI_CALL(0x004AD973u, sub_004AD973); /* call 0x004AD973 */

loc_004E8436: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004E9F0F(); return; /* tail jmp 0x004E9F0F */

}

/**
 * sub_004E8440
 * Original: 0x004E8440 - 0x004E84C5 (133 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E8440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004E8440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004E8466; /* jne: not equal / not zero */

loc_004E844E: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004E8493; /* jne: not equal / not zero */

loc_004E8456: ;
    eax = MEM32(ecx);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xC), LO8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004E8464u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E8461u); } /* indirect call */
    }

loc_004E8464: ;
    goto loc_004E84C0;

loc_004E8466: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E8475; /* je: equal / zero */

loc_004E846B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004E8475; /* je: equal / zero */

loc_004E8470: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004E84C0; /* jne: not equal / not zero */

loc_004E8475: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004E8493; /* jne: not equal / not zero */

loc_004E847D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004E84C0; /* jne: not equal / not zero */

loc_004E8482: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004E8487u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E8484u); } /* indirect call */
    }

loc_004E8487: ;
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
    MEM8(esi + 0xC) = LO8(eax);
    goto loc_004E84C0;

loc_004E8493: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004E84C0; /* jne: not equal / not zero */

loc_004E849B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004E84A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E849Du); } /* indirect call */
    }

loc_004E84A0: ;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E84A7u); RECOMP_ABI_CALL(0x004DCA10u, sub_004DCA10); /* call 0x004DCA10 */

loc_004E84A7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7CC); /* mulss */
    ecx = eax;
    MEMF(esp) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E84C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E84BDu); } /* indirect call */
    }

loc_004E84C0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E84C5
 * Original: 0x004E84C5 - 0x004E856C (167 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E84C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004E84C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_004E8567; /* jge: greater or equal (signed >=) */

loc_004E84D5: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004E8567; /* jl: less (signed <) */

loc_004E84DF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + -24;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = edi + -4;
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edi + 4;
    ecx = MEM32(ebx);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8501u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004E8501: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x86316C));
    ecx = MEM32(eax + 8);
    PUSH32(esp, MEM32(0x863160));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004E8520u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E851Du); } /* indirect call */
    }

loc_004E8520: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8529u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004E8529: ;
    MEM32(ebp + 0xC) = esi;
    esi = edi + 0xC;
    ecx = MEM32(esi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E853Du); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_004E853D: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x863170));
    ecx = MEM32(eax + 8);
    PUSH32(esp, MEM32(0x863160));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004E855Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E8559u); } /* indirect call */
    }

loc_004E855C: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8565u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004E8565: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004E8567: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E856C
 * Original: 0x004E856C - 0x004E861F (179 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E856C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004E856C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_004E861A; /* jl: less (signed <) */

loc_004E857C: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_004E861A; /* jge: greater or equal (signed >=) */

loc_004E8586: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x863258);
    PUSH32(esp, 2);
    MEM8(edi + 8) = LO8(eax);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(0x86316C));
    ebx = edi + 4;
    PUSH32(esp, MEM32(0x863160));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E85AFu); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004E85AF: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E85BAu); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004E85BA: ;
    ecx = MEM32(ebx);
    esi = edi + -24;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = edi + -4;
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E85D7u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004E85D7: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, 5);
    PUSH32(esp, 0x863260);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0xB);
    PUSH32(esp, MEM32(0x863170));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(0x863160));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E85FCu); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004E85FC: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8607u); RECOMP_ABI_CALL(0x004AE877u, sub_004AE877); /* call 0x004AE877 */

loc_004E8607: ;
    ecx = MEM32(edi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8618u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_004E8618: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004E861A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E861F
 * Original: 0x004E861F - 0x004E863B (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E861F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E861F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E8627u); RECOMP_ABI_CALL(0x004E83E0u, sub_004E83E0); /* call 0x004E83E0 */

loc_004E8627: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E8635; /* je: equal / zero */

loc_004E862E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E8634u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E8634: ;
    POP32(esp, ecx);

loc_004E8635: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E8643
 * Original: 0x004E8643 - 0x004E86A5 (98 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E8643(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E8643: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E866A; /* je: equal / zero */

loc_004E8654: ;
    ecx = esi + 0x4C;
    MEM32(esi + 0x24) = 0x86D368;
    MEM32(esi + 0x2C) = 0x86D360;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E866Au); RECOMP_ABI_CALL(0x004E9E9Bu, sub_004E9E9B); /* call 0x004E9E9B */

loc_004E866A: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8676u); RECOMP_ABI_CALL(0x004EA14Du, sub_004EA14D); /* call 0x004EA14D */

loc_004E8676: ;
    eax = MEM32(esi + 0x24);
    MEM32(esi) = 0x86D34C;
    MEM32(esi + 0x28) = 0x86D328;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 0x24) = 0x86D314;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 4);
    ecx = eax + -40;
    MEM32(eax + esi + 0x20) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E86A5
 * Original: 0x004E86A5 - 0x004E86D2 (45 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E86A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E86A5: ;
    eax = MEM32(ecx + 0x24);
    MEM32(ecx) = 0x86D34C;
    MEM32(ecx + 0x28) = 0x86D328;
    eax = MEM32(eax + 4);
    MEM32(eax + ecx + 0x24) = 0x86D314;
    eax = MEM32(ecx + 0x24);
    eax = MEM32(eax + 4);
    edx = eax + -40;
    MEM32(eax + ecx + 0x20) = edx;
    g_seh_ebp = ebp; sub_004EA7AA(); return; /* tail jmp 0x004EA7AA */

}

/**
 * sub_004E86D2
 * Original: 0x004E86D2 - 0x004E86DA (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E86D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E86D2: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E87F0(); return; /* tail jmp 0x004E87F0 */

}

/**
 * sub_004E86DA
 * Original: 0x004E86DA - 0x004E86E2 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E86DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E86DA: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EA7EF(); return; /* tail jmp 0x004EA7EF */

}

/**
 * sub_004E86E2
 * Original: 0x004E86E2 - 0x004E86ED (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E86E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E86E2: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E9CF4(); return; /* tail jmp 0x004E9CF4 */

}

/**
 * sub_004E86ED
 * Original: 0x004E86ED - 0x004E86F8 (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E86ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E86ED: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E9D20(); return; /* tail jmp 0x004E9D20 */

}

/**
 * sub_004E86F8
 * Original: 0x004E86F8 - 0x004E8711 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E86F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E86F8: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E87F0(); return; /* tail jmp 0x004E87F0 */

    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x28);
    ecx = eax + 0x10;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_004E8711
 * Original: 0x004E8711 - 0x004E8778 (103 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8711(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E8711: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004E8718u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E8718: ;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004E8724u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004E8724: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8742; /* je: equal / zero */

loc_004E872D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004E8733u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E8733: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    ecx = esi;
    PUSH32(esp, 0x004E8740u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004E8740: ;
    goto loc_004E8744;

loc_004E8742: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E8744: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E874Au); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004E874A: ;
    ecx = eax;
    PUSH32(esp, 0x004E8751u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004E8751: ;
    esi = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    edi = MEM32(esi);
    ecx = eax + 0x10;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E8768u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E8765u); } /* indirect call */
    }

loc_004E8768: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86D370);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x1C); PUSH32(esp, 0x004E8773u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E8770u); } /* indirect call */
    }

loc_004E8773: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E8778
 * Original: 0x004E8778 - 0x004E87E8 (112 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8778(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E8778: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + -16));
    PUSH32(esp, MEM32(esi + -20));
    PUSH32(esp, 0x004E8786u); RECOMP_ABI_CALL(0x005EDDC0u, sub_005EDDC0); /* call 0x005EDDC0 */

loc_004E8786: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x004E879Bu); RECOMP_ABI_CALL(0x005E2CB0u, sub_005E2CB0); /* call 0x005E2CB0 */

loc_004E879B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004E87A2u); RECOMP_ABI_CALL(0x00453DC0u, sub_00453DC0); /* call 0x00453DC0 */

loc_004E87A2: ;
    PUSH32(esp, 0x696E676D);
    PUSH32(esp, 0x004E87ACu); RECOMP_ABI_CALL(0x004580C0u, sub_004580C0); /* call 0x004580C0 */

loc_004E87AC: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x004E87B6u); RECOMP_ABI_CALL(0x004535C0u, sub_004535C0); /* call 0x004535C0 */

loc_004E87B6: ;
    PUSH32(esp, 0x004E87BBu); RECOMP_ABI_CALL(0x004580E0u, sub_004580E0); /* call 0x004580E0 */

loc_004E87BB: ;
    PUSH32(esp, 0x82FA88);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7469746C);
    PUSH32(esp, 0x004E87CEu); RECOMP_ABI_CALL(0x00453A80u, sub_00453A80); /* call 0x00453A80 */

loc_004E87CE: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + -76;
    PUSH32(esp, 0x004E87D9u); RECOMP_ABI_CALL(0x004EA1C6u, sub_004EA1C6); /* call 0x004EA1C6 */

loc_004E87D9: ;
    ecx = MEM32(0x90E7AC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004E87E6u); RECOMP_ABI_CALL(0x004DC1B0u, sub_004DC1B0); /* call 0x004DC1B0 */

loc_004E87E6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E87E8
 * Original: 0x004E87E8 - 0x004E87F0 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E87E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E87E8: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E8778(); return; /* tail jmp 0x004E8778 */

}

/**
 * sub_004E87F0
 * Original: 0x004E87F0 - 0x004E8814 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E87F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E87F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E87F8u); RECOMP_ABI_CALL(0x004E86A5u, sub_004E86A5); /* call 0x004E86A5 */

loc_004E87F8: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x004E8800u); RECOMP_ABI_CALL(0x004E9EA4u, sub_004E9EA4); /* call 0x004E9EA4 */

loc_004E8800: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E880E; /* je: equal / zero */

loc_004E8807: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E880Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E880D: ;
    POP32(esp, ecx);

loc_004E880E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E8814
 * Original: 0x004E8814 - 0x004E885A (70 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8814(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E8814: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x448;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E882C; /* je: equal / zero */

loc_004E8824: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E8829u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E8826u); } /* indirect call */
    }

loc_004E8829: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004E882C: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E883E; /* je: equal / zero */

loc_004E8833: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E8839u); RECOMP_ABI_CALL(0x005EF2E0u, sub_005EF2E0); /* call 0x005EF2E0 */

loc_004E8839: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_004E883E: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8857; /* je: equal / zero */

loc_004E8844: ;
    PUSH32(esp, 0x004E8849u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E8849: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x10));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004E8853u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E8850u); } /* indirect call */
    }

loc_004E8853: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004E8857: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E885A
 * Original: 0x004E885A - 0x004E888E (52 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E885A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E885A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E8862u); RECOMP_ABI_CALL(0x004EA8D1u, sub_004EA8D1); /* call 0x004EA8D1 */

loc_004E8862: ;
    MEM32(esi + 8) = 0x863F20;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x448) = eax;
    MEM32(esi + 0x44C) = eax;
    MEM32(esi) = 0x86D4F8;
    MEM32(esi + 8) = 0x86D4E4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E888E
 * Original: 0x004E888E - 0x004E888F (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E888E(void)
{

loc_004E888E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004E888F
 * Original: 0x004E888F - 0x004E8898 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E888F(void)
{

loc_004E888F: ;
    eax = ecx + 0x244;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E8898
 * Original: 0x004E8898 - 0x004E889D (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004E8898(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E8898: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E889D
 * Original: 0x004E889D - 0x004E88A1 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E889D(void)
{

loc_004E889D: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_004E88A1
 * Original: 0x004E88A1 - 0x004E88A2 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E88A1(void)
{

loc_004E88A1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004E88A2
 * Original: 0x004E88A2 - 0x004E88A9 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E88A2(void)
{

loc_004E88A2: ;
    eax = ecx + 0x408;
    esp += 4; return; /* ret */

}

/**
 * sub_004E88A9
 * Original: 0x004E88A9 - 0x004E88CD (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E88A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E88A9: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D4F8;
    MEM32(esi + 8) = 0x86D4E4;
    PUSH32(esp, 0x004E88BEu); RECOMP_ABI_CALL(0x004E8814u, sub_004E8814); /* call 0x004E8814 */

loc_004E88BE: ;
    MEM32(esi + 8) = 0x863F20;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004EA8E3(); return; /* tail jmp 0x004EA8E3 */

}

/**
 * sub_004E88CD
 * Original: 0x004E88CD - 0x004E88F8 (43 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E88CD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E88CD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x448;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E88E5; /* je: equal / zero */

loc_004E88DD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E88E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E88DFu); } /* indirect call */
    }

loc_004E88E2: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004E88E5: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, 0x004E88F1u); RECOMP_ABI_CALL(0x005EF740u, sub_005EF740); /* call 0x005EF740 */

loc_004E88F1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E88F8
 * Original: 0x004E88F8 - 0x004E8A85 (397 bytes, 124 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E88F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E88F8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x930) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x930;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8A78; /* je: equal / zero */

loc_004E8919: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8A6F; /* je: equal / zero */

loc_004E8922: ;
    if (CMP_BE(_fa, _fb)) goto loc_004E8A78; /* jbe: below or equal (unsigned <=) */

loc_004E8928: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004E8A78; /* ja: above (unsigned >) */

loc_004E8932: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x92C);
    PUSH32(esp, ecx);
    eax = ebp + -2352;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8946u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004E8946: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 0x64);
    POP32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -1080;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E895Au); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E895A: ;
    PUSH32(esp, ebx);
    eax = esi + 0x33;
    PUSH32(esp, eax);
    eax = ebp + -980;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E896Bu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E896B: ;
    PUSH32(esp, 0xC8);
    eax = esi + 0x66;
    PUSH32(esp, eax);
    eax = ebp + -880;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8980u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E8980: ;
    PUSH32(esp, ebx);
    eax = esi + 0xCC;
    PUSH32(esp, eax);
    eax = ebp + -680;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8994u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E8994: ;
    PUSH32(esp, ebx);
    eax = esi + 0xFF;
    PUSH32(esp, eax);
    eax = ebp + -580;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E89A8u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E89A8: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    eax = esi + 0x132;
    PUSH32(esp, eax);
    eax = ebp + -480;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E89BFu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E89BF: ;
    PUSH32(esp, 0x32);
    eax = esi + 0x18F;
    PUSH32(esp, eax);
    eax = ebp + -296;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E89D4u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E89D4: ;
    PUSH32(esp, 0x28);
    eax = esi + 0x165;
    PUSH32(esp, eax);
    eax = ebp + -380;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E89E9u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E89E9: ;
    PUSH32(esp, 0x28);
    eax = esi + 0x184;
    PUSH32(esp, eax);
    eax = ebp + -340;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E89FEu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E89FE: ;
    PUSH32(esp, ebx);
    eax = esi + 0x1C2;
    PUSH32(esp, eax);
    eax = ebp + -246;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8A12u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E8A12: ;
    PUSH32(esp, 0x50);
    eax = esi + 0x1F5;
    PUSH32(esp, eax);
    eax = ebp + -140;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8A27u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E8A27: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x209;
    PUSH32(esp, 0x28);
    PUSH32(esp, eax);
    eax = ebp + -60;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8A3Cu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E8A3C: ;
    eax = MEM32(esi + 0x220);
    MEM32(ebp + -20) = eax;
    eax = MEM32(esi + 0x224);
    MEM32(ebp + -16) = eax;
    eax = ebp + -2352;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8A5Du); RECOMP_ABI_CALL(0x005F06E0u, sub_005F06E0); /* call 0x005F06E0 */

loc_004E8A5D: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(edi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8A68u); RECOMP_ABI_CALL(0x005EF740u, sub_005EF740); /* call 0x005EF740 */

loc_004E8A68: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    goto loc_004E8A78;

loc_004E8A6F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8A76u); RECOMP_ABI_CALL(0x005EF740u, sub_005EF740); /* call 0x005EF740 */

loc_004E8A76: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004E8A78: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8A81u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004E8A81: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E8A85
 * Original: 0x004E8A85 - 0x004E8AF3 (110 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E8A85(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E8A85: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x608) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x608;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E8AD9; /* je: equal / zero */

loc_004E8AA1: ;
    if (CMP_BE(_fa, _fb)) goto loc_004E8AE5; /* jbe: below or equal (unsigned <=) */

loc_004E8AA3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004E8AE5; /* ja: above (unsigned >) */

loc_004E8AA8: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -272;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8ABCu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E8ABC: ;
    eax = ebp + -1544;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8ACBu); RECOMP_ABI_CALL(0x005F09D0u, sub_005F09D0); /* call 0x005F09D0 */

loc_004E8ACB: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8AD4u); RECOMP_ABI_CALL(0x005EF740u, sub_005EF740); /* call 0x005EF740 */

loc_004E8AD4: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E8AE5;

loc_004E8AD9: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8AE3u); RECOMP_ABI_CALL(0x005EF740u, sub_005EF740); /* call 0x005EF740 */

loc_004E8AE3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004E8AE5: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8AEFu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004E8AEF: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E8AF3
 * Original: 0x004E8AF3 - 0x004E8B90 (157 bytes, 54 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E8AF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E8AF3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, edi);
    eax = ebp + -292;
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8B17u); RECOMP_ABI_CALL(0x005F0A70u, sub_005F0A70); /* call 0x005F0A70 */

loc_004E8B17: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8B20u); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004E8B20: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004E8B31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E8B2Eu); } /* indirect call */
    }

loc_004E8B31: ;
    ecx = 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x450) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004E8B46; /* jbe: below or equal (unsigned <=) */

loc_004E8B40: ;
    MEM32(esi + 0x450) = ecx;

loc_004E8B46: ;
    eax = edi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x450)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x450), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E8B75; /* jbe: below or equal (unsigned <=) */

loc_004E8B52: ;
    edx = esi + 0x454;

loc_004E8B58: ;
    MEM32(edx) = eax;
    goto loc_004E8B62;

loc_004E8B5C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8B68; /* je: equal / zero */

loc_004E8B61: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004E8B62: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E8B5C; /* jne: not equal / not zero */

loc_004E8B68: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x450)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x450) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E8B58; /* jb: below (unsigned <) */

loc_004E8B75: ;
    ecx = MEM32(esi + 0x450);
    MEM32(esi + ecx * 4 + 0x454) = eax;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8B8Cu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004E8B8C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004E8B90
 * Original: 0x004E8B90 - 0x004E8BAE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8B90(void)
{

loc_004E8B90: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004E8BA4u); RECOMP_ABI_CALL(0x004E8AF3u, sub_004E8AF3); /* call 0x004E8AF3 */

loc_004E8BA4: ;
    eax = MEM32(esi + 0x450);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004E8BAE
 * Original: 0x004E8BAE - 0x004E8BD3 (37 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8BAE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E8BAE: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + eax * 4 + 0x454);
    eax = MEM32(ecx + eax * 4 + 0x458);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004E8BCDu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E8BCD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004E8BD3
 * Original: 0x004E8BD3 - 0x004E8BF7 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8BD3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E8BD3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004E8BDB;

loc_004E8BDB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E8BE3u); RECOMP_ABI_CALL(0x004E88A9u, sub_004E88A9); /* call 0x004E88A9 */

loc_004E8BE3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E8BF1; /* je: equal / zero */

loc_004E8BEA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E8BF0u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E8BF0: ;
    POP32(esp, ecx);

loc_004E8BF1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E8BDB
 * Original: 0x004E8BDB - 0x004E8BF7 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8BDB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E8BDB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E8BE3u); RECOMP_ABI_CALL(0x004E88A9u, sub_004E88A9); /* call 0x004E88A9 */

loc_004E8BE3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E8BF1; /* je: equal / zero */

loc_004E8BEA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E8BF0u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E8BF0: ;
    POP32(esp, ecx);

loc_004E8BF1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E8BF7
 * Original: 0x004E8BF7 - 0x004E8D0E (279 bytes, 98 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E8BF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E8BF7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x38);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x636F6E66);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8C2Au); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_004E8C2A: ;
    MEM32(ebp + -264) = eax;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if ((_fa == 0)) goto loc_004E8C7D; /* je: equal / zero */

loc_004E8C3A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004E8C71; /* je: equal / zero */

loc_004E8C3D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004E8C65; /* je: equal / zero */

loc_004E8C40: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004E8C59; /* je: equal / zero */

loc_004E8C43: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004E8C4D; /* je: equal / zero */

loc_004E8C46: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_004E8CFF;

loc_004E8C4D: ;
    ebx = 0x86D5B8;
    edi = 0x86D5AC;
    goto loc_004E8C92;

loc_004E8C59: ;
    ebx = 0x86D5A0;
    edi = 0x86D594;
    goto loc_004E8C92;

loc_004E8C65: ;
    ebx = 0x86D58C;
    edi = 0x86D580;
    goto loc_004E8C92;

loc_004E8C71: ;
    ebx = 0x86D574;
    edi = 0x86D568;
    goto loc_004E8C92;

loc_004E8C7D: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    ebx = 0x86D558;
    if (CMP_NE(_fa, _fb)) goto loc_004E8C8D; /* jne: not equal / not zero */

loc_004E8C88: ;
    ebx = 0x86D548;

loc_004E8C8D: ;
    edi = 0x86D538;

loc_004E8C92: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8CA1; /* je: equal / zero */

loc_004E8C96: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004E8C9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E8C9Au); } /* indirect call */
    }

loc_004E8C9D: ;
    esi = eax;
    goto loc_004E8CA3;

loc_004E8CA1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E8CA3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -264));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8CB0u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004E8CB0: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8CB8u); RECOMP_ABI_CALL(0x005E53B0u, sub_005E53B0); /* call 0x005E53B0 */

loc_004E8CB8: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004E8CC4; /* je: equal / zero */

loc_004E8CC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E8C46; /* jb: below (unsigned <) */

loc_004E8CC4: ;
    esi = 0x7B891F;
    PUSH32(esp, esi);
    PUSH32(esp, 0x100);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -264));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8CE2u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004E8CE2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8CEAu); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_004E8CEA: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8CF7u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004E8CF7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_004E8CFF: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E8D0Au); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004E8D0A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E8D0E
 * Original: 0x004E8D0E - 0x004E92C3 (1461 bytes, 399 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E8D0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E8D0E: ;
    PUSH32(esp, ebp);
    ebp = esp + -108;
    _fb = (uint32_t)(0xC4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + 0x68) = eax;
    eax = MEM32(ebp + 0x74);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ecx + 0x44C) = eax;
    esi = MEM32(0x90E7AC);
    PUSH32(esp, edi);
    MEM32(ebp + -3032) = ecx;
    MEM32(ebp + -3040) = esi;
    PUSH32(esp, 0x004E8D44u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004E8D44: ;
    MEM32(ebp + -3036) = eax;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x636F6E66);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E8D5Eu); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_004E8D5E: ;
    MEM32(ebp + -3028) = eax;
    eax = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_A(_fa, _fb)) goto loc_004E92AF; /* ja: above (unsigned >) */

loc_004E8D72: ;
    esi = 0x7B891F;
    { uint32_t _jt = MEM32(eax * 4 + 0x4E92C3); /* switch: 10 entries, 10 targets */
    if (_jt == 0x004E8D7Eu) goto loc_004E8D7E;
    if (_jt == 0x004E8DCAu) goto loc_004E8DCA;
    if (_jt == 0x004E8E06u) goto loc_004E8E06;
    if (_jt == 0x004E8E42u) goto loc_004E8E42;
    if (_jt == 0x004E8E67u) goto loc_004E8E67;
    if (_jt == 0x004E8E96u) goto loc_004E8E96;
    if (_jt == 0x004E8EA2u) goto loc_004E8EA2;
    if (_jt == 0x004E8EAEu) goto loc_004E8EAE;
    if (_jt == 0x004E8EBAu) goto loc_004E8EBA;
    if (_jt == 0x004E92AFu) goto loc_004E92AF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004E8D7E: ;
    _fa = (uint32_t)(MEM8(ebp + 0x78)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x78), 0 (8-bit) */
    MEM32(ebp + -3016) = 0x86D558;
    if (CMP_NE(_fa, _fb)) goto loc_004E8D98; /* jne: not equal / not zero */

loc_004E8D8E: ;
    MEM32(ebp + -3016) = 0x86D548;

loc_004E8D98: ;
    _fa = (uint32_t)(MEM8(ebp + 0x78)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x78), 0 (8-bit) */
    ebx = 0x86D538;
    MEM32(ebp + -3020) = 0x86D378;
    MEM32(ebp + -3024) = 0x86D3A8;
    if (CMP_EQ(_fa, _fb)) goto loc_004E8EDA; /* je: equal / zero */

loc_004E8DBB: ;
    MEM32(ebp + -3012) = 0x86D3A2;
    goto loc_004E8EE0;

loc_004E8DCA: ;
    _fa = (uint32_t)(MEM8(ebp + 0x78)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x78), 0 (8-bit) */
    MEM32(ebp + -3016) = 0x86D574;
    ebx = 0x86D568;
    MEM32(ebp + -3020) = 0x86D390;
    MEM32(ebp + -3024) = 0x86D3BC;
    if (CMP_EQ(_fa, _fb)) goto loc_004E8EDA; /* je: equal / zero */

loc_004E8DF7: ;
    MEM32(ebp + -3012) = 0x86D3A4;
    goto loc_004E8EE0;

loc_004E8E06: ;
    _fa = (uint32_t)(MEM8(ebp + 0x78)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x78), 0 (8-bit) */
    MEM32(ebp + -3016) = 0x86D58C;
    ebx = 0x86D580;
    MEM32(ebp + -3020) = 0x86D388;
    MEM32(ebp + -3024) = 0x86D3D4;
    if (CMP_EQ(_fa, _fb)) goto loc_004E8EDA; /* je: equal / zero */

loc_004E8E33: ;
    MEM32(ebp + -3012) = 0x86D3A3;
    goto loc_004E8EE0;

loc_004E8E42: ;
    MEM32(ebp + -3016) = 0x86D5A0;
    ebx = 0x86D594;
    MEM32(ebp + -3020) = 0x86D398;
    MEM32(ebp + -3024) = 0x86D3C8;
    goto loc_004E8EDA;

loc_004E8E67: ;
    MEM32(ebp + -3016) = 0x86D5B8;
    ebx = 0x86D5AC;
    MEM32(ebp + -3020) = 0x86D398;
    MEM32(ebp + -3024) = 0x86D3C8;
    MEM32(ebp + -3012) = 0x86D3A5;
    goto loc_004E8EE0;

loc_004E8E96: ;
    MEM32(ebp + -3016) = 0x86D64C;
    goto loc_004E8EC4;

loc_004E8EA2: ;
    MEM32(ebp + -3016) = 0x86D63C;
    goto loc_004E8EC4;

loc_004E8EAE: ;
    MEM32(ebp + -3016) = 0x86D62C;
    goto loc_004E8EC4;

loc_004E8EBA: ;
    MEM32(ebp + -3016) = 0x86D61C;

loc_004E8EC4: ;
    ebx = esi;
    MEM32(ebp + -3020) = 0x86D380;
    MEM32(ebp + -3024) = 0x86D3B4;

loc_004E8EDA: ;
    MEM32(ebp + -3012) = esi;

loc_004E8EE0: ;
    ecx = MEM32(ebp + -3040);
    eax = MEM32(ecx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E8EEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E8EEAu); } /* indirect call */
    }

loc_004E8EED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8F00; /* je: equal / zero */

loc_004E8EF1: ;
    eax = MEM32(ebp + -3040);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    edi = MEM32(eax + 8);

loc_004E8F00: ;
    _fa = (uint32_t)(MEM8(ebp + 0x78)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x78), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8F39; /* je: equal / zero */

loc_004E8F06: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004E8F0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E8F0Au); } /* indirect call */
    }

loc_004E8F0D: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -3028));
    MEM32(ebp + 0x78) = eax;
    PUSH32(esp, 0x004E8F1Du); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004E8F1D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E8F25u); RECOMP_ABI_CALL(0x005E53B0u, sub_005E53B0); /* call 0x005E53B0 */

loc_004E8F25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x78) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_AE(_fa, _fb)) goto loc_004E8F39; /* jae: above or equal (unsigned >=) */

loc_004E8F2C: ;
    _fa = (uint32_t)(MEM8(0x90E7F1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x90E7F1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E92AF; /* je: equal / zero */

loc_004E8F39: ;
    PUSH32(esp, esi);
    ebx = 0x100;
    PUSH32(esp, ebx);
    eax = ebp + -448;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -3016));
    PUSH32(esp, MEM32(ebp + -3028));
    PUSH32(esp, 0x004E8F58u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004E8F58: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E8F60u); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_004E8F60: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(0x90E7F0)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x90E7F0), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E8F81; /* je: equal / zero */

loc_004E8F6C: ;
    PUSH32(esp, ebx);
    eax = ebp + -448;
    PUSH32(esp, 0x86D5E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E8F7Eu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E8F7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E8F81: ;
    eax = ebp + -448;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E8F8Eu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004E8F8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004E92AF; /* je: equal / zero */

loc_004E8F98: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + -448);
    PUSH32(esp, eax);
    PUSH32(esp, 0x86D5D4);
    eax = ebp + 0x58;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E8FB0u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004E8FB0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    eax = ebp + -704;
    PUSH32(esp, eax);
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -3028));
    PUSH32(esp, 0x004E8FCBu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004E8FCB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E8FD3u); RECOMP_ABI_CALL(0x005E4A10u, sub_005E4A10); /* call 0x005E4A10 */

loc_004E8FD3: ;
    eax = ebp + -704;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E8FE0u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004E8FE0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E900C; /* je: equal / zero */

loc_004E8FE7: ;
    eax = ebp + -447;
    PUSH32(esp, eax);
    eax = ebp + -704;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0928);
    eax = ebp + -960;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9007u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004E9007: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004E9023;

loc_004E900C: ;
    PUSH32(esp, ebx);
    eax = ebp + -448;
    PUSH32(esp, eax);
    eax = ebp + -960;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9020u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9020: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E9023: ;
    ecx = MEM32(ebp + -3032);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E9035; /* je: equal / zero */

loc_004E9030: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E9035u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9032u); } /* indirect call */
    }

loc_004E9035: ;
    PUSH32(esp, 0x004E903Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004E903A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10000);
    MEM32(ebp + -3040) = eax;
    eax = MEM32(eax);
    PUSH32(esp, 0x86D5C4);
    PUSH32(esp, MEM32(ebp + -3028));
    MEM32(ebp + 0x78) = eax;
    PUSH32(esp, 0x004E905Du); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004E905D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9065u); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004E9065: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + -3040);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x78);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E9075u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9073u); } /* indirect call */
    }

loc_004E9075: ;
    ebx = MEM32(ebp + -3032);
    PUSH32(esp, 0x10000);
    PUSH32(esp, 0x86D5C4);
    PUSH32(esp, MEM32(ebp + -3028));
    MEM32(ebx + 0x10) = eax;
    PUSH32(esp, 0x004E9093u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_004E9093: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E909Bu); RECOMP_ABI_CALL(0x005E4400u, sub_005E4400); /* call 0x005E4400 */

loc_004E909B: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x10));
    PUSH32(esp, 0x004E90A6u); RECOMP_ABI_CALL(0x005F1000u, sub_005F1000); /* call 0x005F1000 */

loc_004E90A6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004E92AF; /* je: equal / zero */

loc_004E90B4: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x70617274);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E90CDu); RECOMP_ABI_CALL(0x005E2630u, sub_005E2630); /* call 0x005E2630 */

loc_004E90CD: ;
    PUSH32(esp, 0x118);
    MEM32(ebp + -3032) = eax;
    eax = ebp + -192;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E90E6u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004E90E6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_004E90F8; /* je: equal / zero */

loc_004E90EF: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004E90F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E90F3u); } /* indirect call */
    }

loc_004E90F6: ;
    goto loc_004E9103;

loc_004E90F8: ;
    ecx = MEM32(0x90E7AC);
    PUSH32(esp, 0x004E9103u); RECOMP_ABI_CALL(0x004DC1D4u, sub_004DC1D4); /* call 0x004DC1D4 */

loc_004E9103: ;
    PUSH32(esp, eax);
    eax = ebp + -192;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9110u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9110: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E0D78);
    eax = ebp + -172;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9128u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004E9128: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, MEM32(ebp + -3032));
    eax = ebp + -108;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9139u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9139: ;
    ecx = MEM32(ebp + -3036);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E9149u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9146u); } /* indirect call */
    }

loc_004E9149: ;
    PUSH32(esp, eax);
    eax = ebp + -76;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9153u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9153: ;
    ecx = MEM32(ebp + -3036);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E9163u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9160u); } /* indirect call */
    }

loc_004E9163: ;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E916Du); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E916D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E917D; /* je: equal / zero */

loc_004E9174: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004E917Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9178u); } /* indirect call */
    }

loc_004E917B: ;
    goto loc_004E917F;

loc_004E917D: ;
    eax = esi;

loc_004E917F: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E918Bu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E918B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E91FB; /* je: equal / zero */

loc_004E9192: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x004E9199u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9196u); } /* indirect call */
    }

loc_004E9199: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x004E91A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E919Du); } /* indirect call */
    }

loc_004E91A3: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM8(ebp + -28) = LO8(eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x004E91B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E91ADu); } /* indirect call */
    }

loc_004E91B0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x004E91BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E91B4u); } /* indirect call */
    }

loc_004E91BA: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM8(ebp + -27) = LO8(eax);
    MEM8(ebp + -26) = 0;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x004E91CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E91C8u); } /* indirect call */
    }

loc_004E91CB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x004E91D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E91CFu); } /* indirect call */
    }

loc_004E91D5: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM8(ebp + -24) = LO8(eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x004E91E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E91DFu); } /* indirect call */
    }

loc_004E91E2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x004E91ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E91E6u); } /* indirect call */
    }

loc_004E91EC: ;
    edi = MEM32(ebp + -3036);
    MEM8(ebp + -23) = LO8(eax);
    MEM8(ebp + -22) = 0;
    goto loc_004E922B;

loc_004E91FB: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004E9202u); RECOMP_ABI_CALL(0x004DBF29u, sub_004DBF29); /* call 0x004DBF29 */

loc_004E9202: ;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E920Cu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E920C: ;
    edi = MEM32(ebp + -3036);
    eax = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004E921Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E921Bu); } /* indirect call */
    }

loc_004E921E: ;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9228u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9228: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E922B: ;
    eax = ebp + -192;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xC));
    PUSH32(esp, 0x004E923Au); RECOMP_ABI_CALL(0x005EF340u, sub_005EF340); /* call 0x005EF340 */

loc_004E923A: ;
    PUSH32(esp, 0x74696D65);
    PUSH32(esp, 0x86D3E0);
    PUSH32(esp, 0x61627274);
    eax = ebp + -960;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    PUSH32(esp, MEM32(ebp + -3020));
    esi = 0x400;
    PUSH32(esp, MEM32(ebp + -3012));
    eax = ebp + -1984;
    PUSH32(esp, MEM32(ebp + -3024));
    PUSH32(esp, 0x86D3F0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E927Bu); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004E927B: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E9284u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9282u); } /* indirect call */
    }

loc_004E9284: ;
    PUSH32(esp, eax);
    eax = ebp + -1984;
    PUSH32(esp, eax);
    eax = ebp + -3008;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9299u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004E9299: ;
    eax = ebp + -3008;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xC));
    PUSH32(esp, 0x004E92A8u); RECOMP_ABI_CALL(0x005EF470u, sub_005EF470); /* call 0x005EF470 */

loc_004E92A8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    goto loc_004E92B1;

loc_004E92AF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004E92B1: ;
    ecx = MEM32(ebp + 0x68);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x004E92BCu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004E92BC: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x6C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004E92EB
 * Original: 0x004E92EB - 0x004E9A83 (1944 bytes, 520 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E92EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E92EB: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    _fb = (uint32_t)(0xAE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAE0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + 0x74) = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E9313; /* jne: not equal / not zero */

loc_004E930B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004E9A74;

loc_004E9313: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E931Au); RECOMP_ABI_CALL(0x005EF590u, sub_005EF590); /* call 0x005EF590 */

loc_004E931A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004E9A37; /* je: equal / zero */

loc_004E9323: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E9A37; /* je: equal / zero */

loc_004E932D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x616C7274) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x616C7274 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E9429; /* jne: not equal / not zero */

loc_004E9338: ;
    eax = ebp + -1612;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x004E9347u); RECOMP_ABI_CALL(0x005F01B0u, sub_005F01B0); /* call 0x005F01B0 */

loc_004E9347: ;
    PUSH32(esp, 0x100);
    eax = ebp + -1516;
    PUSH32(esp, eax);
    eax = esi + 0x288;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E935Fu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E935F: ;
    PUSH32(esp, 0x40);
    eax = ebp + -1612;
    PUSH32(esp, eax);
    eax = esi + 0x248;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9374u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9374: ;
    edi = 0x80;
    PUSH32(esp, edi);
    ecx = ebp + -487;
    eax = esi + 0x388;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E938Du); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E938D: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebp + -442;
    MEM32(ebp + -2660) = 3;

loc_004E93A0: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E93E6; /* je: equal / zero */

loc_004E93A5: ;
    PUSH32(esp, edi);
    eax = esi + 0x388;
    PUSH32(esp, 0x86CAC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E93B7u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E93B7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebx + -1)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + -1), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E93D5; /* jne: not equal / not zero */

loc_004E93C0: ;
    PUSH32(esp, edi);
    eax = esi + 0x388;
    PUSH32(esp, 0x86D65C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E93D2u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E93D2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E93D5: ;
    PUSH32(esp, edi);
    eax = esi + 0x388;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E93E3u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E93E3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E93E6: ;
    _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2D;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -2660) = MEM32(ebp + -2660) - 1;
    _fa = (uint32_t)(MEM32(ebp + -2660)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004E93A0; /* jne: not equal / not zero */

loc_004E93F1: ;
    SET_LO8(eax, MEM8(ebp + -492));
    MEM8(esi + 0x244) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -491));
    MEM8(esi + 0x245) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -490));
    MEM8(esi + 0x246) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -489));
    MEM8(esi + 0x247) = LO8(eax);
    PUSH32(esp, 4);

loc_004E9423: ;
    POP32(esp, eax);
    goto loc_004E9A73;

loc_004E9429: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68747470) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x68747470 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E94FC; /* jne: not equal / not zero */

loc_004E9434: ;
    eax = ebp + -1448;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x004E9443u); RECOMP_ABI_CALL(0x005F00E0u, sub_005F00E0); /* call 0x005F00E0 */

loc_004E9443: ;
    PUSH32(esp, 0x100);
    eax = ebp + -1384;
    PUSH32(esp, eax);
    eax = esi + 0x288;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E945Bu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E945B: ;
    PUSH32(esp, 0x40);
    eax = ebp + -1448;
    PUSH32(esp, eax);
    eax = esi + 0x248;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9470u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9470: ;
    PUSH32(esp, 0x80);
    eax = ebp + -355;
    PUSH32(esp, eax);
    eax = esi + 0x388;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9488u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9488: ;
    SET_LO8(eax, MEM8(ebp + -360));
    PUSH32(esp, MEM32(esi + 0xC));
    MEM8(esi + 0x244) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -359));
    MEM8(esi + 0x245) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -358));
    MEM8(esi + 0x246) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -357));
    MEM8(esi + 0x247) = LO8(eax);
    PUSH32(esp, 0x004E94C0u); RECOMP_ABI_CALL(0x005EF870u, sub_005EF870); /* call 0x005EF870 */

loc_004E94C0: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004E94D6u); RECOMP_ABI_CALL(0x004E4B7Cu, sub_004E4B7C); /* call 0x004E4B7C */

loc_004E94D6: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edx = esi + 8;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E94EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E94ECu); } /* indirect call */
    }

loc_004E94EF: ;
    MEM32(esi + 0x448) = eax;
    PUSH32(esp, 5);
    goto loc_004E9423;

loc_004E94FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63617264) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x63617264 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E9753; /* jne: not equal / not zero */

loc_004E9507: ;
    eax = ebp + -2656;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x004E9516u); RECOMP_ABI_CALL(0x005F0300u, sub_005F0300); /* call 0x005F0300 */

loc_004E9516: ;
    PUSH32(esp, 0x100);
    eax = ebp + -2592;
    PUSH32(esp, eax);
    eax = esi + 0x288;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E952Eu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E952E: ;
    PUSH32(esp, 0x40);
    eax = ebp + -2656;
    PUSH32(esp, eax);
    eax = esi + 0x248;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9543u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9543: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + -1564)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1564), 0x5E (8-bit) */
    ebx = esi + 0x388;
    MEM8(ebx) = 0;
    edi = 0x80;
    if (CMP_NE(_fa, _fb)) goto loc_004E956C; /* jne: not equal / not zero */

loc_004E955D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x86D65C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004E9569u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E9569: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E956C: ;
    PUSH32(esp, edi);
    eax = ebp + -1563;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004E957Au); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E957A: ;
    eax = ebp + -1518;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -2660) = eax;
    MEM32(ebp + -2664) = 3;

loc_004E9593: ;
    eax = MEM32(ebp + -2660);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E95D8; /* je: equal / zero */

loc_004E959E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x86CAC0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004E95AAu); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E95AA: ;
    eax = MEM32(ebp + -2660);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + -1)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -1), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E95C8; /* jne: not equal / not zero */

loc_004E95B9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x86D65C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004E95C5u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E95C5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E95C8: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -2660));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004E95D5u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E95D5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E95D8: ;
    _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -2660) = MEM32(ebp + -2660) + 0x2D;
    _fa = (uint32_t)(MEM32(ebp + -2660)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -2664) = MEM32(ebp + -2664) - 1;
    _fa = (uint32_t)(MEM32(ebp + -2664)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004E9593; /* jne: not equal / not zero */

loc_004E95E7: ;
    SET_LO8(eax, MEM8(ebp + -1568));
    MEM8(esi + 0x244) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -1567));
    MEM8(esi + 0x245) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -1566));
    PUSH32(esp, 0x230);
    MEM8(esi + 0x246) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -1565));
    ebx = esi + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    MEM8(esi + 0x247) = LO8(eax);
    PUSH32(esp, 0x004E9627u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004E9627: ;
    PUSH32(esp, 0x33);
    POP32(esp, edi);
    PUSH32(esp, edi);
    eax = ebp + -1384;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004E9638u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9638: ;
    PUSH32(esp, edi);
    eax = ebp + -1284;
    PUSH32(esp, eax);
    eax = esi + 0x47;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9649u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9649: ;
    PUSH32(esp, 0x66);
    eax = ebp + -1184;
    PUSH32(esp, eax);
    eax = esi + 0x7A;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E965Bu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E965B: ;
    PUSH32(esp, edi);
    eax = ebp + -984;
    PUSH32(esp, eax);
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E966Fu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E966F: ;
    PUSH32(esp, edi);
    eax = ebp + -884;
    PUSH32(esp, eax);
    eax = esi + 0x113;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9683u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9683: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = ebp + -784;
    PUSH32(esp, eax);
    eax = esi + 0x146;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E969Au); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E969A: ;
    PUSH32(esp, edi);
    eax = ebp + -600;
    PUSH32(esp, eax);
    eax = esi + 0x1A3;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E96AEu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E96AE: ;
    PUSH32(esp, 0x1F);
    eax = ebp + -684;
    PUSH32(esp, eax);
    eax = esi + 0x179;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E96C3u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E96C3: ;
    PUSH32(esp, 0xB);
    eax = ebp + -644;
    PUSH32(esp, eax);
    eax = esi + 0x198;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E96D8u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E96D8: ;
    PUSH32(esp, edi);
    eax = ebp + -550;
    PUSH32(esp, eax);
    eax = esi + 0x1D6;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E96ECu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E96EC: ;
    PUSH32(esp, 0x14);
    eax = ebp + -444;
    PUSH32(esp, eax);
    eax = esi + 0x209;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9701u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9701: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x14);
    eax = ebp + -364;
    PUSH32(esp, eax);
    eax = esi + 0x21D;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9719u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9719: ;
    eax = MEM32(ebp + -324);
    MEM32(esi + 0x234) = eax;
    eax = MEM32(ebp + -320);
    MEM32(esi + 0x238) = eax;
    eax = MEM32(ebp + -316);
    MEM32(esi + 0x23C) = eax;
    eax = MEM32(ebp + -312);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x240) = eax;
    PUSH32(esp, 6);
    goto loc_004E9423;

loc_004E9753: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E657773) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E657773 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E9845; /* jne: not equal / not zero */

loc_004E975E: ;
    eax = ebp + -172;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x004E976Du); RECOMP_ABI_CALL(0x005F0A70u, sub_005F0A70); /* call 0x005F0A70 */

loc_004E976D: ;
    PUSH32(esp, 0x100);
    eax = esi + 0x288;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9783u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9783: ;
    PUSH32(esp, 0x40);
    eax = ebp + -172;
    PUSH32(esp, eax);
    eax = esi + 0x248;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9798u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9798: ;
    edi = 0x80;
    PUSH32(esp, edi);
    ecx = ebp + -75;
    eax = esi + 0x388;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E97AEu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E97AE: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebp + -30;
    MEM32(ebp + -2664) = 3;

loc_004E97BE: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E9804; /* je: equal / zero */

loc_004E97C3: ;
    PUSH32(esp, edi);
    eax = esi + 0x388;
    PUSH32(esp, 0x86CAC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E97D5u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E97D5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebx + -1)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + -1), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E97F3; /* jne: not equal / not zero */

loc_004E97DE: ;
    PUSH32(esp, edi);
    eax = esi + 0x388;
    PUSH32(esp, 0x86D65C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E97F0u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E97F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E97F3: ;
    PUSH32(esp, edi);
    eax = esi + 0x388;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9801u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E9801: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E9804: ;
    _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2D;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -2664) = MEM32(ebp + -2664) - 1;
    _fa = (uint32_t)(MEM32(ebp + -2664)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004E97BE; /* jne: not equal / not zero */

loc_004E980F: ;
    SET_LO8(eax, MEM8(ebp + 0x68));
    MEM8(esi + 0x244) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x69));
    MEM8(esi + 0x245) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x6A));
    MEM8(esi + 0x246) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x6B));
    MEM8(esi + 0x247) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax + eax + 8;
    goto loc_004E9A73;

loc_004E9845: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70726F6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70726F6D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E997F; /* jne: not equal / not zero */

loc_004E9850: ;
    eax = ebp + -1848;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x004E985Fu); RECOMP_ABI_CALL(0x005F0850u, sub_005F0850); /* call 0x005F0850 */

loc_004E985F: ;
    PUSH32(esp, 0x100);
    eax = ebp + -1784;
    PUSH32(esp, eax);
    eax = esi + 0x288;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9877u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9877: ;
    PUSH32(esp, 0x40);
    eax = ebp + -1848;
    PUSH32(esp, eax);
    eax = esi + 0x248;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E988Cu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E988C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + -756)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -756), 0x5E (8-bit) */
    ebx = esi + 0x388;
    MEM8(ebx) = 0;
    edi = 0x80;
    if (CMP_NE(_fa, _fb)) goto loc_004E98B5; /* jne: not equal / not zero */

loc_004E98A6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x86D65C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004E98B2u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E98B2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E98B5: ;
    PUSH32(esp, edi);
    eax = ebp + -755;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004E98C3u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E98C3: ;
    eax = ebp + -710;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -2660) = eax;
    MEM32(ebp + -2664) = 3;

loc_004E98DC: ;
    eax = MEM32(ebp + -2660);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E9921; /* je: equal / zero */

loc_004E98E7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x86CAC0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004E98F3u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E98F3: ;
    eax = MEM32(ebp + -2660);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + -1)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -1), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E9911; /* jne: not equal / not zero */

loc_004E9902: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x86D65C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004E990Eu); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E990E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E9911: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -2660));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004E991Eu); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E991E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E9921: ;
    _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -2660) = MEM32(ebp + -2660) + 0x2D;
    _fa = (uint32_t)(MEM32(ebp + -2660)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -2664) = MEM32(ebp + -2664) - 1;
    _fa = (uint32_t)(MEM32(ebp + -2664)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004E98DC; /* jne: not equal / not zero */

loc_004E9930: ;
    SET_LO8(eax, MEM8(ebp + -760));
    MEM8(esi + 0x244) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -759));
    MEM8(esi + 0x245) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -758));
    MEM8(esi + 0x246) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -757));
    MEM8(esi + 0x247) = LO8(eax);
    PUSH32(esp, 0x40);
    eax = ebp + -576;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x408;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E9975u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E9975: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 9);
    goto loc_004E9423;

loc_004E997F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D656E75) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D656E75 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E9A71; /* jne: not equal / not zero */

loc_004E998A: ;
    eax = ebp + -308;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x004E9999u); RECOMP_ABI_CALL(0x005F0A00u, sub_005F0A00); /* call 0x005F0A00 */

loc_004E9999: ;
    PUSH32(esp, 0x40);
    eax = ebp + -308;
    PUSH32(esp, eax);
    eax = esi + 0x248;
    PUSH32(esp, eax);
    MEM8(esi + 0x288) = 0;
    PUSH32(esp, 0x004E99B5u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E99B5: ;
    edi = 0x80;
    PUSH32(esp, edi);
    ecx = ebp + -243;
    eax = esi + 0x388;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E99CEu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004E99CE: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebp + -198;
    MEM32(ebp + -2664) = 7;

loc_004E99E1: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E9A09; /* je: equal / zero */

loc_004E99E6: ;
    PUSH32(esp, edi);
    eax = esi + 0x388;
    PUSH32(esp, 0x86CAC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E99F8u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E99F8: ;
    PUSH32(esp, edi);
    eax = esi + 0x388;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9A06u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_004E9A06: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004E9A09: ;
    _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2D;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -2664) = MEM32(ebp + -2664) - 1;
    _fa = (uint32_t)(MEM32(ebp + -2664)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004E99E1; /* jne: not equal / not zero */

loc_004E9A14: ;
    MEM8(esi + 0x247) = 0;
    MEM8(esi + 0x246) = 0;
    MEM8(esi + 0x245) = 0;
    MEM8(esi + 0x244) = 0;
    PUSH32(esp, 7);
    goto loc_004E9423;

loc_004E9A37: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x004E9A41u); RECOMP_ABI_CALL(0x005EF560u, sub_005EF560); /* call 0x005EF560 */

loc_004E9A41: ;
    ebx = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E9A4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9A4Au); } /* indirect call */
    }

loc_004E9A4D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E9A71; /* je: equal / zero */

loc_004E9A51: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61627274) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x61627274 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E9A6A; /* je: equal / zero */

loc_004E9A59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74696D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x74696D65 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax + eax + 1;
    goto loc_004E9A73;

loc_004E9A6A: ;
    PUSH32(esp, 2);
    goto loc_004E9423;

loc_004E9A71: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004E9A73: ;
    POP32(esp, ebx);

loc_004E9A74: ;
    ecx = MEM32(ebp + 0x74);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x004E9A7Eu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004E9A7E: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004E9A83
 * Original: 0x004E9A83 - 0x004E9AC6 (67 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9A83(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9A83: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E9AAD; /* je: equal / zero */

loc_004E9A8D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9A93u); RECOMP_ABI_CALL(0x005F10D0u, sub_005F10D0); /* call 0x005F10D0 */

loc_004E9A93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004E9A9C; /* jne: not equal / not zero */

loc_004E9A98: ;
    SET_LO8(eax, 1);
    goto loc_004E9AC2;

loc_004E9A9C: ;
    ecx = MEM32(esi + 0x444);
    MEM32(esi + 0x440) = MEM32(esi + 0x440) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x440)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E9AADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9AABu); } /* indirect call */
    }

loc_004E9AAD: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004E9AC0u); RECOMP_ABI_CALL(0x004E4BAEu, sub_004E4BAE); /* call 0x004E4BAE */

loc_004E9AC0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004E9AC2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E9AC6
 * Original: 0x004E9AC6 - 0x004E9ADC (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9AC6(void)
{

loc_004E9AC6: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004E9AD9u); RECOMP_ABI_CALL(0x004E4BAEu, sub_004E4BAE); /* call 0x004E4BAE */

loc_004E9AD9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E9ADC
 * Original: 0x004E9ADC - 0x004E9AEE (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9ADC(void)
{

loc_004E9ADC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E9AE4u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004E9AE4: ;
    MEM32(esi) = 0x86D660;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E9AEE
 * Original: 0x004E9AEE - 0x004E9AF9 (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9AEE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E9AEE: ;
    MEM32(ecx) = 0x86D660;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004E9AF9
 * Original: 0x004E9AF9 - 0x004E9B1B (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9AF9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9AF9: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D660;
    PUSH32(esp, 0x004E9B07u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004E9B07: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E9B15; /* je: equal / zero */

loc_004E9B0E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E9B14u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E9B14: ;
    POP32(esp, ecx);

loc_004E9B15: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E9B1B
 * Original: 0x004E9B1B - 0x004E9B3F (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9B1B(void)
{

loc_004E9B1B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E9B23u); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004E9B23: ;
    PUSH32(esp, 0x004E9B28u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E9B28: ;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    ecx = esi + 8;
    PUSH32(esp, 0x004E9B35u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004E9B35: ;
    MEM32(esi) = 0x86D664;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E9B3F
 * Original: 0x004E9B3F - 0x004E9B58 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9B3F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E9B3F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x86D664;
    PUSH32(esp, 0x004E9B50u); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004E9B50: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E59DB(); return; /* tail jmp 0x004E59DB */

}

/**
 * sub_004E9B58
 * Original: 0x004E9B58 - 0x004E9B74 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9B58(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9B58: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E9B60u); RECOMP_ABI_CALL(0x004E9B3Fu, sub_004E9B3F); /* call 0x004E9B3F */

loc_004E9B60: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E9B6E; /* je: equal / zero */

loc_004E9B67: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E9B6Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E9B6D: ;
    POP32(esp, ecx);

loc_004E9B6E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E9B74
 * Original: 0x004E9B74 - 0x004E9BE3 (111 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E9B74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9B74: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E9B9C; /* je: equal / zero */

loc_004E9B86: ;
    ecx = esi + 0x3C;
    MEM32(esi + 0x24) = 0x86D688;
    MEM32(esi + 0x2C) = 0x86D680;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E9B9Cu); RECOMP_ABI_CALL(0x004E9E9Bu, sub_004E9E9B); /* call 0x004E9E9B */

loc_004E9B9C: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E9BA5u); RECOMP_ABI_CALL(0x004E9DEEu, sub_004E9DEE); /* call 0x004E9DEE */

loc_004E9BA5: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    edi = esi + 0x28;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E9BB4u); RECOMP_ABI_CALL(0x004E9C2Eu, sub_004E9C2E); /* call 0x004E9C2E */

loc_004E9BB4: ;
    eax = MEM32(esi + 0x24);
    MEM32(esi) = 0x86D0DC;
    MEM32(edi) = 0x86D0B8;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 0x24) = 0x86D0A4;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 4);
    ecx = eax + -24;
    MEM32(eax + esi + 0x20) = ecx;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E9BE3
 * Original: 0x004E9BE3 - 0x004E9C2E (75 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9BE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E9BE3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + -32;
    ebp = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004E9C28; /* jbe: below or equal (unsigned <=) */

loc_004E9BF6: ;
    eax = esi + -40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004E9C03; /* jne: not equal / not zero */

loc_004E9BFD: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) & eax;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004E9C11;

loc_004E9C03: ;
    eax = MEM32(esi + -4);
    eax = MEM32(eax + 4);
    eax = eax + esi + -4;
    MEM32(esp + 0x10) = eax;

loc_004E9C11: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004E9C19u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004E9C19: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004E9C23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9C21u); } /* indirect call */
    }

loc_004E9C23: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004E9BF6; /* jb: below (unsigned <) */

loc_004E9C28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004E9C2E
 * Original: 0x004E9C2E - 0x004E9C7F (81 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E9C2E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9C2E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E9C4E; /* je: equal / zero */

loc_004E9C3F: ;
    ecx = esi + 0x14;
    MEM32(esi + 4) = 0x86D6C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E9C4Eu); RECOMP_ABI_CALL(0x004E9E9Bu, sub_004E9E9B); /* call 0x004E9E9B */

loc_004E9C4E: ;
    eax = MEM32(esi + 4);
    MEM32(esi) = 0x86D6A4;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 4) = 0x86D690;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 4);
    ecx = eax + -16;
    MEM32(eax + esi) = ecx;
    SET_LO8(eax, MEM8(ebp + 8));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 8) = LO8(eax);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E9C7F
 * Original: 0x004E9C7F - 0x004E9CA3 (36 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9C7F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9C7F: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004E9C87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9C84u); } /* indirect call */
    }

loc_004E9C87: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E9C96; /* je: equal / zero */

loc_004E9C8B: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esi + 8) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E9C96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9C93u); } /* indirect call */
    }

loc_004E9C96: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004E9C9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9C9Au); } /* indirect call */
    }

loc_004E9C9D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E9CA3
 * Original: 0x004E9CA3 - 0x004E9CAE (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9CA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E9CA3: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E9D47(); return; /* tail jmp 0x004E9D47 */

}

/**
 * sub_004E9CAE
 * Original: 0x004E9CAE - 0x004E9CF4 (70 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9CAE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9CAE: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    MEM32(esi) = 0x86D6A4;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 4) = 0x86D690;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 4);
    ecx = eax + -16;
    MEM32(eax + esi) = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E9CEC; /* je: equal / zero */

loc_004E9CD8: ;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004E9CECu); RECOMP_ABI_CALL(0x004E354Bu, sub_004E354B); /* call 0x004E354B */

loc_004E9CEC: ;
    MEM32(esi) = 0x863F20;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E9CF4
 * Original: 0x004E9CF4 - 0x004E9D20 (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9CF4(void)
{

loc_004E9CF4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + -20;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004E9D02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9CFFu); } /* indirect call */
    }

loc_004E9D02: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E9D1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9D17u); } /* indirect call */
    }

loc_004E9D1A: ;
    MEM32(edi + -8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E9D20
 * Original: 0x004E9D20 - 0x004E9D47 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + -20;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004E9D2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9D28u); } /* indirect call */
    }

loc_004E9D2B: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, MEM32(esi + -8));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004E9D41u); RECOMP_ABI_CALL(0x004E354Bu, sub_004E354B); /* call 0x004E354B */

loc_004E9D41: ;
    MEM32(esi + -8) = MEM32(esi + -8) & 0;
    _fa = (uint32_t)(MEM32(esi + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E9D47
 * Original: 0x004E9D47 - 0x004E9D6B (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9D47(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9D47: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E9D4Fu); RECOMP_ABI_CALL(0x004E9CAEu, sub_004E9CAE); /* call 0x004E9CAE */

loc_004E9D4F: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x004E9D57u); RECOMP_ABI_CALL(0x004E9EA4u, sub_004E9EA4); /* call 0x004E9EA4 */

loc_004E9D57: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E9D65; /* je: equal / zero */

loc_004E9D5E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E9D64u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004E9D64: ;
    POP32(esp, ecx);

loc_004E9D65: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E9D6B
 * Original: 0x004E9D6B - 0x004E9DBF (84 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E9D6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9D6B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E9D8B; /* je: equal / zero */

loc_004E9D7C: ;
    ecx = esi + 0x28;
    MEM32(esi + 0x24) = 0x86D6F4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E9D8Bu); RECOMP_ABI_CALL(0x004E9E9Bu, sub_004E9E9B); /* call 0x004E9E9B */

loc_004E9D8B: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E9D92u); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004E9D92: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E9D97u); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004E9D97: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    PUSH32(esp, 4);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E9DA4u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004E9DA4: ;
    eax = MEM32(esi + 0x24);
    MEM32(esi) = 0x86D6E4;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 0x24) = 0x86D6D0;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E9DBF
 * Original: 0x004E9DBF - 0x004E9DC7 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9DBF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E9DBF: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E9E53(); return; /* tail jmp 0x004E9E53 */

}

/**
 * sub_004E9DC7
 * Original: 0x004E9DC7 - 0x004E9DEE (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9DC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E9DC7: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    MEM32(esi) = 0x86D6E4;
    eax = MEM32(eax + 4);
    ecx = esi + 8;
    MEM32(eax + esi + 0x24) = 0x86D6D0;
    PUSH32(esp, 0x004E9DE6u); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004E9DE6: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E59DB(); return; /* tail jmp 0x004E59DB */

}

/**
 * sub_004E9DEE
 * Original: 0x004E9DEE - 0x004E9E32 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004E9DEE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9DEE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004E9E0E; /* je: equal / zero */

loc_004E9DFF: ;
    ecx = esi + 0x28;
    MEM32(esi + 0x24) = 0x86D724;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E9E0Eu); RECOMP_ABI_CALL(0x004E9E9Bu, sub_004E9E9B); /* call 0x004E9E9B */

loc_004E9E0E: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004E9E17u); RECOMP_ABI_CALL(0x004E9D6Bu, sub_004E9D6B); /* call 0x004E9D6B */

loc_004E9E17: ;
    eax = MEM32(esi + 0x24);
    MEM32(esi) = 0x86D710;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 0x24) = 0x86D6FC;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E9E32
 * Original: 0x004E9E32 - 0x004E9E3A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9E32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E9E32: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004E9E77(); return; /* tail jmp 0x004E9E77 */

}

/**
 * sub_004E9E3A
 * Original: 0x004E9E3A - 0x004E9E53 (25 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9E3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E9E3A: ;
    eax = MEM32(ecx + 0x24);
    MEM32(ecx) = 0x86D710;
    eax = MEM32(eax + 4);
    MEM32(eax + ecx + 0x24) = 0x86D6FC;
    g_seh_ebp = ebp; sub_004E9DC7(); return; /* tail jmp 0x004E9DC7 */

}

/**
 * sub_004E9E53
 * Original: 0x004E9E53 - 0x004E9E77 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9E53(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9E53: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E9E5Bu); RECOMP_ABI_CALL(0x004E9DC7u, sub_004E9DC7); /* call 0x004E9DC7 */

loc_004E9E5B: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x004E9E63u); RECOMP_ABI_CALL(0x004E9EA4u, sub_004E9EA4); /* call 0x004E9EA4 */

loc_004E9E63: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E9E71; /* je: equal / zero */

loc_004E9E6A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E9E70u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E9E70: ;
    POP32(esp, ecx);

loc_004E9E71: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E9E77
 * Original: 0x004E9E77 - 0x004E9E9B (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9E77(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9E77: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E9E7Fu); RECOMP_ABI_CALL(0x004E9E3Au, sub_004E9E3A); /* call 0x004E9E3A */

loc_004E9E7F: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x004E9E87u); RECOMP_ABI_CALL(0x004E9EA4u, sub_004E9EA4); /* call 0x004E9EA4 */

loc_004E9E87: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004E9E95; /* je: equal / zero */

loc_004E9E8E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E9E94u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004E9E94: ;
    POP32(esp, ecx);

loc_004E9E95: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E9E9B
 * Original: 0x004E9E9B - 0x004E9EA4 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9E9B(void)
{

loc_004E9E9B: ;
    eax = ecx;
    MEM32(eax) = 0x86D72C;
    esp += 4; return; /* ret */

}

/**
 * sub_004E9EA4
 * Original: 0x004E9EA4 - 0x004E9EAB (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9EA4(void)
{

loc_004E9EA4: ;
    MEM32(ecx) = 0x86D72C;
    esp += 4; return; /* ret */

}

/**
 * sub_004E9EAB
 * Original: 0x004E9EAB - 0x004E9ED6 (43 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9EAB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9EAB: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D72C;
    if (TEST_Z(_fa, _fb)) goto loc_004E9EC2; /* je: equal / zero */

loc_004E9EBB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004E9EC1u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004E9EC1: ;
    POP32(esp, ecx);

loc_004E9EC2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E9ED6
 * Original: 0x004E9ED6 - 0x004E9EE3 (13 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9ED6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9ED6: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004E9EDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9EDBu); } /* indirect call */
    }

loc_004E9EDE: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E9EE3
 * Original: 0x004E9EE3 - 0x004E9F07 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9EE3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9EE3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004E9EEBu); RECOMP_ABI_CALL(0x004EA910u, sub_004EA910); /* call 0x004EA910 */

loc_004E9EEB: ;
    MEM32(esi + 8) = 0x863F20;
    MEM32(esi) = 0x86D750;
    MEM32(esi + 8) = 0x86D740;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E9F07
 * Original: 0x004E9F07 - 0x004E9F0F (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9F07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E9F07: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EA0C6(); return; /* tail jmp 0x004EA0C6 */

}

/**
 * sub_004E9F0F
 * Original: 0x004E9F0F - 0x004E9F67 (88 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9F0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E9F0F: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x86D750;
    MEM32(esi + 8) = 0x86D740;
    if (CMP_EQ(_fa, _fb)) goto loc_004E9F31; /* je: equal / zero */

loc_004E9F26: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004E9F2Cu); RECOMP_ABI_CALL(0x004551F0u, sub_004551F0); /* call 0x004551F0 */

loc_004E9F2C: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_004E9F31: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E9F4C; /* je: equal / zero */

loc_004E9F38: ;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004E9F4Cu); RECOMP_ABI_CALL(0x004E354Bu, sub_004E354B); /* call 0x004E354B */

loc_004E9F4C: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004E9F58; /* je: equal / zero */

loc_004E9F53: ;
    PUSH32(esp, 0x004E9F58u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004E9F58: ;
    MEM32(esi + 8) = 0x863F20;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004EA922(); return; /* tail jmp 0x004EA922 */

}

/**
 * sub_004E9F67
 * Original: 0x004E9F67 - 0x004E9FD0 (105 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9F67(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004E9F67: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004E9F70u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004E9F70: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004E9F77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9F74u); } /* indirect call */
    }

loc_004E9F77: ;
    PUSH32(esp, 0x696E676D);
    edi = eax;
    PUSH32(esp, 0x004E9F83u); RECOMP_ABI_CALL(0x004580C0u, sub_004580C0); /* call 0x004580C0 */

loc_004E9F83: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004E9F89u); RECOMP_ABI_CALL(0x00454F90u, sub_00454F90); /* call 0x00454F90 */

loc_004E9F89: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x004E9F93u); RECOMP_ABI_CALL(0x004580E0u, sub_004580E0); /* call 0x004580E0 */

loc_004E9F93: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esi + 8;
    PUSH32(esp, edx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E9FAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9FACu); } /* indirect call */
    }

loc_004E9FAF: ;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004E9FB8u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004E9FB8: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x004E9FC1u); RECOMP_ABI_CALL(0x00455400u, sub_00455400); /* call 0x00455400 */

loc_004E9FC1: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x004E9FCAu); RECOMP_ABI_CALL(0x00455410u, sub_00455410); /* call 0x00455410 */

loc_004E9FCA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E9FD0
 * Original: 0x004E9FD0 - 0x004EA083 (179 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E9FD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004E9FDEu); RECOMP_ABI_CALL(0x004551E0u, sub_004551E0); /* call 0x004551E0 */

loc_004E9FDE: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004E9FE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004E9FE4u); } /* indirect call */
    }

loc_004E9FE7: ;
    PUSH32(esp, 0);
    esi = eax;
    edi = MEM32(esi + 0x14);
    PUSH32(esp, 0x73706B72);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004E9FF9u); RECOMP_ABI_CALL(0x00455420u, sub_00455420); /* call 0x00455420 */

loc_004E9FF9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_004EA064; /* jbe: below or equal (unsigned <=) */

loc_004EA012: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = esi;

loc_004EA019: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x004EA026u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004EA026: ;
    esi = eax;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004EA043; /* je: equal / zero */

loc_004EA030: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004EA043; /* je: equal / zero */

loc_004EA034: ;
    _fa = (uint32_t)(MEM8(esi + 0x16)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x16), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004EA043; /* jne: not equal / not zero */

loc_004EA03A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) | eax;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004EA043: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004EA04Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA04Bu); } /* indirect call */
    }

loc_004EA04E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004EA05A; /* jl: less (signed <) */

loc_004EA053: ;
    ecx = esi;
    PUSH32(esp, 0x004EA05Au); RECOMP_ABI_CALL(0x004E4F04u, sub_004E4F04); /* call 0x004E4F04 */

loc_004EA05A: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004EA019; /* jb: below (unsigned <) */

loc_004EA064: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004EA06Eu); RECOMP_ABI_CALL(0x00455400u, sub_00455400); /* call 0x00455400 */

loc_004EA06E: ;
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004EA078u); RECOMP_ABI_CALL(0x00455410u, sub_00455410); /* call 0x00455410 */

loc_004EA078: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004EA083
 * Original: 0x004EA083 - 0x004EA099 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA083(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EA083: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x30);
    ecx = MEM32(eax + 0xB4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_004EA099
 * Original: 0x004EA099 - 0x004EA0C6 (45 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA099(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EA099: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EA0A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA09Eu); } /* indirect call */
    }

loc_004EA0A1: ;
    esi = MEM32(eax + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004EA0C0; /* jbe: below or equal (unsigned <=) */

loc_004EA0AA: ;
    ebx = eax + 8;

loc_004EA0AD: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x004EA0B5u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004EA0B5: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EA0C2; /* je: equal / zero */

loc_004EA0BB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EA0AD; /* jb: below (unsigned <) */

loc_004EA0C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EA0C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EA0C6
 * Original: 0x004EA0C6 - 0x004EA0E2 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA0C6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EA0C6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EA0CEu); RECOMP_ABI_CALL(0x004E9F0Fu, sub_004E9F0F); /* call 0x004E9F0F */

loc_004EA0CE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EA0DC; /* je: equal / zero */

loc_004EA0D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EA0DBu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EA0DB: ;
    POP32(esp, ecx);

loc_004EA0DC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EA0E2
 * Original: 0x004EA0E2 - 0x004EA0F7 (21 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA0E2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EA0E2: ;
    PUSH32(esp, MEM32(ecx + 0x14));
    PUSH32(esp, MEM32(ecx + 0x10));
    PUSH32(esp, 0x004EA0EDu); RECOMP_ABI_CALL(0x005EDC40u, sub_005EDC40); /* call 0x005EDC40 */

loc_004EA0ED: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ecx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_004EA0F7
 * Original: 0x004EA0F7 - 0x004EA14D (86 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EA0F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EA0F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA107u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EA107: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA115u); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004EA115: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0x86D778);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA126u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004EA126: ;
    eax = MEM32(ebp + -32);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebp + -32;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004EA133u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA130u); } /* indirect call */
    }

loc_004EA133: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x3C));
    PUSH32(esp, MEM32(esi + 0x38));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA13Fu); RECOMP_ABI_CALL(0x005EE730u, sub_005EE730); /* call 0x005EE730 */

loc_004EA13F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA14Au); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004EA14A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004EA14D
 * Original: 0x004EA14D - 0x004EA1C6 (121 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EA14D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EA14D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004EA176; /* je: equal / zero */

loc_004EA160: ;
    ecx = esi + 0x4C;
    MEM32(esi + 0x24) = 0x86D7D0;
    MEM32(esi + 0x2C) = 0x86D7C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA176u); RECOMP_ABI_CALL(0x004E9E9Bu, sub_004E9E9B); /* call 0x004E9E9B */

loc_004EA176: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA17Eu); RECOMP_ABI_CALL(0x004EA94Fu, sub_004EA94F); /* call 0x004EA94F */

loc_004EA17E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    edi = esi + 0x28;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA18Cu); RECOMP_ABI_CALL(0x004E9C2Eu, sub_004E9C2E); /* call 0x004E9C2E */

loc_004EA18C: ;
    eax = MEM32(esi + 0x24);
    MEM32(esi) = 0x86D7B4;
    MEM32(edi) = 0x86D790;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 0x24) = 0x86D77C;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 4);
    ecx = eax + -40;
    MEM32(eax + esi + 0x20) = ecx;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 0x38) = ebx;
    MEM8(esi + 0x44) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EA1C6
 * Original: 0x004EA1C6 - 0x004EA1FA (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA1C6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EA1C6: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EA1E2; /* je: equal / zero */

loc_004EA1CF: ;
    PUSH32(esp, 0x004EA1D4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EA1D4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x40));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EA1DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA1DBu); } /* indirect call */
    }

loc_004EA1DE: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004EA1E2: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EA1F8; /* je: equal / zero */

loc_004EA1E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EA1EFu); RECOMP_ABI_CALL(0x005EDB40u, sub_005EDB40); /* call 0x005EDB40 */

loc_004EA1EF: ;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ecx);

loc_004EA1F8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EA1FA
 * Original: 0x004EA1FA - 0x004EA241 (71 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EA1FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EA1FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx + 0x38));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA20Cu); RECOMP_ABI_CALL(0x005EDC90u, sub_005EDC90); /* call 0x005EDC90 */

loc_004EA20C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA211u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EA211: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA21Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004EA21D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EA230; /* je: equal / zero */

loc_004EA224: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA22Eu); RECOMP_ABI_CALL(0x004DCC43u, sub_004DCC43); /* call 0x004DCC43 */

loc_004EA22E: ;
    goto loc_004EA232;

loc_004EA230: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EA232: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA238u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004EA238: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA23Fu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004EA23F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004EA241
 * Original: 0x004EA241 - 0x004EA249 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA241(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EA241: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EA8AD(); return; /* tail jmp 0x004EA8AD */

}

/**
 * sub_004EA249
 * Original: 0x004EA249 - 0x004EA254 (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA249(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EA249: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EA8AD(); return; /* tail jmp 0x004EA8AD */

}

/**
 * sub_004EA254
 * Original: 0x004EA254 - 0x004EA29F (75 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA254(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EA254: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + -32;
    ebp = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004EA299; /* jbe: below or equal (unsigned <=) */

loc_004EA267: ;
    eax = esi + -40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EA274; /* jne: not equal / not zero */

loc_004EA26E: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) & eax;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004EA282;

loc_004EA274: ;
    eax = MEM32(esi + -4);
    eax = MEM32(eax + 4);
    eax = eax + esi + -4;
    MEM32(esp + 0x10) = eax;

loc_004EA282: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004EA28Au); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004EA28A: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EA294u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA292u); } /* indirect call */
    }

loc_004EA294: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EA267; /* jb: below (unsigned <) */

loc_004EA299: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EA29F
 * Original: 0x004EA29F - 0x004EA366 (199 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA29F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EA29F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x004EA2B0u); RECOMP_ABI_CALL(0x005EDC40u, sub_005EDC40); /* call 0x005EDC40 */

loc_004EA2B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004EA361; /* jne: not equal / not zero */

loc_004EA2BB: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x004EA2C3u); RECOMP_ABI_CALL(0x005EDC60u, sub_005EDC60); /* call 0x005EDC60 */

loc_004EA2C3: ;
    MEM32(esi + 0x14) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    if ((_fa == 0)) goto loc_004EA33F; /* je: equal / zero */

loc_004EA2CB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004EA315; /* je: equal / zero */

loc_004EA2CE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004EA2EB; /* je: equal / zero */

loc_004EA2D1: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_004EA361; /* jne: not equal / not zero */

loc_004EA2DA: ;
    ecx = MEM32(0x90E7AC);
    _fb = (uint32_t)(0xFFFFFFD8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFD8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EA2E9u); RECOMP_ABI_CALL(0x004DC53Du, sub_004DC53D); /* call 0x004DC53D */

loc_004EA2E9: ;
    goto loc_004EA361;

loc_004EA2EB: ;
    edi = esi + -32;
    MEM8(esi + 8) = 0;
    ebp = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004EA361; /* jbe: below or equal (unsigned <=) */

loc_004EA2FB: ;
    _fb = (uint32_t)(0xFFFFFFD8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFD8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004EA2FE: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004EA306u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004EA306: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004EA30Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA30Bu); } /* indirect call */
    }

loc_004EA30E: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EA2FE; /* jb: below (unsigned <) */

loc_004EA313: ;
    goto loc_004EA361;

loc_004EA315: ;
    edi = esi + -32;
    MEM8(esi + 8) = 0;
    ebp = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004EA361; /* jbe: below or equal (unsigned <=) */

loc_004EA325: ;
    _fb = (uint32_t)(0xFFFFFFD8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFD8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004EA328: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004EA330u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004EA330: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004EA338u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA335u); } /* indirect call */
    }

loc_004EA338: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EA328; /* jb: below (unsigned <) */

loc_004EA33D: ;
    goto loc_004EA361;

loc_004EA33F: ;
    ecx = esi + -40;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004EA347u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA344u); } /* indirect call */
    }

loc_004EA347: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x004EA352u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA34Fu); } /* indirect call */
    }

loc_004EA352: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x004EA35Eu); RECOMP_ABI_CALL(0x005EE730u, sub_005EE730); /* call 0x005EE730 */

loc_004EA35E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004EA361: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EA366
 * Original: 0x004EA366 - 0x004EA43D (215 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EA366(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EA366: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA376u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004EA376: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004EA37Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA37Au); } /* indirect call */
    }

loc_004EA37D: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x7E75EC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA38Au); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_004EA38A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EA3C9; /* je: equal / zero */

loc_004EA391: ;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x44), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EA3C9; /* je: equal / zero */

loc_004EA397: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + 8;
    MEM8(esi + 0x44) = 1;
    ebx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004EA436; /* jbe: below or equal (unsigned <=) */

loc_004EA3AD: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA3B7u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004EA3B7: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004EA3BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA3BCu); } /* indirect call */
    }

loc_004EA3BF: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EA3AD; /* jb: below (unsigned <) */

loc_004EA3C7: ;
    goto loc_004EA436;

loc_004EA3C9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA3D1u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EA3D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA3DFu); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004EA3DF: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    ecx = ebp + -36;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 0xB);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4E) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x4E);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    MEM8(ebp + -4) = LO8(eax);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 0xB);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4E) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x4E);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ebp + -3) = LO8(eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86D7D8);
    MEM8(ebp + -2) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA414u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004EA414: ;
    eax = MEM32(ebp + -36);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = ebp + -36;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004EA41Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA41Cu); } /* indirect call */
    }

loc_004EA41F: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x3C));
    PUSH32(esp, MEM32(esi + 0x38));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA42Bu); RECOMP_ABI_CALL(0x005EE730u, sub_005EE730); /* call 0x005EE730 */

loc_004EA42B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA436u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004EA436: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EA43D
 * Original: 0x004EA43D - 0x004EA7A2 (869 bytes, 223 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EA43D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EA43D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA44Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EA44D: ;
    edx = MEM32(eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004EA45Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA45Bu); } /* indirect call */
    }

loc_004EA45D: ;
    MEM32(esi + 0x18) = eax;
    MEM32(eax) = edi;
    eax = MEM32(esi + 0x18);
    ecx = 0x86D840;
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 0x18);
    edx = MEM32(0x8D7E78);
    MEM32(eax + 8) = edx;
    edx = MEM32(esi + 0x18);
    eax = 0x7B891F;
    MEM32(edx + 0xC) = eax;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x10) = 1;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x14) = ecx;
    edx = MEM32(esi + 0x18);
    edi = MEM32(0x8D7E78);
    MEM32(edx + 0x18) = edi;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x1C) = eax;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x20) = 2;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x24) = ecx;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x28) = 0x86D838;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x2C) = eax;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x30) = 3;
    edi = MEM32(esi + 0x18);
    edx = 0x86D830;
    MEM32(edi + 0x34) = edx;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x38) = 0x86D828;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x3C) = eax;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x40) = 4;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x44) = ecx;
    edi = MEM32(esi + 0x18);
    ebx = MEM32(0x8D7E78);
    MEM32(edi + 0x48) = ebx;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x4C) = eax;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x50) = 5;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x54) = edx;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x58) = 0x86D820;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x5C) = eax;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x60) = 6;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x64) = 0x86D814;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x68) = 0x86D80C;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x6C) = eax;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x70) = 7;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x74) = ecx;
    edi = MEM32(esi + 0x18);
    ebx = MEM32(0x8D7E78);
    MEM32(edi + 0x78) = ebx;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x7C) = eax;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x80) = 8;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x84) = ecx;
    edi = MEM32(esi + 0x18);
    ebx = MEM32(0x8D7E78);
    MEM32(edi + 0x88) = ebx;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x8C) = eax;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x90) = 9;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x94) = ecx;
    edi = MEM32(esi + 0x18);
    ebx = MEM32(0x8D7E78);
    MEM32(edi + 0x98) = ebx;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0x9C) = eax;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0xA0) = 0xA;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0xA4) = ecx;
    edi = MEM32(esi + 0x18);
    ebx = MEM32(0x8D7E78);
    MEM32(edi + 0xA8) = ebx;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0xAC) = eax;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0xB0) = 0xB;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0xB4) = ecx;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0xB8) = 0x86D804;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0xBC) = eax;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0xC0) = 0xC;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0xC4) = eax;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0xC8) = 0x86D7FC;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0xCC) = eax;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0xD0) = 0xD;
    edi = MEM32(esi + 0x18);
    MEM32(edi + 0xD4) = edx;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0xD8) = 0x86D820;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0xDC) = eax;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0xE0) = 0xE;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0xE4) = 0x86D7F0;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0xE8) = 0x86D7E8;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0xEC) = eax;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0xF0) = 0xF;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0xF4) = ecx;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(0x8D7E78);
    MEM32(ecx + 0xF8) = edx;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0xFC) = eax;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, MEM32(esi + 0x18));
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA6F6u); RECOMP_ABI_CALL(0x005EE6B0u, sub_005EE6B0); /* call 0x005EE6B0 */

loc_004EA6F6: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA705u); RECOMP_ABI_CALL(0x005EE3C0u, sub_005EE3C0); /* call 0x005EE3C0 */

loc_004EA705: ;
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA70Du); RECOMP_ABI_CALL(0x005EDC60u, sub_005EDC60); /* call 0x005EDC60 */

loc_004EA70D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    MEM32(esi + 0x14) = eax;
    MEM8(esi + 0x1C) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA71Cu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EA71C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA72Au); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_004EA72A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA72Fu); RECOMP_ABI_CALL(0x004DC997u, sub_004DC997); /* call 0x004DC997 */

loc_004EA72F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004EA735u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA733u); } /* indirect call */
    }

loc_004EA735: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x830968);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA743u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_004EA743: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA748u); RECOMP_ABI_CALL(0x004DC997u, sub_004DC997); /* call 0x004DC997 */

loc_004EA748: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EA751u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA74Eu); } /* indirect call */
    }

loc_004EA751: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86D7E0);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA75Fu); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004EA75F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA764u); RECOMP_ABI_CALL(0x004DC997u, sub_004DC997); /* call 0x004DC997 */

loc_004EA764: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004EA76Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA76Au); } /* indirect call */
    }

loc_004EA76D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x830C58);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA77Bu); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_004EA77B: ;
    eax = MEM32(ebp + -32);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = ebp + -32;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004EA786u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EA783u); } /* indirect call */
    }

loc_004EA786: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA792u); RECOMP_ABI_CALL(0x005EE730u, sub_005EE730); /* call 0x005EE730 */

loc_004EA792: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA79Du); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004EA79D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004EA7A2
 * Original: 0x004EA7A2 - 0x004EA7AA (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA7A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EA7A2: ;
    _fb = (uint32_t)(0xFFFFFFD8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFD8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004EA1C6(); return; /* tail jmp 0x004EA1C6 */

}

/**
 * sub_004EA7AA
 * Original: 0x004EA7AA - 0x004EA7EF (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA7AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EA7AA: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    MEM32(esi) = 0x86D7B4;
    edi = esi + 0x28;
    MEM32(edi) = 0x86D790;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 0x24) = 0x86D77C;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 4);
    ecx = eax + -40;
    MEM32(eax + esi + 0x20) = ecx;
    ecx = esi;
    PUSH32(esp, 0x004EA7DFu); RECOMP_ABI_CALL(0x004EA1C6u, sub_004EA1C6); /* call 0x004EA1C6 */

loc_004EA7DF: ;
    ecx = edi;
    PUSH32(esp, 0x004EA7E6u); RECOMP_ABI_CALL(0x004E9CAEu, sub_004E9CAE); /* call 0x004E9CAE */

loc_004EA7E6: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004EA9AB(); return; /* tail jmp 0x004EA9AB */

}

/**
 * sub_004EA8AD
 * Original: 0x004EA8AD - 0x004EA8D1 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA8AD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EA8AD: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EA8B5u); RECOMP_ABI_CALL(0x004EA7AAu, sub_004EA7AA); /* call 0x004EA7AA */

loc_004EA8B5: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x004EA8BDu); RECOMP_ABI_CALL(0x004E9EA4u, sub_004E9EA4); /* call 0x004E9EA4 */

loc_004EA8BD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EA8CB; /* je: equal / zero */

loc_004EA8C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EA8CAu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EA8CA: ;
    POP32(esp, ecx);

loc_004EA8CB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EA8D1
 * Original: 0x004EA8D1 - 0x004EA8E3 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA8D1(void)
{

loc_004EA8D1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EA8D9u); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004EA8D9: ;
    MEM32(esi) = 0x86D848;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EA8E3
 * Original: 0x004EA8E3 - 0x004EA8EE (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA8E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EA8E3: ;
    MEM32(ecx) = 0x86D848;
    g_seh_ebp = ebp; sub_004E59DB(); return; /* tail jmp 0x004E59DB */

}

/**
 * sub_004EA8EE
 * Original: 0x004EA8EE - 0x004EA910 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA8EE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EA8EE: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D848;
    PUSH32(esp, 0x004EA8FCu); RECOMP_ABI_CALL(0x004E59DBu, sub_004E59DB); /* call 0x004E59DB */

loc_004EA8FC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EA90A; /* je: equal / zero */

loc_004EA903: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EA909u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EA909: ;
    POP32(esp, ecx);

loc_004EA90A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EA910
 * Original: 0x004EA910 - 0x004EA922 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA910(void)
{

loc_004EA910: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EA918u); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004EA918: ;
    MEM32(esi) = 0x86D888;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EA922
 * Original: 0x004EA922 - 0x004EA92D (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA922(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EA922: ;
    MEM32(ecx) = 0x86D888;
    g_seh_ebp = ebp; sub_004E59DB(); return; /* tail jmp 0x004E59DB */

}

/**
 * sub_004EA92D
 * Original: 0x004EA92D - 0x004EA94F (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA92D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EA92D: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D888;
    PUSH32(esp, 0x004EA93Bu); RECOMP_ABI_CALL(0x004E59DBu, sub_004E59DB); /* call 0x004E59DB */

loc_004EA93B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EA949; /* je: equal / zero */

loc_004EA942: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EA948u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EA948: ;
    POP32(esp, ecx);

loc_004EA949: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EA94F
 * Original: 0x004EA94F - 0x004EA9A3 (84 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EA94F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EA94F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004EA96F; /* je: equal / zero */

loc_004EA960: ;
    ecx = esi + 0x28;
    MEM32(esi + 0x24) = 0x86D8C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA96Fu); RECOMP_ABI_CALL(0x004E9E9Bu, sub_004E9E9B); /* call 0x004E9E9B */

loc_004EA96F: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA976u); RECOMP_ABI_CALL(0x004E59C9u, sub_004E59C9); /* call 0x004E59C9 */

loc_004EA976: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA97Bu); RECOMP_ABI_CALL(0x004DC960u, sub_004DC960); /* call 0x004DC960 */

loc_004EA97B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    PUSH32(esp, 4);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EA988u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004EA988: ;
    eax = MEM32(esi + 0x24);
    MEM32(esi) = 0x86D8B8;
    eax = MEM32(eax + 4);
    MEM32(eax + esi + 0x24) = 0x86D8A4;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EA9A3
 * Original: 0x004EA9A3 - 0x004EA9AB (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA9A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EA9A3: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EA9D2(); return; /* tail jmp 0x004EA9D2 */

}

/**
 * sub_004EA9AB
 * Original: 0x004EA9AB - 0x004EA9D2 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA9AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EA9AB: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    MEM32(esi) = 0x86D8B8;
    eax = MEM32(eax + 4);
    ecx = esi + 8;
    MEM32(eax + esi + 0x24) = 0x86D8A4;
    PUSH32(esp, 0x004EA9CAu); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004EA9CA: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004E59DB(); return; /* tail jmp 0x004E59DB */

}

/**
 * sub_004EA9D2
 * Original: 0x004EA9D2 - 0x004EA9F6 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA9D2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EA9D2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EA9DAu); RECOMP_ABI_CALL(0x004EA9ABu, sub_004EA9AB); /* call 0x004EA9AB */

loc_004EA9DA: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x004EA9E2u); RECOMP_ABI_CALL(0x004E9EA4u, sub_004E9EA4); /* call 0x004E9EA4 */

loc_004EA9E2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EA9F0; /* je: equal / zero */

loc_004EA9E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EA9EFu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EA9EF: ;
    POP32(esp, ecx);

loc_004EA9F0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EA9F6
 * Original: 0x004EA9F6 - 0x004EAA08 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA9F6(void)
{

loc_004EA9F6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EA9FEu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004EA9FE: ;
    MEM32(esi) = 0x86D900;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EAA13
 * Original: 0x004EAA13 - 0x004EAA3B (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAA13(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EAA13: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D900;
    PUSH32(esp, 0x004EAA21u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004EAA21: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EAA2F; /* je: equal / zero */

loc_004EAA28: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EAA2Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EAA2E: ;
    POP32(esp, ecx);

loc_004EAA2F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EAA3B
 * Original: 0x004EAA3B - 0x004EAA55 (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAA3B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EAA3B: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004EAA52; /* jbe: below or equal (unsigned <=) */

loc_004EAA42: ;
    eax = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0xC)); }
    MEM32(ecx + 8) = eax;

loc_004EAA52: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004EAA55
 * Original: 0x004EAA55 - 0x004EAB0C (183 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EAA55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EAA55: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x90E7AC);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004EAA76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAA73u); } /* indirect call */
    }

loc_004EAA76: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004EAA7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAA7Au); } /* indirect call */
    }

loc_004EAA7D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    ecx = ebp + -324;
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(edi);
    ebx = 0x7B891F;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x86D8D0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004EAA9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAA9Au); } /* indirect call */
    }

loc_004EAA9D: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    ecx = ebp + -68;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x86D8DC);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004EAAB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAAADu); } /* indirect call */
    }

loc_004EAAB0: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx);
    edx = ebp + -328;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ebp + -324;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004EAAC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAAC3u); } /* indirect call */
    }

loc_004EAAC6: ;
    ecx = MEM32(0x90E7F4);
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EAAD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAAD0u); } /* indirect call */
    }

loc_004EAAD2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -328));
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = ebp + -68;
    PUSH32(esp, ecx);
    ecx = ebp + -324;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EAAEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAAE8u); } /* indirect call */
    }

loc_004EAAEB: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = 0x64;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EAAF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAAF7u); } /* indirect call */
    }

loc_004EAAF9: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EAB08u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004EAB08: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004EAB0C
 * Original: 0x004EAB0C - 0x004EAB45 (57 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAB0C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EAB0C: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fa == 0)) goto loc_004EAB2A; /* je: equal / zero */

loc_004EAB16: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004EAB26; /* je: equal / zero */

loc_004EAB1A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004EAB21; /* je: equal / zero */

loc_004EAB1D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004EAB2D;

loc_004EAB21: ;
    PUSH32(esp, 2);

loc_004EAB23: ;
    POP32(esp, eax);
    goto loc_004EAB2D;

loc_004EAB26: ;
    PUSH32(esp, 3);
    goto loc_004EAB23;

loc_004EAB2A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004EAB2D: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = 0x64;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EAB3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAB3Au); } /* indirect call */
    }

loc_004EAB3D: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004EAB45
 * Original: 0x004EAB45 - 0x004EAB7E (57 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAB45(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EAB45: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004EAB4Eu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004EAB4E: ;
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86D900;
    PUSH32(esp, 0x004EAB5Eu); RECOMP_ABI_CALL(0x004AD997u, sub_004AD997); /* call 0x004AD997 */

loc_004EAB5E: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = 0x86D928;
    POP32(esp, edi);
    MEM32(esi) = 0x86D914;
    MEM32(esi + 0x10) = 0x64;
    MEM8(esi + 0x14) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EAB7E
 * Original: 0x004EAB7E - 0x004EABA3 (37 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAB7E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EAB7E: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x86D914;
    MEM32(ecx) = 0x86D928;
    PUSH32(esp, 0x004EAB95u); RECOMP_ABI_CALL(0x004AD9A0u, sub_004AD9A0); /* call 0x004AD9A0 */

loc_004EAB95: ;
    MEM32(esi) = 0x86D900;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004EABA3
 * Original: 0x004EABA3 - 0x004EAC23 (128 bytes, 47 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EABA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EABA3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    ecx = MEM32(0x90E7AC);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004EABC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EABBEu); } /* indirect call */
    }

loc_004EABC1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004EABC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EABC5u); } /* indirect call */
    }

loc_004EABC8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    ecx = ebp + -324;
    PUSH32(esp, ecx);
    esi = eax;
    eax = MEM32(esi);
    edi = 0x7B891F;
    PUSH32(esp, edi);
    PUSH32(esp, 0x86D8D0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004EABE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EABE5u); } /* indirect call */
    }

loc_004EABE8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    ecx = ebp + -68;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x86D8DC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004EABFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EABF8u); } /* indirect call */
    }

loc_004EABFB: ;
    ecx = MEM32(0x90E7F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EAC05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAC03u); } /* indirect call */
    }

loc_004EAC05: ;
    edx = MEM32(eax);
    ecx = ebp + -68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp + -324;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004EAC17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAC14u); } /* indirect call */
    }

loc_004EAC17: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EAC21u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004EAC21: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004EAC23
 * Original: 0x004EAC23 - 0x004EAC27 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAC23(void)
{

loc_004EAC23: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_004EAC27
 * Original: 0x004EAC27 - 0x004EACC3 (156 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EAC27(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EAC27: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004EAC51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAC4Eu); } /* indirect call */
    }

loc_004EAC51: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004EAC58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAC55u); } /* indirect call */
    }

loc_004EAC58: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    ecx = ebp + -260;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86D8D0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004EAC75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAC72u); } /* indirect call */
    }

loc_004EAC75: ;
    ecx = MEM32(0x90E7F4);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EAC83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAC81u); } /* indirect call */
    }

loc_004EAC83: ;
    edx = MEM32(eax);
    ecx = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004EAC8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAC8Bu); } /* indirect call */
    }

loc_004EAC8D: ;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EAC94u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004EAC94: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004EAC9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAC98u); } /* indirect call */
    }

loc_004EAC9B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = ebp + -260;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004EACB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EACB2u); } /* indirect call */
    }

loc_004EACB5: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EACBFu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004EACBF: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EACC3
 * Original: 0x004EACC3 - 0x004EACFC (57 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EACC3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EACC3: ;
    PUSH32(esp, esi);
    esi = ecx + 0x14;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004EACF2; /* jne: not equal / not zero */

loc_004EACCC: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004EACD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EACD4u); } /* indirect call */
    }

loc_004EACD7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004EACDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EACDBu); } /* indirect call */
    }

loc_004EACDE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86D8E8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004EACF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EACEFu); } /* indirect call */
    }

loc_004EACF2: ;
    SET_LO8(eax, MEM8(esi));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EACFC
 * Original: 0x004EACFC - 0x004EAD20 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EACFC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EACFC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004EAD04;

loc_004EAD04: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EAD0Cu); RECOMP_ABI_CALL(0x004EAB7Eu, sub_004EAB7E); /* call 0x004EAB7E */

loc_004EAD0C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EAD1A; /* je: equal / zero */

loc_004EAD13: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EAD19u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EAD19: ;
    POP32(esp, ecx);

loc_004EAD1A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EAD04
 * Original: 0x004EAD04 - 0x004EAD20 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAD04(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EAD04: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EAD0Cu); RECOMP_ABI_CALL(0x004EAB7Eu, sub_004EAB7E); /* call 0x004EAB7E */

loc_004EAD0C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EAD1A; /* je: equal / zero */

loc_004EAD13: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EAD19u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EAD19: ;
    POP32(esp, ecx);

loc_004EAD1A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EAD20
 * Original: 0x004EAD20 - 0x004EAD32 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAD20(void)
{

loc_004EAD20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EAD28u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004EAD28: ;
    MEM32(esi) = 0x86D938;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EAD3D
 * Original: 0x004EAD3D - 0x004EAD65 (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAD3D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EAD3D: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D938;
    PUSH32(esp, 0x004EAD4Bu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004EAD4B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EAD59; /* je: equal / zero */

loc_004EAD52: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EAD58u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EAD58: ;
    POP32(esp, ecx);

loc_004EAD59: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EAD65
 * Original: 0x004EAD65 - 0x004EAD76 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAD65(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EAD65: ;
    ecx = MEM32(0x90E7F8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EAD75; /* je: equal / zero */

loc_004EAD6F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EAD75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAD73u); } /* indirect call */
    }

loc_004EAD75: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EAD76
 * Original: 0x004EAD76 - 0x004EAD7C (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAD76(void)
{

loc_004EAD76: ;
    eax = MEM32(0x90E7F8);
    esp += 4; return; /* ret */

}

/**
 * sub_004EAD8E
 * Original: 0x004EAD8E - 0x004EADA9 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAD8E(void)
{

loc_004EAD8E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004EAD9Eu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004EAD9E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EADA9
 * Original: 0x004EADA9 - 0x004EADE8 (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EADA9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EADA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004EADB2u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004EADB2: ;
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86D938;
    PUSH32(esp, 0x004EADC2u); RECOMP_ABI_CALL(0x004DCA26u, sub_004DCA26); /* call 0x004DCA26 */

loc_004EADC2: ;
    MEM32(esi) = 0x86D94C;
    MEM32(edi) = 0x86D940;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(0x90E7AC);
    MEM32(0x90E7F8) = esi;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EADE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EADE1u); } /* indirect call */
    }

loc_004EADE3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EADE8
 * Original: 0x004EADE8 - 0x004EADF0 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EADE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EADE8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EAEC9(); return; /* tail jmp 0x004EAEC9 */

}

/**
 * sub_004EADF0
 * Original: 0x004EADF0 - 0x004EADF4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EADF0(void)
{

loc_004EADF0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_004EADF4
 * Original: 0x004EADF4 - 0x004EADF8 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EADF4(void)
{

loc_004EADF4: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_004EADF8
 * Original: 0x004EADF8 - 0x004EAE40 (72 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EADF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EADF8: ;
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x86D94C;
    MEM32(edi) = 0x86D940;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EAE17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAE14u); } /* indirect call */
    }

loc_004EAE17: ;
    MEM32(0x90E7F8) = MEM32(0x90E7F8) & 0;
    _fa = (uint32_t)(MEM32(0x90E7F8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EAE2A; /* je: equal / zero */

loc_004EAE25: ;
    PUSH32(esp, 0x004EAE2Au); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EAE2A: ;
    ecx = edi;
    PUSH32(esp, 0x004EAE31u); RECOMP_ABI_CALL(0x004DCA2Fu, sub_004DCA2F); /* call 0x004DCA2F */

loc_004EAE31: ;
    POP32(esp, edi);
    MEM32(esi) = 0x86D938;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004EAE40
 * Original: 0x004EAE40 - 0x004EAE60 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EAE40: ;
    PUSH32(esp, 0x004EAE45u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EAE45: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x004EAE51u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004EAE51: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EAE5F; /* je: equal / zero */

loc_004EAE58: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_004EADA9(); return; /* tail jmp 0x004EADA9 */

loc_004EAE5F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EAE60
 * Original: 0x004EAE60 - 0x004EAE7B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EAE60: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004EAE78; /* jl: less (signed <) */

loc_004EAE67: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004EAE78; /* jge: greater or equal (signed >=) */

loc_004EAE6E: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004EAE78u); RECOMP_ABI_CALL(0x004EAD8Eu, sub_004EAD8E); /* call 0x004EAD8E */

loc_004EAE78: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EAE7B
 * Original: 0x004EAE7B - 0x004EAEC9 (78 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAE7B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EAE7B: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 5 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_004EAEC5; /* jge: greater or equal (signed >=) */

loc_004EAE85: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004EAEC5; /* jl: less (signed <) */

loc_004EAE8C: ;
    PUSH32(esp, 0x004EAE91u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EAE91: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004EAE9Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004EAE9D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EAEAD; /* je: equal / zero */

loc_004EAEA4: ;
    ecx = eax;
    PUSH32(esp, 0x004EAEABu); RECOMP_ABI_CALL(0x004EAB45u, sub_004EAB45); /* call 0x004EAB45 */

loc_004EAEAB: ;
    goto loc_004EAEAF;

loc_004EAEAD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EAEAF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EAEB5u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004EAEB5: ;
    ecx = eax;
    PUSH32(esp, 0x004EAEBCu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004EAEBC: ;
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, 0x004EAEC5u); RECOMP_ABI_CALL(0x004EAD8Eu, sub_004EAD8E); /* call 0x004EAD8E */

loc_004EAEC5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EAEC9
 * Original: 0x004EAEC9 - 0x004EAEE5 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAEC9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EAEC9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EAED1u); RECOMP_ABI_CALL(0x004EADF8u, sub_004EADF8); /* call 0x004EADF8 */

loc_004EAED1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EAEDF; /* je: equal / zero */

loc_004EAED8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EAEDEu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EAEDE: ;
    POP32(esp, ecx);

loc_004EAEDF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EAEE5
 * Original: 0x004EAEE5 - 0x004EAEF7 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAEE5(void)
{

loc_004EAEE5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EAEEDu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004EAEED: ;
    MEM32(esi) = 0x86D95C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EAF02
 * Original: 0x004EAF02 - 0x004EAF2A (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAF02(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EAF02: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86D95C;
    PUSH32(esp, 0x004EAF10u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004EAF10: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EAF1E; /* je: equal / zero */

loc_004EAF17: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EAF1Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EAF1D: ;
    POP32(esp, ecx);

loc_004EAF1E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EAF2A
 * Original: 0x004EAF2A - 0x004EAF6A (64 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAF2A(void)
{

loc_004EAF2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004EAF33u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004EAF33: ;
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86D95C;
    PUSH32(esp, 0x004EAF43u); RECOMP_ABI_CALL(0x004DCA26u, sub_004DCA26); /* call 0x004DCA26 */

loc_004EAF43: ;
    MEM32(esi) = 0x86D96C;
    MEM32(edi) = 0x86D960;
    MEM32(0x90E7FC) = esi;
    MEM8(esi + 0xC) = 0;
    PUSH32(esp, 0x004EAF5Eu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004EAF5E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004EAF65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAF63u); } /* indirect call */
    }

loc_004EAF65: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EAF6A
 * Original: 0x004EAF6A - 0x004EAFA7 (61 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAF6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EAF6A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x86D96C;
    MEM32(edi) = 0x86D960;
    PUSH32(esp, 0x004EAF82u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004EAF82: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EAF8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAF87u); } /* indirect call */
    }

loc_004EAF8A: ;
    MEM32(0x90E7FC) = MEM32(0x90E7FC) & 0;
    _fa = (uint32_t)(MEM32(0x90E7FC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi;
    PUSH32(esp, 0x004EAF98u); RECOMP_ABI_CALL(0x004DCA2Fu, sub_004DCA2F); /* call 0x004DCA2F */

loc_004EAF98: ;
    POP32(esp, edi);
    MEM32(esi) = 0x86D95C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004EAFA7
 * Original: 0x004EAFA7 - 0x004EB004 (93 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EAFA7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EAFA7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EAFAFu); RECOMP_ABI_CALL(0x004EAD76u, sub_004EAD76); /* call 0x004EAD76 */

loc_004EAFAF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EAFB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAFB3u); } /* indirect call */
    }

loc_004EAFB6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004EAFBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAFBAu); } /* indirect call */
    }

loc_004EAFBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB002; /* je: equal / zero */

loc_004EAFC1: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EAFCDu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004EAFCD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004EAFD5u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_004EAFD5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EAFDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAFD9u); } /* indirect call */
    }

loc_004EAFDC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x865530));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004EAFE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EAFE6u); } /* indirect call */
    }

loc_004EAFE9: ;
    PUSH32(esp, 0x86D97C);
    PUSH32(esp, 0x86D970);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1770);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004EB002u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004EB002: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB004
 * Original: 0x004EB004 - 0x004EB030 (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB004(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB004: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EB00Cu); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_004EB00C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EB013u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB010u); } /* indirect call */
    }

loc_004EB013: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x865530));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004EB020u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB01Du); } /* indirect call */
    }

loc_004EB020: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004EB02Bu); RECOMP_ABI_CALL(0x004C38DCu, sub_004C38DC); /* call 0x004C38DC */

loc_004EB02B: ;
    MEM8(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB030
 * Original: 0x004EB030 - 0x004EB05B (43 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB030: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 6 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_004EB057; /* jl: less (signed <) */

loc_004EB03A: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004EB057; /* jge: greater or equal (signed >=) */

loc_004EB041: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB04F; /* je: equal / zero */

loc_004EB047: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004EB04Fu); RECOMP_ABI_CALL(0x004EB004u, sub_004EB004); /* call 0x004EB004 */

loc_004EB04F: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004EB057u); RECOMP_ABI_CALL(0x004EAFA7u, sub_004EAFA7); /* call 0x004EAFA7 */

loc_004EB057: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EB05B
 * Original: 0x004EB05B - 0x004EB05E (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB05B(void)
{

loc_004EB05B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EB05E
 * Original: 0x004EB05E - 0x004EB07E (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB05E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB05E: ;
    PUSH32(esp, 0x004EB063u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EB063: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004EB06Fu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004EB06F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB07D; /* je: equal / zero */

loc_004EB076: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_004EAF2A(); return; /* tail jmp 0x004EAF2A */

loc_004EB07D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EB07E
 * Original: 0x004EB07E - 0x004EB08F (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB07E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB07E: ;
    ecx = MEM32(0x90E7FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB08E; /* je: equal / zero */

loc_004EB088: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EB08Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB08Cu); } /* indirect call */
    }

loc_004EB08E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EB095
 * Original: 0x004EB095 - 0x004EB0B9 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB095(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB095: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_004EB09D;

loc_004EB09D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EB0A5u); RECOMP_ABI_CALL(0x004EAF6Au, sub_004EAF6A); /* call 0x004EAF6A */

loc_004EB0A5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EB0B3; /* je: equal / zero */

loc_004EB0AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EB0B2u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EB0B2: ;
    POP32(esp, ecx);

loc_004EB0B3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB09D
 * Original: 0x004EB09D - 0x004EB0B9 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB09D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB09D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EB0A5u); RECOMP_ABI_CALL(0x004EAF6Au, sub_004EAF6A); /* call 0x004EAF6A */

loc_004EB0A5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EB0B3; /* je: equal / zero */

loc_004EB0AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EB0B2u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EB0B2: ;
    POP32(esp, ecx);

loc_004EB0B3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB0B9
 * Original: 0x004EB0B9 - 0x004EB0D5 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB0B9(void)
{

loc_004EB0B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    esi = ecx;
    PUSH32(esp, 0x004EB0C3u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004EB0C3: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x86D988;
    PUSH32(esp, 0x004EB0D1u); RECOMP_ABI_CALL(0x004EB134u, sub_004EB134); /* call 0x004EB134 */

loc_004EB0D1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB0D5
 * Original: 0x004EB0D5 - 0x004EB0DB (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB0D5(void)
{

loc_004EB0D5: ;
    eax = 0x86D9CC;
    esp += 4; return; /* ret */

}

/**
 * sub_004EB0DB
 * Original: 0x004EB0DB - 0x004EB115 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB0DB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB0DB: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x86D988;
    PUSH32(esp, 0x004EB0ECu); RECOMP_ABI_CALL(0x004EB2CAu, sub_004EB2CA); /* call 0x004EB2CA */

loc_004EB0EC: ;
    ecx = esi;
    PUSH32(esp, 0x004EB0F3u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004EB0F3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EB10F; /* je: equal / zero */

loc_004EB0FA: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EB10Cu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004EB10C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004EB10F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB115
 * Original: 0x004EB115 - 0x004EB134 (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB115(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB115: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004EB11Cu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004EB11C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EB12A; /* je: equal / zero */

loc_004EB121: ;
    ecx = eax;
    PUSH32(esp, 0x004EB128u); RECOMP_ABI_CALL(0x004EB0B9u, sub_004EB0B9); /* call 0x004EB0B9 */

loc_004EB128: ;
    goto loc_004EB12C;

loc_004EB12A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EB12C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EB132u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004EB132: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB134
 * Original: 0x004EB134 - 0x004EB141 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB134(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB134: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86D9E0;
    esp += 4; return; /* ret */

}

/**
 * sub_004EB141
 * Original: 0x004EB141 - 0x004EB174 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB141(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB141: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EB149u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EB149: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x004EB155u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004EB155: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB165; /* je: equal / zero */

loc_004EB15C: ;
    ecx = eax;
    PUSH32(esp, 0x004EB163u); RECOMP_ABI_CALL(0x004EB4C4u, sub_004EB4C4); /* call 0x004EB4C4 */

loc_004EB163: ;
    goto loc_004EB167;

loc_004EB165: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EB167: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004EB172u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004EB172: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB174
 * Original: 0x004EB174 - 0x004EB193 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB174(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB174: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EB180u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004EB180: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB18D; /* je: equal / zero */

loc_004EB187: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EB18Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB18Bu); } /* indirect call */
    }

loc_004EB18D: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB1C3
 * Original: 0x004EB1C3 - 0x004EB1DD (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB1C3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB1C3: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004EB1D7u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004EB1D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004EB1DD
 * Original: 0x004EB1DD - 0x004EB1F6 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB1DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB1DD: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB1F1; /* je: equal / zero */

loc_004EB1E6: ;
    ecx = MEM32(0x90E800);
    PUSH32(esp, 0x004EB1F1u); RECOMP_ABI_CALL(0x004EB141u, sub_004EB141); /* call 0x004EB141 */

loc_004EB1F1: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004EB1F6
 * Original: 0x004EB1F6 - 0x004EB20F (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB1F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB1F6: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB20A; /* je: equal / zero */

loc_004EB1FF: ;
    ecx = MEM32(0x90E800);
    PUSH32(esp, 0x004EB20Au); RECOMP_ABI_CALL(0x004EB174u, sub_004EB174); /* call 0x004EB174 */

loc_004EB20A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004EB20F
 * Original: 0x004EB20F - 0x004EB232 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB20F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB20F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EB21D; /* jne: not equal / not zero */

loc_004EB218: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EB21D: ;
    eax = MEM32(0x90E800);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004EB22Au); RECOMP_ABI_CALL(0x004EB3F6u, sub_004EB3F6); /* call 0x004EB3F6 */

loc_004EB22A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EB230u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004EB230: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB232
 * Original: 0x004EB232 - 0x004EB24D (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB232(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB232: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB248; /* je: equal / zero */

loc_004EB23B: ;
    eax = MEM32(0x90E800);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004EB248u); RECOMP_ABI_CALL(0x004EB552u, sub_004EB552); /* call 0x004EB552 */

loc_004EB248: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004EB24D
 * Original: 0x004EB24D - 0x004EB270 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB24D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB24D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EB25B; /* jne: not equal / not zero */

loc_004EB256: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EB25B: ;
    eax = MEM32(0x90E800);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004EB268u); RECOMP_ABI_CALL(0x004EB409u, sub_004EB409); /* call 0x004EB409 */

loc_004EB268: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EB26Eu); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004EB26E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB270
 * Original: 0x004EB270 - 0x004EB28B (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB270: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB286; /* je: equal / zero */

loc_004EB279: ;
    eax = MEM32(0x90E800);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004EB286u); RECOMP_ABI_CALL(0x004EB581u, sub_004EB581); /* call 0x004EB581 */

loc_004EB286: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004EB28B
 * Original: 0x004EB28B - 0x004EB2A6 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB28B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB28B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB2A1; /* je: equal / zero */

loc_004EB294: ;
    eax = MEM32(0x90E800);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004EB2A1u); RECOMP_ABI_CALL(0x004EB41Cu, sub_004EB41C); /* call 0x004EB41C */

loc_004EB2A1: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004EB2A6
 * Original: 0x004EB2A6 - 0x004EB2CA (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB2A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB2A6: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB2C5; /* je: equal / zero */

loc_004EB2AF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004EB2B6u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004EB2B6: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E800);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004EB2C5u); RECOMP_ABI_CALL(0x004EB44Au, sub_004EB44A); /* call 0x004EB44A */

loc_004EB2C5: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004EB2CA
 * Original: 0x004EB2CA - 0x004EB2E6 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB2CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB2CA: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86D9E0;
    if (CMP_EQ(_fa, _fb)) goto loc_004EB2DE; /* je: equal / zero */

loc_004EB2D9: ;
    PUSH32(esp, 0x004EB2DEu); RECOMP_ABI_CALL(0x004EB174u, sub_004EB174); /* call 0x004EB174 */

loc_004EB2DE: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB2E6
 * Original: 0x004EB2E6 - 0x004EB336 (80 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EB2E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB2E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EB2F8u); RECOMP_ABI_CALL(0x004EB428u, sub_004EB428); /* call 0x004EB428 */

loc_004EB2F8: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EB303u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004EB303: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004EB327; /* jbe: below or equal (unsigned <=) */

loc_004EB309: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EB312u); RECOMP_ABI_CALL(0x004EB439u, sub_004EB439); /* call 0x004EB439 */

loc_004EB312: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EB322u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004EB322: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004EB309; /* jb: below (unsigned <) */

loc_004EB327: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB336
 * Original: 0x004EB336 - 0x004EB35A (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB336(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB336: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EB347; /* jne: not equal / not zero */

loc_004EB340: ;
    PUSH32(esp, 0x004EB345u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004EB345: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004EB347: ;
    ecx = MEM32(0x90E800);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EB356u); RECOMP_ABI_CALL(0x004EB2E6u, sub_004EB2E6); /* call 0x004EB2E6 */

loc_004EB356: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB35A
 * Original: 0x004EB35A - 0x004EB376 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB35A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB35A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EB362u); RECOMP_ABI_CALL(0x004EB2CAu, sub_004EB2CA); /* call 0x004EB2CA */

loc_004EB362: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EB370; /* je: equal / zero */

loc_004EB369: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EB36Fu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004EB36F: ;
    POP32(esp, ecx);

loc_004EB370: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB376
 * Original: 0x004EB376 - 0x004EB399 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB376(void)
{

loc_004EB376: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86DA50);
    MEM32(0x90E800) = eax;
    PUSH32(esp, 0x004EB388u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004EB388: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EB399
 * Original: 0x004EB399 - 0x004EB3C6 (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB399(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB399: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86DAA0;
    if (TEST_Z(_fa, _fb)) goto loc_004EB3B0; /* je: equal / zero */

loc_004EB3A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EB3AFu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004EB3AF: ;
    POP32(esp, ecx);

loc_004EB3B0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB3C6
 * Original: 0x004EB3C6 - 0x004EB3E3 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB3C6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB3C6: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86DAAC;
    if (TEST_Z(_fa, _fb)) goto loc_004EB3DD; /* je: equal / zero */

loc_004EB3D6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EB3DCu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004EB3DC: ;
    POP32(esp, ecx);

loc_004EB3DD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB3E3
 * Original: 0x004EB3E3 - 0x004EB3F6 (19 bytes, 5 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB3E3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB3E3: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86DAB4);
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004EB3F5u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004EB3F5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EB3F6
 * Original: 0x004EB3F6 - 0x004EB409 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB3F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB3F6: ;
    PUSH32(esp, 0x004EB3FBu); RECOMP_ABI_CALL(0x004EAD76u, sub_004EAD76); /* call 0x004EAD76 */

loc_004EB3FB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EB402u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB3FFu); } /* indirect call */
    }

loc_004EB402: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_004EB409
 * Original: 0x004EB409 - 0x004EB41C (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB409(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB409: ;
    PUSH32(esp, 0x004EB40Eu); RECOMP_ABI_CALL(0x004EAD76u, sub_004EAD76); /* call 0x004EAD76 */

loc_004EB40E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EB415u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB412u); } /* indirect call */
    }

loc_004EB415: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

}

/**
 * sub_004EB41C
 * Original: 0x004EB41C - 0x004EB428 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB41C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB41C: ;
    PUSH32(esp, 0x004EB421u); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004EB421: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_004EB428
 * Original: 0x004EB428 - 0x004EB439 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB428(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB428: ;
    ecx = MEM32(0x90E7F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EB432u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB430u); } /* indirect call */
    }

loc_004EB432: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_004EB439
 * Original: 0x004EB439 - 0x004EB44A (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB439(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB439: ;
    ecx = MEM32(0x90E7F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EB443u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB441u); } /* indirect call */
    }

loc_004EB443: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_004EB44A
 * Original: 0x004EB44A - 0x004EB472 (40 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB44A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EB44A: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x90E7F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EB457u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB455u); } /* indirect call */
    }

loc_004EB457: ;
    edx = MEM32(eax);
    ecx = esi;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x1C)) >> 32) & 1);
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004EB46Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB46Bu); } /* indirect call */
    }

loc_004EB46E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB472
 * Original: 0x004EB472 - 0x004EB493 (33 bytes, 11 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB472(void)
{

loc_004EB472: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004EB47Fu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EB47F: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86DAC4);
    ecx = esi + -24;
    PUSH32(esp, 0x004EB491u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004EB491: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB493
 * Original: 0x004EB493 - 0x004EB4C4 (49 bytes, 15 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB493(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB493: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004EB4A0u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EB4A0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 2 (32-bit) */
    ecx = esi + -24;
    PUSH32(esp, 0x7B891F);
    if (CMP_NE(_fa, _fb)) goto loc_004EB4B6; /* jne: not equal / not zero */

loc_004EB4AF: ;
    PUSH32(esp, 0x86DAE0);
    goto loc_004EB4BB;

loc_004EB4B6: ;
    PUSH32(esp, 0x86DAD4);

loc_004EB4BB: ;
    PUSH32(esp, 0x004EB4C0u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004EB4C0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB4C4
 * Original: 0x004EB4C4 - 0x004EB4FD (57 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB4C4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB4C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x86DB08);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x004EB4D3u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004EB4D3: ;
    MEM32(esi + 0x18) = 0x86DAA0;
    MEM32(esi + 0x1C) = 0x86DAAC;
    MEM32(esi) = 0x86DB04;
    MEM32(esi + 0x18) = 0x86DAF8;
    MEM32(esi + 0x1C) = 0x86DAF0;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB4FD
 * Original: 0x004EB4FD - 0x004EB505 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB4FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB4FD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EB589(); return; /* tail jmp 0x004EB589 */

}

/**
 * sub_004EB505
 * Original: 0x004EB505 - 0x004EB50D (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB505(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB505: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EB589(); return; /* tail jmp 0x004EB589 */

}

/**
 * sub_004EB50D
 * Original: 0x004EB50D - 0x004EB552 (69 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB50D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB50D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x86DB04;
    MEM32(esi + 0x18) = 0x86DAF8;
    MEM32(esi + 0x1C) = 0x86DAF0;
    if (CMP_EQ(_fa, _fb)) goto loc_004EB530; /* je: equal / zero */

loc_004EB52B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EB530u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB52Du); } /* indirect call */
    }

loc_004EB530: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB53C; /* je: equal / zero */

loc_004EB537: ;
    PUSH32(esp, 0x004EB53Cu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EB53C: ;
    MEM32(esi + 0x1C) = 0x86DAAC;
    MEM32(esi + 0x18) = 0x86DAA0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004EB552
 * Original: 0x004EB552 - 0x004EB581 (47 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB552(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EB552: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004EB55Bu); RECOMP_ABI_CALL(0x004EAD76u, sub_004EAD76); /* call 0x004EAD76 */

loc_004EB55B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EB562u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB55Fu); } /* indirect call */
    }

loc_004EB562: ;
    edx = MEM32(eax);
    ecx = esi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = esi + 0x18;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004EB575u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB572u); } /* indirect call */
    }

loc_004EB575: ;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004EB57Eu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EB57E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB581
 * Original: 0x004EB581 - 0x004EB589 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB581(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB581: ;
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_004EB589
 * Original: 0x004EB589 - 0x004EB5A5 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB589(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB589: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EB591u); RECOMP_ABI_CALL(0x004EB50Du, sub_004EB50D); /* call 0x004EB50D */

loc_004EB591: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EB59F; /* je: equal / zero */

loc_004EB598: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EB59Eu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EB59E: ;
    POP32(esp, ecx);

loc_004EB59F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB5A5
 * Original: 0x004EB5A5 - 0x004EB5B7 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB5A5(void)
{

loc_004EB5A5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EB5ADu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004EB5AD: ;
    MEM32(esi) = 0x86DB20;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB5C2
 * Original: 0x004EB5C2 - 0x004EB5F0 (46 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB5C2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB5C2: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86DB20;
    PUSH32(esp, 0x004EB5D0u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004EB5D0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EB5DE; /* je: equal / zero */

loc_004EB5D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EB5DDu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EB5DD: ;
    POP32(esp, ecx);

loc_004EB5DE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB5F0
 * Original: 0x004EB5F0 - 0x004EB601 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB5F0: ;
    ecx = MEM32(0x90E804);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB600; /* je: equal / zero */

loc_004EB5FA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EB600u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB5FEu); } /* indirect call */
    }

loc_004EB600: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EB601
 * Original: 0x004EB601 - 0x004EB607 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB601(void)
{

loc_004EB601: ;
    eax = MEM32(0x90E804);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB61C
 * Original: 0x004EB61C - 0x004EB64E (50 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB61C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EB61C: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004EB62B; /* je: equal / zero */

loc_004EB626: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004EB62D;

loc_004EB62B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EB62D: ;
    edi = MEM32(esp + 0xC);
    ecx = edi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = edi + 0x10;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EB643u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004EB643: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB64E
 * Original: 0x004EB64E - 0x004EB6B1 (99 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB64E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB64E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004EB657u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004EB657: ;
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x86DB20;
    PUSH32(esp, 0x004EB667u); RECOMP_ABI_CALL(0x004DCA26u, sub_004DCA26); /* call 0x004DCA26 */

loc_004EB667: ;
    MEM32(esi) = 0x86DB34;
    MEM32(edi) = 0x86DB28;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(0x90E7AC);
    MEM32(0x90E804) = esi;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EB688u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB686u); } /* indirect call */
    }

loc_004EB688: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004EB693u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB690u); } /* indirect call */
    }

loc_004EB693: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004EB6AC; /* jge: greater or equal (signed >=) */

loc_004EB698: ;
    ecx = MEM32(0x90E808);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EB6A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB6A0u); } /* indirect call */
    }

loc_004EB6A2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004EB6ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB6AAu); } /* indirect call */
    }

loc_004EB6AC: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB6B1
 * Original: 0x004EB6B1 - 0x004EB6B9 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB6B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB6B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EB7C8(); return; /* tail jmp 0x004EB7C8 */

}

/**
 * sub_004EB6B9
 * Original: 0x004EB6B9 - 0x004EB6C6 (13 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB6B9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EB6B9: ;
    eax = MEM32(ecx + 0xC);
    ecx = eax + 0x10;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_004EB6C6
 * Original: 0x004EB6C6 - 0x004EB6CA (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB6C6(void)
{

loc_004EB6C6: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB6CA
 * Original: 0x004EB6CA - 0x004EB715 (75 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB6CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB6CA: ;
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x86DB34;
    MEM32(edi) = 0x86DB28;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EB6E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB6E6u); } /* indirect call */
    }

loc_004EB6E9: ;
    MEM32(0x90E804) = MEM32(0x90E804) & 0;
    _fa = (uint32_t)(MEM32(0x90E804)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB6FF; /* je: equal / zero */

loc_004EB6F7: ;
    ecx = eax + 0x10;
    PUSH32(esp, 0x004EB6FFu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EB6FF: ;
    ecx = edi;
    PUSH32(esp, 0x004EB706u); RECOMP_ABI_CALL(0x004DCA2Fu, sub_004DCA2F); /* call 0x004DCA2F */

loc_004EB706: ;
    POP32(esp, edi);
    MEM32(esi) = 0x86DB20;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004EB715
 * Original: 0x004EB715 - 0x004EB735 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB715(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB715: ;
    PUSH32(esp, 0x004EB71Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EB71A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x004EB726u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004EB726: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB734; /* je: equal / zero */

loc_004EB72D: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_004EB64E(); return; /* tail jmp 0x004EB64E */

loc_004EB734: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EB735
 * Original: 0x004EB735 - 0x004EB764 (47 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB735(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB735: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004EB761; /* jl: less (signed <) */

loc_004EB73C: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004EB761; /* jge: greater or equal (signed >=) */

loc_004EB743: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004EB74Du); RECOMP_ABI_CALL(0x004EB61Cu, sub_004EB61C); /* call 0x004EB61C */

loc_004EB74D: ;
    ecx = MEM32(0x90E808);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EB757u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB755u); } /* indirect call */
    }

loc_004EB757: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004EB761u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB75Fu); } /* indirect call */
    }

loc_004EB761: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EB764
 * Original: 0x004EB764 - 0x004EB7C8 (100 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB764(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EB764: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_004EB7C4; /* jge: greater or equal (signed >=) */

loc_004EB76E: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004EB7C4; /* jl: less (signed <) */

loc_004EB775: ;
    PUSH32(esp, 0x004EB77Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EB77A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x004EB786u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004EB786: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB796; /* je: equal / zero */

loc_004EB78D: ;
    ecx = eax;
    PUSH32(esp, 0x004EB794u); RECOMP_ABI_CALL(0x004EC4AAu, sub_004EC4AA); /* call 0x004EC4AA */

loc_004EB794: ;
    goto loc_004EB798;

loc_004EB796: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EB798: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004EB7A9u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004EB7A9: ;
    ecx = eax;
    PUSH32(esp, 0x004EB7B0u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004EB7B0: ;
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = esi + 4;
    PUSH32(esp, 0x004EB7C4u); RECOMP_ABI_CALL(0x004EB61Cu, sub_004EB61C); /* call 0x004EB61C */

loc_004EB7C4: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EB7C8
 * Original: 0x004EB7C8 - 0x004EB7E4 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB7C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB7C8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EB7D0u); RECOMP_ABI_CALL(0x004EB6CAu, sub_004EB6CA); /* call 0x004EB6CA */

loc_004EB7D0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EB7DE; /* je: equal / zero */

loc_004EB7D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EB7DDu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EB7DD: ;
    POP32(esp, ecx);

loc_004EB7DE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB7E4
 * Original: 0x004EB7E4 - 0x004EB7F6 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB7E4(void)
{

loc_004EB7E4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EB7ECu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004EB7EC: ;
    MEM32(esi) = 0x86DB58;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB801
 * Original: 0x004EB801 - 0x004EB829 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB801(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB801: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86DB58;
    PUSH32(esp, 0x004EB80Fu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004EB80F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EB81D; /* je: equal / zero */

loc_004EB816: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EB81Cu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EB81C: ;
    POP32(esp, ecx);

loc_004EB81D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB829
 * Original: 0x004EB829 - 0x004EB876 (77 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB829(void)
{

loc_004EB829: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004EB830u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_004EB830: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EB837u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB834u); } /* indirect call */
    }

loc_004EB837: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x86DB74);
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 1);
    edi = 0x86DB44;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004EB84Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB84Au); } /* indirect call */
    }

loc_004EB84D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x86550C));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004EB85Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB857u); } /* indirect call */
    }

loc_004EB85A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x86DB6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B58);
    PUSH32(esp, 0x86DB5C);
    ecx = eax;
    PUSH32(esp, 0x004EB873u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_004EB873: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB876
 * Original: 0x004EB876 - 0x004EB8AC (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB876(void)
{

loc_004EB876: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EB87Cu); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_004EB87C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EB883u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB880u); } /* indirect call */
    }

loc_004EB883: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x86550C));
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004EB892u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB88Fu); } /* indirect call */
    }

loc_004EB892: ;
    PUSH32(esp, 0x86DB5C);
    ecx = eax;
    PUSH32(esp, 0x004EB89Eu); RECOMP_ABI_CALL(0x004C38DCu, sub_004C38DC); /* call 0x004C38DC */

loc_004EB89E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x86DB44);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004EB8AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB8A7u); } /* indirect call */
    }

loc_004EB8AA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB8AC
 * Original: 0x004EB8AC - 0x004EB8BD (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB8AC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB8AC: ;
    ecx = MEM32(0x90E80C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB8BC; /* je: equal / zero */

loc_004EB8B6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EB8BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB8BAu); } /* indirect call */
    }

loc_004EB8BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EB8C3
 * Original: 0x004EB8C3 - 0x004EB8E2 (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB8C3(void)
{

loc_004EB8C3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EB8CBu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004EB8CB: ;
    MEM32(esi) = 0x86DB80;
    ecx = esi;
    MEM32(0x90E80C) = esi;
    PUSH32(esp, 0x004EB8DEu); RECOMP_ABI_CALL(0x004EB829u, sub_004EB829); /* call 0x004EB829 */

loc_004EB8DE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB8E2
 * Original: 0x004EB8E2 - 0x004EB905 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB8E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB8E2: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86DB80;
    PUSH32(esp, 0x004EB8F0u); RECOMP_ABI_CALL(0x004EB876u, sub_004EB876); /* call 0x004EB876 */

loc_004EB8F0: ;
    MEM32(0x90E80C) = MEM32(0x90E80C) & 0;
    _fa = (uint32_t)(MEM32(0x90E80C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 0x86DB58;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}
