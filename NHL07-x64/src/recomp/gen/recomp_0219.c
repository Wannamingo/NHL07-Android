/**
 * nhl_07_recomp - Recompiled code chunk 219
 * Functions: 250 (0x004CEA7F - 0x004D14BF)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004CEA7F
 * Original: 0x004CEA7F - 0x004CEA9B (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEA7F(void)
{

loc_004CEA7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    esi = ecx;
    PUSH32(esp, 0x004CEA89u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CEA89: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868248;
    PUSH32(esp, 0x004CEA97u); RECOMP_ABI_CALL(0x004D1349u, sub_004D1349); /* call 0x004D1349 */

loc_004CEA97: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CEA9B
 * Original: 0x004CEA9B - 0x004CEAA1 (6 bytes, 2 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEA9B(void)
{

loc_004CEA9B: ;
    eax = 0x86828C;
    esp += 4; return; /* ret */

}

/**
 * sub_004CEAA1
 * Original: 0x004CEAA1 - 0x004CEADB (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEAA1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CEAA1: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868248;
    PUSH32(esp, 0x004CEAB2u); RECOMP_ABI_CALL(0x004D1356u, sub_004D1356); /* call 0x004D1356 */

loc_004CEAB2: ;
    ecx = esi;
    PUSH32(esp, 0x004CEAB9u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CEAB9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CEAD5; /* je: equal / zero */

loc_004CEAC0: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CEAD2u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CEAD2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CEAD5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CEADB
 * Original: 0x004CEADB - 0x004CEAF7 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEADB(void)
{

loc_004CEADB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    esi = ecx;
    PUSH32(esp, 0x004CEAE5u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CEAE5: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8682A8;
    PUSH32(esp, 0x004CEAF3u); RECOMP_ABI_CALL(0x004D1448u, sub_004D1448); /* call 0x004D1448 */

loc_004CEAF3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CEAF7
 * Original: 0x004CEAF7 - 0x004CEAFD (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEAF7(void)
{

loc_004CEAF7: ;
    eax = 0x8682EC;
    esp += 4; return; /* ret */

}

/**
 * sub_004CEAFD
 * Original: 0x004CEAFD - 0x004CEB37 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEAFD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CEAFD: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8682A8;
    PUSH32(esp, 0x004CEB0Eu); RECOMP_ABI_CALL(0x004D1455u, sub_004D1455); /* call 0x004D1455 */

loc_004CEB0E: ;
    ecx = esi;
    PUSH32(esp, 0x004CEB15u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CEB15: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CEB31; /* je: equal / zero */

loc_004CEB1C: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CEB2Eu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CEB2E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CEB31: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CEB37
 * Original: 0x004CEB37 - 0x004CEB53 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEB37(void)
{

loc_004CEB37: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1E);
    esi = ecx;
    PUSH32(esp, 0x004CEB41u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CEB41: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868300;
    PUSH32(esp, 0x004CEB4Fu); RECOMP_ABI_CALL(0x004D14D2u, sub_004D14D2); /* call 0x004D14D2 */

loc_004CEB4F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CEB53
 * Original: 0x004CEB53 - 0x004CEB59 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEB53(void)
{

loc_004CEB53: ;
    eax = 0x868344;
    esp += 4; return; /* ret */

}

/**
 * sub_004CEB59
 * Original: 0x004CEB59 - 0x004CEB93 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEB59(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CEB59: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868300;
    PUSH32(esp, 0x004CEB6Au); RECOMP_ABI_CALL(0x004D1C9Cu, sub_004D1C9C); /* call 0x004D1C9C */

loc_004CEB6A: ;
    ecx = esi;
    PUSH32(esp, 0x004CEB71u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CEB71: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CEB8D; /* je: equal / zero */

loc_004CEB78: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CEB8Au); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CEB8A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CEB8D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CEB93
 * Original: 0x004CEB93 - 0x004CEBAF (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEB93(void)
{

loc_004CEB93: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004CEB9Du); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CEB9D: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868360;
    PUSH32(esp, 0x004CEBABu); RECOMP_ABI_CALL(0x004D1D93u, sub_004D1D93); /* call 0x004D1D93 */

loc_004CEBAB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CEBAF
 * Original: 0x004CEBAF - 0x004CEBB5 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEBAF(void)
{

loc_004CEBAF: ;
    eax = 0x8683A4;
    esp += 4; return; /* ret */

}

/**
 * sub_004CEBB5
 * Original: 0x004CEBB5 - 0x004CEBEF (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEBB5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CEBB5: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868360;
    PUSH32(esp, 0x004CEBC6u); RECOMP_ABI_CALL(0x004D1E8Fu, sub_004D1E8F); /* call 0x004D1E8F */

loc_004CEBC6: ;
    ecx = esi;
    PUSH32(esp, 0x004CEBCDu); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CEBCD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CEBE9; /* je: equal / zero */

loc_004CEBD4: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CEBE6u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CEBE6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CEBE9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CEBEF
 * Original: 0x004CEBEF - 0x004CEC0B (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEBEF(void)
{

loc_004CEBEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x15);
    esi = ecx;
    PUSH32(esp, 0x004CEBF9u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CEBF9: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8683B8;
    PUSH32(esp, 0x004CEC07u); RECOMP_ABI_CALL(0x004D207Du, sub_004D207D); /* call 0x004D207D */

loc_004CEC07: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CEC0B
 * Original: 0x004CEC0B - 0x004CEC11 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEC0B(void)
{

loc_004CEC0B: ;
    eax = 0x8683FC;
    esp += 4; return; /* ret */

}

/**
 * sub_004CEC11
 * Original: 0x004CEC11 - 0x004CEC4B (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEC11(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CEC11: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8683B8;
    PUSH32(esp, 0x004CEC22u); RECOMP_ABI_CALL(0x004D256Bu, sub_004D256B); /* call 0x004D256B */

loc_004CEC22: ;
    ecx = esi;
    PUSH32(esp, 0x004CEC29u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CEC29: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CEC45; /* je: equal / zero */

loc_004CEC30: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CEC42u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CEC42: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CEC45: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CEC4B
 * Original: 0x004CEC4B - 0x004CEC67 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEC4B(void)
{

loc_004CEC4B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    esi = ecx;
    PUSH32(esp, 0x004CEC55u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CEC55: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868410;
    PUSH32(esp, 0x004CEC63u); RECOMP_ABI_CALL(0x004D2718u, sub_004D2718); /* call 0x004D2718 */

loc_004CEC63: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CEC67
 * Original: 0x004CEC67 - 0x004CEC6D (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEC67(void)
{

loc_004CEC67: ;
    eax = 0x868454;
    esp += 4; return; /* ret */

}

/**
 * sub_004CEC6D
 * Original: 0x004CEC6D - 0x004CECA7 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEC6D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CEC6D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868410;
    PUSH32(esp, 0x004CEC7Eu); RECOMP_ABI_CALL(0x004D27FAu, sub_004D27FA); /* call 0x004D27FA */

loc_004CEC7E: ;
    ecx = esi;
    PUSH32(esp, 0x004CEC85u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CEC85: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CECA1; /* je: equal / zero */

loc_004CEC8C: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CEC9Eu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CEC9E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CECA1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CECA7
 * Original: 0x004CECA7 - 0x004CECC3 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CECA7(void)
{

loc_004CECA7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    esi = ecx;
    PUSH32(esp, 0x004CECB1u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CECB1: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868468;
    PUSH32(esp, 0x004CECBFu); RECOMP_ABI_CALL(0x004D297Eu, sub_004D297E); /* call 0x004D297E */

loc_004CECBF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CECC3
 * Original: 0x004CECC3 - 0x004CECC9 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CECC3(void)
{

loc_004CECC3: ;
    eax = 0x8684AC;
    esp += 4; return; /* ret */

}

/**
 * sub_004CECC9
 * Original: 0x004CECC9 - 0x004CED03 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CECC9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CECC9: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868468;
    PUSH32(esp, 0x004CECDAu); RECOMP_ABI_CALL(0x004D2A71u, sub_004D2A71); /* call 0x004D2A71 */

loc_004CECDA: ;
    ecx = esi;
    PUSH32(esp, 0x004CECE1u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CECE1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CECFD; /* je: equal / zero */

loc_004CECE8: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CECFAu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CECFA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CECFD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CED03
 * Original: 0x004CED03 - 0x004CED1F (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CED03(void)
{

loc_004CED03: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    esi = ecx;
    PUSH32(esp, 0x004CED0Du); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CED0D: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8684C8;
    PUSH32(esp, 0x004CED1Bu); RECOMP_ABI_CALL(0x004D2BA5u, sub_004D2BA5); /* call 0x004D2BA5 */

loc_004CED1B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CED1F
 * Original: 0x004CED1F - 0x004CED25 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CED1F(void)
{

loc_004CED1F: ;
    eax = 0x86850C;
    esp += 4; return; /* ret */

}

/**
 * sub_004CED25
 * Original: 0x004CED25 - 0x004CED5F (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CED25(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CED25: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8684C8;
    PUSH32(esp, 0x004CED36u); RECOMP_ABI_CALL(0x004D2C74u, sub_004D2C74); /* call 0x004D2C74 */

loc_004CED36: ;
    ecx = esi;
    PUSH32(esp, 0x004CED3Du); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CED3D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CED59; /* je: equal / zero */

loc_004CED44: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CED56u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CED56: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CED59: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CED5F
 * Original: 0x004CED5F - 0x004CED7B (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CED5F(void)
{

loc_004CED5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xE);
    esi = ecx;
    PUSH32(esp, 0x004CED69u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CED69: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868528;
    PUSH32(esp, 0x004CED77u); RECOMP_ABI_CALL(0x004D2E7Bu, sub_004D2E7B); /* call 0x004D2E7B */

loc_004CED77: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CED7B
 * Original: 0x004CED7B - 0x004CED81 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CED7B(void)
{

loc_004CED7B: ;
    eax = 0x86856C;
    esp += 4; return; /* ret */

}

/**
 * sub_004CED81
 * Original: 0x004CED81 - 0x004CEDBB (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CED81(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CED81: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868528;
    PUSH32(esp, 0x004CED92u); RECOMP_ABI_CALL(0x004D30EFu, sub_004D30EF); /* call 0x004D30EF */

loc_004CED92: ;
    ecx = esi;
    PUSH32(esp, 0x004CED99u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CED99: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CEDB5; /* je: equal / zero */

loc_004CEDA0: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CEDB2u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CEDB2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CEDB5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CEDBB
 * Original: 0x004CEDBB - 0x004CEDD7 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEDBB(void)
{

loc_004CEDBB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x12);
    esi = ecx;
    PUSH32(esp, 0x004CEDC5u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CEDC5: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868588;
    PUSH32(esp, 0x004CEDD3u); RECOMP_ABI_CALL(0x004D3144u, sub_004D3144); /* call 0x004D3144 */

loc_004CEDD3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CEDD7
 * Original: 0x004CEDD7 - 0x004CEDDD (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEDD7(void)
{

loc_004CEDD7: ;
    eax = 0x8685CC;
    esp += 4; return; /* ret */

}

/**
 * sub_004CEDDD
 * Original: 0x004CEDDD - 0x004CEE17 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEDDD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CEDDD: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868588;
    PUSH32(esp, 0x004CEDEEu); RECOMP_ABI_CALL(0x004D345Du, sub_004D345D); /* call 0x004D345D */

loc_004CEDEE: ;
    ecx = esi;
    PUSH32(esp, 0x004CEDF5u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CEDF5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CEE11; /* je: equal / zero */

loc_004CEDFC: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CEE0Eu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CEE0E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CEE11: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CEE17
 * Original: 0x004CEE17 - 0x004CEE3C (37 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEE17(void)
{

loc_004CEE17: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x28);
    esi = ecx;
    PUSH32(esp, 0x004CEE21u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CEE21: ;
    eax = MEM32(esp + 8);
    ecx = esi + 0x10;
    MEM32(esi) = 0x8685E8;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x004CEE36u); RECOMP_ABI_CALL(0x004D42F0u, sub_004D42F0); /* call 0x004D42F0 */

loc_004CEE36: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CEE3C
 * Original: 0x004CEE3C - 0x004CEE40 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEE3C(void)
{

loc_004CEE3C: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_004CEE40
 * Original: 0x004CEE40 - 0x004CEE7A (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CEE40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x8685E8;
    PUSH32(esp, 0x004CEE51u); RECOMP_ABI_CALL(0x004D4317u, sub_004D4317); /* call 0x004D4317 */

loc_004CEE51: ;
    ecx = esi;
    PUSH32(esp, 0x004CEE58u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CEE58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CEE74; /* je: equal / zero */

loc_004CEE5F: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CEE71u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CEE71: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CEE74: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CEE7A
 * Original: 0x004CEE7A - 0x004CEE96 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEE7A(void)
{

loc_004CEE7A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004CEE84u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CEE84: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868630;
    PUSH32(esp, 0x004CEE92u); RECOMP_ABI_CALL(0x004D45CDu, sub_004D45CD); /* call 0x004D45CD */

loc_004CEE92: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CEE96
 * Original: 0x004CEE96 - 0x004CEE9C (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEE96(void)
{

loc_004CEE96: ;
    eax = 0x868674;
    esp += 4; return; /* ret */

}

/**
 * sub_004CEE9C
 * Original: 0x004CEE9C - 0x004CEED6 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEE9C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CEE9C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868630;
    PUSH32(esp, 0x004CEEADu); RECOMP_ABI_CALL(0x004D4798u, sub_004D4798); /* call 0x004D4798 */

loc_004CEEAD: ;
    ecx = esi;
    PUSH32(esp, 0x004CEEB4u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CEEB4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CEED0; /* je: equal / zero */

loc_004CEEBB: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CEECDu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CEECD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CEED0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CEED6
 * Original: 0x004CEED6 - 0x004CEEF2 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEED6(void)
{

loc_004CEED6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004CEEE0u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CEEE0: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868690;
    PUSH32(esp, 0x004CEEEEu); RECOMP_ABI_CALL(0x004D47E3u, sub_004D47E3); /* call 0x004D47E3 */

loc_004CEEEE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CEEF2
 * Original: 0x004CEEF2 - 0x004CEEF8 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEEF2(void)
{

loc_004CEEF2: ;
    eax = 0x8686D4;
    esp += 4; return; /* ret */

}

/**
 * sub_004CEEF8
 * Original: 0x004CEEF8 - 0x004CEF32 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEEF8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CEEF8: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868690;
    PUSH32(esp, 0x004CEF09u); RECOMP_ABI_CALL(0x004D4B3Au, sub_004D4B3A); /* call 0x004D4B3A */

loc_004CEF09: ;
    ecx = esi;
    PUSH32(esp, 0x004CEF10u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CEF10: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CEF2C; /* je: equal / zero */

loc_004CEF17: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CEF29u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CEF29: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CEF2C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CEF32
 * Original: 0x004CEF32 - 0x004CEF4E (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEF32(void)
{

loc_004CEF32: ;
    PUSH32(esp, esi);
    PUSH32(esp, 9);
    esi = ecx;
    PUSH32(esp, 0x004CEF3Cu); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CEF3C: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8686F0;
    PUSH32(esp, 0x004CEF4Au); RECOMP_ABI_CALL(0x004D4B85u, sub_004D4B85); /* call 0x004D4B85 */

loc_004CEF4A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CEF4E
 * Original: 0x004CEF4E - 0x004CEF54 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEF4E(void)
{

loc_004CEF4E: ;
    eax = 0x868734;
    esp += 4; return; /* ret */

}

/**
 * sub_004CEF54
 * Original: 0x004CEF54 - 0x004CEF8E (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEF54(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CEF54: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8686F0;
    PUSH32(esp, 0x004CEF65u); RECOMP_ABI_CALL(0x004D4CF0u, sub_004D4CF0); /* call 0x004D4CF0 */

loc_004CEF65: ;
    ecx = esi;
    PUSH32(esp, 0x004CEF6Cu); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CEF6C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CEF88; /* je: equal / zero */

loc_004CEF73: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CEF85u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CEF85: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CEF88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CEF8E
 * Original: 0x004CEF8E - 0x004CEFAA (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEF8E(void)
{

loc_004CEF8E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    esi = ecx;
    PUSH32(esp, 0x004CEF98u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CEF98: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868750;
    PUSH32(esp, 0x004CEFA6u); RECOMP_ABI_CALL(0x004D4D7Eu, sub_004D4D7E); /* call 0x004D4D7E */

loc_004CEFA6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CEFAA
 * Original: 0x004CEFAA - 0x004CEFB0 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEFAA(void)
{

loc_004CEFAA: ;
    eax = 0x868794;
    esp += 4; return; /* ret */

}

/**
 * sub_004CEFB0
 * Original: 0x004CEFB0 - 0x004CEFEA (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CEFB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868750;
    PUSH32(esp, 0x004CEFC1u); RECOMP_ABI_CALL(0x004D50EFu, sub_004D50EF); /* call 0x004D50EF */

loc_004CEFC1: ;
    ecx = esi;
    PUSH32(esp, 0x004CEFC8u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CEFC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CEFE4; /* je: equal / zero */

loc_004CEFCF: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CEFE1u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CEFE1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CEFE4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CEFEA
 * Original: 0x004CEFEA - 0x004CF006 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEFEA(void)
{

loc_004CEFEA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xE);
    esi = ecx;
    PUSH32(esp, 0x004CEFF4u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CEFF4: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8687B0;
    PUSH32(esp, 0x004CF002u); RECOMP_ABI_CALL(0x004D521Bu, sub_004D521B); /* call 0x004D521B */

loc_004CF002: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF006
 * Original: 0x004CF006 - 0x004CF00C (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF006(void)
{

loc_004CF006: ;
    eax = 0x8687F4;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF00C
 * Original: 0x004CF00C - 0x004CF046 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF00C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF00C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8687B0;
    PUSH32(esp, 0x004CF01Du); RECOMP_ABI_CALL(0x004D5410u, sub_004D5410); /* call 0x004D5410 */

loc_004CF01D: ;
    ecx = esi;
    PUSH32(esp, 0x004CF024u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF024: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF040; /* je: equal / zero */

loc_004CF02B: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF03Du); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF03D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF040: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF046
 * Original: 0x004CF046 - 0x004CF062 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF046(void)
{

loc_004CF046: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004CF050u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF050: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868810;
    PUSH32(esp, 0x004CF05Eu); RECOMP_ABI_CALL(0x004D58CEu, sub_004D58CE); /* call 0x004D58CE */

loc_004CF05E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF062
 * Original: 0x004CF062 - 0x004CF068 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF062(void)
{

loc_004CF062: ;
    eax = 0x868854;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF068
 * Original: 0x004CF068 - 0x004CF0A2 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF068(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF068: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868810;
    PUSH32(esp, 0x004CF079u); RECOMP_ABI_CALL(0x004D58EDu, sub_004D58ED); /* call 0x004D58ED */

loc_004CF079: ;
    ecx = esi;
    PUSH32(esp, 0x004CF080u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF080: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF09C; /* je: equal / zero */

loc_004CF087: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF099u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF099: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF09C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF0A2
 * Original: 0x004CF0A2 - 0x004CF0BE (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF0A2(void)
{

loc_004CF0A2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004CF0ACu); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF0AC: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868870;
    PUSH32(esp, 0x004CF0BAu); RECOMP_ABI_CALL(0x004D5B98u, sub_004D5B98); /* call 0x004D5B98 */

loc_004CF0BA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF0BE
 * Original: 0x004CF0BE - 0x004CF0C4 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF0BE(void)
{

loc_004CF0BE: ;
    eax = 0x8688B4;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF0C4
 * Original: 0x004CF0C4 - 0x004CF0FE (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF0C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF0C4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868870;
    PUSH32(esp, 0x004CF0D5u); RECOMP_ABI_CALL(0x004D5E3Au, sub_004D5E3A); /* call 0x004D5E3A */

loc_004CF0D5: ;
    ecx = esi;
    PUSH32(esp, 0x004CF0DCu); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF0DC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF0F8; /* je: equal / zero */

loc_004CF0E3: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF0F5u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF0F5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF0F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF0FE
 * Original: 0x004CF0FE - 0x004CF11A (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF0FE(void)
{

loc_004CF0FE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004CF108u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF108: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8688D8;
    PUSH32(esp, 0x004CF116u); RECOMP_ABI_CALL(0x004D628Cu, sub_004D628C); /* call 0x004D628C */

loc_004CF116: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF11A
 * Original: 0x004CF11A - 0x004CF120 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF11A(void)
{

loc_004CF11A: ;
    eax = 0x86891C;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF120
 * Original: 0x004CF120 - 0x004CF15A (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF120: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8688D8;
    PUSH32(esp, 0x004CF131u); RECOMP_ABI_CALL(0x004D6545u, sub_004D6545); /* call 0x004D6545 */

loc_004CF131: ;
    ecx = esi;
    PUSH32(esp, 0x004CF138u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF138: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF154; /* je: equal / zero */

loc_004CF13F: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF151u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF151: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF154: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF15A
 * Original: 0x004CF15A - 0x004CF176 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF15A(void)
{

loc_004CF15A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x11);
    esi = ecx;
    PUSH32(esp, 0x004CF164u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF164: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868940;
    PUSH32(esp, 0x004CF172u); RECOMP_ABI_CALL(0x004D6590u, sub_004D6590); /* call 0x004D6590 */

loc_004CF172: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF176
 * Original: 0x004CF176 - 0x004CF17C (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF176(void)
{

loc_004CF176: ;
    eax = 0x868984;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF17C
 * Original: 0x004CF17C - 0x004CF1B6 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF17C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF17C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868940;
    PUSH32(esp, 0x004CF18Du); RECOMP_ABI_CALL(0x004D682Fu, sub_004D682F); /* call 0x004D682F */

loc_004CF18D: ;
    ecx = esi;
    PUSH32(esp, 0x004CF194u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF194: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF1B0; /* je: equal / zero */

loc_004CF19B: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF1ADu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF1AD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF1B0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF1B6
 * Original: 0x004CF1B6 - 0x004CF1D2 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF1B6(void)
{

loc_004CF1B6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x25);
    esi = ecx;
    PUSH32(esp, 0x004CF1C0u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF1C0: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8689A0;
    PUSH32(esp, 0x004CF1CEu); RECOMP_ABI_CALL(0x004D687Au, sub_004D687A); /* call 0x004D687A */

loc_004CF1CE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF1D2
 * Original: 0x004CF1D2 - 0x004CF1D8 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF1D2(void)
{

loc_004CF1D2: ;
    eax = 0x8689E4;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF1D8
 * Original: 0x004CF1D8 - 0x004CF212 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF1D8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF1D8: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8689A0;
    PUSH32(esp, 0x004CF1E9u); RECOMP_ABI_CALL(0x004D6FFFu, sub_004D6FFF); /* call 0x004D6FFF */

loc_004CF1E9: ;
    ecx = esi;
    PUSH32(esp, 0x004CF1F0u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF1F0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF20C; /* je: equal / zero */

loc_004CF1F7: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF209u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF209: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF20C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF212
 * Original: 0x004CF212 - 0x004CF22E (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF212(void)
{

loc_004CF212: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    esi = ecx;
    PUSH32(esp, 0x004CF21Cu); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF21C: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868A00;
    PUSH32(esp, 0x004CF22Au); RECOMP_ABI_CALL(0x004D7259u, sub_004D7259); /* call 0x004D7259 */

loc_004CF22A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF22E
 * Original: 0x004CF22E - 0x004CF234 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF22E(void)
{

loc_004CF22E: ;
    eax = 0x868A44;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF234
 * Original: 0x004CF234 - 0x004CF26E (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF234(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF234: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868A00;
    PUSH32(esp, 0x004CF245u); RECOMP_ABI_CALL(0x004D75D3u, sub_004D75D3); /* call 0x004D75D3 */

loc_004CF245: ;
    ecx = esi;
    PUSH32(esp, 0x004CF24Cu); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF24C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF268; /* je: equal / zero */

loc_004CF253: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF265u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF265: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF268: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF27E
 * Original: 0x004CF27E - 0x004CF29B (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF27E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF27E: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x868A5C;
    if (TEST_Z(_fa, _fb)) goto loc_004CF295; /* je: equal / zero */

loc_004CF28E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF294u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004CF294: ;
    POP32(esp, ecx);

loc_004CF295: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF29B
 * Original: 0x004CF29B - 0x004CF2B6 (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF29B(void)
{

loc_004CF29B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    esi = ecx;
    PUSH32(esp, 0x004CF2A5u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF2A5: ;
    MEM32(esi) = 0x868A60;
    MEM32(esi + 0xC) = 0x868A5C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF2B6
 * Original: 0x004CF2B6 - 0x004CF2BC (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF2B6(void)
{

loc_004CF2B6: ;
    eax = 0x868AA4;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF2BC
 * Original: 0x004CF2BC - 0x004CF2F3 (55 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF2BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF2BC: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x868A60;
    MEM32(esi + 0xC) = 0x868A5C;
    PUSH32(esp, 0x004CF2D1u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF2D1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF2ED; /* je: equal / zero */

loc_004CF2D8: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF2EAu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF2EA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF2ED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF2F3
 * Original: 0x004CF2F3 - 0x004CF30F (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF2F3(void)
{

loc_004CF2F3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004CF2FDu); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF2FD: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868AB8;
    PUSH32(esp, 0x004CF30Bu); RECOMP_ABI_CALL(0x004D77E5u, sub_004D77E5); /* call 0x004D77E5 */

loc_004CF30B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF30F
 * Original: 0x004CF30F - 0x004CF315 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF30F(void)
{

loc_004CF30F: ;
    eax = 0x868AFC;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF315
 * Original: 0x004CF315 - 0x004CF34F (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF315(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF315: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868AB8;
    PUSH32(esp, 0x004CF326u); RECOMP_ABI_CALL(0x004D791Du, sub_004D791D); /* call 0x004D791D */

loc_004CF326: ;
    ecx = esi;
    PUSH32(esp, 0x004CF32Du); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF32D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF349; /* je: equal / zero */

loc_004CF334: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF346u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF346: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF349: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF34F
 * Original: 0x004CF34F - 0x004CF36B (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF34F(void)
{

loc_004CF34F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xF);
    esi = ecx;
    PUSH32(esp, 0x004CF359u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF359: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868B18;
    PUSH32(esp, 0x004CF367u); RECOMP_ABI_CALL(0x004D79DCu, sub_004D79DC); /* call 0x004D79DC */

loc_004CF367: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF36B
 * Original: 0x004CF36B - 0x004CF371 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF36B(void)
{

loc_004CF36B: ;
    eax = 0x868B5C;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF371
 * Original: 0x004CF371 - 0x004CF3AB (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF371(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF371: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868B18;
    PUSH32(esp, 0x004CF382u); RECOMP_ABI_CALL(0x004D7BB0u, sub_004D7BB0); /* call 0x004D7BB0 */

loc_004CF382: ;
    ecx = esi;
    PUSH32(esp, 0x004CF389u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF389: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF3A5; /* je: equal / zero */

loc_004CF390: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF3A2u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF3A2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF3A5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF3AB
 * Original: 0x004CF3AB - 0x004CF3C7 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF3AB(void)
{

loc_004CF3AB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004CF3B5u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF3B5: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868B78;
    PUSH32(esp, 0x004CF3C3u); RECOMP_ABI_CALL(0x004D7C46u, sub_004D7C46); /* call 0x004D7C46 */

loc_004CF3C3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF3C7
 * Original: 0x004CF3C7 - 0x004CF3CD (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF3C7(void)
{

loc_004CF3C7: ;
    eax = 0x868BBC;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF3CD
 * Original: 0x004CF3CD - 0x004CF407 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF3CD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF3CD: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868B78;
    PUSH32(esp, 0x004CF3DEu); RECOMP_ABI_CALL(0x004D7D6Bu, sub_004D7D6B); /* call 0x004D7D6B */

loc_004CF3DE: ;
    ecx = esi;
    PUSH32(esp, 0x004CF3E5u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF3E5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF401; /* je: equal / zero */

loc_004CF3EC: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF3FEu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF3FE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF401: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF407
 * Original: 0x004CF407 - 0x004CF423 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF407(void)
{

loc_004CF407: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004CF411u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF411: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868BD8;
    PUSH32(esp, 0x004CF41Fu); RECOMP_ABI_CALL(0x004D83DBu, sub_004D83DB); /* call 0x004D83DB */

loc_004CF41F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF423
 * Original: 0x004CF423 - 0x004CF429 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF423(void)
{

loc_004CF423: ;
    eax = 0x868C1C;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF429
 * Original: 0x004CF429 - 0x004CF463 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF429(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF429: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868BD8;
    PUSH32(esp, 0x004CF43Au); RECOMP_ABI_CALL(0x004D8774u, sub_004D8774); /* call 0x004D8774 */

loc_004CF43A: ;
    ecx = esi;
    PUSH32(esp, 0x004CF441u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF441: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF45D; /* je: equal / zero */

loc_004CF448: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF45Au); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF45A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF45D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF463
 * Original: 0x004CF463 - 0x004CF47F (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF463(void)
{

loc_004CF463: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004CF46Du); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF46D: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868C38;
    PUSH32(esp, 0x004CF47Bu); RECOMP_ABI_CALL(0x004D87BFu, sub_004D87BF); /* call 0x004D87BF */

loc_004CF47B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF47F
 * Original: 0x004CF47F - 0x004CF485 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF47F(void)
{

loc_004CF47F: ;
    eax = 0x868C7C;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF485
 * Original: 0x004CF485 - 0x004CF4BF (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF485(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF485: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868C38;
    PUSH32(esp, 0x004CF496u); RECOMP_ABI_CALL(0x004D8934u, sub_004D8934); /* call 0x004D8934 */

loc_004CF496: ;
    ecx = esi;
    PUSH32(esp, 0x004CF49Du); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF49D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF4B9; /* je: equal / zero */

loc_004CF4A4: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF4B6u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF4B6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF4B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF4BF
 * Original: 0x004CF4BF - 0x004CF4DB (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF4BF(void)
{

loc_004CF4BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    esi = ecx;
    PUSH32(esp, 0x004CF4C9u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF4C9: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868C98;
    PUSH32(esp, 0x004CF4D7u); RECOMP_ABI_CALL(0x004D8A69u, sub_004D8A69); /* call 0x004D8A69 */

loc_004CF4D7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF4DB
 * Original: 0x004CF4DB - 0x004CF4E1 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF4DB(void)
{

loc_004CF4DB: ;
    eax = 0x868CDC;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF4E1
 * Original: 0x004CF4E1 - 0x004CF51B (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF4E1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF4E1: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868C98;
    PUSH32(esp, 0x004CF4F2u); RECOMP_ABI_CALL(0x004D8CF1u, sub_004D8CF1); /* call 0x004D8CF1 */

loc_004CF4F2: ;
    ecx = esi;
    PUSH32(esp, 0x004CF4F9u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF4F9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF515; /* je: equal / zero */

loc_004CF500: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF512u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF512: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF515: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF51B
 * Original: 0x004CF51B - 0x004CF537 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF51B(void)
{

loc_004CF51B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    esi = ecx;
    PUSH32(esp, 0x004CF525u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF525: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868D00;
    PUSH32(esp, 0x004CF533u); RECOMP_ABI_CALL(0x004D9217u, sub_004D9217); /* call 0x004D9217 */

loc_004CF533: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF537
 * Original: 0x004CF537 - 0x004CF53D (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF537(void)
{

loc_004CF537: ;
    eax = 0x868D44;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF53D
 * Original: 0x004CF53D - 0x004CF57A (61 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF53D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF53D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868D00;
    PUSH32(esp, 0x004CF54Eu); RECOMP_ABI_CALL(0x004D9236u, sub_004D9236); /* call 0x004D9236 */

loc_004CF54E: ;
    ecx = esi;
    PUSH32(esp, 0x004CF555u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF555: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF574; /* je: equal / zero */

loc_004CF55C: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0xB0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF571u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF571: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF574: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF57A
 * Original: 0x004CF57A - 0x004CF596 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF57A(void)
{

loc_004CF57A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    esi = ecx;
    PUSH32(esp, 0x004CF584u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF584: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868D60;
    PUSH32(esp, 0x004CF592u); RECOMP_ABI_CALL(0x004D92A4u, sub_004D92A4); /* call 0x004D92A4 */

loc_004CF592: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF596
 * Original: 0x004CF596 - 0x004CF59C (6 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF596(void)
{

loc_004CF596: ;
    eax = 0x868DA4;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF59C
 * Original: 0x004CF59C - 0x004CF5D6 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF59C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF59C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868D60;
    PUSH32(esp, 0x004CF5ADu); RECOMP_ABI_CALL(0x004D941Fu, sub_004D941F); /* call 0x004D941F */

loc_004CF5AD: ;
    ecx = esi;
    PUSH32(esp, 0x004CF5B4u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF5B4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF5D0; /* je: equal / zero */

loc_004CF5BB: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF5CDu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF5CD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF5D0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF5D6
 * Original: 0x004CF5D6 - 0x004CF5F2 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF5D6(void)
{

loc_004CF5D6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xF);
    esi = ecx;
    PUSH32(esp, 0x004CF5E0u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF5E0: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868DC0;
    PUSH32(esp, 0x004CF5EEu); RECOMP_ABI_CALL(0x004D94F2u, sub_004D94F2); /* call 0x004D94F2 */

loc_004CF5EE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF5F2
 * Original: 0x004CF5F2 - 0x004CF5F8 (6 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF5F2(void)
{

loc_004CF5F2: ;
    eax = 0x868E04;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF5F8
 * Original: 0x004CF5F8 - 0x004CF632 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF5F8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF5F8: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868DC0;
    PUSH32(esp, 0x004CF609u); RECOMP_ABI_CALL(0x004D972Bu, sub_004D972B); /* call 0x004D972B */

loc_004CF609: ;
    ecx = esi;
    PUSH32(esp, 0x004CF610u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF610: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF62C; /* je: equal / zero */

loc_004CF617: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF629u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF629: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF62C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF632
 * Original: 0x004CF632 - 0x004CF64E (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF632(void)
{

loc_004CF632: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004CF63Cu); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF63C: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868E28;
    PUSH32(esp, 0x004CF64Au); RECOMP_ABI_CALL(0x004D97A7u, sub_004D97A7); /* call 0x004D97A7 */

loc_004CF64A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF64E
 * Original: 0x004CF64E - 0x004CF654 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF64E(void)
{

loc_004CF64E: ;
    eax = 0x868E6C;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF654
 * Original: 0x004CF654 - 0x004CF68E (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF654(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF654: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868E28;
    PUSH32(esp, 0x004CF665u); RECOMP_ABI_CALL(0x004D996Au, sub_004D996A); /* call 0x004D996A */

loc_004CF665: ;
    ecx = esi;
    PUSH32(esp, 0x004CF66Cu); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF66C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF688; /* je: equal / zero */

loc_004CF673: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF685u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF685: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF688: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF68E
 * Original: 0x004CF68E - 0x004CF6AA (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF68E(void)
{

loc_004CF68E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    esi = ecx;
    PUSH32(esp, 0x004CF698u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF698: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868E88;
    PUSH32(esp, 0x004CF6A6u); RECOMP_ABI_CALL(0x004D9DB9u, sub_004D9DB9); /* call 0x004D9DB9 */

loc_004CF6A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF6AA
 * Original: 0x004CF6AA - 0x004CF6B0 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF6AA(void)
{

loc_004CF6AA: ;
    eax = 0x868ECC;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF6B0
 * Original: 0x004CF6B0 - 0x004CF6EA (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF6B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868E88;
    PUSH32(esp, 0x004CF6C1u); RECOMP_ABI_CALL(0x004D9DD8u, sub_004D9DD8); /* call 0x004D9DD8 */

loc_004CF6C1: ;
    ecx = esi;
    PUSH32(esp, 0x004CF6C8u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF6C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF6E4; /* je: equal / zero */

loc_004CF6CF: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF6E1u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF6E1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF6E4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF6EA
 * Original: 0x004CF6EA - 0x004CF706 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF6EA(void)
{

loc_004CF6EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    esi = ecx;
    PUSH32(esp, 0x004CF6F4u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF6F4: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868EE0;
    PUSH32(esp, 0x004CF702u); RECOMP_ABI_CALL(0x004D9F64u, sub_004D9F64); /* call 0x004D9F64 */

loc_004CF702: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF706
 * Original: 0x004CF706 - 0x004CF70C (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF706(void)
{

loc_004CF706: ;
    eax = 0x868F24;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF70C
 * Original: 0x004CF70C - 0x004CF749 (61 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF70C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF70C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868EE0;
    PUSH32(esp, 0x004CF71Du); RECOMP_ABI_CALL(0x004DA31Eu, sub_004DA31E); /* call 0x004DA31E */

loc_004CF71D: ;
    ecx = esi;
    PUSH32(esp, 0x004CF724u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF724: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF743; /* je: equal / zero */

loc_004CF72B: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x94);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF740u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF740: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF743: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF749
 * Original: 0x004CF749 - 0x004CF765 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF749(void)
{

loc_004CF749: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004CF753u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF753: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868F38;
    PUSH32(esp, 0x004CF761u); RECOMP_ABI_CALL(0x004DA497u, sub_004DA497); /* call 0x004DA497 */

loc_004CF761: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF765
 * Original: 0x004CF765 - 0x004CF76B (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF765(void)
{

loc_004CF765: ;
    eax = 0x868F7C;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF76B
 * Original: 0x004CF76B - 0x004CF7A5 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF76B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF76B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868F38;
    PUSH32(esp, 0x004CF77Cu); RECOMP_ABI_CALL(0x004DA5B0u, sub_004DA5B0); /* call 0x004DA5B0 */

loc_004CF77C: ;
    ecx = esi;
    PUSH32(esp, 0x004CF783u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF783: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF79F; /* je: equal / zero */

loc_004CF78A: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF79Cu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF79C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF79F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF7A5
 * Original: 0x004CF7A5 - 0x004CF7C1 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF7A5(void)
{

loc_004CF7A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004CF7AFu); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF7AF: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868F90;
    PUSH32(esp, 0x004CF7BDu); RECOMP_ABI_CALL(0x004DA5F1u, sub_004DA5F1); /* call 0x004DA5F1 */

loc_004CF7BD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF7C1
 * Original: 0x004CF7C1 - 0x004CF7C7 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF7C1(void)
{

loc_004CF7C1: ;
    eax = 0x868FD4;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF7C7
 * Original: 0x004CF7C7 - 0x004CF801 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF7C7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF7C7: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868F90;
    PUSH32(esp, 0x004CF7D8u); RECOMP_ABI_CALL(0x004DA83Au, sub_004DA83A); /* call 0x004DA83A */

loc_004CF7D8: ;
    ecx = esi;
    PUSH32(esp, 0x004CF7DFu); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF7DF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF7FB; /* je: equal / zero */

loc_004CF7E6: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF7F8u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF7F8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF7FB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF801
 * Original: 0x004CF801 - 0x004CF81D (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF801(void)
{

loc_004CF801: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004CF80Bu); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF80B: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868FF0;
    PUSH32(esp, 0x004CF819u); RECOMP_ABI_CALL(0x004DAD07u, sub_004DAD07); /* call 0x004DAD07 */

loc_004CF819: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF81D
 * Original: 0x004CF81D - 0x004CF823 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF81D(void)
{

loc_004CF81D: ;
    eax = 0x869034;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF823
 * Original: 0x004CF823 - 0x004CF860 (61 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF823(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF823: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x868FF0;
    PUSH32(esp, 0x004CF834u); RECOMP_ABI_CALL(0x004DAD26u, sub_004DAD26); /* call 0x004DAD26 */

loc_004CF834: ;
    ecx = esi;
    PUSH32(esp, 0x004CF83Bu); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF83B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF85A; /* je: equal / zero */

loc_004CF842: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x94);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF857u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF857: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF85A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF860
 * Original: 0x004CF860 - 0x004CF87C (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF860(void)
{

loc_004CF860: ;
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    esi = ecx;
    PUSH32(esp, 0x004CF86Au); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF86A: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x869050;
    PUSH32(esp, 0x004CF878u); RECOMP_ABI_CALL(0x004DAE34u, sub_004DAE34); /* call 0x004DAE34 */

loc_004CF878: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF87C
 * Original: 0x004CF87C - 0x004CF882 (6 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF87C(void)
{

loc_004CF87C: ;
    eax = 0x869094;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF882
 * Original: 0x004CF882 - 0x004CF8BC (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF882(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF882: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x869050;
    PUSH32(esp, 0x004CF893u); RECOMP_ABI_CALL(0x004DAF28u, sub_004DAF28); /* call 0x004DAF28 */

loc_004CF893: ;
    ecx = esi;
    PUSH32(esp, 0x004CF89Au); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF89A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF8B6; /* je: equal / zero */

loc_004CF8A1: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF8B3u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF8B3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF8B6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF8CC
 * Original: 0x004CF8CC - 0x004CF8E9 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF8CC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF8CC: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8690AC;
    if (TEST_Z(_fa, _fb)) goto loc_004CF8E3; /* je: equal / zero */

loc_004CF8DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF8E2u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004CF8E2: ;
    POP32(esp, ecx);

loc_004CF8E3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF8E9
 * Original: 0x004CF8E9 - 0x004CF904 (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF8E9(void)
{

loc_004CF8E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x004CF8F3u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF8F3: ;
    MEM32(esi) = 0x8690B0;
    MEM32(esi + 0xC) = 0x8690AC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF904
 * Original: 0x004CF904 - 0x004CF90A (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF904(void)
{

loc_004CF904: ;
    eax = 0x8690F4;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF90A
 * Original: 0x004CF90A - 0x004CF941 (55 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF90A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF90A: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8690B0;
    MEM32(esi + 0xC) = 0x8690AC;
    PUSH32(esp, 0x004CF91Fu); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF91F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF93B; /* je: equal / zero */

loc_004CF926: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF938u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF938: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF93B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF941
 * Original: 0x004CF941 - 0x004CF95D (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF941(void)
{

loc_004CF941: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x004CF94Bu); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF94B: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x869110;
    PUSH32(esp, 0x004CF959u); RECOMP_ABI_CALL(0x004DB014u, sub_004DB014); /* call 0x004DB014 */

loc_004CF959: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF95D
 * Original: 0x004CF95D - 0x004CF963 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF95D(void)
{

loc_004CF95D: ;
    eax = 0x869154;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF963
 * Original: 0x004CF963 - 0x004CF99D (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF963(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF963: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x869110;
    PUSH32(esp, 0x004CF974u); RECOMP_ABI_CALL(0x004DB110u, sub_004DB110); /* call 0x004DB110 */

loc_004CF974: ;
    ecx = esi;
    PUSH32(esp, 0x004CF97Bu); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF97B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF997; /* je: equal / zero */

loc_004CF982: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF994u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF994: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF997: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF99D
 * Original: 0x004CF99D - 0x004CF9B9 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF99D(void)
{

loc_004CF99D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x11);
    esi = ecx;
    PUSH32(esp, 0x004CF9A7u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CF9A7: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x869170;
    PUSH32(esp, 0x004CF9B5u); RECOMP_ABI_CALL(0x004DB163u, sub_004DB163); /* call 0x004DB163 */

loc_004CF9B5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CF9B9
 * Original: 0x004CF9B9 - 0x004CF9BF (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF9B9(void)
{

loc_004CF9B9: ;
    eax = 0x8691B4;
    esp += 4; return; /* ret */

}

/**
 * sub_004CF9BF
 * Original: 0x004CF9BF - 0x004CF9F9 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF9BF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CF9BF: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x869170;
    PUSH32(esp, 0x004CF9D0u); RECOMP_ABI_CALL(0x004DB59Du, sub_004DB59D); /* call 0x004DB59D */

loc_004CF9D0: ;
    ecx = esi;
    PUSH32(esp, 0x004CF9D7u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CF9D7: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CF9F3; /* je: equal / zero */

loc_004CF9DE: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CF9F0u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CF9F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CF9F3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CF9F9
 * Original: 0x004CF9F9 - 0x004CFA15 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CF9F9(void)
{

loc_004CF9F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xE);
    esi = ecx;
    PUSH32(esp, 0x004CFA03u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004CFA03: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8691C8;
    PUSH32(esp, 0x004CFA11u); RECOMP_ABI_CALL(0x004DB5E8u, sub_004DB5E8); /* call 0x004DB5E8 */

loc_004CFA11: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CFA15
 * Original: 0x004CFA15 - 0x004CFA1B (6 bytes, 2 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CFA15(void)
{

loc_004CFA15: ;
    eax = 0x86920C;
    esp += 4; return; /* ret */

}

/**
 * sub_004CFA1B
 * Original: 0x004CFA1B - 0x004CFA55 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CFA1B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CFA1B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x8691C8;
    PUSH32(esp, 0x004CFA2Cu); RECOMP_ABI_CALL(0x004DB6FEu, sub_004DB6FE); /* call 0x004DB6FE */

loc_004CFA2C: ;
    ecx = esi;
    PUSH32(esp, 0x004CFA33u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004CFA33: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004CFA4F; /* je: equal / zero */

loc_004CFA3A: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CFA4Cu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004CFA4C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004CFA4F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CFA55
 * Original: 0x004CFA55 - 0x004CFFBF (1386 bytes, 565 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CFA55(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CFA55: ;
    PUSH32(esp, 0x110);
    MEM8(0x8D7DF4) = 1;
    PUSH32(esp, 0x004CFA66u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFA66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFA74; /* je: equal / zero */

loc_004CFA6B: ;
    ecx = eax;
    PUSH32(esp, 0x004CFA72u); RECOMP_ABI_CALL(0x004CE998u, sub_004CE998); /* call 0x004CE998 */

loc_004CFA72: ;
    goto loc_004CFA76;

loc_004CFA74: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFA76: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFA7Eu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFA7E: ;
    PUSH32(esp, 0x18);
    POP32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CFA87u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFA87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFA96; /* je: equal / zero */

loc_004CFA8D: ;
    ecx = eax;
    PUSH32(esp, 0x004CFA94u); RECOMP_ABI_CALL(0x004CEA23u, sub_004CEA23); /* call 0x004CEA23 */

loc_004CFA94: ;
    goto loc_004CFA98;

loc_004CFA96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFA98: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFA9Eu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFA9E: ;
    PUSH32(esp, 0x14);
    POP32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFAA7u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFAA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFAB6; /* je: equal / zero */

loc_004CFAAD: ;
    ecx = eax;
    PUSH32(esp, 0x004CFAB4u); RECOMP_ABI_CALL(0x004CEA7Fu, sub_004CEA7F); /* call 0x004CEA7F */

loc_004CFAB4: ;
    goto loc_004CFAB8;

loc_004CFAB6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFAB8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFABEu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFABE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CFAC4u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFAC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFAD3; /* je: equal / zero */

loc_004CFACA: ;
    ecx = eax;
    PUSH32(esp, 0x004CFAD1u); RECOMP_ABI_CALL(0x004CEADBu, sub_004CEADB); /* call 0x004CEADB */

loc_004CFAD1: ;
    goto loc_004CFAD5;

loc_004CFAD3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFAD5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFADBu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFADB: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004CFAE2u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFAE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFAF1; /* je: equal / zero */

loc_004CFAE8: ;
    ecx = eax;
    PUSH32(esp, 0x004CFAEFu); RECOMP_ABI_CALL(0x004CEB37u, sub_004CEB37); /* call 0x004CEB37 */

loc_004CFAEF: ;
    goto loc_004CFAF3;

loc_004CFAF1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFAF3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFAF9u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFAF9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFAFFu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFAFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFB0E; /* je: equal / zero */

loc_004CFB05: ;
    ecx = eax;
    PUSH32(esp, 0x004CFB0Cu); RECOMP_ABI_CALL(0x004CEB93u, sub_004CEB93); /* call 0x004CEB93 */

loc_004CFB0C: ;
    goto loc_004CFB10;

loc_004CFB0E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFB10: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFB16u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFB16: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004CFB1Du); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFB1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFB2C; /* je: equal / zero */

loc_004CFB23: ;
    ecx = eax;
    PUSH32(esp, 0x004CFB2Au); RECOMP_ABI_CALL(0x004CEBEFu, sub_004CEBEF); /* call 0x004CEBEF */

loc_004CFB2A: ;
    goto loc_004CFB2E;

loc_004CFB2C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFB2E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFB34u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFB34: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004CFB3Bu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFB3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFB4A; /* je: equal / zero */

loc_004CFB41: ;
    ecx = eax;
    PUSH32(esp, 0x004CFB48u); RECOMP_ABI_CALL(0x004CEDBBu, sub_004CEDBB); /* call 0x004CEDBB */

loc_004CFB48: ;
    goto loc_004CFB4C;

loc_004CFB4A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFB4C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFB52u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFB52: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFB58u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFB58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFB67; /* je: equal / zero */

loc_004CFB5E: ;
    ecx = eax;
    PUSH32(esp, 0x004CFB65u); RECOMP_ABI_CALL(0x004CEC4Bu, sub_004CEC4B); /* call 0x004CEC4B */

loc_004CFB65: ;
    goto loc_004CFB69;

loc_004CFB67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFB69: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFB6Fu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFB6F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFB75u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFB75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFB84; /* je: equal / zero */

loc_004CFB7B: ;
    ecx = eax;
    PUSH32(esp, 0x004CFB82u); RECOMP_ABI_CALL(0x004CECA7u, sub_004CECA7); /* call 0x004CECA7 */

loc_004CFB82: ;
    goto loc_004CFB86;

loc_004CFB84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFB86: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFB8Cu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFB8C: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004CFB93u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFB93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFBA7; /* je: equal / zero */

loc_004CFB99: ;
    PUSH32(esp, 0x869240);
    ecx = eax;
    PUSH32(esp, 0x004CFBA5u); RECOMP_ABI_CALL(0x004CEE17u, sub_004CEE17); /* call 0x004CEE17 */

loc_004CFBA5: ;
    goto loc_004CFBA9;

loc_004CFBA7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFBA9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFBAFu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFBAF: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004CFBB6u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFBB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFBCA; /* je: equal / zero */

loc_004CFBBC: ;
    PUSH32(esp, 0x869224);
    ecx = eax;
    PUSH32(esp, 0x004CFBC8u); RECOMP_ABI_CALL(0x004CEE17u, sub_004CEE17); /* call 0x004CEE17 */

loc_004CFBC8: ;
    goto loc_004CFBCC;

loc_004CFBCA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFBCC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFBD2u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFBD2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFBD8u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFBD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFBE7; /* je: equal / zero */

loc_004CFBDE: ;
    ecx = eax;
    PUSH32(esp, 0x004CFBE5u); RECOMP_ABI_CALL(0x004CEE7Au, sub_004CEE7A); /* call 0x004CEE7A */

loc_004CFBE5: ;
    goto loc_004CFBE9;

loc_004CFBE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFBE9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFBEFu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFBEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CFBF5u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFBF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFC04; /* je: equal / zero */

loc_004CFBFB: ;
    ecx = eax;
    PUSH32(esp, 0x004CFC02u); RECOMP_ABI_CALL(0x004CEED6u, sub_004CEED6); /* call 0x004CEED6 */

loc_004CFC02: ;
    goto loc_004CFC06;

loc_004CFC04: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFC06: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFC0Cu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFC0C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFC12u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFC12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFC21; /* je: equal / zero */

loc_004CFC18: ;
    ecx = eax;
    PUSH32(esp, 0x004CFC1Fu); RECOMP_ABI_CALL(0x004CEF32u, sub_004CEF32); /* call 0x004CEF32 */

loc_004CFC1F: ;
    goto loc_004CFC23;

loc_004CFC21: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFC23: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFC29u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFC29: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CFC2Fu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFC2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFC3E; /* je: equal / zero */

loc_004CFC35: ;
    ecx = eax;
    PUSH32(esp, 0x004CFC3Cu); RECOMP_ABI_CALL(0x004CEF8Eu, sub_004CEF8E); /* call 0x004CEF8E */

loc_004CFC3C: ;
    goto loc_004CFC40;

loc_004CFC3E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFC40: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFC46u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFC46: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFC4Cu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFC4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFC5B; /* je: equal / zero */

loc_004CFC52: ;
    ecx = eax;
    PUSH32(esp, 0x004CFC59u); RECOMP_ABI_CALL(0x004CEFEAu, sub_004CEFEA); /* call 0x004CEFEA */

loc_004CFC59: ;
    goto loc_004CFC5D;

loc_004CFC5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFC5D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFC63u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFC63: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x004CFC6Au); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFC6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFC79; /* je: equal / zero */

loc_004CFC70: ;
    ecx = eax;
    PUSH32(esp, 0x004CFC77u); RECOMP_ABI_CALL(0x004CF046u, sub_004CF046); /* call 0x004CF046 */

loc_004CFC77: ;
    goto loc_004CFC7B;

loc_004CFC79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFC7B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFC81u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFC81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CFC87u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFC87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFC96; /* je: equal / zero */

loc_004CFC8D: ;
    ecx = eax;
    PUSH32(esp, 0x004CFC94u); RECOMP_ABI_CALL(0x004CF0A2u, sub_004CF0A2); /* call 0x004CF0A2 */

loc_004CFC94: ;
    goto loc_004CFC98;

loc_004CFC96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFC98: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFC9Eu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFC9E: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004CFCA5u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFCA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFCB4; /* je: equal / zero */

loc_004CFCAB: ;
    ecx = eax;
    PUSH32(esp, 0x004CFCB2u); RECOMP_ABI_CALL(0x004CF0FEu, sub_004CF0FE); /* call 0x004CF0FE */

loc_004CFCB2: ;
    goto loc_004CFCB6;

loc_004CFCB4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFCB6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFCBCu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFCBC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFCC2u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFCC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFCD1; /* je: equal / zero */

loc_004CFCC8: ;
    ecx = eax;
    PUSH32(esp, 0x004CFCCFu); RECOMP_ABI_CALL(0x004CF15Au, sub_004CF15A); /* call 0x004CF15A */

loc_004CFCCF: ;
    goto loc_004CFCD3;

loc_004CFCD1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFCD3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFCD9u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFCD9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFCDFu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFCDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFCEE; /* je: equal / zero */

loc_004CFCE5: ;
    ecx = eax;
    PUSH32(esp, 0x004CFCECu); RECOMP_ABI_CALL(0x004CF1B6u, sub_004CF1B6); /* call 0x004CF1B6 */

loc_004CFCEC: ;
    goto loc_004CFCF0;

loc_004CFCEE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFCF0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFCF6u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFCF6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CFCFCu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFCFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFD0B; /* je: equal / zero */

loc_004CFD02: ;
    ecx = eax;
    PUSH32(esp, 0x004CFD09u); RECOMP_ABI_CALL(0x004CF212u, sub_004CF212); /* call 0x004CF212 */

loc_004CFD09: ;
    goto loc_004CFD0D;

loc_004CFD0B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFD0D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFD13u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFD13: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x004CFD1Au); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFD1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFD29; /* je: equal / zero */

loc_004CFD20: ;
    ecx = eax;
    PUSH32(esp, 0x004CFD27u); RECOMP_ABI_CALL(0x004CF29Bu, sub_004CF29B); /* call 0x004CF29B */

loc_004CFD27: ;
    goto loc_004CFD2B;

loc_004CFD29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFD2B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFD31u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFD31: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CFD37u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFD37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFD46; /* je: equal / zero */

loc_004CFD3D: ;
    ecx = eax;
    PUSH32(esp, 0x004CFD44u); RECOMP_ABI_CALL(0x004CF2F3u, sub_004CF2F3); /* call 0x004CF2F3 */

loc_004CFD44: ;
    goto loc_004CFD48;

loc_004CFD46: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFD48: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFD4Eu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFD4E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFD54u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFD54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFD63; /* je: equal / zero */

loc_004CFD5A: ;
    ecx = eax;
    PUSH32(esp, 0x004CFD61u); RECOMP_ABI_CALL(0x004CF34Fu, sub_004CF34F); /* call 0x004CF34F */

loc_004CFD61: ;
    goto loc_004CFD65;

loc_004CFD63: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFD65: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFD6Bu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFD6B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFD71u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFD71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFD80; /* je: equal / zero */

loc_004CFD77: ;
    ecx = eax;
    PUSH32(esp, 0x004CFD7Eu); RECOMP_ABI_CALL(0x004CED03u, sub_004CED03); /* call 0x004CED03 */

loc_004CFD7E: ;
    goto loc_004CFD82;

loc_004CFD80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFD82: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFD88u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFD88: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFD8Eu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFD8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFD9D; /* je: equal / zero */

loc_004CFD94: ;
    ecx = eax;
    PUSH32(esp, 0x004CFD9Bu); RECOMP_ABI_CALL(0x004CED5Fu, sub_004CED5F); /* call 0x004CED5F */

loc_004CFD9B: ;
    goto loc_004CFD9F;

loc_004CFD9D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFD9F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFDA5u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFDA5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CFDABu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFDAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFDBA; /* je: equal / zero */

loc_004CFDB1: ;
    ecx = eax;
    PUSH32(esp, 0x004CFDB8u); RECOMP_ABI_CALL(0x004CF3ABu, sub_004CF3AB); /* call 0x004CF3AB */

loc_004CFDB8: ;
    goto loc_004CFDBC;

loc_004CFDBA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFDBC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFDC2u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFDC2: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004CFDC9u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFDC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFDD8; /* je: equal / zero */

loc_004CFDCF: ;
    ecx = eax;
    PUSH32(esp, 0x004CFDD6u); RECOMP_ABI_CALL(0x004CF407u, sub_004CF407); /* call 0x004CF407 */

loc_004CFDD6: ;
    goto loc_004CFDDA;

loc_004CFDD8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFDDA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFDE0u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFDE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFDE6u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFDE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFDF5; /* je: equal / zero */

loc_004CFDEC: ;
    ecx = eax;
    PUSH32(esp, 0x004CFDF3u); RECOMP_ABI_CALL(0x004CF463u, sub_004CF463); /* call 0x004CF463 */

loc_004CFDF3: ;
    goto loc_004CFDF7;

loc_004CFDF5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFDF7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFDFDu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFDFD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFE03u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFE03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFE12; /* je: equal / zero */

loc_004CFE09: ;
    ecx = eax;
    PUSH32(esp, 0x004CFE10u); RECOMP_ABI_CALL(0x004CF4BFu, sub_004CF4BF); /* call 0x004CF4BF */

loc_004CFE10: ;
    goto loc_004CFE14;

loc_004CFE12: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFE14: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFE1Au); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFE1A: ;
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x004CFE24u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFE24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFE33; /* je: equal / zero */

loc_004CFE2A: ;
    ecx = eax;
    PUSH32(esp, 0x004CFE31u); RECOMP_ABI_CALL(0x004CF51Bu, sub_004CF51B); /* call 0x004CF51B */

loc_004CFE31: ;
    goto loc_004CFE35;

loc_004CFE33: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFE35: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFE3Bu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFE3B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFE41u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFE41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFE50; /* je: equal / zero */

loc_004CFE47: ;
    ecx = eax;
    PUSH32(esp, 0x004CFE4Eu); RECOMP_ABI_CALL(0x004CF57Au, sub_004CF57A); /* call 0x004CF57A */

loc_004CFE4E: ;
    goto loc_004CFE52;

loc_004CFE50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFE52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFE58u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFE58: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFE5Eu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFE5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFE6D; /* je: equal / zero */

loc_004CFE64: ;
    ecx = eax;
    PUSH32(esp, 0x004CFE6Bu); RECOMP_ABI_CALL(0x004CF5D6u, sub_004CF5D6); /* call 0x004CF5D6 */

loc_004CFE6B: ;
    goto loc_004CFE6F;

loc_004CFE6D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFE6F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFE75u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFE75: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFE7Bu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFE7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFE8A; /* je: equal / zero */

loc_004CFE81: ;
    ecx = eax;
    PUSH32(esp, 0x004CFE88u); RECOMP_ABI_CALL(0x004CF632u, sub_004CF632); /* call 0x004CF632 */

loc_004CFE88: ;
    goto loc_004CFE8C;

loc_004CFE8A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFE8C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFE92u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFE92: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x004CFE99u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFE99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFEA8; /* je: equal / zero */

loc_004CFE9F: ;
    ecx = eax;
    PUSH32(esp, 0x004CFEA6u); RECOMP_ABI_CALL(0x004CF68Eu, sub_004CF68E); /* call 0x004CF68E */

loc_004CFEA6: ;
    goto loc_004CFEAA;

loc_004CFEA8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFEAA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFEB0u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFEB0: ;
    esi = 0x94;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CFEBBu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFEBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFECA; /* je: equal / zero */

loc_004CFEC1: ;
    ecx = eax;
    PUSH32(esp, 0x004CFEC8u); RECOMP_ABI_CALL(0x004CF6EAu, sub_004CF6EA); /* call 0x004CF6EA */

loc_004CFEC8: ;
    goto loc_004CFECC;

loc_004CFECA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFECC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFED2u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFED2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFED8u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFED8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFEE7; /* je: equal / zero */

loc_004CFEDE: ;
    ecx = eax;
    PUSH32(esp, 0x004CFEE5u); RECOMP_ABI_CALL(0x004CF749u, sub_004CF749); /* call 0x004CF749 */

loc_004CFEE5: ;
    goto loc_004CFEE9;

loc_004CFEE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFEE9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFEEFu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFEEF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFEF5u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFEF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFF04; /* je: equal / zero */

loc_004CFEFB: ;
    ecx = eax;
    PUSH32(esp, 0x004CFF02u); RECOMP_ABI_CALL(0x004CF7A5u, sub_004CF7A5); /* call 0x004CF7A5 */

loc_004CFF02: ;
    goto loc_004CFF06;

loc_004CFF04: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFF06: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFF0Cu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFF0C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004CFF12u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFF12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFF21; /* je: equal / zero */

loc_004CFF18: ;
    ecx = eax;
    PUSH32(esp, 0x004CFF1Fu); RECOMP_ABI_CALL(0x004CF801u, sub_004CF801); /* call 0x004CF801 */

loc_004CFF1F: ;
    goto loc_004CFF23;

loc_004CFF21: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFF23: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFF29u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFF29: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFF2Fu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFF2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFF3E; /* je: equal / zero */

loc_004CFF35: ;
    ecx = eax;
    PUSH32(esp, 0x004CFF3Cu); RECOMP_ABI_CALL(0x004CF860u, sub_004CF860); /* call 0x004CF860 */

loc_004CFF3C: ;
    goto loc_004CFF40;

loc_004CFF3E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFF40: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFF46u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFF46: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x004CFF4Du); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFF4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFF5C; /* je: equal / zero */

loc_004CFF53: ;
    ecx = eax;
    PUSH32(esp, 0x004CFF5Au); RECOMP_ABI_CALL(0x004CF8E9u, sub_004CF8E9); /* call 0x004CF8E9 */

loc_004CFF5A: ;
    goto loc_004CFF5E;

loc_004CFF5C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFF5E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFF64u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFF64: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFF6Au); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFF6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFF79; /* je: equal / zero */

loc_004CFF70: ;
    ecx = eax;
    PUSH32(esp, 0x004CFF77u); RECOMP_ABI_CALL(0x004CF941u, sub_004CF941); /* call 0x004CF941 */

loc_004CFF77: ;
    goto loc_004CFF7B;

loc_004CFF79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFF7B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFF81u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFF81: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFF87u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFF87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFF96; /* je: equal / zero */

loc_004CFF8D: ;
    ecx = eax;
    PUSH32(esp, 0x004CFF94u); RECOMP_ABI_CALL(0x004CF99Du, sub_004CF99D); /* call 0x004CF99D */

loc_004CFF94: ;
    goto loc_004CFF98;

loc_004CFF96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFF98: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFF9Eu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFF9E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004CFFA4u); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004CFFA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004CFFB5; /* je: equal / zero */

loc_004CFFAC: ;
    ecx = eax;
    PUSH32(esp, 0x004CFFB3u); RECOMP_ABI_CALL(0x004CF9F9u, sub_004CF9F9); /* call 0x004CF9F9 */

loc_004CFFB3: ;
    goto loc_004CFFB7;

loc_004CFFB5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004CFFB7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004CFFBDu); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004CFFBD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004CFFBF
 * Original: 0x004CFFBF - 0x004D0020 (97 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004CFFBF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004CFFBF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -4;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CFFD7u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004CFFD7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CFFE7u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004CFFE7: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x004CFFF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004CFFEAu); } /* indirect call */
    }

loc_004CFFF0: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = eax;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004CFFFBu); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004CFFFB: ;
    PUSH32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x86926C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x869258);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0013u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_004D0013: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x91278C); PUSH32(esp, 0x004D001Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004D0014u); } /* indirect call */
    }

loc_004D001A: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D0000
 * Original: 0x004D0000 - 0x004D0020 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D0000: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x86926C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x869258);
    PUSH32(esp, 0x004D0013u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_004D0013: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x91278C); PUSH32(esp, 0x004D001Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004D0014u); } /* indirect call */
    }

loc_004D001A: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D0020
 * Original: 0x004D0020 - 0x004D006C (76 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D0020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0020: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0031u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004D0031: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x912788); PUSH32(esp, 0x004D003Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D0034u); } /* indirect call */
    }

loc_004D003A: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = eax;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0045u); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004D0045: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 3);
    PUSH32(esp, 0x86926C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x869274);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D005Fu); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_004D005F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x91278C); PUSH32(esp, 0x004D0066u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004D0060u); } /* indirect call */
    }

loc_004D0066: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004D004C
 * Original: 0x004D004C - 0x004D006C (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D004C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D004C: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x86926C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x869274);
    PUSH32(esp, 0x004D005Fu); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_004D005F: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x91278C); PUSH32(esp, 0x004D0066u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004D0060u); } /* indirect call */
    }

loc_004D0066: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004D006C
 * Original: 0x004D006C - 0x004D00B7 (75 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D006C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D006C: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_004D009D; /* je: equal / zero */

loc_004D0079: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4CE966);
    edi = esi + -4;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D008Cu); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_004D008C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D0098; /* je: equal / zero */

loc_004D0091: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004D0097u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D0097: ;
    POP32(esp, ecx);

loc_004D0098: ;
    eax = edi;
    POP32(esp, edi);
    goto loc_004D00B2;

loc_004D009D: ;
    ecx = esi;
    PUSH32(esp, 0x004D00A4u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D00A4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D00B0; /* je: equal / zero */

loc_004D00A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D00AFu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D00AF: ;
    POP32(esp, ecx);

loc_004D00B0: ;
    eax = esi;

loc_004D00B2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D00C3
 * Original: 0x004D00C3 - 0x004D0113 (80 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D00C3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D00C3: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_004D00F5; /* je: equal / zero */

loc_004D00D0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1224D);
    edi = esi + -4;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D00E3u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_004D00E3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D00F0; /* je: equal / zero */

loc_004D00E8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x91278C); PUSH32(esp, 0x004D00EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D00E9u); } /* indirect call */
    }

loc_004D00EF: ;
    POP32(esp, ecx);

loc_004D00F0: ;
    eax = edi;
    POP32(esp, edi);
    goto loc_004D010E;

loc_004D00F5: ;
    ecx = esi;
    PUSH32(esp, 0x004D00FCu); RECOMP_ABI_CALL(0x0002EE4Du, sub_0002EE4D); /* call 0x0002EE4D */

loc_004D00FC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D010C; /* je: equal / zero */

loc_004D0101: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x912790); PUSH32(esp, 0x004D010Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D0104u); } /* indirect call */
    }

loc_004D010A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004D010C: ;
    eax = esi;

loc_004D010E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D0118
 * Original: 0x004D0118 - 0x004D012D (21 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0118(void)
{

loc_004D0118: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004D0124u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D0124: ;
    MEM32(esi) = eax;
    POP32(esp, ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D013D
 * Original: 0x004D013D - 0x004D0153 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D013D(void)
{

loc_004D013D: ;
    PUSH32(esp, 0x7DF4E4);
    PUSH32(esp, 0x004D0147u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D0147: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D0153
 * Original: 0x004D0153 - 0x004D0170 (29 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0153(void)
{

loc_004D0153: ;
    PUSH32(esp, 0x004D0158u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004D0158: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D015Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D015Cu); } /* indirect call */
    }

loc_004D015F: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D0169u); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D0169: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D0170
 * Original: 0x004D0170 - 0x004D017C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D0170: ;
    PUSH32(esp, 0x004D0175u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004D0175: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_004D017C
 * Original: 0x004D017C - 0x004D018E (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D017C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D017C: ;
    PUSH32(esp, 0x004D0181u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_004D0181: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004D0187u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D0185u); } /* indirect call */
    }

loc_004D0187: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_004D018E
 * Original: 0x004D018E - 0x004D01A0 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D018E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D018E: ;
    PUSH32(esp, 0x004D0193u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_004D0193: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004D0199u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D0197u); } /* indirect call */
    }

loc_004D0199: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

}

/**
 * sub_004D01A0
 * Original: 0x004D01A0 - 0x004D01BA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D01A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D01A0: ;
    PUSH32(esp, 0x004D01A5u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D01A5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004D01ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D01A9u); } /* indirect call */
    }

loc_004D01AC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004D01B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D01B0u); } /* indirect call */
    }

loc_004D01B3: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_004D01BA
 * Original: 0x004D01BA - 0x004D01CC (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D01BA(void)
{

loc_004D01BA: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004D01C7u); RECOMP_ABI_CALL(0x004ABAD7u, sub_004ABAD7); /* call 0x004ABAD7 */

loc_004D01C7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D01CC
 * Original: 0x004D01CC - 0x004D01DF (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D01CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D01CC: ;
    PUSH32(esp, 0x004D01D1u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D01D1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004D01D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D01D5u); } /* indirect call */
    }

loc_004D01D8: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_004D01DF
 * Original: 0x004D01DF - 0x004D0219 (58 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004D01DF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D01DF: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D01E8u); RECOMP_ABI_CALL(0x004C1D6Au, sub_004C1D6A); /* call 0x004C1D6A */

loc_004D01E8: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004D01F1u); RECOMP_ABI_CALL(0x004C1D9Eu, sub_004C1D9E); /* call 0x004C1D9E */

loc_004D01F1: ;
    PUSH32(esp, 0x004D01F6u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D01F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x004D0202u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D0202: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0214; /* je: equal / zero */

loc_004D0209: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D0212u); RECOMP_ABI_CALL(0x004CE129u, sub_004CE129); /* call 0x004CE129 */

loc_004D0212: ;
    goto loc_004D0216;

loc_004D0214: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D0216: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D0219
 * Original: 0x004D0219 - 0x004D0248 (47 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0219(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0219: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004D0226u); RECOMP_ABI_CALL(0x004D01DFu, sub_004D01DF); /* call 0x004D01DF */

loc_004D0226: ;
    PUSH32(esp, MEM32(esp + 0x10));
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x004D0233u); RECOMP_ABI_CALL(0x004CE4EBu, sub_004CE4EB); /* call 0x004CE4EB */

loc_004D0233: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004D0241; /* je: equal / zero */

loc_004D0239: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D0241u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D023Fu); } /* indirect call */
    }

loc_004D0241: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D0248
 * Original: 0x004D0248 - 0x004D0280 (56 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0248(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0248: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, 0x004D0257u); RECOMP_ABI_CALL(0x004D01DFu, sub_004D01DF); /* call 0x004D01DF */

loc_004D0257: ;
    PUSH32(esp, 0x100);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x18));
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x004D026Du); RECOMP_ABI_CALL(0x004CE37Eu, sub_004CE37E); /* call 0x004CE37E */

loc_004D026D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0279; /* je: equal / zero */

loc_004D0271: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D0279u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D0277u); } /* indirect call */
    }

loc_004D0279: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D0280
 * Original: 0x004D0280 - 0x004D02A9 (41 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0280(void)
{

loc_004D0280: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D0286u); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004D0286: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004D028Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D028Au); } /* indirect call */
    }

loc_004D028D: ;
    ecx = MEM32(0x90E424);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004D029Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D0297u); } /* indirect call */
    }

loc_004D029A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004D02A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D02A3u); } /* indirect call */
    }

loc_004D02A5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D02A9
 * Original: 0x004D02A9 - 0x004D02BC (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D02A9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D02A9: ;
    PUSH32(esp, 0x004D02AEu); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004D02AE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004D02B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D02B2u); } /* indirect call */
    }

loc_004D02B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_004D02BC
 * Original: 0x004D02BC - 0x004D02E0 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D02BC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004D02BC: ;
    PUSH32(esp, 0x004D02C1u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D02C1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004D02C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D02C5u); } /* indirect call */
    }

loc_004D02C8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004D02CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D02CCu); } /* indirect call */
    }

loc_004D02CF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x004D02D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D02D3u); } /* indirect call */
    }

loc_004D02D9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_004D02E0
 * Original: 0x004D02E0 - 0x004D02EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D02E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D02E0: ;
    PUSH32(esp, 0x004D02E5u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004D02E5: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_004D02EC
 * Original: 0x004D02EC - 0x004D03F6 (266 bytes, 91 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D02EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D02EC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0304u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D0304: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004D030Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D030Au); } /* indirect call */
    }

loc_004D030D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004D0314u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D0311u); } /* indirect call */
    }

loc_004D0314: ;
    esi = 0x80;
    PUSH32(esp, esi);
    MEM32(ebp + -264) = eax;
    eax = ebp + -260;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D032Eu); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D032E: ;
    PUSH32(esp, esi);
    eax = ebp + -132;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D033Du); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D033D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D039D; /* je: equal / zero */

loc_004D0346: ;
    PUSH32(esp, 4);
    eax = ebp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0353u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D0353: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004D035Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D035Au); } /* indirect call */
    }

loc_004D035D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x004D0364u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D0361u); } /* indirect call */
    }

loc_004D0364: ;
    edx = MEM32(eax);
    ecx = ebp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x004D0372u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D036Cu); } /* indirect call */
    }

loc_004D0372: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0377u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004D0377: ;
    edx = MEM32(eax);
    ecx = ebp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D0382u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D037Fu); } /* indirect call */
    }

loc_004D0382: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -132;
    PUSH32(esp, 0x86928C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0398u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004D0398: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004D03B5;

loc_004D039D: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -132;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D03B2u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004D03B2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004D03B5: ;
    ecx = MEM32(ebp + -264);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edx = ebp + -260;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7B891F);
    edx = ebp + -132;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004D03D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D03D1u); } /* indirect call */
    }

loc_004D03D4: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D03E0u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D03E0: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D03F2u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D03F2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D03FB
 * Original: 0x004D03FB - 0x004D041F (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D03FB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D03FB: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D040C; /* jne: not equal / not zero */

loc_004D0405: ;
    PUSH32(esp, 0x004D040Au); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D040A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D040C: ;
    ecx = MEM32(0x90E498);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D041Bu); RECOMP_ABI_CALL(0x004D013Du, sub_004D013D); /* call 0x004D013D */

loc_004D041B: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D041F
 * Original: 0x004D041F - 0x004D0443 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D041F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D041F: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D0430; /* jne: not equal / not zero */

loc_004D0429: ;
    PUSH32(esp, 0x004D042Eu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D042E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D0430: ;
    ecx = MEM32(0x90E498);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D043Fu); RECOMP_ABI_CALL(0x004D0153u, sub_004D0153); /* call 0x004D0153 */

loc_004D043F: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D0443
 * Original: 0x004D0443 - 0x004D0464 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0443(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D0443: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D0451; /* jne: not equal / not zero */

loc_004D044C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D0451: ;
    ecx = MEM32(0x90E498);
    PUSH32(esp, 0x004D045Cu); RECOMP_ABI_CALL(0x004D0170u, sub_004D0170); /* call 0x004D0170 */

loc_004D045C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D0462u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D0462: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D0464
 * Original: 0x004D0464 - 0x004D0486 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0464(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D0464: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0481; /* je: equal / zero */

loc_004D046D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D0474u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D0474: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E498);
    PUSH32(esp, 0x004D0481u); RECOMP_ABI_CALL(0x004D017Cu, sub_004D017C); /* call 0x004D017C */

loc_004D0481: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D0486
 * Original: 0x004D0486 - 0x004D04A2 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0486(void)
{

loc_004D0486: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D048Du); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D048D: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E498);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D049Au); RECOMP_ABI_CALL(0x004D018Eu, sub_004D018E); /* call 0x004D018E */

loc_004D049A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D04A0u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D04A0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D04A2
 * Original: 0x004D04A2 - 0x004D04C3 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D04A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D04A2: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D04B0; /* jne: not equal / not zero */

loc_004D04AB: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D04B0: ;
    ecx = MEM32(0x90E498);
    PUSH32(esp, 0x004D04BBu); RECOMP_ABI_CALL(0x004D01A0u, sub_004D01A0); /* call 0x004D01A0 */

loc_004D04BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D04C1u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D04C1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D04C3
 * Original: 0x004D04C3 - 0x004D04F6 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D04C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D04C3: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D04D1; /* jne: not equal / not zero */

loc_004D04CC: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D04D1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D04D8u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D04D8: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D04E1u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D04E1: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E498);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D04EEu); RECOMP_ABI_CALL(0x004D01BAu, sub_004D01BA); /* call 0x004D01BA */

loc_004D04EE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D04F4u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D04F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D04F6
 * Original: 0x004D04F6 - 0x004D0517 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D04F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D04F6: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D0504; /* jne: not equal / not zero */

loc_004D04FF: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D0504: ;
    ecx = MEM32(0x90E498);
    PUSH32(esp, 0x004D050Fu); RECOMP_ABI_CALL(0x004D01CCu, sub_004D01CC); /* call 0x004D01CC */

loc_004D050F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D0515u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D0515: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D0517
 * Original: 0x004D0517 - 0x004D054A (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0517(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D0517: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D0525; /* jne: not equal / not zero */

loc_004D0520: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D0525: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D052Cu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D052C: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D0535u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D0535: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E498);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D0542u); RECOMP_ABI_CALL(0x004D0219u, sub_004D0219); /* call 0x004D0219 */

loc_004D0542: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D0548u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D0548: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D054A
 * Original: 0x004D054A - 0x004D057D (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D054A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D054A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D0558; /* jne: not equal / not zero */

loc_004D0553: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D0558: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D055Fu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D055F: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D0568u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D0568: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E498);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D0575u); RECOMP_ABI_CALL(0x004D0248u, sub_004D0248); /* call 0x004D0248 */

loc_004D0575: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D057Bu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D057B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D057D
 * Original: 0x004D057D - 0x004D059F (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D057D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D057D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D059A; /* je: equal / zero */

loc_004D0586: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D058Du); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D058D: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E498);
    PUSH32(esp, 0x004D059Au); RECOMP_ABI_CALL(0x004D0280u, sub_004D0280); /* call 0x004D0280 */

loc_004D059A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D059F
 * Original: 0x004D059F - 0x004D05C0 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D059F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D059F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D05AD; /* jne: not equal / not zero */

loc_004D05A8: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D05AD: ;
    ecx = MEM32(0x90E498);
    PUSH32(esp, 0x004D05B8u); RECOMP_ABI_CALL(0x004D02A9u, sub_004D02A9); /* call 0x004D02A9 */

loc_004D05B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D05BEu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D05BE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D05C0
 * Original: 0x004D05C0 - 0x004D05E1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D05C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D05C0: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D05CE; /* jne: not equal / not zero */

loc_004D05C9: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D05CE: ;
    ecx = MEM32(0x90E498);
    PUSH32(esp, 0x004D05D9u); RECOMP_ABI_CALL(0x004D02BCu, sub_004D02BC); /* call 0x004D02BC */

loc_004D05D9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D05DFu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D05DF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D05E1
 * Original: 0x004D05E1 - 0x004D0602 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D05E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D05E1: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D05EF; /* jne: not equal / not zero */

loc_004D05EA: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D05EF: ;
    ecx = MEM32(0x90E498);
    PUSH32(esp, 0x004D05FAu); RECOMP_ABI_CALL(0x004D02E0u, sub_004D02E0); /* call 0x004D02E0 */

loc_004D05FA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D0600u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D0600: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D0602
 * Original: 0x004D0602 - 0x004D0639 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0602(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0602: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D0613; /* jne: not equal / not zero */

loc_004D060C: ;
    PUSH32(esp, 0x004D0611u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D0611: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D0613: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D061Au); RECOMP_ABI_CALL(0x004D07B4u, sub_004D07B4); /* call 0x004D07B4 */

loc_004D061A: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D0623u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D0623: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E498);
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D0635u); RECOMP_ABI_CALL(0x004D02ECu, sub_004D02EC); /* call 0x004D02EC */

loc_004D0635: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D0639
 * Original: 0x004D0639 - 0x004D064C (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0639(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D0639: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0647; /* je: equal / zero */

loc_004D0642: ;
    PUSH32(esp, 0x004D0647u); RECOMP_ABI_CALL(0x00505F20u, sub_00505F20); /* call 0x00505F20 */

loc_004D0647: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D064C
 * Original: 0x004D064C - 0x004D06EC (160 bytes, 69 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D064C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D064C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0656u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D0656: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x004D065Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D065Au); } /* indirect call */
    }

loc_004D065D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D0664u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D0661u); } /* indirect call */
    }

loc_004D0664: ;
    ecx = MEM32(eax + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_004D06E7; /* jbe: below or equal (unsigned <=) */

loc_004D0670: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax + 8;

loc_004D0675: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D067Du); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004D067D: ;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0687u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004D0687: ;
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D0693u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D0690u); } /* indirect call */
    }

loc_004D0693: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0699u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_004D0699: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D06DF; /* jne: not equal / not zero */

loc_004D06A0: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D06A8u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004D06A8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D06AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D06ACu); } /* indirect call */
    }

loc_004D06AF: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D06B5u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004D06B5: ;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D06BFu); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004D06BF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004D06DF; /* jne: not equal / not zero */

loc_004D06C5: ;
    ecx = ebx;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D06CDu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004D06CD: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    edx = MEM32(eax);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004D06DC; /* je: equal / zero */

loc_004D06D7: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004D06DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D06D7u); } /* indirect call */
    }

loc_004D06DA: ;
    goto loc_004D06DF;

loc_004D06DC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004D06DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D06DCu); } /* indirect call */
    }

loc_004D06DF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D0675; /* jb: below (unsigned <) */

loc_004D06E5: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004D06E7: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D06EC
 * Original: 0x004D06EC - 0x004D0717 (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D06EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D06EC: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0712; /* je: equal / zero */

loc_004D06F5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D06FCu); RECOMP_ABI_CALL(0x004D07B4u, sub_004D07B4); /* call 0x004D07B4 */

loc_004D06FC: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D0705u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D0705: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E498);
    PUSH32(esp, 0x004D0712u); RECOMP_ABI_CALL(0x004D064Cu, sub_004D064C); /* call 0x004D064C */

loc_004D0712: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D0717
 * Original: 0x004D0717 - 0x004D072A (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0717(void)
{

loc_004D0717: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x8693D0);
    MEM32(0x90E498) = eax;
    PUSH32(esp, 0x004D0729u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D0729: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D072A
 * Original: 0x004D072A - 0x004D0754 (42 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D072A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_004D072A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D073Bu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D073B: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0747u); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D0747: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D074Fu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D074F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D075C
 * Original: 0x004D075C - 0x004D0774 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D075C(void)
{

loc_004D075C: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004D0768u); RECOMP_ABI_CALL(0x0050C1C0u, sub_0050C1C0); /* call 0x0050C1C0 */

loc_004D0768: ;
    MEM32(esi) = 0x869460;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D0774
 * Original: 0x004D0774 - 0x004D077F (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0774(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D0774: ;
    MEM32(ecx) = 0x869460;
    g_seh_ebp = ebp; sub_0050C190(); return; /* tail jmp 0x0050C190 */

}

/**
 * sub_004D077F
 * Original: 0x004D077F - 0x004D0790 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D077F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D077F: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D0788u); RECOMP_ABI_CALL(0x005070C0u, sub_005070C0); /* call 0x005070C0 */

loc_004D0788: ;
    POP32(esp, ecx);
    ecx = eax;
    g_seh_ebp = ebp; sub_0050C4B0(); return; /* tail jmp 0x0050C4B0 */

}

/**
 * sub_004D0790
 * Original: 0x004D0790 - 0x004D079A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0790(void)
{

loc_004D0790: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x8D7DF4) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_004D079A
 * Original: 0x004D079A - 0x004D07A3 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D079A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D079A: ;
    ecx = MEM32(esp + 8);
    g_seh_ebp = ebp; sub_0050C4B0(); return; /* tail jmp 0x0050C4B0 */

}

/**
 * sub_004D07B4
 * Original: 0x004D07B4 - 0x004D07C5 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D07B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D07B4: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D07BDu); RECOMP_ABI_CALL(0x005070C0u, sub_005070C0); /* call 0x005070C0 */

loc_004D07BD: ;
    POP32(esp, ecx);
    ecx = eax;
    g_seh_ebp = ebp; sub_0050C630(); return; /* tail jmp 0x0050C630 */

}

/**
 * sub_004D07C5
 * Original: 0x004D07C5 - 0x004D07EB (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D07C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D07C5: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x004D07CEu); RECOMP_ABI_CALL(0x00504400u, sub_00504400); /* call 0x00504400 */

loc_004D07CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D07E5; /* je: equal / zero */

loc_004D07D2: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x004D07DBu); RECOMP_ABI_CALL(0x00504560u, sub_00504560); /* call 0x00504560 */

loc_004D07DB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    g_seh_ebp = ebp; sub_00504BF0(); return; /* tail jmp 0x00504BF0 */

loc_004D07E5: ;
    eax = 0x7B891F;
    esp += 4; return; /* ret */

}

/**
 * sub_004D07EB
 * Original: 0x004D07EB - 0x004D0803 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D07EB(void)
{

loc_004D07EB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D07F1u); RECOMP_ABI_CALL(0x00506EA0u, sub_00506EA0); /* call 0x00506EA0 */

loc_004D07F1: ;
    esi = eax;
    PUSH32(esp, 0x7B891F);
    ecx = esi;
    PUSH32(esp, 0x004D07FFu); RECOMP_ABI_CALL(0x004D072Au, sub_004D072A); /* call 0x004D072A */

loc_004D07FF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D0803
 * Original: 0x004D0803 - 0x004D0808 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0803(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D0803: ;
    g_seh_ebp = ebp; sub_00507E60(); return; /* tail jmp 0x00507E60 */

}

/**
 * sub_004D0808
 * Original: 0x004D0808 - 0x004D080D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0808(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D0808: ;
    g_seh_ebp = ebp; sub_00507E60(); return; /* tail jmp 0x00507E60 */

}

/**
 * sub_004D080D
 * Original: 0x004D080D - 0x004D0812 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D080D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D080D: ;
    g_seh_ebp = ebp; sub_00507D00(); return; /* tail jmp 0x00507D00 */

}

/**
 * sub_004D0821
 * Original: 0x004D0821 - 0x004D0838 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0821(void)
{

loc_004D0821: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D0827u); RECOMP_ABI_CALL(0x00506EA0u, sub_00506EA0); /* call 0x00506EA0 */

loc_004D0827: ;
    PUSH32(esp, MEM32(esp + 8));
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x004D0834u); RECOMP_ABI_CALL(0x004D072Au, sub_004D072A); /* call 0x004D072A */

loc_004D0834: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D0838
 * Original: 0x004D0838 - 0x004D0862 (42 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0838(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0838: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    goto loc_004D0858;

loc_004D0842: ;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x004D084Au); RECOMP_ABI_CALL(0x005081D0u, sub_005081D0); /* call 0x005081D0 */

loc_004D084A: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, 0x004D0855u); RECOMP_ABI_CALL(0x0050C0C0u, sub_0050C0C0); /* call 0x0050C0C0 */

loc_004D0855: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004D0858: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D0842; /* jne: not equal / not zero */

loc_004D085D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D087C
 * Original: 0x004D087C - 0x004D08AC (48 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D087C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D087C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x869460;
    PUSH32(esp, 0x004D088Au); RECOMP_ABI_CALL(0x0050C190u, sub_0050C190); /* call 0x0050C190 */

loc_004D088A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D08A6; /* je: equal / zero */

loc_004D0891: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D08A3u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004D08A3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004D08A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D08AC
 * Original: 0x004D08AC - 0x004D08C1 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D08AC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D08AC: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D08B5u); RECOMP_ABI_CALL(0x005070C0u, sub_005070C0); /* call 0x005070C0 */

loc_004D08B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D08BDu); RECOMP_ABI_CALL(0x004D07C5u, sub_004D07C5); /* call 0x004D07C5 */

loc_004D08BD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004D08C1
 * Original: 0x004D08C1 - 0x004D0945 (132 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D08C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D08C1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D08D0u); RECOMP_ABI_CALL(0x005070C0u, sub_005070C0); /* call 0x005070C0 */

loc_004D08D0: ;
    esi = eax;
    POP32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D08DAu); RECOMP_ABI_CALL(0x00504400u, sub_00504400); /* call 0x00504400 */

loc_004D08DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0930; /* je: equal / zero */

loc_004D08DE: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D08E5u); RECOMP_ABI_CALL(0x00504870u, sub_00504870); /* call 0x00504870 */

loc_004D08E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D0930; /* jne: not equal / not zero */

loc_004D08E9: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D08F1u); RECOMP_ABI_CALL(0x005045C0u, sub_005045C0); /* call 0x005045C0 */

loc_004D08F1: ;
    esi = eax;
    PUSH32(esp, MEM32(esi + 0x24));
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D08FEu); RECOMP_ABI_CALL(0x004DB780u, sub_004DB780); /* call 0x004DB780 */

loc_004D08FE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004D092A; /* jle: less or equal (signed <=) */

loc_004D0905: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D090Du); RECOMP_ABI_CALL(0x0050F720u, sub_0050F720); /* call 0x0050F720 */

loc_004D090D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0914u); RECOMP_ABI_CALL(0x0050C4B0u, sub_0050C4B0); /* call 0x0050C4B0 */

loc_004D0914: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0924u); RECOMP_ABI_CALL(0x004DB7A2u, sub_004DB7A2); /* call 0x004DB7A2 */

loc_004D0924: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x24) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004D0905; /* jl: less (signed <) */

loc_004D092A: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    goto loc_004D093D;

loc_004D0930: ;
    PUSH32(esp, 0);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D093Au); RECOMP_ABI_CALL(0x004DB780u, sub_004DB780); /* call 0x004DB780 */

loc_004D093A: ;
    ecx = MEM32(ebp + -12);

loc_004D093D: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D0945
 * Original: 0x004D0945 - 0x004D09F3 (174 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D0945(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0945: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0954u); RECOMP_ABI_CALL(0x005070C0u, sub_005070C0); /* call 0x005070C0 */

loc_004D0954: ;
    esi = eax;
    POP32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D095Eu); RECOMP_ABI_CALL(0x00504400u, sub_00504400); /* call 0x00504400 */

loc_004D095E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D09DE; /* je: equal / zero */

loc_004D0962: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0969u); RECOMP_ABI_CALL(0x00504870u, sub_00504870); /* call 0x00504870 */

loc_004D0969: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D09DE; /* jne: not equal / not zero */

loc_004D096D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0976u); RECOMP_ABI_CALL(0x005045C0u, sub_005045C0); /* call 0x005045C0 */

loc_004D0976: ;
    esi = eax;
    edi = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0984u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D0984: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004D09D7; /* jle: less or equal (signed <=) */

loc_004D098A: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0992u); RECOMP_ABI_CALL(0x0050F720u, sub_0050F720); /* call 0x0050F720 */

loc_004D0992: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0999u); RECOMP_ABI_CALL(0x00504740u, sub_00504740); /* call 0x00504740 */

loc_004D0999: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D09BE; /* je: equal / zero */

loc_004D099D: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D09A5u); RECOMP_ABI_CALL(0x0050F720u, sub_0050F720); /* call 0x0050F720 */

loc_004D09A5: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D09ACu); RECOMP_ABI_CALL(0x00504560u, sub_00504560); /* call 0x00504560 */

loc_004D09AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D09B6u); RECOMP_ABI_CALL(0x00504BF0u, sub_00504BF0); /* call 0x00504BF0 */

loc_004D09B6: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    goto loc_004D09C8;

loc_004D09BE: ;
    MEM32(ebp + -12) = 0x7B891F;
    eax = ebp + -12;

loc_004D09C8: ;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D09D2u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D09D2: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004D098A; /* jl: less (signed <) */

loc_004D09D7: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, ebx);
    goto loc_004D09EB;

loc_004D09DE: ;
    PUSH32(esp, 0);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D09E8u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D09E8: ;
    ecx = MEM32(ebp + -16);

loc_004D09EB: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D0A07
 * Original: 0x004D0A07 - 0x004D0A24 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0A07(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0A07: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8694A4;
    if (TEST_Z(_fa, _fb)) goto loc_004D0A1E; /* je: equal / zero */

loc_004D0A17: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D0A1Du); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D0A1D: ;
    POP32(esp, ecx);

loc_004D0A1E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D0A24
 * Original: 0x004D0A24 - 0x004D0A35 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0A24(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0A24: ;
    eax = ecx;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x8694AC;
    MEM8(eax + 4) = 0xFF;
    esp += 4; return; /* ret */

}

/**
 * sub_004D0A35
 * Original: 0x004D0A35 - 0x004D0A6A (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0A35(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0A35: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D0A3Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D0A3D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x004D0A49u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D0A49: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0A5B; /* je: equal / zero */

loc_004D0A50: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D0A59u); RECOMP_ABI_CALL(0x004CDC23u, sub_004CDC23); /* call 0x004CDC23 */

loc_004D0A59: ;
    goto loc_004D0A5D;

loc_004D0A5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D0A5D: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x004D0A68u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D0A68: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D0A6A
 * Original: 0x004D0A6A - 0x004D0A8D (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0A6A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0A6A: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0A8B; /* je: equal / zero */

loc_004D0A74: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D0A7Au); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D0A7A: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0A87; /* je: equal / zero */

loc_004D0A81: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D0A87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D0A85u); } /* indirect call */
    }

loc_004D0A87: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004D0A8B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D0A8D
 * Original: 0x004D0A8D - 0x004D0ABF (50 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0A8D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D0A8D: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D0AA1u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D0AA1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    ecx = MEM32(ecx + 8);
    g_seh_ebp = ebp; sub_004C1563(); return; /* tail jmp 0x004C1563 */

    ecx = MEM32(ecx + 8);
    g_seh_ebp = ebp; sub_004C973A(); return; /* tail jmp 0x004C973A */

}

/**
 * sub_004D0ABF
 * Original: 0x004D0ABF - 0x004D0ADD (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0ABF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0ABF: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004D0AD8; /* jl: less (signed <) */

loc_004D0AC6: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x004D0ACEu); RECOMP_ABI_CALL(0x004C155Fu, sub_004C155F); /* call 0x004C155F */

loc_004D0ACE: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004D0AD8; /* jge: greater or equal (signed >=) */

loc_004D0AD4: ;
    SET_LO8(eax, 1);
    goto loc_004D0ADA;

loc_004D0AD8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004D0ADA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D0ADD
 * Original: 0x004D0ADD - 0x004D0B10 (51 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0ADD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0ADD: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004D0AE9u); RECOMP_ABI_CALL(0x004D0ABFu, sub_004D0ABF); /* call 0x004D0ABF */

loc_004D0AE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0B0A; /* je: equal / zero */

loc_004D0AED: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004D0B0A; /* jl: less (signed <) */

loc_004D0AF4: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x004D0B00u); RECOMP_ABI_CALL(0x004C97B5u, sub_004C97B5); /* call 0x004C97B5 */

loc_004D0B00: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004D0B0A; /* jge: greater or equal (signed >=) */

loc_004D0B06: ;
    SET_LO8(eax, 1);
    goto loc_004D0B0C;

loc_004D0B0A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004D0B0C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D0B10
 * Original: 0x004D0B10 - 0x004D0B73 (99 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D0B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0B10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -4) = eax;
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0B29u); RECOMP_ABI_CALL(0x004D0ABFu, sub_004D0ABF); /* call 0x004D0ABF */

loc_004D0B29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0B54; /* je: equal / zero */

loc_004D0B2D: ;
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0B3Au); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D0B3A: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0B4Eu); RECOMP_ABI_CALL(0x004C97E9u, sub_004C97E9); /* call 0x004C97E9 */

loc_004D0B4E: ;
    eax = ebp + -104;
    PUSH32(esp, eax);
    goto loc_004D0B59;

loc_004D0B54: ;
    PUSH32(esp, 0x7B891F);

loc_004D0B59: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0B5Eu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D0B5E: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0B6Fu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D0B6F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D0B73
 * Original: 0x004D0B73 - 0x004D0BD6 (99 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D0B73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0B73: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -4) = eax;
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0B8Cu); RECOMP_ABI_CALL(0x004D0ABFu, sub_004D0ABF); /* call 0x004D0ABF */

loc_004D0B8C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0BB7; /* je: equal / zero */

loc_004D0B90: ;
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0B9Du); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D0B9D: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0BB1u); RECOMP_ABI_CALL(0x004C9562u, sub_004C9562); /* call 0x004C9562 */

loc_004D0BB1: ;
    eax = ebp + -104;
    PUSH32(esp, eax);
    goto loc_004D0BBC;

loc_004D0BB7: ;
    PUSH32(esp, 0x7B891F);

loc_004D0BBC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0BC1u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D0BC1: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0BD2u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D0BD2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D0BD6
 * Original: 0x004D0BD6 - 0x004D0BEF (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0BD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D0BD6: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0BEA; /* je: equal / zero */

loc_004D0BDF: ;
    ecx = MEM32(0x90E49C);
    PUSH32(esp, 0x004D0BEAu); RECOMP_ABI_CALL(0x004D0A35u, sub_004D0A35); /* call 0x004D0A35 */

loc_004D0BEA: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D0BEF
 * Original: 0x004D0BEF - 0x004D0C08 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0BEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D0BEF: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0C03; /* je: equal / zero */

loc_004D0BF8: ;
    ecx = MEM32(0x90E49C);
    PUSH32(esp, 0x004D0C03u); RECOMP_ABI_CALL(0x004D0A6Au, sub_004D0A6A); /* call 0x004D0A6A */

loc_004D0C03: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D0C08
 * Original: 0x004D0C08 - 0x004D0C2B (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0C08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D0C08: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D0C16; /* jne: not equal / not zero */

loc_004D0C11: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D0C16: ;
    eax = MEM32(0x90E49C);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D0C23u); RECOMP_ABI_CALL(0x004C1563u, sub_004C1563); /* call 0x004C1563 */

loc_004D0C23: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D0C29u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D0C29: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D0C2B
 * Original: 0x004D0C2B - 0x004D0C57 (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0C2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D0C2B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D0C39; /* jne: not equal / not zero */

loc_004D0C34: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D0C39: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D0C40u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D0C40: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E49C);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D0C4Fu); RECOMP_ABI_CALL(0x004C973Au, sub_004C973A); /* call 0x004C973A */

loc_004D0C4F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D0C55u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D0C55: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D0C57
 * Original: 0x004D0C57 - 0x004D0C7A (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0C57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D0C57: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D0C65; /* jne: not equal / not zero */

loc_004D0C60: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D0C65: ;
    eax = MEM32(0x90E49C);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D0C72u); RECOMP_ABI_CALL(0x004C155Fu, sub_004C155F); /* call 0x004C155F */

loc_004D0C72: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D0C78u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D0C78: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D0C7A
 * Original: 0x004D0C7A - 0x004D0CA8 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0C7A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0C7A: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D0C8B; /* jne: not equal / not zero */

loc_004D0C84: ;
    PUSH32(esp, 0x004D0C89u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D0C89: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D0C8B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D0C92u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D0C92: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E49C);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D0CA4u); RECOMP_ABI_CALL(0x004D0B10u, sub_004D0B10); /* call 0x004D0B10 */

loc_004D0CA4: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D0CA8
 * Original: 0x004D0CA8 - 0x004D0CE0 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0CA8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0CA8: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D0CB9; /* jne: not equal / not zero */

loc_004D0CB2: ;
    PUSH32(esp, 0x004D0CB7u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D0CB7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D0CB9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D0CC0u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D0CC0: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E49C);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D0CD2u); RECOMP_ABI_CALL(0x004D0B73u, sub_004D0B73); /* call 0x004D0B73 */

loc_004D0CD2: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D0CE0
 * Original: 0x004D0CE0 - 0x004D0CFC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM32(esi) = 0x8694AC;
    if (CMP_EQ(_fa, _fb)) goto loc_004D0CF4; /* je: equal / zero */

loc_004D0CEF: ;
    PUSH32(esp, 0x004D0CF4u); RECOMP_ABI_CALL(0x004D0A6Au, sub_004D0A6A); /* call 0x004D0A6A */

loc_004D0CF4: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D0CFC
 * Original: 0x004D0CFC - 0x004D0D75 (121 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D0CFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0CFC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0D17u); RECOMP_ABI_CALL(0x004C155Fu, sub_004C155F); /* call 0x004C155F */

loc_004D0D17: ;
    PUSH32(esp, 0x64);
    ebx = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + -104;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0D27u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D0D27: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = ebp + -108;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0D33u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D0D33: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D0D5E; /* jbe: below or equal (unsigned <=) */

loc_004D0D37: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0D46u); RECOMP_ABI_CALL(0x004C94EBu, sub_004C94EB); /* call 0x004C94EB */

loc_004D0D46: ;
    eax = ebp + -104;
    MEM32(ebp + -112) = eax;
    eax = ebp + -112;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -108;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0D59u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D0D59: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D0D37; /* jb: below (unsigned <) */

loc_004D0D5E: ;
    ecx = MEM32(ebp + -108);
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0D71u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D0D71: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D0D75
 * Original: 0x004D0D75 - 0x004D0D95 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0D75(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0D75: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004D0D81u); RECOMP_ABI_CALL(0x004D0ABFu, sub_004D0ABF); /* call 0x004D0ABF */

loc_004D0D81: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0D91; /* je: equal / zero */

loc_004D0D85: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x004D0D91u); RECOMP_ABI_CALL(0x004C97CBu, sub_004C97CB); /* call 0x004C97CB */

loc_004D0D91: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D0D95
 * Original: 0x004D0D95 - 0x004D0DC9 (52 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0D95(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0D95: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x004D0DA4u); RECOMP_ABI_CALL(0x004C1563u, sub_004C1563); /* call 0x004C1563 */

loc_004D0DA4: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004D0DACu); RECOMP_ABI_CALL(0x004D0ADDu, sub_004D0ADD); /* call 0x004D0ADD */

loc_004D0DAC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0DC5; /* je: equal / zero */

loc_004D0DB0: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x004D0DBCu); RECOMP_ABI_CALL(0x004C1563u, sub_004C1563); /* call 0x004C1563 */

loc_004D0DBC: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D0DC5u); RECOMP_ABI_CALL(0x004C92F8u, sub_004C92F8); /* call 0x004C92F8 */

loc_004D0DC5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D0DC9
 * Original: 0x004D0DC9 - 0x004D0DEE (37 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D0DC9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0DC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004D0DD5u); RECOMP_ABI_CALL(0x004D0ABFu, sub_004D0ABF); /* call 0x004D0ABF */

loc_004D0DD5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0DE7; /* je: equal / zero */

loc_004D0DD9: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x004D0DE5u); RECOMP_ABI_CALL(0x004C97B5u, sub_004C97B5); /* call 0x004C97B5 */

loc_004D0DE5: ;
    goto loc_004D0DEA;

loc_004D0DE7: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004D0DEA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D0DEE
 * Original: 0x004D0DEE - 0x004D0E64 (118 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D0DEE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0DEE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = ecx;
    ecx = MEM32(esi + 8);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0E0Bu); RECOMP_ABI_CALL(0x004C973Au, sub_004C973A); /* call 0x004C973A */

loc_004D0E0B: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0E18u); RECOMP_ABI_CALL(0x004D0ADDu, sub_004D0ADD); /* call 0x004D0ADD */

loc_004D0E18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0E44; /* je: equal / zero */

loc_004D0E1C: ;
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0E29u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D0E29: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0E3Eu); RECOMP_ABI_CALL(0x004C950Fu, sub_004C950F); /* call 0x004C950F */

loc_004D0E3E: ;
    eax = ebp + -104;
    PUSH32(esp, eax);
    goto loc_004D0E49;

loc_004D0E44: ;
    PUSH32(esp, 0x7B891F);

loc_004D0E49: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0E4Eu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D0E4E: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0E60u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D0E60: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D0E64
 * Original: 0x004D0E64 - 0x004D0EF5 (145 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D0E64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0E64: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0E85u); RECOMP_ABI_CALL(0x004C973Au, sub_004C973A); /* call 0x004C973A */

loc_004D0E85: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0E8Eu); RECOMP_ABI_CALL(0x004D0ADDu, sub_004D0ADD); /* call 0x004D0ADD */

loc_004D0E8E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0ED5; /* je: equal / zero */

loc_004D0E92: ;
    PUSH32(esp, edi);
    edi = 0x100;
    PUSH32(esp, edi);
    eax = ebp + -260;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0EA7u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D0EA7: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0EBBu); RECOMP_ABI_CALL(0x004C973Au, sub_004C973A); /* call 0x004C973A */

loc_004D0EBB: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0EC5u); RECOMP_ABI_CALL(0x004C975Eu, sub_004C975E); /* call 0x004C975E */

loc_004D0EC5: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0ED1u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D0ED1: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    goto loc_004D0EE0;

loc_004D0ED5: ;
    PUSH32(esp, 0x7B891F);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0EDFu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D0EDF: ;
    POP32(esp, ecx);

loc_004D0EE0: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0EF1u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D0EF1: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D0EF5
 * Original: 0x004D0EF5 - 0x004D0F6F (122 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D0EF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0EF5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0F13u); RECOMP_ABI_CALL(0x004C973Au, sub_004C973A); /* call 0x004C973A */

loc_004D0F13: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0F1Cu); RECOMP_ABI_CALL(0x004D0ADDu, sub_004D0ADD); /* call 0x004D0ADD */

loc_004D0F1C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0F4F; /* je: equal / zero */

loc_004D0F20: ;
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0F2Du); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D0F2D: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0F3Fu); RECOMP_ABI_CALL(0x004C973Au, sub_004C973A); /* call 0x004C973A */

loc_004D0F3F: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0F49u); RECOMP_ABI_CALL(0x004C9537u, sub_004C9537); /* call 0x004C9537 */

loc_004D0F49: ;
    eax = ebp + -104;
    PUSH32(esp, eax);
    goto loc_004D0F54;

loc_004D0F4F: ;
    PUSH32(esp, 0x7B891F);

loc_004D0F54: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0F59u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D0F59: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0F6Bu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D0F6B: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D0F6F
 * Original: 0x004D0F6F - 0x004D0FE9 (122 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D0F6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0F6F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0F8Du); RECOMP_ABI_CALL(0x004C973Au, sub_004C973A); /* call 0x004C973A */

loc_004D0F8D: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0F96u); RECOMP_ABI_CALL(0x004D0ADDu, sub_004D0ADD); /* call 0x004D0ADD */

loc_004D0F96: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D0FC9; /* je: equal / zero */

loc_004D0F9A: ;
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0FA7u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D0FA7: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0FB9u); RECOMP_ABI_CALL(0x004C973Au, sub_004C973A); /* call 0x004C973A */

loc_004D0FB9: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0FC3u); RECOMP_ABI_CALL(0x004C961Du, sub_004C961D); /* call 0x004C961D */

loc_004D0FC3: ;
    eax = ebp + -104;
    PUSH32(esp, eax);
    goto loc_004D0FCE;

loc_004D0FC9: ;
    PUSH32(esp, 0x7B891F);

loc_004D0FCE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0FD3u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D0FD3: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D0FE5u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D0FE5: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D0FE9
 * Original: 0x004D0FE9 - 0x004D1063 (122 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D0FE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D0FE9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D1007u); RECOMP_ABI_CALL(0x004C973Au, sub_004C973A); /* call 0x004C973A */

loc_004D1007: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D1010u); RECOMP_ABI_CALL(0x004D0ADDu, sub_004D0ADD); /* call 0x004D0ADD */

loc_004D1010: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1043; /* je: equal / zero */

loc_004D1014: ;
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D1021u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D1021: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D1033u); RECOMP_ABI_CALL(0x004C973Au, sub_004C973A); /* call 0x004C973A */

