/**
 * nhl_07_recomp - Recompiled code chunk 46
 * Functions: 250 (0x0002A138 - 0x0002AA46)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0002A138
 * Original: 0x0002A138 - 0x0002A140 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A138(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A138: ;
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003CC100(); return; /* tail jmp 0x003CC100 */

}

/**
 * sub_0002A140
 * Original: 0x0002A140 - 0x0002A145 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A140: ;
    g_seh_ebp = ebp; sub_003B4EF0(); return; /* tail jmp 0x003B4EF0 */

}

/**
 * sub_0002A145
 * Original: 0x0002A145 - 0x0002A14A (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A145(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A145: ;
    g_seh_ebp = ebp; sub_003056C0(); return; /* tail jmp 0x003056C0 */

}

/**
 * sub_0002A14A
 * Original: 0x0002A14A - 0x0002A14F (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A14A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A14A: ;
    g_seh_ebp = ebp; sub_002626B0(); return; /* tail jmp 0x002626B0 */

}

/**
 * sub_0002A14F
 * Original: 0x0002A14F - 0x0002A154 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A14F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A14F: ;
    g_seh_ebp = ebp; sub_00249F30(); return; /* tail jmp 0x00249F30 */

}

/**
 * sub_0002A163
 * Original: 0x0002A163 - 0x0002A168 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A163(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A163: ;
    g_seh_ebp = ebp; sub_0038E9E0(); return; /* tail jmp 0x0038E9E0 */

}

/**
 * sub_0002A168
 * Original: 0x0002A168 - 0x0002A16D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A168(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A168: ;
    g_seh_ebp = ebp; sub_0038B740(); return; /* tail jmp 0x0038B740 */

}

/**
 * sub_0002A16D
 * Original: 0x0002A16D - 0x0002A172 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A16D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A16D: ;
    g_seh_ebp = ebp; sub_002647C0(); return; /* tail jmp 0x002647C0 */

}

/**
 * sub_0002A172
 * Original: 0x0002A172 - 0x0002A177 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A172(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A172: ;
    g_seh_ebp = ebp; sub_0007B550(); return; /* tail jmp 0x0007B550 */

}

/**
 * sub_0002A177
 * Original: 0x0002A177 - 0x0002A17C (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A177(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A177: ;
    g_seh_ebp = ebp; sub_00101F60(); return; /* tail jmp 0x00101F60 */

}

/**
 * sub_0002A17C
 * Original: 0x0002A17C - 0x0002A181 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A17C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A17C: ;
    g_seh_ebp = ebp; sub_003E3BE0(); return; /* tail jmp 0x003E3BE0 */

}

/**
 * sub_0002A181
 * Original: 0x0002A181 - 0x0002A186 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A181(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A181: ;
    g_seh_ebp = ebp; sub_00058A70(); return; /* tail jmp 0x00058A70 */

}

/**
 * sub_0002A186
 * Original: 0x0002A186 - 0x0002A18B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A186(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A186: ;
    g_seh_ebp = ebp; sub_003BD7F0(); return; /* tail jmp 0x003BD7F0 */

}

/**
 * sub_0002A19A
 * Original: 0x0002A19A - 0x0002A19F (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A19A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A19A: ;
    g_seh_ebp = ebp; sub_002B18C0(); return; /* tail jmp 0x002B18C0 */

}

/**
 * sub_0002A19F
 * Original: 0x0002A19F - 0x0002A1A9 (10 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A19F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A19F: ;
    g_seh_ebp = ebp; sub_00143BC0(); return; /* tail jmp 0x00143BC0 */

}

/**
 * sub_0002A1A4
 * Original: 0x0002A1A4 - 0x0002A1A9 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A1A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A1A4: ;
    g_seh_ebp = ebp; sub_0005CA20(); return; /* tail jmp 0x0005CA20 */

}

/**
 * sub_0002A1A9
 * Original: 0x0002A1A9 - 0x0002A1AE (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A1A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A1A9: ;
    g_seh_ebp = ebp; sub_000FE570(); return; /* tail jmp 0x000FE570 */

}

/**
 * sub_0002A1AE
 * Original: 0x0002A1AE - 0x0002A1B8 (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A1AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A1AE: ;
    g_seh_ebp = ebp; sub_000FE410(); return; /* tail jmp 0x000FE410 */

    g_seh_ebp = ebp; sub_00228BD0(); return; /* tail jmp 0x00228BD0 */

}

/**
 * sub_0002A1B8
 * Original: 0x0002A1B8 - 0x0002A1BD (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A1B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A1B8: ;
    g_seh_ebp = ebp; sub_001C3440(); return; /* tail jmp 0x001C3440 */

}

/**
 * sub_0002A1C2
 * Original: 0x0002A1C2 - 0x0002A1C7 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A1C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A1C2: ;
    g_seh_ebp = ebp; sub_0034B6F0(); return; /* tail jmp 0x0034B6F0 */

}

/**
 * sub_0002A1D6
 * Original: 0x0002A1D6 - 0x0002A1DB (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A1D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A1D6: ;
    g_seh_ebp = ebp; sub_00387020(); return; /* tail jmp 0x00387020 */

}

/**
 * sub_0002A1DB
 * Original: 0x0002A1DB - 0x0002A1E0 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A1DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A1DB: ;
    g_seh_ebp = ebp; sub_00360C50(); return; /* tail jmp 0x00360C50 */

}

/**
 * sub_0002A1E0
 * Original: 0x0002A1E0 - 0x0002A1E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A1E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A1E0: ;
    g_seh_ebp = ebp; sub_0022D360(); return; /* tail jmp 0x0022D360 */

}

/**
 * sub_0002A1E5
 * Original: 0x0002A1E5 - 0x0002A1F9 (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A1E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A1E5: ;
    g_seh_ebp = ebp; sub_000CF5E0(); return; /* tail jmp 0x000CF5E0 */

    g_seh_ebp = ebp; sub_003C83A0(); return; /* tail jmp 0x003C83A0 */

    g_seh_ebp = ebp; sub_002284E0(); return; /* tail jmp 0x002284E0 */

    g_seh_ebp = ebp; sub_00228630(); return; /* tail jmp 0x00228630 */

}

/**
 * sub_0002A1F9
 * Original: 0x0002A1F9 - 0x0002A208 (15 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A1F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A1F9: ;
    g_seh_ebp = ebp; sub_003D71E0(); return; /* tail jmp 0x003D71E0 */

    g_seh_ebp = ebp; sub_003920F0(); return; /* tail jmp 0x003920F0 */

    g_seh_ebp = ebp; sub_00440440(); return; /* tail jmp 0x00440440 */

}

/**
 * sub_0002A208
 * Original: 0x0002A208 - 0x0002A20D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A208(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A208: ;
    g_seh_ebp = ebp; sub_003E9400(); return; /* tail jmp 0x003E9400 */

}

/**
 * sub_0002A20D
 * Original: 0x0002A20D - 0x0002A212 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A20D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A20D: ;
    g_seh_ebp = ebp; sub_001CF1F0(); return; /* tail jmp 0x001CF1F0 */

}

/**
 * sub_0002A212
 * Original: 0x0002A212 - 0x0002A217 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A212(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A212: ;
    g_seh_ebp = ebp; sub_003CBDE0(); return; /* tail jmp 0x003CBDE0 */

}

/**
 * sub_0002A21C
 * Original: 0x0002A21C - 0x0002A221 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A21C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A21C: ;
    g_seh_ebp = ebp; sub_0006D610(); return; /* tail jmp 0x0006D610 */

}

/**
 * sub_0002A221
 * Original: 0x0002A221 - 0x0002A226 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A221(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A221: ;
    g_seh_ebp = ebp; sub_0042A8D0(); return; /* tail jmp 0x0042A8D0 */

}

/**
 * sub_0002A235
 * Original: 0x0002A235 - 0x0002A23A (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A235(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A235: ;
    g_seh_ebp = ebp; sub_000A7FF0(); return; /* tail jmp 0x000A7FF0 */

}

/**
 * sub_0002A23A
 * Original: 0x0002A23A - 0x0002A24E (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A23A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A23A: ;
    g_seh_ebp = ebp; sub_00067BA0(); return; /* tail jmp 0x00067BA0 */

    g_seh_ebp = ebp; sub_0043F0A0(); return; /* tail jmp 0x0043F0A0 */

    g_seh_ebp = ebp; sub_0030CE50(); return; /* tail jmp 0x0030CE50 */

    g_seh_ebp = ebp; sub_00152B80(); return; /* tail jmp 0x00152B80 */

}

/**
 * sub_0002A249
 * Original: 0x0002A249 - 0x0002A24E (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A249(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A249: ;
    g_seh_ebp = ebp; sub_00152B80(); return; /* tail jmp 0x00152B80 */

}

