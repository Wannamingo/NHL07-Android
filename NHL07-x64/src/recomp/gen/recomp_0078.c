/**
 * nhl_07_recomp - Recompiled code chunk 78
 * Functions: 250 (0x000684F0 - 0x0006F130)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000684F0
 * Original: 0x000684F0 - 0x0006850A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000684F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000684F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000684F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000684F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068507; /* je: equal / zero */

loc_00068500: ;
    MEM32(eax) = 0x7B14F8;
    esp += 4; return; /* ret */

loc_00068507: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068510
 * Original: 0x00068510 - 0x0006852A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068510: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068519u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068519: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068527; /* je: equal / zero */

loc_00068520: ;
    MEM32(eax) = 0x7B151C;
    esp += 4; return; /* ret */

loc_00068527: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068530
 * Original: 0x00068530 - 0x0006854A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068530: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068539u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068539: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068547; /* je: equal / zero */

loc_00068540: ;
    MEM32(eax) = 0x7B1540;
    esp += 4; return; /* ret */

loc_00068547: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068550
 * Original: 0x00068550 - 0x0006856A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068550: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068559u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068559: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068567; /* je: equal / zero */

loc_00068560: ;
    MEM32(eax) = 0x7B1564;
    esp += 4; return; /* ret */

loc_00068567: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068570
 * Original: 0x00068570 - 0x0006858A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068570: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068579u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068579: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068587; /* je: equal / zero */

loc_00068580: ;
    MEM32(eax) = 0x7B1588;
    esp += 4; return; /* ret */

loc_00068587: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068590
 * Original: 0x00068590 - 0x000685AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068590: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068599u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068599: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000685A7; /* je: equal / zero */

loc_000685A0: ;
    MEM32(eax) = 0x7B15AC;
    esp += 4; return; /* ret */

loc_000685A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000685B0
 * Original: 0x000685B0 - 0x000685CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000685B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000685B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000685B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000685B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000685C7; /* je: equal / zero */

loc_000685C0: ;
    MEM32(eax) = 0x7B15D4;
    esp += 4; return; /* ret */

loc_000685C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000685D0
 * Original: 0x000685D0 - 0x000685EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000685D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000685D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000685D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000685D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000685E7; /* je: equal / zero */

loc_000685E0: ;
    MEM32(eax) = 0x7B15F8;
    esp += 4; return; /* ret */

loc_000685E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000685F0
 * Original: 0x000685F0 - 0x0006860A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000685F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000685F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000685F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000685F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068607; /* je: equal / zero */

loc_00068600: ;
    MEM32(eax) = 0x7B161C;
    esp += 4; return; /* ret */

loc_00068607: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068610
 * Original: 0x00068610 - 0x0006862A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068610: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068619u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068619: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068627; /* je: equal / zero */

loc_00068620: ;
    MEM32(eax) = 0x7B1640;
    esp += 4; return; /* ret */

loc_00068627: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068630
 * Original: 0x00068630 - 0x0006864A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068630: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068639u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068639: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068647; /* je: equal / zero */

loc_00068640: ;
    MEM32(eax) = 0x7B1664;
    esp += 4; return; /* ret */

loc_00068647: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068650
 * Original: 0x00068650 - 0x0006866A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068650: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068659u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068659: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068667; /* je: equal / zero */

loc_00068660: ;
    MEM32(eax) = 0x7B1688;
    esp += 4; return; /* ret */

loc_00068667: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068670
 * Original: 0x00068670 - 0x0006868A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068670: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068679u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068679: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068687; /* je: equal / zero */

loc_00068680: ;
    MEM32(eax) = 0x7B16AC;
    esp += 4; return; /* ret */

loc_00068687: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068690
 * Original: 0x00068690 - 0x000686AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068690: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068699u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068699: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000686A7; /* je: equal / zero */

loc_000686A0: ;
    MEM32(eax) = 0x7B16D0;
    esp += 4; return; /* ret */

loc_000686A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000686B0
 * Original: 0x000686B0 - 0x000686CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000686B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000686B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000686B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000686B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000686C7; /* je: equal / zero */

loc_000686C0: ;
    MEM32(eax) = 0x7B16F4;
    esp += 4; return; /* ret */

loc_000686C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000686D0
 * Original: 0x000686D0 - 0x000686EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000686D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000686D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000686D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000686D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000686E7; /* je: equal / zero */

loc_000686E0: ;
    MEM32(eax) = 0x7B1714;
    esp += 4; return; /* ret */

loc_000686E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000686F0
 * Original: 0x000686F0 - 0x0006870A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000686F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000686F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000686F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000686F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068707; /* je: equal / zero */

loc_00068700: ;
    MEM32(eax) = 0x7B1734;
    esp += 4; return; /* ret */

loc_00068707: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068710
 * Original: 0x00068710 - 0x0006872A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068710: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068719u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068719: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068727; /* je: equal / zero */

loc_00068720: ;
    MEM32(eax) = 0x7B1758;
    esp += 4; return; /* ret */

loc_00068727: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068730
 * Original: 0x00068730 - 0x0006874A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068730: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068739u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068739: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068747; /* je: equal / zero */

loc_00068740: ;
    MEM32(eax) = 0x7B177C;
    esp += 4; return; /* ret */

loc_00068747: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068750
 * Original: 0x00068750 - 0x0006876A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068750: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068759u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068759: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068767; /* je: equal / zero */

loc_00068760: ;
    MEM32(eax) = 0x7B179C;
    esp += 4; return; /* ret */

loc_00068767: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068770
 * Original: 0x00068770 - 0x0006878A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068770: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068779u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068779: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068787; /* je: equal / zero */

loc_00068780: ;
    MEM32(eax) = 0x7B17BC;
    esp += 4; return; /* ret */

loc_00068787: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068790
 * Original: 0x00068790 - 0x000687AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068790: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068799u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068799: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000687A7; /* je: equal / zero */

loc_000687A0: ;
    MEM32(eax) = 0x7B17DC;
    esp += 4; return; /* ret */

loc_000687A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000687B0
 * Original: 0x000687B0 - 0x000687C0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000687B0(void)
{

loc_000687B0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000687D0
 * Original: 0x000687D0 - 0x000687DA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000687D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000687D0: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000687E0
 * Original: 0x000687E0 - 0x00068809 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000687E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000687E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068801; /* je: equal / zero */

loc_000687FA: ;
    MEM32(edx) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_00068801: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068820
 * Original: 0x00068820 - 0x00068885 (101 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068820: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068851; /* jne: not equal / not zero */

loc_00068828: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068849; /* je: equal / zero */

loc_00068842: ;
    MEM32(edx) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

loc_00068849: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

loc_00068851: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    edx = MEM32(esp + 4);
    MEM32(edx + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00068870; /* jne: not equal / not zero */

loc_0006885D: ;
    MEM32(edx) = 0;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = edx;
    MEM32(ecx) = eax;
    esp += 12; return; /* ret 8 */

loc_00068870: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(edx) = esi;
    esi = MEM32(eax);
    MEM32(esi + 4) = edx;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000688A0
 * Original: 0x000688A0 - 0x000688DF (63 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000688A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000688A0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000688C0; /* jl: less (signed <) */

loc_000688A8: ;
    ecx = eax;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000688DC; /* je: equal / zero */

loc_000688B2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000688DC; /* jle: less or equal (signed <=) */

loc_000688B6: ;
    eax = MEM32(eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000688B2; /* jne: not equal / not zero */

loc_000688BD: ;
    esp += 12; return; /* ret 8 */

loc_000688C0: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = eax;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000688DC; /* je: equal / zero */

loc_000688CC: ;
    /* nop */

loc_000688D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000688DC; /* jle: less or equal (signed <=) */

loc_000688D4: ;
    eax = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000688D0; /* jne: not equal / not zero */

loc_000688DC: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000688F0
 * Original: 0x000688F0 - 0x00068919 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000688F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000688F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 0;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    MEM32(ecx + 4) = eax;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068911; /* je: equal / zero */

loc_00068909: ;
    MEM32(edx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_00068911: ;
    MEM32(ecx + 8) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068930
 * Original: 0x00068930 - 0x0006893D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068930: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00068940
 * Original: 0x00068940 - 0x00068994 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068940: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068992; /* je: equal / zero */

loc_0006894A: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068957; /* je: equal / zero */

loc_00068951: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    goto loc_0006895C;

loc_00068957: ;
    ecx = MEM32(eax);
    MEM32(esi + 4) = ecx;

loc_0006895C: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006896A; /* je: equal / zero */

loc_00068962: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00068970;

loc_0006896A: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 8) = ecx;

loc_00068970: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    ecx = MEM32(esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(esi) = ecx;
    PUSH32(esp, 0x00068988u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00068988: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006894A; /* jne: not equal / not zero */

loc_00068992: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000689B0
 * Original: 0x000689B0 - 0x000689CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000689B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000689B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000689B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000689B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000689C7; /* je: equal / zero */

loc_000689C0: ;
    MEM32(eax) = 0x7B17FC;
    esp += 4; return; /* ret */

loc_000689C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000689D0
 * Original: 0x000689D0 - 0x000689F2 (34 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000689D0(void)
{

loc_000689D0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00068A00
 * Original: 0x00068A00 - 0x00068B1D (285 bytes, 126 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068A00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_00068A33; /* jge: greater or equal (signed >=) */

loc_00068A1C: ;
    eax = MEM32(esp + 0x20);
    MEM8(eax) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00068A2F: ;
    ebx = MEM32(esp + 0x14);

loc_00068A33: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ebp)) >> ((((1) & 31u)) - 1)) & 1);
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi;
    if ((_fas < 0)) goto loc_00068A5D; /* js: sign (negative) */

loc_00068A48: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00068A6F; /* je: equal / zero */

loc_00068A4C: ;
    /* nop */

loc_00068A50: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00068A6F; /* jle: less or equal (signed <=) */

loc_00068A54: ;
    esi = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00068A50; /* jne: not equal / not zero */

loc_00068A5B: ;
    goto loc_00068A6F;

loc_00068A5D: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00068A6F; /* je: equal / zero */

loc_00068A63: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00068A6F; /* jle: less or equal (signed <=) */

loc_00068A67: ;
    esi = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00068A63; /* jne: not equal / not zero */

loc_00068A6F: ;
    edi = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00068AE0; /* je: equal / zero */

loc_00068A75: ;
    edx = MEM32(esp + 0x1C);
    esi = MEM32(edx);
    edx = MEM32(edi + 8);
    edi = edi;

loc_00068A80: ;
    SET_LO8(eax, MEM8(edx));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00068AA4; /* jne: not equal / not zero */

loc_00068A88: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00068AA0; /* je: equal / zero */

loc_00068A8C: ;
    SET_LO8(eax, MEM8(edx + 1));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00068AA4; /* jne: not equal / not zero */

loc_00068A96: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00068A80; /* jne: not equal / not zero */

loc_00068AA0: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00068AA9;

loc_00068AA4: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00068AA9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0x24);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00068B0A; /* je: equal / zero */

loc_00068AB3: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00068ABE; /* jge: greater or equal (signed >=) */

loc_00068AB5: ;
    edx = ebp + 1;
    MEM32(esp + 0x10) = edx;
    goto loc_00068AC1;

loc_00068ABE: ;
    ecx = ebp + -1;

loc_00068AC1: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_00068A2F; /* jle: less or equal (signed <=) */

loc_00068ACD: ;
    eax = MEM32(esp + 0x20);
    MEM8(eax) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00068AE0: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM8(eax) = 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00068AFD; /* jge: greater or equal (signed >=) */

loc_00068AF0: ;
    eax = MEM32(ebx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00068AFD: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00068B0A: ;
    edx = MEM32(esp + 0x20);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00068B70
 * Original: 0x00068B70 - 0x00068B9E (46 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068B70: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068B98; /* je: equal / zero */

loc_00068B76: ;
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00068B89u); RECOMP_ABI_CALL(0x000357DEu, sub_000357DE); /* call 0x000357DE */

loc_00068B89: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068B98; /* je: equal / zero */

loc_00068B91: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00068B98: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068BB0
 * Original: 0x00068BB0 - 0x00068C13 (99 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068BB0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068BE2; /* jne: not equal / not zero */

loc_00068BBB: ;
    eax = MEM32(esp + 8);
    MEM32(eax + 4) = esi;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    MEM32(ecx + 4) = eax;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068BD9; /* je: equal / zero */

loc_00068BD0: ;
    MEM32(edx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00068BD9: ;
    MEM32(ecx + 8) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00068BE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00068BFF; /* jne: not equal / not zero */

loc_00068BED: ;
    MEM32(edx + 4) = esi;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00068BFF: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(eax + 4);
    MEM32(esi) = edx;
    MEM32(eax + 4) = edx;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00068C30
 * Original: 0x00068C30 - 0x00068C3D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068C30: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00068C40
 * Original: 0x00068C40 - 0x00068C48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068C40: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002CF17(); return; /* tail jmp 0x0002CF17 */

}

/**
 * sub_00068C50
 * Original: 0x00068C50 - 0x00068CB4 (100 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068C50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00068C80; /* je: equal / zero */

loc_00068C63: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00068C73u); RECOMP_ABI_CALL(0x000357DEu, sub_000357DE); /* call 0x000357DE */

loc_00068C73: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068C80; /* je: equal / zero */

loc_00068C7B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_00068CAC; /* jne: not equal / not zero */

loc_00068C80: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068CA4; /* je: equal / zero */

loc_00068C85: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00068C97u); RECOMP_ABI_CALL(0x000357DEu, sub_000357DE); /* call 0x000357DE */

loc_00068C97: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068CA4; /* je: equal / zero */

loc_00068C9F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_00068CAC; /* jne: not equal / not zero */

loc_00068CA4: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00068CAC: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068CD0
 * Original: 0x00068CD0 - 0x00068D4A (122 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068CD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068D06; /* jne: not equal / not zero */

loc_00068CD9: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    MEM32(esi + 8) = eax;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068CFC; /* je: equal / zero */

loc_00068CF3: ;
    MEM32(ecx) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00068CFC: ;
    MEM32(esi + 4) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00068D06: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00068D20u); RECOMP_ABI_CALL(0x000357DEu, sub_000357DE); /* call 0x000357DE */

loc_00068D20: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068D44; /* jne: not equal / not zero */

loc_00068D28: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_00068D3F; /* jge: greater or equal (signed >=) */

loc_00068D34: ;
    PUSH32(esp, 0x00068D39u); RECOMP_ABI_CALL(0x0002E902u, sub_0002E902); /* call 0x0002E902 */

loc_00068D39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00068D3F: ;
    PUSH32(esp, 0x00068D44u); RECOMP_ABI_CALL(0x00015F1Au, sub_00015F1A); /* call 0x00015F1A */

loc_00068D44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068D70
 * Original: 0x00068D70 - 0x00068D86 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068D70: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00068D90
 * Original: 0x00068D90 - 0x00068D98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068D90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002CF17(); return; /* tail jmp 0x0002CF17 */

}

/**
 * sub_00068DA0
 * Original: 0x00068DA0 - 0x00068DCB (43 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068DA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi + 8;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00068DB1u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_00068DB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068DC4; /* je: equal / zero */

loc_00068DB5: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00068DBDu); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_00068DBD: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00068DC4: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068DE0
 * Original: 0x00068DE0 - 0x00068DF6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068DE0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00068E00
 * Original: 0x00068E00 - 0x00068E49 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068E00: ;
    eax = MEM32(0x8E8E94);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068E47; /* jne: not equal / not zero */

loc_00068E0C: ;
    PUSH32(esp, 0x8E8E78);
    PUSH32(esp, 0x18);
    MEM32(0x8E8E94) = 0x8E8E78;
    PUSH32(esp, 0x00068E22u); RECOMP_ABI_CALL(0x000368C8u, sub_000368C8); /* call 0x000368C8 */

loc_00068E22: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068E41; /* je: equal / zero */

loc_00068E29: ;
    MEM32(eax) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(0x8E8E94) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00068E41: ;
    MEM32(0x8E8E94) = esi;

loc_00068E47: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00068E60
 * Original: 0x00068E60 - 0x00068E74 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068E60: ;
    eax = MEM32(0x8E8E94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068E73; /* jne: not equal / not zero */

loc_00068E69: ;
    PUSH32(esp, 0x00068E6Eu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_00068E6E: ;
    eax = MEM32(0x8E8E94);

loc_00068E73: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068E80
 * Original: 0x00068E80 - 0x00068EB3 (51 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068E80(void)
{

loc_00068E80: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00068EC0
 * Original: 0x00068EC0 - 0x00068ED9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00068EC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00068EC0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(esp + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = MEM32(esp + 0xC);
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00068EE0
 * Original: 0x00068EE0 - 0x00068EFE (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00068EE0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00068EF9; /* jnp: not parity */

loc_00068EF1: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00068EF9: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068F10
 * Original: 0x00068F10 - 0x00068F4D (61 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068F10(void)
{

loc_00068F10: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 8); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00068F60
 * Original: 0x00068F60 - 0x00068F64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068F60(void)
{

loc_00068F60: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00068F70
 * Original: 0x00068F70 - 0x00068F74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068F70(void)
{

loc_00068F70: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00068F80
 * Original: 0x00068F80 - 0x00068F83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068F80(void)
{

loc_00068F80: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00068F90
 * Original: 0x00068F90 - 0x00068F94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068F90(void)
{

loc_00068F90: ;
    eax = MEM32(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_00068FA0
 * Original: 0x00068FA0 - 0x00068FA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068FA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00068FA0: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00068FB0
 * Original: 0x00068FB0 - 0x00068FB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068FB0(void)
{

loc_00068FB0: ;
    eax = MEM32(ecx + 0x21C);
    esp += 4; return; /* ret */

}

/**
 * sub_00068FC0
 * Original: 0x00068FC0 - 0x00068FC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068FC0(void)
{

loc_00068FC0: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_00068FD0
 * Original: 0x00068FD0 - 0x00068FEE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068FD0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 1;
    MEM8(eax + 0x10) = LO8(ecx);
    MEM8(eax + 0x11) = LO8(ecx);
    MEM32(eax) = 0x7B1D88;
    esp += 4; return; /* ret */

}

/**
 * sub_00069000
 * Original: 0x00069000 - 0x00069004 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069000(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00069000: ;
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00069010
 * Original: 0x00069010 - 0x00069033 (35 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069010: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00069018u); RECOMP_ABI_CALL(0x00029E25u, sub_00029E25); /* call 0x00029E25 */

loc_00069018: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006902D; /* je: equal / zero */

loc_0006901F: ;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0006902Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006902Au); } /* indirect call */
    }

loc_0006902D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069040
 * Original: 0x00069040 - 0x0006904B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069040(void)
{

loc_00069040: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00069050
 * Original: 0x00069050 - 0x0006905E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069050: ;
    edx = MEM32(ecx + 0x98);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00069070
 * Original: 0x00069070 - 0x0006909A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00069070(void)
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

loc_00069070: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00069082u); RECOMP_ABI_CALL(0x0002335Eu, sub_0002335E); /* call 0x0002335E */

loc_00069082: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000690B0
 * Original: 0x000690B0 - 0x000690B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000690B0(void)
{

loc_000690B0: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_000690C0
 * Original: 0x000690C0 - 0x0006913F (127 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000690C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000690C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x48); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00069120; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006911A: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_00069120: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00069160
 * Original: 0x00069160 - 0x00069168 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069160: ;
    ecx = MEM32(ecx + 0x50);
    g_seh_ebp = ebp; sub_0001A6B9(); return; /* tail jmp 0x0001A6B9 */

}

/**
 * sub_00069170
 * Original: 0x00069170 - 0x00069178 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069170: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x40)); return; /* indirect tail jmp */

}

/**
 * sub_00069180
 * Original: 0x00069180 - 0x0006918B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069180(void)
{

loc_00069180: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00069190
 * Original: 0x00069190 - 0x0006919A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069190(void)
{

loc_00069190: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000691A0
 * Original: 0x000691A0 - 0x000691AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000691A0(void)
{

loc_000691A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000691B0
 * Original: 0x000691B0 - 0x000691BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000691B0(void)
{

loc_000691B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000691C0
 * Original: 0x000691C0 - 0x000691CC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000691C0(void)
{

loc_000691C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x14) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000691D0
 * Original: 0x000691D0 - 0x000691DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000691D0(void)
{

loc_000691D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000691E0
 * Original: 0x000691E0 - 0x000691EE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000691E0(void)
{

loc_000691E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069200
 * Original: 0x00069200 - 0x0006920E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069200(void)
{

loc_00069200: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069220
 * Original: 0x00069220 - 0x0006922A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069220(void)
{

loc_00069220: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069230
 * Original: 0x00069230 - 0x00069233 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069230(void)
{

loc_00069230: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00069240
 * Original: 0x00069240 - 0x00069267 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069240(void)
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

loc_00069240: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0006924Du); RECOMP_ABI_CALL(0x00023557u, sub_00023557); /* call 0x00023557 */

loc_0006924D: ;
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0xC) - fp_top()); /* fsubr dword ptr [esi + 0xc] */
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00069262; /* jbe: below or equal (unsigned <=) */

loc_0006925D: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00069262: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00069270
 * Original: 0x00069270 - 0x000692DC (108 bytes, 33 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069270: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM8(esi + 0x3C) = LO8(eax);
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x28) = edx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x24) = 5;
    edx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000692D0u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000692D0: ;
    MEM32(esi + 0x40) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00069300
 * Original: 0x00069300 - 0x00069304 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069300(void)
{

loc_00069300: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00069310
 * Original: 0x00069310 - 0x00069314 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069310(void)
{

loc_00069310: ;
    eax = MEM32(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_00069320
 * Original: 0x00069320 - 0x00069324 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069320(void)
{

loc_00069320: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_00069330
 * Original: 0x00069330 - 0x00069334 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069330(void)
{

loc_00069330: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_00069340
 * Original: 0x00069340 - 0x0006934A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069340(void)
{

loc_00069340: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069350
 * Original: 0x00069350 - 0x0006935A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069350(void)
{

loc_00069350: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069360
 * Original: 0x00069360 - 0x0006936A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069360(void)
{

loc_00069360: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069370
 * Original: 0x00069370 - 0x0006938D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00069370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069370: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069388; /* jne: not equal / not zero */

loc_00069379: ;
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069388; /* je: equal / zero */

loc_00069380: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00069388: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000693A0
 * Original: 0x000693A0 - 0x000693A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000693A0(void)
{

loc_000693A0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_000693B0
 * Original: 0x000693B0 - 0x000693B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000693B0(void)
{

loc_000693B0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_000693C0
 * Original: 0x000693C0 - 0x000693D4 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000693C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000693C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000693CDu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_000693CD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000693E0
 * Original: 0x000693E0 - 0x000693E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000693E0(void)
{

loc_000693E0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000693F0
 * Original: 0x000693F0 - 0x000693F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000693F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000693F0: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00069400
 * Original: 0x00069400 - 0x00069404 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069400(void)
{

loc_00069400: ;
    eax = MEM32(ecx + 0x78);
    esp += 4; return; /* ret */

}

/**
 * sub_00069410
 * Original: 0x00069410 - 0x00069417 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069410(void)
{

loc_00069410: ;
    SET_LO8(eax, MEM8(ecx + 0x80));
    esp += 4; return; /* ret */

}

/**
 * sub_00069420
 * Original: 0x00069420 - 0x0006942B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069420(void)
{

loc_00069420: ;
    eax = MEM32(ecx + 0x14);
    eax = eax + eax * 2;
    SET_LO8(eax, MEM8(ecx + eax * 4 + 0x20));
    esp += 4; return; /* ret */

}

/**
 * sub_00069430
 * Original: 0x00069430 - 0x0006943B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069430(void)
{

loc_00069430: ;
    eax = MEM32(ecx + 0x14);
    eax = eax + eax * 2;
    SET_LO8(eax, MEM8(ecx + eax * 4 + 0x22));
    esp += 4; return; /* ret */

}

/**
 * sub_00069440
 * Original: 0x00069440 - 0x0006944B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069440(void)
{

loc_00069440: ;
    eax = MEM32(ecx + 0x14);
    eax = eax + eax * 2;
    SET_LO8(eax, MEM8(ecx + eax * 4 + 0x1F));
    esp += 4; return; /* ret */

}

/**
 * sub_00069450
 * Original: 0x00069450 - 0x0006945E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069450(void)
{

loc_00069450: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x30) = 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069470
 * Original: 0x00069470 - 0x0006947E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069470(void)
{

loc_00069470: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x30) = 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069490
 * Original: 0x00069490 - 0x00069504 (116 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069490(void)
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

loc_00069490: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x20);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = 0x8B21B8;
    PUSH32(esp, 0x000694BDu); RECOMP_ABI_CALL(0x00013B2Fu, sub_00013B2F); /* call 0x00013B2F */

loc_000694BD: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000694C9u); RECOMP_ABI_CALL(0x0001604Bu, sub_0001604B); /* call 0x0001604B */

loc_000694C9: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 1);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = 0x8B21B8;
    PUSH32(esp, 0x000694DEu); RECOMP_ABI_CALL(0x000142CDu, sub_000142CD); /* call 0x000142CD */

loc_000694DE: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x1002C);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x000694FAu); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_000694FA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00069530
 * Original: 0x00069530 - 0x0006953E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069530(void)
{

loc_00069530: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x30) = 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069550
 * Original: 0x00069550 - 0x0006955E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069550(void)
{

loc_00069550: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x30) = 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069570
 * Original: 0x00069570 - 0x0006960E (158 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00069570: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x18);
    ecx = MEM32(esi + 0x50);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00069582u); RECOMP_ABI_CALL(0x0001A6B9u, sub_0001A6B9); /* call 0x0001A6B9 */

loc_00069582: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006958E; /* je: equal / zero */

loc_00069586: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006958E: ;
    ecx = MEM32(esp + 0x24);
    ecx = MEM32(ecx + 0x18);
    PUSH32(esp, 0x40400000);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000695A4u); RECOMP_ABI_CALL(0x00022922u, sub_00022922); /* call 0x00022922 */

loc_000695A4: ;
    PUSH32(esp, 0x40400000);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000695B5u); RECOMP_ABI_CALL(0x00022922u, sub_00022922); /* call 0x00022922 */

loc_000695B5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = MEMF(0x7B1D98); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00069606; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(0x7B1D98)) */

loc_000695E8: ;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x24), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069604; /* je: equal / zero */

loc_000695EE: ;
    eax = esp + 8;
    PUSH32(esp, 0x44100000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000695FDu); RECOMP_ABI_CALL(0x00017E0Au, sub_00017E0A); /* call 0x00017E0A */

loc_000695FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069606; /* je: equal / zero */

loc_00069604: ;
    SET_LO8(ebx, 1);

loc_00069606: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00069640
 * Original: 0x00069640 - 0x00069675 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00069640: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1C34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00069657; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B1C34)) */

loc_00069651: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_00069657: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1C30); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00069666; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B1C30)) */