loc_004D1033: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D103Du); RECOMP_ABI_CALL(0x004C9586u, sub_004C9586); /* call 0x004C9586 */

loc_004D103D: ;
    eax = ebp + -104;
    PUSH32(esp, eax);
    goto loc_004D1048;

loc_004D1043: ;
    PUSH32(esp, 0x7B891F);

loc_004D1048: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D104Du); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D104D: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D105Fu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D105F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D1063
 * Original: 0x004D1063 - 0x004D10A1 (62 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1063(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1063: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004D1074u); RECOMP_ABI_CALL(0x004C973Au, sub_004C973A); /* call 0x004C973A */

loc_004D1074: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004D107Du); RECOMP_ABI_CALL(0x004D0ADDu, sub_004D0ADD); /* call 0x004D0ADD */

loc_004D107D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1099; /* je: equal / zero */

loc_004D1081: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004D108Au); RECOMP_ABI_CALL(0x004C973Au, sub_004C973A); /* call 0x004C973A */

loc_004D108A: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004D1094u); RECOMP_ABI_CALL(0x004C96A1u, sub_004C96A1); /* call 0x004C96A1 */

loc_004D1094: ;
    eax = ZX8(LO8(eax));
    goto loc_004D109C;

loc_004D1099: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004D109C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D10A1
 * Original: 0x004D10A1 - 0x004D10D1 (48 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D10A1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D10A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004D10B1u); RECOMP_ABI_CALL(0x004D0ADDu, sub_004D0ADD); /* call 0x004D0ADD */