/**
 * sub_0002A24E
 * Original: 0x0002A24E - 0x0002A253 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A24E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A24E: ;
    g_seh_ebp = ebp; sub_000ADB30(); return; /* tail jmp 0x000ADB30 */

}

/**
 * sub_0002A258
 * Original: 0x0002A258 - 0x0002A25D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A258(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A258: ;
    g_seh_ebp = ebp; sub_001C7940(); return; /* tail jmp 0x001C7940 */

}

/**
 * sub_0002A267
 * Original: 0x0002A267 - 0x0002A26C (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A267(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A267: ;
    g_seh_ebp = ebp; sub_00214810(); return; /* tail jmp 0x00214810 */

}

/**
 * sub_0002A26C
 * Original: 0x0002A26C - 0x0002A271 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A26C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A26C: ;
    g_seh_ebp = ebp; sub_00080950(); return; /* tail jmp 0x00080950 */

}

/**
 * sub_0002A271
 * Original: 0x0002A271 - 0x0002A276 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A271(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A271: ;
    g_seh_ebp = ebp; sub_0042A860(); return; /* tail jmp 0x0042A860 */

}

/**
 * sub_0002A276
 * Original: 0x0002A276 - 0x0002A27B (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A276(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A276: ;
    g_seh_ebp = ebp; sub_001C18F0(); return; /* tail jmp 0x001C18F0 */

}

/**
 * sub_0002A27B
 * Original: 0x0002A27B - 0x0002A299 (30 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A27B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A27B: ;
    g_seh_ebp = ebp; sub_000F0F90(); return; /* tail jmp 0x000F0F90 */

    g_seh_ebp = ebp; sub_0004B870(); return; /* tail jmp 0x0004B870 */

    g_seh_ebp = ebp; sub_000635B0(); return; /* tail jmp 0x000635B0 */

    g_seh_ebp = ebp; sub_00437450(); return; /* tail jmp 0x00437450 */

    g_seh_ebp = ebp; sub_003CE9C0(); return; /* tail jmp 0x003CE9C0 */

    g_seh_ebp = ebp; sub_0043F6A0(); return; /* tail jmp 0x0043F6A0 */

}

/**
 * sub_0002A299
 * Original: 0x0002A299 - 0x0002A29E (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A299(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A299: ;
    g_seh_ebp = ebp; sub_00299FA0(); return; /* tail jmp 0x00299FA0 */

}

/**
 * sub_0002A2AD
 * Original: 0x0002A2AD - 0x0002A2B2 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A2AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A2AD: ;
    g_seh_ebp = ebp; sub_002EAAC0(); return; /* tail jmp 0x002EAAC0 */

}

/**
 * sub_0002A2B7
 * Original: 0x0002A2B7 - 0x0002A2BC (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A2B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A2B7: ;
    g_seh_ebp = ebp; sub_0027F390(); return; /* tail jmp 0x0027F390 */

}

/**
 * sub_0002A2BC
 * Original: 0x0002A2BC - 0x0002A2C1 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A2BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A2BC: ;
    g_seh_ebp = ebp; sub_0040BDA0(); return; /* tail jmp 0x0040BDA0 */

}

/**
 * sub_0002A2C1
 * Original: 0x0002A2C1 - 0x0002A2C6 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A2C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A2C1: ;
    g_seh_ebp = ebp; sub_003E9C30(); return; /* tail jmp 0x003E9C30 */

}

/**
 * sub_0002A2C6
 * Original: 0x0002A2C6 - 0x0002A2CB (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A2C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A2C6: ;
    g_seh_ebp = ebp; sub_00362AD0(); return; /* tail jmp 0x00362AD0 */

}

/**
 * sub_0002A2CB
 * Original: 0x0002A2CB - 0x0002A2D0 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A2CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A2CB: ;
    g_seh_ebp = ebp; sub_00212AA0(); return; /* tail jmp 0x00212AA0 */

}

/**
 * sub_0002A2D0
 * Original: 0x0002A2D0 - 0x0002A2DA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A2D0: ;
    g_seh_ebp = ebp; sub_003C7B50(); return; /* tail jmp 0x003C7B50 */

    g_seh_ebp = ebp; sub_003BF610(); return; /* tail jmp 0x003BF610 */

}

/**
 * sub_0002A2DA
 * Original: 0x0002A2DA - 0x0002A2DF (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A2DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A2DA: ;
    g_seh_ebp = ebp; sub_003CAE40(); return; /* tail jmp 0x003CAE40 */

}

/**
 * sub_0002A2DF
 * Original: 0x0002A2DF - 0x0002A2E4 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A2DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A2DF: ;
    g_seh_ebp = ebp; sub_00362610(); return; /* tail jmp 0x00362610 */

}

/**
 * sub_0002A2E4
 * Original: 0x0002A2E4 - 0x0002A2E9 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A2E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A2E4: ;
    g_seh_ebp = ebp; sub_002C3170(); return; /* tail jmp 0x002C3170 */

}

/**
 * sub_0002A2E9
 * Original: 0x0002A2E9 - 0x0002A2F3 (10 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A2E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A2E9: ;
    g_seh_ebp = ebp; sub_00199D70(); return; /* tail jmp 0x00199D70 */

}

/**
 * sub_0002A2F3
 * Original: 0x0002A2F3 - 0x0002A302 (15 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A2F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A2F3: ;
    g_seh_ebp = ebp; sub_001C1410(); return; /* tail jmp 0x001C1410 */

    g_seh_ebp = ebp; sub_000B1FC0(); return; /* tail jmp 0x000B1FC0 */

    g_seh_ebp = ebp; sub_003CC160(); return; /* tail jmp 0x003CC160 */

}

/**
 * sub_0002A302
 * Original: 0x0002A302 - 0x0002A307 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A302(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A302: ;
    g_seh_ebp = ebp; sub_0025AF30(); return; /* tail jmp 0x0025AF30 */

}

/**
 * sub_0002A307
 * Original: 0x0002A307 - 0x0002A311 (10 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A307(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A307: ;
    g_seh_ebp = ebp; sub_001B5620(); return; /* tail jmp 0x001B5620 */

}

/**
 * sub_0002A311
 * Original: 0x0002A311 - 0x0002A316 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A311(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A311: ;
    g_seh_ebp = ebp; sub_003DFF40(); return; /* tail jmp 0x003DFF40 */

}

/**
 * sub_0002A320
 * Original: 0x0002A320 - 0x0002A325 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A320: ;
    g_seh_ebp = ebp; sub_003E8020(); return; /* tail jmp 0x003E8020 */

}

/**
 * sub_0002A32F
 * Original: 0x0002A32F - 0x0002A334 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A32F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A32F: ;
    g_seh_ebp = ebp; sub_00332DA0(); return; /* tail jmp 0x00332DA0 */

}

/**
 * sub_0002A334
 * Original: 0x0002A334 - 0x0002A352 (30 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A334(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A334: ;
    g_seh_ebp = ebp; sub_000A2FF0(); return; /* tail jmp 0x000A2FF0 */

    g_seh_ebp = ebp; sub_0032F580(); return; /* tail jmp 0x0032F580 */

    g_seh_ebp = ebp; sub_001D5AA0(); return; /* tail jmp 0x001D5AA0 */

    g_seh_ebp = ebp; sub_00198940(); return; /* tail jmp 0x00198940 */

    g_seh_ebp = ebp; sub_0036DB90(); return; /* tail jmp 0x0036DB90 */

    g_seh_ebp = ebp; sub_002E70F0(); return; /* tail jmp 0x002E70F0 */

}

/**
 * sub_0002A352
 * Original: 0x0002A352 - 0x0002A357 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A352(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A352: ;
    g_seh_ebp = ebp; sub_00114250(); return; /* tail jmp 0x00114250 */

}

/**
 * sub_0002A357
 * Original: 0x0002A357 - 0x0002A36B (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A357(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A357: ;
    g_seh_ebp = ebp; sub_00412F60(); return; /* tail jmp 0x00412F60 */

    g_seh_ebp = ebp; sub_00144FB0(); return; /* tail jmp 0x00144FB0 */

    g_seh_ebp = ebp; sub_000F1CE0(); return; /* tail jmp 0x000F1CE0 */

    g_seh_ebp = ebp; sub_000A31C0(); return; /* tail jmp 0x000A31C0 */

}

/**
 * sub_0002A35C
 * Original: 0x0002A35C - 0x0002A36B (15 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A35C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A35C: ;
    g_seh_ebp = ebp; sub_00144FB0(); return; /* tail jmp 0x00144FB0 */

}

/**
 * sub_0002A36B
 * Original: 0x0002A36B - 0x0002A370 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A36B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A36B: ;
    g_seh_ebp = ebp; sub_000EBB80(); return; /* tail jmp 0x000EBB80 */

}