loc_00069660: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00069666: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1C2C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00069674; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B1C2C)) */

loc_0006966F: ;
    eax = 1;

loc_00069674: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00069660
 * Original: 0x00069660 - 0x00069675 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069660(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00069660: ;
    eax = 2;
    esp += 4; return; /* ret */

    eax = 1;

loc_00069674: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00069690
 * Original: 0x00069690 - 0x000696A5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069690(void)
{

loc_00069690: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000696B0
 * Original: 0x000696B0 - 0x000696B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000696B0(void)
{

loc_000696B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000696C0
 * Original: 0x000696C0 - 0x000696EC (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000696C0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000696C0: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1C34); /* comiss */
    if ((_fca > _fcb)) goto loc_000696E3; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7B1C34)) */

loc_000696C9: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1C30); /* comiss */
    if ((_fca > _fcb)) goto loc_000696E3; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7B1C30)) */

loc_000696D2: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1C2C); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7B1C38)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000696EB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B1C2C)) */

loc_000696E3: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B1C3C)); /* movss */

loc_000696EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00069700
 * Original: 0x00069700 - 0x00069AFF (1023 bytes, 231 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00069700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00069700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x18);
    ecx = MEM32(esi + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    MEM32(esp + 0x44) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00069733; /* jl: less (signed <) */

loc_0006972A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00069AF8; /* jle: less or equal (signed <=) */

loc_00069733: ;
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AB82C)); /* movss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0xA4) = ebx;
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0xAC) = 1;
    MEM8(esp + 0xB0) = LO8(ebx);
    MEM8(esp + 0xB1) = LO8(ebx);
    ecx = 0x7B1D88;
    MEM32(esp + 0xA0) = ecx;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000697C7; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm1.f[0]) */

loc_000697C1: ;
    MEMF(esp + 0x30) = xmm6.f[0]; /* movss */

loc_000697C7: ;
    eax = MEM32(esp + 0x2C);
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0x30);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0x34);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEM32(esp + 0x40) = eax;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x7B1C34)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7B1C30)); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0xC0) = eax;
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0xC4) = eax;
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0xC8) = eax;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0xCC) = eax;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0xD0) = eax;
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0xD4) = eax;
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0xD8) = eax;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0xDC) = eax;
    eax = MEM32(edi + 0x20);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000698B4; /* ja: above (unsigned >) (xmm2.f[0] vs xmm5.f[0]) */

loc_0006989E: ;
    _fca = xmm2.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000698B4; /* ja: above (unsigned >) (xmm2.f[0] vs xmm7.f[0]) */

loc_000698A3: ;
    _fca = xmm2.f[0]; _fcb = MEMF(0x7B1C2C); /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x7B1C38)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000698BC; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(0x7B1C2C)) */

loc_000698B4: ;
    xmm2 = XMM_SCALAR(MEMF(0x7B1C3C)); /* movss */

loc_000698BC: ;
    eax = MEM32(edx + 0x20);
    MEMF(esp + 0xE0) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x5C) = 1;
    MEM8(esp + 0x60) = LO8(ebx);
    MEM8(esp + 0x61) = LO8(ebx);
    MEM32(esp + 0x50) = ecx;
    xmm2 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00069937; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_00069931: ;
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */

loc_00069937: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    edx = MEM32(edx + 0x20);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp + 0x30) = eax;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(esp + 0x34) = ecx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x74) = ecx;
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x7C) = ecx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x84) = ecx;
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x88) = eax;
    MEM32(esp + 0x8C) = ecx;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00069A00; /* ja: above (unsigned >) (xmm0.f[0] vs xmm5.f[0]) */

loc_000699EA: ;
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00069A00; /* ja: above (unsigned >) (xmm0.f[0] vs xmm7.f[0]) */

loc_000699EF: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1C2C); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7B1C38)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00069A08; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B1C2C)) */

loc_00069A00: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B1C3C)); /* movss */

loc_00069A08: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    eax = esp + 0xAC;
    PUSH32(esp, eax);
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00069A2Du); RECOMP_ABI_CALL(0x00015F4Cu, sub_00015F4C); /* call 0x00015F4C */

loc_00069A2D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esp + 0x2B) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00069ADF; /* je: equal / zero */

loc_00069A3C: ;
    xmm3 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x3C); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x40); /* addss */
    ebx = esi;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(ebx) = eax;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(ebx + 4) = ecx;
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(ebx + 8) = edx;
    ebx = MEM32(ebp + 8);
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = edx;
    ecx = MEM32(edi + 0x20);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 0x44);
    MEM32(esi + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 8) = ecx;
    eax = MEM32(edx + 0x20);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    ecx = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;

loc_00069ADF: ;
    ecx = esp + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00069AE8u); RECOMP_ABI_CALL(0x00029E25u, sub_00029E25); /* call 0x00029E25 */

loc_00069AE8: ;
    ecx = esp + 0xA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00069AF4u); RECOMP_ABI_CALL(0x00029E25u, sub_00029E25); /* call 0x00029E25 */

loc_00069AF4: ;
    SET_LO8(eax, MEM8(esp + 0x2B));

loc_00069AF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00069C00
 * Original: 0x00069C00 - 0x00069D9E (414 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069C00(void)
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

loc_00069C00: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00069C0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00069C08u); } /* indirect call */
    }

loc_00069C0B: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x7B1BE8) - fp_top()); /* fsubr dword ptr [0x7b1be8] */
    eax = MEM32(edi + 0x20);
    SET_LO8(ecx, MEM8(esi + 0x39));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(edx, MEM8(edi + 0x39));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    fp_push(MEMF(eax + 0x64)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x6C)); /* fmul dword ptr [eax + 0x6c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_00069C4B; /* jge: greater or equal (signed >=) */

loc_00069C3E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    goto loc_00069C51;

loc_00069C4B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_00069C51: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(esp + 0x14) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 8);
    eax = MEM32(esi + 0x1D4);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x14); /* addss */
    MEM32(esp + 0x1C) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00069C9Bu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00069C9B: ;
    ecx = MEM32(eax + 0x28);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069D0D; /* je: equal / zero */

loc_00069CA8: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1C34); /* comiss */
    if ((_fca > _fcb)) goto loc_00069D0D; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7B1C34)) */

loc_00069CF3: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1C30); /* comiss */
    if ((_fca > _fcb)) goto loc_00069D0D; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7B1C30)) */

loc_00069CFC: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1C2C); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7B1C38)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00069D15; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B1C2C)) */

loc_00069D0D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B1C3C)); /* movss */

loc_00069D15: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00069D26u); RECOMP_ABI_CALL(0x0002335Eu, sub_0002335E); /* call 0x0002335E */

loc_00069D26: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7B1C64); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 8); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x7B1C68)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00069D6E; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00069D68: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_00069D6E: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00069D7Eu); RECOMP_ABI_CALL(0x000189B8u, sub_000189B8); /* call 0x000189B8 */

loc_00069D7E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00069D9Au); RECOMP_ABI_CALL(0x00018184u, sub_00018184); /* call 0x00018184 */

loc_00069D9A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_00069E10
 * Original: 0x00069E10 - 0x00069E11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069E10(void)
{

loc_00069E10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00069E20
 * Original: 0x00069E20 - 0x00069F8C (364 bytes, 112 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069E20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 5;
    edi = edi;

loc_00069E40: ;
    esi = MEM32(esp + ebp * 4 + 0x10);
    edi = MEM32(esi + 0x18);
    ecx = edi;
    PUSH32(esp, 0x00069E4Eu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00069E4E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00069F41; /* je: equal / zero */

loc_00069E56: ;
    _fa = (uint32_t)(MEM32(edi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x58), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00069F05; /* je: equal / zero */

loc_00069E60: ;
    PUSH32(esp, 0x00069E65u); RECOMP_ABI_CALL(0x0001C491u, sub_0001C491); /* call 0x0001C491 */

loc_00069E65: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x28) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00069E75; /* jne: not equal / not zero */

loc_00069E6A: ;
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00069F05; /* jne: not equal / not zero */

loc_00069E75: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00069E81u); RECOMP_ABI_CALL(0x0001B2F3u, sub_0001B2F3); /* call 0x0001B2F3 */

loc_00069E81: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00069EB7; /* je: equal / zero */

loc_00069E85: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00069E91u); RECOMP_ABI_CALL(0x00015E61u, sub_00015E61); /* call 0x00015E61 */

loc_00069E91: ;
    ecx = MEM32(eax + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00069EC6; /* je: equal / zero */

loc_00069E99: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00069EE5; /* je: equal / zero */

loc_00069E9D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00069F05; /* jne: not equal / not zero */

loc_00069EA2: ;
    SET_LO8(edx, MEM8(eax + 0x80));
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFFFF9u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xC)) >> 32) & 1);
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = edx;
    goto loc_00069F08;

loc_00069EB7: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00069F08; /* ja: above (unsigned >) */

loc_00069EBF: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x69F8C); /* switch: 5 entries, 4 targets */
    if (_jt == 0x00069EC6u) goto loc_00069EC6;
    if (_jt == 0x00069ECFu) goto loc_00069ECF;
    if (_jt == 0x00069EF7u) goto loc_00069EF7;
    if (_jt == 0x00069F05u) goto loc_00069F05;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00069EC6: ;
    MEM32(esi + 0x34) = 0xC;
    goto loc_00069F08;

loc_00069ECF: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x00069ED7u); RECOMP_ABI_CALL(0x0001B2A3u, sub_0001B2A3); /* call 0x0001B2A3 */

loc_00069ED7: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00069EEE; /* jbe: below or equal (unsigned <=) */

loc_00069EE5: ;
    MEM32(esi + 0x34) = 3;
    goto loc_00069F08;

loc_00069EEE: ;
    MEM32(esi + 0x34) = 4;
    goto loc_00069F08;

loc_00069EF7: ;
    eax = MEM32(esi + 0x40);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = eax;
    goto loc_00069F08;

loc_00069F05: ;
    MEM32(esi + 0x34) = ebx;

loc_00069F08: ;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    ecx = 0x8EFCB8;
    PUSH32(esp, 0x00069F16u); RECOMP_ABI_CALL(0x00023557u, sub_00023557); /* call 0x00023557 */

loc_00069F16: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x8EFCC4) - fp_top()); /* fsubr dword ptr [0x8efcc4] */
    fp_push(MEMF(0x7AA840)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00069F38; /* jbe: below or equal (unsigned <=) */

loc_00069F28: ;
    eax = MEM32(esp + ebp * 4 + 0x10);
    MEM32(eax + 0x38) = 2;
    MEM32(eax + 0x34) = ebx;
    goto loc_00069F48;

loc_00069F38: ;
    MEM32(esi + 0x38) = 1;
    goto loc_00069F48;

loc_00069F41: ;
    MEM32(esi + 0x38) = 0;

loc_00069F48: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00069E40; /* jl: less (signed <) */

loc_00069F52: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_00069F71; /* jle: less or equal (signed <=) */

loc_00069F61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00069F71; /* jg: greater (signed >) */

loc_00069F66: ;
    edx = MEM32(esp + 0x10);
    MEM32(edx + 0x38) = 3;

loc_00069F71: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00069F88; /* jle: less or equal (signed <=) */

loc_00069F7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00069F88; /* jg: greater (signed >) */

loc_00069F81: ;
    MEM32(ecx + 0x38) = 3;

loc_00069F88: ;
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
 * sub_0006A000
 * Original: 0x0006A000 - 0x0006A02D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A000: ;
    eax = MEM32(0x8EFCB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006A019; /* jne: not equal / not zero */

loc_0006A00A: ;
    eax = MEM32(ecx + 0x34);
    PUSH32(esp, eax);
    ecx = 0x8EFCB8;
    PUSH32(esp, 0x0006A018u); RECOMP_ABI_CALL(0x00026DE7u, sub_00026DE7); /* call 0x00026DE7 */

loc_0006A018: ;
    esp += 4; return; /* ret */

loc_0006A019: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006A02C; /* jne: not equal / not zero */

loc_0006A01E: ;
    ecx = MEM32(edx + 0x34);
    PUSH32(esp, ecx);
    ecx = 0x8EFCB8;
    PUSH32(esp, 0x0006A02Cu); RECOMP_ABI_CALL(0x00026DE7u, sub_00026DE7); /* call 0x00026DE7 */

loc_0006A02C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006A040
 * Original: 0x0006A040 - 0x0006A14E (270 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A040(void)
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

loc_0006A040: ;
    PUSH32(esp, ecx);
    eax = MEM32(ebx + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7B1D9C)); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x18);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = edi;
    ecx = MEM32(ecx + 0x38);
    MEM32(esi + 0x2C) = ecx;
    ecx = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A06C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006A069: ;
    xmm0 = xmm1; /* movaps */

loc_0006A06C: ;
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(edi + 0x20);
    ecx = MEM32(edx + 0x6C);
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(esi + 0x28) = ecx;
    PUSH32(esp, 0x0006A086u); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_0006A086: ;
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x60); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896CD4)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    POP32(esp, edi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A0AD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006A0A8: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006A0D8; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006A0AD: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A0B8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006A0B2: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0006A0D8;

loc_0006A0B8: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A0CA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006A0C1: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_0006A0D8;

loc_0006A0CA: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0006A0D8: ;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esi) = 0;
    edx = MEM32(ebx + 0x24);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    eax = 0xFFFFFFFEu;
    if (CMP_A(_fa, _fb)) goto loc_0006A13B; /* ja: above (unsigned >) */

loc_0006A0F3: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x6A150); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0006A0FAu) goto loc_0006A0FA;
    if (_jt == 0x0006A10Cu) goto loc_0006A10C;
    if (_jt == 0x0006A11Bu) goto loc_0006A11B;
    if (_jt == 0x0006A12Au) goto loc_0006A12A;
    if (_jt == 0x0006A136u) goto loc_0006A136;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0006A0FA: ;
    ecx = 3;
    eax = 4;
    MEM32(esi) = 0x28;
    goto loc_0006A13B;

loc_0006A10C: ;
    ecx = 2;
    eax = ecx;
    MEM32(esi) = 0x19;
    goto loc_0006A13B;

loc_0006A11B: ;
    ecx = 1;
    eax = ecx;
    MEM32(esi) = 0xA;
    goto loc_0006A13B;

loc_0006A12A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 1;
    goto loc_0006A13B;

loc_0006A136: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0006A13B: ;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x30), 1 (32-bit) */
    MEM32(esi + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0006A149; /* jne: not equal / not zero */

loc_0006A144: ;
    ecx = 5;

loc_0006A149: ;
    MEM32(esi + 0xC) = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006A14E
 * Original: 0x0006A14E - 0x0006A1B1 (99 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A14E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A14E: ;
    edi = edi;
    RECOMP_UNIMPL("cli", 0x0006A150u); /* TODO: cli */
    SET_LO8(eax, MEM8(0xA10C0006u));
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx) = MEM8(ebx) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = MEM32(0xA12A0006u);
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi) = MEM8(esi) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = MEM32(0xCCCC0006u);
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    esp += 4; return; /* ret */

}

/**
 * sub_0006A1C0
 * Original: 0x0006A1C0 - 0x0006A239 (121 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006A1C0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = eax;
    ebp = MEM32(ebx + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x18);
    esi = esp + 0x10;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006A1E1u); RECOMP_ABI_CALL(0x0006A040u, sub_0006A040); /* call 0x0006A040 */

loc_0006A1E1: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006A1EDu); RECOMP_ABI_CALL(0x00015E61u, sub_00015E61); /* call 0x00015E61 */

loc_0006A1ED: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0006A1F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006A1F1u); } /* indirect call */
    }

loc_0006A1F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006A201; /* jne: not equal / not zero */

loc_0006A1F8: ;
    eax = MEM32(0x8E97E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006A21B; /* je: equal / zero */

loc_0006A201: ;
    esi = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006A216u); RECOMP_ABI_CALL(0x00011389u, sub_00011389); /* call 0x00011389 */

loc_0006A216: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0006A21F;

loc_0006A21B: ;
    esi = MEM32(esp + 0x48);

loc_0006A21F: ;
    edx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006A22Au); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_0006A22A: ;
    ecx = eax;
    PUSH32(esp, 0x0006A231u); RECOMP_ABI_CALL(0x0001E13Du, sub_0001E13D); /* call 0x0001E13D */

loc_0006A231: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006A260
 * Original: 0x0006A260 - 0x0006A3D2 (370 bytes, 112 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A260(void)
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

loc_0006A260: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    eax = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ebx = 1;
    esi = 0xFFFFFFFEu;
    PUSH32(esp, 0x0006A282u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0006A282: ;
    ecx = MEM32(ebp + 0x40);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(MEM32(ebp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x38), 2 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x10);
    edx = edx & 0xFFFFFC20u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x18);
    edx = MEM32(edx + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_A(_fa, _fb)) goto loc_0006A335; /* ja: above (unsigned >) */

loc_0006A2C1: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x6A3D4); /* switch: 11 entries, 10 targets */
    if (_jt == 0x0006A2C8u) goto loc_0006A2C8;
    if (_jt == 0x0006A319u) goto loc_0006A319;
    if (_jt == 0x0006A320u) goto loc_0006A320;
    if (_jt == 0x0006A32Fu) goto loc_0006A32F;
    if (_jt == 0x0006A349u) goto loc_0006A349;
    if (_jt == 0x0006A353u) goto loc_0006A353;
    if (_jt == 0x0006A361u) goto loc_0006A361;
    if (_jt == 0x0006A37Eu) goto loc_0006A37E;
    if (_jt == 0x0006A38Au) goto loc_0006A38A;
    if (_jt == 0x0006A3A0u) goto loc_0006A3A0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0006A2C8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    MEM32(esp + 0xC) = 3;
    if (CMP_NE(_fa, _fb)) goto loc_0006A2D9; /* jne: not equal / not zero */

loc_0006A2D5: ;
    esi = ecx;
    goto loc_0006A335;

loc_0006A2D9: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x18);
    eax = eax | 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B0478); /* comiss */
    esi = 5;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A304; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B0478)) */

loc_0006A2FD: ;
    ecx = 1;
    goto loc_0006A306;

loc_0006A304: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006A306: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    goto loc_0006A335;

loc_0006A319: ;
    esi = 2;
    goto loc_0006A331;

loc_0006A320: ;
    esi = 2;
    MEM32(esp + 0xC) = 1;
    goto loc_0006A335;

loc_0006A32F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006A331: ;
    MEM32(esp + 0xC) = esi;

loc_0006A335: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(edx + 0x30);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0006A3A9; /* ja: above (unsigned >) */

loc_0006A342: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x6A3E8); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0006A349u) goto loc_0006A349;
    if (_jt == 0x0006A353u) goto loc_0006A353;
    if (_jt == 0x0006A361u) goto loc_0006A361;
    if (_jt == 0x0006A37Eu) goto loc_0006A37E;
    if (_jt == 0x0006A38Au) goto loc_0006A38A;
    if (_jt == 0x0006A3A0u) goto loc_0006A3A0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0006A349: ;
    MEM32(esp + 0xC) = 5;
    goto loc_0006A3A9;

loc_0006A353: ;
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = eax;
    esi = 7;
    goto loc_0006A3A9;

loc_0006A361: ;
    eax = eax | 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    esi = 7;
    goto loc_0006A3A9;