loc_004D10B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D10CA; /* je: equal / zero */

loc_004D10B5: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004D10C5u); RECOMP_ABI_CALL(0x004C979Eu, sub_004C979E); /* call 0x004C979E */

loc_004D10C5: ;
    eax = ZX8(LO8(eax));
    goto loc_004D10CD;

loc_004D10CA: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004D10CD: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D10D1
 * Original: 0x004D10D1 - 0x004D111B (74 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D10D1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D10D1: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x004D10DCu); RECOMP_ABI_CALL(0x004C1563u, sub_004C1563); /* call 0x004C1563 */

loc_004D10DC: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D10E5u); RECOMP_ABI_CALL(0x004C973Au, sub_004C973A); /* call 0x004C973A */

loc_004D10E5: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D10EEu); RECOMP_ABI_CALL(0x004C1563u, sub_004C1563); /* call 0x004C1563 */

loc_004D10EE: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004D10F6u); RECOMP_ABI_CALL(0x004D0ADDu, sub_004D0ADD); /* call 0x004D0ADD */

loc_004D10F6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1117; /* je: equal / zero */

loc_004D10FA: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004D1105u); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004D1105: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, ecx);
    if (CMP_AE(_fa, _fb)) goto loc_004D110D; /* jae: above or equal (unsigned >=) */