/**
 * sub_0002A370
 * Original: 0x0002A370 - 0x0002A375 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A370: ;
    g_seh_ebp = ebp; sub_000D2150(); return; /* tail jmp 0x000D2150 */

}

/**
 * sub_0002A375
 * Original: 0x0002A375 - 0x0002A384 (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A375(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A375: ;
    g_seh_ebp = ebp; sub_004417D0(); return; /* tail jmp 0x004417D0 */

    g_seh_ebp = ebp; sub_000B45E0(); return; /* tail jmp 0x000B45E0 */

    g_seh_ebp = ebp; sub_0023CDA0(); return; /* tail jmp 0x0023CDA0 */

}

/**
 * sub_0002A384
 * Original: 0x0002A384 - 0x0002A389 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A384(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A384: ;
    g_seh_ebp = ebp; sub_002B8EF0(); return; /* tail jmp 0x002B8EF0 */

}

/**
 * sub_0002A389
 * Original: 0x0002A389 - 0x0002A38E (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A389(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A389: ;
    g_seh_ebp = ebp; sub_0008B3C0(); return; /* tail jmp 0x0008B3C0 */

}

/**
 * sub_0002A398
 * Original: 0x0002A398 - 0x0002A3A7 (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A398(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A398: ;
    g_seh_ebp = ebp; sub_00436AF0(); return; /* tail jmp 0x00436AF0 */

    g_seh_ebp = ebp; sub_0043CC40(); return; /* tail jmp 0x0043CC40 */

    g_seh_ebp = ebp; sub_00331E30(); return; /* tail jmp 0x00331E30 */

}

/**
 * sub_0002A3A7
 * Original: 0x0002A3A7 - 0x0002A3AC (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A3A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A3A7: ;
    g_seh_ebp = ebp; sub_0025BC60(); return; /* tail jmp 0x0025BC60 */

}

/**
 * sub_0002A3AC
 * Original: 0x0002A3AC - 0x0002A3B1 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A3AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A3AC: ;
    g_seh_ebp = ebp; sub_0037CC00(); return; /* tail jmp 0x0037CC00 */

}

/**
 * sub_0002A3B1
 * Original: 0x0002A3B1 - 0x0002A3B6 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A3B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A3B1: ;
    g_seh_ebp = ebp; sub_0031D550(); return; /* tail jmp 0x0031D550 */

}

/**
 * sub_0002A3B6
 * Original: 0x0002A3B6 - 0x0002A3BB (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A3B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A3B6: ;
    g_seh_ebp = ebp; sub_000D1EA0(); return; /* tail jmp 0x000D1EA0 */

}

/**
 * sub_0002A3BB
 * Original: 0x0002A3BB - 0x0002A3C0 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A3BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A3BB: ;
    g_seh_ebp = ebp; sub_00119320(); return; /* tail jmp 0x00119320 */

}

/**
 * sub_0002A3C0
 * Original: 0x0002A3C0 - 0x0002A3C5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A3C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A3C0: ;
    g_seh_ebp = ebp; sub_00363450(); return; /* tail jmp 0x00363450 */

}

/**
 * sub_0002A3C5
 * Original: 0x0002A3C5 - 0x0002A3CA (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A3C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A3C5: ;
    g_seh_ebp = ebp; sub_003019B0(); return; /* tail jmp 0x003019B0 */

}

/**
 * sub_0002A3CA
 * Original: 0x0002A3CA - 0x0002A3CF (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A3CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A3CA: ;
    g_seh_ebp = ebp; sub_00426BC0(); return; /* tail jmp 0x00426BC0 */

}

/**
 * sub_0002A3CF
 * Original: 0x0002A3CF - 0x0002A3D4 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A3CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A3CF: ;
    g_seh_ebp = ebp; sub_00260FB0(); return; /* tail jmp 0x00260FB0 */

}

/**
 * sub_0002A3D4
 * Original: 0x0002A3D4 - 0x0002A3D9 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A3D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A3D4: ;
    g_seh_ebp = ebp; sub_001301B0(); return; /* tail jmp 0x001301B0 */

}

/**
 * sub_0002A3D9
 * Original: 0x0002A3D9 - 0x0002A3DE (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A3D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A3D9: ;
    g_seh_ebp = ebp; sub_00123270(); return; /* tail jmp 0x00123270 */

}

/**
 * sub_0002A3DE
 * Original: 0x0002A3DE - 0x0002A3E8 (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A3DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A3DE: ;
    g_seh_ebp = ebp; sub_00113BB0(); return; /* tail jmp 0x00113BB0 */

    g_seh_ebp = ebp; sub_003F45A0(); return; /* tail jmp 0x003F45A0 */

}

/**
 * sub_0002A3E8
 * Original: 0x0002A3E8 - 0x0002A3F2 (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A3E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A3E8: ;
    g_seh_ebp = ebp; sub_0039A930(); return; /* tail jmp 0x0039A930 */

    g_seh_ebp = ebp; sub_00125C60(); return; /* tail jmp 0x00125C60 */

}

/**
 * sub_0002A3F2
 * Original: 0x0002A3F2 - 0x0002A3F7 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A3F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A3F2: ;
    g_seh_ebp = ebp; sub_000D96A0(); return; /* tail jmp 0x000D96A0 */

}

/**
 * sub_0002A40B
 * Original: 0x0002A40B - 0x0002A415 (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A40B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A40B: ;
    g_seh_ebp = ebp; sub_00435260(); return; /* tail jmp 0x00435260 */

    g_seh_ebp = ebp; sub_0032C7F0(); return; /* tail jmp 0x0032C7F0 */

}

/**
 * sub_0002A415
 * Original: 0x0002A415 - 0x0002A41A (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A415(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A415: ;
    g_seh_ebp = ebp; sub_0006FF70(); return; /* tail jmp 0x0006FF70 */

}

/**
 * sub_0002A41A
 * Original: 0x0002A41A - 0x0002A41F (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A41A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A41A: ;
    g_seh_ebp = ebp; sub_004099C0(); return; /* tail jmp 0x004099C0 */

}

/**
 * sub_0002A41F
 * Original: 0x0002A41F - 0x0002A424 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A41F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A41F: ;
    g_seh_ebp = ebp; sub_00329C60(); return; /* tail jmp 0x00329C60 */

}

/**
 * sub_0002A424
 * Original: 0x0002A424 - 0x0002A42E (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A424(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A424: ;
    g_seh_ebp = ebp; sub_002119A0(); return; /* tail jmp 0x002119A0 */

    g_seh_ebp = ebp; sub_00447230(); return; /* tail jmp 0x00447230 */

}

/**
 * sub_0002A42E
 * Original: 0x0002A42E - 0x0002A433 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A42E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A42E: ;
    g_seh_ebp = ebp; sub_00415010(); return; /* tail jmp 0x00415010 */

}

/**
 * sub_0002A43D
 * Original: 0x0002A43D - 0x0002A442 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A43D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A43D: ;
    g_seh_ebp = ebp; sub_002581A0(); return; /* tail jmp 0x002581A0 */

}

/**
 * sub_0002A442
 * Original: 0x0002A442 - 0x0002A447 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A442(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A442: ;
    g_seh_ebp = ebp; sub_004438D0(); return; /* tail jmp 0x004438D0 */

}

/**
 * sub_0002A447
 * Original: 0x0002A447 - 0x0002A451 (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A447(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A447: ;
    g_seh_ebp = ebp; sub_000FC400(); return; /* tail jmp 0x000FC400 */

    g_seh_ebp = ebp; sub_000C2B40(); return; /* tail jmp 0x000C2B40 */

}

/**
 * sub_0002A451
 * Original: 0x0002A451 - 0x0002A456 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A451(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A451: ;
    g_seh_ebp = ebp; sub_0026C260(); return; /* tail jmp 0x0026C260 */

}

/**
 * sub_0002A45B
 * Original: 0x0002A45B - 0x0002A460 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A45B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A45B: ;
    g_seh_ebp = ebp; sub_0034B540(); return; /* tail jmp 0x0034B540 */

}

/**
 * sub_0002A46F
 * Original: 0x0002A46F - 0x0002A474 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A46F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A46F: ;
    g_seh_ebp = ebp; sub_00066230(); return; /* tail jmp 0x00066230 */

}

/**
 * sub_0002A474
 * Original: 0x0002A474 - 0x0002A479 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A474(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A474: ;
    g_seh_ebp = ebp; sub_003D5F10(); return; /* tail jmp 0x003D5F10 */

}

/**
 * sub_0002A483
 * Original: 0x0002A483 - 0x0002A488 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A483(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A483: ;
    g_seh_ebp = ebp; sub_000C5060(); return; /* tail jmp 0x000C5060 */

}