loc_0006A37E: ;
    ebx = 3;
    esi = 6;
    goto loc_0006A3A9;

loc_0006A38A: ;
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 6;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = 1;
    goto loc_0006A3A9;

loc_0006A3A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006A3A9; /* je: equal / zero */

loc_0006A3A4: ;
    ebx = 4;

loc_0006A3A9: ;
    edx = MEM32(edx + 0x18);
    SET_LO8(ecx, MEM8(edx + 0x39));
    MEM8(edi + 0x1C) = LO8(ecx);
    edx = MEM32(ebp + 0x18);
    SET_LO8(ecx, MEM8(edx + 0x39));
    edx = MEM32(esp + 0xC);
    MEM32(edi + 0x20) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi + 0x24) = ebx;
    MEM8(edi + 0x1D) = LO8(ecx);
    MEM32(edi + 0x28) = edx;
    MEM32(edi + 0x2C) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006A3D2
 * Original: 0x0006A3D2 - 0x0006A470 (158 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A3D2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0006A3D2: ;
    edi = edi;
    RECOMP_UNIMPL("enter 0x6a2, 0", 0x0006A3D4u); /* TODO: enter 0x6a2, 0 */
    { uint64_t _t = (uint64_t)(MEM32(ebx + -1558183930)) - (uint64_t)(esp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebx + -1558183930) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(ebx + -1558183930)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(0xA32F0006u) = eax;
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + -93)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + -93) = MEM8(ecx + -93) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + -93)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + 0x7E0006A3)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax + 0x7E0006A3) = MEM8(eax + 0x7E0006A3) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + 0x7E0006A3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(0xA38A0006u) = eax;
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + -93)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ecx + -93) = MEM8(ecx + -93) + HI8(eax);
    _fa = (uint32_t)(MEM8(ecx + -93)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + -93)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebx + -93) = MEM8(ebx + -93) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebx + -93)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
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
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0006A470
 * Original: 0x0006A470 - 0x0006A527 (183 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0006A470: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0006A47Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006A477u); } /* indirect call */
    }

loc_0006A47A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006A521; /* je: equal / zero */

loc_0006A482: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0006A489u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006A486u); } /* indirect call */
    }

loc_0006A489: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006A521; /* je: equal / zero */

loc_0006A491: ;
    PUSH32(esp, 0x40400000);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0006A4A2u); RECOMP_ABI_CALL(0x00022922u, sub_00022922); /* call 0x00022922 */

loc_0006A4A2: ;
    PUSH32(esp, 0x40400000);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0006A4B3u); RECOMP_ABI_CALL(0x00022922u, sub_00022922); /* call 0x00022922 */

loc_0006A4B3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    ecx = MEM32(esi + 0x50);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006A4DEu); RECOMP_ABI_CALL(0x0001A6B9u, sub_0001A6B9); /* call 0x0001A6B9 */

loc_0006A4DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7AEBF0)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0006A4F2; /* jne: not equal / not zero */

loc_0006A4EA: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B1DA0)); /* movss */

loc_0006A4F2: ;
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A521; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0006A51B: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006A521: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006A560
 * Original: 0x0006A560 - 0x0006A5A7 (71 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A560: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006A5A3; /* je: equal / zero */

loc_0006A567: ;
    ecx = esi;
    PUSH32(esp, 0x0006A56Eu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0006A56E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006A5A3; /* je: equal / zero */

loc_0006A572: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0006A579u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006A576u); } /* indirect call */
    }

loc_0006A579: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006A5A3; /* je: equal / zero */

loc_0006A57D: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006A58Eu); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_0006A58E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006A5A3; /* jl: less (signed <) */

loc_0006A595: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006A59F; /* jle: less or equal (signed <=) */

loc_0006A59A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006A5A3; /* jne: not equal / not zero */

loc_0006A59F: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006A5A3: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006A5C0
 * Original: 0x0006A5C0 - 0x0006A5C6 (6 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A5C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A5C0: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006A5D0
 * Original: 0x0006A5D0 - 0x0006A5D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A5D0(void)
{

loc_0006A5D0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0006A5E0
 * Original: 0x0006A5E0 - 0x0006A617 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A5E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006A615; /* je: equal / zero */

loc_0006A5EA: ;
    /* nop */

loc_0006A5F0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006A5FC; /* je: equal / zero */

loc_0006A5F6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0006A5FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006A5F9u); } /* indirect call */
    }

loc_0006A5FC: ;
    ecx = MEM32(esi + 4);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = 0;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0006A60Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006A60Bu); } /* indirect call */
    }

loc_0006A60E: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006A5F0; /* jne: not equal / not zero */

loc_0006A615: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006A630
 * Original: 0x0006A630 - 0x0006A637 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006A630: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_0006A640
 * Original: 0x0006A640 - 0x0006A689 (73 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A640: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006A683; /* je: equal / zero */

loc_0006A64A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0006A652u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006A650u); } /* indirect call */
    }

loc_0006A652: ;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006A675; /* je: equal / zero */

loc_0006A659: ;
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_0006A660: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0006A66Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006A667u); } /* indirect call */
    }

loc_0006A66A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006A67D; /* jne: not equal / not zero */

loc_0006A66E: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006A660; /* jne: not equal / not zero */

loc_0006A675: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0006A67Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006A67Au); } /* indirect call */
    }

loc_0006A67D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0006A683: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006A6A0
 * Original: 0x0006A6A0 - 0x0006A829 (393 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A6A0(void)
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

loc_0006A6A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = esi;
    PUSH32(esp, 0x0006A6AFu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0006A6AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x896CD4)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_0006A733; /* je: equal / zero */

loc_0006A6C1: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A70C; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_0006A702: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A70C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0006A707: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0006A738;

loc_0006A70C: ;
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A71A; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_0006A711: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm0 = xmm2; /* movaps */
    goto loc_0006A738;

loc_0006A71A: ;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006A738; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0006A72D: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    goto loc_0006A738;

loc_0006A733: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */

loc_0006A738: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x20);
    ecx = MEM32(esi + 0x20);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x38); /* subss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x30); /* subss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    POP32(esp, esi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A786; /* jb: below (unsigned <) (xmm3.f[0] vs xmm4.f[0]) */

loc_0006A77C: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A786; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0006A781: ;
    xmm2 = xmm3; /* movaps */
    goto loc_0006A7AB;

loc_0006A786: ;
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A794; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_0006A78B: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm3; /* movaps */
    goto loc_0006A7AB;

loc_0006A794: ;
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006A7AB; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm2.f[0]) */

loc_0006A7A7: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_0006A7AB: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A7B9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm4.f[0]) */

loc_0006A7B4: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006A7D5; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006A7B9: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A7C4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_0006A7BE: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0006A7D5;

loc_0006A7C4: ;
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006A7D5; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm4.f[0]) */

loc_0006A7D1: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0006A7D5: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006A7EAu); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0006A7EA: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7B1834)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A808; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006A7FE: ;
    fp_push(MEMF(0x7B1C28)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006A808: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B1830)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A81F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006A815: ;
    fp_push(MEMF(0x7AA820)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006A81F: ;
    fp_push(MEMF(0x7B1C20)); /* fld float */
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
 * sub_0006A890
 * Original: 0x0006A890 - 0x0006A98F (255 bytes, 84 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A890(void)
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

loc_0006A890: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B1C34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7B1C2C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7B1C30)); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    edx = MEM32(ebp + 0x18);
    eax = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A8C8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006A8C1: ;
    esi = 3;
    goto loc_0006A8DE;

loc_0006A8C8: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A8D4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006A8CD: ;
    esi = 2;
    goto loc_0006A8DE;

loc_0006A8D4: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A8DE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0006A8D9: ;
    esi = 1;

loc_0006A8DE: ;
    ecx = MEM32(ebx + 0x18);
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A8F7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006A8F0: ;
    edi = 3;
    goto loc_0006A90D;

loc_0006A8F7: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A903; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006A8FC: ;
    edi = 2;
    goto loc_0006A90D;

loc_0006A903: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006A90D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0006A908: ;
    edi = 1;

loc_0006A90D: ;
    ecx = MEM32(ebx + 0x40);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0006A97F; /* ja: above (unsigned >) */

loc_0006A917: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x6A990); /* switch: 8 entries, 3 targets */
    if (_jt == 0x0006A91Eu) goto loc_0006A91E;
    if (_jt == 0x0006A97Bu) goto loc_0006A97B;
    if (_jt == 0x0006A97Du) goto loc_0006A97D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0006A91E: ;
    eax = MEM32(ebp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006A929; /* je: equal / zero */

loc_0006A925: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0006A97D; /* jne: not equal / not zero */

loc_0006A929: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006A92Fu); RECOMP_ABI_CALL(0x0001E386u, sub_0001E386); /* call 0x0001E386 */

loc_0006A92F: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006A93Cu); RECOMP_ABI_CALL(0x0001E386u, sub_0001E386); /* call 0x0001E386 */

loc_0006A93C: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) - fp_top()); /* fsubr dword ptr [esp + 0x18] */
    fp_push(MEMF(0x7AB868)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0006A968; /* jbe: below or equal (unsigned <=) */

loc_0006A951: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0006A968; /* jle: less or equal (signed <=) */

loc_0006A955: ;
    POP32(esp, edi);
    eax = esi + esi;
    POP32(esp, esi);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B1DA4); /* mulss */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0006A968: ;
    eax = edi + esi;
    POP32(esp, edi);
    POP32(esp, esi);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B1DA4); /* mulss */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0006A97B: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edi));
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006A97D: ;
    eax = esi;

loc_0006A97F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B1DA4); /* mulss */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006AA00
 * Original: 0x0006AA00 - 0x0006AA3D (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006AA00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006AA11u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006AA11: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006AA32; /* je: equal / zero */

loc_0006AA18: ;
    eax = MEM32(eax + 0x28);
    edx = MEM32(eax);
    ecx = eax + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006AA2B; /* jne: not equal / not zero */

loc_0006AA24: ;
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006AA32; /* jne: not equal / not zero */

loc_0006AA2B: ;
    MEM32(eax + 0x30) = 2;

loc_0006AA32: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006AA38u); RECOMP_ABI_CALL(0x000320D4u, sub_000320D4); /* call 0x000320D4 */

loc_0006AA38: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006AA50
 * Original: 0x0006AA50 - 0x0006AD08 (696 bytes, 224 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AA50(void)
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

loc_0006AA50: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0006AC05; /* je: equal / zero */

loc_0006AA71: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006AC05; /* je: equal / zero */

loc_0006AA79: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    edx = esp + 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006AAA5u); RECOMP_ABI_CALL(0x000266C6u, sub_000266C6); /* call 0x000266C6 */

loc_0006AAA5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0006AACC; /* ja: above (unsigned >) */

loc_0006AAAD: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x6AD08); /* switch: 5 entries, 2 targets */
    if (_jt == 0x0006AAB4u) goto loc_0006AAB4;
    if (_jt == 0x0006AABEu) goto loc_0006AABE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0006AAB4: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    goto loc_0006AAC6;

loc_0006AABE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_0006AAC6: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0006AACC: ;
    ecx = MEM32(ebx + 0x50);
    PUSH32(esp, 0x0006AAD4u); RECOMP_ABI_CALL(0x0001A6B9u, sub_0001A6B9); /* call 0x0001A6B9 */

loc_0006AAD4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006AB0D; /* je: equal / zero */

loc_0006AAD8: ;
    SET_LO8(eax, MEM8(esp + 0x51));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006AB0D; /* jne: not equal / not zero */

loc_0006AAE0: ;
    ecx = esi;
    PUSH32(esp, 0x0006AAE7u); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_0006AAE7: ;
    fp_push(MEMF(0x7B1DA8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0006AB08; /* jbe: below or equal (unsigned <=) */

loc_0006AAF3: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    ebp = 1;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0006AB0D;

loc_0006AB08: ;
    ebp = 2;

loc_0006AB0D: ;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x896CD4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006AB64; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006AB57: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006AB64; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006AB5C: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_0006AB95;

loc_0006AB64: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006AB72; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006AB69: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_0006AB8F;

loc_0006AB72: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006AB84; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006AB7B: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_0006AB8F;

loc_0006AB84: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_0006AB8F: ;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_0006AB95: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    MEM8(esp + 0x13) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0006AC05; /* je: equal / zero */

loc_0006AB9F: ;
    /* nop */

loc_0006ABA0: ;
    PUSH32(esp, ebp);
    eax = esp + 0x30;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006ABACu); RECOMP_ABI_CALL(0x00031C1Fu, sub_00031C1F); /* call 0x00031C1F */

loc_0006ABAC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006AC05; /* je: equal / zero */

loc_0006ABB3: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006ABCEu); RECOMP_ABI_CALL(0x000335C4u, sub_000335C4); /* call 0x000335C4 */

loc_0006ABCE: ;
    esi = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006AC5E; /* jne: not equal / not zero */

loc_0006ABDB: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006AC05; /* je: equal / zero */

loc_0006ABE3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    MEM8(esp + 0x13) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0006AC0F; /* jne: not equal / not zero */

loc_0006ABED: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    ebp = 1;

loc_0006ABFA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0006ABA0; /* jne: not equal / not zero */

loc_0006AC05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006AC0F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006AC23; /* jne: not equal / not zero */

loc_0006AC14: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ebp = 2;
    goto loc_0006ABFA;

loc_0006AC23: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006AC31; /* jne: not equal / not zero */

loc_0006AC27: ;
    edi = 1;
    goto loc_0006ABA0;

loc_0006AC31: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006AC40; /* jne: not equal / not zero */

loc_0006AC36: ;
    edi = 3;
    goto loc_0006ABA0;

loc_0006AC40: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006AC05; /* jne: not equal / not zero */

loc_0006AC45: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AACB4); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0006ABA0;

loc_0006AC5E: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0006AC6Cu); RECOMP_ABI_CALL(0x0002B059u, sub_0002B059); /* call 0x0002B059 */

loc_0006AC6C: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esp + 0x68);
    eax = MEM32(esp + 0x6C);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(esi + 8);
    MEM32(eax + 0x20) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006ACC2; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0006AC91: ;
    _fa = (uint32_t)(MEM32(esp + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x4C), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006ACAD; /* jne: not equal / not zero */

loc_0006AC98: ;
    POP32(esp, edi);
    edx = 6;
    POP32(esp, esi);
    MEM32(ecx + 0x30) = edx;
    POP32(esp, ebp);
    MEM32(eax + 0x30) = edx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006ACAD: ;
    POP32(esp, edi);
    edx = 5;
    POP32(esp, esi);
    MEM32(ecx + 0x30) = edx;
    POP32(esp, ebp);
    MEM32(eax + 0x30) = edx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006ACC2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006ACDC; /* jne: not equal / not zero */

loc_0006ACC7: ;
    POP32(esp, edi);
    edx = 3;
    POP32(esp, esi);
    MEM32(ecx + 0x30) = edx;
    POP32(esp, ebp);
    MEM32(eax + 0x30) = edx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006ACDC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006ACF6; /* jne: not equal / not zero */

loc_0006ACE1: ;
    POP32(esp, edi);
    edx = 4;
    POP32(esp, esi);
    MEM32(ecx + 0x30) = edx;
    POP32(esp, ebp);
    MEM32(eax + 0x30) = edx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006ACF6: ;
    POP32(esp, edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(ecx + 0x30) = edx;
    POP32(esp, ebp);
    MEM32(eax + 0x30) = edx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006ADD0
 * Original: 0x0006ADD0 - 0x0006B30A (1338 bytes, 368 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006ADD0(void)
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

loc_0006ADD0: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x6C);
    MEM32(esp + 0x6C) = 0;
    ecx = MEM32(0x8EB3BC);
    ebx = eax;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x18);
    PUSH32(esp, edi);
    MEM32(esp + 0x74) = eax;
    PUSH32(esp, 0x0006ADFAu); RECOMP_ABI_CALL(0x0001B2F3u, sub_0001B2F3); /* call 0x0001B2F3 */

loc_0006ADFA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B303; /* jne: not equal / not zero */

loc_0006AE02: ;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B303; /* je: equal / zero */

loc_0006AE0D: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B303; /* je: equal / zero */

loc_0006AE18: ;
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, esi);
    esi = ebx + 0xC;
    PUSH32(esp, esi);
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebp;
    PUSH32(esp, 0x0006AE2Du); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_0006AE2D: ;
    ecx = MEM32(esp + 0x74);
    ecx = MEM32(ecx + 0x20);
    edi = ebp + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006AE3Du); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_0006AE3D: ;
    PUSH32(esp, 0x161FE);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006AE50u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_0006AE50: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7AD3A8)); /* movss */
    MEM32(esp + 0x58) = eax;
    eax = MEM32(edi);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(edi + 4);
    MEM32(esp + 0x60) = edx;
    edx = MEM32(edi + 8);
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x6C) = edx;
    eax = MEM32(ebx + 0x18);
    eax = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006AED1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006AE90: ;
    ecx = MEM32(ebp + 0x18);
    ecx = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006AED1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006AEA0: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006AEB2u); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_0006AEB2: ;
    PUSH32(esp, eax);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006AEBDu); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0006AEBD: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F95F0)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006AED1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0006AECD: ;
    SET_LO8(ebx, 1);
    goto loc_0006AED3;

loc_0006AED1: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0006AED3: ;
    ecx = esp + 0x58;
    edx = esp + 0x3C;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x14) = edx;

loc_0006AEE5: ;
    esi = MEM32(esp + ebp * 4 + 0x38);
    eax = MEM32(esp + 0x28);
    edi = MEM32(esi + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7AD448)); /* movss */
    MEM8(esi + 0x3C) = 1;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = eax;
    eax = MEM32(edi + 0x20);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x6C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006AF1D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x6C)) */

loc_0006AF19: ;
    SET_LO8(eax, 1);
    goto loc_0006AF83;

loc_0006AF1D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x48); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x44); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x40); /* addss */
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006AF5Bu); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_0006AF5B: ;
    ecx = MEM32(esi + 0x40);
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006AF6D; /* jle: less or equal (signed <=) */

loc_0006AF69: ;
    ecx = edx;
    goto loc_0006AF6F;

loc_0006AF6D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006AF6F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006AF7D; /* jl: less (signed <) */

loc_0006AF74: ;
    edx = 8;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx;

loc_0006AF7D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */

loc_0006AF83: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0006B2D5; /* ja: above (unsigned >) */

loc_0006AF8F: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x6B30C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0006AF96u) goto loc_0006AF96;
    if (_jt == 0x0006B061u) goto loc_0006B061;
    if (_jt == 0x0006B140u) goto loc_0006B140;
    if (_jt == 0x0006B1ABu) goto loc_0006B1AB;
    if (_jt == 0x0006B22Eu) goto loc_0006B22E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0006AF96: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B2D5; /* je: equal / zero */

loc_0006AF9E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0006AFB2; /* jne: not equal / not zero */

loc_0006AFAA: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B1C44)); /* movss */

loc_0006AFB2: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x40); /* mulss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x48); /* mulss */
    ecx = esp + 0x40;
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006AFE6u); RECOMP_ABI_CALL(0x0002F67Cu, sub_0002F67C); /* call 0x0002F67C */

loc_0006AFE6: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0006B006u); RECOMP_ABI_CALL(0x00012EAAu, sub_00012EAA); /* call 0x00012EAA */

loc_0006B006: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006B01Eu); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_0006B01E: ;
    PUSH32(esp, 0x3E99999A);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006B03Au); RECOMP_ABI_CALL(0x00013260u, sub_00013260); /* call 0x00013260 */

loc_0006B03A: ;
    fp_push(MEMF(esp + 0x90)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0006B2D5;

loc_0006B061: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B2D5; /* je: equal / zero */

loc_0006B069: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x0006B071u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0006B071: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B08B; /* je: equal / zero */

loc_0006B07D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B097; /* jne: not equal / not zero */

loc_0006B081: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B1C40)); /* movss */
    goto loc_0006B097;

loc_0006B08B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B097; /* jne: not equal / not zero */

loc_0006B08F: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B1C48)); /* movss */

loc_0006B097: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x40); /* mulss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x48); /* mulss */
    ecx = esp + 0x40;
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006B0CBu); RECOMP_ABI_CALL(0x0002F67Cu, sub_0002F67C); /* call 0x0002F67C */

loc_0006B0CB: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0006B0EBu); RECOMP_ABI_CALL(0x00012EAAu, sub_00012EAA); /* call 0x00012EAA */

loc_0006B0EB: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006B103u); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_0006B103: ;
    PUSH32(esp, 0x3E99999A);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006B11Cu); RECOMP_ABI_CALL(0x00013260u, sub_00013260); /* call 0x00013260 */

loc_0006B11C: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0006B2D5;

loc_0006B140: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B2D5; /* je: equal / zero */

loc_0006B148: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    eax = ebp;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    eax = eax + eax * 2;
    ecx = esp + eax * 4 + 0x58;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0006B17C; /* jne: not equal / not zero */

loc_0006B174: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B1C40)); /* movss */

loc_0006B17C: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x40); /* mulss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x48); /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    goto loc_0006B2D5;

loc_0006B1AB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B223; /* je: equal / zero */

loc_0006B1AF: ;
    eax = ebp;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    edx = eax + eax * 2;
    eax = esp + edx * 4 + 0x58;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0006B1DD; /* je: equal / zero */

loc_0006B1D3: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    goto loc_0006B1F3;

loc_0006B1DD: ;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x38), 1 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7B1C54)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B1F3; /* je: equal / zero */

loc_0006B1EB: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B1C60)); /* movss */

loc_0006B1F3: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */

loc_0006B223: ;
    eax = MEM32(edi + 0x54);
    MEM32(eax) = MEM32(eax) | 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0006B2D5;

loc_0006B22E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B290; /* je: equal / zero */

loc_0006B232: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    eax = ebp;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = eax + eax * 2;
    edx = esp + ecx * 4 + 0x58;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0006B266; /* jne: not equal / not zero */

loc_0006B25E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B1C58)); /* movss */

loc_0006B266: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x40); /* mulss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x48); /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */

loc_0006B290: ;
    eax = MEM32(edi + 0x54);
    edx = MEM32(eax);
    edx = edx | 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x4B6);
    MEM32(eax) = edx;
    eax = MEM32(0x8E98BC);
    PUSH32(esp, 0x7B1DAC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006B2AFu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0006B2AF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B2D5; /* jne: not equal / not zero */

loc_0006B2B6: ;
    ecx = MEM32(edi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x44340000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006B2C7u); RECOMP_ABI_CALL(0x00013A62u, sub_00013A62); /* call 0x00013A62 */

loc_0006B2C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B2D5; /* jne: not equal / not zero */

loc_0006B2CE: ;
    ecx = edi;
    PUSH32(esp, 0x0006B2D5u); RECOMP_ABI_CALL(0x0003703Eu, sub_0003703E); /* call 0x0003703E */

loc_0006B2D5: ;
    ecx = MEM32(edi + 0x20);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006B2E2u); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_0006B2E2: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0006AEE5; /* jl: less (signed <) */

loc_0006B302: ;
    POP32(esp, esi);