loc_004D110B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D110D: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004D1116u); RECOMP_ABI_CALL(0x004CDD8Cu, sub_004CDD8C); /* call 0x004CDD8C */

loc_004D1116: ;
    POP32(esp, edi);

loc_004D1117: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D111B
 * Original: 0x004D111B - 0x004D113F (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D111B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D111B: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D112C; /* jne: not equal / not zero */

loc_004D1125: ;
    PUSH32(esp, 0x004D112Au); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D112A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D112C: ;
    ecx = MEM32(0x90E49C);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D113Bu); RECOMP_ABI_CALL(0x004D0CFCu, sub_004D0CFC); /* call 0x004D0CFC */

loc_004D113B: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D113F
 * Original: 0x004D113F - 0x004D116D (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D113F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D113F: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1150; /* jne: not equal / not zero */

loc_004D1149: ;
    PUSH32(esp, 0x004D114Eu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D114E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D1150: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1157u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1157: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E49C);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1169u); RECOMP_ABI_CALL(0x004D0DEEu, sub_004D0DEE); /* call 0x004D0DEE */

loc_004D1169: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D116D
 * Original: 0x004D116D - 0x004D119B (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D116D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D116D: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D117E; /* jne: not equal / not zero */

loc_004D1177: ;
    PUSH32(esp, 0x004D117Cu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D117C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D117E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1185u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1185: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E49C);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1197u); RECOMP_ABI_CALL(0x004D0EF5u, sub_004D0EF5); /* call 0x004D0EF5 */