/**
 * sub_0002A488
 * Original: 0x0002A488 - 0x0002A48D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A488(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A488: ;
    g_seh_ebp = ebp; sub_00380820(); return; /* tail jmp 0x00380820 */

}

/**
 * sub_0002A492
 * Original: 0x0002A492 - 0x0002A497 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A492(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A492: ;
    g_seh_ebp = ebp; sub_0018EA10(); return; /* tail jmp 0x0018EA10 */

}

/**
 * sub_0002A49C
 * Original: 0x0002A49C - 0x0002A4AB (15 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A49C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A49C: ;
    g_seh_ebp = ebp; sub_00067220(); return; /* tail jmp 0x00067220 */

    g_seh_ebp = ebp; sub_003F71B0(); return; /* tail jmp 0x003F71B0 */

    g_seh_ebp = ebp; sub_00354890(); return; /* tail jmp 0x00354890 */

}

/**
 * sub_0002A4AB
 * Original: 0x0002A4AB - 0x0002A4B0 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A4AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A4AB: ;
    g_seh_ebp = ebp; sub_001FD710(); return; /* tail jmp 0x001FD710 */

}

/**
 * sub_0002A4B0
 * Original: 0x0002A4B0 - 0x0002A4B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A4B0: ;
    g_seh_ebp = ebp; sub_000C3440(); return; /* tail jmp 0x000C3440 */

}

/**
 * sub_0002A4B5
 * Original: 0x0002A4B5 - 0x0002A4BA (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A4B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A4B5: ;
    g_seh_ebp = ebp; sub_003F78C0(); return; /* tail jmp 0x003F78C0 */

}

/**
 * sub_0002A4BF
 * Original: 0x0002A4BF - 0x0002A4C4 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A4BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A4BF: ;
    g_seh_ebp = ebp; sub_003D18E0(); return; /* tail jmp 0x003D18E0 */

}

/**
 * sub_0002A4C4
 * Original: 0x0002A4C4 - 0x0002A4C9 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A4C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A4C4: ;
    g_seh_ebp = ebp; sub_001F4690(); return; /* tail jmp 0x001F4690 */

}

/**
 * sub_0002A4C9
 * Original: 0x0002A4C9 - 0x0002A4CE (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A4C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A4C9: ;
    g_seh_ebp = ebp; sub_001199A0(); return; /* tail jmp 0x001199A0 */

}

/**
 * sub_0002A4CE
 * Original: 0x0002A4CE - 0x0002A4D8 (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A4CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A4CE: ;
    g_seh_ebp = ebp; sub_000A7F10(); return; /* tail jmp 0x000A7F10 */

    g_seh_ebp = ebp; sub_0043FA80(); return; /* tail jmp 0x0043FA80 */

}

/**
 * sub_0002A4D8
 * Original: 0x0002A4D8 - 0x0002A4DD (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A4D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A4D8: ;
    g_seh_ebp = ebp; sub_004349E0(); return; /* tail jmp 0x004349E0 */

}

/**
 * sub_0002A4E2
 * Original: 0x0002A4E2 - 0x0002A4EC (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A4E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A4E2: ;
    g_seh_ebp = ebp; sub_003D3DE0(); return; /* tail jmp 0x003D3DE0 */

    g_seh_ebp = ebp; sub_002FC8D0(); return; /* tail jmp 0x002FC8D0 */

}

/**
 * sub_0002A4EC
 * Original: 0x0002A4EC - 0x0002A4F1 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A4EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A4EC: ;
    g_seh_ebp = ebp; sub_003B3910(); return; /* tail jmp 0x003B3910 */

}

/**
 * sub_0002A4F6
 * Original: 0x0002A4F6 - 0x0002A4FB (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A4F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A4F6: ;
    g_seh_ebp = ebp; sub_001301E0(); return; /* tail jmp 0x001301E0 */

}

/**
 * sub_0002A4FB
 * Original: 0x0002A4FB - 0x0002A505 (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A4FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A4FB: ;
    g_seh_ebp = ebp; sub_0006E830(); return; /* tail jmp 0x0006E830 */

    g_seh_ebp = ebp; sub_0009F490(); return; /* tail jmp 0x0009F490 */

}

/**
 * sub_0002A505
 * Original: 0x0002A505 - 0x0002A50A (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A505(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A505: ;
    g_seh_ebp = ebp; sub_003CFE70(); return; /* tail jmp 0x003CFE70 */

}

/**
 * sub_0002A50A
 * Original: 0x0002A50A - 0x0002A50F (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A50A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A50A: ;
    g_seh_ebp = ebp; sub_0019F7B0(); return; /* tail jmp 0x0019F7B0 */

}

/**
 * sub_0002A519
 * Original: 0x0002A519 - 0x0002A523 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A519(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A519: ;
    g_seh_ebp = ebp; sub_00066870(); return; /* tail jmp 0x00066870 */

    g_seh_ebp = ebp; sub_003F3DC0(); return; /* tail jmp 0x003F3DC0 */

}

/**
 * sub_0002A523
 * Original: 0x0002A523 - 0x0002A528 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A523(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A523: ;
    g_seh_ebp = ebp; sub_00343350(); return; /* tail jmp 0x00343350 */

}

/**
 * sub_0002A53C
 * Original: 0x0002A53C - 0x0002A541 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A53C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A53C: ;
    g_seh_ebp = ebp; sub_000E9B90(); return; /* tail jmp 0x000E9B90 */

}

/**
 * sub_0002A550
 * Original: 0x0002A550 - 0x0002A555 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A550: ;
    g_seh_ebp = ebp; sub_0034B400(); return; /* tail jmp 0x0034B400 */

}

/**
 * sub_0002A55F
 * Original: 0x0002A55F - 0x0002A56E (15 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A55F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A55F: ;
    g_seh_ebp = ebp; sub_0026FDD0(); return; /* tail jmp 0x0026FDD0 */

    g_seh_ebp = ebp; sub_0016A640(); return; /* tail jmp 0x0016A640 */

    g_seh_ebp = ebp; sub_001D9680(); return; /* tail jmp 0x001D9680 */

}

/**
 * sub_0002A564
 * Original: 0x0002A564 - 0x0002A56E (10 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A564(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A564: ;
    g_seh_ebp = ebp; sub_0016A640(); return; /* tail jmp 0x0016A640 */

}

/**
 * sub_0002A56E
 * Original: 0x0002A56E - 0x0002A578 (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A56E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A56E: ;
    g_seh_ebp = ebp; sub_001173B0(); return; /* tail jmp 0x001173B0 */

    g_seh_ebp = ebp; sub_00362C50(); return; /* tail jmp 0x00362C50 */

}

/**
 * sub_0002A578
 * Original: 0x0002A578 - 0x0002A582 (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A578(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A578: ;
    g_seh_ebp = ebp; sub_00362770(); return; /* tail jmp 0x00362770 */

    g_seh_ebp = ebp; sub_0018D540(); return; /* tail jmp 0x0018D540 */

}

/**
 * sub_0002A582
 * Original: 0x0002A582 - 0x0002A587 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A582(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A582: ;
    g_seh_ebp = ebp; sub_00099050(); return; /* tail jmp 0x00099050 */

}

/**
 * sub_0002A587
 * Original: 0x0002A587 - 0x0002A58C (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A587(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A587: ;
    g_seh_ebp = ebp; sub_000BAA50(); return; /* tail jmp 0x000BAA50 */

}

/**
 * sub_0002A596
 * Original: 0x0002A596 - 0x0002A59B (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A596(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A596: ;
    g_seh_ebp = ebp; sub_000F1040(); return; /* tail jmp 0x000F1040 */

}

/**
 * sub_0002A59B
 * Original: 0x0002A59B - 0x0002A5A0 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A59B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A59B: ;
    g_seh_ebp = ebp; sub_000F0F30(); return; /* tail jmp 0x000F0F30 */

}

/**
 * sub_0002A5A0
 * Original: 0x0002A5A0 - 0x0002A5A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A5A0: ;
    g_seh_ebp = ebp; sub_0042EEB0(); return; /* tail jmp 0x0042EEB0 */

}

/**
 * sub_0002A5A5
 * Original: 0x0002A5A5 - 0x0002A5AA (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A5A5: ;
    g_seh_ebp = ebp; sub_0042C3C0(); return; /* tail jmp 0x0042C3C0 */

}

/**
 * sub_0002A5AF
 * Original: 0x0002A5AF - 0x0002A5B4 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A5AF: ;
    g_seh_ebp = ebp; sub_001191B0(); return; /* tail jmp 0x001191B0 */

}

/**
 * sub_0002A5B4
 * Original: 0x0002A5B4 - 0x0002A5B9 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A5B4: ;
    g_seh_ebp = ebp; sub_0004BB00(); return; /* tail jmp 0x0004BB00 */

}