loc_0006B303: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006B30A
 * Original: 0x0006B30A - 0x0006B480 (374 bytes, 362 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B30A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006B30A: ;
    edi = edi;
    { uint32_t _tmp = esi;
    esi = eax;
    eax = _tmp; }
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (eax == MEM32(edi));
        edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe scasd */
    ecx = _rc; }
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -80) = MEM8(ecx + -80) + HI8(eax);
    _fa = (uint32_t)(MEM8(ecx + -80)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -79) = MEM8(eax + -79) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + -79)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + 0x2E0006B1) = MEM8(ebx + 0x2E0006B1) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebx + 0x2E0006B1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(edx, 6);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
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
 * sub_0006B460
 * Original: 0x0006B460 - 0x0006B480 (32 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B460(void)
{

loc_0006B460: ;
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
 * sub_0006B480
 * Original: 0x0006B480 - 0x0006B534 (180 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B480(void)
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

loc_0006B480: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006B491u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006B491: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B529; /* je: equal / zero */

loc_0006B49C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    ecx = edi;
    PUSH32(esp, 0x0006B4A9u); RECOMP_ABI_CALL(0x00029EF2u, sub_00029EF2); /* call 0x00029EF2 */

loc_0006B4A9: ;
    ecx = edi;
    PUSH32(esp, 0x0006B4B0u); RECOMP_ABI_CALL(0x0002A389u, sub_0002A389); /* call 0x0002A389 */

loc_0006B4B0: ;
    ecx = MEM32(esi + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006B4BCu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006B4BC: ;
    ebx = MEM32(eax + 0x28);
    ebp = MEM32(ebx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B4FB; /* je: equal / zero */

loc_0006B4C9: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0006B4D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006B4CEu); } /* indirect call */
    }

loc_0006B4D1: ;
    fp_push(MEMF(0x7B1BE8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0006B4FB; /* jbe: below or equal (unsigned <=) */

loc_0006B4DD: ;
    eax = MEM32(edi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B4FB; /* je: equal / zero */

loc_0006B4E7: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B4FB; /* je: equal / zero */

loc_0006B4ED: ;
    ebx = MEM32(ebx + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B4FB; /* je: equal / zero */

loc_0006B4F4: ;
    edi = ebx;
    PUSH32(esp, 0x0006B4FBu); RECOMP_ABI_CALL(0x00069C00u, sub_00069C00); /* call 0x00069C00 */

loc_0006B4FB: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0006B529; /* je: equal / zero */

loc_0006B506: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0006B50Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006B50Bu); } /* indirect call */
    }

loc_0006B50E: ;
    fp_push(MEMF(0x7B1DE0)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0006B529; /* jbe: below or equal (unsigned <=) */

loc_0006B51C: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0xBF666666u);
    PUSH32(esp, 0x0006B529u); RECOMP_ABI_CALL(0x000200DCu, sub_000200DC); /* call 0x000200DC */

loc_0006B529: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006B52Fu); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_0006B52F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006B570
 * Original: 0x0006B570 - 0x0006B614 (164 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006B570: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006B582u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006B582: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B5D4; /* je: equal / zero */

loc_0006B589: ;
    ecx = MEM32(esi + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006B595u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006B595: ;
    edx = MEM32(eax + 0x28);
    edi = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B5D4; /* je: equal / zero */

loc_0006B5A2: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0006B5AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006B5A7u); } /* indirect call */
    }

loc_0006B5AA: ;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B5C4; /* jne: not equal / not zero */

loc_0006B5AF: ;
    ecx = MEM32(0x8E9B10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0006B5BDu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0006B5BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B5D4; /* jne: not equal / not zero */

loc_0006B5C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006B5C4: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006B5D0u); RECOMP_ABI_CALL(0x0001B2F3u, sub_0001B2F3); /* call 0x0001B2F3 */

loc_0006B5D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B611; /* jne: not equal / not zero */

loc_0006B5D4: ;
    edx = MEM32(esi + 0x1D4);
    PUSH32(esp, edx);
    MEM32(esi + 0x2C) = 5;
    PUSH32(esp, 0x0006B5E7u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006B5E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B608; /* je: equal / zero */

loc_0006B5EE: ;
    eax = MEM32(eax + 0x28);
    edx = MEM32(eax);
    ecx = eax + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B601; /* jne: not equal / not zero */

loc_0006B5FA: ;
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B608; /* jne: not equal / not zero */

loc_0006B601: ;
    MEM32(eax + 0x30) = 2;

loc_0006B608: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006B60Eu); RECOMP_ABI_CALL(0x000320D4u, sub_000320D4); /* call 0x000320D4 */

loc_0006B60E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006B611: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006B640
 * Original: 0x0006B640 - 0x0006B989 (841 bytes, 249 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B640(void)
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

loc_0006B640: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = 0;
    esi = MEM32(esp + 0x24);
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006B65Fu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006B65F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B978; /* je: equal / zero */

loc_0006B66A: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0006B6B0; /* jl: less (signed <) */

loc_0006B674: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006B682u); RECOMP_ABI_CALL(0x00016F50u, sub_00016F50); /* call 0x00016F50 */

loc_0006B682: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006B68Fu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0006B68F: ;
    ecx = eax;
    PUSH32(esp, 0x0006B696u); RECOMP_ABI_CALL(0x000217E8u, sub_000217E8); /* call 0x000217E8 */

loc_0006B696: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B96B; /* je: equal / zero */

loc_0006B69E: ;
    ecx = MEM32(eax + 0x14);
    ecx = ecx + ecx * 2;
    SET_LO8(edx, MEM8(eax + ecx * 4 + 0x22));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0006B96B; /* jbe: below or equal (unsigned <=) */

loc_0006B6B0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006B6C0u); RECOMP_ABI_CALL(0x000202E9u, sub_000202E9); /* call 0x000202E9 */

loc_0006B6C0: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0006B6CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006B6CAu); } /* indirect call */
    }

loc_0006B6CD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11A (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    MEM8(esp + 0x2C) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006B6ECu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006B6EC: ;
    ecx = MEM32(eax + 0x28);
    ebp = MEM32(ecx + 0x2C);
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0006B6FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006B6FAu); } /* indirect call */
    }

loc_0006B6FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x87) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x87 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0006B72D; /* jne: not equal / not zero */

loc_0006B704: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x4C);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B1C7C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006B796; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_0006B725: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_0006B796;

loc_0006B72D: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B745; /* je: equal / zero */

loc_0006B735: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B1DEC)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_0006B796;

loc_0006B745: ;
    edx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006B796; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0006B756: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006B760u); RECOMP_ABI_CALL(0x00033BF0u, sub_00033BF0); /* call 0x00033BF0 */

loc_0006B760: ;
    eax = MEM32(0x8BFE58);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0x8BFE54)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0x8BFE54))); }
    ecx = 0x14;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebp));
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = ecx;
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB2D0)); /* fmul dword ptr [0x7ab2d0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0006B796: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006B7A3u); RECOMP_ABI_CALL(0x000200DCu, sub_000200DC); /* call 0x000200DC */

loc_0006B7A3: ;
    edi = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B1DE8); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006B7C3; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0006B7C0: ;
    xmm2 = xmm0; /* movaps */

loc_0006B7C3: ;
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7B1C78); /* mulss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x896CD4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006B7E0; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_0006B7DB: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006B7FF; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_0006B7E0: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006B7EB; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_0006B7E5: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    goto loc_0006B7FF;

loc_0006B7EB: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006B7FF; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0006B7FB: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_0006B7FF: ;
    eax = MEM32(esi + 0x50);
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006B825; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0006B820: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006B844; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006B825: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006B830; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0006B82A: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0006B844;

loc_0006B830: ;
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006B844; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm5.f[0]) */

loc_0006B840: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0006B844: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0006B88B; /* jne: not equal / not zero */

loc_0006B84E: ;
    _fca = xmm2.f[0]; _fcb = MEMF(0x8F95B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006B88B; /* jnp: not parity */

loc_0006B85B: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006B86Fu); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_0006B86F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006B87Au); RECOMP_ABI_CALL(0x0001C56Du, sub_0001C56D); /* call 0x0001C56D */

loc_0006B87A: ;
    xmm1 = XMM_SCALAR(MEMF(0x896CD4)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_0006B88B: ;
    edi = MEM32(esi + 0x20);
    xmm4.f[0] = xmm4.f[0] - MEMF(edi + 0x64); /* subss */
    xmm0 = xmm4; /* movaps */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006B8A0; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0006B89B: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006B8BC; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006B8A0: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006B8AB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0006B8A5: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0006B8BC;

loc_0006B8AB: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006B8BC; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0006B8B8: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0006B8BC: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x8F95B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006B978; /* jnp: not parity */

loc_0006B8D3: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0006B978; /* jne: not equal / not zero */

loc_0006B8DF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B93B; /* je: equal / zero */

loc_0006B8E3: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0006B93B; /* jl: less (signed <) */

loc_0006B8ED: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006B8FCu); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0006B8FC: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8F95E4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006B93B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8F95E4)) */

loc_0006B90C: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006B918u); RECOMP_ABI_CALL(0x00011E6Fu, sub_00011E6F); /* call 0x00011E6F */

loc_0006B918: ;
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7B1DE4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x6C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006B978; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x6C)) */

loc_0006B929: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0006B978; /* jg: greater (signed >) */

loc_0006B92E: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x6C); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    goto loc_0006B973;

loc_0006B93B: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006B94Fu); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_0006B94F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006B95Au); RECOMP_ABI_CALL(0x00011E6Fu, sub_00011E6F); /* call 0x00011E6F */

loc_0006B95A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006B960u); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_0006B960: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006B96B: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0xC0200000u);

loc_0006B973: ;
    PUSH32(esp, 0x0006B978u); RECOMP_ABI_CALL(0x000200DCu, sub_000200DC); /* call 0x000200DC */

loc_0006B978: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006B97Eu); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_0006B97E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006BA60
 * Original: 0x0006BA60 - 0x0006BB2A (202 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BA60(void)
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

loc_0006BA60: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x38));
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x18);
    ebx = eax;
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    ecx = edi;
    esi = esp + 0x10;
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006BA86u); RECOMP_ABI_CALL(0x0006A040u, sub_0006A040); /* call 0x0006A040 */

loc_0006BA86: ;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006BA93u); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_0006BA93: ;
    ecx = eax;
    PUSH32(esp, 0x0006BA9Au); RECOMP_ABI_CALL(0x0001E13Du, sub_0001E13D); /* call 0x0001E13D */

loc_0006BA9A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006BB23; /* je: equal / zero */

loc_0006BAA2: ;
    eax = MEM32(ebx + 0x30);
    esi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0006BB23; /* jne: not equal / not zero */

loc_0006BAAE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006BAC4u); RECOMP_ABI_CALL(0x00016235u, sub_00016235); /* call 0x00016235 */

loc_0006BAC4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8F95B0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006BAF6; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x8F95B0)) */

loc_0006BAD6: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B1820)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006BAF6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006BAE3: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0006BAEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006BAE8u); } /* indirect call */
    }

loc_0006BAEB: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x95) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x95)) >> 32) & 1);
    eax = eax + 0x95;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0006BB09;

loc_0006BAF6: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0006BAFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006BAFBu); } /* indirect call */
    }

loc_0006BAFE: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x94)) >> 32) & 1);
    eax = eax + 0x94;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006BB09: ;
    MEM32(edi + 0x20) = eax;
    _fa = (uint32_t)(MEM32(ebx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x38), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0006BB20; /* jne: not equal / not zero */

loc_0006BB12: ;
    MEM32(edi + 0x34) = 5;
    MEM32(edi + 0x38) = 2;

loc_0006BB20: ;
    MEM32(edi + 0x30) = esi;

loc_0006BB23: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006BB60
 * Original: 0x0006BB60 - 0x0006BB92 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0006BB60: ;
    SET_LO8(ecx, MEM8(eax + 0x1DC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006BB8F; /* jl: less (signed <) */

loc_0006BB6A: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    _fa = (uint32_t)(MEM8(edx + 0x52)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x52), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006BB8F; /* je: equal / zero */

loc_0006BB7B: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1C80); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006BB8F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B1C80)) */

loc_0006BB8C: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0006BB8F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006BBA0
 * Original: 0x0006BBA0 - 0x0006BBAF (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BBA0(void)
{

loc_0006BBA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0x0006BBACu); RECOMP_ABI_CALL(0x00020CBCu, sub_00020CBC); /* call 0x00020CBC */

loc_0006BBAC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006BBC0
 * Original: 0x0006BBC0 - 0x0006BBE7 (39 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006BBC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0006BBCEu); RECOMP_ABI_CALL(0x00030987u, sub_00030987); /* call 0x00030987 */

loc_0006BBCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006BBE0; /* je: equal / zero */

loc_0006BBD2: ;
    PUSH32(esp, esi);
    ecx = eax;
    edi = eax;
    PUSH32(esp, 0x0006BBDCu); RECOMP_ABI_CALL(0x00030987u, sub_00030987); /* call 0x00030987 */

loc_0006BBDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006BBD2; /* jne: not equal / not zero */

loc_0006BBE0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006BBF0
 * Original: 0x0006BBF0 - 0x0006BC38 (72 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006BBF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0006BC35; /* ja: above (unsigned >) */

loc_0006BBF9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x6BC38); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0006BC00u) goto loc_0006BC00;
    if (_jt == 0x0006BC0Eu) goto loc_0006BC0E;
    if (_jt == 0x0006BC1Cu) goto loc_0006BC1C;
    if (_jt == 0x0006BC2Au) goto loc_0006BC2A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0006BC00: ;
    eax = ecx + 0xC;
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0x0006BC0Bu); RECOMP_ABI_CALL(0x00020CBCu, sub_00020CBC); /* call 0x00020CBC */

loc_0006BC0B: ;
    esp += 8; return; /* ret 4 */

loc_0006BC0E: ;
    edx = ecx + 0x14;
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0x0006BC19u); RECOMP_ABI_CALL(0x00020CBCu, sub_00020CBC); /* call 0x00020CBC */

loc_0006BC19: ;
    esp += 8; return; /* ret 4 */

loc_0006BC1C: ;
    eax = ecx + 0x1C;
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0x0006BC27u); RECOMP_ABI_CALL(0x00020CBCu, sub_00020CBC); /* call 0x00020CBC */

loc_0006BC27: ;
    esp += 8; return; /* ret 4 */

loc_0006BC2A: ;
    edx = ecx + 0x20;
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0x0006BC35u); RECOMP_ABI_CALL(0x00020CBCu, sub_00020CBC); /* call 0x00020CBC */

loc_0006BC35: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006BC60
 * Original: 0x0006BC60 - 0x0006BCA5 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006BC60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x2C) = 0;
    MEM32(esi + 0x28) = 0;
    MEM32(esi + 0x30) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_0006BC8F; /* je: equal / zero */

loc_0006BC7F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006BC85u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0006BC85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_0006BC8F: ;
    ecx = MEM32(esi);
    eax = esi + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006BCA3; /* je: equal / zero */

loc_0006BC98: ;
    MEM32(esi + 4) = eax;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00020CBC(); return; /* tail jmp 0x00020CBC */

loc_0006BCA3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006BCC0
 * Original: 0x0006BCC0 - 0x0006BCD7 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BCC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006BCC0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x3B;
    MEM32(eax) = 0x7B1DF0;
    esp += 4; return; /* ret */

}

/**
 * sub_0006BCE0
 * Original: 0x0006BCE0 - 0x0006BCE6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BCE0(void)
{

loc_0006BCE0: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0006BCF0
 * Original: 0x0006BCF0 - 0x0006BCF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BCF0(void)
{

loc_0006BCF0: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0006BD00
 * Original: 0x0006BD00 - 0x0006BD3A (58 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006BD00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x0006BD0Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0006BD0D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006BD35; /* je: equal / zero */

loc_0006BD16: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0006BD1Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_0006BD1E: ;
    MEM32(esi) = 0x7B1DF0;
    SET_LO8(eax, MEM8(edi + 0x1C));
    MEM8(esi + 0x1C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x1D));
    POP32(esp, edi);
    MEM8(esi + 0x1D) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006BD35: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006BD50
 * Original: 0x0006BD50 - 0x0006BD7A (42 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BD50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006BD50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    MEM16(esi + 0xC) = 0x3B;
    MEM32(esi) = 0x7B1E00;
    PUSH32(esp, 0x0006BD73u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0006BD73: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006BD90
 * Original: 0x0006BD90 - 0x0006BE96 (262 bytes, 93 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0006BD90(void)
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

loc_0006BD90: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 8);
    ebp = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006BE60; /* je: equal / zero */

loc_0006BDA7: ;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006BE60; /* je: equal / zero */

loc_0006BDB0: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006BE60; /* je: equal / zero */

loc_0006BDBA: ;
    ecx = MEM32(ebp + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0006BDC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006BDBFu); } /* indirect call */
    }

loc_0006BDC2: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    ecx = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006BE50; /* jne: not equal / not zero */

loc_0006BDE6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006BE4F; /* je: equal / zero */

loc_0006BDEE: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006BDFDu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006BDFD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006BE43; /* je: equal / zero */

loc_0006BE04: ;
    edx = MEM32(eax + 0x28);
    edi = MEM32(edx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006BE43; /* je: equal / zero */

loc_0006BE0E: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006BE1Au); RECOMP_ABI_CALL(0x0001B2F3u, sub_0001B2F3); /* call 0x0001B2F3 */

loc_0006BE1A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006BE27; /* jne: not equal / not zero */

loc_0006BE1E: ;
    edx = edi;
    ecx = ebx;
    PUSH32(esp, 0x0006BE27u); RECOMP_ABI_CALL(0x0006A000u, sub_0006A000); /* call 0x0006A000 */

loc_0006BE27: ;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0x0006BE2Fu); RECOMP_ABI_CALL(0x0006ADD0u, sub_0006ADD0); /* call 0x0006ADD0 */

loc_0006BE2F: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0006BE3Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0006BE37u); } /* indirect call */
    }

loc_0006BE3A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0006BE43: ;
    ecx = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0006BE4Fu); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_0006BE4F: ;
    POP32(esp, ebx);

loc_0006BE50: ;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0006BE57u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0006BE54u); } /* indirect call */
    }

loc_0006BE57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0006BE60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x30) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_0006BE7D; /* je: equal / zero */

loc_0006BE71: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006BE77u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0006BE77: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edi;

loc_0006BE7D: ;
    ecx = MEM32(esi);
    eax = esi + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006BE90; /* je: equal / zero */

loc_0006BE86: ;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0006BE90u); RECOMP_ABI_CALL(0x00020CBCu, sub_00020CBC); /* call 0x00020CBC */

loc_0006BE90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006BEE0
 * Original: 0x0006BEE0 - 0x0006C073 (403 bytes, 133 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006BEE0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0006C03B; /* je: equal / zero */

loc_0006BEF6: ;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0006C03B; /* je: equal / zero */

loc_0006BEFF: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0006C03B; /* je: equal / zero */

loc_0006BF09: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0006BF19u); RECOMP_ABI_CALL(0x0001B2F3u, sub_0001B2F3); /* call 0x0001B2F3 */

loc_0006BF19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C028; /* je: equal / zero */

loc_0006BF21: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0006BF2Du); RECOMP_ABI_CALL(0x00015E61u, sub_00015E61); /* call 0x00015E61 */

loc_0006BF2D: ;
    edi = eax;
    fp_push(MEMF(edi + 0xC)); /* fld float */
    eax = MEM32(esi + 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7A9980)); /* fsub dword ptr [0x7a9980] */
    ecx = MEM32(eax + 0x44);
    eax = MEM32(ecx);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0006BF47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006BF44u); } /* indirect call */
    }

loc_0006BF47: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006C028; /* jp: parity */

loc_0006BF59: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0006BF60u); RECOMP_ABI_CALL(0x000320D4u, sub_000320D4); /* call 0x000320D4 */

loc_0006BF60: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0xC); /* subss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x44); /* cvttss2si */
    ebp = MEM32(ebx + 0x54);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(4)) >> 32) & 1);
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(eax));
    _fb = (uint32_t)(5) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(5)) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + 5);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(ebp + 2) = LO8(eax);
    MEM8(ebp + 3) = LO8(ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0006BFA2; /* jl: less (signed <) */

loc_0006BF8E: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0006BF95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006BF92u); } /* indirect call */
    }

loc_0006BF95: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebp + 4) = LO8(eax);

loc_0006BFA2: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(esi + 8);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249CF);
    PUSH32(esp, 0x69E10);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0006BFCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006BFC9u); } /* indirect call */
    }

loc_0006BFCC: ;
    eax = MEM32(ebx + 0x54);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x28);
    edx = MEM32(eax + 0x1D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006BFE1u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006BFE1: ;
    eax = MEM32(eax + 0x28);
    ebp = MEM32(eax + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, 0x0006BFF3u); RECOMP_ABI_CALL(0x000144FDu, sub_000144FD); /* call 0x000144FD */

loc_0006BFF3: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    edi = esp + 0x18;
    PUSH32(esp, 0x0006C001u); RECOMP_ABI_CALL(0x0006A260u, sub_0006A260); /* call 0x0006A260 */

loc_0006C001: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, 0x0006C00Du); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0006C00D: ;
    ecx = MEM32(esi + 8);
    edx = edi;
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0x0006C01Au); RECOMP_ABI_CALL(0x0006A1C0u, sub_0006A1C0); /* call 0x0006A1C0 */

loc_0006C01A: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    PUSH32(esp, 0x0006C027u); RECOMP_ABI_CALL(0x0006A000u, sub_0006A000); /* call 0x0006A000 */

loc_0006C027: ;
    POP32(esp, ebp);

loc_0006C028: ;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0006C02Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0006C02Cu); } /* indirect call */
    }

loc_0006C02F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0006C03B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x30) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_0006C058; /* je: equal / zero */

loc_0006C04C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006C052u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0006C052: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edi;

loc_0006C058: ;
    ecx = MEM32(esi);
    eax = esi + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0006C06B; /* je: equal / zero */

loc_0006C061: ;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0006C06Bu); RECOMP_ABI_CALL(0x00020CBCu, sub_00020CBC); /* call 0x00020CBC */

loc_0006C06B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006C0E0
 * Original: 0x0006C0E0 - 0x0006C22D (333 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C0E0(void)
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

loc_0006C0E0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    edx = MEM32(esi + 0x1D4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C0F7u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006C0F7: ;
    eax = MEM32(eax + 0x28);
    ecx = MEM32(eax + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006C10F; /* jg: greater (signed >) */

loc_0006C10C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0006C10F: ;
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006C11Bu); RECOMP_ABI_CALL(0x0001E386u, sub_0001E386); /* call 0x0001E386 */

loc_0006C11B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B1C34)); /* fadd dword ptr [0x7b1c34] */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006C12Bu); RECOMP_ABI_CALL(0x0001E386u, sub_0001E386); /* call 0x0001E386 */