loc_004D1197: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D119B
 * Original: 0x004D119B - 0x004D11C9 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D119B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D119B: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D11AC; /* jne: not equal / not zero */

loc_004D11A5: ;
    PUSH32(esp, 0x004D11AAu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D11AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D11AC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D11B3u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D11B3: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E49C);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D11C5u); RECOMP_ABI_CALL(0x004D0E64u, sub_004D0E64); /* call 0x004D0E64 */

loc_004D11C5: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D11C9
 * Original: 0x004D11C9 - 0x004D11F7 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D11C9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D11C9: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D11DA; /* jne: not equal / not zero */

loc_004D11D3: ;
    PUSH32(esp, 0x004D11D8u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D11D8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D11DA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D11E1u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D11E1: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E49C);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D11F3u); RECOMP_ABI_CALL(0x004D0F6Fu, sub_004D0F6F); /* call 0x004D0F6F */

loc_004D11F3: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D11F7
 * Original: 0x004D11F7 - 0x004D1225 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D11F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D11F7: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1208; /* jne: not equal / not zero */

loc_004D1201: ;
    PUSH32(esp, 0x004D1206u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D1206: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D1208: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D120Fu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D120F: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E49C);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1221u); RECOMP_ABI_CALL(0x004D0FE9u, sub_004D0FE9); /* call 0x004D0FE9 */