/**
 * sub_0002A5B9
 * Original: 0x0002A5B9 - 0x0002A5BE (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A5B9: ;
    g_seh_ebp = ebp; sub_00215B30(); return; /* tail jmp 0x00215B30 */

}

/**
 * sub_0002A5BE
 * Original: 0x0002A5BE - 0x0002A5C3 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A5BE: ;
    g_seh_ebp = ebp; sub_00175B50(); return; /* tail jmp 0x00175B50 */

}

/**
 * sub_0002A5C3
 * Original: 0x0002A5C3 - 0x0002A5CD (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A5C3: ;
    g_seh_ebp = ebp; sub_00117DE0(); return; /* tail jmp 0x00117DE0 */

    g_seh_ebp = ebp; sub_001163D0(); return; /* tail jmp 0x001163D0 */

}

/**
 * sub_0002A5CD
 * Original: 0x0002A5CD - 0x0002A5D2 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A5CD: ;
    g_seh_ebp = ebp; sub_0005F030(); return; /* tail jmp 0x0005F030 */

}

/**
 * sub_0002A5D2
 * Original: 0x0002A5D2 - 0x0002A5D7 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A5D2: ;
    g_seh_ebp = ebp; sub_0025B240(); return; /* tail jmp 0x0025B240 */

}

/**
 * sub_0002A5D7
 * Original: 0x0002A5D7 - 0x0002A5EB (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A5D7: ;
    g_seh_ebp = ebp; sub_00117C10(); return; /* tail jmp 0x00117C10 */

    g_seh_ebp = ebp; sub_00069050(); return; /* tail jmp 0x00069050 */

    g_seh_ebp = ebp; sub_0031E4B0(); return; /* tail jmp 0x0031E4B0 */

    g_seh_ebp = ebp; sub_003F3150(); return; /* tail jmp 0x003F3150 */

}

/**
 * sub_0002A5EB
 * Original: 0x0002A5EB - 0x0002A5F0 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A5EB: ;
    g_seh_ebp = ebp; sub_003B6D00(); return; /* tail jmp 0x003B6D00 */

}

/**
 * sub_0002A5F0
 * Original: 0x0002A5F0 - 0x0002A5F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A5F0: ;
    g_seh_ebp = ebp; sub_002BA8D0(); return; /* tail jmp 0x002BA8D0 */

}

/**
 * sub_0002A5F5
 * Original: 0x0002A5F5 - 0x0002A5FA (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5F5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A5F5: ;
    g_seh_ebp = ebp; sub_000CC060(); return; /* tail jmp 0x000CC060 */

}

/**
 * sub_0002A5FA
 * Original: 0x0002A5FA - 0x0002A5FF (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A5FA: ;
    g_seh_ebp = ebp; sub_003BEAD0(); return; /* tail jmp 0x003BEAD0 */

}

/**
 * sub_0002A609
 * Original: 0x0002A609 - 0x0002A60E (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A609(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A609: ;
    g_seh_ebp = ebp; sub_003493A0(); return; /* tail jmp 0x003493A0 */

}

/**
 * sub_0002A618
 * Original: 0x0002A618 - 0x0002A61D (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A618(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A618: ;
    g_seh_ebp = ebp; sub_0040EC10(); return; /* tail jmp 0x0040EC10 */

}

/**
 * sub_0002A61D
 * Original: 0x0002A61D - 0x0002A622 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A61D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A61D: ;
    g_seh_ebp = ebp; sub_001DAC80(); return; /* tail jmp 0x001DAC80 */

}

/**
 * sub_0002A622
 * Original: 0x0002A622 - 0x0002A62C (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A622(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A622: ;
    g_seh_ebp = ebp; sub_00385B80(); return; /* tail jmp 0x00385B80 */

    g_seh_ebp = ebp; sub_0032BE60(); return; /* tail jmp 0x0032BE60 */

}

/**
 * sub_0002A62C
 * Original: 0x0002A62C - 0x0002A631 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A62C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A62C: ;
    g_seh_ebp = ebp; sub_00133520(); return; /* tail jmp 0x00133520 */

}

/**
 * sub_0002A63B
 * Original: 0x0002A63B - 0x0002A640 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A63B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A63B: ;
    g_seh_ebp = ebp; sub_00199050(); return; /* tail jmp 0x00199050 */

}

/**
 * sub_0002A645
 * Original: 0x0002A645 - 0x0002A64A (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A645(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A645: ;
    g_seh_ebp = ebp; sub_000CF970(); return; /* tail jmp 0x000CF970 */

}

/**
 * sub_0002A64A
 * Original: 0x0002A64A - 0x0002A64F (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A64A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A64A: ;
    g_seh_ebp = ebp; sub_00375610(); return; /* tail jmp 0x00375610 */

}

/**
 * sub_0002A64F
 * Original: 0x0002A64F - 0x0002A659 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A64F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A64F: ;
    g_seh_ebp = ebp; sub_0030C630(); return; /* tail jmp 0x0030C630 */

    g_seh_ebp = ebp; sub_0024D780(); return; /* tail jmp 0x0024D780 */

}

/**
 * sub_0002A659
 * Original: 0x0002A659 - 0x0002A65E (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A659(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A659: ;
    g_seh_ebp = ebp; sub_00323500(); return; /* tail jmp 0x00323500 */

}

/**
 * sub_0002A65E
 * Original: 0x0002A65E - 0x0002A672 (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A65E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A65E: ;
    g_seh_ebp = ebp; sub_00316F90(); return; /* tail jmp 0x00316F90 */

    g_seh_ebp = ebp; sub_00404CF0(); return; /* tail jmp 0x00404CF0 */

    g_seh_ebp = ebp; sub_003C60B0(); return; /* tail jmp 0x003C60B0 */

    g_seh_ebp = ebp; sub_0015DAE0(); return; /* tail jmp 0x0015DAE0 */

}

/**
 * sub_0002A66D
 * Original: 0x0002A66D - 0x0002A672 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A66D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A66D: ;
    g_seh_ebp = ebp; sub_0015DAE0(); return; /* tail jmp 0x0015DAE0 */

}

/**
 * sub_0002A672
 * Original: 0x0002A672 - 0x0002A690 (30 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A672(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A672: ;
    g_seh_ebp = ebp; sub_001751F0(); return; /* tail jmp 0x001751F0 */

    g_seh_ebp = ebp; sub_002F2F30(); return; /* tail jmp 0x002F2F30 */

    g_seh_ebp = ebp; sub_00199CD0(); return; /* tail jmp 0x00199CD0 */

    g_seh_ebp = ebp; sub_00191D60(); return; /* tail jmp 0x00191D60 */

    g_seh_ebp = ebp; sub_001111C0(); return; /* tail jmp 0x001111C0 */

    g_seh_ebp = ebp; sub_000B59E0(); return; /* tail jmp 0x000B59E0 */

}

/**
 * sub_0002A690
 * Original: 0x0002A690 - 0x0002A695 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A690: ;
    g_seh_ebp = ebp; sub_0035C860(); return; /* tail jmp 0x0035C860 */

}

/**
 * sub_0002A69A
 * Original: 0x0002A69A - 0x0002A69F (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A69A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A69A: ;
    g_seh_ebp = ebp; sub_0005DCC0(); return; /* tail jmp 0x0005DCC0 */

}

/**
 * sub_0002A69F
 * Original: 0x0002A69F - 0x0002A6A4 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A69F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A69F: ;
    g_seh_ebp = ebp; sub_00049870(); return; /* tail jmp 0x00049870 */

}

/**
 * sub_0002A6B8
 * Original: 0x0002A6B8 - 0x0002A6BD (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A6B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A6B8: ;
    g_seh_ebp = ebp; sub_00133100(); return; /* tail jmp 0x00133100 */

}

/**
 * sub_0002A6BD
 * Original: 0x0002A6BD - 0x0002A6C2 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A6BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A6BD: ;
    g_seh_ebp = ebp; sub_00101920(); return; /* tail jmp 0x00101920 */

}

/**
 * sub_0002A6C2
 * Original: 0x0002A6C2 - 0x0002A6C7 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A6C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A6C2: ;
    g_seh_ebp = ebp; sub_00374A50(); return; /* tail jmp 0x00374A50 */

}

/**
 * sub_0002A6CC
 * Original: 0x0002A6CC - 0x0002A6D1 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A6CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A6CC: ;
    g_seh_ebp = ebp; sub_003BE1D0(); return; /* tail jmp 0x003BE1D0 */

}

/**
 * sub_0002A6D1
 * Original: 0x0002A6D1 - 0x0002A6D6 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A6D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A6D1: ;
    g_seh_ebp = ebp; sub_00175CD0(); return; /* tail jmp 0x00175CD0 */

}

