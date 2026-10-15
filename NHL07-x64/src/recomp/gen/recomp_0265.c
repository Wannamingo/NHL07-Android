/**
 * nhl_07_recomp - Recompiled code chunk 265
 * Functions: 250 (0x006A1880 - 0x006AA070)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_006A1880
 * Original: 0x006A1880 - 0x006A18EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1880: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A18BD; /* jne: not equal / not zero */

loc_006A188E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A18BD: ;
    PUSH32(esp, 0x8AC6AC);
    esi = ecx;
    PUSH32(esp, 0x006A18C9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A18C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A18E3; /* je: equal / zero */

loc_006A18CD: ;
    PUSH32(esp, 0x8AC6A4);
    ecx = esi;
    PUSH32(esp, 0x006A18D9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A18D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F001A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A18E3: ;
    POP32(esp, esi);
    MEM8(0x8F001A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1910
 * Original: 0x006A1910 - 0x006A197C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1910: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A194D; /* jne: not equal / not zero */

loc_006A191E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A194D: ;
    PUSH32(esp, 0x8AC6BC);
    esi = ecx;
    PUSH32(esp, 0x006A1959u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1959: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1973; /* je: equal / zero */

loc_006A195D: ;
    PUSH32(esp, 0x8AC6B4);
    ecx = esi;
    PUSH32(esp, 0x006A1969u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1969: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0006) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1973: ;
    POP32(esp, esi);
    MEM8(0x8F0006) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A19A0
 * Original: 0x006A19A0 - 0x006A1A0C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A19A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A19A0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A19DD; /* jne: not equal / not zero */

loc_006A19AE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A19DD: ;
    PUSH32(esp, 0x8AC6CC);
    esi = ecx;
    PUSH32(esp, 0x006A19E9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A19E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1A03; /* je: equal / zero */

loc_006A19ED: ;
    PUSH32(esp, 0x8AC6C4);
    ecx = esi;
    PUSH32(esp, 0x006A19F9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A19F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0017) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1A03: ;
    POP32(esp, esi);
    MEM8(0x8F0017) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1A30
 * Original: 0x006A1A30 - 0x006A1A9C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1A30: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A1A6D; /* jne: not equal / not zero */

loc_006A1A3E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A1A6D: ;
    PUSH32(esp, 0x8AC6DC);
    esi = ecx;
    PUSH32(esp, 0x006A1A79u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1A79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1A93; /* je: equal / zero */

loc_006A1A7D: ;
    PUSH32(esp, 0x8AC6D4);
    ecx = esi;
    PUSH32(esp, 0x006A1A89u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1A89: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0025) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1A93: ;
    POP32(esp, esi);
    MEM8(0x8F0025) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1AC0
 * Original: 0x006A1AC0 - 0x006A1B2C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1AC0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A1AFD; /* jne: not equal / not zero */

loc_006A1ACE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A1AFD: ;
    PUSH32(esp, 0x8AC6EC);
    esi = ecx;
    PUSH32(esp, 0x006A1B09u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1B09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1B23; /* je: equal / zero */

loc_006A1B0D: ;
    PUSH32(esp, 0x8AC6E4);
    ecx = esi;
    PUSH32(esp, 0x006A1B19u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1B19: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F002F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1B23: ;
    POP32(esp, esi);
    MEM8(0x8F002F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1B50
 * Original: 0x006A1B50 - 0x006A1BBC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1B50: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A1B8D; /* jne: not equal / not zero */

loc_006A1B5E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A1B8D: ;
    PUSH32(esp, 0x8AC6FC);
    esi = ecx;
    PUSH32(esp, 0x006A1B99u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1B99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1BB3; /* je: equal / zero */

loc_006A1B9D: ;
    PUSH32(esp, 0x8AC6F4);
    ecx = esi;
    PUSH32(esp, 0x006A1BA9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1BA9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0024) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1BB3: ;
    POP32(esp, esi);
    MEM8(0x8F0024) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1BE0
 * Original: 0x006A1BE0 - 0x006A1C4C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1BE0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A1C1D; /* jne: not equal / not zero */

loc_006A1BEE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A1C1D: ;
    PUSH32(esp, 0x8AC70C);
    esi = ecx;
    PUSH32(esp, 0x006A1C29u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1C29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1C43; /* je: equal / zero */

loc_006A1C2D: ;
    PUSH32(esp, 0x8AC704);
    ecx = esi;
    PUSH32(esp, 0x006A1C39u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1C39: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0005) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1C43: ;
    POP32(esp, esi);
    MEM8(0x8F0005) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1C70
 * Original: 0x006A1C70 - 0x006A1CDC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1C70: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A1CAD; /* jne: not equal / not zero */

loc_006A1C7E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A1CAD: ;
    PUSH32(esp, 0x8AC71C);
    esi = ecx;
    PUSH32(esp, 0x006A1CB9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1CB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1CD3; /* je: equal / zero */

loc_006A1CBD: ;
    PUSH32(esp, 0x8AC714);
    ecx = esi;
    PUSH32(esp, 0x006A1CC9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1CC9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F000A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1CD3: ;
    POP32(esp, esi);
    MEM8(0x8F000A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1D00
 * Original: 0x006A1D00 - 0x006A1D6C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1D00: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A1D3D; /* jne: not equal / not zero */

loc_006A1D0E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A1D3D: ;
    PUSH32(esp, 0x8AC72C);
    esi = ecx;
    PUSH32(esp, 0x006A1D49u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1D49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1D63; /* je: equal / zero */

loc_006A1D4D: ;
    PUSH32(esp, 0x8AC724);
    ecx = esi;
    PUSH32(esp, 0x006A1D59u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1D59: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F002E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1D63: ;
    POP32(esp, esi);
    MEM8(0x8F002E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1D90
 * Original: 0x006A1D90 - 0x006A1DFC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1D90: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A1DCD; /* jne: not equal / not zero */

loc_006A1D9E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A1DCD: ;
    PUSH32(esp, 0x8AC73C);
    esi = ecx;
    PUSH32(esp, 0x006A1DD9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1DD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1DF3; /* je: equal / zero */

loc_006A1DDD: ;
    PUSH32(esp, 0x8AC734);
    ecx = esi;
    PUSH32(esp, 0x006A1DE9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1DE9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F001B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1DF3: ;
    POP32(esp, esi);
    MEM8(0x8F001B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1E20
 * Original: 0x006A1E20 - 0x006A1E8C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1E20: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A1E5D; /* jne: not equal / not zero */

loc_006A1E2E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A1E5D: ;
    PUSH32(esp, 0x8AC74C);
    esi = ecx;
    PUSH32(esp, 0x006A1E69u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1E69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1E83; /* je: equal / zero */

loc_006A1E6D: ;
    PUSH32(esp, 0x8AC744);
    ecx = esi;
    PUSH32(esp, 0x006A1E79u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1E79: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0020) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1E83: ;
    POP32(esp, esi);
    MEM8(0x8F0020) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1EB0
 * Original: 0x006A1EB0 - 0x006A1F1C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1EB0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A1EED; /* jne: not equal / not zero */

loc_006A1EBE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A1EED: ;
    PUSH32(esp, 0x8AC75C);
    esi = ecx;
    PUSH32(esp, 0x006A1EF9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1EF9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1F13; /* je: equal / zero */

loc_006A1EFD: ;
    PUSH32(esp, 0x8AC754);
    ecx = esi;
    PUSH32(esp, 0x006A1F09u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1F09: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0007) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1F13: ;
    POP32(esp, esi);
    MEM8(0x8F0007) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1F40
 * Original: 0x006A1F40 - 0x006A1FAC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1F40: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A1F7D; /* jne: not equal / not zero */

loc_006A1F4E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A1F7D: ;
    PUSH32(esp, 0x8AC76C);
    esi = ecx;
    PUSH32(esp, 0x006A1F89u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A1F89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1FA3; /* je: equal / zero */

loc_006A1F8D: ;
    PUSH32(esp, 0x8AC764);
    ecx = esi;
    PUSH32(esp, 0x006A1F99u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A1F99: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0016) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1FA3: ;
    POP32(esp, esi);
    MEM8(0x8F0016) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1FD0
 * Original: 0x006A1FD0 - 0x006A203C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1FD0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A200D; /* jne: not equal / not zero */

loc_006A1FDE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A200D: ;
    PUSH32(esp, 0x8AC77C);
    esi = ecx;
    PUSH32(esp, 0x006A2019u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A2019: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2033; /* je: equal / zero */

loc_006A201D: ;
    PUSH32(esp, 0x8AC774);
    ecx = esi;
    PUSH32(esp, 0x006A2029u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A2029: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0010) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2033: ;
    POP32(esp, esi);
    MEM8(0x8F0010) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2060
 * Original: 0x006A2060 - 0x006A20CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2060: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A209D; /* jne: not equal / not zero */

loc_006A206E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A209D: ;
    PUSH32(esp, 0x8AC78C);
    esi = ecx;
    PUSH32(esp, 0x006A20A9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A20A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A20C3; /* je: equal / zero */

loc_006A20AD: ;
    PUSH32(esp, 0x8AC784);
    ecx = esi;
    PUSH32(esp, 0x006A20B9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A20B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0031) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A20C3: ;
    POP32(esp, esi);
    MEM8(0x8F0031) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A20F0
 * Original: 0x006A20F0 - 0x006A215C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A20F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A20F0: ;
    ecx = MEM32(0x8E8E14);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A212D; /* jne: not equal / not zero */

loc_006A20FE: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = ebx;
    MEM32(0x8E8E00) = ebx;
    MEM32(0x8E8DFC) = ebx;
    MEM32(0x8E8E04) = ebx;
    MEM32(0x8E8E0C) = ebx;
    MEM32(0x8E8E08) = ebx;
    MEM32(0x8E8E14) = ecx;

loc_006A212D: ;
    PUSH32(esp, 0x8AC9B0);
    esi = ecx;
    PUSH32(esp, 0x006A2139u); RECOMP_ABI_CALL(0x0001F28Bu, sub_0001F28B); /* call 0x0001F28B */

loc_006A2139: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2153; /* je: equal / zero */

loc_006A213D: ;
    PUSH32(esp, 0x8AC9A8);
    ecx = esi;
    PUSH32(esp, 0x006A2149u); RECOMP_ABI_CALL(0x0001BF91u, sub_0001BF91); /* call 0x0001BF91 */

loc_006A2149: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0116) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2153: ;
    POP32(esp, esi);
    MEM8(0x8F0116) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2180
 * Original: 0x006A2180 - 0x006A21EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2180: ;
    ecx = MEM32(0x8E8E14);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A21BD; /* jne: not equal / not zero */

loc_006A218E: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = ebx;
    MEM32(0x8E8E00) = ebx;
    MEM32(0x8E8DFC) = ebx;
    MEM32(0x8E8E04) = ebx;
    MEM32(0x8E8E0C) = ebx;
    MEM32(0x8E8E08) = ebx;
    MEM32(0x8E8E14) = ecx;

loc_006A21BD: ;
    PUSH32(esp, 0x8AC9C0);
    esi = ecx;
    PUSH32(esp, 0x006A21C9u); RECOMP_ABI_CALL(0x0001F28Bu, sub_0001F28B); /* call 0x0001F28B */

loc_006A21C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A21E3; /* je: equal / zero */

loc_006A21CD: ;
    PUSH32(esp, 0x8AC9B8);
    ecx = esi;
    PUSH32(esp, 0x006A21D9u); RECOMP_ABI_CALL(0x0001BF91u, sub_0001BF91); /* call 0x0001BF91 */

loc_006A21D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0111) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A21E3: ;
    POP32(esp, esi);
    MEM8(0x8F0111) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2210
 * Original: 0x006A2210 - 0x006A227C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2210: ;
    ecx = MEM32(0x8E8E14);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A224D; /* jne: not equal / not zero */

loc_006A221E: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = ebx;
    MEM32(0x8E8E00) = ebx;
    MEM32(0x8E8DFC) = ebx;
    MEM32(0x8E8E04) = ebx;
    MEM32(0x8E8E0C) = ebx;
    MEM32(0x8E8E08) = ebx;
    MEM32(0x8E8E14) = ecx;

loc_006A224D: ;
    PUSH32(esp, 0x8AC9D0);
    esi = ecx;
    PUSH32(esp, 0x006A2259u); RECOMP_ABI_CALL(0x0001F28Bu, sub_0001F28B); /* call 0x0001F28B */

loc_006A2259: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2273; /* je: equal / zero */

loc_006A225D: ;
    PUSH32(esp, 0x8AC9C8);
    ecx = esi;
    PUSH32(esp, 0x006A2269u); RECOMP_ABI_CALL(0x0001BF91u, sub_0001BF91); /* call 0x0001BF91 */

loc_006A2269: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0113) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2273: ;
    POP32(esp, esi);
    MEM8(0x8F0113) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A22A0
 * Original: 0x006A22A0 - 0x006A230C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A22A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A22A0: ;
    ecx = MEM32(0x8E8E14);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A22DD; /* jne: not equal / not zero */

loc_006A22AE: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = ebx;
    MEM32(0x8E8E00) = ebx;
    MEM32(0x8E8DFC) = ebx;
    MEM32(0x8E8E04) = ebx;
    MEM32(0x8E8E0C) = ebx;
    MEM32(0x8E8E08) = ebx;
    MEM32(0x8E8E14) = ecx;

loc_006A22DD: ;
    PUSH32(esp, 0x8AC9E0);
    esi = ecx;
    PUSH32(esp, 0x006A22E9u); RECOMP_ABI_CALL(0x0001F28Bu, sub_0001F28B); /* call 0x0001F28B */

loc_006A22E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2303; /* je: equal / zero */

loc_006A22ED: ;
    PUSH32(esp, 0x8AC9D8);
    ecx = esi;
    PUSH32(esp, 0x006A22F9u); RECOMP_ABI_CALL(0x0001BF91u, sub_0001BF91); /* call 0x0001BF91 */

loc_006A22F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0118) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2303: ;
    POP32(esp, esi);
    MEM8(0x8F0118) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2330
 * Original: 0x006A2330 - 0x006A239C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2330: ;
    ecx = MEM32(0x8E8E14);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A236D; /* jne: not equal / not zero */

loc_006A233E: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = ebx;
    MEM32(0x8E8E00) = ebx;
    MEM32(0x8E8DFC) = ebx;
    MEM32(0x8E8E04) = ebx;
    MEM32(0x8E8E0C) = ebx;
    MEM32(0x8E8E08) = ebx;
    MEM32(0x8E8E14) = ecx;

loc_006A236D: ;
    PUSH32(esp, 0x8AC9F0);
    esi = ecx;
    PUSH32(esp, 0x006A2379u); RECOMP_ABI_CALL(0x0001F28Bu, sub_0001F28B); /* call 0x0001F28B */

loc_006A2379: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2393; /* je: equal / zero */

loc_006A237D: ;
    PUSH32(esp, 0x8AC9E8);
    ecx = esi;
    PUSH32(esp, 0x006A2389u); RECOMP_ABI_CALL(0x0001BF91u, sub_0001BF91); /* call 0x0001BF91 */

loc_006A2389: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0114) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2393: ;
    POP32(esp, esi);
    MEM8(0x8F0114) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A23C0
 * Original: 0x006A23C0 - 0x006A242C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A23C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A23C0: ;
    ecx = MEM32(0x8E8E14);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A23FD; /* jne: not equal / not zero */

loc_006A23CE: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = ebx;
    MEM32(0x8E8E00) = ebx;
    MEM32(0x8E8DFC) = ebx;
    MEM32(0x8E8E04) = ebx;
    MEM32(0x8E8E0C) = ebx;
    MEM32(0x8E8E08) = ebx;
    MEM32(0x8E8E14) = ecx;

loc_006A23FD: ;
    PUSH32(esp, 0x8ACA00);
    esi = ecx;
    PUSH32(esp, 0x006A2409u); RECOMP_ABI_CALL(0x0001F28Bu, sub_0001F28B); /* call 0x0001F28B */

loc_006A2409: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2423; /* je: equal / zero */

loc_006A240D: ;
    PUSH32(esp, 0x8AC9F8);
    ecx = esi;
    PUSH32(esp, 0x006A2419u); RECOMP_ABI_CALL(0x0001BF91u, sub_0001BF91); /* call 0x0001BF91 */

loc_006A2419: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0115) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2423: ;
    POP32(esp, esi);
    MEM8(0x8F0115) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2450
 * Original: 0x006A2450 - 0x006A24BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2450: ;
    ecx = MEM32(0x8E8E14);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A248D; /* jne: not equal / not zero */

loc_006A245E: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = ebx;
    MEM32(0x8E8E00) = ebx;
    MEM32(0x8E8DFC) = ebx;
    MEM32(0x8E8E04) = ebx;
    MEM32(0x8E8E0C) = ebx;
    MEM32(0x8E8E08) = ebx;
    MEM32(0x8E8E14) = ecx;

loc_006A248D: ;
    PUSH32(esp, 0x8ACA10);
    esi = ecx;
    PUSH32(esp, 0x006A2499u); RECOMP_ABI_CALL(0x0001F28Bu, sub_0001F28B); /* call 0x0001F28B */

loc_006A2499: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A24B3; /* je: equal / zero */

loc_006A249D: ;
    PUSH32(esp, 0x8ACA08);
    ecx = esi;
    PUSH32(esp, 0x006A24A9u); RECOMP_ABI_CALL(0x0001BF91u, sub_0001BF91); /* call 0x0001BF91 */

loc_006A24A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0112) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A24B3: ;
    POP32(esp, esi);
    MEM8(0x8F0112) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A24E0
 * Original: 0x006A24E0 - 0x006A254C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A24E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A24E0: ;
    ecx = MEM32(0x8E8E14);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A251D; /* jne: not equal / not zero */

loc_006A24EE: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = ebx;
    MEM32(0x8E8E00) = ebx;
    MEM32(0x8E8DFC) = ebx;
    MEM32(0x8E8E04) = ebx;
    MEM32(0x8E8E0C) = ebx;
    MEM32(0x8E8E08) = ebx;
    MEM32(0x8E8E14) = ecx;

loc_006A251D: ;
    PUSH32(esp, 0x8ACA20);
    esi = ecx;
    PUSH32(esp, 0x006A2529u); RECOMP_ABI_CALL(0x0001F28Bu, sub_0001F28B); /* call 0x0001F28B */

loc_006A2529: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2543; /* je: equal / zero */

loc_006A252D: ;
    PUSH32(esp, 0x8ACA18);
    ecx = esi;
    PUSH32(esp, 0x006A2539u); RECOMP_ABI_CALL(0x0001BF91u, sub_0001BF91); /* call 0x0001BF91 */

loc_006A2539: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0117) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2543: ;
    POP32(esp, esi);
    MEM8(0x8F0117) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2570
 * Original: 0x006A2570 - 0x006A25DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2570: ;
    ecx = MEM32(0x8E8E14);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A25AD; /* jne: not equal / not zero */

loc_006A257E: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = ebx;
    MEM32(0x8E8E00) = ebx;
    MEM32(0x8E8DFC) = ebx;
    MEM32(0x8E8E04) = ebx;
    MEM32(0x8E8E0C) = ebx;
    MEM32(0x8E8E08) = ebx;
    MEM32(0x8E8E14) = ecx;

loc_006A25AD: ;
    PUSH32(esp, 0x8ACA30);
    esi = ecx;
    PUSH32(esp, 0x006A25B9u); RECOMP_ABI_CALL(0x0001F28Bu, sub_0001F28B); /* call 0x0001F28B */

loc_006A25B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A25D3; /* je: equal / zero */

loc_006A25BD: ;
    PUSH32(esp, 0x8ACA28);
    ecx = esi;
    PUSH32(esp, 0x006A25C9u); RECOMP_ABI_CALL(0x0001BF91u, sub_0001BF91); /* call 0x0001BF91 */

loc_006A25C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0110) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A25D3: ;
    POP32(esp, esi);
    MEM8(0x8F0110) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2600
 * Original: 0x006A2600 - 0x006A266C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2600: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A263D; /* jne: not equal / not zero */

loc_006A260E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A263D: ;
    PUSH32(esp, 0x8ACAC8);
    esi = ecx;
    PUSH32(esp, 0x006A2649u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A2649: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2663; /* je: equal / zero */

loc_006A264D: ;
    PUSH32(esp, 0x8ACAC0);
    ecx = esi;
    PUSH32(esp, 0x006A2659u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A2659: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0152) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2663: ;
    POP32(esp, esi);
    MEM8(0x8F0152) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2690
 * Original: 0x006A2690 - 0x006A26FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2690: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A26CD; /* jne: not equal / not zero */

loc_006A269E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A26CD: ;
    PUSH32(esp, 0x8ACAD8);
    esi = ecx;
    PUSH32(esp, 0x006A26D9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A26D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A26F3; /* je: equal / zero */

loc_006A26DD: ;
    PUSH32(esp, 0x8ACAD0);
    ecx = esi;
    PUSH32(esp, 0x006A26E9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A26E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0150) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A26F3: ;
    POP32(esp, esi);
    MEM8(0x8F0150) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2720
 * Original: 0x006A2720 - 0x006A278C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2720: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A275D; /* jne: not equal / not zero */

loc_006A272E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A275D: ;
    PUSH32(esp, 0x8ACAE8);
    esi = ecx;
    PUSH32(esp, 0x006A2769u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A2769: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2783; /* je: equal / zero */

loc_006A276D: ;
    PUSH32(esp, 0x8ACAE0);
    ecx = esi;
    PUSH32(esp, 0x006A2779u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A2779: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0151) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2783: ;
    POP32(esp, esi);
    MEM8(0x8F0151) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A27B0
 * Original: 0x006A27B0 - 0x006A281C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A27B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A27B0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A27ED; /* jne: not equal / not zero */

loc_006A27BE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A27ED: ;
    PUSH32(esp, 0x8ACAF8);
    esi = ecx;
    PUSH32(esp, 0x006A27F9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A27F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2813; /* je: equal / zero */

loc_006A27FD: ;
    PUSH32(esp, 0x8ACAF0);
    ecx = esi;
    PUSH32(esp, 0x006A2809u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A2809: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F015B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2813: ;
    POP32(esp, esi);
    MEM8(0x8F015B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2840
 * Original: 0x006A2840 - 0x006A28AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2840: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A287D; /* jne: not equal / not zero */

loc_006A284E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A287D: ;
    PUSH32(esp, 0x8ACB08);
    esi = ecx;
    PUSH32(esp, 0x006A2889u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A2889: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A28A3; /* je: equal / zero */

loc_006A288D: ;
    PUSH32(esp, 0x8ACB00);
    ecx = esi;
    PUSH32(esp, 0x006A2899u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A2899: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F015F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A28A3: ;
    POP32(esp, esi);
    MEM8(0x8F015F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A28D0
 * Original: 0x006A28D0 - 0x006A293C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A28D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A28D0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A290D; /* jne: not equal / not zero */

loc_006A28DE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A290D: ;
    PUSH32(esp, 0x8ACB18);
    esi = ecx;
    PUSH32(esp, 0x006A2919u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A2919: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2933; /* je: equal / zero */

loc_006A291D: ;
    PUSH32(esp, 0x8ACB10);
    ecx = esi;
    PUSH32(esp, 0x006A2929u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A2929: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F014F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2933: ;
    POP32(esp, esi);
    MEM8(0x8F014F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2960
 * Original: 0x006A2960 - 0x006A29CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2960: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A299D; /* jne: not equal / not zero */

loc_006A296E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A299D: ;
    PUSH32(esp, 0x8ACB28);
    esi = ecx;
    PUSH32(esp, 0x006A29A9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A29A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A29C3; /* je: equal / zero */

loc_006A29AD: ;
    PUSH32(esp, 0x8ACB20);
    ecx = esi;
    PUSH32(esp, 0x006A29B9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A29B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0157) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A29C3: ;
    POP32(esp, esi);
    MEM8(0x8F0157) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A29F0
 * Original: 0x006A29F0 - 0x006A2A5C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A29F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A29F0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A2A2D; /* jne: not equal / not zero */

loc_006A29FE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A2A2D: ;
    PUSH32(esp, 0x8ACB38);
    esi = ecx;
    PUSH32(esp, 0x006A2A39u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A2A39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2A53; /* je: equal / zero */

loc_006A2A3D: ;
    PUSH32(esp, 0x8ACB30);
    ecx = esi;
    PUSH32(esp, 0x006A2A49u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A2A49: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F015E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2A53: ;
    POP32(esp, esi);
    MEM8(0x8F015E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2A80
 * Original: 0x006A2A80 - 0x006A2AEC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2A80: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A2ABD; /* jne: not equal / not zero */

loc_006A2A8E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A2ABD: ;
    PUSH32(esp, 0x8ACB48);
    esi = ecx;
    PUSH32(esp, 0x006A2AC9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A2AC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2AE3; /* je: equal / zero */

loc_006A2ACD: ;
    PUSH32(esp, 0x8ACB40);
    ecx = esi;
    PUSH32(esp, 0x006A2AD9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A2AD9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0154) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2AE3: ;
    POP32(esp, esi);
    MEM8(0x8F0154) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2B10
 * Original: 0x006A2B10 - 0x006A2B7C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2B10: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A2B4D; /* jne: not equal / not zero */

loc_006A2B1E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A2B4D: ;
    PUSH32(esp, 0x8ACB58);
    esi = ecx;
    PUSH32(esp, 0x006A2B59u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A2B59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2B73; /* je: equal / zero */

loc_006A2B5D: ;
    PUSH32(esp, 0x8ACB50);
    ecx = esi;
    PUSH32(esp, 0x006A2B69u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A2B69: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0158) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2B73: ;
    POP32(esp, esi);
    MEM8(0x8F0158) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2BA0
 * Original: 0x006A2BA0 - 0x006A2C0C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2BA0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A2BDD; /* jne: not equal / not zero */

loc_006A2BAE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A2BDD: ;
    PUSH32(esp, 0x8ACB68);
    esi = ecx;
    PUSH32(esp, 0x006A2BE9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A2BE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2C03; /* je: equal / zero */

loc_006A2BED: ;
    PUSH32(esp, 0x8ACB60);
    ecx = esi;
    PUSH32(esp, 0x006A2BF9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A2BF9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F014C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2C03: ;
    POP32(esp, esi);
    MEM8(0x8F014C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2C30
 * Original: 0x006A2C30 - 0x006A2C9C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2C30: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A2C6D; /* jne: not equal / not zero */

loc_006A2C3E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A2C6D: ;
    PUSH32(esp, 0x8ACB78);
    esi = ecx;
    PUSH32(esp, 0x006A2C79u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A2C79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2C93; /* je: equal / zero */

loc_006A2C7D: ;
    PUSH32(esp, 0x8ACB70);
    ecx = esi;
    PUSH32(esp, 0x006A2C89u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A2C89: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0159) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2C93: ;
    POP32(esp, esi);
    MEM8(0x8F0159) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2CC0
 * Original: 0x006A2CC0 - 0x006A2D2C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2CC0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A2CFD; /* jne: not equal / not zero */

loc_006A2CCE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A2CFD: ;
    PUSH32(esp, 0x8ACB88);
    esi = ecx;
    PUSH32(esp, 0x006A2D09u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A2D09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2D23; /* je: equal / zero */

loc_006A2D0D: ;
    PUSH32(esp, 0x8ACB80);
    ecx = esi;
    PUSH32(esp, 0x006A2D19u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A2D19: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0155) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2D23: ;
    POP32(esp, esi);
    MEM8(0x8F0155) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2D50
 * Original: 0x006A2D50 - 0x006A2DBC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2D50: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A2D8D; /* jne: not equal / not zero */

loc_006A2D5E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A2D8D: ;
    PUSH32(esp, 0x8ACB98);
    esi = ecx;
    PUSH32(esp, 0x006A2D99u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A2D99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2DB3; /* je: equal / zero */

loc_006A2D9D: ;
    PUSH32(esp, 0x8ACB90);
    ecx = esi;
    PUSH32(esp, 0x006A2DA9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A2DA9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F015D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2DB3: ;
    POP32(esp, esi);
    MEM8(0x8F015D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2DE0
 * Original: 0x006A2DE0 - 0x006A2E4C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2DE0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A2E1D; /* jne: not equal / not zero */

loc_006A2DEE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A2E1D: ;
    PUSH32(esp, 0x8ACBA8);
    esi = ecx;
    PUSH32(esp, 0x006A2E29u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A2E29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2E43; /* je: equal / zero */

loc_006A2E2D: ;
    PUSH32(esp, 0x8ACBA0);
    ecx = esi;
    PUSH32(esp, 0x006A2E39u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A2E39: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0153) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2E43: ;
    POP32(esp, esi);
    MEM8(0x8F0153) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2E70
 * Original: 0x006A2E70 - 0x006A2EDC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2E70: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A2EAD; /* jne: not equal / not zero */

loc_006A2E7E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A2EAD: ;
    PUSH32(esp, 0x8ACBB8);
    esi = ecx;
    PUSH32(esp, 0x006A2EB9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A2EB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2ED3; /* je: equal / zero */

loc_006A2EBD: ;
    PUSH32(esp, 0x8ACBB0);
    ecx = esi;
    PUSH32(esp, 0x006A2EC9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A2EC9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0156) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2ED3: ;
    POP32(esp, esi);
    MEM8(0x8F0156) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2F00
 * Original: 0x006A2F00 - 0x006A2F6C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2F00: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A2F3D; /* jne: not equal / not zero */

loc_006A2F0E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A2F3D: ;
    PUSH32(esp, 0x8ACBC8);
    esi = ecx;
    PUSH32(esp, 0x006A2F49u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A2F49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2F63; /* je: equal / zero */

loc_006A2F4D: ;
    PUSH32(esp, 0x8ACBC0);
    ecx = esi;
    PUSH32(esp, 0x006A2F59u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A2F59: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F014E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2F63: ;
    POP32(esp, esi);
    MEM8(0x8F014E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A2F90
 * Original: 0x006A2F90 - 0x006A2FFC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A2F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A2F90: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A2FCD; /* jne: not equal / not zero */

loc_006A2F9E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A2FCD: ;
    PUSH32(esp, 0x8ACBD8);
    esi = ecx;
    PUSH32(esp, 0x006A2FD9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A2FD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A2FF3; /* je: equal / zero */

loc_006A2FDD: ;
    PUSH32(esp, 0x8ACBD0);
    ecx = esi;
    PUSH32(esp, 0x006A2FE9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A2FE9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F014D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A2FF3: ;
    POP32(esp, esi);
    MEM8(0x8F014D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3020
 * Original: 0x006A3020 - 0x006A308C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3020: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A305D; /* jne: not equal / not zero */

loc_006A302E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A305D: ;
    PUSH32(esp, 0x8ACBE8);
    esi = ecx;
    PUSH32(esp, 0x006A3069u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3069: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3083; /* je: equal / zero */

loc_006A306D: ;
    PUSH32(esp, 0x8ACBE0);
    ecx = esi;
    PUSH32(esp, 0x006A3079u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3079: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F015A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3083: ;
    POP32(esp, esi);
    MEM8(0x8F015A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A30B0
 * Original: 0x006A30B0 - 0x006A311C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A30B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A30B0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A30ED; /* jne: not equal / not zero */

loc_006A30BE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A30ED: ;
    PUSH32(esp, 0x8ACBF8);
    esi = ecx;
    PUSH32(esp, 0x006A30F9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A30F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3113; /* je: equal / zero */

loc_006A30FD: ;
    PUSH32(esp, 0x8ACBF0);
    ecx = esi;
    PUSH32(esp, 0x006A3109u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3109: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F015C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3113: ;
    POP32(esp, esi);
    MEM8(0x8F015C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3140
 * Original: 0x006A3140 - 0x006A31AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3140: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A317D; /* jne: not equal / not zero */

loc_006A314E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A317D: ;
    PUSH32(esp, 0x8ACC7C);
    esi = ecx;
    PUSH32(esp, 0x006A3189u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A3189: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A31A3; /* je: equal / zero */

loc_006A318D: ;
    PUSH32(esp, 0x8ACC74);
    ecx = esi;
    PUSH32(esp, 0x006A3199u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A3199: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0167) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A31A3: ;
    POP32(esp, esi);
    MEM8(0x8F0167) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A31D0
 * Original: 0x006A31D0 - 0x006A323C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A31D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A31D0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A320D; /* jne: not equal / not zero */

loc_006A31DE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A320D: ;
    PUSH32(esp, 0x8ACC8C);
    esi = ecx;
    PUSH32(esp, 0x006A3219u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3219: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3233; /* je: equal / zero */

loc_006A321D: ;
    PUSH32(esp, 0x8ACC84);
    ecx = esi;
    PUSH32(esp, 0x006A3229u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3229: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0164) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3233: ;
    POP32(esp, esi);
    MEM8(0x8F0164) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3260
 * Original: 0x006A3260 - 0x006A32CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3260: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A329D; /* jne: not equal / not zero */

loc_006A326E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A329D: ;
    PUSH32(esp, 0x8ACC9C);
    esi = ecx;
    PUSH32(esp, 0x006A32A9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A32A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A32C3; /* je: equal / zero */

loc_006A32AD: ;
    PUSH32(esp, 0x8ACC94);
    ecx = esi;
    PUSH32(esp, 0x006A32B9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A32B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0165) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A32C3: ;
    POP32(esp, esi);
    MEM8(0x8F0165) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A32F0
 * Original: 0x006A32F0 - 0x006A335C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A32F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A32F0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A332D; /* jne: not equal / not zero */

loc_006A32FE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A332D: ;
    PUSH32(esp, 0x8ACCAC);
    esi = ecx;
    PUSH32(esp, 0x006A3339u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3339: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3353; /* je: equal / zero */

loc_006A333D: ;
    PUSH32(esp, 0x8ACCA4);
    ecx = esi;
    PUSH32(esp, 0x006A3349u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3349: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F016A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3353: ;
    POP32(esp, esi);
    MEM8(0x8F016A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3380
 * Original: 0x006A3380 - 0x006A33EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3380: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A33BD; /* jne: not equal / not zero */

loc_006A338E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A33BD: ;
    PUSH32(esp, 0x8ACCBC);
    esi = ecx;
    PUSH32(esp, 0x006A33C9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A33C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A33E3; /* je: equal / zero */

loc_006A33CD: ;
    PUSH32(esp, 0x8ACCB4);
    ecx = esi;
    PUSH32(esp, 0x006A33D9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A33D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F016C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A33E3: ;
    POP32(esp, esi);
    MEM8(0x8F016C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3410
 * Original: 0x006A3410 - 0x006A347C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3410: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A344D; /* jne: not equal / not zero */

loc_006A341E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A344D: ;
    PUSH32(esp, 0x8ACCCC);
    esi = ecx;
    PUSH32(esp, 0x006A3459u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3459: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3473; /* je: equal / zero */

loc_006A345D: ;
    PUSH32(esp, 0x8ACCC4);
    ecx = esi;
    PUSH32(esp, 0x006A3469u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3469: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0166) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3473: ;
    POP32(esp, esi);
    MEM8(0x8F0166) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A34A0
 * Original: 0x006A34A0 - 0x006A350C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A34A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A34A0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A34DD; /* jne: not equal / not zero */

loc_006A34AE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A34DD: ;
    PUSH32(esp, 0x8ACCDC);
    esi = ecx;
    PUSH32(esp, 0x006A34E9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A34E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3503; /* je: equal / zero */

loc_006A34ED: ;
    PUSH32(esp, 0x8ACCD4);
    ecx = esi;
    PUSH32(esp, 0x006A34F9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A34F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0169) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3503: ;
    POP32(esp, esi);
    MEM8(0x8F0169) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3530
 * Original: 0x006A3530 - 0x006A359C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3530: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A356D; /* jne: not equal / not zero */

loc_006A353E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A356D: ;
    PUSH32(esp, 0x8ACCEC);
    esi = ecx;
    PUSH32(esp, 0x006A3579u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3579: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3593; /* je: equal / zero */

loc_006A357D: ;
    PUSH32(esp, 0x8ACCE4);
    ecx = esi;
    PUSH32(esp, 0x006A3589u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3589: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F016B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3593: ;
    POP32(esp, esi);
    MEM8(0x8F016B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A35C0
 * Original: 0x006A35C0 - 0x006A362C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A35C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A35C0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A35FD; /* jne: not equal / not zero */

loc_006A35CE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A35FD: ;
    PUSH32(esp, 0x8ACCFC);
    esi = ecx;
    PUSH32(esp, 0x006A3609u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3609: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3623; /* je: equal / zero */

loc_006A360D: ;
    PUSH32(esp, 0x8ACCF4);
    ecx = esi;
    PUSH32(esp, 0x006A3619u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3619: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0168) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3623: ;
    POP32(esp, esi);
    MEM8(0x8F0168) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3650
 * Original: 0x006A3650 - 0x006A36BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3650: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A368D; /* jne: not equal / not zero */

loc_006A365E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A368D: ;
    PUSH32(esp, 0x8ACD60);
    esi = ecx;
    PUSH32(esp, 0x006A3699u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3699: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A36B3; /* je: equal / zero */

loc_006A369D: ;
    PUSH32(esp, 0x8ACD58);
    ecx = esi;
    PUSH32(esp, 0x006A36A9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A36A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0172) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A36B3: ;
    POP32(esp, esi);
    MEM8(0x8F0172) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A36E0
 * Original: 0x006A36E0 - 0x006A374C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A36E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A36E0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A371D; /* jne: not equal / not zero */

loc_006A36EE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A371D: ;
    PUSH32(esp, 0x8ACD70);
    esi = ecx;
    PUSH32(esp, 0x006A3729u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3729: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3743; /* je: equal / zero */

loc_006A372D: ;
    PUSH32(esp, 0x8ACD68);
    ecx = esi;
    PUSH32(esp, 0x006A3739u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3739: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0170) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3743: ;
    POP32(esp, esi);
    MEM8(0x8F0170) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3770
 * Original: 0x006A3770 - 0x006A37DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3770: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A37AD; /* jne: not equal / not zero */

loc_006A377E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A37AD: ;
    PUSH32(esp, 0x8ACD80);
    esi = ecx;
    PUSH32(esp, 0x006A37B9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A37B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A37D3; /* je: equal / zero */

loc_006A37BD: ;
    PUSH32(esp, 0x8ACD78);
    ecx = esi;
    PUSH32(esp, 0x006A37C9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A37C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0171) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A37D3: ;
    POP32(esp, esi);
    MEM8(0x8F0171) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3800
 * Original: 0x006A3800 - 0x006A386C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3800: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A383D; /* jne: not equal / not zero */

loc_006A380E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A383D: ;
    PUSH32(esp, 0x8ACD90);
    esi = ecx;
    PUSH32(esp, 0x006A3849u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3849: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3863; /* je: equal / zero */

loc_006A384D: ;
    PUSH32(esp, 0x8ACD88);
    ecx = esi;
    PUSH32(esp, 0x006A3859u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3859: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F017A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3863: ;
    POP32(esp, esi);
    MEM8(0x8F017A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3890
 * Original: 0x006A3890 - 0x006A38FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3890: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A38CD; /* jne: not equal / not zero */

loc_006A389E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A38CD: ;
    PUSH32(esp, 0x8ACDA0);
    esi = ecx;
    PUSH32(esp, 0x006A38D9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A38D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A38F3; /* je: equal / zero */

loc_006A38DD: ;
    PUSH32(esp, 0x8ACD98);
    ecx = esi;
    PUSH32(esp, 0x006A38E9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A38E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F017D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A38F3: ;
    POP32(esp, esi);
    MEM8(0x8F017D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3920
 * Original: 0x006A3920 - 0x006A398C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3920: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A395D; /* jne: not equal / not zero */

loc_006A392E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A395D: ;
    PUSH32(esp, 0x8ACDB0);
    esi = ecx;
    PUSH32(esp, 0x006A3969u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3969: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3983; /* je: equal / zero */

loc_006A396D: ;
    PUSH32(esp, 0x8ACDA8);
    ecx = esi;
    PUSH32(esp, 0x006A3979u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3979: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F016F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3983: ;
    POP32(esp, esi);
    MEM8(0x8F016F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A39B0
 * Original: 0x006A39B0 - 0x006A3A1C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A39B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A39B0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A39ED; /* jne: not equal / not zero */

loc_006A39BE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A39ED: ;
    PUSH32(esp, 0x8ACDC0);
    esi = ecx;
    PUSH32(esp, 0x006A39F9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A39F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3A13; /* je: equal / zero */

loc_006A39FD: ;
    PUSH32(esp, 0x8ACDB8);
    ecx = esi;
    PUSH32(esp, 0x006A3A09u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3A09: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0177) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3A13: ;
    POP32(esp, esi);
    MEM8(0x8F0177) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3A40
 * Original: 0x006A3A40 - 0x006A3AAC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3A40: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A3A7D; /* jne: not equal / not zero */

loc_006A3A4E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A3A7D: ;
    PUSH32(esp, 0x8ACDD0);
    esi = ecx;
    PUSH32(esp, 0x006A3A89u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3A89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3AA3; /* je: equal / zero */

loc_006A3A8D: ;
    PUSH32(esp, 0x8ACDC8);
    ecx = esi;
    PUSH32(esp, 0x006A3A99u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3A99: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F017C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3AA3: ;
    POP32(esp, esi);
    MEM8(0x8F017C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3AD0
 * Original: 0x006A3AD0 - 0x006A3B3C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3AD0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A3B0D; /* jne: not equal / not zero */

loc_006A3ADE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A3B0D: ;
    PUSH32(esp, 0x8ACDE0);
    esi = ecx;
    PUSH32(esp, 0x006A3B19u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3B19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3B33; /* je: equal / zero */

loc_006A3B1D: ;
    PUSH32(esp, 0x8ACDD8);
    ecx = esi;
    PUSH32(esp, 0x006A3B29u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3B29: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0174) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3B33: ;
    POP32(esp, esi);
    MEM8(0x8F0174) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3B60
 * Original: 0x006A3B60 - 0x006A3BCC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3B60: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A3B9D; /* jne: not equal / not zero */

loc_006A3B6E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A3B9D: ;
    PUSH32(esp, 0x8ACDF0);
    esi = ecx;
    PUSH32(esp, 0x006A3BA9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3BA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3BC3; /* je: equal / zero */

loc_006A3BAD: ;
    PUSH32(esp, 0x8ACDE8);
    ecx = esi;
    PUSH32(esp, 0x006A3BB9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3BB9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0178) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3BC3: ;
    POP32(esp, esi);
    MEM8(0x8F0178) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3BF0
 * Original: 0x006A3BF0 - 0x006A3C5C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3BF0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A3C2D; /* jne: not equal / not zero */

loc_006A3BFE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A3C2D: ;
    PUSH32(esp, 0x8ACE00);
    esi = ecx;
    PUSH32(esp, 0x006A3C39u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3C39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3C53; /* je: equal / zero */

loc_006A3C3D: ;
    PUSH32(esp, 0x8ACDF8);
    ecx = esi;
    PUSH32(esp, 0x006A3C49u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3C49: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F016E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3C53: ;
    POP32(esp, esi);
    MEM8(0x8F016E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3C80
 * Original: 0x006A3C80 - 0x006A3CEC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3C80: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A3CBD; /* jne: not equal / not zero */

loc_006A3C8E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A3CBD: ;
    PUSH32(esp, 0x8ACE10);
    esi = ecx;
    PUSH32(esp, 0x006A3CC9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3CC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3CE3; /* je: equal / zero */

loc_006A3CCD: ;
    PUSH32(esp, 0x8ACE08);
    ecx = esi;
    PUSH32(esp, 0x006A3CD9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3CD9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0179) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3CE3: ;
    POP32(esp, esi);
    MEM8(0x8F0179) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3D10
 * Original: 0x006A3D10 - 0x006A3D7C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3D10: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A3D4D; /* jne: not equal / not zero */

loc_006A3D1E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A3D4D: ;
    PUSH32(esp, 0x8ACE20);
    esi = ecx;
    PUSH32(esp, 0x006A3D59u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3D59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3D73; /* je: equal / zero */

loc_006A3D5D: ;
    PUSH32(esp, 0x8ACE18);
    ecx = esi;
    PUSH32(esp, 0x006A3D69u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3D69: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0175) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3D73: ;
    POP32(esp, esi);
    MEM8(0x8F0175) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3DA0
 * Original: 0x006A3DA0 - 0x006A3E0C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3DA0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A3DDD; /* jne: not equal / not zero */

loc_006A3DAE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A3DDD: ;
    PUSH32(esp, 0x8ACE30);
    esi = ecx;
    PUSH32(esp, 0x006A3DE9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3DE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3E03; /* je: equal / zero */

loc_006A3DED: ;
    PUSH32(esp, 0x8ACE28);
    ecx = esi;
    PUSH32(esp, 0x006A3DF9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3DF9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F017B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3E03: ;
    POP32(esp, esi);
    MEM8(0x8F017B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3E30
 * Original: 0x006A3E30 - 0x006A3E9C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3E30: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A3E6D; /* jne: not equal / not zero */

loc_006A3E3E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A3E6D: ;
    PUSH32(esp, 0x8ACE40);
    esi = ecx;
    PUSH32(esp, 0x006A3E79u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3E79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3E93; /* je: equal / zero */

loc_006A3E7D: ;
    PUSH32(esp, 0x8ACE38);
    ecx = esi;
    PUSH32(esp, 0x006A3E89u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3E89: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0173) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3E93: ;
    POP32(esp, esi);
    MEM8(0x8F0173) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3EC0
 * Original: 0x006A3EC0 - 0x006A3F2C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3EC0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A3EFD; /* jne: not equal / not zero */

loc_006A3ECE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A3EFD: ;
    PUSH32(esp, 0x8ACE50);
    esi = ecx;
    PUSH32(esp, 0x006A3F09u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A3F09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3F23; /* je: equal / zero */

loc_006A3F0D: ;
    PUSH32(esp, 0x8ACE48);
    ecx = esi;
    PUSH32(esp, 0x006A3F19u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A3F19: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0176) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3F23: ;
    POP32(esp, esi);
    MEM8(0x8F0176) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3F50
 * Original: 0x006A3F50 - 0x006A3FBC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3F50: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A3F8D; /* jne: not equal / not zero */

loc_006A3F5E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A3F8D: ;
    PUSH32(esp, 0x8ACEC8);
    esi = ecx;
    PUSH32(esp, 0x006A3F99u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A3F99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A3FB3; /* je: equal / zero */

loc_006A3F9D: ;
    PUSH32(esp, 0x8ACEC0);
    ecx = esi;
    PUSH32(esp, 0x006A3FA9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A3FA9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0186) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A3FB3: ;
    POP32(esp, esi);
    MEM8(0x8F0186) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A3FE0
 * Original: 0x006A3FE0 - 0x006A404C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A3FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A3FE0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A401D; /* jne: not equal / not zero */

loc_006A3FEE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A401D: ;
    PUSH32(esp, 0x8ACED8);
    esi = ecx;
    PUSH32(esp, 0x006A4029u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A4029: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4043; /* je: equal / zero */

loc_006A402D: ;
    PUSH32(esp, 0x8ACED0);
    ecx = esi;
    PUSH32(esp, 0x006A4039u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A4039: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0185) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4043: ;
    POP32(esp, esi);
    MEM8(0x8F0185) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4070
 * Original: 0x006A4070 - 0x006A40DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4070: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A40AD; /* jne: not equal / not zero */

loc_006A407E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A40AD: ;
    PUSH32(esp, 0x8ACEE8);
    esi = ecx;
    PUSH32(esp, 0x006A40B9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A40B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A40D3; /* je: equal / zero */

loc_006A40BD: ;
    PUSH32(esp, 0x8ACEE0);
    ecx = esi;
    PUSH32(esp, 0x006A40C9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A40C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0182) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A40D3: ;
    POP32(esp, esi);
    MEM8(0x8F0182) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4100
 * Original: 0x006A4100 - 0x006A416C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4100: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A413D; /* jne: not equal / not zero */

loc_006A410E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A413D: ;
    PUSH32(esp, 0x8ACEF8);
    esi = ecx;
    PUSH32(esp, 0x006A4149u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A4149: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4163; /* je: equal / zero */

loc_006A414D: ;
    PUSH32(esp, 0x8ACEF0);
    ecx = esi;
    PUSH32(esp, 0x006A4159u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A4159: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F018E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4163: ;
    POP32(esp, esi);
    MEM8(0x8F018E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4190
 * Original: 0x006A4190 - 0x006A41FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4190: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A41CD; /* jne: not equal / not zero */

loc_006A419E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A41CD: ;
    PUSH32(esp, 0x8ACF08);
    esi = ecx;
    PUSH32(esp, 0x006A41D9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A41D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A41F3; /* je: equal / zero */

loc_006A41DD: ;
    PUSH32(esp, 0x8ACF00);
    ecx = esi;
    PUSH32(esp, 0x006A41E9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A41E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0191) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A41F3: ;
    POP32(esp, esi);
    MEM8(0x8F0191) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4220
 * Original: 0x006A4220 - 0x006A428C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4220: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A425D; /* jne: not equal / not zero */

loc_006A422E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A425D: ;
    PUSH32(esp, 0x8ACF18);
    esi = ecx;
    PUSH32(esp, 0x006A4269u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A4269: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4283; /* je: equal / zero */

loc_006A426D: ;
    PUSH32(esp, 0x8ACF10);
    ecx = esi;
    PUSH32(esp, 0x006A4279u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A4279: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0183) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4283: ;
    POP32(esp, esi);
    MEM8(0x8F0183) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A42B0
 * Original: 0x006A42B0 - 0x006A431C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A42B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A42B0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A42ED; /* jne: not equal / not zero */

loc_006A42BE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A42ED: ;
    PUSH32(esp, 0x8ACF28);
    esi = ecx;
    PUSH32(esp, 0x006A42F9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A42F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4313; /* je: equal / zero */

loc_006A42FD: ;
    PUSH32(esp, 0x8ACF20);
    ecx = esi;
    PUSH32(esp, 0x006A4309u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A4309: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F018B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4313: ;
    POP32(esp, esi);
    MEM8(0x8F018B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4340
 * Original: 0x006A4340 - 0x006A43AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4340: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A437D; /* jne: not equal / not zero */

loc_006A434E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A437D: ;
    PUSH32(esp, 0x8ACF38);
    esi = ecx;
    PUSH32(esp, 0x006A4389u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A4389: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A43A3; /* je: equal / zero */

loc_006A438D: ;
    PUSH32(esp, 0x8ACF30);
    ecx = esi;
    PUSH32(esp, 0x006A4399u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A4399: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0190) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A43A3: ;
    POP32(esp, esi);
    MEM8(0x8F0190) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A43D0
 * Original: 0x006A43D0 - 0x006A443C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A43D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A43D0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A440D; /* jne: not equal / not zero */

loc_006A43DE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A440D: ;
    PUSH32(esp, 0x8ACF48);
    esi = ecx;
    PUSH32(esp, 0x006A4419u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A4419: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4433; /* je: equal / zero */

loc_006A441D: ;
    PUSH32(esp, 0x8ACF40);
    ecx = esi;
    PUSH32(esp, 0x006A4429u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A4429: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0188) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4433: ;
    POP32(esp, esi);
    MEM8(0x8F0188) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4460
 * Original: 0x006A4460 - 0x006A44CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4460: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A449D; /* jne: not equal / not zero */

loc_006A446E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A449D: ;
    PUSH32(esp, 0x8ACF58);
    esi = ecx;
    PUSH32(esp, 0x006A44A9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A44A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A44C3; /* je: equal / zero */

loc_006A44AD: ;
    PUSH32(esp, 0x8ACF50);
    ecx = esi;
    PUSH32(esp, 0x006A44B9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A44B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F018C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A44C3: ;
    POP32(esp, esi);
    MEM8(0x8F018C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A44F0
 * Original: 0x006A44F0 - 0x006A455C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A44F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A44F0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A452D; /* jne: not equal / not zero */

loc_006A44FE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A452D: ;
    PUSH32(esp, 0x8ACF68);
    esi = ecx;
    PUSH32(esp, 0x006A4539u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A4539: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4553; /* je: equal / zero */

loc_006A453D: ;
    PUSH32(esp, 0x8ACF60);
    ecx = esi;
    PUSH32(esp, 0x006A4549u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A4549: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0184) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4553: ;
    POP32(esp, esi);
    MEM8(0x8F0184) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4580
 * Original: 0x006A4580 - 0x006A45EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4580: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A45BD; /* jne: not equal / not zero */

loc_006A458E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A45BD: ;
    PUSH32(esp, 0x8ACF78);
    esi = ecx;
    PUSH32(esp, 0x006A45C9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A45C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A45E3; /* je: equal / zero */

loc_006A45CD: ;
    PUSH32(esp, 0x8ACF70);
    ecx = esi;
    PUSH32(esp, 0x006A45D9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A45D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F018D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A45E3: ;
    POP32(esp, esi);
    MEM8(0x8F018D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4610
 * Original: 0x006A4610 - 0x006A467C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4610: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A464D; /* jne: not equal / not zero */

loc_006A461E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A464D: ;
    PUSH32(esp, 0x8ACF88);
    esi = ecx;
    PUSH32(esp, 0x006A4659u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A4659: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4673; /* je: equal / zero */

loc_006A465D: ;
    PUSH32(esp, 0x8ACF80);
    ecx = esi;
    PUSH32(esp, 0x006A4669u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A4669: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0189) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4673: ;
    POP32(esp, esi);
    MEM8(0x8F0189) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A46A0
 * Original: 0x006A46A0 - 0x006A470C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A46A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A46A0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A46DD; /* jne: not equal / not zero */

loc_006A46AE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A46DD: ;
    PUSH32(esp, 0x8ACF98);
    esi = ecx;
    PUSH32(esp, 0x006A46E9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A46E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4703; /* je: equal / zero */

loc_006A46ED: ;
    PUSH32(esp, 0x8ACF90);
    ecx = esi;
    PUSH32(esp, 0x006A46F9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A46F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F018F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4703: ;
    POP32(esp, esi);
    MEM8(0x8F018F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4730
 * Original: 0x006A4730 - 0x006A479C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4730: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A476D; /* jne: not equal / not zero */

loc_006A473E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A476D: ;
    PUSH32(esp, 0x8ACFA8);
    esi = ecx;
    PUSH32(esp, 0x006A4779u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A4779: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4793; /* je: equal / zero */

loc_006A477D: ;
    PUSH32(esp, 0x8ACFA0);
    ecx = esi;
    PUSH32(esp, 0x006A4789u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A4789: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0187) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4793: ;
    POP32(esp, esi);
    MEM8(0x8F0187) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A47C0
 * Original: 0x006A47C0 - 0x006A482C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A47C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A47C0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A47FD; /* jne: not equal / not zero */

loc_006A47CE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A47FD: ;
    PUSH32(esp, 0x8ACFB8);
    esi = ecx;
    PUSH32(esp, 0x006A4809u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A4809: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4823; /* je: equal / zero */

loc_006A480D: ;
    PUSH32(esp, 0x8ACFB0);
    ecx = esi;
    PUSH32(esp, 0x006A4819u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A4819: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F018A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4823: ;
    POP32(esp, esi);
    MEM8(0x8F018A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4850
 * Original: 0x006A4850 - 0x006A48BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4850: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A488D; /* jne: not equal / not zero */

loc_006A485E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A488D: ;
    PUSH32(esp, 0x8ACFC8);
    esi = ecx;
    PUSH32(esp, 0x006A4899u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A4899: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A48B3; /* je: equal / zero */

loc_006A489D: ;
    PUSH32(esp, 0x8ACFC0);
    ecx = esi;
    PUSH32(esp, 0x006A48A9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A48A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0181) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A48B3: ;
    POP32(esp, esi);
    MEM8(0x8F0181) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A48E0
 * Original: 0x006A48E0 - 0x006A494C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A48E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A48E0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A491D; /* jne: not equal / not zero */

loc_006A48EE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A491D: ;
    PUSH32(esp, 0x8AD044);
    esi = ecx;
    PUSH32(esp, 0x006A4929u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A4929: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4943; /* je: equal / zero */

loc_006A492D: ;
    PUSH32(esp, 0x8AD03C);
    ecx = esi;
    PUSH32(esp, 0x006A4939u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A4939: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01A0) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4943: ;
    POP32(esp, esi);
    MEM8(0x8F01A0) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4970
 * Original: 0x006A4970 - 0x006A49DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4970: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A49AD; /* jne: not equal / not zero */

loc_006A497E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A49AD: ;
    PUSH32(esp, 0x8AD054);
    esi = ecx;
    PUSH32(esp, 0x006A49B9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A49B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A49D3; /* je: equal / zero */

loc_006A49BD: ;
    PUSH32(esp, 0x8AD04C);
    ecx = esi;
    PUSH32(esp, 0x006A49C9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A49C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0197) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A49D3: ;
    POP32(esp, esi);
    MEM8(0x8F0197) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4A00
 * Original: 0x006A4A00 - 0x006A4A6C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4A00: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A4A3D; /* jne: not equal / not zero */

loc_006A4A0E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A4A3D: ;
    PUSH32(esp, 0x8AD064);
    esi = ecx;
    PUSH32(esp, 0x006A4A49u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A4A49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4A63; /* je: equal / zero */

loc_006A4A4D: ;
    PUSH32(esp, 0x8AD05C);
    ecx = esi;
    PUSH32(esp, 0x006A4A59u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A4A59: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0196) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4A63: ;
    POP32(esp, esi);
    MEM8(0x8F0196) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4A90
 * Original: 0x006A4A90 - 0x006A4AFC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4A90: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A4ACD; /* jne: not equal / not zero */

loc_006A4A9E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A4ACD: ;
    PUSH32(esp, 0x8AD074);
    esi = ecx;
    PUSH32(esp, 0x006A4AD9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A4AD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4AF3; /* je: equal / zero */

loc_006A4ADD: ;
    PUSH32(esp, 0x8AD06C);
    ecx = esi;
    PUSH32(esp, 0x006A4AE9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A4AE9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01AF) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4AF3: ;
    POP32(esp, esi);
    MEM8(0x8F01AF) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4B20
 * Original: 0x006A4B20 - 0x006A4B8C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4B20: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A4B5D; /* jne: not equal / not zero */

loc_006A4B2E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A4B5D: ;
    PUSH32(esp, 0x8AD084);
    esi = ecx;
    PUSH32(esp, 0x006A4B69u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A4B69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4B83; /* je: equal / zero */

loc_006A4B6D: ;
    PUSH32(esp, 0x8AD07C);
    ecx = esi;
    PUSH32(esp, 0x006A4B79u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A4B79: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01B4) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4B83: ;
    POP32(esp, esi);
    MEM8(0x8F01B4) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4BB0
 * Original: 0x006A4BB0 - 0x006A4C1C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4BB0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A4BED; /* jne: not equal / not zero */

loc_006A4BBE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A4BED: ;
    PUSH32(esp, 0x8AD094);
    esi = ecx;
    PUSH32(esp, 0x006A4BF9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A4BF9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4C13; /* je: equal / zero */

loc_006A4BFD: ;
    PUSH32(esp, 0x8AD08C);
    ecx = esi;
    PUSH32(esp, 0x006A4C09u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A4C09: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0199) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4C13: ;
    POP32(esp, esi);
    MEM8(0x8F0199) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4C40
 * Original: 0x006A4C40 - 0x006A4CAC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4C40: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A4C7D; /* jne: not equal / not zero */

loc_006A4C4E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A4C7D: ;
    PUSH32(esp, 0x8AD0A4);
    esi = ecx;
    PUSH32(esp, 0x006A4C89u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A4C89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4CA3; /* je: equal / zero */

loc_006A4C8D: ;
    PUSH32(esp, 0x8AD09C);
    ecx = esi;
    PUSH32(esp, 0x006A4C99u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A4C99: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01A9) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4CA3: ;
    POP32(esp, esi);
    MEM8(0x8F01A9) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4CD0
 * Original: 0x006A4CD0 - 0x006A4D3C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4CD0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A4D0D; /* jne: not equal / not zero */

loc_006A4CDE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A4D0D: ;
    PUSH32(esp, 0x8AD0B4);
    esi = ecx;
    PUSH32(esp, 0x006A4D19u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A4D19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4D33; /* je: equal / zero */

loc_006A4D1D: ;
    PUSH32(esp, 0x8AD0AC);
    ecx = esi;
    PUSH32(esp, 0x006A4D29u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A4D29: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01B2) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4D33: ;
    POP32(esp, esi);
    MEM8(0x8F01B2) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4D60
 * Original: 0x006A4D60 - 0x006A4DCC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4D60: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A4D9D; /* jne: not equal / not zero */

loc_006A4D6E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A4D9D: ;
    PUSH32(esp, 0x8AD0C4);
    esi = ecx;
    PUSH32(esp, 0x006A4DA9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A4DA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4DC3; /* je: equal / zero */

loc_006A4DAD: ;
    PUSH32(esp, 0x8AD0BC);
    ecx = esi;
    PUSH32(esp, 0x006A4DB9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A4DB9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01A3) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4DC3: ;
    POP32(esp, esi);
    MEM8(0x8F01A3) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4DF0
 * Original: 0x006A4DF0 - 0x006A4E5C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4DF0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A4E2D; /* jne: not equal / not zero */

loc_006A4DFE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A4E2D: ;
    PUSH32(esp, 0x8AD0D4);
    esi = ecx;
    PUSH32(esp, 0x006A4E39u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A4E39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4E53; /* je: equal / zero */

loc_006A4E3D: ;
    PUSH32(esp, 0x8AD0CC);
    ecx = esi;
    PUSH32(esp, 0x006A4E49u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A4E49: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01AB) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4E53: ;
    POP32(esp, esi);
    MEM8(0x8F01AB) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4E80
 * Original: 0x006A4E80 - 0x006A4EEC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4E80: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A4EBD; /* jne: not equal / not zero */

loc_006A4E8E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A4EBD: ;
    PUSH32(esp, 0x8AD0E4);
    esi = ecx;
    PUSH32(esp, 0x006A4EC9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A4EC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4EE3; /* je: equal / zero */

loc_006A4ECD: ;
    PUSH32(esp, 0x8AD0DC);
    ecx = esi;
    PUSH32(esp, 0x006A4ED9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A4ED9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F019A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4EE3: ;
    POP32(esp, esi);
    MEM8(0x8F019A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4F10
 * Original: 0x006A4F10 - 0x006A4F7C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4F10: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A4F4D; /* jne: not equal / not zero */

loc_006A4F1E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A4F4D: ;
    PUSH32(esp, 0x8AD0F4);
    esi = ecx;
    PUSH32(esp, 0x006A4F59u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A4F59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A4F73; /* je: equal / zero */

loc_006A4F5D: ;
    PUSH32(esp, 0x8AD0EC);
    ecx = esi;
    PUSH32(esp, 0x006A4F69u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A4F69: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01AC) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A4F73: ;
    POP32(esp, esi);
    MEM8(0x8F01AC) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A4FA0
 * Original: 0x006A4FA0 - 0x006A500C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A4FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A4FA0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A4FDD; /* jne: not equal / not zero */

loc_006A4FAE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A4FDD: ;
    PUSH32(esp, 0x8AD104);
    esi = ecx;
    PUSH32(esp, 0x006A4FE9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A4FE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5003; /* je: equal / zero */

loc_006A4FED: ;
    PUSH32(esp, 0x8AD0FC);
    ecx = esi;
    PUSH32(esp, 0x006A4FF9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A4FF9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01A5) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5003: ;
    POP32(esp, esi);
    MEM8(0x8F01A5) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5030
 * Original: 0x006A5030 - 0x006A509C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5030: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A506D; /* jne: not equal / not zero */

loc_006A503E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A506D: ;
    PUSH32(esp, 0x8AD114);
    esi = ecx;
    PUSH32(esp, 0x006A5079u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A5079: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5093; /* je: equal / zero */

loc_006A507D: ;
    PUSH32(esp, 0x8AD10C);
    ecx = esi;
    PUSH32(esp, 0x006A5089u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A5089: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01B1) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5093: ;
    POP32(esp, esi);
    MEM8(0x8F01B1) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A50C0
 * Original: 0x006A50C0 - 0x006A512C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A50C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A50C0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A50FD; /* jne: not equal / not zero */

loc_006A50CE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A50FD: ;
    PUSH32(esp, 0x8AD124);
    esi = ecx;
    PUSH32(esp, 0x006A5109u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A5109: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5123; /* je: equal / zero */

loc_006A510D: ;
    PUSH32(esp, 0x8AD11C);
    ecx = esi;
    PUSH32(esp, 0x006A5119u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A5119: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01A1) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5123: ;
    POP32(esp, esi);
    MEM8(0x8F01A1) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5150
 * Original: 0x006A5150 - 0x006A51BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5150: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A518D; /* jne: not equal / not zero */

loc_006A515E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A518D: ;
    PUSH32(esp, 0x8AD134);
    esi = ecx;
    PUSH32(esp, 0x006A5199u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A5199: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A51B3; /* je: equal / zero */

loc_006A519D: ;
    PUSH32(esp, 0x8AD12C);
    ecx = esi;
    PUSH32(esp, 0x006A51A9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A51A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01A8) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A51B3: ;
    POP32(esp, esi);
    MEM8(0x8F01A8) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A51E0
 * Original: 0x006A51E0 - 0x006A524C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A51E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A51E0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A521D; /* jne: not equal / not zero */

loc_006A51EE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A521D: ;
    PUSH32(esp, 0x8AD144);
    esi = ecx;
    PUSH32(esp, 0x006A5229u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A5229: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5243; /* je: equal / zero */

loc_006A522D: ;
    PUSH32(esp, 0x8AD13C);
    ecx = esi;
    PUSH32(esp, 0x006A5239u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A5239: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F019B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5243: ;
    POP32(esp, esi);
    MEM8(0x8F019B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5270
 * Original: 0x006A5270 - 0x006A52DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5270: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A52AD; /* jne: not equal / not zero */

loc_006A527E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A52AD: ;
    PUSH32(esp, 0x8AD154);
    esi = ecx;
    PUSH32(esp, 0x006A52B9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A52B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A52D3; /* je: equal / zero */

loc_006A52BD: ;
    PUSH32(esp, 0x8AD14C);
    ecx = esi;
    PUSH32(esp, 0x006A52C9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A52C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F019D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A52D3: ;
    POP32(esp, esi);
    MEM8(0x8F019D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5300
 * Original: 0x006A5300 - 0x006A536C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5300: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A533D; /* jne: not equal / not zero */

loc_006A530E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A533D: ;
    PUSH32(esp, 0x8AD164);
    esi = ecx;
    PUSH32(esp, 0x006A5349u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A5349: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5363; /* je: equal / zero */

loc_006A534D: ;
    PUSH32(esp, 0x8AD15C);
    ecx = esi;
    PUSH32(esp, 0x006A5359u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A5359: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01AE) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5363: ;
    POP32(esp, esi);
    MEM8(0x8F01AE) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5390
 * Original: 0x006A5390 - 0x006A53FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5390: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A53CD; /* jne: not equal / not zero */

loc_006A539E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A53CD: ;
    PUSH32(esp, 0x8AD174);
    esi = ecx;
    PUSH32(esp, 0x006A53D9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A53D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A53F3; /* je: equal / zero */

loc_006A53DD: ;
    PUSH32(esp, 0x8AD16C);
    ecx = esi;
    PUSH32(esp, 0x006A53E9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A53E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01B0) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A53F3: ;
    POP32(esp, esi);
    MEM8(0x8F01B0) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5420
 * Original: 0x006A5420 - 0x006A548C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5420: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A545D; /* jne: not equal / not zero */

loc_006A542E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A545D: ;
    PUSH32(esp, 0x8AD184);
    esi = ecx;
    PUSH32(esp, 0x006A5469u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A5469: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5483; /* je: equal / zero */

loc_006A546D: ;
    PUSH32(esp, 0x8AD17C);
    ecx = esi;
    PUSH32(esp, 0x006A5479u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A5479: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01A7) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5483: ;
    POP32(esp, esi);
    MEM8(0x8F01A7) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A54B0
 * Original: 0x006A54B0 - 0x006A551C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A54B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A54B0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A54ED; /* jne: not equal / not zero */

loc_006A54BE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A54ED: ;
    PUSH32(esp, 0x8AD194);
    esi = ecx;
    PUSH32(esp, 0x006A54F9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A54F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5513; /* je: equal / zero */

loc_006A54FD: ;
    PUSH32(esp, 0x8AD18C);
    ecx = esi;
    PUSH32(esp, 0x006A5509u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A5509: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01AD) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5513: ;
    POP32(esp, esi);
    MEM8(0x8F01AD) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5540
 * Original: 0x006A5540 - 0x006A55AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5540: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A557D; /* jne: not equal / not zero */

loc_006A554E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A557D: ;
    PUSH32(esp, 0x8AD1A4);
    esi = ecx;
    PUSH32(esp, 0x006A5589u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A5589: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A55A3; /* je: equal / zero */

loc_006A558D: ;
    PUSH32(esp, 0x8AD19C);
    ecx = esi;
    PUSH32(esp, 0x006A5599u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A5599: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F019C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A55A3: ;
    POP32(esp, esi);
    MEM8(0x8F019C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A55D0
 * Original: 0x006A55D0 - 0x006A563C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A55D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A55D0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A560D; /* jne: not equal / not zero */

loc_006A55DE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A560D: ;
    PUSH32(esp, 0x8AD1B4);
    esi = ecx;
    PUSH32(esp, 0x006A5619u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A5619: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5633; /* je: equal / zero */

loc_006A561D: ;
    PUSH32(esp, 0x8AD1AC);
    ecx = esi;
    PUSH32(esp, 0x006A5629u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A5629: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0198) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5633: ;
    POP32(esp, esi);
    MEM8(0x8F0198) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5660
 * Original: 0x006A5660 - 0x006A56CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5660: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A569D; /* jne: not equal / not zero */

loc_006A566E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A569D: ;
    PUSH32(esp, 0x8AD1C4);
    esi = ecx;
    PUSH32(esp, 0x006A56A9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A56A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A56C3; /* je: equal / zero */

loc_006A56AD: ;
    PUSH32(esp, 0x8AD1BC);
    ecx = esi;
    PUSH32(esp, 0x006A56B9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A56B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F019E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A56C3: ;
    POP32(esp, esi);
    MEM8(0x8F019E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A56F0
 * Original: 0x006A56F0 - 0x006A575C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A56F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A56F0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A572D; /* jne: not equal / not zero */

loc_006A56FE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A572D: ;
    PUSH32(esp, 0x8AD1D4);
    esi = ecx;
    PUSH32(esp, 0x006A5739u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A5739: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5753; /* je: equal / zero */

loc_006A573D: ;
    PUSH32(esp, 0x8AD1CC);
    ecx = esi;
    PUSH32(esp, 0x006A5749u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A5749: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01A2) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5753: ;
    POP32(esp, esi);
    MEM8(0x8F01A2) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5780
 * Original: 0x006A5780 - 0x006A57EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5780: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A57BD; /* jne: not equal / not zero */

loc_006A578E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A57BD: ;
    PUSH32(esp, 0x8AD1E4);
    esi = ecx;
    PUSH32(esp, 0x006A57C9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A57C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A57E3; /* je: equal / zero */

loc_006A57CD: ;
    PUSH32(esp, 0x8AD1DC);
    ecx = esi;
    PUSH32(esp, 0x006A57D9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A57D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F019F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A57E3: ;
    POP32(esp, esi);
    MEM8(0x8F019F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5810
 * Original: 0x006A5810 - 0x006A587C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5810: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A584D; /* jne: not equal / not zero */

loc_006A581E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A584D: ;
    PUSH32(esp, 0x8AD1F4);
    esi = ecx;
    PUSH32(esp, 0x006A5859u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A5859: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5873; /* je: equal / zero */

loc_006A585D: ;
    PUSH32(esp, 0x8AD1EC);
    ecx = esi;
    PUSH32(esp, 0x006A5869u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A5869: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01A6) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5873: ;
    POP32(esp, esi);
    MEM8(0x8F01A6) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A58A0
 * Original: 0x006A58A0 - 0x006A590C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A58A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A58A0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A58DD; /* jne: not equal / not zero */

loc_006A58AE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A58DD: ;
    PUSH32(esp, 0x8AD204);
    esi = ecx;
    PUSH32(esp, 0x006A58E9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A58E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5903; /* je: equal / zero */

loc_006A58ED: ;
    PUSH32(esp, 0x8AD1FC);
    ecx = esi;
    PUSH32(esp, 0x006A58F9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A58F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01AA) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5903: ;
    POP32(esp, esi);
    MEM8(0x8F01AA) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5930
 * Original: 0x006A5930 - 0x006A599C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5930: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A596D; /* jne: not equal / not zero */

loc_006A593E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A596D: ;
    PUSH32(esp, 0x8AD214);
    esi = ecx;
    PUSH32(esp, 0x006A5979u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A5979: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5993; /* je: equal / zero */

loc_006A597D: ;
    PUSH32(esp, 0x8AD20C);
    ecx = esi;
    PUSH32(esp, 0x006A5989u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A5989: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0195) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5993: ;
    POP32(esp, esi);
    MEM8(0x8F0195) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A59C0
 * Original: 0x006A59C0 - 0x006A5A2C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A59C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A59C0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A59FD; /* jne: not equal / not zero */

loc_006A59CE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A59FD: ;
    PUSH32(esp, 0x8AD224);
    esi = ecx;
    PUSH32(esp, 0x006A5A09u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A5A09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5A23; /* je: equal / zero */

loc_006A5A0D: ;
    PUSH32(esp, 0x8AD21C);
    ecx = esi;
    PUSH32(esp, 0x006A5A19u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A5A19: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01B3) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5A23: ;
    POP32(esp, esi);
    MEM8(0x8F01B3) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5A50
 * Original: 0x006A5A50 - 0x006A5ABC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5A50: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A5A8D; /* jne: not equal / not zero */

loc_006A5A5E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A5A8D: ;
    PUSH32(esp, 0x8AD234);
    esi = ecx;
    PUSH32(esp, 0x006A5A99u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A5A99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5AB3; /* je: equal / zero */

loc_006A5A9D: ;
    PUSH32(esp, 0x8AD22C);
    ecx = esi;
    PUSH32(esp, 0x006A5AA9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A5AA9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01A4) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5AB3: ;
    POP32(esp, esi);
    MEM8(0x8F01A4) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5AE0
 * Original: 0x006A5AE0 - 0x006A5B4C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5AE0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A5B1D; /* jne: not equal / not zero */

loc_006A5AEE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A5B1D: ;
    PUSH32(esp, 0x8AD35C);
    esi = ecx;
    PUSH32(esp, 0x006A5B29u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A5B29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5B43; /* je: equal / zero */

loc_006A5B2D: ;
    PUSH32(esp, 0x8AD354);
    ecx = esi;
    PUSH32(esp, 0x006A5B39u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A5B39: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01C4) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5B43: ;
    POP32(esp, esi);
    MEM8(0x8F01C4) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5B70
 * Original: 0x006A5B70 - 0x006A5BDC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5B70: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A5BAD; /* jne: not equal / not zero */

loc_006A5B7E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A5BAD: ;
    PUSH32(esp, 0x8AD36C);
    esi = ecx;
    PUSH32(esp, 0x006A5BB9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A5BB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5BD3; /* je: equal / zero */

loc_006A5BBD: ;
    PUSH32(esp, 0x8AD364);
    ecx = esi;
    PUSH32(esp, 0x006A5BC9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A5BC9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01C3) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5BD3: ;
    POP32(esp, esi);
    MEM8(0x8F01C3) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5C00
 * Original: 0x006A5C00 - 0x006A5C6C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5C00: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A5C3D; /* jne: not equal / not zero */

loc_006A5C0E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A5C3D: ;
    PUSH32(esp, 0x8AD37C);
    esi = ecx;
    PUSH32(esp, 0x006A5C49u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A5C49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5C63; /* je: equal / zero */

loc_006A5C4D: ;
    PUSH32(esp, 0x8AD374);
    ecx = esi;
    PUSH32(esp, 0x006A5C59u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A5C59: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01C2) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5C63: ;
    POP32(esp, esi);
    MEM8(0x8F01C2) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5C90
 * Original: 0x006A5C90 - 0x006A5CFC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5C90: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A5CCD; /* jne: not equal / not zero */

loc_006A5C9E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A5CCD: ;
    PUSH32(esp, 0x8AD38C);
    esi = ecx;
    PUSH32(esp, 0x006A5CD9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A5CD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5CF3; /* je: equal / zero */

loc_006A5CDD: ;
    PUSH32(esp, 0x8AD384);
    ecx = esi;
    PUSH32(esp, 0x006A5CE9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A5CE9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F01C5) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A5CF3: ;
    POP32(esp, esi);
    MEM8(0x8F01C5) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5D20
 * Original: 0x006A5D20 - 0x006A5D64 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5D20: ;
    ecx = MEM32(0x8E8E34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A5D35; /* jne: not equal / not zero */

loc_006A5D2A: ;
    PUSH32(esp, 0x006A5D2Fu); RECOMP_ABI_CALL(0x00024AC9u, sub_00024AC9); /* call 0x00024AC9 */

loc_006A5D2F: ;
    ecx = MEM32(0x8E8E34);

loc_006A5D35: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD5DC);
    esi = ecx;
    PUSH32(esp, 0x006A5D42u); RECOMP_ABI_CALL(0x000122EDu, sub_000122ED); /* call 0x000122ED */

loc_006A5D42: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5D5B; /* je: equal / zero */

loc_006A5D46: ;
    PUSH32(esp, 0x8AD5D4);
    ecx = esi;
    PUSH32(esp, 0x006A5D52u); RECOMP_ABI_CALL(0x0001BC0Du, sub_0001BC0D); /* call 0x0001BC0D */

loc_006A5D52: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01DB) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A5D5B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01DB) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5D80
 * Original: 0x006A5D80 - 0x006A5DC4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5D80: ;
    ecx = MEM32(0x8E8E34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A5D95; /* jne: not equal / not zero */

loc_006A5D8A: ;
    PUSH32(esp, 0x006A5D8Fu); RECOMP_ABI_CALL(0x00024AC9u, sub_00024AC9); /* call 0x00024AC9 */

loc_006A5D8F: ;
    ecx = MEM32(0x8E8E34);

loc_006A5D95: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD5EC);
    esi = ecx;
    PUSH32(esp, 0x006A5DA2u); RECOMP_ABI_CALL(0x000122EDu, sub_000122ED); /* call 0x000122ED */

loc_006A5DA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5DBB; /* je: equal / zero */

loc_006A5DA6: ;
    PUSH32(esp, 0x8AD5E4);
    ecx = esi;
    PUSH32(esp, 0x006A5DB2u); RECOMP_ABI_CALL(0x0001BC0Du, sub_0001BC0D); /* call 0x0001BC0D */

loc_006A5DB2: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01DA) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A5DBB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01DA) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5DE0
 * Original: 0x006A5DE0 - 0x006A5E24 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5DE0: ;
    ecx = MEM32(0x8E8E34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A5DF5; /* jne: not equal / not zero */

loc_006A5DEA: ;
    PUSH32(esp, 0x006A5DEFu); RECOMP_ABI_CALL(0x00024AC9u, sub_00024AC9); /* call 0x00024AC9 */

loc_006A5DEF: ;
    ecx = MEM32(0x8E8E34);

loc_006A5DF5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD5FC);
    esi = ecx;
    PUSH32(esp, 0x006A5E02u); RECOMP_ABI_CALL(0x000122EDu, sub_000122ED); /* call 0x000122ED */

loc_006A5E02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5E1B; /* je: equal / zero */

loc_006A5E06: ;
    PUSH32(esp, 0x8AD5F4);
    ecx = esi;
    PUSH32(esp, 0x006A5E12u); RECOMP_ABI_CALL(0x0001BC0Du, sub_0001BC0D); /* call 0x0001BC0D */

loc_006A5E12: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01D8) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A5E1B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01D8) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5E40
 * Original: 0x006A5E40 - 0x006A5E84 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5E40: ;
    ecx = MEM32(0x8E8E34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A5E55; /* jne: not equal / not zero */

loc_006A5E4A: ;
    PUSH32(esp, 0x006A5E4Fu); RECOMP_ABI_CALL(0x00024AC9u, sub_00024AC9); /* call 0x00024AC9 */

loc_006A5E4F: ;
    ecx = MEM32(0x8E8E34);

loc_006A5E55: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD60C);
    esi = ecx;
    PUSH32(esp, 0x006A5E62u); RECOMP_ABI_CALL(0x000122EDu, sub_000122ED); /* call 0x000122ED */

loc_006A5E62: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5E7B; /* je: equal / zero */

loc_006A5E66: ;
    PUSH32(esp, 0x8AD604);
    ecx = esi;
    PUSH32(esp, 0x006A5E72u); RECOMP_ABI_CALL(0x0001BC0Du, sub_0001BC0D); /* call 0x0001BC0D */

loc_006A5E72: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01E1) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A5E7B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01E1) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5EA0
 * Original: 0x006A5EA0 - 0x006A5EE4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5EA0: ;
    ecx = MEM32(0x8E8E34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A5EB5; /* jne: not equal / not zero */

loc_006A5EAA: ;
    PUSH32(esp, 0x006A5EAFu); RECOMP_ABI_CALL(0x00024AC9u, sub_00024AC9); /* call 0x00024AC9 */

loc_006A5EAF: ;
    ecx = MEM32(0x8E8E34);

loc_006A5EB5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD61C);
    esi = ecx;
    PUSH32(esp, 0x006A5EC2u); RECOMP_ABI_CALL(0x000122EDu, sub_000122ED); /* call 0x000122ED */

loc_006A5EC2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5EDB; /* je: equal / zero */

loc_006A5EC6: ;
    PUSH32(esp, 0x8AD614);
    ecx = esi;
    PUSH32(esp, 0x006A5ED2u); RECOMP_ABI_CALL(0x0001BC0Du, sub_0001BC0D); /* call 0x0001BC0D */

loc_006A5ED2: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01E3) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A5EDB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01E3) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5F00
 * Original: 0x006A5F00 - 0x006A5F44 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5F00: ;
    ecx = MEM32(0x8E8E34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A5F15; /* jne: not equal / not zero */

loc_006A5F0A: ;
    PUSH32(esp, 0x006A5F0Fu); RECOMP_ABI_CALL(0x00024AC9u, sub_00024AC9); /* call 0x00024AC9 */

loc_006A5F0F: ;
    ecx = MEM32(0x8E8E34);

loc_006A5F15: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD62C);
    esi = ecx;
    PUSH32(esp, 0x006A5F22u); RECOMP_ABI_CALL(0x000122EDu, sub_000122ED); /* call 0x000122ED */

loc_006A5F22: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5F3B; /* je: equal / zero */

loc_006A5F26: ;
    PUSH32(esp, 0x8AD624);
    ecx = esi;
    PUSH32(esp, 0x006A5F32u); RECOMP_ABI_CALL(0x0001BC0Du, sub_0001BC0D); /* call 0x0001BC0D */

loc_006A5F32: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01DC) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A5F3B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01DC) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5F60
 * Original: 0x006A5F60 - 0x006A5FA4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5F60: ;
    ecx = MEM32(0x8E8E34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A5F75; /* jne: not equal / not zero */

loc_006A5F6A: ;
    PUSH32(esp, 0x006A5F6Fu); RECOMP_ABI_CALL(0x00024AC9u, sub_00024AC9); /* call 0x00024AC9 */

loc_006A5F6F: ;
    ecx = MEM32(0x8E8E34);

loc_006A5F75: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD63C);
    esi = ecx;
    PUSH32(esp, 0x006A5F82u); RECOMP_ABI_CALL(0x000122EDu, sub_000122ED); /* call 0x000122ED */

loc_006A5F82: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5F9B; /* je: equal / zero */

loc_006A5F86: ;
    PUSH32(esp, 0x8AD634);
    ecx = esi;
    PUSH32(esp, 0x006A5F92u); RECOMP_ABI_CALL(0x0001BC0Du, sub_0001BC0D); /* call 0x0001BC0D */

loc_006A5F92: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01DE) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A5F9B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01DE) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A5FC0
 * Original: 0x006A5FC0 - 0x006A6004 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A5FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A5FC0: ;
    ecx = MEM32(0x8E8E34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A5FD5; /* jne: not equal / not zero */

loc_006A5FCA: ;
    PUSH32(esp, 0x006A5FCFu); RECOMP_ABI_CALL(0x00024AC9u, sub_00024AC9); /* call 0x00024AC9 */

loc_006A5FCF: ;
    ecx = MEM32(0x8E8E34);

loc_006A5FD5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD64C);
    esi = ecx;
    PUSH32(esp, 0x006A5FE2u); RECOMP_ABI_CALL(0x000122EDu, sub_000122ED); /* call 0x000122ED */

loc_006A5FE2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A5FFB; /* je: equal / zero */

loc_006A5FE6: ;
    PUSH32(esp, 0x8AD644);
    ecx = esi;
    PUSH32(esp, 0x006A5FF2u); RECOMP_ABI_CALL(0x0001BC0Du, sub_0001BC0D); /* call 0x0001BC0D */

loc_006A5FF2: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01E2) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A5FFB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01E2) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6020
 * Original: 0x006A6020 - 0x006A6064 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6020: ;
    ecx = MEM32(0x8E8E34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A6035; /* jne: not equal / not zero */

loc_006A602A: ;
    PUSH32(esp, 0x006A602Fu); RECOMP_ABI_CALL(0x00024AC9u, sub_00024AC9); /* call 0x00024AC9 */

loc_006A602F: ;
    ecx = MEM32(0x8E8E34);

loc_006A6035: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD65C);
    esi = ecx;
    PUSH32(esp, 0x006A6042u); RECOMP_ABI_CALL(0x000122EDu, sub_000122ED); /* call 0x000122ED */

loc_006A6042: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A605B; /* je: equal / zero */

loc_006A6046: ;
    PUSH32(esp, 0x8AD654);
    ecx = esi;
    PUSH32(esp, 0x006A6052u); RECOMP_ABI_CALL(0x0001BC0Du, sub_0001BC0D); /* call 0x0001BC0D */

loc_006A6052: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01DD) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A605B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01DD) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6080
 * Original: 0x006A6080 - 0x006A60C4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6080: ;
    ecx = MEM32(0x8E8E34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A6095; /* jne: not equal / not zero */

loc_006A608A: ;
    PUSH32(esp, 0x006A608Fu); RECOMP_ABI_CALL(0x00024AC9u, sub_00024AC9); /* call 0x00024AC9 */

loc_006A608F: ;
    ecx = MEM32(0x8E8E34);

loc_006A6095: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD66C);
    esi = ecx;
    PUSH32(esp, 0x006A60A2u); RECOMP_ABI_CALL(0x000122EDu, sub_000122ED); /* call 0x000122ED */

loc_006A60A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A60BB; /* je: equal / zero */

loc_006A60A6: ;
    PUSH32(esp, 0x8AD664);
    ecx = esi;
    PUSH32(esp, 0x006A60B2u); RECOMP_ABI_CALL(0x0001BC0Du, sub_0001BC0D); /* call 0x0001BC0D */

loc_006A60B2: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01DF) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A60BB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01DF) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A60E0
 * Original: 0x006A60E0 - 0x006A6124 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A60E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A60E0: ;
    ecx = MEM32(0x8E8E34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A60F5; /* jne: not equal / not zero */

loc_006A60EA: ;
    PUSH32(esp, 0x006A60EFu); RECOMP_ABI_CALL(0x00024AC9u, sub_00024AC9); /* call 0x00024AC9 */

loc_006A60EF: ;
    ecx = MEM32(0x8E8E34);

loc_006A60F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD67C);
    esi = ecx;
    PUSH32(esp, 0x006A6102u); RECOMP_ABI_CALL(0x000122EDu, sub_000122ED); /* call 0x000122ED */

loc_006A6102: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A611B; /* je: equal / zero */

loc_006A6106: ;
    PUSH32(esp, 0x8AD674);
    ecx = esi;
    PUSH32(esp, 0x006A6112u); RECOMP_ABI_CALL(0x0001BC0Du, sub_0001BC0D); /* call 0x0001BC0D */

loc_006A6112: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01D9) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A611B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01D9) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6140
 * Original: 0x006A6140 - 0x006A6184 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6140: ;
    ecx = MEM32(0x8E8E34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A6155; /* jne: not equal / not zero */

loc_006A614A: ;
    PUSH32(esp, 0x006A614Fu); RECOMP_ABI_CALL(0x00024AC9u, sub_00024AC9); /* call 0x00024AC9 */

loc_006A614F: ;
    ecx = MEM32(0x8E8E34);

loc_006A6155: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD68C);
    esi = ecx;
    PUSH32(esp, 0x006A6162u); RECOMP_ABI_CALL(0x000122EDu, sub_000122ED); /* call 0x000122ED */

loc_006A6162: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A617B; /* je: equal / zero */

loc_006A6166: ;
    PUSH32(esp, 0x8AD684);
    ecx = esi;
    PUSH32(esp, 0x006A6172u); RECOMP_ABI_CALL(0x0001BC0Du, sub_0001BC0D); /* call 0x0001BC0D */

loc_006A6172: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01E0) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A617B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01E0) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A61A0
 * Original: 0x006A61A0 - 0x006A61E4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A61A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A61A0: ;
    ecx = MEM32(0x8E8D34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A61B5; /* jne: not equal / not zero */

loc_006A61AA: ;
    PUSH32(esp, 0x006A61AFu); RECOMP_ABI_CALL(0x000202B2u, sub_000202B2); /* call 0x000202B2 */

loc_006A61AF: ;
    ecx = MEM32(0x8E8D34);

loc_006A61B5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD800);
    esi = ecx;
    PUSH32(esp, 0x006A61C2u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A61C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A61DB; /* je: equal / zero */

loc_006A61C6: ;
    PUSH32(esp, 0x8AD7F8);
    ecx = esi;
    PUSH32(esp, 0x006A61D2u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A61D2: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01EC) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A61DB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01EC) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6200
 * Original: 0x006A6200 - 0x006A6244 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6200: ;
    ecx = MEM32(0x8E8D94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A6215; /* jne: not equal / not zero */

loc_006A620A: ;
    PUSH32(esp, 0x006A620Fu); RECOMP_ABI_CALL(0x0001F538u, sub_0001F538); /* call 0x0001F538 */

loc_006A620F: ;
    ecx = MEM32(0x8E8D94);

loc_006A6215: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD870);
    esi = ecx;
    PUSH32(esp, 0x006A6222u); RECOMP_ABI_CALL(0x0002339Au, sub_0002339A); /* call 0x0002339A */

loc_006A6222: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A623B; /* je: equal / zero */

loc_006A6226: ;
    PUSH32(esp, 0x8AD868);
    ecx = esi;
    PUSH32(esp, 0x006A6232u); RECOMP_ABI_CALL(0x000307E3u, sub_000307E3); /* call 0x000307E3 */

loc_006A6232: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01F8) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A623B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01F8) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6260
 * Original: 0x006A6260 - 0x006A62A4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6260: ;
    ecx = MEM32(0x8E8D94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A6275; /* jne: not equal / not zero */

loc_006A626A: ;
    PUSH32(esp, 0x006A626Fu); RECOMP_ABI_CALL(0x0001F538u, sub_0001F538); /* call 0x0001F538 */

loc_006A626F: ;
    ecx = MEM32(0x8E8D94);

loc_006A6275: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD880);
    esi = ecx;
    PUSH32(esp, 0x006A6282u); RECOMP_ABI_CALL(0x0002339Au, sub_0002339A); /* call 0x0002339A */

loc_006A6282: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A629B; /* je: equal / zero */

loc_006A6286: ;
    PUSH32(esp, 0x8AD878);
    ecx = esi;
    PUSH32(esp, 0x006A6292u); RECOMP_ABI_CALL(0x000307E3u, sub_000307E3); /* call 0x000307E3 */

loc_006A6292: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01F5) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A629B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01F5) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A62C0
 * Original: 0x006A62C0 - 0x006A6304 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A62C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A62C0: ;
    ecx = MEM32(0x8E8D94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A62D5; /* jne: not equal / not zero */

loc_006A62CA: ;
    PUSH32(esp, 0x006A62CFu); RECOMP_ABI_CALL(0x0001F538u, sub_0001F538); /* call 0x0001F538 */

loc_006A62CF: ;
    ecx = MEM32(0x8E8D94);

loc_006A62D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD890);
    esi = ecx;
    PUSH32(esp, 0x006A62E2u); RECOMP_ABI_CALL(0x0002339Au, sub_0002339A); /* call 0x0002339A */

loc_006A62E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A62FB; /* je: equal / zero */

loc_006A62E6: ;
    PUSH32(esp, 0x8AD888);
    ecx = esi;
    PUSH32(esp, 0x006A62F2u); RECOMP_ABI_CALL(0x000307E3u, sub_000307E3); /* call 0x000307E3 */

loc_006A62F2: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01F7) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A62FB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01F7) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6320
 * Original: 0x006A6320 - 0x006A6364 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6320: ;
    ecx = MEM32(0x8E8D94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A6335; /* jne: not equal / not zero */

loc_006A632A: ;
    PUSH32(esp, 0x006A632Fu); RECOMP_ABI_CALL(0x0001F538u, sub_0001F538); /* call 0x0001F538 */

loc_006A632F: ;
    ecx = MEM32(0x8E8D94);

loc_006A6335: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD8A0);
    esi = ecx;
    PUSH32(esp, 0x006A6342u); RECOMP_ABI_CALL(0x0002339Au, sub_0002339A); /* call 0x0002339A */

loc_006A6342: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A635B; /* je: equal / zero */

loc_006A6346: ;
    PUSH32(esp, 0x8AD898);
    ecx = esi;
    PUSH32(esp, 0x006A6352u); RECOMP_ABI_CALL(0x000307E3u, sub_000307E3); /* call 0x000307E3 */

loc_006A6352: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01F6) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A635B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01F6) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6380
 * Original: 0x006A6380 - 0x006A63C4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6380: ;
    ecx = MEM32(0x8E8DB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A6395; /* jne: not equal / not zero */

loc_006A638A: ;
    PUSH32(esp, 0x006A638Fu); RECOMP_ABI_CALL(0x00033961u, sub_00033961); /* call 0x00033961 */

loc_006A638F: ;
    ecx = MEM32(0x8E8DB4);

loc_006A6395: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD8B0);
    esi = ecx;
    PUSH32(esp, 0x006A63A2u); RECOMP_ABI_CALL(0x00012897u, sub_00012897); /* call 0x00012897 */

loc_006A63A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A63BB; /* je: equal / zero */

loc_006A63A6: ;
    PUSH32(esp, 0x8AD8A8);
    ecx = esi;
    PUSH32(esp, 0x006A63B2u); RECOMP_ABI_CALL(0x00020A7Du, sub_00020A7D); /* call 0x00020A7D */

loc_006A63B2: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01F9) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A63BB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01F9) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A63E0
 * Original: 0x006A63E0 - 0x006A6424 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A63E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A63E0: ;
    ecx = MEM32(0x8E8DB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A63F5; /* jne: not equal / not zero */

loc_006A63EA: ;
    PUSH32(esp, 0x006A63EFu); RECOMP_ABI_CALL(0x00033961u, sub_00033961); /* call 0x00033961 */

loc_006A63EF: ;
    ecx = MEM32(0x8E8DB4);

loc_006A63F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD8C0);
    esi = ecx;
    PUSH32(esp, 0x006A6402u); RECOMP_ABI_CALL(0x00012897u, sub_00012897); /* call 0x00012897 */

loc_006A6402: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A641B; /* je: equal / zero */

loc_006A6406: ;
    PUSH32(esp, 0x8AD8B8);
    ecx = esi;
    PUSH32(esp, 0x006A6412u); RECOMP_ABI_CALL(0x00020A7Du, sub_00020A7D); /* call 0x00020A7D */

loc_006A6412: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01FC) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A641B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01FC) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6440
 * Original: 0x006A6440 - 0x006A6484 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6440: ;
    ecx = MEM32(0x8E8DB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A6455; /* jne: not equal / not zero */

loc_006A644A: ;
    PUSH32(esp, 0x006A644Fu); RECOMP_ABI_CALL(0x00033961u, sub_00033961); /* call 0x00033961 */

loc_006A644F: ;
    ecx = MEM32(0x8E8DB4);

loc_006A6455: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD8D0);
    esi = ecx;
    PUSH32(esp, 0x006A6462u); RECOMP_ABI_CALL(0x00012897u, sub_00012897); /* call 0x00012897 */

loc_006A6462: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A647B; /* je: equal / zero */

loc_006A6466: ;
    PUSH32(esp, 0x8AD8C8);
    ecx = esi;
    PUSH32(esp, 0x006A6472u); RECOMP_ABI_CALL(0x00020A7Du, sub_00020A7D); /* call 0x00020A7D */

loc_006A6472: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01FB) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A647B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01FB) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A64A0
 * Original: 0x006A64A0 - 0x006A64E4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A64A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A64A0: ;
    ecx = MEM32(0x8E8DB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A64B5; /* jne: not equal / not zero */

loc_006A64AA: ;
    PUSH32(esp, 0x006A64AFu); RECOMP_ABI_CALL(0x00033961u, sub_00033961); /* call 0x00033961 */

loc_006A64AF: ;
    ecx = MEM32(0x8E8DB4);

loc_006A64B5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD8E0);
    esi = ecx;
    PUSH32(esp, 0x006A64C2u); RECOMP_ABI_CALL(0x00012897u, sub_00012897); /* call 0x00012897 */

loc_006A64C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A64DB; /* je: equal / zero */

loc_006A64C6: ;
    PUSH32(esp, 0x8AD8D8);
    ecx = esi;
    PUSH32(esp, 0x006A64D2u); RECOMP_ABI_CALL(0x00020A7Du, sub_00020A7D); /* call 0x00020A7D */

loc_006A64D2: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01FA) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A64DB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01FA) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6500
 * Original: 0x006A6500 - 0x006A6544 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6500: ;
    ecx = MEM32(0x8E8D94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A6515; /* jne: not equal / not zero */

loc_006A650A: ;
    PUSH32(esp, 0x006A650Fu); RECOMP_ABI_CALL(0x0001F538u, sub_0001F538); /* call 0x0001F538 */

loc_006A650F: ;
    ecx = MEM32(0x8E8D94);

loc_006A6515: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AD8F0);
    esi = ecx;
    PUSH32(esp, 0x006A6522u); RECOMP_ABI_CALL(0x0002339Au, sub_0002339A); /* call 0x0002339A */

loc_006A6522: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A653B; /* je: equal / zero */

loc_006A6526: ;
    PUSH32(esp, 0x8AD8E8);
    ecx = esi;
    PUSH32(esp, 0x006A6532u); RECOMP_ABI_CALL(0x000307E3u, sub_000307E3); /* call 0x000307E3 */

loc_006A6532: ;
    SET_LO8(eax, 1);
    MEM8(0x8F01F4) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A653B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F01F4) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6560
 * Original: 0x006A6560 - 0x006A65CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6560: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A659D; /* jne: not equal / not zero */

loc_006A656E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A659D: ;
    PUSH32(esp, 0x8AD96C);
    esi = ecx;
    PUSH32(esp, 0x006A65A9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A65A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A65C3; /* je: equal / zero */

loc_006A65AD: ;
    PUSH32(esp, 0x8AD964);
    ecx = esi;
    PUSH32(esp, 0x006A65B9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A65B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F022C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A65C3: ;
    POP32(esp, esi);
    MEM8(0x8F022C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A65F0
 * Original: 0x006A65F0 - 0x006A665C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A65F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A65F0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A662D; /* jne: not equal / not zero */

loc_006A65FE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A662D: ;
    PUSH32(esp, 0x8AD97C);
    esi = ecx;
    PUSH32(esp, 0x006A6639u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6639: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6653; /* je: equal / zero */

loc_006A663D: ;
    PUSH32(esp, 0x8AD974);
    ecx = esi;
    PUSH32(esp, 0x006A6649u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A6649: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0229) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6653: ;
    POP32(esp, esi);
    MEM8(0x8F0229) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6680
 * Original: 0x006A6680 - 0x006A66EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6680: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A66BD; /* jne: not equal / not zero */

loc_006A668E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A66BD: ;
    PUSH32(esp, 0x8AD98C);
    esi = ecx;
    PUSH32(esp, 0x006A66C9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A66C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A66E3; /* je: equal / zero */

loc_006A66CD: ;
    PUSH32(esp, 0x8AD984);
    ecx = esi;
    PUSH32(esp, 0x006A66D9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A66D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0224) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A66E3: ;
    POP32(esp, esi);
    MEM8(0x8F0224) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6710
 * Original: 0x006A6710 - 0x006A677C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6710: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A674D; /* jne: not equal / not zero */

loc_006A671E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A674D: ;
    PUSH32(esp, 0x8AD99C);
    esi = ecx;
    PUSH32(esp, 0x006A6759u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6759: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6773; /* je: equal / zero */

loc_006A675D: ;
    PUSH32(esp, 0x8AD994);
    ecx = esi;
    PUSH32(esp, 0x006A6769u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A6769: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F022D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6773: ;
    POP32(esp, esi);
    MEM8(0x8F022D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A67A0
 * Original: 0x006A67A0 - 0x006A680C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A67A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A67A0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A67DD; /* jne: not equal / not zero */

loc_006A67AE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A67DD: ;
    PUSH32(esp, 0x8AD9AC);
    esi = ecx;
    PUSH32(esp, 0x006A67E9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A67E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6803; /* je: equal / zero */

loc_006A67ED: ;
    PUSH32(esp, 0x8AD9A4);
    ecx = esi;
    PUSH32(esp, 0x006A67F9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A67F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F021E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6803: ;
    POP32(esp, esi);
    MEM8(0x8F021E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6830
 * Original: 0x006A6830 - 0x006A689C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6830: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A686D; /* jne: not equal / not zero */

loc_006A683E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A686D: ;
    PUSH32(esp, 0x8AD9BC);
    esi = ecx;
    PUSH32(esp, 0x006A6879u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6879: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6893; /* je: equal / zero */

loc_006A687D: ;
    PUSH32(esp, 0x8AD9B4);
    ecx = esi;
    PUSH32(esp, 0x006A6889u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A6889: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0226) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6893: ;
    POP32(esp, esi);
    MEM8(0x8F0226) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A68C0
 * Original: 0x006A68C0 - 0x006A692C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A68C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A68C0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A68FD; /* jne: not equal / not zero */

loc_006A68CE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A68FD: ;
    PUSH32(esp, 0x8AD9CC);
    esi = ecx;
    PUSH32(esp, 0x006A6909u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6909: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6923; /* je: equal / zero */

loc_006A690D: ;
    PUSH32(esp, 0x8AD9C4);
    ecx = esi;
    PUSH32(esp, 0x006A6919u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A6919: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0220) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6923: ;
    POP32(esp, esi);
    MEM8(0x8F0220) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6950
 * Original: 0x006A6950 - 0x006A69BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6950: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A698D; /* jne: not equal / not zero */

loc_006A695E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A698D: ;
    PUSH32(esp, 0x8AD9DC);
    esi = ecx;
    PUSH32(esp, 0x006A6999u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6999: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A69B3; /* je: equal / zero */

loc_006A699D: ;
    PUSH32(esp, 0x8AD9D4);
    ecx = esi;
    PUSH32(esp, 0x006A69A9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A69A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F022A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A69B3: ;
    POP32(esp, esi);
    MEM8(0x8F022A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A69E0
 * Original: 0x006A69E0 - 0x006A6A4C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A69E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A69E0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A6A1D; /* jne: not equal / not zero */

loc_006A69EE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A6A1D: ;
    PUSH32(esp, 0x8AD9EC);
    esi = ecx;
    PUSH32(esp, 0x006A6A29u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6A29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6A43; /* je: equal / zero */

loc_006A6A2D: ;
    PUSH32(esp, 0x8AD9E4);
    ecx = esi;
    PUSH32(esp, 0x006A6A39u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A6A39: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F022E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6A43: ;
    POP32(esp, esi);
    MEM8(0x8F022E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6A70
 * Original: 0x006A6A70 - 0x006A6ADC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6A70: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A6AAD; /* jne: not equal / not zero */

loc_006A6A7E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A6AAD: ;
    PUSH32(esp, 0x8AD9FC);
    esi = ecx;
    PUSH32(esp, 0x006A6AB9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6AB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6AD3; /* je: equal / zero */

loc_006A6ABD: ;
    PUSH32(esp, 0x8AD9F4);
    ecx = esi;
    PUSH32(esp, 0x006A6AC9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A6AC9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F021D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6AD3: ;
    POP32(esp, esi);
    MEM8(0x8F021D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6B00
 * Original: 0x006A6B00 - 0x006A6B6C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6B00: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A6B3D; /* jne: not equal / not zero */

loc_006A6B0E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A6B3D: ;
    PUSH32(esp, 0x8ADA0C);
    esi = ecx;
    PUSH32(esp, 0x006A6B49u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6B49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6B63; /* je: equal / zero */

loc_006A6B4D: ;
    PUSH32(esp, 0x8ADA04);
    ecx = esi;
    PUSH32(esp, 0x006A6B59u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A6B59: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0228) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6B63: ;
    POP32(esp, esi);
    MEM8(0x8F0228) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6B90
 * Original: 0x006A6B90 - 0x006A6BFC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6B90: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A6BCD; /* jne: not equal / not zero */

loc_006A6B9E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A6BCD: ;
    PUSH32(esp, 0x8ADA1C);
    esi = ecx;
    PUSH32(esp, 0x006A6BD9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6BD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6BF3; /* je: equal / zero */

loc_006A6BDD: ;
    PUSH32(esp, 0x8ADA14);
    ecx = esi;
    PUSH32(esp, 0x006A6BE9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A6BE9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0230) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6BF3: ;
    POP32(esp, esi);
    MEM8(0x8F0230) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6C20
 * Original: 0x006A6C20 - 0x006A6C8C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6C20: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A6C5D; /* jne: not equal / not zero */

loc_006A6C2E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A6C5D: ;
    PUSH32(esp, 0x8ADA2C);
    esi = ecx;
    PUSH32(esp, 0x006A6C69u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6C69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6C83; /* je: equal / zero */

loc_006A6C6D: ;
    PUSH32(esp, 0x8ADA24);
    ecx = esi;
    PUSH32(esp, 0x006A6C79u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A6C79: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0227) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6C83: ;
    POP32(esp, esi);
    MEM8(0x8F0227) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6CB0
 * Original: 0x006A6CB0 - 0x006A6D1C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6CB0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A6CED; /* jne: not equal / not zero */

loc_006A6CBE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A6CED: ;
    PUSH32(esp, 0x8ADA3C);
    esi = ecx;
    PUSH32(esp, 0x006A6CF9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6CF9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6D13; /* je: equal / zero */

loc_006A6CFD: ;
    PUSH32(esp, 0x8ADA34);
    ecx = esi;
    PUSH32(esp, 0x006A6D09u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A6D09: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0225) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6D13: ;
    POP32(esp, esi);
    MEM8(0x8F0225) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6D40
 * Original: 0x006A6D40 - 0x006A6DAC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6D40: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A6D7D; /* jne: not equal / not zero */

loc_006A6D4E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A6D7D: ;
    PUSH32(esp, 0x8ADA4C);
    esi = ecx;
    PUSH32(esp, 0x006A6D89u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6D89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6DA3; /* je: equal / zero */

loc_006A6D8D: ;
    PUSH32(esp, 0x8ADA44);
    ecx = esi;
    PUSH32(esp, 0x006A6D99u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A6D99: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0222) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6DA3: ;
    POP32(esp, esi);
    MEM8(0x8F0222) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6DD0
 * Original: 0x006A6DD0 - 0x006A6E3C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6DD0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A6E0D; /* jne: not equal / not zero */

loc_006A6DDE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A6E0D: ;
    PUSH32(esp, 0x8ADA5C);
    esi = ecx;
    PUSH32(esp, 0x006A6E19u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6E19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6E33; /* je: equal / zero */

loc_006A6E1D: ;
    PUSH32(esp, 0x8ADA54);
    ecx = esi;
    PUSH32(esp, 0x006A6E29u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A6E29: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0221) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6E33: ;
    POP32(esp, esi);
    MEM8(0x8F0221) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6E60
 * Original: 0x006A6E60 - 0x006A6ECC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6E60: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A6E9D; /* jne: not equal / not zero */

loc_006A6E6E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A6E9D: ;
    PUSH32(esp, 0x8ADA6C);
    esi = ecx;
    PUSH32(esp, 0x006A6EA9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6EA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6EC3; /* je: equal / zero */

loc_006A6EAD: ;
    PUSH32(esp, 0x8ADA64);
    ecx = esi;
    PUSH32(esp, 0x006A6EB9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A6EB9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F021C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6EC3: ;
    POP32(esp, esi);
    MEM8(0x8F021C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6EF0
 * Original: 0x006A6EF0 - 0x006A6F5C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6EF0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A6F2D; /* jne: not equal / not zero */

loc_006A6EFE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A6F2D: ;
    PUSH32(esp, 0x8ADA7C);
    esi = ecx;
    PUSH32(esp, 0x006A6F39u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6F39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6F53; /* je: equal / zero */

loc_006A6F3D: ;
    PUSH32(esp, 0x8ADA74);
    ecx = esi;
    PUSH32(esp, 0x006A6F49u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A6F49: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F022F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6F53: ;
    POP32(esp, esi);
    MEM8(0x8F022F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A6F80
 * Original: 0x006A6F80 - 0x006A6FEC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A6F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A6F80: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A6FBD; /* jne: not equal / not zero */

loc_006A6F8E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A6FBD: ;
    PUSH32(esp, 0x8ADA8C);
    esi = ecx;
    PUSH32(esp, 0x006A6FC9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A6FC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A6FE3; /* je: equal / zero */

loc_006A6FCD: ;
    PUSH32(esp, 0x8ADA84);
    ecx = esi;
    PUSH32(esp, 0x006A6FD9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A6FD9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F021F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A6FE3: ;
    POP32(esp, esi);
    MEM8(0x8F021F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7010
 * Original: 0x006A7010 - 0x006A707C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7010: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A704D; /* jne: not equal / not zero */

loc_006A701E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A704D: ;
    PUSH32(esp, 0x8ADA9C);
    esi = ecx;
    PUSH32(esp, 0x006A7059u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7059: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7073; /* je: equal / zero */

loc_006A705D: ;
    PUSH32(esp, 0x8ADA94);
    ecx = esi;
    PUSH32(esp, 0x006A7069u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7069: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0223) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7073: ;
    POP32(esp, esi);
    MEM8(0x8F0223) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A70A0
 * Original: 0x006A70A0 - 0x006A710C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A70A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A70A0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A70DD; /* jne: not equal / not zero */

loc_006A70AE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A70DD: ;
    PUSH32(esp, 0x8ADAAC);
    esi = ecx;
    PUSH32(esp, 0x006A70E9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A70E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7103; /* je: equal / zero */

loc_006A70ED: ;
    PUSH32(esp, 0x8ADAA4);
    ecx = esi;
    PUSH32(esp, 0x006A70F9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A70F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F022B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7103: ;
    POP32(esp, esi);
    MEM8(0x8F022B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7130
 * Original: 0x006A7130 - 0x006A719C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7130: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A716D; /* jne: not equal / not zero */

loc_006A713E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A716D: ;
    PUSH32(esp, 0x8ADB38);
    esi = ecx;
    PUSH32(esp, 0x006A7179u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7179: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7193; /* je: equal / zero */

loc_006A717D: ;
    PUSH32(esp, 0x8ADB30);
    ecx = esi;
    PUSH32(esp, 0x006A7189u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7189: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0251) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7193: ;
    POP32(esp, esi);
    MEM8(0x8F0251) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A71C0
 * Original: 0x006A71C0 - 0x006A722C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A71C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A71C0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A71FD; /* jne: not equal / not zero */

loc_006A71CE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A71FD: ;
    PUSH32(esp, 0x8ADB48);
    esi = ecx;
    PUSH32(esp, 0x006A7209u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7209: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7223; /* je: equal / zero */

loc_006A720D: ;
    PUSH32(esp, 0x8ADB40);
    ecx = esi;
    PUSH32(esp, 0x006A7219u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7219: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0238) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7223: ;
    POP32(esp, esi);
    MEM8(0x8F0238) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7250
 * Original: 0x006A7250 - 0x006A72BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7250: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A728D; /* jne: not equal / not zero */

loc_006A725E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A728D: ;
    PUSH32(esp, 0x8ADB58);
    esi = ecx;
    PUSH32(esp, 0x006A7299u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7299: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A72B3; /* je: equal / zero */

loc_006A729D: ;
    PUSH32(esp, 0x8ADB50);
    ecx = esi;
    PUSH32(esp, 0x006A72A9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A72A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F023D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A72B3: ;
    POP32(esp, esi);
    MEM8(0x8F023D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A72E0
 * Original: 0x006A72E0 - 0x006A734C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A72E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A72E0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A731D; /* jne: not equal / not zero */

loc_006A72EE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A731D: ;
    PUSH32(esp, 0x8ADB68);
    esi = ecx;
    PUSH32(esp, 0x006A7329u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7329: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7343; /* je: equal / zero */

loc_006A732D: ;
    PUSH32(esp, 0x8ADB60);
    ecx = esi;
    PUSH32(esp, 0x006A7339u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7339: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0274) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7343: ;
    POP32(esp, esi);
    MEM8(0x8F0274) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7370
 * Original: 0x006A7370 - 0x006A73DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7370: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A73AD; /* jne: not equal / not zero */

loc_006A737E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A73AD: ;
    PUSH32(esp, 0x8ADB78);
    esi = ecx;
    PUSH32(esp, 0x006A73B9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A73B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A73D3; /* je: equal / zero */

loc_006A73BD: ;
    PUSH32(esp, 0x8ADB70);
    ecx = esi;
    PUSH32(esp, 0x006A73C9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A73C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0281) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A73D3: ;
    POP32(esp, esi);
    MEM8(0x8F0281) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7400
 * Original: 0x006A7400 - 0x006A746C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7400: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A743D; /* jne: not equal / not zero */

loc_006A740E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A743D: ;
    PUSH32(esp, 0x8ADB88);
    esi = ecx;
    PUSH32(esp, 0x006A7449u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7449: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7463; /* je: equal / zero */

loc_006A744D: ;
    PUSH32(esp, 0x8ADB80);
    ecx = esi;
    PUSH32(esp, 0x006A7459u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7459: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F024E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7463: ;
    POP32(esp, esi);
    MEM8(0x8F024E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7490
 * Original: 0x006A7490 - 0x006A74FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7490: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A74CD; /* jne: not equal / not zero */

loc_006A749E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A74CD: ;
    PUSH32(esp, 0x8ADB98);
    esi = ecx;
    PUSH32(esp, 0x006A74D9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A74D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A74F3; /* je: equal / zero */

loc_006A74DD: ;
    PUSH32(esp, 0x8ADB90);
    ecx = esi;
    PUSH32(esp, 0x006A74E9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A74E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0269) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A74F3: ;
    POP32(esp, esi);
    MEM8(0x8F0269) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7520
 * Original: 0x006A7520 - 0x006A758C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7520: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A755D; /* jne: not equal / not zero */

loc_006A752E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A755D: ;
    PUSH32(esp, 0x8ADBA8);
    esi = ecx;
    PUSH32(esp, 0x006A7569u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7569: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7583; /* je: equal / zero */

loc_006A756D: ;
    PUSH32(esp, 0x8ADBA0);
    ecx = esi;
    PUSH32(esp, 0x006A7579u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7579: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F027A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7583: ;
    POP32(esp, esi);
    MEM8(0x8F027A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A75B0
 * Original: 0x006A75B0 - 0x006A761C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A75B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A75B0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A75ED; /* jne: not equal / not zero */

loc_006A75BE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A75ED: ;
    PUSH32(esp, 0x8ADBB8);
    esi = ecx;
    PUSH32(esp, 0x006A75F9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A75F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7613; /* je: equal / zero */

loc_006A75FD: ;
    PUSH32(esp, 0x8ADBB0);
    ecx = esi;
    PUSH32(esp, 0x006A7609u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7609: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F025B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7613: ;
    POP32(esp, esi);
    MEM8(0x8F025B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7640
 * Original: 0x006A7640 - 0x006A76AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7640: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A767D; /* jne: not equal / not zero */

loc_006A764E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A767D: ;
    PUSH32(esp, 0x8ADBC8);
    esi = ecx;
    PUSH32(esp, 0x006A7689u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7689: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A76A3; /* je: equal / zero */

loc_006A768D: ;
    PUSH32(esp, 0x8ADBC0);
    ecx = esi;
    PUSH32(esp, 0x006A7699u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7699: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F026C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A76A3: ;
    POP32(esp, esi);
    MEM8(0x8F026C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A76D0
 * Original: 0x006A76D0 - 0x006A773C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A76D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A76D0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A770D; /* jne: not equal / not zero */

loc_006A76DE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A770D: ;
    PUSH32(esp, 0x8ADBD8);
    esi = ecx;
    PUSH32(esp, 0x006A7719u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7719: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7733; /* je: equal / zero */

loc_006A771D: ;
    PUSH32(esp, 0x8ADBD0);
    ecx = esi;
    PUSH32(esp, 0x006A7729u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7729: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0237) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7733: ;
    POP32(esp, esi);
    MEM8(0x8F0237) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7760
 * Original: 0x006A7760 - 0x006A77CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7760: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A779D; /* jne: not equal / not zero */

loc_006A776E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A779D: ;
    PUSH32(esp, 0x8ADBE8);
    esi = ecx;
    PUSH32(esp, 0x006A77A9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A77A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A77C3; /* je: equal / zero */

loc_006A77AD: ;
    PUSH32(esp, 0x8ADBE0);
    ecx = esi;
    PUSH32(esp, 0x006A77B9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A77B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0271) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A77C3: ;
    POP32(esp, esi);
    MEM8(0x8F0271) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A77F0
 * Original: 0x006A77F0 - 0x006A785C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A77F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A77F0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A782D; /* jne: not equal / not zero */

loc_006A77FE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A782D: ;
    PUSH32(esp, 0x8ADBF8);
    esi = ecx;
    PUSH32(esp, 0x006A7839u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7839: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7853; /* je: equal / zero */

loc_006A783D: ;
    PUSH32(esp, 0x8ADBF0);
    ecx = esi;
    PUSH32(esp, 0x006A7849u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7849: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0264) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7853: ;
    POP32(esp, esi);
    MEM8(0x8F0264) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7880
 * Original: 0x006A7880 - 0x006A78EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7880: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A78BD; /* jne: not equal / not zero */

loc_006A788E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A78BD: ;
    PUSH32(esp, 0x8ADC08);
    esi = ecx;
    PUSH32(esp, 0x006A78C9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A78C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A78E3; /* je: equal / zero */

loc_006A78CD: ;
    PUSH32(esp, 0x8ADC00);
    ecx = esi;
    PUSH32(esp, 0x006A78D9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A78D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0277) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A78E3: ;
    POP32(esp, esi);
    MEM8(0x8F0277) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7910
 * Original: 0x006A7910 - 0x006A797C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7910: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A794D; /* jne: not equal / not zero */

loc_006A791E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A794D: ;
    PUSH32(esp, 0x8ADC18);
    esi = ecx;
    PUSH32(esp, 0x006A7959u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7959: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7973; /* je: equal / zero */

loc_006A795D: ;
    PUSH32(esp, 0x8ADC10);
    ecx = esi;
    PUSH32(esp, 0x006A7969u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7969: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0252) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7973: ;
    POP32(esp, esi);
    MEM8(0x8F0252) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A79A0
 * Original: 0x006A79A0 - 0x006A7A0C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A79A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A79A0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A79DD; /* jne: not equal / not zero */

loc_006A79AE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A79DD: ;
    PUSH32(esp, 0x8ADC28);
    esi = ecx;
    PUSH32(esp, 0x006A79E9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A79E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7A03; /* je: equal / zero */

loc_006A79ED: ;
    PUSH32(esp, 0x8ADC20);
    ecx = esi;
    PUSH32(esp, 0x006A79F9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A79F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0267) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7A03: ;
    POP32(esp, esi);
    MEM8(0x8F0267) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7A30
 * Original: 0x006A7A30 - 0x006A7A9C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7A30: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A7A6D; /* jne: not equal / not zero */

loc_006A7A3E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A7A6D: ;
    PUSH32(esp, 0x8ADC38);
    esi = ecx;
    PUSH32(esp, 0x006A7A79u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7A79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7A93; /* je: equal / zero */

loc_006A7A7D: ;
    PUSH32(esp, 0x8ADC30);
    ecx = esi;
    PUSH32(esp, 0x006A7A89u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7A89: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F023F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7A93: ;
    POP32(esp, esi);
    MEM8(0x8F023F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7AC0
 * Original: 0x006A7AC0 - 0x006A7B2C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7AC0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A7AFD; /* jne: not equal / not zero */

loc_006A7ACE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A7AFD: ;
    PUSH32(esp, 0x8ADC48);
    esi = ecx;
    PUSH32(esp, 0x006A7B09u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7B09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7B23; /* je: equal / zero */

loc_006A7B0D: ;
    PUSH32(esp, 0x8ADC40);
    ecx = esi;
    PUSH32(esp, 0x006A7B19u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7B19: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0241) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7B23: ;
    POP32(esp, esi);
    MEM8(0x8F0241) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7B50
 * Original: 0x006A7B50 - 0x006A7BBC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7B50: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A7B8D; /* jne: not equal / not zero */

loc_006A7B5E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A7B8D: ;
    PUSH32(esp, 0x8ADC58);
    esi = ecx;
    PUSH32(esp, 0x006A7B99u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7B99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7BB3; /* je: equal / zero */

loc_006A7B9D: ;
    PUSH32(esp, 0x8ADC50);
    ecx = esi;
    PUSH32(esp, 0x006A7BA9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7BA9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0273) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7BB3: ;
    POP32(esp, esi);
    MEM8(0x8F0273) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7BE0
 * Original: 0x006A7BE0 - 0x006A7C4C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7BE0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A7C1D; /* jne: not equal / not zero */

loc_006A7BEE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A7C1D: ;
    PUSH32(esp, 0x8ADC68);
    esi = ecx;
    PUSH32(esp, 0x006A7C29u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7C29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7C43; /* je: equal / zero */

loc_006A7C2D: ;
    PUSH32(esp, 0x8ADC60);
    ecx = esi;
    PUSH32(esp, 0x006A7C39u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7C39: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0275) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7C43: ;
    POP32(esp, esi);
    MEM8(0x8F0275) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7C70
 * Original: 0x006A7C70 - 0x006A7CDC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7C70: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A7CAD; /* jne: not equal / not zero */

loc_006A7C7E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A7CAD: ;
    PUSH32(esp, 0x8ADC78);
    esi = ecx;
    PUSH32(esp, 0x006A7CB9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7CB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7CD3; /* je: equal / zero */

loc_006A7CBD: ;
    PUSH32(esp, 0x8ADC70);
    ecx = esi;
    PUSH32(esp, 0x006A7CC9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7CC9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0266) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7CD3: ;
    POP32(esp, esi);
    MEM8(0x8F0266) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7D00
 * Original: 0x006A7D00 - 0x006A7D6C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7D00: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A7D3D; /* jne: not equal / not zero */

loc_006A7D0E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A7D3D: ;
    PUSH32(esp, 0x8ADC88);
    esi = ecx;
    PUSH32(esp, 0x006A7D49u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7D49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7D63; /* je: equal / zero */

loc_006A7D4D: ;
    PUSH32(esp, 0x8ADC80);
    ecx = esi;
    PUSH32(esp, 0x006A7D59u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7D59: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0272) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7D63: ;
    POP32(esp, esi);
    MEM8(0x8F0272) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7D90
 * Original: 0x006A7D90 - 0x006A7DFC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7D90: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A7DCD; /* jne: not equal / not zero */

loc_006A7D9E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A7DCD: ;
    PUSH32(esp, 0x8ADC98);
    esi = ecx;
    PUSH32(esp, 0x006A7DD9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7DD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7DF3; /* je: equal / zero */

loc_006A7DDD: ;
    PUSH32(esp, 0x8ADC90);
    ecx = esi;
    PUSH32(esp, 0x006A7DE9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7DE9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F024B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7DF3: ;
    POP32(esp, esi);
    MEM8(0x8F024B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7E20
 * Original: 0x006A7E20 - 0x006A7E8C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7E20: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A7E5D; /* jne: not equal / not zero */

loc_006A7E2E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A7E5D: ;
    PUSH32(esp, 0x8ADCA8);
    esi = ecx;
    PUSH32(esp, 0x006A7E69u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7E69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7E83; /* je: equal / zero */

loc_006A7E6D: ;
    PUSH32(esp, 0x8ADCA0);
    ecx = esi;
    PUSH32(esp, 0x006A7E79u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7E79: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0247) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7E83: ;
    POP32(esp, esi);
    MEM8(0x8F0247) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7EB0
 * Original: 0x006A7EB0 - 0x006A7F1C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7EB0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A7EED; /* jne: not equal / not zero */

loc_006A7EBE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A7EED: ;
    PUSH32(esp, 0x8ADCB8);
    esi = ecx;
    PUSH32(esp, 0x006A7EF9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7EF9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7F13; /* je: equal / zero */

loc_006A7EFD: ;
    PUSH32(esp, 0x8ADCB0);
    ecx = esi;
    PUSH32(esp, 0x006A7F09u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7F09: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0236) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7F13: ;
    POP32(esp, esi);
    MEM8(0x8F0236) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7F40
 * Original: 0x006A7F40 - 0x006A7FAC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7F40: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A7F7D; /* jne: not equal / not zero */

loc_006A7F4E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A7F7D: ;
    PUSH32(esp, 0x8ADCC8);
    esi = ecx;
    PUSH32(esp, 0x006A7F89u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A7F89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A7FA3; /* je: equal / zero */

loc_006A7F8D: ;
    PUSH32(esp, 0x8ADCC0);
    ecx = esi;
    PUSH32(esp, 0x006A7F99u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A7F99: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0258) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A7FA3: ;
    POP32(esp, esi);
    MEM8(0x8F0258) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A7FD0
 * Original: 0x006A7FD0 - 0x006A803C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A7FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A7FD0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A800D; /* jne: not equal / not zero */

loc_006A7FDE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A800D: ;
    PUSH32(esp, 0x8ADCD8);
    esi = ecx;
    PUSH32(esp, 0x006A8019u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8019: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8033; /* je: equal / zero */

loc_006A801D: ;
    PUSH32(esp, 0x8ADCD0);
    ecx = esi;
    PUSH32(esp, 0x006A8029u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8029: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0250) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8033: ;
    POP32(esp, esi);
    MEM8(0x8F0250) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8060
 * Original: 0x006A8060 - 0x006A80CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8060: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A809D; /* jne: not equal / not zero */

loc_006A806E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A809D: ;
    PUSH32(esp, 0x8ADCE8);
    esi = ecx;
    PUSH32(esp, 0x006A80A9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A80A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A80C3; /* je: equal / zero */

loc_006A80AD: ;
    PUSH32(esp, 0x8ADCE0);
    ecx = esi;
    PUSH32(esp, 0x006A80B9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A80B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0265) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A80C3: ;
    POP32(esp, esi);
    MEM8(0x8F0265) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A80F0
 * Original: 0x006A80F0 - 0x006A815C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A80F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A80F0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A812D; /* jne: not equal / not zero */

loc_006A80FE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A812D: ;
    PUSH32(esp, 0x8ADCF8);
    esi = ecx;
    PUSH32(esp, 0x006A8139u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8139: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8153; /* je: equal / zero */

loc_006A813D: ;
    PUSH32(esp, 0x8ADCF0);
    ecx = esi;
    PUSH32(esp, 0x006A8149u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8149: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F026A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8153: ;
    POP32(esp, esi);
    MEM8(0x8F026A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8180
 * Original: 0x006A8180 - 0x006A81EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8180: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A81BD; /* jne: not equal / not zero */

loc_006A818E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A81BD: ;
    PUSH32(esp, 0x8ADD08);
    esi = ecx;
    PUSH32(esp, 0x006A81C9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A81C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A81E3; /* je: equal / zero */

loc_006A81CD: ;
    PUSH32(esp, 0x8ADD00);
    ecx = esi;
    PUSH32(esp, 0x006A81D9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A81D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0249) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A81E3: ;
    POP32(esp, esi);
    MEM8(0x8F0249) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8210
 * Original: 0x006A8210 - 0x006A827C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8210: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A824D; /* jne: not equal / not zero */

loc_006A821E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A824D: ;
    PUSH32(esp, 0x8ADD18);
    esi = ecx;
    PUSH32(esp, 0x006A8259u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8259: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8273; /* je: equal / zero */

loc_006A825D: ;
    PUSH32(esp, 0x8ADD10);
    ecx = esi;
    PUSH32(esp, 0x006A8269u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8269: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F027D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8273: ;
    POP32(esp, esi);
    MEM8(0x8F027D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A82A0
 * Original: 0x006A82A0 - 0x006A830C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A82A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A82A0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A82DD; /* jne: not equal / not zero */

loc_006A82AE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A82DD: ;
    PUSH32(esp, 0x8ADD28);
    esi = ecx;
    PUSH32(esp, 0x006A82E9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A82E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8303; /* je: equal / zero */

loc_006A82ED: ;
    PUSH32(esp, 0x8ADD20);
    ecx = esi;
    PUSH32(esp, 0x006A82F9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A82F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F025E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8303: ;
    POP32(esp, esi);
    MEM8(0x8F025E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8330
 * Original: 0x006A8330 - 0x006A839C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8330: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A836D; /* jne: not equal / not zero */

loc_006A833E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A836D: ;
    PUSH32(esp, 0x8ADD38);
    esi = ecx;
    PUSH32(esp, 0x006A8379u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8379: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8393; /* je: equal / zero */

loc_006A837D: ;
    PUSH32(esp, 0x8ADD30);
    ecx = esi;
    PUSH32(esp, 0x006A8389u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8389: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F023A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8393: ;
    POP32(esp, esi);
    MEM8(0x8F023A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A83C0
 * Original: 0x006A83C0 - 0x006A842C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A83C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A83C0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A83FD; /* jne: not equal / not zero */

loc_006A83CE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A83FD: ;
    PUSH32(esp, 0x8ADD48);
    esi = ecx;
    PUSH32(esp, 0x006A8409u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8409: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8423; /* je: equal / zero */

loc_006A840D: ;
    PUSH32(esp, 0x8ADD40);
    ecx = esi;
    PUSH32(esp, 0x006A8419u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8419: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0254) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8423: ;
    POP32(esp, esi);
    MEM8(0x8F0254) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8450
 * Original: 0x006A8450 - 0x006A84BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8450: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A848D; /* jne: not equal / not zero */

loc_006A845E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A848D: ;
    PUSH32(esp, 0x8ADD58);
    esi = ecx;
    PUSH32(esp, 0x006A8499u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8499: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A84B3; /* je: equal / zero */

loc_006A849D: ;
    PUSH32(esp, 0x8ADD50);
    ecx = esi;
    PUSH32(esp, 0x006A84A9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A84A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0270) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A84B3: ;
    POP32(esp, esi);
    MEM8(0x8F0270) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A84E0
 * Original: 0x006A84E0 - 0x006A854C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A84E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A84E0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A851D; /* jne: not equal / not zero */

loc_006A84EE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A851D: ;
    PUSH32(esp, 0x8ADD68);
    esi = ecx;
    PUSH32(esp, 0x006A8529u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8529: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8543; /* je: equal / zero */

loc_006A852D: ;
    PUSH32(esp, 0x8ADD60);
    ecx = esi;
    PUSH32(esp, 0x006A8539u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8539: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0280) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8543: ;
    POP32(esp, esi);
    MEM8(0x8F0280) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8570
 * Original: 0x006A8570 - 0x006A85DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8570: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A85AD; /* jne: not equal / not zero */

loc_006A857E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A85AD: ;
    PUSH32(esp, 0x8ADD78);
    esi = ecx;
    PUSH32(esp, 0x006A85B9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A85B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A85D3; /* je: equal / zero */

loc_006A85BD: ;
    PUSH32(esp, 0x8ADD70);
    ecx = esi;
    PUSH32(esp, 0x006A85C9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A85C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F026E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A85D3: ;
    POP32(esp, esi);
    MEM8(0x8F026E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8600
 * Original: 0x006A8600 - 0x006A866C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8600: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A863D; /* jne: not equal / not zero */

loc_006A860E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A863D: ;
    PUSH32(esp, 0x8ADD88);
    esi = ecx;
    PUSH32(esp, 0x006A8649u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8649: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8663; /* je: equal / zero */

loc_006A864D: ;
    PUSH32(esp, 0x8ADD80);
    ecx = esi;
    PUSH32(esp, 0x006A8659u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8659: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0240) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8663: ;
    POP32(esp, esi);
    MEM8(0x8F0240) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8690
 * Original: 0x006A8690 - 0x006A86FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8690: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A86CD; /* jne: not equal / not zero */

loc_006A869E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A86CD: ;
    PUSH32(esp, 0x8ADD98);
    esi = ecx;
    PUSH32(esp, 0x006A86D9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A86D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A86F3; /* je: equal / zero */

loc_006A86DD: ;
    PUSH32(esp, 0x8ADD90);
    ecx = esi;
    PUSH32(esp, 0x006A86E9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A86E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F024C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A86F3: ;
    POP32(esp, esi);
    MEM8(0x8F024C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8720
 * Original: 0x006A8720 - 0x006A878C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8720: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A875D; /* jne: not equal / not zero */

loc_006A872E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A875D: ;
    PUSH32(esp, 0x8ADDA8);
    esi = ecx;
    PUSH32(esp, 0x006A8769u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8769: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8783; /* je: equal / zero */

loc_006A876D: ;
    PUSH32(esp, 0x8ADDA0);
    ecx = esi;
    PUSH32(esp, 0x006A8779u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8779: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F027E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8783: ;
    POP32(esp, esi);
    MEM8(0x8F027E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A87B0
 * Original: 0x006A87B0 - 0x006A881C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A87B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A87B0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A87ED; /* jne: not equal / not zero */

loc_006A87BE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A87ED: ;
    PUSH32(esp, 0x8ADDB8);
    esi = ecx;
    PUSH32(esp, 0x006A87F9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A87F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8813; /* je: equal / zero */

loc_006A87FD: ;
    PUSH32(esp, 0x8ADDB0);
    ecx = esi;
    PUSH32(esp, 0x006A8809u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8809: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0260) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8813: ;
    POP32(esp, esi);
    MEM8(0x8F0260) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8840
 * Original: 0x006A8840 - 0x006A88AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8840: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A887D; /* jne: not equal / not zero */

loc_006A884E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A887D: ;
    PUSH32(esp, 0x8ADDC8);
    esi = ecx;
    PUSH32(esp, 0x006A8889u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8889: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A88A3; /* je: equal / zero */

loc_006A888D: ;
    PUSH32(esp, 0x8ADDC0);
    ecx = esi;
    PUSH32(esp, 0x006A8899u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8899: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0268) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A88A3: ;
    POP32(esp, esi);
    MEM8(0x8F0268) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A88D0
 * Original: 0x006A88D0 - 0x006A893C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A88D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A88D0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A890D; /* jne: not equal / not zero */

loc_006A88DE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A890D: ;
    PUSH32(esp, 0x8ADDD8);
    esi = ecx;
    PUSH32(esp, 0x006A8919u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8919: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8933; /* je: equal / zero */

loc_006A891D: ;
    PUSH32(esp, 0x8ADDD0);
    ecx = esi;
    PUSH32(esp, 0x006A8929u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8929: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0243) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8933: ;
    POP32(esp, esi);
    MEM8(0x8F0243) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8960
 * Original: 0x006A8960 - 0x006A89CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8960: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A899D; /* jne: not equal / not zero */

loc_006A896E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A899D: ;
    PUSH32(esp, 0x8ADDE8);
    esi = ecx;
    PUSH32(esp, 0x006A89A9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A89A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A89C3; /* je: equal / zero */

loc_006A89AD: ;
    PUSH32(esp, 0x8ADDE0);
    ecx = esi;
    PUSH32(esp, 0x006A89B9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A89B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0253) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A89C3: ;
    POP32(esp, esi);
    MEM8(0x8F0253) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A89F0
 * Original: 0x006A89F0 - 0x006A8A5C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A89F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A89F0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A8A2D; /* jne: not equal / not zero */

loc_006A89FE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A8A2D: ;
    PUSH32(esp, 0x8ADDF8);
    esi = ecx;
    PUSH32(esp, 0x006A8A39u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8A39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8A53; /* je: equal / zero */

loc_006A8A3D: ;
    PUSH32(esp, 0x8ADDF0);
    ecx = esi;
    PUSH32(esp, 0x006A8A49u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8A49: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F023B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8A53: ;
    POP32(esp, esi);
    MEM8(0x8F023B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8A80
 * Original: 0x006A8A80 - 0x006A8AEC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8A80: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A8ABD; /* jne: not equal / not zero */

loc_006A8A8E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A8ABD: ;
    PUSH32(esp, 0x8ADE08);
    esi = ecx;
    PUSH32(esp, 0x006A8AC9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8AC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8AE3; /* je: equal / zero */

loc_006A8ACD: ;
    PUSH32(esp, 0x8ADE00);
    ecx = esi;
    PUSH32(esp, 0x006A8AD9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8AD9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0287) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8AE3: ;
    POP32(esp, esi);
    MEM8(0x8F0287) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8B10
 * Original: 0x006A8B10 - 0x006A8B7C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8B10: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A8B4D; /* jne: not equal / not zero */

loc_006A8B1E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A8B4D: ;
    PUSH32(esp, 0x8ADE18);
    esi = ecx;
    PUSH32(esp, 0x006A8B59u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8B59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8B73; /* je: equal / zero */

loc_006A8B5D: ;
    PUSH32(esp, 0x8ADE10);
    ecx = esi;
    PUSH32(esp, 0x006A8B69u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8B69: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F025D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8B73: ;
    POP32(esp, esi);
    MEM8(0x8F025D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8BA0
 * Original: 0x006A8BA0 - 0x006A8C0C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8BA0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A8BDD; /* jne: not equal / not zero */

loc_006A8BAE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A8BDD: ;
    PUSH32(esp, 0x8ADE28);
    esi = ecx;
    PUSH32(esp, 0x006A8BE9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8BE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8C03; /* je: equal / zero */

loc_006A8BED: ;
    PUSH32(esp, 0x8ADE20);
    ecx = esi;
    PUSH32(esp, 0x006A8BF9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8BF9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F024F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8C03: ;
    POP32(esp, esi);
    MEM8(0x8F024F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8C30
 * Original: 0x006A8C30 - 0x006A8C9C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8C30: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A8C6D; /* jne: not equal / not zero */

loc_006A8C3E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A8C6D: ;
    PUSH32(esp, 0x8ADE38);
    esi = ecx;
    PUSH32(esp, 0x006A8C79u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8C79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8C93; /* je: equal / zero */

loc_006A8C7D: ;
    PUSH32(esp, 0x8ADE30);
    ecx = esi;
    PUSH32(esp, 0x006A8C89u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8C89: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0245) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8C93: ;
    POP32(esp, esi);
    MEM8(0x8F0245) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8CC0
 * Original: 0x006A8CC0 - 0x006A8D2C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8CC0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A8CFD; /* jne: not equal / not zero */

loc_006A8CCE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A8CFD: ;
    PUSH32(esp, 0x8ADE48);
    esi = ecx;
    PUSH32(esp, 0x006A8D09u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8D09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8D23; /* je: equal / zero */

loc_006A8D0D: ;
    PUSH32(esp, 0x8ADE40);
    ecx = esi;
    PUSH32(esp, 0x006A8D19u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8D19: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0244) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8D23: ;
    POP32(esp, esi);
    MEM8(0x8F0244) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8D50
 * Original: 0x006A8D50 - 0x006A8DBC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8D50: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A8D8D; /* jne: not equal / not zero */

loc_006A8D5E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A8D8D: ;
    PUSH32(esp, 0x8ADE58);
    esi = ecx;
    PUSH32(esp, 0x006A8D99u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8D99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8DB3; /* je: equal / zero */

loc_006A8D9D: ;
    PUSH32(esp, 0x8ADE50);
    ecx = esi;
    PUSH32(esp, 0x006A8DA9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8DA9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F026F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8DB3: ;
    POP32(esp, esi);
    MEM8(0x8F026F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8DE0
 * Original: 0x006A8DE0 - 0x006A8E4C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8DE0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A8E1D; /* jne: not equal / not zero */

loc_006A8DEE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A8E1D: ;
    PUSH32(esp, 0x8ADE68);
    esi = ecx;
    PUSH32(esp, 0x006A8E29u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8E29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8E43; /* je: equal / zero */

loc_006A8E2D: ;
    PUSH32(esp, 0x8ADE60);
    ecx = esi;
    PUSH32(esp, 0x006A8E39u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8E39: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0276) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8E43: ;
    POP32(esp, esi);
    MEM8(0x8F0276) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8E70
 * Original: 0x006A8E70 - 0x006A8EDC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8E70: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A8EAD; /* jne: not equal / not zero */

loc_006A8E7E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A8EAD: ;
    PUSH32(esp, 0x8ADE78);
    esi = ecx;
    PUSH32(esp, 0x006A8EB9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8EB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8ED3; /* je: equal / zero */

loc_006A8EBD: ;
    PUSH32(esp, 0x8ADE70);
    ecx = esi;
    PUSH32(esp, 0x006A8EC9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8EC9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0263) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8ED3: ;
    POP32(esp, esi);
    MEM8(0x8F0263) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8F00
 * Original: 0x006A8F00 - 0x006A8F6C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8F00: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A8F3D; /* jne: not equal / not zero */

loc_006A8F0E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A8F3D: ;
    PUSH32(esp, 0x8ADE88);
    esi = ecx;
    PUSH32(esp, 0x006A8F49u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8F49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8F63; /* je: equal / zero */

loc_006A8F4D: ;
    PUSH32(esp, 0x8ADE80);
    ecx = esi;
    PUSH32(esp, 0x006A8F59u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8F59: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0283) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8F63: ;
    POP32(esp, esi);
    MEM8(0x8F0283) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A8F90
 * Original: 0x006A8F90 - 0x006A8FFC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A8F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A8F90: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A8FCD; /* jne: not equal / not zero */

loc_006A8F9E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A8FCD: ;
    PUSH32(esp, 0x8ADE98);
    esi = ecx;
    PUSH32(esp, 0x006A8FD9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A8FD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A8FF3; /* je: equal / zero */

loc_006A8FDD: ;
    PUSH32(esp, 0x8ADE90);
    ecx = esi;
    PUSH32(esp, 0x006A8FE9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A8FE9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0282) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A8FF3: ;
    POP32(esp, esi);
    MEM8(0x8F0282) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9020
 * Original: 0x006A9020 - 0x006A908C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9020: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A905D; /* jne: not equal / not zero */

loc_006A902E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A905D: ;
    PUSH32(esp, 0x8ADEA8);
    esi = ecx;
    PUSH32(esp, 0x006A9069u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9069: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9083; /* je: equal / zero */

loc_006A906D: ;
    PUSH32(esp, 0x8ADEA0);
    ecx = esi;
    PUSH32(esp, 0x006A9079u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9079: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F024D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9083: ;
    POP32(esp, esi);
    MEM8(0x8F024D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A90B0
 * Original: 0x006A90B0 - 0x006A911C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A90B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A90B0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A90ED; /* jne: not equal / not zero */

loc_006A90BE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A90ED: ;
    PUSH32(esp, 0x8ADEB8);
    esi = ecx;
    PUSH32(esp, 0x006A90F9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A90F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9113; /* je: equal / zero */

loc_006A90FD: ;
    PUSH32(esp, 0x8ADEB0);
    ecx = esi;
    PUSH32(esp, 0x006A9109u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9109: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0239) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9113: ;
    POP32(esp, esi);
    MEM8(0x8F0239) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9140
 * Original: 0x006A9140 - 0x006A91AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9140: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A917D; /* jne: not equal / not zero */

loc_006A914E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A917D: ;
    PUSH32(esp, 0x8ADEC8);
    esi = ecx;
    PUSH32(esp, 0x006A9189u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9189: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A91A3; /* je: equal / zero */

loc_006A918D: ;
    PUSH32(esp, 0x8ADEC0);
    ecx = esi;
    PUSH32(esp, 0x006A9199u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9199: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0257) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A91A3: ;
    POP32(esp, esi);
    MEM8(0x8F0257) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A91D0
 * Original: 0x006A91D0 - 0x006A923C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A91D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A91D0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A920D; /* jne: not equal / not zero */

loc_006A91DE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A920D: ;
    PUSH32(esp, 0x8ADED8);
    esi = ecx;
    PUSH32(esp, 0x006A9219u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9219: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9233; /* je: equal / zero */

loc_006A921D: ;
    PUSH32(esp, 0x8ADED0);
    ecx = esi;
    PUSH32(esp, 0x006A9229u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9229: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0278) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9233: ;
    POP32(esp, esi);
    MEM8(0x8F0278) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9260
 * Original: 0x006A9260 - 0x006A92CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9260: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A929D; /* jne: not equal / not zero */

loc_006A926E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A929D: ;
    PUSH32(esp, 0x8ADEE8);
    esi = ecx;
    PUSH32(esp, 0x006A92A9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A92A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A92C3; /* je: equal / zero */

loc_006A92AD: ;
    PUSH32(esp, 0x8ADEE0);
    ecx = esi;
    PUSH32(esp, 0x006A92B9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A92B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0284) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A92C3: ;
    POP32(esp, esi);
    MEM8(0x8F0284) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A92F0
 * Original: 0x006A92F0 - 0x006A935C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A92F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A92F0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A932D; /* jne: not equal / not zero */

loc_006A92FE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A932D: ;
    PUSH32(esp, 0x8ADEF8);
    esi = ecx;
    PUSH32(esp, 0x006A9339u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9339: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9353; /* je: equal / zero */

loc_006A933D: ;
    PUSH32(esp, 0x8ADEF0);
    ecx = esi;
    PUSH32(esp, 0x006A9349u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9349: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F024A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9353: ;
    POP32(esp, esi);
    MEM8(0x8F024A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9380
 * Original: 0x006A9380 - 0x006A93EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9380: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A93BD; /* jne: not equal / not zero */

loc_006A938E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A93BD: ;
    PUSH32(esp, 0x8ADF08);
    esi = ecx;
    PUSH32(esp, 0x006A93C9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A93C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A93E3; /* je: equal / zero */

loc_006A93CD: ;
    PUSH32(esp, 0x8ADF00);
    ecx = esi;
    PUSH32(esp, 0x006A93D9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A93D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F023C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A93E3: ;
    POP32(esp, esi);
    MEM8(0x8F023C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9410
 * Original: 0x006A9410 - 0x006A947C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9410: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A944D; /* jne: not equal / not zero */

loc_006A941E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A944D: ;
    PUSH32(esp, 0x8ADF18);
    esi = ecx;
    PUSH32(esp, 0x006A9459u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9459: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9473; /* je: equal / zero */

loc_006A945D: ;
    PUSH32(esp, 0x8ADF10);
    ecx = esi;
    PUSH32(esp, 0x006A9469u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9469: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F026D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9473: ;
    POP32(esp, esi);
    MEM8(0x8F026D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A94A0
 * Original: 0x006A94A0 - 0x006A950C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A94A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A94A0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A94DD; /* jne: not equal / not zero */

loc_006A94AE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A94DD: ;
    PUSH32(esp, 0x8ADF28);
    esi = ecx;
    PUSH32(esp, 0x006A94E9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A94E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9503; /* je: equal / zero */

loc_006A94ED: ;
    PUSH32(esp, 0x8ADF20);
    ecx = esi;
    PUSH32(esp, 0x006A94F9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A94F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F025F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9503: ;
    POP32(esp, esi);
    MEM8(0x8F025F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9530
 * Original: 0x006A9530 - 0x006A959C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9530: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A956D; /* jne: not equal / not zero */

loc_006A953E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A956D: ;
    PUSH32(esp, 0x8ADF38);
    esi = ecx;
    PUSH32(esp, 0x006A9579u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9579: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9593; /* je: equal / zero */

loc_006A957D: ;
    PUSH32(esp, 0x8ADF30);
    ecx = esi;
    PUSH32(esp, 0x006A9589u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9589: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0285) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9593: ;
    POP32(esp, esi);
    MEM8(0x8F0285) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A95C0
 * Original: 0x006A95C0 - 0x006A962C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A95C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A95C0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A95FD; /* jne: not equal / not zero */

loc_006A95CE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A95FD: ;
    PUSH32(esp, 0x8ADF48);
    esi = ecx;
    PUSH32(esp, 0x006A9609u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9609: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9623; /* je: equal / zero */

loc_006A960D: ;
    PUSH32(esp, 0x8ADF40);
    ecx = esi;
    PUSH32(esp, 0x006A9619u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9619: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F027B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9623: ;
    POP32(esp, esi);
    MEM8(0x8F027B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9650
 * Original: 0x006A9650 - 0x006A96BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9650: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A968D; /* jne: not equal / not zero */

loc_006A965E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A968D: ;
    PUSH32(esp, 0x8ADF58);
    esi = ecx;
    PUSH32(esp, 0x006A9699u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9699: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A96B3; /* je: equal / zero */

loc_006A969D: ;
    PUSH32(esp, 0x8ADF50);
    ecx = esi;
    PUSH32(esp, 0x006A96A9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A96A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F025A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A96B3: ;
    POP32(esp, esi);
    MEM8(0x8F025A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A96E0
 * Original: 0x006A96E0 - 0x006A974C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A96E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A96E0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A971D; /* jne: not equal / not zero */

loc_006A96EE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A971D: ;
    PUSH32(esp, 0x8ADF68);
    esi = ecx;
    PUSH32(esp, 0x006A9729u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9729: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9743; /* je: equal / zero */

loc_006A972D: ;
    PUSH32(esp, 0x8ADF60);
    ecx = esi;
    PUSH32(esp, 0x006A9739u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9739: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F025C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9743: ;
    POP32(esp, esi);
    MEM8(0x8F025C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9770
 * Original: 0x006A9770 - 0x006A97DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9770: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A97AD; /* jne: not equal / not zero */

loc_006A977E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A97AD: ;
    PUSH32(esp, 0x8ADF78);
    esi = ecx;
    PUSH32(esp, 0x006A97B9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A97B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A97D3; /* je: equal / zero */

loc_006A97BD: ;
    PUSH32(esp, 0x8ADF70);
    ecx = esi;
    PUSH32(esp, 0x006A97C9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A97C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0279) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A97D3: ;
    POP32(esp, esi);
    MEM8(0x8F0279) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9800
 * Original: 0x006A9800 - 0x006A986C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9800: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A983D; /* jne: not equal / not zero */

loc_006A980E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A983D: ;
    PUSH32(esp, 0x8ADF88);
    esi = ecx;
    PUSH32(esp, 0x006A9849u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9849: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9863; /* je: equal / zero */

loc_006A984D: ;
    PUSH32(esp, 0x8ADF80);
    ecx = esi;
    PUSH32(esp, 0x006A9859u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9859: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F027F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9863: ;
    POP32(esp, esi);
    MEM8(0x8F027F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9890
 * Original: 0x006A9890 - 0x006A98FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9890: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A98CD; /* jne: not equal / not zero */

loc_006A989E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A98CD: ;
    PUSH32(esp, 0x8ADF98);
    esi = ecx;
    PUSH32(esp, 0x006A98D9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A98D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A98F3; /* je: equal / zero */

loc_006A98DD: ;
    PUSH32(esp, 0x8ADF90);
    ecx = esi;
    PUSH32(esp, 0x006A98E9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A98E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0289) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A98F3: ;
    POP32(esp, esi);
    MEM8(0x8F0289) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9920
 * Original: 0x006A9920 - 0x006A998C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9920: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A995D; /* jne: not equal / not zero */

loc_006A992E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A995D: ;
    PUSH32(esp, 0x8ADFA8);
    esi = ecx;
    PUSH32(esp, 0x006A9969u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9969: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9983; /* je: equal / zero */

loc_006A996D: ;
    PUSH32(esp, 0x8ADFA0);
    ecx = esi;
    PUSH32(esp, 0x006A9979u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9979: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0288) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9983: ;
    POP32(esp, esi);
    MEM8(0x8F0288) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A99B0
 * Original: 0x006A99B0 - 0x006A9A1C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A99B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A99B0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A99ED; /* jne: not equal / not zero */

loc_006A99BE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A99ED: ;
    PUSH32(esp, 0x8ADFB8);
    esi = ecx;
    PUSH32(esp, 0x006A99F9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A99F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9A13; /* je: equal / zero */

loc_006A99FD: ;
    PUSH32(esp, 0x8ADFB0);
    ecx = esi;
    PUSH32(esp, 0x006A9A09u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9A09: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0286) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9A13: ;
    POP32(esp, esi);
    MEM8(0x8F0286) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9A40
 * Original: 0x006A9A40 - 0x006A9AAC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9A40: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A9A7D; /* jne: not equal / not zero */

loc_006A9A4E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A9A7D: ;
    PUSH32(esp, 0x8ADFC8);
    esi = ecx;
    PUSH32(esp, 0x006A9A89u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9A89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9AA3; /* je: equal / zero */

loc_006A9A8D: ;
    PUSH32(esp, 0x8ADFC0);
    ecx = esi;
    PUSH32(esp, 0x006A9A99u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9A99: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0235) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9AA3: ;
    POP32(esp, esi);
    MEM8(0x8F0235) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9AD0
 * Original: 0x006A9AD0 - 0x006A9B3C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9AD0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A9B0D; /* jne: not equal / not zero */

loc_006A9ADE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A9B0D: ;
    PUSH32(esp, 0x8ADFD8);
    esi = ecx;
    PUSH32(esp, 0x006A9B19u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9B19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9B33; /* je: equal / zero */

loc_006A9B1D: ;
    PUSH32(esp, 0x8ADFD0);
    ecx = esi;
    PUSH32(esp, 0x006A9B29u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9B29: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0255) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9B33: ;
    POP32(esp, esi);
    MEM8(0x8F0255) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9B60
 * Original: 0x006A9B60 - 0x006A9BCC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9B60: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A9B9D; /* jne: not equal / not zero */

loc_006A9B6E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A9B9D: ;
    PUSH32(esp, 0x8ADFE8);
    esi = ecx;
    PUSH32(esp, 0x006A9BA9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9BA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9BC3; /* je: equal / zero */

loc_006A9BAD: ;
    PUSH32(esp, 0x8ADFE0);
    ecx = esi;
    PUSH32(esp, 0x006A9BB9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9BB9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0248) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9BC3: ;
    POP32(esp, esi);
    MEM8(0x8F0248) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9BF0
 * Original: 0x006A9BF0 - 0x006A9C5C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9BF0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A9C2D; /* jne: not equal / not zero */

loc_006A9BFE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A9C2D: ;
    PUSH32(esp, 0x8ADFF8);
    esi = ecx;
    PUSH32(esp, 0x006A9C39u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9C39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9C53; /* je: equal / zero */

loc_006A9C3D: ;
    PUSH32(esp, 0x8ADFF0);
    ecx = esi;
    PUSH32(esp, 0x006A9C49u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9C49: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F027C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9C53: ;
    POP32(esp, esi);
    MEM8(0x8F027C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9C80
 * Original: 0x006A9C80 - 0x006A9CEC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9C80: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A9CBD; /* jne: not equal / not zero */

loc_006A9C8E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A9CBD: ;
    PUSH32(esp, 0x8AE008);
    esi = ecx;
    PUSH32(esp, 0x006A9CC9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9CC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9CE3; /* je: equal / zero */

loc_006A9CCD: ;
    PUSH32(esp, 0x8AE000);
    ecx = esi;
    PUSH32(esp, 0x006A9CD9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9CD9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0262) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9CE3: ;
    POP32(esp, esi);
    MEM8(0x8F0262) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9D10
 * Original: 0x006A9D10 - 0x006A9D7C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9D10: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A9D4D; /* jne: not equal / not zero */

loc_006A9D1E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A9D4D: ;
    PUSH32(esp, 0x8AE018);
    esi = ecx;
    PUSH32(esp, 0x006A9D59u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9D59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9D73; /* je: equal / zero */

loc_006A9D5D: ;
    PUSH32(esp, 0x8AE010);
    ecx = esi;
    PUSH32(esp, 0x006A9D69u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9D69: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0259) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9D73: ;
    POP32(esp, esi);
    MEM8(0x8F0259) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9DA0
 * Original: 0x006A9DA0 - 0x006A9E0C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9DA0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A9DDD; /* jne: not equal / not zero */

loc_006A9DAE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A9DDD: ;
    PUSH32(esp, 0x8AE028);
    esi = ecx;
    PUSH32(esp, 0x006A9DE9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9DE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9E03; /* je: equal / zero */

loc_006A9DED: ;
    PUSH32(esp, 0x8AE020);
    ecx = esi;
    PUSH32(esp, 0x006A9DF9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9DF9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0246) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9E03: ;
    POP32(esp, esi);
    MEM8(0x8F0246) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9E30
 * Original: 0x006A9E30 - 0x006A9E9C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9E30: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A9E6D; /* jne: not equal / not zero */

loc_006A9E3E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A9E6D: ;
    PUSH32(esp, 0x8AE038);
    esi = ecx;
    PUSH32(esp, 0x006A9E79u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9E79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9E93; /* je: equal / zero */

loc_006A9E7D: ;
    PUSH32(esp, 0x8AE030);
    ecx = esi;
    PUSH32(esp, 0x006A9E89u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9E89: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F026B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9E93: ;
    POP32(esp, esi);
    MEM8(0x8F026B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9EC0
 * Original: 0x006A9EC0 - 0x006A9F2C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9EC0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A9EFD; /* jne: not equal / not zero */

loc_006A9ECE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A9EFD: ;
    PUSH32(esp, 0x8AE048);
    esi = ecx;
    PUSH32(esp, 0x006A9F09u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9F09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9F23; /* je: equal / zero */

loc_006A9F0D: ;
    PUSH32(esp, 0x8AE040);
    ecx = esi;
    PUSH32(esp, 0x006A9F19u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9F19: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0242) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9F23: ;
    POP32(esp, esi);
    MEM8(0x8F0242) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9F50
 * Original: 0x006A9F50 - 0x006A9FBC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9F50: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A9F8D; /* jne: not equal / not zero */

loc_006A9F5E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A9F8D: ;
    PUSH32(esp, 0x8AE058);
    esi = ecx;
    PUSH32(esp, 0x006A9F99u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A9F99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A9FB3; /* je: equal / zero */

loc_006A9F9D: ;
    PUSH32(esp, 0x8AE050);
    ecx = esi;
    PUSH32(esp, 0x006A9FA9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A9FA9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0261) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A9FB3: ;
    POP32(esp, esi);
    MEM8(0x8F0261) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A9FE0
 * Original: 0x006A9FE0 - 0x006AA04C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A9FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A9FE0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA01D; /* jne: not equal / not zero */

loc_006A9FEE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA01D: ;
    PUSH32(esp, 0x8AE068);
    esi = ecx;
    PUSH32(esp, 0x006AA029u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA029: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA043; /* je: equal / zero */

loc_006AA02D: ;
    PUSH32(esp, 0x8AE060);
    ecx = esi;
    PUSH32(esp, 0x006AA039u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA039: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0256) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA043: ;
    POP32(esp, esi);
    MEM8(0x8F0256) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA070
 * Original: 0x006AA070 - 0x006AA0DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA070: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA0AD; /* jne: not equal / not zero */

loc_006AA07E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA0AD: ;
    PUSH32(esp, 0x8AE078);
    esi = ecx;
    PUSH32(esp, 0x006AA0B9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA0B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA0D3; /* je: equal / zero */

loc_006AA0BD: ;
    PUSH32(esp, 0x8AE070);
    ecx = esi;
    PUSH32(esp, 0x006AA0C9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA0C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F023E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA0D3: ;
    POP32(esp, esi);
    MEM8(0x8F023E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