loc_0006C12B: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) - fp_top()); /* fsubr dword ptr [esp + 0x18] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xD);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B1E10)); /* fmul dword ptr [0x7b1e10] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006C145u); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_0006C145: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    PUSH32(esp, 3);
    ecx = edi;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006C158u); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_0006C158: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) - fp_top()); /* fsubr dword ptr [esp + 0x10] */
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0006C17B; /* jge: greater or equal (signed >=) */

loc_0006C178: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0006C17B: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006C188u); RECOMP_ABI_CALL(0x00013F8Fu, sub_00013F8F); /* call 0x00013F8F */

loc_0006C188: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(edi + 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006C195u); RECOMP_ABI_CALL(0x00016BBDu, sub_00016BBD); /* call 0x00016BBD */

loc_0006C195: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B1C1C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C1A7; /* jne: not equal / not zero */

loc_0006C1A4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0006C1A7: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, ecx);
    ecx = 0x8E9710;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006C1BCu); RECOMP_ABI_CALL(0x0001C892u, sub_0001C892); /* call 0x0001C892 */

loc_0006C1BC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    POP32(esp, edi);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = 2;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B1C20)); /* fmul dword ptr [0x7b1c20] */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B1C1C)); /* fmul dword ptr [0x7b1c1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B1C58)); /* fmul dword ptr [0x7b1c58] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B1C58)); /* fmul dword ptr [0x7b1c58] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7B1C04)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0006C215; /* jbe: below or equal (unsigned <=) */

loc_0006C20F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006C215: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1C40); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006C229; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B1C40)) */

loc_0006C224: ;
    eax = 1;

loc_0006C229: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006C280
 * Original: 0x0006C280 - 0x0006C5BC (828 bytes, 247 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C280(void)
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

loc_0006C280: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006C294u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006C294: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C5B7; /* je: equal / zero */

loc_0006C29F: ;
    ecx = MEM32(esi + 0x1D4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006C2AEu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006C2AE: ;
    edx = MEM32(eax + 0x28);
    edi = MEM32(esi + 0x54);
    SET_LO8(eax, MEM8(edi + 8));
    ebp = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0006C2C5; /* jne: not equal / not zero */

loc_0006C2C3: ;
    SET_LO8(ebx, 1);

loc_0006C2C5: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 6);
    SET_LO8(eax, MEM8(edi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0006C2DE; /* jge: greater or equal (signed >=) */

loc_0006C2D4: ;
    MEM32(esp + 0x44) = 0x7F;
    goto loc_0006C2E5;

loc_0006C2DE: ;
    eax = SX8(LO8(eax));
    MEM32(esp + 0x44) = eax;

loc_0006C2E5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0006C488; /* jle: less or equal (signed <=) */

loc_0006C2ED: ;
    ecx = MEM32(esi + 0x44);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edx = MEM32(ecx);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0006C2FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006C2FAu); } /* indirect call */
    }

loc_0006C2FD: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0006C488; /* jb: below (unsigned <) */

loc_0006C30D: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0006C315u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006C312u); } /* indirect call */
    }

loc_0006C315: ;
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0006C488; /* jb: below (unsigned <) */

loc_0006C323: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C488; /* je: equal / zero */

loc_0006C32B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x30), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0006C488; /* jne: not equal / not zero */

loc_0006C335: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0006C33Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006C33Au); } /* indirect call */
    }

loc_0006C33D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006C45D; /* jp: parity */

loc_0006C34F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0006C375; /* jne: not equal / not zero */

loc_0006C353: ;
    ebx = MEM32(0x8E975C);
    PUSH32(esp, 0x569);
    PUSH32(esp, 0x7B1DAC);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x0006C36Au); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0006C36A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0006C45D; /* jge: greater or equal (signed >=) */

loc_0006C375: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0006C45D; /* je: equal / zero */

loc_0006C382: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0006C45D; /* je: equal / zero */

loc_0006C38A: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(eax + 0x30);
    xmm1 = XMM_SCALAR(MEMF(0x7B047C)); /* movss */
    ecx = eax;
    PUSH32(esp, ecx);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006C3BBu); RECOMP_ABI_CALL(0x0002A0AAu, sub_0002A0AA); /* call 0x0002A0AA */

loc_0006C3BB: ;
    fp_push(MEMF(0x8E931C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0006C3E0; /* jbe: below or equal (unsigned <=) */

loc_0006C3CC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD374); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0006C3E0: ;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C3EAu); RECOMP_ABI_CALL(0x0002A0AAu, sub_0002A0AA); /* call 0x0002A0AA */

loc_0006C3EA: ;
    fp_push(MEMF(0x896CE8)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0006C40F; /* jbe: below or equal (unsigned <=) */

loc_0006C3FB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD3B8); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0006C40F: ;
    PUSH32(esp, 0x0006C414u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_0006C414: ;
    ecx = eax;
    PUSH32(esp, 0x0006C41Bu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_0006C41B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C45D; /* je: equal / zero */

loc_0006C41F: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006C429u); RECOMP_ABI_CALL(0x0002AF5Fu, sub_0002AF5F); /* call 0x0002AF5F */

loc_0006C429: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C45D; /* je: equal / zero */

loc_0006C430: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x0006C437u); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_0006C437: ;
    ecx = eax;
    PUSH32(esp, 0x0006C43Eu); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_0006C43E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0006C452u); RECOMP_ABI_CALL(0x0003168Eu, sub_0003168E); /* call 0x0003168E */

loc_0006C452: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0006C45Bu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0006C45B: ;
    goto loc_0006C482;

loc_0006C45D: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7B1C6C); /* addss */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006C47Cu); RECOMP_ABI_CALL(0x00036F8Au, sub_00036F8A); /* call 0x00036F8A */

loc_0006C47C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0006C482: ;
    MEM8(edi + 6) = LO8(ebx);
    MEM8(edi + 7) = LO8(ebx);

loc_0006C488: ;
    eax = MEM32(esi + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C54B; /* je: equal / zero */

loc_0006C496: ;
    edi = MEM32(edi + 0x10);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0006C4A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006C49Du); } /* indirect call */
    }

loc_0006C4A0: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0006C4B9; /* jge: greater or equal (signed >=) */

loc_0006C4A6: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x44); /* cvttss2si */
    ebx = eax;

loc_0006C4B9: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0006C4C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006C4BEu); } /* indirect call */
    }

loc_0006C4C1: ;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 0x44); /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7B1BE8); /* subss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006C5B4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006C4E4: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0006C4EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006C4E8u); } /* indirect call */
    }

loc_0006C4EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0006C4F4; /* jne: not equal / not zero */

loc_0006C4EF: ;
    eax = 0xF5;

loc_0006C4F4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x167A8);
    PUSH32(esp, 0x69E10);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0006C516u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006C513u); } /* indirect call */
    }

loc_0006C516: ;
    eax = MEM32(esi + 0x54);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x54);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x54);
    MEM32(eax + 0xC) = 4;
    ecx = MEM32(esi + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006C538u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006C538: ;
    ecx = MEM32(eax + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0006C543u); RECOMP_ABI_CALL(0x00015D2Bu, sub_00015D2B); /* call 0x00015D2B */

loc_0006C543: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006C54B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C57F; /* je: equal / zero */

loc_0006C54F: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0006C557u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006C554u); } /* indirect call */
    }

loc_0006C557: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0006C56F; /* jne: not equal / not zero */

loc_0006C55C: ;
    eax = MEM32(0x8E9B10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0006C569u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0006C569: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C5B4; /* je: equal / zero */

loc_0006C56D: ;
    goto loc_0006C57F;

loc_0006C56F: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006C57Bu); RECOMP_ABI_CALL(0x0001B2F3u, sub_0001B2F3); /* call 0x0001B2F3 */

loc_0006C57B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0006C5B4; /* jne: not equal / not zero */

loc_0006C57F: ;
    _fa = (uint32_t)(MEM8(edi + 8)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 8), 8 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0006C59B; /* je: equal / zero */

loc_0006C585: ;
    eax = MEM32(esi + 0x54);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM32(esi + 0x2C) = 5;
    PUSH32(esp, 0x0006C598u); RECOMP_ABI_CALL(0x0001C15Du, sub_0001C15D); /* call 0x0001C15D */

loc_0006C598: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006C59B: ;
    ecx = MEM32(esi + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006C5A7u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006C5A7: ;
    edx = MEM32(eax + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x30) = 2;

loc_0006C5B4: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0006C5B7: ;
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
 * sub_0006C690
 * Original: 0x0006C690 - 0x0006CA32 (930 bytes, 285 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C690(void)
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

loc_0006C690: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_0006C6C9; /* jge: greater or equal (signed >=) */

loc_0006C6AA: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1C2C); /* comiss */
    if ((_fca > _fcb)) goto loc_0006C6C9; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7B1C2C)) */

loc_0006C6BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006C6C1u); RECOMP_ABI_CALL(0x0001C15Du, sub_0001C15D); /* call 0x0001C15D */

loc_0006C6C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006C6C9: ;
    ecx = MEM32(esi + 0x1D4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0006C6D8u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006C6D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C869; /* je: equal / zero */

loc_0006C6E3: ;
    edx = MEM32(eax + 0x2C);
    edi = MEM32(edx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C869; /* je: equal / zero */

loc_0006C6F1: ;
    PUSH32(esp, 0x41000000);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006C702u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_0006C702: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C712u); RECOMP_ABI_CALL(0x000189B8u, sub_000189B8); /* call 0x000189B8 */

loc_0006C712: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0006C861; /* jl: less (signed <) */

loc_0006C729: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006C737u); RECOMP_ABI_CALL(0x00016F50u, sub_00016F50); /* call 0x00016F50 */

loc_0006C737: ;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C744u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0006C744: ;
    ecx = eax;
    PUSH32(esp, 0x0006C74Bu); RECOMP_ABI_CALL(0x000217E8u, sub_000217E8); /* call 0x000217E8 */

loc_0006C74B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C859; /* je: equal / zero */

loc_0006C753: ;
    ecx = MEM32(eax + 0x14);
    ecx = ecx + ecx * 2;
    SET_LO8(edx, MEM8(eax + ecx * 4 + 0x22));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0006C859; /* jbe: below or equal (unsigned <=) */

loc_0006C765: ;
    ecx = MEM32(eax + 0x14);
    edx = ecx + ecx * 2;
    SET_LO8(ecx, MEM8(eax + edx * 4 + 0x20));
    eax = eax + edx * 4;
    MEM8(esp + 0x40) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x1F));
    eax = MEM32(esp + 0x40);
    MEM8(esp + 0x10) = LO8(edx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006C78Cu); RECOMP_ABI_CALL(0x00013AA8u, sub_00013AA8); /* call 0x00013AA8 */

loc_0006C78C: ;
    edx = ZX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B1E18); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x44;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006C7ACu); RECOMP_ABI_CALL(0x00012EAAu, sub_00012EAA); /* call 0x00012EAA */

loc_0006C7AC: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006C7B3u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_0006C7B3: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x41000000);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0006C7D0u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_0006C7D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006C7D6u); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_0006C7D6: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C7E6u); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_0006C7E6: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C7FAu); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_0006C7FA: ;
    PUSH32(esp, eax);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006C805u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0006C805: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F95E4)); /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006C822; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0006C81B: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca > _fcb)) goto loc_0006C82F; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x18)) */

loc_0006C822: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B1E14)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006C851; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006C82F: ;
    PUSH32(esp, 0x3EE66666);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006C848u); RECOMP_ABI_CALL(0x00013260u, sub_00013260); /* call 0x00013260 */

loc_0006C848: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0006C861;

loc_0006C851: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    goto loc_0006C861;

loc_0006C859: ;
    ecx = MEM32(esi + 0x50);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */

loc_0006C861: ;
    edx = MEM32(esi + 0x50);
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */

loc_0006C869: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006C87Au); RECOMP_ABI_CALL(0x000202E9u, sub_000202E9); /* call 0x000202E9 */

loc_0006C87A: ;
    ecx = MEM32(esi + 0x44);
    MEM8(esp + 0x50) = LO8(eax);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0006C889u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006C886u); } /* indirect call */
    }

loc_0006C889: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x85) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x85 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0006C8A3; /* je: equal / zero */

loc_0006C890: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0006C898u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006C895u); } /* indirect call */
    }

loc_0006C898: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x86) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x86 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0006C8A3; /* je: equal / zero */

loc_0006C89F: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0006C8A5;

loc_0006C8A3: ;
    SET_LO8(ebx, 1);

loc_0006C8A5: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0006C8ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006C8AAu); } /* indirect call */
    }

loc_0006C8AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0006C90C; /* jne: not equal / not zero */

loc_0006C8B4: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0006C8BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006C8B9u); } /* indirect call */
    }

loc_0006C8BC: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0006C8C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006C8C5u); } /* indirect call */
    }

loc_0006C8C8: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    fp_push(MEMF(0x7B1BE8)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0006C8EF; /* jbe: below or equal (unsigned <=) */

loc_0006C8DA: ;
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca > _fcb)) goto loc_0006CA2B; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0006C8EF: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0006C8F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006C8F4u); } /* indirect call */
    }

loc_0006C8F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0006C9A0; /* jne: not equal / not zero */

loc_0006C902: ;
    eax = 0x87;
    goto loc_0006CA09;

loc_0006C90C: ;
    SET_LO8(eax, MEM8(esp + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C8EF; /* je: equal / zero */

loc_0006C914: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0006C8EF; /* jl: less (signed <) */

loc_0006C91E: ;
    edx = MEM32(esi + 0x50);
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x64); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x896CD4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006C943; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006C93E: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006C95F; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0006C943: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006C94E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006C948: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_0006C95F;

loc_0006C94E: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006C95F; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006C95B: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_0006C95F: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x8F95B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006C8EF; /* jnp: not parity */

loc_0006C976: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006C985u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0006C985: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8F95E4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006C8EF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8F95E4)) */

loc_0006C999: ;
    eax = 0x11A;
    goto loc_0006CA09;

loc_0006C9A0: ;
    PUSH32(esp, 0x40C00000);
    ecx = esi;
    PUSH32(esp, 0x0006C9ACu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0006C9AC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0006C9C2; /* jne: not equal / not zero */

loc_0006C9B0: ;
    SET_LO8(eax, MEM8(esp + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C9BE; /* je: equal / zero */

loc_0006C9B8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0006CA2B; /* jne: not equal / not zero */

loc_0006C9BC: ;
    goto loc_0006C9C2;

loc_0006C9BE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CA2B; /* je: equal / zero */

loc_0006C9C2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C9FA; /* je: equal / zero */

loc_0006C9C6: ;
    SET_LO8(eax, MEM8(esp + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C9FA; /* je: equal / zero */

loc_0006C9CE: ;
    ecx = MEM32(edi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006C9DBu); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_0006C9DB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C9F3; /* je: equal / zero */

loc_0006C9E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0006C9EC; /* jle: less or equal (signed <=) */

loc_0006C9E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0006C9F3; /* jle: less or equal (signed <=) */

loc_0006C9EC: ;
    eax = 0x86;
    goto loc_0006CA09;

loc_0006C9F3: ;
    eax = 0x85;
    goto loc_0006CA09;

loc_0006C9FA: ;
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFFFFEDu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x9A)) >> 32) & 1);
    ebx = ebx + 0x9A;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;

loc_0006CA09: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6B640);
    PUSH32(esp, 0x6C690);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0006CA2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006CA28u); } /* indirect call */
    }

loc_0006CA2B: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
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
 * sub_0006CB20
 * Original: 0x0006CB20 - 0x0006CB56 (54 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006CB20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0006CB2Eu); RECOMP_ABI_CALL(0x00030987u, sub_00030987); /* call 0x00030987 */

loc_0006CB2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CB47; /* je: equal / zero */

loc_0006CB32: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0006CB3Au); RECOMP_ABI_CALL(0x00034AAAu, sub_00034AAA); /* call 0x00034AAA */

loc_0006CB3A: ;
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0006CB42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006CB40u); } /* indirect call */
    }

loc_0006CB42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0006CB47: ;
    eax = esi;
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0006CB51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006CB4Fu); } /* indirect call */
    }

loc_0006CB51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006CB70
 * Original: 0x0006CB70 - 0x0006CBA3 (51 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006CB70: ;
    eax = MEM32(0x8F010C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x44);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0006CB81u); RECOMP_ABI_CALL(0x00030987u, sub_00030987); /* call 0x00030987 */

loc_0006CB81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CB97; /* je: equal / zero */

loc_0006CB85: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0006CB8Du); RECOMP_ABI_CALL(0x00034AAAu, sub_00034AAA); /* call 0x00034AAA */

loc_0006CB8D: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0006CB95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006CB93u); } /* indirect call */
    }

loc_0006CB95: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0006CB97: ;
    eax = edi;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0006CBA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006CB9Fu); } /* indirect call */
    }

loc_0006CBA1: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006CBB0
 * Original: 0x0006CBB0 - 0x0006CC5A (170 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006CBB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0006CBBCu); RECOMP_ABI_CALL(0x00069570u, sub_00069570); /* call 0x00069570 */

loc_0006CBBC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0006CBE2; /* je: equal / zero */

loc_0006CBC4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006CBCAu); RECOMP_ABI_CALL(0x0006AA50u, sub_0006AA50); /* call 0x0006AA50 */

loc_0006CBCA: ;
    SET_LO8(ebx, LO8(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CBDD; /* je: equal / zero */

loc_0006CBD3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006CBDAu); RECOMP_ABI_CALL(0x00069E20u, sub_00069E20); /* call 0x00069E20 */

loc_0006CBDA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006CBDD: ;
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006CBE2: ;
    eax = edi;
    PUSH32(esp, 0x0006CBE9u); RECOMP_ABI_CALL(0x00069700u, sub_00069700); /* call 0x00069700 */

loc_0006CBE9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CBDD; /* je: equal / zero */

loc_0006CBF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006CBF7u); RECOMP_ABI_CALL(0x00069E20u, sub_00069E20); /* call 0x00069E20 */

loc_0006CBF7: ;
    eax = MEM32(0x8F010C);
    ebx = MEM32(eax + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0006CC0Au); RECOMP_ABI_CALL(0x00030987u, sub_00030987); /* call 0x00030987 */

loc_0006CC0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CC18; /* je: equal / zero */

loc_0006CC0E: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0006CC16u); RECOMP_ABI_CALL(0x00034AAAu, sub_00034AAA); /* call 0x00034AAA */

loc_0006CC16: ;
    goto loc_0006CC1A;

loc_0006CC18: ;
    eax = ebx;

loc_0006CC1A: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0006CC22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006CC20u); } /* indirect call */
    }

loc_0006CC22: ;
    eax = MEM32(0x8F010C);
    edi = MEM32(eax + 0x44);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0006CC32u); RECOMP_ABI_CALL(0x00030987u, sub_00030987); /* call 0x00030987 */

loc_0006CC32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CC4B; /* je: equal / zero */

loc_0006CC36: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0006CC3Eu); RECOMP_ABI_CALL(0x00034AAAu, sub_00034AAA); /* call 0x00034AAA */

loc_0006CC3E: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0006CC46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006CC44u); } /* indirect call */
    }

loc_0006CC46: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006CC4B: ;
    eax = edi;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0006CC55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006CC53u); } /* indirect call */
    }

loc_0006CC55: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006CC90
 * Original: 0x0006CC90 - 0x0006CD82 (242 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006CC90: ;
    PUSH32(esp, ecx);
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_0006CCA7; /* je: equal / zero */

loc_0006CC9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CCA7; /* je: equal / zero */

loc_0006CCA3: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0006CCA9;

loc_0006CCA7: ;
    SET_LO8(eax, 1);

loc_0006CCA9: ;
    edx = MEM32(edi + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x6C280;
    if (CMP_NE(_fa, _fb)) goto loc_0006CCBF; /* jne: not equal / not zero */

loc_0006CCBA: ;
    eax = 0x6B570;

loc_0006CCBF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(edi + 0x1C) = eax;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006CCD7u); RECOMP_ABI_CALL(0x0001B2F3u, sub_0001B2F3); /* call 0x0001B2F3 */

loc_0006CCD7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CD01; /* je: equal / zero */

loc_0006CCDB: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006CCE7u); RECOMP_ABI_CALL(0x00015E61u, sub_00015E61); /* call 0x00015E61 */

loc_0006CCE7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CD7E; /* je: equal / zero */

loc_0006CCEF: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = 0x1F99D;
    goto loc_0006CD5A;

loc_0006CD01: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CD3F; /* je: equal / zero */

loc_0006CD05: ;
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006CD11u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006CD11: ;
    ecx = MEM32(eax + 0x28);
    edx = MEM32(ecx + 0x28);
    ecx = MEM32(0x8EB3BC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006CD2Du); RECOMP_ABI_CALL(0x0002A483u, sub_0002A483); /* call 0x0002A483 */

loc_0006CD2D: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006CD3Du); RECOMP_ABI_CALL(0x0003704Du, sub_0003704D); /* call 0x0003704D */

loc_0006CD3D: ;
    goto loc_0006CD55;

loc_0006CD3F: ;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CD55; /* je: equal / zero */

loc_0006CD45: ;
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006CD55u); RECOMP_ABI_CALL(0x0001761Cu, sub_0001761C); /* call 0x0001761C */

loc_0006CD55: ;
    eax = 0x6B480;

loc_0006CD5A: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x20);
    PUSH32(esp, 0x69E10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0006CD7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006CD7Bu); } /* indirect call */
    }

loc_0006CD7E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006CDC0
 * Original: 0x0006CDC0 - 0x0006CEB5 (245 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CDC0(void)
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

loc_0006CDC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    eax = ebp;
    PUSH32(esp, 0x0006CDD3u); RECOMP_ABI_CALL(0x0006C0E0u, sub_0006C0E0); /* call 0x0006C0E0 */

loc_0006CDD3: ;
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, 0x0006CDDBu); RECOMP_ABI_CALL(0x0006A890u, sub_0006A890); /* call 0x0006A890 */

loc_0006CDDB: ;
    xmm1 = XMM_SCALAR(MEMF(0x8E9764)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x7B1C48)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    esi = 1;
    if ((_fca > _fcb)) goto loc_0006CE1F; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006CDFC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006CE0E; /* jne: not equal / not zero */

loc_0006CE00: ;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, 0x0006CE08u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0006CE08: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006CE1F; /* jne: not equal / not zero */

loc_0006CE0C: ;
    goto loc_0006CE21;

loc_0006CE0E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006CE21; /* jne: not equal / not zero */

loc_0006CE13: ;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, 0x0006CE1Bu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0006CE1B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CE21; /* je: equal / zero */

loc_0006CE1F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006CE21: ;
    ecx = esi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 5;
    if ((_fa == 0)) goto loc_0006CE7B; /* je: equal / zero */

loc_0006CE2D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0006CEA3; /* jne: not equal / not zero */

loc_0006CE30: ;
    eax = edi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0006CE67; /* je: equal / zero */

loc_0006CE37: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0006CE53; /* je: equal / zero */