loc_004D1221: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1225
 * Original: 0x004D1225 - 0x004D124F (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1225(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1225: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1233; /* jne: not equal / not zero */

loc_004D122E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D1233: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D123Au); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D123A: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E49C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1247u); RECOMP_ABI_CALL(0x004D1063u, sub_004D1063); /* call 0x004D1063 */

loc_004D1247: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D124Du); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D124D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D124F
 * Original: 0x004D124F - 0x004D1282 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D124F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D124F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D125D; /* jne: not equal / not zero */

loc_004D1258: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D125D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D1264u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1264: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D126Du); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D126D: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E49C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D127Au); RECOMP_ABI_CALL(0x004D10A1u, sub_004D10A1); /* call 0x004D10A1 */

loc_004D127A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D1280u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D1280: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1282
 * Original: 0x004D1282 - 0x004D12AC (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1282(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1282: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D1290; /* jne: not equal / not zero */

loc_004D128B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D1290: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1297u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D1297: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E49C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D12A4u); RECOMP_ABI_CALL(0x004D0DC9u, sub_004D0DC9); /* call 0x004D0DC9 */

loc_004D12A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D12AAu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D12AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D12AC
 * Original: 0x004D12AC - 0x004D12CE (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D12AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D12AC: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D12C9; /* je: equal / zero */

loc_004D12B5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D12BCu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D12BC: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E49C);
    PUSH32(esp, 0x004D12C9u); RECOMP_ABI_CALL(0x004D0D75u, sub_004D0D75); /* call 0x004D0D75 */

loc_004D12C9: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D12CE
 * Original: 0x004D12CE - 0x004D12F0 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D12CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D12CE: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D12EB; /* je: equal / zero */

loc_004D12D7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D12DEu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D12DE: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E49C);
    PUSH32(esp, 0x004D12EBu); RECOMP_ABI_CALL(0x004D0D95u, sub_004D0D95); /* call 0x004D0D95 */