/**
 * sub_0002A6D6
 * Original: 0x0002A6D6 - 0x0002A6EA (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A6D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A6D6: ;
    g_seh_ebp = ebp; sub_00350A90(); return; /* tail jmp 0x00350A90 */

    g_seh_ebp = ebp; sub_002FD1F0(); return; /* tail jmp 0x002FD1F0 */

    g_seh_ebp = ebp; sub_0018C5A0(); return; /* tail jmp 0x0018C5A0 */

    g_seh_ebp = ebp; sub_003C60E0(); return; /* tail jmp 0x003C60E0 */

}

/**
 * sub_0002A6EA
 * Original: 0x0002A6EA - 0x0002A708 (30 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A6EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A6EA: ;
    g_seh_ebp = ebp; sub_00390350(); return; /* tail jmp 0x00390350 */

    g_seh_ebp = ebp; sub_001260C0(); return; /* tail jmp 0x001260C0 */

    g_seh_ebp = ebp; sub_0037B8E0(); return; /* tail jmp 0x0037B8E0 */

    g_seh_ebp = ebp; sub_001DACC0(); return; /* tail jmp 0x001DACC0 */

    g_seh_ebp = ebp; sub_00184C30(); return; /* tail jmp 0x00184C30 */

    g_seh_ebp = ebp; sub_003646A0(); return; /* tail jmp 0x003646A0 */

}

/**
 * sub_0002A6FE
 * Original: 0x0002A6FE - 0x0002A708 (10 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A6FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A6FE: ;
    g_seh_ebp = ebp; sub_00184C30(); return; /* tail jmp 0x00184C30 */

}

/**
 * sub_0002A708
 * Original: 0x0002A708 - 0x0002A717 (15 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A708(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A708: ;
    g_seh_ebp = ebp; sub_002988A0(); return; /* tail jmp 0x002988A0 */

    g_seh_ebp = ebp; sub_00228590(); return; /* tail jmp 0x00228590 */

    g_seh_ebp = ebp; sub_003D7A00(); return; /* tail jmp 0x003D7A00 */

}

/**
 * sub_0002A717
 * Original: 0x0002A717 - 0x0002A71C (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A717(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A717: ;
    g_seh_ebp = ebp; sub_00110110(); return; /* tail jmp 0x00110110 */

}

/**
 * sub_0002A71C
 * Original: 0x0002A71C - 0x0002A726 (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A71C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A71C: ;
    g_seh_ebp = ebp; sub_002CDA10(); return; /* tail jmp 0x002CDA10 */

    g_seh_ebp = ebp; sub_0007EC00(); return; /* tail jmp 0x0007EC00 */

}

/**
 * sub_0002A726
 * Original: 0x0002A726 - 0x0002A72B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A726(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A726: ;
    g_seh_ebp = ebp; sub_002F5D50(); return; /* tail jmp 0x002F5D50 */

}

/**
 * sub_0002A735
 * Original: 0x0002A735 - 0x0002A744 (15 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A735(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A735: ;
    g_seh_ebp = ebp; sub_00113B40(); return; /* tail jmp 0x00113B40 */

    g_seh_ebp = ebp; sub_000907D0(); return; /* tail jmp 0x000907D0 */

    g_seh_ebp = ebp; sub_0032F7E0(); return; /* tail jmp 0x0032F7E0 */

}

/**
 * sub_0002A744
 * Original: 0x0002A744 - 0x0002A749 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A744(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A744: ;
    g_seh_ebp = ebp; sub_00260840(); return; /* tail jmp 0x00260840 */

}

/**
 * sub_0002A753
 * Original: 0x0002A753 - 0x0002A767 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A753(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A753: ;
    g_seh_ebp = ebp; sub_00362DA0(); return; /* tail jmp 0x00362DA0 */

    g_seh_ebp = ebp; sub_00282420(); return; /* tail jmp 0x00282420 */

    g_seh_ebp = ebp; sub_0022B450(); return; /* tail jmp 0x0022B450 */

    g_seh_ebp = ebp; sub_002B9630(); return; /* tail jmp 0x002B9630 */

}

/**
 * sub_0002A767
 * Original: 0x0002A767 - 0x0002A76C (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A767(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A767: ;
    g_seh_ebp = ebp; sub_003EEDB0(); return; /* tail jmp 0x003EEDB0 */

}

/**
 * sub_0002A76C
 * Original: 0x0002A76C - 0x0002A771 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A76C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A76C: ;
    g_seh_ebp = ebp; sub_0004E0D0(); return; /* tail jmp 0x0004E0D0 */

}

/**
 * sub_0002A776
 * Original: 0x0002A776 - 0x0002A77B (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A776(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A776: ;
    g_seh_ebp = ebp; sub_0028FE40(); return; /* tail jmp 0x0028FE40 */

}

/**
 * sub_0002A77B
 * Original: 0x0002A77B - 0x0002A780 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A77B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A77B: ;
    g_seh_ebp = ebp; sub_003135E0(); return; /* tail jmp 0x003135E0 */

}

/**
 * sub_0002A780
 * Original: 0x0002A780 - 0x0002A785 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A780: ;
    g_seh_ebp = ebp; sub_00233990(); return; /* tail jmp 0x00233990 */

}

/**
 * sub_0002A785
 * Original: 0x0002A785 - 0x0002A78A (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A785(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A785: ;
    g_seh_ebp = ebp; sub_00229790(); return; /* tail jmp 0x00229790 */

}

/**
 * sub_0002A78A
 * Original: 0x0002A78A - 0x0002A78F (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A78A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A78A: ;
    g_seh_ebp = ebp; sub_003CAC00(); return; /* tail jmp 0x003CAC00 */

}

/**
 * sub_0002A78F
 * Original: 0x0002A78F - 0x0002A794 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A78F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A78F: ;
    g_seh_ebp = ebp; sub_00087860(); return; /* tail jmp 0x00087860 */

}

/**
 * sub_0002A794
 * Original: 0x0002A794 - 0x0002A799 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A794(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A794: ;
    g_seh_ebp = ebp; sub_0028EE20(); return; /* tail jmp 0x0028EE20 */

}

/**
 * sub_0002A799
 * Original: 0x0002A799 - 0x0002A79E (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A799(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A799: ;
    g_seh_ebp = ebp; sub_0024CF60(); return; /* tail jmp 0x0024CF60 */

}

/**
 * sub_0002A79E
 * Original: 0x0002A79E - 0x0002A7B2 (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A79E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A79E: ;
    g_seh_ebp = ebp; sub_0020FAC0(); return; /* tail jmp 0x0020FAC0 */

    g_seh_ebp = ebp; sub_001FD830(); return; /* tail jmp 0x001FD830 */

    g_seh_ebp = ebp; sub_0011FBF0(); return; /* tail jmp 0x0011FBF0 */

    g_seh_ebp = ebp; sub_00392CD0(); return; /* tail jmp 0x00392CD0 */

}

/**
 * sub_0002A7B2
 * Original: 0x0002A7B2 - 0x0002A7B7 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A7B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A7B2: ;
    g_seh_ebp = ebp; sub_0007CD50(); return; /* tail jmp 0x0007CD50 */

}

/**
 * sub_0002A7B7
 * Original: 0x0002A7B7 - 0x0002A7BC (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A7B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A7B7: ;
    g_seh_ebp = ebp; sub_003D6000(); return; /* tail jmp 0x003D6000 */

}

/**
 * sub_0002A7BC
 * Original: 0x0002A7BC - 0x0002A7C1 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A7BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A7BC: ;
    g_seh_ebp = ebp; sub_001FE360(); return; /* tail jmp 0x001FE360 */

}

/**
 * sub_0002A7C1
 * Original: 0x0002A7C1 - 0x0002A7C6 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A7C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A7C1: ;
    g_seh_ebp = ebp; sub_001342D0(); return; /* tail jmp 0x001342D0 */

}

/**
 * sub_0002A7C6
 * Original: 0x0002A7C6 - 0x0002A7CB (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A7C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A7C6: ;
    g_seh_ebp = ebp; sub_003151B0(); return; /* tail jmp 0x003151B0 */

}

/**
 * sub_0002A7CB
 * Original: 0x0002A7CB - 0x0002A7D5 (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A7CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A7CB: ;
    g_seh_ebp = ebp; sub_002FDB80(); return; /* tail jmp 0x002FDB80 */

    g_seh_ebp = ebp; sub_0032F7D0(); return; /* tail jmp 0x0032F7D0 */

}

/**
 * sub_0002A7D5
 * Original: 0x0002A7D5 - 0x0002A7DA (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A7D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A7D5: ;
    g_seh_ebp = ebp; sub_000D13D0(); return; /* tail jmp 0x000D13D0 */

}