loc_0006CE3C: ;
    POP32(esp, edi);
    eax = 2;
    ecx = 4;
    POP32(esp, esi);
    MEM32(ebp + 0x24) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    MEM32(ebx + 0x24) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006CE53: ;
    eax = 4;
    POP32(esp, edi);
    ecx = eax;
    POP32(esp, esi);
    MEM32(ebp + 0x24) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    MEM32(ebx + 0x24) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006CE67: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 4;
    POP32(esp, esi);
    MEM32(ebp + 0x24) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    MEM32(ebx + 0x24) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006CE7B: ;
    eax = edi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0006CE9E; /* je: equal / zero */

loc_0006CE82: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0006CE3C; /* jne: not equal / not zero */

loc_0006CE87: ;
    POP32(esp, edi);
    eax = 3;
    ecx = 4;
    POP32(esp, esi);
    MEM32(ebp + 0x24) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    MEM32(ebx + 0x24) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006CE9E: ;
    eax = 1;

loc_0006CEA3: ;
    POP32(esp, edi);
    ecx = 4;
    POP32(esp, esi);
    MEM32(ebp + 0x24) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    MEM32(ebx + 0x24) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006CF00
 * Original: 0x0006CF00 - 0x0006D012 (274 bytes, 88 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006CF00: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0006CFC4; /* je: equal / zero */

loc_0006CF12: ;
    ecx = MEM32(ebx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CFC2; /* je: equal / zero */

loc_0006CF1D: ;
    PUSH32(esp, 8);
    eax = esp + 0x34;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM16(esp + 0x20) = 0x3B;
    MEM32(esp + 0x14) = 0x7B1E00;
    PUSH32(esp, 0x0006CF4Au); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0006CF4A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edi = esp + 0x1C;
    PUSH32(esp, 0x0006CF55u); RECOMP_ABI_CALL(0x0006A260u, sub_0006A260); /* call 0x0006A260 */

loc_0006CF55: ;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, 0x0006CF67u); RECOMP_ABI_CALL(0x0001B2F3u, sub_0001B2F3); /* call 0x0001B2F3 */

loc_0006CF67: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006CF83; /* jne: not equal / not zero */

loc_0006CF6B: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0006CF74u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0006CF74: ;
    edx = edi;
    PUSH32(esp, edx);
    edi = ebx;
    eax = esi;
    PUSH32(esp, 0x0006CF80u); RECOMP_ABI_CALL(0x0006BA60u, sub_0006BA60); /* call 0x0006BA60 */

loc_0006CF80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006CF83: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006CF8Cu); RECOMP_ABI_CALL(0x000320D4u, sub_000320D4); /* call 0x000320D4 */

loc_0006CF8C: ;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006CF95u); RECOMP_ABI_CALL(0x000320D4u, sub_000320D4); /* call 0x000320D4 */

loc_0006CF95: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    PUSH32(esp, 0x0006CF9Fu); RECOMP_ABI_CALL(0x0006CC90u, sub_0006CC90); /* call 0x0006CC90 */

loc_0006CF9F: ;
    edi = ebx;
    PUSH32(esp, 0x0006CFA6u); RECOMP_ABI_CALL(0x0006CC90u, sub_0006CC90); /* call 0x0006CC90 */

loc_0006CFA6: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 0x54);
    MEM32(eax) = MEM32(eax) | 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebx + 0x18);
    eax = MEM32(eax + 0x54);
    ecx = MEM32(eax);
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006CFC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */

loc_0006CFC4: ;
    if (CMP_EQ(_fa, _fb)) esi = ebx; /* cmove */
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006CFD0u); RECOMP_ABI_CALL(0x000320D4u, sub_000320D4); /* call 0x000320D4 */

loc_0006CFD0: ;
    edi = esi;
    MEM32(esi + 0x28) = 2;
    PUSH32(esp, 0x0006CFDEu); RECOMP_ABI_CALL(0x0006CC90u, sub_0006CC90); /* call 0x0006CC90 */

loc_0006CFDE: ;
    eax = MEM32(esi + 0x18);
    edx = MEM32(eax + 0x1D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006CFEDu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006CFED: ;
    eax = MEM32(eax + 0x28);
    ecx = MEM32(eax + 0x28);
    edx = MEM32(esi + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006D00Cu); RECOMP_ABI_CALL(0x0002A483u, sub_0002A483); /* call 0x0002A483 */

loc_0006D00C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006D060
 * Original: 0x0006D060 - 0x0006D13D (221 bytes, 81 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006D060: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 0x28) = eax;
    ebx = ebp;
    eax = esi;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0006D082u); RECOMP_ABI_CALL(0x0006CF00u, sub_0006CF00); /* call 0x0006CF00 */

loc_0006D082: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D0C0; /* je: equal / zero */

loc_0006D089: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D099; /* je: equal / zero */

loc_0006D090: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D096u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0006D096: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006D099: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x0006D0A5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0006D0A5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D0BB; /* je: equal / zero */

loc_0006D0AC: ;
    ecx = 0x11;
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
    edi = MEM32(esp + 0x10);
    goto loc_0006D0BD;

loc_0006D0BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006D0BD: ;
    MEM32(edi + 8) = eax;

loc_0006D0C0: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D128; /* je: equal / zero */

loc_0006D0C7: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(eax + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006D0D6u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006D0D6: ;
    ebx = MEM32(eax + 0x28);
    eax = MEM32(ebx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D0EC; /* je: equal / zero */

loc_0006D0E3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D0E9u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0006D0E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006D0EC: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x0006D0F8u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0006D0F8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D110; /* je: equal / zero */

loc_0006D0FF: ;
    ecx = 0x11;
    esi = ebp;
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
    edi = MEM32(esp + 0x10);
    goto loc_0006D112;

loc_0006D110: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006D112: ;
    MEM32(ebx + 8) = eax;
    edx = MEM32(edi + 0x24);
    eax = ebx + 0x20;
    ecx = ebx;
    MEM32(ebx + 0x28) = edx;
    MEM32(ebx + 4) = eax;
    PUSH32(esp, 0x0006D128u); RECOMP_ABI_CALL(0x00020CBCu, sub_00020CBC); /* call 0x00020CBC */

loc_0006D128: ;
    ecx = edi + 0x1C;
    MEM32(edi + 4) = ecx;
    ecx = edi;
    PUSH32(esp, 0x0006D135u); RECOMP_ABI_CALL(0x00020CBCu, sub_00020CBC); /* call 0x00020CBC */

loc_0006D135: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006D180
 * Original: 0x0006D180 - 0x0006D2F6 (374 bytes, 122 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D180(void)
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

loc_0006D180: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x90);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x24);
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D1AA; /* jne: not equal / not zero */

loc_0006D1A1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006D1A7u); RECOMP_ABI_CALL(0x000320D4u, sub_000320D4); /* call 0x000320D4 */

loc_0006D1A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006D1AA: ;
    ecx = edi;
    PUSH32(esp, 0x0006D1B1u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0006D1B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D1DA; /* jne: not equal / not zero */

loc_0006D1B5: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x1E (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006D1DA; /* jle: less or equal (signed <=) */

loc_0006D1BB: ;
    eax = MEM32(edi + 0x248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D1DA; /* jne: not equal / not zero */

loc_0006D1C5: ;
    _fa = (uint32_t)(MEM32(edi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D1DA; /* je: equal / zero */

loc_0006D1CB: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0006D1D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006D1CFu); } /* indirect call */
    }

loc_0006D1D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D1DA; /* je: equal / zero */

loc_0006D1D6: ;
    SET_LO8(eax, 1);
    goto loc_0006D1DC;

loc_0006D1DA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0006D1DC: ;
    ecx = MEM32(ebp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D203; /* je: equal / zero */

loc_0006D1E3: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D224; /* je: equal / zero */

loc_0006D1EA: ;
    eax = ebp + 0x20;
    ecx = ebp;
    MEM32(ebp + 4) = eax;
    PUSH32(esp, 0x0006D1F7u); RECOMP_ABI_CALL(0x00020CBCu, sub_00020CBC); /* call 0x00020CBC */

loc_0006D1F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0006D203: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D2EA; /* je: equal / zero */

loc_0006D20B: ;
    ecx = ebp + 0x14;
    MEM32(ebp + 4) = ecx;
    ecx = ebp;
    PUSH32(esp, 0x0006D218u); RECOMP_ABI_CALL(0x00020CBCu, sub_00020CBC); /* call 0x00020CBC */

loc_0006D218: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0006D224: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D2EA; /* je: equal / zero */

loc_0006D22C: ;
    SET_LO8(eax, MEM8(edi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006D2EA; /* jl: less (signed <) */

loc_0006D23A: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    eax = MEM32(edx * 4 + 0x8F00F8);
    _fa = (uint32_t)(MEM8(eax + 0x52)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x52), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006D2EA; /* je: equal / zero */

loc_0006D24F: ;
    ecx = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1C80); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006D2EA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B1C80)) */

loc_0006D264: ;
    ecx = edi;
    PUSH32(esp, 0x0006D26Bu); RECOMP_ABI_CALL(0x0001481Du, sub_0001481D); /* call 0x0001481D */

loc_0006D26B: ;
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006D273u); RECOMP_ABI_CALL(0x0006A560u, sub_0006A560); /* call 0x0006A560 */

loc_0006D273: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D2EA; /* je: equal / zero */

loc_0006D27A: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x0006D287u); RECOMP_ABI_CALL(0x00012220u, sub_00012220); /* call 0x00012220 */

loc_0006D287: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0006D294u); RECOMP_ABI_CALL(0x00012220u, sub_00012220); /* call 0x00012220 */

loc_0006D294: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, 0x0006D2A2u); RECOMP_ABI_CALL(0x00069700u, sub_00069700); /* call 0x00069700 */

loc_0006D2A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D2EA; /* je: equal / zero */

loc_0006D2A9: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, 0x0006D2B7u); RECOMP_ABI_CALL(0x0006CDC0u, sub_0006CDC0); /* call 0x0006CDC0 */

loc_0006D2B7: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006D2C6u); RECOMP_ABI_CALL(0x00069E20u, sub_00069E20); /* call 0x00069E20 */

loc_0006D2C6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 0x50;
    PUSH32(esp, 0x0006D2D2u); RECOMP_ABI_CALL(0x0006CB70u, sub_0006CB70); /* call 0x0006CB70 */

loc_0006D2D2: ;
    esi = esp + 0xC;
    PUSH32(esp, 0x0006D2DBu); RECOMP_ABI_CALL(0x0006CB70u, sub_0006CB70); /* call 0x0006CB70 */

loc_0006D2DB: ;
    eax = esi;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0006D2EAu); RECOMP_ABI_CALL(0x0002E3BCu, sub_0002E3BC); /* call 0x0002E3BC */

loc_0006D2EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006D360
 * Original: 0x0006D360 - 0x0006D551 (497 bytes, 165 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D360(void)
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

loc_0006D360: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = esi;
    eax = esi;
    esi = MEM32(esp + 0x9C);
    ebp = MEM32(esi + 0x24);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(ebp + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D38Du); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006D38D: ;
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ecx + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D3B7; /* je: equal / zero */

loc_0006D39B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006D3A1u); RECOMP_ABI_CALL(0x000320D4u, sub_000320D4); /* call 0x000320D4 */

loc_0006D3A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0006D3ABu); RECOMP_ABI_CALL(0x00015D2Bu, sub_00015D2B); /* call 0x00015D2B */

loc_0006D3AB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0006D3B7: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006D3C3; /* jle: less or equal (signed <=) */

loc_0006D3BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006D39B; /* jle: less or equal (signed <=) */

loc_0006D3C3: ;
    edx = MEM32(ebp + 0x1D4);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006D3D0u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006D3D0: ;
    eax = MEM32(eax + 0x2C);
    edi = MEM32(eax + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D44A; /* je: equal / zero */

loc_0006D3DD: ;
    esi = ebp;
    PUSH32(esp, 0x0006D3E4u); RECOMP_ABI_CALL(0x0006A470u, sub_0006A470); /* call 0x0006A470 */

loc_0006D3E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D44A; /* je: equal / zero */

loc_0006D3E8: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esp + 0x64;
    MEM8(esp + 0x1F) = 1;
    PUSH32(esp, 0x0006D3FAu); RECOMP_ABI_CALL(0x00012220u, sub_00012220); /* call 0x00012220 */

loc_0006D3FA: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0006D407u); RECOMP_ABI_CALL(0x00012220u, sub_00012220); /* call 0x00012220 */

loc_0006D407: ;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, 0x0006D415u); RECOMP_ABI_CALL(0x0006CDC0u, sub_0006CDC0); /* call 0x0006CDC0 */

loc_0006D415: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 0x14;
    eax = esp + 0x58;
    PUSH32(esp, 0x0006D425u); RECOMP_ABI_CALL(0x0006CBB0u, sub_0006CBB0); /* call 0x0006CBB0 */

loc_0006D425: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D44E; /* je: equal / zero */

loc_0006D429: ;
    ecx = MEM32(esp + 0xA0);
    edx = esi;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D43Du); RECOMP_ABI_CALL(0x0002E3BCu, sub_0002E3BC); /* call 0x0002E3BC */

loc_0006D43D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0006D44A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0006D452;

loc_0006D44E: ;
    SET_LO8(eax, MEM8(esp + 0x13));

loc_0006D452: ;
    ecx = MEM32(ebx + 4);
    esi = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D544; /* jne: not equal / not zero */

loc_0006D462: ;
    SET_LO8(ecx, MEM8(ebp + 0x1DC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006D489; /* jge: greater or equal (signed >=) */

loc_0006D46C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D544; /* je: equal / zero */

loc_0006D474: ;
    ecx = MEM32(ebp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1C2C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006D544; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B1C2C)) */

loc_0006D489: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D4F2; /* je: equal / zero */

loc_0006D48D: ;
    edx = MEM32(ebp + 0x1D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006D499u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006D499: ;
    eax = MEM32(eax + 0x2C);
    ecx = MEM32(eax + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D4AF; /* je: equal / zero */

loc_0006D4A6: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0006D4AFu); RECOMP_ABI_CALL(0x00037FC0u, sub_00037FC0); /* call 0x00037FC0 */

loc_0006D4AF: ;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006D4BFu); RECOMP_ABI_CALL(0x000202E9u, sub_000202E9); /* call 0x000202E9 */

loc_0006D4BF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D4F2; /* je: equal / zero */

loc_0006D4C6: ;
    ecx = MEM32(edi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006D4D3u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_0006D4D3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D4EB; /* je: equal / zero */

loc_0006D4DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006D4E4; /* jle: less or equal (signed <=) */

loc_0006D4DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006D4EB; /* jle: less or equal (signed <=) */

loc_0006D4E4: ;
    eax = 0x86;
    goto loc_0006D518;

loc_0006D4EB: ;
    eax = 0x85;
    goto loc_0006D518;

loc_0006D4F2: ;
    eax = MEM32(ebp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D4FBu); RECOMP_ABI_CALL(0x00016BBDu, sub_00016BBD); /* call 0x00016BBD */

loc_0006D4FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D513; /* je: equal / zero */

loc_0006D502: ;
    edx = MEM32(ebp + 0x4C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x40); /* comiss */
    eax = 0x9A;
    if ((_fca >= _fcb)) goto loc_0006D518; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(edx + 0x40)) */

loc_0006D513: ;
    eax = 0x87;

loc_0006D518: ;
    edx = MEM32(ebp);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6B640);
    PUSH32(esp, 0x6C690);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0006D53Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006D537u); } /* indirect call */
    }

loc_0006D53A: ;
    eax = MEM32(ebp + 0x54);
    MEM32(eax + 0xC) = 0xB;

loc_0006D544: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006D5D0
 * Original: 0x0006D5D0 - 0x0006D5FF (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D5D0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006D5DC; /* jge: greater or equal (signed >=) */

loc_0006D5D8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0006D5E6;

loc_0006D5DC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x64 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006D5E6; /* jle: less or equal (signed <=) */

loc_0006D5E1: ;
    ecx = 0x64;

loc_0006D5E6: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
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
    eax = MEM32(eax * 4 + 0x7B2288);
    esp += 4; return; /* ret */

}

/**
 * sub_0006D610
 * Original: 0x0006D610 - 0x0006D77B (363 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006D610: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = 0x32;
    if (CMP_LE(_fas, _fbs)) goto loc_0006D62C; /* jle: less or equal (signed <=) */

loc_0006D628: ;
    ebx = eax;
    goto loc_0006D630;

loc_0006D62C: ;
    ebx = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006D630: ;
    eax = MEM32(esp + 0x28);
    ecx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0006D641; /* jle: less or equal (signed <=) */

loc_0006D63D: ;
    edi = ecx;
    goto loc_0006D645;

loc_0006D641: ;
    edi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006D645: ;
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006D651; /* jle: less or equal (signed <=) */

loc_0006D64D: ;
    eax = ecx;
    goto loc_0006D653;

loc_0006D651: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006D653: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006D667; /* jg: greater (signed >) */

loc_0006D658: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006D667; /* jg: greater (signed >) */

loc_0006D65D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006D667; /* jg: greater (signed >) */

loc_0006D662: ;
    ebp = 0x3C;

loc_0006D667: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006D676; /* jge: greater or equal (signed >=) */

loc_0006D66C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006D676; /* jge: greater or equal (signed >=) */

loc_0006D671: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006D679; /* jl: less (signed <) */

loc_0006D676: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0xA;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006D679: ;
    ecx = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0006D68A; /* je: equal / zero */

loc_0006D685: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D692; /* jne: not equal / not zero */

loc_0006D68A: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0xA;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 1;

loc_0006D692: ;
    edx = MEM32(esp + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D6A0; /* je: equal / zero */

loc_0006D69B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D6A4; /* jne: not equal / not zero */

loc_0006D6A0: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0xA;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006D6A4: ;
    esi = MEM32(esp + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D6B2; /* je: equal / zero */

loc_0006D6AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D6B6; /* jne: not equal / not zero */

loc_0006D6B2: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0xA;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006D6B6: ;
    _fa = (uint32_t)(MEM8(esp + 0x20)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x20), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D6C0; /* je: equal / zero */

loc_0006D6BD: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0xA;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006D6C0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D6C8; /* jne: not equal / not zero */

loc_0006D6C4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D6CD; /* je: equal / zero */

loc_0006D6C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D6D0; /* jne: not equal / not zero */

loc_0006D6CD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006D6D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D6DC; /* jne: not equal / not zero */

loc_0006D6D7: ;
    eax = 1;

loc_0006D6DC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D6E2; /* jne: not equal / not zero */

loc_0006D6E1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006D6E2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D6E8; /* jne: not equal / not zero */

loc_0006D6E7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006D6E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D6F2; /* je: equal / zero */

loc_0006D6ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D6F5; /* jne: not equal / not zero */

loc_0006D6F2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006D6F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D700; /* jne: not equal / not zero */

loc_0006D6FB: ;
    eax = 1;

loc_0006D700: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D705; /* jne: not equal / not zero */

loc_0006D704: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006D705: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D70A; /* jne: not equal / not zero */

loc_0006D709: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006D70A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D714; /* je: equal / zero */

loc_0006D70F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D717; /* jne: not equal / not zero */

loc_0006D714: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xA;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006D717: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D723; /* je: equal / zero */

loc_0006D71E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D728; /* jne: not equal / not zero */

loc_0006D723: ;
    eax = 1;

loc_0006D728: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D732; /* je: equal / zero */

loc_0006D72D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D733; /* jne: not equal / not zero */

loc_0006D732: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006D733: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D73D; /* je: equal / zero */

loc_0006D738: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D73E; /* jne: not equal / not zero */

loc_0006D73D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006D73E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D748; /* je: equal / zero */

loc_0006D743: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D74B; /* jne: not equal / not zero */

loc_0006D748: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xA;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006D74B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_0006D755; /* jge: greater or equal (signed >=) */

loc_0006D751: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0006D75F;

loc_0006D755: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x64 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006D75F; /* jle: less or equal (signed <=) */

loc_0006D75A: ;
    ecx = 0x64;

loc_0006D75F: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax * 4 + 0x7B2288);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006D7E0
 * Original: 0x0006D7E0 - 0x0006D8D0 (240 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D7E0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 0x32;
    if (CMP_G(_fas, _fbs)) goto loc_0006D7FA; /* jg: greater (signed >) */

loc_0006D7F6: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;

loc_0006D7FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006D804; /* jg: greater (signed >) */

loc_0006D7FF: ;
    esi = 0x3C;

loc_0006D804: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006D80C; /* jl: less (signed <) */

loc_0006D809: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006D80C: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D81C; /* je: equal / zero */

loc_0006D817: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D824; /* jne: not equal / not zero */

loc_0006D81C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 1;

loc_0006D824: ;
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D832; /* je: equal / zero */

loc_0006D82D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D836; /* jne: not equal / not zero */

loc_0006D832: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006D836: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x18), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D840; /* je: equal / zero */

loc_0006D83D: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006D840: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D849; /* je: equal / zero */

loc_0006D844: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D84C; /* jne: not equal / not zero */

loc_0006D849: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006D84C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D858; /* jne: not equal / not zero */

loc_0006D853: ;
    eax = 1;

loc_0006D858: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D85E; /* jne: not equal / not zero */

loc_0006D85D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006D85E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D866; /* jne: not equal / not zero */

loc_0006D863: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006D866: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D871; /* jne: not equal / not zero */

loc_0006D86C: ;
    eax = 1;

loc_0006D871: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D876; /* jne: not equal / not zero */

loc_0006D875: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006D876: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D87E; /* jne: not equal / not zero */

loc_0006D87B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006D87E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D88A; /* je: equal / zero */

loc_0006D885: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D88F; /* jne: not equal / not zero */

loc_0006D88A: ;
    eax = 1;

loc_0006D88F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D899; /* je: equal / zero */

loc_0006D894: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D89A; /* jne: not equal / not zero */

loc_0006D899: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006D89A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D8A2; /* jne: not equal / not zero */

loc_0006D89F: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006D8A2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_0006D8AC; /* jge: greater or equal (signed >=) */

loc_0006D8A8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0006D8B6;

loc_0006D8AC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x64 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006D8B6; /* jle: less or equal (signed <=) */

loc_0006D8B1: ;
    ecx = 0x64;

loc_0006D8B6: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
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
    eax = MEM32(eax * 4 + 0x7B2288);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006D910
 * Original: 0x0006D910 - 0x0006D97F (111 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D910: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    eax = 0x32;
    if (CMP_EQ(_fa, _fb)) goto loc_0006D923; /* je: equal / zero */

loc_0006D91E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D928; /* jne: not equal / not zero */

loc_0006D923: ;
    eax = 0xA;

loc_0006D928: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 8), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D932; /* je: equal / zero */

loc_0006D92F: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006D932: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D93C; /* jne: not equal / not zero */

loc_0006D937: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0006D952;

loc_0006D93C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D945; /* jne: not equal / not zero */

loc_0006D940: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0006D952;

loc_0006D945: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D94F; /* je: equal / zero */

loc_0006D94A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D952; /* jne: not equal / not zero */

loc_0006D94F: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006D952: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0006D95C; /* jge: greater or equal (signed >=) */

loc_0006D958: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0006D966;

loc_0006D95C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006D966; /* jle: less or equal (signed <=) */

loc_0006D961: ;
    ecx = 0x64;

loc_0006D966: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
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
    eax = MEM32(eax * 4 + 0x7B2288);
    esp += 4; return; /* ret */

}