loc_004D12EB: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D12F0
 * Original: 0x004D12F0 - 0x004D1312 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D12F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D12F0: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D130D; /* je: equal / zero */

loc_004D12F9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1300u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D1300: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E49C);
    PUSH32(esp, 0x004D130Du); RECOMP_ABI_CALL(0x004D10D1u, sub_004D10D1); /* call 0x004D10D1 */

loc_004D130D: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D1312
 * Original: 0x004D1312 - 0x004D132E (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1312(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1312: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D131Au); RECOMP_ABI_CALL(0x004D0CE0u, sub_004D0CE0); /* call 0x004D0CE0 */

loc_004D131A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D1328; /* je: equal / zero */

loc_004D1321: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D1327u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D1327: ;
    POP32(esp, ecx);

loc_004D1328: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D132E
 * Original: 0x004D132E - 0x004D1349 (27 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D132E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D132E: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x869620);
    MEM32(0x90E49C) = eax;
    PUSH32(esp, 0x004D1340u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D1340: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D1349
 * Original: 0x004D1349 - 0x004D1356 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1349(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1349: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x8696C0;
    esp += 4; return; /* ret */

}

/**
 * sub_004D1356
 * Original: 0x004D1356 - 0x004D135D (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1356(void)
{

loc_004D1356: ;
    MEM32(ecx) = 0x8694A4;
    esp += 4; return; /* ret */

}

/**
 * sub_004D135D
 * Original: 0x004D135D - 0x004D1392 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D135D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D135D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D1365u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D1365: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004D1371u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D1371: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1383; /* je: equal / zero */

loc_004D1378: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D1381u); RECOMP_ABI_CALL(0x004C89D4u, sub_004C89D4); /* call 0x004C89D4 */