/**
 * sub_0002A7DA
 * Original: 0x0002A7DA - 0x0002A7E9 (15 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A7DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A7DA: ;
    g_seh_ebp = ebp; sub_00215440(); return; /* tail jmp 0x00215440 */

    g_seh_ebp = ebp; sub_000A3190(); return; /* tail jmp 0x000A3190 */

    g_seh_ebp = ebp; sub_0042DE40(); return; /* tail jmp 0x0042DE40 */

}

/**
 * sub_0002A7E9
 * Original: 0x0002A7E9 - 0x0002A7EE (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A7E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A7E9: ;
    g_seh_ebp = ebp; sub_0019F5E0(); return; /* tail jmp 0x0019F5E0 */

}

/**
 * sub_0002A7EE
 * Original: 0x0002A7EE - 0x0002A7F3 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A7EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A7EE: ;
    g_seh_ebp = ebp; sub_00052300(); return; /* tail jmp 0x00052300 */

}

/**
 * sub_0002A7F3
 * Original: 0x0002A7F3 - 0x0002A7F8 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A7F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A7F3: ;
    g_seh_ebp = ebp; sub_00278660(); return; /* tail jmp 0x00278660 */

}

/**
 * sub_0002A7F8
 * Original: 0x0002A7F8 - 0x0002A802 (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A7F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A7F8: ;
    g_seh_ebp = ebp; sub_0020DA00(); return; /* tail jmp 0x0020DA00 */

    g_seh_ebp = ebp; sub_001CAC40(); return; /* tail jmp 0x001CAC40 */

}

/**
 * sub_0002A802
 * Original: 0x0002A802 - 0x0002A807 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A802(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A802: ;
    g_seh_ebp = ebp; sub_003DE810(); return; /* tail jmp 0x003DE810 */

}

/**
 * sub_0002A80C
 * Original: 0x0002A80C - 0x0002A816 (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A80C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A80C: ;
    g_seh_ebp = ebp; sub_00214930(); return; /* tail jmp 0x00214930 */

    g_seh_ebp = ebp; sub_00255900(); return; /* tail jmp 0x00255900 */

}

/**
 * sub_0002A816
 * Original: 0x0002A816 - 0x0002A81B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A816(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A816: ;
    g_seh_ebp = ebp; sub_0022B360(); return; /* tail jmp 0x0022B360 */

}

/**
 * sub_0002A82F
 * Original: 0x0002A82F - 0x0002A834 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A82F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A82F: ;
    g_seh_ebp = ebp; sub_003DBF70(); return; /* tail jmp 0x003DBF70 */

}

/**
 * sub_0002A834
 * Original: 0x0002A834 - 0x0002A839 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A834(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A834: ;
    g_seh_ebp = ebp; sub_0042B3C0(); return; /* tail jmp 0x0042B3C0 */

}

/**
 * sub_0002A843
 * Original: 0x0002A843 - 0x0002A848 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A843(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A843: ;
    g_seh_ebp = ebp; sub_00135460(); return; /* tail jmp 0x00135460 */

}

/**
 * sub_0002A84D
 * Original: 0x0002A84D - 0x0002A857 (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A84D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A84D: ;
    g_seh_ebp = ebp; sub_00113BC0(); return; /* tail jmp 0x00113BC0 */

    g_seh_ebp = ebp; sub_00399D00(); return; /* tail jmp 0x00399D00 */

}

/**
 * sub_0002A857
 * Original: 0x0002A857 - 0x0002A87F (40 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A857(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A857: ;
    g_seh_ebp = ebp; sub_00101950(); return; /* tail jmp 0x00101950 */

    g_seh_ebp = ebp; sub_000F6040(); return; /* tail jmp 0x000F6040 */

    g_seh_ebp = ebp; sub_0009A7E0(); return; /* tail jmp 0x0009A7E0 */

    g_seh_ebp = ebp; sub_00137290(); return; /* tail jmp 0x00137290 */

    g_seh_ebp = ebp; sub_001DB160(); return; /* tail jmp 0x001DB160 */

    g_seh_ebp = ebp; sub_00313160(); return; /* tail jmp 0x00313160 */

    g_seh_ebp = ebp; sub_003C44C0(); return; /* tail jmp 0x003C44C0 */

    g_seh_ebp = ebp; sub_0010FA80(); return; /* tail jmp 0x0010FA80 */

}

/**
 * sub_0002A85C
 * Original: 0x0002A85C - 0x0002A87F (35 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A85C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A85C: ;
    g_seh_ebp = ebp; sub_000F6040(); return; /* tail jmp 0x000F6040 */

}

/**
 * sub_0002A87F
 * Original: 0x0002A87F - 0x0002A884 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A87F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A87F: ;
    g_seh_ebp = ebp; sub_002E4F60(); return; /* tail jmp 0x002E4F60 */

}

/**
 * sub_0002A889
 * Original: 0x0002A889 - 0x0002A88E (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A889(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A889: ;
    g_seh_ebp = ebp; sub_00099640(); return; /* tail jmp 0x00099640 */

}

/**
 * sub_0002A88E
 * Original: 0x0002A88E - 0x0002A893 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A88E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A88E: ;
    g_seh_ebp = ebp; sub_003F6170(); return; /* tail jmp 0x003F6170 */

}

/**
 * sub_0002A893
 * Original: 0x0002A893 - 0x0002A8A7 (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A893(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A893: ;
    g_seh_ebp = ebp; sub_003475E0(); return; /* tail jmp 0x003475E0 */

    g_seh_ebp = ebp; sub_0038C630(); return; /* tail jmp 0x0038C630 */

    g_seh_ebp = ebp; sub_002FD2B0(); return; /* tail jmp 0x002FD2B0 */

    g_seh_ebp = ebp; sub_0032DC20(); return; /* tail jmp 0x0032DC20 */

}

/**
 * sub_0002A8A7
 * Original: 0x0002A8A7 - 0x0002A8AC (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A8A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A8A7: ;
    g_seh_ebp = ebp; sub_001C9B70(); return; /* tail jmp 0x001C9B70 */

}

/**
 * sub_0002A8BB
 * Original: 0x0002A8BB - 0x0002A8C0 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A8BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A8BB: ;
    g_seh_ebp = ebp; sub_003DC020(); return; /* tail jmp 0x003DC020 */

}

/**
 * sub_0002A8C0
 * Original: 0x0002A8C0 - 0x0002A8C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A8C0: ;
    g_seh_ebp = ebp; sub_003C4510(); return; /* tail jmp 0x003C4510 */

}

/**
 * sub_0002A8CA
 * Original: 0x0002A8CA - 0x0002A8E3 (25 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A8CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A8CA: ;
    g_seh_ebp = ebp; sub_00176100(); return; /* tail jmp 0x00176100 */

    g_seh_ebp = ebp; sub_0037B020(); return; /* tail jmp 0x0037B020 */

    g_seh_ebp = ebp; sub_0007A270(); return; /* tail jmp 0x0007A270 */

    g_seh_ebp = ebp; sub_002BA280(); return; /* tail jmp 0x002BA280 */

    g_seh_ebp = ebp; sub_000D1B20(); return; /* tail jmp 0x000D1B20 */

}

/**
 * sub_0002A8E3
 * Original: 0x0002A8E3 - 0x0002A8E8 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A8E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A8E3: ;
    g_seh_ebp = ebp; sub_00377050(); return; /* tail jmp 0x00377050 */

}

/**
 * sub_0002A8E8
 * Original: 0x0002A8E8 - 0x0002A8ED (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A8E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A8E8: ;
    g_seh_ebp = ebp; sub_002A79E0(); return; /* tail jmp 0x002A79E0 */

}

/**
 * sub_0002A8ED
 * Original: 0x0002A8ED - 0x0002A8F2 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A8ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A8ED: ;
    g_seh_ebp = ebp; sub_0013EE50(); return; /* tail jmp 0x0013EE50 */

}

/**
 * sub_0002A8F7
 * Original: 0x0002A8F7 - 0x0002A90B (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A8F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A8F7: ;
    g_seh_ebp = ebp; sub_00111700(); return; /* tail jmp 0x00111700 */

    g_seh_ebp = ebp; sub_0008B790(); return; /* tail jmp 0x0008B790 */

    g_seh_ebp = ebp; sub_002C7050(); return; /* tail jmp 0x002C7050 */

    g_seh_ebp = ebp; sub_001BBE80(); return; /* tail jmp 0x001BBE80 */

}

/**
 * sub_0002A906
 * Original: 0x0002A906 - 0x0002A90B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A906(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A906: ;
    g_seh_ebp = ebp; sub_001BBE80(); return; /* tail jmp 0x001BBE80 */

}

/**
 * sub_0002A90B
 * Original: 0x0002A90B - 0x0002A910 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A90B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A90B: ;
    g_seh_ebp = ebp; sub_000FEAD0(); return; /* tail jmp 0x000FEAD0 */

}