/**
 * sub_0006D9A0
 * Original: 0x0006D9A0 - 0x0006DA65 (197 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D9A0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 0x32;
    if (CMP_G(_fas, _fbs)) goto loc_0006D9BA; /* jg: greater (signed >) */

loc_0006D9B6: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;

loc_0006D9BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006D9C4; /* jg: greater (signed >) */

loc_0006D9BF: ;
    esi = 0x3C;

loc_0006D9C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006D9CC; /* jl: less (signed <) */

loc_0006D9C9: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006D9CC: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D9DD; /* je: equal / zero */

loc_0006D9D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D9DD; /* je: equal / zero */

loc_0006D9DA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006D9DD: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D9EF; /* je: equal / zero */

loc_0006D9E7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D9EF; /* je: equal / zero */

loc_0006D9EC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006D9EF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006D9FF; /* jne: not equal / not zero */

loc_0006D9F8: ;
    edx = 1;
    goto loc_0006DA09;

loc_0006D9FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DA09; /* jne: not equal / not zero */

loc_0006DA04: ;
    ecx = 1;

loc_0006DA09: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DA11; /* jne: not equal / not zero */

loc_0006DA0E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0006DA17;

loc_0006DA11: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DA17; /* jne: not equal / not zero */

loc_0006DA16: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006DA17: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0006DA21; /* jne: not equal / not zero */

loc_0006DA1C: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0006DA37;

loc_0006DA21: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DA2F; /* jne: not equal / not zero */

loc_0006DA26: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DA37; /* jne: not equal / not zero */

loc_0006DA2A: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0006DA37;

loc_0006DA2F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DA37; /* jne: not equal / not zero */

loc_0006DA34: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0006DA37: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_0006DA41; /* jge: greater or equal (signed >=) */

loc_0006DA3D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0006DA4B;

loc_0006DA41: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x64 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006DA4B; /* jle: less or equal (signed <=) */

loc_0006DA46: ;
    ecx = 0x64;

loc_0006DA4B: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
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
    eax = MEM32(eax * 4 + 0x7B2288);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DAA0
 * Original: 0x0006DAA0 - 0x0006DAA6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DAA0(void)
{

loc_0006DAA0: ;
    eax = MEM32(0x9092C8);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DAB0
 * Original: 0x0006DAB0 - 0x0006DABC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DAB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DAB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006DAC0
 * Original: 0x0006DAC0 - 0x0006DACD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DAC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DAC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0x38));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006DAD0
 * Original: 0x0006DAD0 - 0x0006DAD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DAD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006DAD0: ;
    fp_push(MEMF(ecx + 0x500)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006DAE0
 * Original: 0x0006DAE0 - 0x0006DAE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DAE0(void)
{

loc_0006DAE0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DAF0
 * Original: 0x0006DAF0 - 0x0006DAF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DAF0(void)
{

loc_0006DAF0: ;
    eax = MEM32(0x8EAD98);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DB00
 * Original: 0x0006DB00 - 0x0006DB09 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DB00(void)
{

loc_0006DB00: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006DB10
 * Original: 0x0006DB10 - 0x0006DB14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DB10(void)
{

loc_0006DB10: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DB20
 * Original: 0x0006DB20 - 0x0006DB24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DB20(void)
{

loc_0006DB20: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DB30
 * Original: 0x0006DB30 - 0x0006DB38 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006DB30: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_0006DB40
 * Original: 0x0006DB40 - 0x0006DB44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DB40(void)
{

loc_0006DB40: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DB50
 * Original: 0x0006DB50 - 0x0006DB5D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DB50(void)
{

loc_0006DB50: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x258) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006DB60
 * Original: 0x0006DB60 - 0x0006DB6D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DB60(void)
{

loc_0006DB60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x260) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006DB70
 * Original: 0x0006DB70 - 0x0006DB74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DB70(void)
{

loc_0006DB70: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DB80
 * Original: 0x0006DB80 - 0x0006DB86 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DB80(void)
{

loc_0006DB80: ;
    eax = MEM32(0x8EAC8C);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DB90
 * Original: 0x0006DB90 - 0x0006DB94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DB90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006DB90: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006DBA0
 * Original: 0x0006DBA0 - 0x0006DBA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DBA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006DBA0: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006DBB0
 * Original: 0x0006DBB0 - 0x0006DBB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DBB0(void)
{

loc_0006DBB0: ;
    eax = MEM32(0x8F0680);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DBC0
 * Original: 0x0006DBC0 - 0x0006DBCB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DBC0(void)
{

loc_0006DBC0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0006DBD0
 * Original: 0x0006DBD0 - 0x0006DBD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DBD0(void)
{

loc_0006DBD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006DBE0
 * Original: 0x0006DBE0 - 0x0006DBE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DBE0(void)
{

loc_0006DBE0: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0006DBF0
 * Original: 0x0006DBF0 - 0x0006DBFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006DBF0: ;
    PUSH32(esp, 0x0006DBF5u); RECOMP_ABI_CALL(0x00017513u, sub_00017513); /* call 0x00017513 */

loc_0006DBF5: ;
    g_seh_ebp = ebp; sub_00036756(); return; /* tail jmp 0x00036756 */

}

/**
 * sub_0006DC00
 * Original: 0x0006DC00 - 0x0006DC0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006DC00: ;
    PUSH32(esp, 0x0006DC05u); RECOMP_ABI_CALL(0x00036F5Du, sub_00036F5D); /* call 0x00036F5D */

loc_0006DC05: ;
    g_seh_ebp = ebp; sub_0001FC9F(); return; /* tail jmp 0x0001FC9F */

}

/**
 * sub_0006DC10
 * Original: 0x0006DC10 - 0x0006DC29 (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DC10: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006DC28; /* je: equal / zero */

loc_0006DC1B: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006DC25u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0006DC25: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006DC28: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006DC30
 * Original: 0x0006DC30 - 0x0006DC52 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DC30: ;
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006DC4F; /* je: equal / zero */

loc_0006DC37: ;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006DC4C; /* je: equal / zero */

loc_0006DC3D: ;
    eax = MEM32(eax + 0x1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006DC4C; /* je: equal / zero */

loc_0006DC47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DC4F; /* jne: not equal / not zero */

loc_0006DC4C: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0006DC4F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006DC60
 * Original: 0x0006DC60 - 0x0006DC77 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DC60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x50);
    edx = MEM32(ecx);
    ecx = MEM32(0x8EAC8C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0006DC80
 * Original: 0x0006DC80 - 0x0006DD28 (168 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DC80: ;
    eax = MEM32(0x8F0680);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006DD27; /* je: equal / zero */

loc_0006DC8D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006DC9E; /* je: equal / zero */

loc_0006DC9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DCB2; /* jne: not equal / not zero */

loc_0006DC9E: ;
    MEM32(esi + 0x260) = 1;
    MEM32(esi + 0x258) = 1;

loc_0006DCB2: ;
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006DCBEu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006DCBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006DCCF; /* je: equal / zero */

loc_0006DCC5: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, 0x0006DCCDu); RECOMP_ABI_CALL(0x0001870Bu, sub_0001870B); /* call 0x0001870B */

loc_0006DCCD: ;
    goto loc_0006DCEB;

loc_0006DCCF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3DF);
    ecx = esi;
    PUSH32(esp, 0x0006DCEBu); RECOMP_ABI_CALL(0x000250B4u, sub_000250B4); /* call 0x000250B4 */

loc_0006DCEB: ;
    eax = MEM32(esi + 0x54);
    edx = MEM32(eax);
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 1);
    MEM32(eax) = edx;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006DD03u); RECOMP_ABI_CALL(0x00022ADAu, sub_00022ADA); /* call 0x00022ADA */

loc_0006DD03: ;
    eax = MEM32(esi + 0x54);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFDFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + 0x54);
    MEM8(ecx + 8) = 0;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006DD1C; /* je: equal / zero */

loc_0006DD17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DD26; /* jne: not equal / not zero */

loc_0006DD1C: ;
    MEM32(esi + 0x248) = 0;

loc_0006DD26: ;
    POP32(esp, esi);

loc_0006DD27: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006DD60
 * Original: 0x0006DD60 - 0x0006DDBA (90 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006DD60: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0x54);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x54);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(ecx + 0x10) = esi;
    PUSH32(esp, ebp);
    MEM32(eax + 0x10) = esi;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DD91u); RECOMP_ABI_CALL(0x0002A483u, sub_0002A483); /* call 0x0002A483 */

loc_0006DD91: ;
    ecx = MEM32(0x8EB3BC);
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006DDA3u); RECOMP_ABI_CALL(0x0003704Du, sub_0003704D); /* call 0x0003704D */

loc_0006DDA3: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006DDB3u); RECOMP_ABI_CALL(0x0001761Cu, sub_0001761C); /* call 0x0001761C */

loc_0006DDB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DDD0
 * Original: 0x0006DDD0 - 0x0006DE05 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DDD0(void)
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

loc_0006DDD0: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006DDE2u); RECOMP_ABI_CALL(0x00015E61u, sub_00015E61); /* call 0x00015E61 */

loc_0006DDE2: ;
    ecx = MEM32(esi + 0x44);
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0006DDECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006DDE9u); } /* indirect call */
    }

loc_0006DDEC: ;
    fp_push(MEMF(edi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7A9980)); /* fsub dword ptr [0x7a9980] */
    POP32(esp, edi);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0006DE02; /* jb: below (unsigned <) */

loc_0006DDFF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0006DE02: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006DE20
 * Original: 0x0006DE20 - 0x0006DE63 (67 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DE20(void)
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

loc_0006DE20: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006DE33u); RECOMP_ABI_CALL(0x00015E61u, sub_00015E61); /* call 0x00015E61 */

loc_0006DE33: ;
    ecx = MEM32(esi + 0x44);
    edi = eax;
    eax = MEM32(ecx);
    ebx = MEM32(edi + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0006DE40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006DE3Du); } /* indirect call */
    }

loc_0006DE40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DE5D; /* jne: not equal / not zero */

loc_0006DE44: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0006DE4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006DE49u); } /* indirect call */
    }

loc_0006DE4C: ;
    fp_push(MEMF(edi + 0x20)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0006DE5D; /* jb: below (unsigned <) */

loc_0006DE57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006DE5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006DE80
 * Original: 0x0006DE80 - 0x0006DEC3 (67 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DE80(void)
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

loc_0006DE80: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006DE93u); RECOMP_ABI_CALL(0x00015E61u, sub_00015E61); /* call 0x00015E61 */

loc_0006DE93: ;
    ecx = MEM32(esi + 0x44);
    edi = eax;
    eax = MEM32(ecx);
    ebx = MEM32(edi + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0006DEA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006DE9Du); } /* indirect call */
    }

loc_0006DEA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DEBD; /* jne: not equal / not zero */

loc_0006DEA4: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0006DEACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006DEA9u); } /* indirect call */
    }

loc_0006DEAC: ;
    fp_push(MEMF(edi + 0x1C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0006DEBD; /* jb: below (unsigned <) */

loc_0006DEB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0006DEBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006DEE0
 * Original: 0x0006DEE0 - 0x0006DF08 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DEE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DEE0: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006DEF3u); RECOMP_ABI_CALL(0x00022ADAu, sub_00022ADA); /* call 0x00022ADA */

loc_0006DEF3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006DEF9u); RECOMP_ABI_CALL(0x0001C15Du, sub_0001C15D); /* call 0x0001C15D */

loc_0006DEF9: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006DF03u); RECOMP_ABI_CALL(0x0001C15Du, sub_0001C15D); /* call 0x0001C15D */

loc_0006DF03: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DF20
 * Original: 0x0006DF20 - 0x0006DF2C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DF20: ;
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
 * sub_0006DF30
 * Original: 0x0006DF30 - 0x0006DF3A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DF30(void)
{

loc_0006DF30: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006DF40
 * Original: 0x0006DF40 - 0x0006DF5C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DF40: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    PUSH32(esp, esi);
    edx = eax + 0x18;
    esi = 0x33;
    edi = edi;

loc_0006DF50: ;
    MEMF(edx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0006DF50; /* jne: not equal / not zero */

loc_0006DF5A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DF70
 * Original: 0x0006DF70 - 0x0006DF71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DF70(void)
{

loc_0006DF70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006DF80
 * Original: 0x0006DF80 - 0x0006DF89 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DF80(void)
{

loc_0006DF80: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0006DF90
 * Original: 0x0006DF90 - 0x0006DFB3 (35 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DF90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DF90: ;
    eax = MEM32(ecx);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 8 + 4) = edx;
    eax = MEM32(ecx);
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(ecx + eax * 8 + 8) = LO8(edx);
    eax = MEM32(ecx);
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(ecx + eax * 8 + 9) = LO8(edx);
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0006DFC0
 * Original: 0x0006DFC0 - 0x0006E0A3 (227 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DFC0: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_0006DFE8; /* jne: not equal / not zero */

loc_0006DFD0: ;
    ecx = esi;
    PUSH32(esp, 0x0006DFD7u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0006DFD7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DFE8; /* jne: not equal / not zero */

loc_0006DFDB: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DFE8; /* jne: not equal / not zero */

loc_0006DFE2: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DFF4; /* jne: not equal / not zero */

loc_0006DFE8: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E08F; /* jne: not equal / not zero */

loc_0006DFF4: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(esi + 0x4C);
    eax = MEM32(eax + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(edi);
    MEM32(esp + 0xC) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(esp + 0x10) = ebx;
    edi = MEM32(edi + 8);
    MEM32(esp + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0006E03A; /* je: equal / zero */

loc_0006E020: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(eax);
    MEM32(esp + 0xC) = edi;
    edi = MEM32(eax + 4);
    MEM32(esp + 0x10) = edi;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = eax;

loc_0006E03A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0006E076; /* jne: not equal / not zero */

loc_0006E041: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    eax = MEM32(edx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E076; /* je: equal / zero */

loc_0006E04F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E05B; /* je: equal / zero */

loc_0006E054: ;
    edx = MEM32(eax * 4 + 0x8E8EB8);

loc_0006E05B: ;
    eax = MEM32(edx + 0x20);
    ecx = MEM32(eax + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 8) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = eax;

loc_0006E076: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0006E082u); RECOMP_ABI_CALL(0x0002FE51u, sub_0002FE51); /* call 0x0002FE51 */

loc_0006E082: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0006E08Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006E087u); } /* indirect call */
    }

loc_0006E08A: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006E08F: ;
    ecx = esi;
    PUSH32(esp, 0x0006E096u); RECOMP_ABI_CALL(0x00022116u, sub_00022116); /* call 0x00022116 */

loc_0006E096: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0006E09Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006E09Bu); } /* indirect call */
    }

loc_0006E09E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006E0E0
 * Original: 0x0006E0E0 - 0x0006E109 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E0E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8E9BA0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = eax;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0006E0F9u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0006E0F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E106; /* je: equal / zero */

loc_0006E0FD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E103u); RECOMP_ABI_CALL(0x000320D4u, sub_000320D4); /* call 0x000320D4 */

loc_0006E103: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006E106: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E120
 * Original: 0x0006E120 - 0x0006E13B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E120: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x0006E12Cu); RECOMP_ABI_CALL(0x00031391u, sub_00031391); /* call 0x00031391 */

loc_0006E12C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E139; /* je: equal / zero */

loc_0006E130: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E136u); RECOMP_ABI_CALL(0x000320D4u, sub_000320D4); /* call 0x000320D4 */

loc_0006E136: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006E139: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E150
 * Original: 0x0006E150 - 0x0006E176 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E150: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x8EA030;
    edi = 0x33;
    /* nop */

loc_0006E160: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E16Au); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0006E16A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0006E160; /* jne: not equal / not zero */

loc_0006E173: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E180
 * Original: 0x0006E180 - 0x0006E1FF (127 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E180: ;
    eax = MEM32(0x8EA7E0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006E1B0; /* jle: less or equal (signed <=) */

loc_0006E18C: ;
    /* nop */

loc_0006E190: ;
    eax = MEM32(esi * 8 + 0x8EA7E4);
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, 0x0006E19Fu); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0006E19F: ;
    ecx = eax;
    PUSH32(esp, 0x0006E1A6u); RECOMP_ABI_CALL(0x00016AA5u, sub_00016AA5); /* call 0x00016AA5 */

loc_0006E1A6: ;
    eax = MEM32(0x8EA7E0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006E190; /* jl: less (signed <) */

loc_0006E1B0: ;
    eax = MEM32(0x8EA930);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006E1D9; /* jle: less or equal (signed <=) */

loc_0006E1BB: ;
    goto loc_0006E1C0;

    /* nop */

loc_0006E1C0: ;
    eax = MEM32(esi * 8 + 0x8EA934);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0006E1CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006E1CCu); } /* indirect call */
    }

loc_0006E1CF: ;
    eax = MEM32(0x8EA930);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006E1C0; /* jl: less (signed <) */

loc_0006E1D9: ;
    eax = MEM32(0x8EA690);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006E1FD; /* jle: less or equal (signed <=) */

loc_0006E1E4: ;
    eax = MEM32(esi * 8 + 0x8EA694);
    ecx = MEM32(eax + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0006E1F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006E1F0u); } /* indirect call */
    }

loc_0006E1F3: ;
    eax = MEM32(0x8EA690);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006E1E4; /* jl: less (signed <) */

loc_0006E1FD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E220
 * Original: 0x0006E220 - 0x0006E346 (294 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E220: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x8EA930) = 0;
    MEM32(0x8EA7E0) = 0;
    MEM32(0x8EA690) = 0;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006E244: ;
    esi = MEM32(edi + 0x8E9058);
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E266; /* je: equal / zero */

loc_0006E251: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E299; /* je: equal / zero */

loc_0006E257: ;
    eax = MEM32(esi + 0x1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E299; /* je: equal / zero */

loc_0006E261: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E299; /* je: equal / zero */

loc_0006E266: ;
    eax = MEM32(0x8EA7E0);
    MEM32(eax * 8 + 0x8EA7E4) = esi;
    ecx = MEM32(0x8EA7E0);
    MEM8(ecx * 8 + 0x8EA7E8) = 0;
    edx = MEM32(0x8EA7E0);
    MEM8(edx * 8 + 0x8EA7E9) = 0;
    MEM32(0x8EA7E0) = MEM32(0x8EA7E0) + 1;
    _fa = (uint32_t)(MEM32(0x8EA7E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0006E332;

loc_0006E299: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E2A5u); RECOMP_ABI_CALL(0x00022594u, sub_00022594); /* call 0x00022594 */

loc_0006E2A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0xF) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0006E2BD; /* jne: not equal / not zero */

loc_0006E2AD: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E2B9u); RECOMP_ABI_CALL(0x00017392u, sub_00017392); /* call 0x00017392 */

loc_0006E2B9: ;
    SET_LO8(ebx, LO8(eax));
    goto loc_0006E2BF;

loc_0006E2BD: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0006E2BF: ;
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006E2CBu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006E2CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E301; /* jne: not equal / not zero */

loc_0006E2D2: ;
    ecx = MEM32(0x8EA690);
    MEM32(ecx * 8 + 0x8EA694) = esi;
    edx = MEM32(0x8EA690);
    MEM8(edx * 8 + 0x8EA698) = LO8(eax);
    eax = MEM32(0x8EA690);
    MEM8(eax * 8 + 0x8EA699) = 0;
    MEM32(0x8EA690) = MEM32(0x8EA690) + 1;
    _fa = (uint32_t)(MEM32(0x8EA690)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0006E332;

loc_0006E301: ;
    ecx = MEM32(0x8EA930);
    SET_LO8(eax, MEM8(esp + 0xF));
    MEM32(ecx * 8 + 0x8EA934) = esi;
    edx = MEM32(0x8EA930);
    MEM8(edx * 8 + 0x8EA938) = LO8(eax);
    ecx = MEM32(0x8EA930);
    MEM8(ecx * 8 + 0x8EA939) = LO8(ebx);
    MEM32(0x8EA930) = MEM32(0x8EA930) + 1;
    _fa = (uint32_t)(MEM32(0x8EA930)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006E332: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xA4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006E244; /* jl: less (signed <) */

loc_0006E341: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E390
 * Original: 0x0006E390 - 0x0006E39D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E390: ;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x8EA030) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8EA030;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006E3A0
 * Original: 0x0006E3A0 - 0x0006E435 (149 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006E3A0: ;
    ecx = MEM32(0x8EA930);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, 3);
    PUSH32(esp, edi);
    edi = edi;

loc_0006E3B0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006E3F6; /* jle: less or equal (signed <=) */

loc_0006E3B6: ;
    esi = 0x8EA939;
    goto loc_0006E3C0;

    /* nop */

loc_0006E3C0: ;
    eax = MEM32(esi + -5);
    edx = MEM32(eax + 0x3C);
    _fa = (uint32_t)(MEM8(edx + 0x39)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x39), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E3EE; /* je: equal / zero */

loc_0006E3CB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E3D6; /* jne: not equal / not zero */

loc_0006E3CF: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E3E0; /* jne: not equal / not zero */

loc_0006E3D4: ;
    goto loc_0006E3EE;

loc_0006E3D6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E3EE; /* jne: not equal / not zero */

loc_0006E3DB: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E3EE; /* jne: not equal / not zero */

loc_0006E3E0: ;
    ecx = MEM32(eax + 0x50);
    PUSH32(esp, 0x0006E3E8u); RECOMP_ABI_CALL(0x0002DACAu, sub_0002DACA); /* call 0x0002DACA */

loc_0006E3E8: ;
    ecx = MEM32(0x8EA930);

loc_0006E3EE: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006E3C0; /* jl: less (signed <) */

loc_0006E3F6: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006E3B0; /* jl: less (signed <) */

loc_0006E3FC: ;
    eax = MEM32(0x8EA690);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0006E431; /* jle: less or equal (signed <=) */

loc_0006E408: ;
    goto loc_0006E410;

    /* nop */

loc_0006E410: ;
    eax = MEM32(esi * 8 + 0x8EA694);
    ecx = MEM32(eax + 0x3C);
    _fa = (uint32_t)(MEM8(ecx + 0x39)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x39), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E427; /* je: equal / zero */

loc_0006E41F: ;
    ecx = MEM32(eax + 0x50);
    PUSH32(esp, 0x0006E427u); RECOMP_ABI_CALL(0x0002DACAu, sub_0002DACA); /* call 0x0002DACA */

loc_0006E427: ;
    eax = MEM32(0x8EA690);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006E410; /* jl: less (signed <) */

loc_0006E431: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E460
 * Original: 0x0006E460 - 0x0006E4AC (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E460(void)
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

loc_0006E460: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006E472u); RECOMP_ABI_CALL(0x00033024u, sub_00033024); /* call 0x00033024 */

loc_0006E472: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    esi = MEM32(ecx * 4 + 0x8E8EB8);
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E489u); RECOMP_ABI_CALL(0x00015E61u, sub_00015E61); /* call 0x00015E61 */

loc_0006E489: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0006E493u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006E490u); } /* indirect call */
    }