loc_004D1381: ;
    goto loc_004D1385;

loc_004D1383: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D1385: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D1390u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D1390: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D1392
 * Original: 0x004D1392 - 0x004D13B1 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1392(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1392: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D139Eu); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D139E: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D13AB; /* je: equal / zero */

loc_004D13A5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D13ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D13A9u); } /* indirect call */
    }

loc_004D13AB: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D13B1
 * Original: 0x004D13B1 - 0x004D13CB (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D13B1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D13B1: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D13C5u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D13C5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D13CB
 * Original: 0x004D13CB - 0x004D13E4 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D13CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D13CB: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D13DF; /* je: equal / zero */

loc_004D13D4: ;
    ecx = MEM32(0x90E4A0);
    PUSH32(esp, 0x004D13DFu); RECOMP_ABI_CALL(0x004D135Du, sub_004D135D); /* call 0x004D135D */

loc_004D13DF: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D13E4
 * Original: 0x004D13E4 - 0x004D13FD (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D13E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D13E4: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D13F8; /* je: equal / zero */

loc_004D13ED: ;
    ecx = MEM32(0x90E4A0);
    PUSH32(esp, 0x004D13F8u); RECOMP_ABI_CALL(0x004D1392u, sub_004D1392); /* call 0x004D1392 */

loc_004D13F8: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D13FD
 * Original: 0x004D13FD - 0x004D1418 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D13FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D13FD: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D1413; /* je: equal / zero */

loc_004D1406: ;
    eax = MEM32(0x90E4A0);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D1413u); RECOMP_ABI_CALL(0x004C8A4Au, sub_004C8A4A); /* call 0x004C8A4A */

loc_004D1413: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D1418
 * Original: 0x004D1418 - 0x004D1435 (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1418(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D1418: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8694A4;
    if (TEST_Z(_fa, _fb)) goto loc_004D142F; /* je: equal / zero */

loc_004D1428: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D142Eu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D142E: ;
    POP32(esp, ecx);

loc_004D142F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D1435
 * Original: 0x004D1435 - 0x004D1448 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1435(void)
{

loc_004D1435: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x869704);
    MEM32(0x90E4A0) = eax;
    PUSH32(esp, 0x004D1447u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D1447: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D1448
 * Original: 0x004D1448 - 0x004D1455 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1448(void)
{

loc_004D1448: ;
    eax = ecx;
    MEM32(eax) = 0x869724;
    MEM8(eax + 4) = 0xFF;
    esp += 4; return; /* ret */

}

/**
 * sub_004D1455
 * Original: 0x004D1455 - 0x004D145C (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1455(void)
{

loc_004D1455: ;
    MEM32(ecx) = 0x869724;
    esp += 4; return; /* ret */

}

/**
 * sub_004D1464
 * Original: 0x004D1464 - 0x004D14A2 (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D1464(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D1464: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D149D; /* je: equal / zero */

loc_004D146D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x004D1476u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D1476: ;
    esi = eax;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D147Fu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D147F: ;
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D1488u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D1488: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4A4);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D149Bu); RECOMP_ABI_CALL(0x004C213Eu, sub_004C213E); /* call 0x004C213E */

loc_004D149B: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004D149D: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D14A2
 * Original: 0x004D14A2 - 0x004D14BF (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D14A2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D14A2: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x869724;
    if (TEST_Z(_fa, _fb)) goto loc_004D14B9; /* je: equal / zero */

loc_004D14B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D14B8u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D14B8: ;
    POP32(esp, ecx);

loc_004D14B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D14BF
 * Original: 0x004D14BF - 0x004D14D2 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D14BF(void)
{

loc_004D14BF: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x869734);
    MEM32(0x90E4A4) = eax;
    PUSH32(esp, 0x004D14D1u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D14D1: ;
    esp += 4; return; /* ret */

}