/**
 * sub_0002A910
 * Original: 0x0002A910 - 0x0002A915 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A910: ;
    g_seh_ebp = ebp; sub_00421D80(); return; /* tail jmp 0x00421D80 */

}

/**
 * sub_0002A915
 * Original: 0x0002A915 - 0x0002A91A (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A915(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A915: ;
    g_seh_ebp = ebp; sub_00355B90(); return; /* tail jmp 0x00355B90 */

}

/**
 * sub_0002A91A
 * Original: 0x0002A91A - 0x0002A91F (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A91A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A91A: ;
    g_seh_ebp = ebp; sub_0039AA40(); return; /* tail jmp 0x0039AA40 */

}

/**
 * sub_0002A91F
 * Original: 0x0002A91F - 0x0002A924 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A91F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A91F: ;
    g_seh_ebp = ebp; sub_00247780(); return; /* tail jmp 0x00247780 */

}

/**
 * sub_0002A929
 * Original: 0x0002A929 - 0x0002A92E (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A929(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A929: ;
    g_seh_ebp = ebp; sub_003BF7A0(); return; /* tail jmp 0x003BF7A0 */

}

/**
 * sub_0002A938
 * Original: 0x0002A938 - 0x0002A93D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A938(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A938: ;
    g_seh_ebp = ebp; sub_00244490(); return; /* tail jmp 0x00244490 */

}

/**
 * sub_0002A93D
 * Original: 0x0002A93D - 0x0002A942 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A93D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A93D: ;
    g_seh_ebp = ebp; sub_001483D0(); return; /* tail jmp 0x001483D0 */

}

/**
 * sub_0002A942
 * Original: 0x0002A942 - 0x0002A947 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A942(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A942: ;
    g_seh_ebp = ebp; sub_00058F40(); return; /* tail jmp 0x00058F40 */

}

/**
 * sub_0002A94C
 * Original: 0x0002A94C - 0x0002A951 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A94C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A94C: ;
    g_seh_ebp = ebp; sub_00367200(); return; /* tail jmp 0x00367200 */

}

/**
 * sub_0002A95B
 * Original: 0x0002A95B - 0x0002A960 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A95B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A95B: ;
    g_seh_ebp = ebp; sub_000EA670(); return; /* tail jmp 0x000EA670 */

}

/**
 * sub_0002A960
 * Original: 0x0002A960 - 0x0002A96A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A960: ;
    g_seh_ebp = ebp; sub_000CF890(); return; /* tail jmp 0x000CF890 */

    g_seh_ebp = ebp; sub_0018A3D0(); return; /* tail jmp 0x0018A3D0 */

}

/**
 * sub_0002A96A
 * Original: 0x0002A96A - 0x0002A96F (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A96A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A96A: ;
    g_seh_ebp = ebp; sub_003056A0(); return; /* tail jmp 0x003056A0 */

}

/**
 * sub_0002A96F
 * Original: 0x0002A96F - 0x0002A974 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A96F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A96F: ;
    g_seh_ebp = ebp; sub_003053D0(); return; /* tail jmp 0x003053D0 */

}

/**
 * sub_0002A974
 * Original: 0x0002A974 - 0x0002A979 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A974(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A974: ;
    g_seh_ebp = ebp; sub_0018CC50(); return; /* tail jmp 0x0018CC50 */

}

/**
 * sub_0002A988
 * Original: 0x0002A988 - 0x0002A992 (10 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A988(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A988: ;
    g_seh_ebp = ebp; sub_001595F0(); return; /* tail jmp 0x001595F0 */

}

/**
 * sub_0002A992
 * Original: 0x0002A992 - 0x0002A9A1 (15 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A992(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A992: ;
    g_seh_ebp = ebp; sub_00416CD0(); return; /* tail jmp 0x00416CD0 */

    g_seh_ebp = ebp; sub_00391CF0(); return; /* tail jmp 0x00391CF0 */

    g_seh_ebp = ebp; sub_0031B1C0(); return; /* tail jmp 0x0031B1C0 */

}

/**
 * sub_0002A9A1
 * Original: 0x0002A9A1 - 0x0002A9A6 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A9A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A9A1: ;
    g_seh_ebp = ebp; sub_002FD300(); return; /* tail jmp 0x002FD300 */

}

/**
 * sub_0002A9A6
 * Original: 0x0002A9A6 - 0x0002A9AB (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A9A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A9A6: ;
    g_seh_ebp = ebp; sub_001D1080(); return; /* tail jmp 0x001D1080 */

}

/**
 * sub_0002A9B0
 * Original: 0x0002A9B0 - 0x0002A9C4 (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A9B0: ;
    g_seh_ebp = ebp; sub_0036C040(); return; /* tail jmp 0x0036C040 */

    g_seh_ebp = ebp; sub_00320C20(); return; /* tail jmp 0x00320C20 */

    g_seh_ebp = ebp; sub_00393670(); return; /* tail jmp 0x00393670 */

    g_seh_ebp = ebp; sub_0022B400(); return; /* tail jmp 0x0022B400 */

}

/**
 * sub_0002A9C4
 * Original: 0x0002A9C4 - 0x0002A9C9 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A9C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A9C4: ;
    g_seh_ebp = ebp; sub_000670B0(); return; /* tail jmp 0x000670B0 */

}

/**
 * sub_0002A9C9
 * Original: 0x0002A9C9 - 0x0002A9CE (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A9C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A9C9: ;
    g_seh_ebp = ebp; sub_002B5200(); return; /* tail jmp 0x002B5200 */

}

/**
 * sub_0002A9CE
 * Original: 0x0002A9CE - 0x0002A9D3 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A9CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A9CE: ;
    g_seh_ebp = ebp; sub_00229500(); return; /* tail jmp 0x00229500 */

}

/**
 * sub_0002A9D3
 * Original: 0x0002A9D3 - 0x0002A9DD (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A9D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A9D3: ;
    g_seh_ebp = ebp; sub_00083AE0(); return; /* tail jmp 0x00083AE0 */

    g_seh_ebp = ebp; sub_0017D8A0(); return; /* tail jmp 0x0017D8A0 */

}

/**
 * sub_0002A9DD
 * Original: 0x0002A9DD - 0x0002A9E2 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A9DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A9DD: ;
    g_seh_ebp = ebp; sub_00418E40(); return; /* tail jmp 0x00418E40 */

}

/**
 * sub_0002AA0F
 * Original: 0x0002AA0F - 0x0002AA14 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AA0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AA0F: ;
    g_seh_ebp = ebp; sub_00253440(); return; /* tail jmp 0x00253440 */

}

/**
 * sub_0002AA14
 * Original: 0x0002AA14 - 0x0002AA19 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AA14(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AA14: ;
    g_seh_ebp = ebp; sub_0008B6F0(); return; /* tail jmp 0x0008B6F0 */

}

/**
 * sub_0002AA1E
 * Original: 0x0002AA1E - 0x0002AA23 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AA1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AA1E: ;
    g_seh_ebp = ebp; sub_0041EAF0(); return; /* tail jmp 0x0041EAF0 */

}

/**
 * sub_0002AA23
 * Original: 0x0002AA23 - 0x0002AA28 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AA23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AA23: ;
    g_seh_ebp = ebp; sub_003E78A0(); return; /* tail jmp 0x003E78A0 */

}

/**
 * sub_0002AA28
 * Original: 0x0002AA28 - 0x0002AA2D (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AA28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AA28: ;
    g_seh_ebp = ebp; sub_00363070(); return; /* tail jmp 0x00363070 */

}

/**
 * sub_0002AA2D
 * Original: 0x0002AA2D - 0x0002AA32 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AA2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AA2D: ;
    g_seh_ebp = ebp; sub_0035E860(); return; /* tail jmp 0x0035E860 */

}

/**
 * sub_0002AA37
 * Original: 0x0002AA37 - 0x0002AA3C (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AA37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AA37: ;
    g_seh_ebp = ebp; sub_0010AE10(); return; /* tail jmp 0x0010AE10 */

}

/**
 * sub_0002AA3C
 * Original: 0x0002AA3C - 0x0002AA41 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AA3C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AA3C: ;
    g_seh_ebp = ebp; sub_002616F0(); return; /* tail jmp 0x002616F0 */

}

/**
 * sub_0002AA41
 * Original: 0x0002AA41 - 0x0002AA46 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AA41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AA41: ;
    g_seh_ebp = ebp; sub_00420CF0(); return; /* tail jmp 0x00420CF0 */

}

/**
 * sub_0002AA46
 * Original: 0x0002AA46 - 0x0002AA4B (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AA46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AA46: ;
    g_seh_ebp = ebp; sub_003BE240(); return; /* tail jmp 0x003BE240 */

}