loc_0006E493: ;
    fp_push(MEMF(edi + 0xC)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7ABE28)); /* fsub dword ptr [0x7abe28] */
    POP32(esp, esi);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0006E4A9; /* jb: below (unsigned <) */

loc_0006E4A6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0006E4A9: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006E4C0
 * Original: 0x0006E4C0 - 0x0006E4F4 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E4C0: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E4D1u); RECOMP_ABI_CALL(0x00022594u, sub_00022594); /* call 0x00022594 */

loc_0006E4D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E4F0; /* jne: not equal / not zero */

loc_0006E4D5: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E4E1u); RECOMP_ABI_CALL(0x00017392u, sub_00017392); /* call 0x00017392 */

loc_0006E4E1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E4F0; /* je: equal / zero */

loc_0006E4E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E4EBu); RECOMP_ABI_CALL(0x00028D72u, sub_00028D72); /* call 0x00028D72 */

loc_0006E4EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006E4F0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E510
 * Original: 0x0006E510 - 0x0006E536 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E510: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x8EA030;
    edi = 0x33;
    /* nop */

loc_0006E520: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E52Au); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0006E52A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0006E520; /* jne: not equal / not zero */

loc_0006E533: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E540
 * Original: 0x0006E540 - 0x0006E75C (540 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E540(void)
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

loc_0006E540: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006E548u); RECOMP_ABI_CALL(0x00030D8Du, sub_00030D8D); /* call 0x00030D8D */

loc_0006E548: ;
    PUSH32(esp, 0x0006E54Du); RECOMP_ABI_CALL(0x00013F12u, sub_00013F12); /* call 0x00013F12 */

loc_0006E54D: ;
    eax = MEM32(0x8EA930);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0006E61E; /* jle: less or equal (signed <=) */

loc_0006E562: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0x8EA939;
    /* nop */

loc_0006E570: ;
    esi = MEM32(ebp + -5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E579u); RECOMP_ABI_CALL(0x00034249u, sub_00034249); /* call 0x00034249 */

loc_0006E579: ;
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006E585u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0006E585: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x0006E58Fu); RECOMP_ABI_CALL(0x000350EFu, sub_000350EF); /* call 0x000350EF */

loc_0006E58F: ;
    SET_LO8(eax, MEM8(ebp + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E59C; /* jne: not equal / not zero */

loc_0006E596: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E5FA; /* je: equal / zero */

loc_0006E59C: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E5A8u); RECOMP_ABI_CALL(0x00022594u, sub_00022594); /* call 0x00022594 */

loc_0006E5A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E602; /* jne: not equal / not zero */

loc_0006E5AC: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E5B8u); RECOMP_ABI_CALL(0x00017392u, sub_00017392); /* call 0x00017392 */

loc_0006E5B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E602; /* je: equal / zero */

loc_0006E5BC: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E5C8u); RECOMP_ABI_CALL(0x00033024u, sub_00033024); /* call 0x00033024 */

loc_0006E5C8: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    edi = MEM32(ecx * 4 + 0x8E8EB8);
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006E5DFu); RECOMP_ABI_CALL(0x00015E61u, sub_00015E61); /* call 0x00015E61 */

loc_0006E5DF: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx);
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0006E5E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006E5E6u); } /* indirect call */
    }

loc_0006E5E9: ;
    fp_push(MEMF(ebx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7ABE28)); /* fsub dword ptr [0x7abe28] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 0 || g_fp_cmp == 1) /* fcompi */) goto loc_0006E602; /* jae: above or equal (unsigned >=) */

loc_0006E5FA: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, 0x0006E602u); RECOMP_ABI_CALL(0x000338FDu, sub_000338FD); /* call 0x000338FD */

loc_0006E602: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x8EA930);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0006E570; /* jl: less (signed <) */

loc_0006E61C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0006E61E: ;
    PUSH32(esp, 0x0006E623u); RECOMP_ABI_CALL(0x00016271u, sub_00016271); /* call 0x00016271 */

loc_0006E623: ;
    PUSH32(esp, 0x0006E628u); RECOMP_ABI_CALL(0x00019561u, sub_00019561); /* call 0x00019561 */

loc_0006E628: ;
    MEM8(esp + 8) = LO8(eax);
    eax = MEM32(0x8EA930);
    edi = MEM32(esp + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006E65B; /* jle: less or equal (signed <=) */

loc_0006E63B: ;
    goto loc_0006E640;

    /* nop */

loc_0006E640: ;
    eax = MEM32(esi * 8 + 0x8EA934);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006E64Eu); RECOMP_ABI_CALL(0x0002DDA9u, sub_0002DDA9); /* call 0x0002DDA9 */

loc_0006E64E: ;
    eax = MEM32(0x8EA930);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006E640; /* jl: less (signed <) */

loc_0006E65B: ;
    eax = MEM32(0x8EA690);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006E692; /* jle: less or equal (signed <=) */

loc_0006E666: ;
    goto loc_0006E670;

    /* nop */
    /* nop */

loc_0006E670: ;
    eax = MEM32(esi * 8 + 0x8EA694);
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E688; /* je: equal / zero */

loc_0006E67E: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006E685u); RECOMP_ABI_CALL(0x0002DDA9u, sub_0002DDA9); /* call 0x0002DDA9 */

loc_0006E685: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006E688: ;
    eax = MEM32(0x8EA690);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006E670; /* jl: less (signed <) */

loc_0006E692: ;
    ecx = MEM32(0x8EAD98);
    MEM8(ecx) = 0;
    ecx = MEM32(0x8EAD98);
    PUSH32(esp, 0x0006E6A6u); RECOMP_ABI_CALL(0x0001EBF1u, sub_0001EBF1); /* call 0x0001EBF1 */

loc_0006E6A6: ;
    PUSH32(esp, 0x0006E6ABu); RECOMP_ABI_CALL(0x000146BAu, sub_000146BA); /* call 0x000146BA */

loc_0006E6AB: ;
    edx = MEM32(0x8EAD98);
    MEM8(edx) = 1;
    PUSH32(esp, 0x0006E6B9u); RECOMP_ABI_CALL(0x000229D6u, sub_000229D6); /* call 0x000229D6 */

loc_0006E6B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E706; /* jne: not equal / not zero */

loc_0006E6BD: ;
    PUSH32(esp, 0x0006E6C2u); RECOMP_ABI_CALL(0x0001C770u, sub_0001C770); /* call 0x0001C770 */

loc_0006E6C2: ;
    eax = MEM32(0x8EA930);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006E706; /* jle: less or equal (signed <=) */

loc_0006E6CD: ;
    /* nop */

loc_0006E6D0: ;
    esi = MEM32(edi * 8 + 0x8EA934);
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E6E3; /* je: equal / zero */

loc_0006E6DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E6FC; /* jne: not equal / not zero */

loc_0006E6E3: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E6EFu); RECOMP_ABI_CALL(0x0001C036u, sub_0001C036); /* call 0x0001C036 */

loc_0006E6EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E6FC; /* je: equal / zero */

loc_0006E6F3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E6F9u); RECOMP_ABI_CALL(0x0002DF6Bu, sub_0002DF6B); /* call 0x0002DF6B */

loc_0006E6F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006E6FC: ;
    eax = MEM32(0x8EA930);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006E6D0; /* jl: less (signed <) */

loc_0006E706: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0x0006E713u); RECOMP_ABI_CALL(0x0001533Au, sub_0001533A); /* call 0x0001533A */

loc_0006E713: ;
    ecx = MEM32(0x9092C8);
    PUSH32(esp, 0x3D088889);
    PUSH32(esp, 0x0006E723u); RECOMP_ABI_CALL(0x00036251u, sub_00036251); /* call 0x00036251 */

loc_0006E723: ;
    ecx = MEM32(0x8E8F84);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, 0x0006E731u); RECOMP_ABI_CALL(0x0002E2C2u, sub_0002E2C2); /* call 0x0002E2C2 */

loc_0006E731: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0x0006E73Cu); RECOMP_ABI_CALL(0x0002C4C2u, sub_0002C4C2); /* call 0x0002C4C2 */

loc_0006E73C: ;
    ecx = MEM32(0x8E9048);
    PUSH32(esp, 0x0006E747u); RECOMP_ABI_CALL(0x000339ACu, sub_000339AC); /* call 0x000339AC */

loc_0006E747: ;
    ecx = MEM32(0x8E91A0);
    PUSH32(esp, 0x0006E752u); RECOMP_ABI_CALL(0x000339ACu, sub_000339AC); /* call 0x000339AC */

loc_0006E752: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002B9D2(); return; /* tail jmp 0x0002B9D2 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006E7F0
 * Original: 0x0006E7F0 - 0x0006E7F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E7F0(void)
{

loc_0006E7F0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E800
 * Original: 0x0006E800 - 0x0006E80A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E800(void)
{

loc_0006E800: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E810
 * Original: 0x0006E810 - 0x0006E828 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E810(void)
{

loc_0006E810: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0006E818u); RECOMP_ABI_CALL(0x00014DA4u, sub_00014DA4); /* call 0x00014DA4 */

loc_0006E818: ;
    MEM32(esi) = 0x7B2BA8;
    MEM32(0x8EAC8C) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E830
 * Original: 0x0006E830 - 0x0006E833 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E830(void)
{

loc_0006E830: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E840
 * Original: 0x0006E840 - 0x0006E843 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E840(void)
{

loc_0006E840: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E850
 * Original: 0x0006E850 - 0x0006E854 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E850(void)
{

loc_0006E850: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    esp += 4; return; /* ret */

}

/**
 * sub_0006E860
 * Original: 0x0006E860 - 0x0006E863 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E860(void)
{

loc_0006E860: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E870
 * Original: 0x0006E870 - 0x0006E873 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E870(void)
{

loc_0006E870: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E880
 * Original: 0x0006E880 - 0x0006E885 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E880: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E890
 * Original: 0x0006E890 - 0x0006E8A5 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006E890: ;
    MEM32(ecx) = 0x7B2BA8;
    MEM32(0x8EAC8C) = 0;
    g_seh_ebp = ebp; sub_0001B726(); return; /* tail jmp 0x0001B726 */

}

/**
 * sub_0006E8B0
 * Original: 0x0006E8B0 - 0x0006E8F6 (70 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E8B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E8CA; /* jne: not equal / not zero */

loc_0006E8C1: ;
    MEM32(esi + 0x30) = 0x167A8;
    goto loc_0006E8CD;

loc_0006E8CA: ;
    MEM32(esi + 0x30) = eax;

loc_0006E8CD: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(eax + 0x54);
    MEM32(edx) = MEM32(edx) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax + 0x54);
    MEM32(edx + 0xC) = 0;
    eax = MEM32(eax + 0x54);
    edx = MEM32(eax);
    PUSH32(esp, edi);
    edx = edx & 0xFFFFFFEFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM32(eax) = edx;
    PUSH32(esp, 0x0006E8F1u); RECOMP_ABI_CALL(0x00030E05u, sub_00030E05); /* call 0x00030E05 */

loc_0006E8F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006E910
 * Original: 0x0006E910 - 0x0006E93E (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E910: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7B2BA8;
    MEM32(0x8EAC8C) = 0;
    PUSH32(esp, 0x0006E928u); RECOMP_ABI_CALL(0x0001B726u, sub_0001B726); /* call 0x0001B726 */

loc_0006E928: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E938; /* je: equal / zero */

loc_0006E92F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E935u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0006E935: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006E938: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E950
 * Original: 0x0006E950 - 0x0006E95E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E950(void)
{

loc_0006E950: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E970
 * Original: 0x0006E970 - 0x0006E97C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E970(void)
{

loc_0006E970: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E980
 * Original: 0x0006E980 - 0x0006E984 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E980(void)
{

loc_0006E980: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    esp += 4; return; /* ret */

}

/**
 * sub_0006E990
 * Original: 0x0006E990 - 0x0006E996 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E990(void)
{

loc_0006E990: ;
    eax = MEM32(0x8EACA4);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E9A0
 * Original: 0x0006E9A0 - 0x0006E9A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E9A0(void)
{

loc_0006E9A0: ;
    eax = MEM32(0x8EAC94);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E9B0
 * Original: 0x0006E9B0 - 0x0006E9B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E9B0(void)
{

loc_0006E9B0: ;
    eax = MEM32(0x8EAC98);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E9C0
 * Original: 0x0006E9C0 - 0x0006E9C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E9C0(void)
{

loc_0006E9C0: ;
    eax = MEM32(0x8EACC8);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E9D0
 * Original: 0x0006E9D0 - 0x0006E9D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E9D0(void)
{

loc_0006E9D0: ;
    eax = MEM32(0x8EACC0);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E9E0
 * Original: 0x0006E9E0 - 0x0006E9FC (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E9E0(void)
{

loc_0006E9E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    esi = ecx;
    PUSH32(esp, 0x0006E9ECu); RECOMP_ABI_CALL(0x000167D5u, sub_000167D5); /* call 0x000167D5 */

loc_0006E9EC: ;
    MEM32(esi) = 0x7B3058;
    MEM32(0x8EAC90) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006EA10
 * Original: 0x0006EA10 - 0x0006EA13 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EA10(void)
{

loc_0006EA10: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006EA20
 * Original: 0x0006EA20 - 0x0006EA29 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EA20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006EA20: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006EA30
 * Original: 0x0006EA30 - 0x0006EA35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006EA30: ;
    g_seh_ebp = ebp; sub_00027F2B(); return; /* tail jmp 0x00027F2B */

}

/**
 * sub_0006EA40
 * Original: 0x0006EA40 - 0x0006EA55 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006EA40: ;
    MEM32(ecx) = 0x7B3058;
    MEM32(0x8EAC90) = 0;
    g_seh_ebp = ebp; sub_0001D251(); return; /* tail jmp 0x0001D251 */

}

/**
 * sub_0006EA60
 * Original: 0x0006EA60 - 0x0006EB3E (222 bytes, 82 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0006EA60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0xC);
    ebx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006EA7Du); RECOMP_ABI_CALL(0x000202E9u, sub_000202E9); /* call 0x000202E9 */

loc_0006EA7D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006EB2B; /* je: equal / zero */

loc_0006EA88: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x40); /* comiss */
    if ((_fca >= _fcb)) goto loc_0006EB1E; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ebx + 0x40)) */

loc_0006EA95: ;
    ecx = ebx;
    PUSH32(esp, 0x0006EA9Cu); RECOMP_ABI_CALL(0x00032813u, sub_00032813); /* call 0x00032813 */

loc_0006EA9C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006EB1E; /* jne: not equal / not zero */

loc_0006EAA0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006EAA6u); RECOMP_ABI_CALL(0x00016BBDu, sub_00016BBD); /* call 0x00016BBD */

loc_0006EAA6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(ebx + 0x4C));
    if (CMP_EQ(_fa, _fb)) goto loc_0006EAC8; /* je: equal / zero */

loc_0006EAB0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006EB0A; /* je: equal / zero */

loc_0006EAB4: ;
    ecx = MEM32(0x8EAC98);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0006EAC2u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006EAC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006EAC8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006EADF; /* je: equal / zero */

loc_0006EACC: ;
    eax = MEM32(0x8EAC94);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006EAD9u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006EAD9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006EADF: ;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006EAEFu); RECOMP_ABI_CALL(0x00012379u, sub_00012379); /* call 0x00012379 */

loc_0006EAEF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006EB0A; /* je: equal / zero */

loc_0006EAF6: ;
    ecx = MEM32(0x8EACC0);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0006EB04u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006EB04: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006EB0A: ;
    edx = MEM32(0x8EACC8);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0006EB18u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006EB18: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006EB1E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006EB24u); RECOMP_ABI_CALL(0x00016BBDu, sub_00016BBD); /* call 0x00016BBD */

loc_0006EB24: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006EB38; /* je: equal / zero */

loc_0006EB2B: ;
    eax = MEM32(0x8EACA4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006EB38u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006EB38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006EB80
 * Original: 0x0006EB80 - 0x0006EB9E (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006EB80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x39A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x39A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006EBB0
 * Original: 0x0006EBB0 - 0x0006EC15 (101 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EBB0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0006EBB0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7C8); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x896DA4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006EBD3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006EBCE: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006EC0C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006EBD3: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006EBE5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006EBD8: ;
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0006EBE5: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006EBFE; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006EBEE: ;
    eax = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0006EBFE: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0006EC0C: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0006EC30
 * Original: 0x0006EC30 - 0x0006EC5E (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006EC30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7B3058;
    MEM32(0x8EAC90) = 0;
    PUSH32(esp, 0x0006EC48u); RECOMP_ABI_CALL(0x0001D251u, sub_0001D251); /* call 0x0001D251 */

loc_0006EC48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006EC58; /* je: equal / zero */

loc_0006EC4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006EC55u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0006EC55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006EC58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006EC70
 * Original: 0x0006EC70 - 0x0006ED9E (302 bytes, 100 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EC70(void)
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

loc_0006EC70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    ebp = ecx;
    ecx = edi;
    PUSH32(esp, 0x0006EC87u); RECOMP_ABI_CALL(0x00032813u, sub_00032813); /* call 0x00032813 */

loc_0006EC87: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006EC9A; /* jne: not equal / not zero */

loc_0006EC8B: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0006EC93u); RECOMP_ABI_CALL(0x0002C026u, sub_0002C026); /* call 0x0002C026 */

loc_0006EC93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006EC9A: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006ECD2; /* jge: greater or equal (signed >=) */

loc_0006ECA4: ;
    edi = MEM32(edi + 0x3C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006ECD2; /* je: equal / zero */

loc_0006ECAB: ;
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006ECB7u); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_0006ECB7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x896DA4)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0006ED21;

loc_0006ECD2: ;
    ecx = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x8F95EC); /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x896DA4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006ECF7; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_0006ECF2: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006ED1C; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006ECF7: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006ED02; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0006ECFC: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_0006ED1C;

loc_0006ED02: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006ED19; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0006ED15: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_0006ED19: ;
    xmm1 = xmm2; /* movaps */

loc_0006ED1C: ;
    MEMF(ebx + 0x1C) = xmm1.f[0]; /* movss */

loc_0006ED21: ;
    edx = MEM32(esi + 0x20);
    xmm2 = XMM_SCALAR(MEMF(edx + 0x60)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x8F95EC); /* addss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006ED3B; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_0006ED36: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006ED5A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006ED3B: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006ED46; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_0006ED40: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    goto loc_0006ED5A;

loc_0006ED46: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006ED5A; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0006ED56: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_0006ED5A: ;
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006ED6D; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_0006ED68: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006ED89; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006ED6D: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006ED78; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0006ED72: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_0006ED89;

loc_0006ED78: ;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006ED89; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0006ED85: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_0006ED89: ;
    PUSH32(esp, esi);
    MEMF(ebx + 0x18) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0006ED94u); RECOMP_ABI_CALL(0x00014368u, sub_00014368); /* call 0x00014368 */

loc_0006ED94: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006EDF0
 * Original: 0x0006EDF0 - 0x0006F043 (595 bytes, 178 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EDF0(void)
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

loc_0006EDF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = MEM32(edi + 0xC);
    ebx = MEM32(esi + 0x20);
    ebp = ecx;
    PUSH32(esp, 0x0006EE08u); RECOMP_ABI_CALL(0x00018A0Du, sub_00018A0D); /* call 0x00018A0D */

loc_0006EE08: ;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006EE13u); RECOMP_ABI_CALL(0x000200DCu, sub_000200DC); /* call 0x000200DC */

loc_0006EE13: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006EE19u); RECOMP_ABI_CALL(0x00016BBDu, sub_00016BBD); /* call 0x00016BBD */

loc_0006EE19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0006EEDC; /* je: equal / zero */

loc_0006EE24: ;
    xmm1 = XMM_SCALAR(MEMF(0x896DA4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B3098)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006EE3D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006EE39: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0006EE3D: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006EE57u); RECOMP_ABI_CALL(0x000352F2u, sub_000352F2); /* call 0x000352F2 */

loc_0006EE57: ;
    ebx = MEM32(esi + 0x20);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006EE6Eu); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_0006EE6E: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896DA4)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(ebx + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006EE94; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006EE8F: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006EED2; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006EE94: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006EEA7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006EE99: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebx + 0x60) = xmm0.f[0]; /* movss */
    goto loc_0006F01B;

loc_0006EEA7: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006EEC4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0006EEB3: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    MEMF(ebx + 0x60) = xmm0.f[0]; /* movss */
    goto loc_0006F01B;

loc_0006EEC4: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */

loc_0006EED2: ;
    MEMF(ebx + 0x60) = xmm0.f[0]; /* movss */
    goto loc_0006F01B;

loc_0006EEDC: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x8F95EC); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x896DA4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006EEFE; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0006EEF9: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006EF1D; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006EEFE: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006EF09; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0006EF03: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_0006EF1D;

loc_0006EF09: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006EF1D; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0006EF19: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_0006EF1D: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x8F95B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006EF81; /* jnp: not parity */

loc_0006EF2A: ;
    ebx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0006EF3Au); RECOMP_ABI_CALL(0x000184B8u, sub_000184B8); /* call 0x000184B8 */

loc_0006EF3A: ;
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x896DA4)); /* movss */
    MEMF(ebx + 0x60) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006EF5D; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0006EF58: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006EF79; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006EF5D: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006EF68; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0006EF62: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_0006EF79;

loc_0006EF68: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006EF79; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0006EF75: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_0006EF79: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebx + 0x60) = xmm1.f[0]; /* movss */

loc_0006EF81: ;
    ebx = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x64); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006EF98; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0006EF93: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006EFB7; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006EF98: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006EFA3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0006EF9D: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_0006EFB7;

loc_0006EFA3: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006EFB7; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0006EFB3: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_0006EFB7: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8F9610)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AB7C8); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006EFD7; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0006EFD2: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006EFF3; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006EFD7: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006EFE2; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0006EFDC: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_0006EFF3;

loc_0006EFE2: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006EFF3; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0006EFEF: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_0006EFF3: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0006F00Du); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_0006F00D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0006F018u); RECOMP_ABI_CALL(0x00011E6Fu, sub_00011E6F); /* call 0x00011E6F */

loc_0006F018: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */

loc_0006F01B: ;
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006F031; /* jp: parity */

loc_0006F02C: ;
    PUSH32(esp, 0x0006F031u); RECOMP_ABI_CALL(0x00021423u, sub_00021423); /* call 0x00021423 */

loc_0006F031: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0006F039u); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_0006F039: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
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
 * sub_0006F0E0
 * Original: 0x0006F0E0 - 0x0006F0EE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F0E0(void)
{

loc_0006F0E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006F100
 * Original: 0x0006F100 - 0x0006F104 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F100(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006F100: ;
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006F110
 * Original: 0x0006F110 - 0x0006F118 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F110: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x60)); return; /* indirect tail jmp */

}

/**
 * sub_0006F120
 * Original: 0x0006F120 - 0x0006F128 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F120: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x5C)); return; /* indirect tail jmp */

}

/**
 * sub_0006F130
 * Original: 0x0006F130 - 0x0006F136 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F130(void)
{

loc_0006F130: ;
    eax = MEM32(0x8EAC9C);
    esp += 4; return; /* ret */

}
