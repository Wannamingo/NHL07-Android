/**
 * nhl_07_recomp - Recompiled code chunk 266
 * Functions: 250 (0x006AA100 - 0x006AF010)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_006AA100
 * Original: 0x006AA100 - 0x006AA16C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA100: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA13D; /* jne: not equal / not zero */

loc_006AA10E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA13D: ;
    PUSH32(esp, 0x8AE1CC);
    esi = ecx;
    PUSH32(esp, 0x006AA149u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA149: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA163; /* je: equal / zero */

loc_006AA14D: ;
    PUSH32(esp, 0x8AE1C4);
    ecx = esi;
    PUSH32(esp, 0x006AA159u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA159: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02B2) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA163: ;
    POP32(esp, esi);
    MEM8(0x8F02B2) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA190
 * Original: 0x006AA190 - 0x006AA1FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA190: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA1CD; /* jne: not equal / not zero */

loc_006AA19E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA1CD: ;
    PUSH32(esp, 0x8AE1DC);
    esi = ecx;
    PUSH32(esp, 0x006AA1D9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA1D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA1F3; /* je: equal / zero */

loc_006AA1DD: ;
    PUSH32(esp, 0x8AE1D4);
    ecx = esi;
    PUSH32(esp, 0x006AA1E9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA1E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02A2) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA1F3: ;
    POP32(esp, esi);
    MEM8(0x8F02A2) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA220
 * Original: 0x006AA220 - 0x006AA28C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA220: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA25D; /* jne: not equal / not zero */

loc_006AA22E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA25D: ;
    PUSH32(esp, 0x8AE1EC);
    esi = ecx;
    PUSH32(esp, 0x006AA269u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA269: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA283; /* je: equal / zero */

loc_006AA26D: ;
    PUSH32(esp, 0x8AE1E4);
    ecx = esi;
    PUSH32(esp, 0x006AA279u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA279: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02A3) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA283: ;
    POP32(esp, esi);
    MEM8(0x8F02A3) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA2B0
 * Original: 0x006AA2B0 - 0x006AA31C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA2B0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA2ED; /* jne: not equal / not zero */

loc_006AA2BE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA2ED: ;
    PUSH32(esp, 0x8AE1FC);
    esi = ecx;
    PUSH32(esp, 0x006AA2F9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA2F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA313; /* je: equal / zero */

loc_006AA2FD: ;
    PUSH32(esp, 0x8AE1F4);
    ecx = esi;
    PUSH32(esp, 0x006AA309u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA309: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02CF) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA313: ;
    POP32(esp, esi);
    MEM8(0x8F02CF) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA340
 * Original: 0x006AA340 - 0x006AA3AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA340: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA37D; /* jne: not equal / not zero */

loc_006AA34E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA37D: ;
    PUSH32(esp, 0x8AE20C);
    esi = ecx;
    PUSH32(esp, 0x006AA389u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA389: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA3A3; /* je: equal / zero */

loc_006AA38D: ;
    PUSH32(esp, 0x8AE204);
    ecx = esi;
    PUSH32(esp, 0x006AA399u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA399: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02D9) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA3A3: ;
    POP32(esp, esi);
    MEM8(0x8F02D9) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA3D0
 * Original: 0x006AA3D0 - 0x006AA43C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA3D0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA40D; /* jne: not equal / not zero */

loc_006AA3DE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA40D: ;
    PUSH32(esp, 0x8AE21C);
    esi = ecx;
    PUSH32(esp, 0x006AA419u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA419: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA433; /* je: equal / zero */

loc_006AA41D: ;
    PUSH32(esp, 0x8AE214);
    ecx = esi;
    PUSH32(esp, 0x006AA429u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA429: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02A0) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA433: ;
    POP32(esp, esi);
    MEM8(0x8F02A0) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA460
 * Original: 0x006AA460 - 0x006AA4CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA460: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA49D; /* jne: not equal / not zero */

loc_006AA46E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA49D: ;
    PUSH32(esp, 0x8AE22C);
    esi = ecx;
    PUSH32(esp, 0x006AA4A9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA4A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA4C3; /* je: equal / zero */

loc_006AA4AD: ;
    PUSH32(esp, 0x8AE224);
    ecx = esi;
    PUSH32(esp, 0x006AA4B9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA4B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02C5) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA4C3: ;
    POP32(esp, esi);
    MEM8(0x8F02C5) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA4F0
 * Original: 0x006AA4F0 - 0x006AA55C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA4F0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA52D; /* jne: not equal / not zero */

loc_006AA4FE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA52D: ;
    PUSH32(esp, 0x8AE23C);
    esi = ecx;
    PUSH32(esp, 0x006AA539u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA539: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA553; /* je: equal / zero */

loc_006AA53D: ;
    PUSH32(esp, 0x8AE234);
    ecx = esi;
    PUSH32(esp, 0x006AA549u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA549: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02D4) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA553: ;
    POP32(esp, esi);
    MEM8(0x8F02D4) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA580
 * Original: 0x006AA580 - 0x006AA5EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA580: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA5BD; /* jne: not equal / not zero */

loc_006AA58E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA5BD: ;
    PUSH32(esp, 0x8AE24C);
    esi = ecx;
    PUSH32(esp, 0x006AA5C9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA5C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA5E3; /* je: equal / zero */

loc_006AA5CD: ;
    PUSH32(esp, 0x8AE244);
    ecx = esi;
    PUSH32(esp, 0x006AA5D9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA5D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02B9) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA5E3: ;
    POP32(esp, esi);
    MEM8(0x8F02B9) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA610
 * Original: 0x006AA610 - 0x006AA67C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA610: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA64D; /* jne: not equal / not zero */

loc_006AA61E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA64D: ;
    PUSH32(esp, 0x8AE25C);
    esi = ecx;
    PUSH32(esp, 0x006AA659u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA659: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA673; /* je: equal / zero */

loc_006AA65D: ;
    PUSH32(esp, 0x8AE254);
    ecx = esi;
    PUSH32(esp, 0x006AA669u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA669: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02C7) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA673: ;
    POP32(esp, esi);
    MEM8(0x8F02C7) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA6A0
 * Original: 0x006AA6A0 - 0x006AA70C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA6A0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA6DD; /* jne: not equal / not zero */

loc_006AA6AE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA6DD: ;
    PUSH32(esp, 0x8AE26C);
    esi = ecx;
    PUSH32(esp, 0x006AA6E9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA6E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA703; /* je: equal / zero */

loc_006AA6ED: ;
    PUSH32(esp, 0x8AE264);
    ecx = esi;
    PUSH32(esp, 0x006AA6F9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA6F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02AE) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA703: ;
    POP32(esp, esi);
    MEM8(0x8F02AE) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA730
 * Original: 0x006AA730 - 0x006AA79C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA730: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA76D; /* jne: not equal / not zero */

loc_006AA73E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA76D: ;
    PUSH32(esp, 0x8AE27C);
    esi = ecx;
    PUSH32(esp, 0x006AA779u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA779: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA793; /* je: equal / zero */

loc_006AA77D: ;
    PUSH32(esp, 0x8AE274);
    ecx = esi;
    PUSH32(esp, 0x006AA789u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA789: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02CC) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA793: ;
    POP32(esp, esi);
    MEM8(0x8F02CC) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA7C0
 * Original: 0x006AA7C0 - 0x006AA82C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA7C0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA7FD; /* jne: not equal / not zero */

loc_006AA7CE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA7FD: ;
    PUSH32(esp, 0x8AE28C);
    esi = ecx;
    PUSH32(esp, 0x006AA809u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA809: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA823; /* je: equal / zero */

loc_006AA80D: ;
    PUSH32(esp, 0x8AE284);
    ecx = esi;
    PUSH32(esp, 0x006AA819u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA819: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02C0) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA823: ;
    POP32(esp, esi);
    MEM8(0x8F02C0) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA850
 * Original: 0x006AA850 - 0x006AA8BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA850: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA88D; /* jne: not equal / not zero */

loc_006AA85E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA88D: ;
    PUSH32(esp, 0x8AE29C);
    esi = ecx;
    PUSH32(esp, 0x006AA899u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA899: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA8B3; /* je: equal / zero */

loc_006AA89D: ;
    PUSH32(esp, 0x8AE294);
    ecx = esi;
    PUSH32(esp, 0x006AA8A9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA8A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02D2) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA8B3: ;
    POP32(esp, esi);
    MEM8(0x8F02D2) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA8E0
 * Original: 0x006AA8E0 - 0x006AA94C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA8E0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA91D; /* jne: not equal / not zero */

loc_006AA8EE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA91D: ;
    PUSH32(esp, 0x8AE2AC);
    esi = ecx;
    PUSH32(esp, 0x006AA929u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA929: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA943; /* je: equal / zero */

loc_006AA92D: ;
    PUSH32(esp, 0x8AE2A4);
    ecx = esi;
    PUSH32(esp, 0x006AA939u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA939: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02B3) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA943: ;
    POP32(esp, esi);
    MEM8(0x8F02B3) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AA970
 * Original: 0x006AA970 - 0x006AA9DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AA970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AA970: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AA9AD; /* jne: not equal / not zero */

loc_006AA97E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AA9AD: ;
    PUSH32(esp, 0x8AE2BC);
    esi = ecx;
    PUSH32(esp, 0x006AA9B9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AA9B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AA9D3; /* je: equal / zero */

loc_006AA9BD: ;
    PUSH32(esp, 0x8AE2B4);
    ecx = esi;
    PUSH32(esp, 0x006AA9C9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AA9C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02C3) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AA9D3: ;
    POP32(esp, esi);
    MEM8(0x8F02C3) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AAA00
 * Original: 0x006AAA00 - 0x006AAA6C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AAA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AAA00: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AAA3D; /* jne: not equal / not zero */

loc_006AAA0E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AAA3D: ;
    PUSH32(esp, 0x8AE2CC);
    esi = ecx;
    PUSH32(esp, 0x006AAA49u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AAA49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AAA63; /* je: equal / zero */

loc_006AAA4D: ;
    PUSH32(esp, 0x8AE2C4);
    ecx = esi;
    PUSH32(esp, 0x006AAA59u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AAA59: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F029C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AAA63: ;
    POP32(esp, esi);
    MEM8(0x8F029C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AAA90
 * Original: 0x006AAA90 - 0x006AAAFC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AAA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AAA90: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AAACD; /* jne: not equal / not zero */

loc_006AAA9E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AAACD: ;
    PUSH32(esp, 0x8AE2DC);
    esi = ecx;
    PUSH32(esp, 0x006AAAD9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AAAD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AAAF3; /* je: equal / zero */

loc_006AAADD: ;
    PUSH32(esp, 0x8AE2D4);
    ecx = esi;
    PUSH32(esp, 0x006AAAE9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AAAE9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02A7) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AAAF3: ;
    POP32(esp, esi);
    MEM8(0x8F02A7) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AAB20
 * Original: 0x006AAB20 - 0x006AAB8C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AAB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AAB20: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AAB5D; /* jne: not equal / not zero */

loc_006AAB2E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AAB5D: ;
    PUSH32(esp, 0x8AE2EC);
    esi = ecx;
    PUSH32(esp, 0x006AAB69u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AAB69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AAB83; /* je: equal / zero */

loc_006AAB6D: ;
    PUSH32(esp, 0x8AE2E4);
    ecx = esi;
    PUSH32(esp, 0x006AAB79u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AAB79: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02CE) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AAB83: ;
    POP32(esp, esi);
    MEM8(0x8F02CE) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AABB0
 * Original: 0x006AABB0 - 0x006AAC1C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AABB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AABB0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AABED; /* jne: not equal / not zero */

loc_006AABBE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AABED: ;
    PUSH32(esp, 0x8AE2FC);
    esi = ecx;
    PUSH32(esp, 0x006AABF9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AABF9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AAC13; /* je: equal / zero */

loc_006AABFD: ;
    PUSH32(esp, 0x8AE2F4);
    ecx = esi;
    PUSH32(esp, 0x006AAC09u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AAC09: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02D0) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AAC13: ;
    POP32(esp, esi);
    MEM8(0x8F02D0) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AAC40
 * Original: 0x006AAC40 - 0x006AACAC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AAC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AAC40: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AAC7D; /* jne: not equal / not zero */

loc_006AAC4E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AAC7D: ;
    PUSH32(esp, 0x8AE30C);
    esi = ecx;
    PUSH32(esp, 0x006AAC89u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AAC89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AACA3; /* je: equal / zero */

loc_006AAC8D: ;
    PUSH32(esp, 0x8AE304);
    ecx = esi;
    PUSH32(esp, 0x006AAC99u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AAC99: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02C2) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AACA3: ;
    POP32(esp, esi);
    MEM8(0x8F02C2) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AACD0
 * Original: 0x006AACD0 - 0x006AAD3C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AACD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AACD0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AAD0D; /* jne: not equal / not zero */

loc_006AACDE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AAD0D: ;
    PUSH32(esp, 0x8AE31C);
    esi = ecx;
    PUSH32(esp, 0x006AAD19u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AAD19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AAD33; /* je: equal / zero */

loc_006AAD1D: ;
    PUSH32(esp, 0x8AE314);
    ecx = esi;
    PUSH32(esp, 0x006AAD29u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AAD29: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02CD) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AAD33: ;
    POP32(esp, esi);
    MEM8(0x8F02CD) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AAD60
 * Original: 0x006AAD60 - 0x006AADCC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AAD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AAD60: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AAD9D; /* jne: not equal / not zero */

loc_006AAD6E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AAD9D: ;
    PUSH32(esp, 0x8AE32C);
    esi = ecx;
    PUSH32(esp, 0x006AADA9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AADA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AADC3; /* je: equal / zero */

loc_006AADAD: ;
    PUSH32(esp, 0x8AE324);
    ecx = esi;
    PUSH32(esp, 0x006AADB9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AADB9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02A9) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AADC3: ;
    POP32(esp, esi);
    MEM8(0x8F02A9) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AADF0
 * Original: 0x006AADF0 - 0x006AAE5C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AADF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AADF0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AAE2D; /* jne: not equal / not zero */

loc_006AADFE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AAE2D: ;
    PUSH32(esp, 0x8AE33C);
    esi = ecx;
    PUSH32(esp, 0x006AAE39u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AAE39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AAE53; /* je: equal / zero */

loc_006AAE3D: ;
    PUSH32(esp, 0x8AE334);
    ecx = esi;
    PUSH32(esp, 0x006AAE49u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AAE49: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02AF) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AAE53: ;
    POP32(esp, esi);
    MEM8(0x8F02AF) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AAE80
 * Original: 0x006AAE80 - 0x006AAEEC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AAE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AAE80: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AAEBD; /* jne: not equal / not zero */

loc_006AAE8E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AAEBD: ;
    PUSH32(esp, 0x8AE34C);
    esi = ecx;
    PUSH32(esp, 0x006AAEC9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AAEC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AAEE3; /* je: equal / zero */

loc_006AAECD: ;
    PUSH32(esp, 0x8AE344);
    ecx = esi;
    PUSH32(esp, 0x006AAED9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AAED9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02AC) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AAEE3: ;
    POP32(esp, esi);
    MEM8(0x8F02AC) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AAF10
 * Original: 0x006AAF10 - 0x006AAF7C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AAF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AAF10: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AAF4D; /* jne: not equal / not zero */

loc_006AAF1E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AAF4D: ;
    PUSH32(esp, 0x8AE35C);
    esi = ecx;
    PUSH32(esp, 0x006AAF59u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AAF59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AAF73; /* je: equal / zero */

loc_006AAF5D: ;
    PUSH32(esp, 0x8AE354);
    ecx = esi;
    PUSH32(esp, 0x006AAF69u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AAF69: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02B7) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AAF73: ;
    POP32(esp, esi);
    MEM8(0x8F02B7) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AAFA0
 * Original: 0x006AAFA0 - 0x006AB00C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AAFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AAFA0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AAFDD; /* jne: not equal / not zero */

loc_006AAFAE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AAFDD: ;
    PUSH32(esp, 0x8AE36C);
    esi = ecx;
    PUSH32(esp, 0x006AAFE9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AAFE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB003; /* je: equal / zero */

loc_006AAFED: ;
    PUSH32(esp, 0x8AE364);
    ecx = esi;
    PUSH32(esp, 0x006AAFF9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AAFF9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02B1) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB003: ;
    POP32(esp, esi);
    MEM8(0x8F02B1) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB030
 * Original: 0x006AB030 - 0x006AB09C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB030: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB06D; /* jne: not equal / not zero */

loc_006AB03E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB06D: ;
    PUSH32(esp, 0x8AE37C);
    esi = ecx;
    PUSH32(esp, 0x006AB079u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB079: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB093; /* je: equal / zero */

loc_006AB07D: ;
    PUSH32(esp, 0x8AE374);
    ecx = esi;
    PUSH32(esp, 0x006AB089u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB089: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02C1) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB093: ;
    POP32(esp, esi);
    MEM8(0x8F02C1) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB0C0
 * Original: 0x006AB0C0 - 0x006AB12C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB0C0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB0FD; /* jne: not equal / not zero */

loc_006AB0CE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB0FD: ;
    PUSH32(esp, 0x8AE38C);
    esi = ecx;
    PUSH32(esp, 0x006AB109u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB109: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB123; /* je: equal / zero */

loc_006AB10D: ;
    PUSH32(esp, 0x8AE384);
    ecx = esi;
    PUSH32(esp, 0x006AB119u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB119: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02C6) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB123: ;
    POP32(esp, esi);
    MEM8(0x8F02C6) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB150
 * Original: 0x006AB150 - 0x006AB1BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB150: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB18D; /* jne: not equal / not zero */

loc_006AB15E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB18D: ;
    PUSH32(esp, 0x8AE39C);
    esi = ecx;
    PUSH32(esp, 0x006AB199u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB199: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB1B3; /* je: equal / zero */

loc_006AB19D: ;
    PUSH32(esp, 0x8AE394);
    ecx = esi;
    PUSH32(esp, 0x006AB1A9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB1A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02AA) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB1B3: ;
    POP32(esp, esi);
    MEM8(0x8F02AA) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB1E0
 * Original: 0x006AB1E0 - 0x006AB24C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB1E0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB21D; /* jne: not equal / not zero */

loc_006AB1EE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB21D: ;
    PUSH32(esp, 0x8AE3AC);
    esi = ecx;
    PUSH32(esp, 0x006AB229u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB229: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB243; /* je: equal / zero */

loc_006AB22D: ;
    PUSH32(esp, 0x8AE3A4);
    ecx = esi;
    PUSH32(esp, 0x006AB239u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB239: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02D6) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB243: ;
    POP32(esp, esi);
    MEM8(0x8F02D6) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB270
 * Original: 0x006AB270 - 0x006AB2DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB270: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB2AD; /* jne: not equal / not zero */

loc_006AB27E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB2AD: ;
    PUSH32(esp, 0x8AE3BC);
    esi = ecx;
    PUSH32(esp, 0x006AB2B9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB2B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB2D3; /* je: equal / zero */

loc_006AB2BD: ;
    PUSH32(esp, 0x8AE3B4);
    ecx = esi;
    PUSH32(esp, 0x006AB2C9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB2C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02BC) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB2D3: ;
    POP32(esp, esi);
    MEM8(0x8F02BC) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB300
 * Original: 0x006AB300 - 0x006AB36C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB300: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB33D; /* jne: not equal / not zero */

loc_006AB30E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB33D: ;
    PUSH32(esp, 0x8AE3CC);
    esi = ecx;
    PUSH32(esp, 0x006AB349u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB349: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB363; /* je: equal / zero */

loc_006AB34D: ;
    PUSH32(esp, 0x8AE3C4);
    ecx = esi;
    PUSH32(esp, 0x006AB359u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB359: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02A1) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB363: ;
    POP32(esp, esi);
    MEM8(0x8F02A1) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB390
 * Original: 0x006AB390 - 0x006AB3FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB390: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB3CD; /* jne: not equal / not zero */

loc_006AB39E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB3CD: ;
    PUSH32(esp, 0x8AE3DC);
    esi = ecx;
    PUSH32(esp, 0x006AB3D9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB3D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB3F3; /* je: equal / zero */

loc_006AB3DD: ;
    PUSH32(esp, 0x8AE3D4);
    ecx = esi;
    PUSH32(esp, 0x006AB3E9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB3E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02B5) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB3F3: ;
    POP32(esp, esi);
    MEM8(0x8F02B5) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB420
 * Original: 0x006AB420 - 0x006AB48C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB420: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB45D; /* jne: not equal / not zero */

loc_006AB42E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB45D: ;
    PUSH32(esp, 0x8AE3EC);
    esi = ecx;
    PUSH32(esp, 0x006AB469u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB469: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB483; /* je: equal / zero */

loc_006AB46D: ;
    PUSH32(esp, 0x8AE3E4);
    ecx = esi;
    PUSH32(esp, 0x006AB479u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB479: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02CB) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB483: ;
    POP32(esp, esi);
    MEM8(0x8F02CB) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB4B0
 * Original: 0x006AB4B0 - 0x006AB51C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB4B0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB4ED; /* jne: not equal / not zero */

loc_006AB4BE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB4ED: ;
    PUSH32(esp, 0x8AE3FC);
    esi = ecx;
    PUSH32(esp, 0x006AB4F9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB4F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB513; /* je: equal / zero */

loc_006AB4FD: ;
    PUSH32(esp, 0x8AE3F4);
    ecx = esi;
    PUSH32(esp, 0x006AB509u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB509: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02D8) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB513: ;
    POP32(esp, esi);
    MEM8(0x8F02D8) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB540
 * Original: 0x006AB540 - 0x006AB5AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB540: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB57D; /* jne: not equal / not zero */

loc_006AB54E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB57D: ;
    PUSH32(esp, 0x8AE40C);
    esi = ecx;
    PUSH32(esp, 0x006AB589u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB589: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB5A3; /* je: equal / zero */

loc_006AB58D: ;
    PUSH32(esp, 0x8AE404);
    ecx = esi;
    PUSH32(esp, 0x006AB599u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB599: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02C9) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB5A3: ;
    POP32(esp, esi);
    MEM8(0x8F02C9) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB5D0
 * Original: 0x006AB5D0 - 0x006AB63C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB5D0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB60D; /* jne: not equal / not zero */

loc_006AB5DE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB60D: ;
    PUSH32(esp, 0x8AE41C);
    esi = ecx;
    PUSH32(esp, 0x006AB619u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB619: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB633; /* je: equal / zero */

loc_006AB61D: ;
    PUSH32(esp, 0x8AE414);
    ecx = esi;
    PUSH32(esp, 0x006AB629u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB629: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F029D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB633: ;
    POP32(esp, esi);
    MEM8(0x8F029D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB660
 * Original: 0x006AB660 - 0x006AB6CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB660: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB69D; /* jne: not equal / not zero */

loc_006AB66E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB69D: ;
    PUSH32(esp, 0x8AE42C);
    esi = ecx;
    PUSH32(esp, 0x006AB6A9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB6A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB6C3; /* je: equal / zero */

loc_006AB6AD: ;
    PUSH32(esp, 0x8AE424);
    ecx = esi;
    PUSH32(esp, 0x006AB6B9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB6B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F029F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB6C3: ;
    POP32(esp, esi);
    MEM8(0x8F029F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB6F0
 * Original: 0x006AB6F0 - 0x006AB75C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB6F0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB72D; /* jne: not equal / not zero */

loc_006AB6FE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB72D: ;
    PUSH32(esp, 0x8AE43C);
    esi = ecx;
    PUSH32(esp, 0x006AB739u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB739: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB753; /* je: equal / zero */

loc_006AB73D: ;
    PUSH32(esp, 0x8AE434);
    ecx = esi;
    PUSH32(esp, 0x006AB749u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB749: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02D7) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB753: ;
    POP32(esp, esi);
    MEM8(0x8F02D7) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB780
 * Original: 0x006AB780 - 0x006AB7EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB780: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB7BD; /* jne: not equal / not zero */

loc_006AB78E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB7BD: ;
    PUSH32(esp, 0x8AE44C);
    esi = ecx;
    PUSH32(esp, 0x006AB7C9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB7C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB7E3; /* je: equal / zero */

loc_006AB7CD: ;
    PUSH32(esp, 0x8AE444);
    ecx = esi;
    PUSH32(esp, 0x006AB7D9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB7D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02BE) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB7E3: ;
    POP32(esp, esi);
    MEM8(0x8F02BE) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB810
 * Original: 0x006AB810 - 0x006AB87C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB810: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB84D; /* jne: not equal / not zero */

loc_006AB81E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB84D: ;
    PUSH32(esp, 0x8AE45C);
    esi = ecx;
    PUSH32(esp, 0x006AB859u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB859: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB873; /* je: equal / zero */

loc_006AB85D: ;
    PUSH32(esp, 0x8AE454);
    ecx = esi;
    PUSH32(esp, 0x006AB869u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB869: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02C4) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB873: ;
    POP32(esp, esi);
    MEM8(0x8F02C4) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB8A0
 * Original: 0x006AB8A0 - 0x006AB90C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB8A0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB8DD; /* jne: not equal / not zero */

loc_006AB8AE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB8DD: ;
    PUSH32(esp, 0x8AE46C);
    esi = ecx;
    PUSH32(esp, 0x006AB8E9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB8E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB903; /* je: equal / zero */

loc_006AB8ED: ;
    PUSH32(esp, 0x8AE464);
    ecx = esi;
    PUSH32(esp, 0x006AB8F9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB8F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02A4) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB903: ;
    POP32(esp, esi);
    MEM8(0x8F02A4) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB930
 * Original: 0x006AB930 - 0x006AB99C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB930: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB96D; /* jne: not equal / not zero */

loc_006AB93E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB96D: ;
    PUSH32(esp, 0x8AE47C);
    esi = ecx;
    PUSH32(esp, 0x006AB979u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AB979: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AB993; /* je: equal / zero */

loc_006AB97D: ;
    PUSH32(esp, 0x8AE474);
    ecx = esi;
    PUSH32(esp, 0x006AB989u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AB989: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02B4) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AB993: ;
    POP32(esp, esi);
    MEM8(0x8F02B4) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AB9C0
 * Original: 0x006AB9C0 - 0x006ABA2C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AB9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AB9C0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AB9FD; /* jne: not equal / not zero */

loc_006AB9CE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AB9FD: ;
    PUSH32(esp, 0x8AE48C);
    esi = ecx;
    PUSH32(esp, 0x006ABA09u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006ABA09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ABA23; /* je: equal / zero */

loc_006ABA0D: ;
    PUSH32(esp, 0x8AE484);
    ecx = esi;
    PUSH32(esp, 0x006ABA19u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006ABA19: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F029E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ABA23: ;
    POP32(esp, esi);
    MEM8(0x8F029E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ABA50
 * Original: 0x006ABA50 - 0x006ABABC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ABA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ABA50: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ABA8D; /* jne: not equal / not zero */

loc_006ABA5E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006ABA8D: ;
    PUSH32(esp, 0x8AE49C);
    esi = ecx;
    PUSH32(esp, 0x006ABA99u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006ABA99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ABAB3; /* je: equal / zero */

loc_006ABA9D: ;
    PUSH32(esp, 0x8AE494);
    ecx = esi;
    PUSH32(esp, 0x006ABAA9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006ABAA9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02DE) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ABAB3: ;
    POP32(esp, esi);
    MEM8(0x8F02DE) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ABAE0
 * Original: 0x006ABAE0 - 0x006ABB4C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ABAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ABAE0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ABB1D; /* jne: not equal / not zero */

loc_006ABAEE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006ABB1D: ;
    PUSH32(esp, 0x8AE4AC);
    esi = ecx;
    PUSH32(esp, 0x006ABB29u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006ABB29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ABB43; /* je: equal / zero */

loc_006ABB2D: ;
    PUSH32(esp, 0x8AE4A4);
    ecx = esi;
    PUSH32(esp, 0x006ABB39u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006ABB39: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02BB) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ABB43: ;
    POP32(esp, esi);
    MEM8(0x8F02BB) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ABB70
 * Original: 0x006ABB70 - 0x006ABBDC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ABB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ABB70: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ABBAD; /* jne: not equal / not zero */

loc_006ABB7E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006ABBAD: ;
    PUSH32(esp, 0x8AE4BC);
    esi = ecx;
    PUSH32(esp, 0x006ABBB9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006ABBB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ABBD3; /* je: equal / zero */

loc_006ABBBD: ;
    PUSH32(esp, 0x8AE4B4);
    ecx = esi;
    PUSH32(esp, 0x006ABBC9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006ABBC9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02B0) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ABBD3: ;
    POP32(esp, esi);
    MEM8(0x8F02B0) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ABC00
 * Original: 0x006ABC00 - 0x006ABC6C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ABC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ABC00: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ABC3D; /* jne: not equal / not zero */

loc_006ABC0E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006ABC3D: ;
    PUSH32(esp, 0x8AE4CC);
    esi = ecx;
    PUSH32(esp, 0x006ABC49u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006ABC49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ABC63; /* je: equal / zero */

loc_006ABC4D: ;
    PUSH32(esp, 0x8AE4C4);
    ecx = esi;
    PUSH32(esp, 0x006ABC59u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006ABC59: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02A8) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ABC63: ;
    POP32(esp, esi);
    MEM8(0x8F02A8) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ABC90
 * Original: 0x006ABC90 - 0x006ABCFC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ABC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ABC90: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ABCCD; /* jne: not equal / not zero */

loc_006ABC9E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006ABCCD: ;
    PUSH32(esp, 0x8AE4DC);
    esi = ecx;
    PUSH32(esp, 0x006ABCD9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006ABCD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ABCF3; /* je: equal / zero */

loc_006ABCDD: ;
    PUSH32(esp, 0x8AE4D4);
    ecx = esi;
    PUSH32(esp, 0x006ABCE9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006ABCE9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02A6) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ABCF3: ;
    POP32(esp, esi);
    MEM8(0x8F02A6) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ABD20
 * Original: 0x006ABD20 - 0x006ABD8C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ABD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ABD20: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ABD5D; /* jne: not equal / not zero */

loc_006ABD2E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006ABD5D: ;
    PUSH32(esp, 0x8AE4EC);
    esi = ecx;
    PUSH32(esp, 0x006ABD69u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006ABD69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ABD83; /* je: equal / zero */

loc_006ABD6D: ;
    PUSH32(esp, 0x8AE4E4);
    ecx = esi;
    PUSH32(esp, 0x006ABD79u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006ABD79: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02CA) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ABD83: ;
    POP32(esp, esi);
    MEM8(0x8F02CA) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ABDB0
 * Original: 0x006ABDB0 - 0x006ABE1C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ABDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ABDB0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ABDED; /* jne: not equal / not zero */

loc_006ABDBE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006ABDED: ;
    PUSH32(esp, 0x8AE4FC);
    esi = ecx;
    PUSH32(esp, 0x006ABDF9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006ABDF9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ABE13; /* je: equal / zero */

loc_006ABDFD: ;
    PUSH32(esp, 0x8AE4F4);
    ecx = esi;
    PUSH32(esp, 0x006ABE09u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006ABE09: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02D1) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ABE13: ;
    POP32(esp, esi);
    MEM8(0x8F02D1) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ABE40
 * Original: 0x006ABE40 - 0x006ABEAC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ABE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ABE40: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ABE7D; /* jne: not equal / not zero */

loc_006ABE4E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006ABE7D: ;
    PUSH32(esp, 0x8AE50C);
    esi = ecx;
    PUSH32(esp, 0x006ABE89u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006ABE89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ABEA3; /* je: equal / zero */

loc_006ABE8D: ;
    PUSH32(esp, 0x8AE504);
    ecx = esi;
    PUSH32(esp, 0x006ABE99u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006ABE99: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02BF) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ABEA3: ;
    POP32(esp, esi);
    MEM8(0x8F02BF) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ABED0
 * Original: 0x006ABED0 - 0x006ABF3C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ABED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ABED0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ABF0D; /* jne: not equal / not zero */

loc_006ABEDE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006ABF0D: ;
    PUSH32(esp, 0x8AE51C);
    esi = ecx;
    PUSH32(esp, 0x006ABF19u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006ABF19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ABF33; /* je: equal / zero */

loc_006ABF1D: ;
    PUSH32(esp, 0x8AE514);
    ecx = esi;
    PUSH32(esp, 0x006ABF29u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006ABF29: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02DB) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ABF33: ;
    POP32(esp, esi);
    MEM8(0x8F02DB) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ABF60
 * Original: 0x006ABF60 - 0x006ABFCC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ABF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ABF60: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ABF9D; /* jne: not equal / not zero */

loc_006ABF6E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006ABF9D: ;
    PUSH32(esp, 0x8AE52C);
    esi = ecx;
    PUSH32(esp, 0x006ABFA9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006ABFA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ABFC3; /* je: equal / zero */

loc_006ABFAD: ;
    PUSH32(esp, 0x8AE524);
    ecx = esi;
    PUSH32(esp, 0x006ABFB9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006ABFB9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02DA) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ABFC3: ;
    POP32(esp, esi);
    MEM8(0x8F02DA) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ABFF0
 * Original: 0x006ABFF0 - 0x006AC05C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ABFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ABFF0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC02D; /* jne: not equal / not zero */

loc_006ABFFE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AC02D: ;
    PUSH32(esp, 0x8AE53C);
    esi = ecx;
    PUSH32(esp, 0x006AC039u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AC039: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC053; /* je: equal / zero */

loc_006AC03D: ;
    PUSH32(esp, 0x8AE534);
    ecx = esi;
    PUSH32(esp, 0x006AC049u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AC049: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F029B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC053: ;
    POP32(esp, esi);
    MEM8(0x8F029B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC080
 * Original: 0x006AC080 - 0x006AC0EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC080: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC0BD; /* jne: not equal / not zero */

loc_006AC08E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AC0BD: ;
    PUSH32(esp, 0x8AE54C);
    esi = ecx;
    PUSH32(esp, 0x006AC0C9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AC0C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC0E3; /* je: equal / zero */

loc_006AC0CD: ;
    PUSH32(esp, 0x8AE544);
    ecx = esi;
    PUSH32(esp, 0x006AC0D9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AC0D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02A5) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC0E3: ;
    POP32(esp, esi);
    MEM8(0x8F02A5) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC110
 * Original: 0x006AC110 - 0x006AC17C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC110: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC14D; /* jne: not equal / not zero */

loc_006AC11E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AC14D: ;
    PUSH32(esp, 0x8AE55C);
    esi = ecx;
    PUSH32(esp, 0x006AC159u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AC159: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC173; /* je: equal / zero */

loc_006AC15D: ;
    PUSH32(esp, 0x8AE554);
    ecx = esi;
    PUSH32(esp, 0x006AC169u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AC169: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02B6) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC173: ;
    POP32(esp, esi);
    MEM8(0x8F02B6) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC1A0
 * Original: 0x006AC1A0 - 0x006AC20C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC1A0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC1DD; /* jne: not equal / not zero */

loc_006AC1AE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AC1DD: ;
    PUSH32(esp, 0x8AE56C);
    esi = ecx;
    PUSH32(esp, 0x006AC1E9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AC1E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC203; /* je: equal / zero */

loc_006AC1ED: ;
    PUSH32(esp, 0x8AE564);
    ecx = esi;
    PUSH32(esp, 0x006AC1F9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AC1F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02D3) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC203: ;
    POP32(esp, esi);
    MEM8(0x8F02D3) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC230
 * Original: 0x006AC230 - 0x006AC29C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC230: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC26D; /* jne: not equal / not zero */

loc_006AC23E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AC26D: ;
    PUSH32(esp, 0x8AE57C);
    esi = ecx;
    PUSH32(esp, 0x006AC279u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AC279: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC293; /* je: equal / zero */

loc_006AC27D: ;
    PUSH32(esp, 0x8AE574);
    ecx = esi;
    PUSH32(esp, 0x006AC289u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AC289: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02DC) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC293: ;
    POP32(esp, esi);
    MEM8(0x8F02DC) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC2C0
 * Original: 0x006AC2C0 - 0x006AC32C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC2C0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC2FD; /* jne: not equal / not zero */

loc_006AC2CE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AC2FD: ;
    PUSH32(esp, 0x8AE58C);
    esi = ecx;
    PUSH32(esp, 0x006AC309u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AC309: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC323; /* je: equal / zero */

loc_006AC30D: ;
    PUSH32(esp, 0x8AE584);
    ecx = esi;
    PUSH32(esp, 0x006AC319u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AC319: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02AB) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC323: ;
    POP32(esp, esi);
    MEM8(0x8F02AB) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC350
 * Original: 0x006AC350 - 0x006AC3BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC350: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC38D; /* jne: not equal / not zero */

loc_006AC35E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AC38D: ;
    PUSH32(esp, 0x8AE59C);
    esi = ecx;
    PUSH32(esp, 0x006AC399u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AC399: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC3B3; /* je: equal / zero */

loc_006AC39D: ;
    PUSH32(esp, 0x8AE594);
    ecx = esi;
    PUSH32(esp, 0x006AC3A9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AC3A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02AD) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC3B3: ;
    POP32(esp, esi);
    MEM8(0x8F02AD) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC3E0
 * Original: 0x006AC3E0 - 0x006AC44C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC3E0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC41D; /* jne: not equal / not zero */

loc_006AC3EE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AC41D: ;
    PUSH32(esp, 0x8AE5AC);
    esi = ecx;
    PUSH32(esp, 0x006AC429u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AC429: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC443; /* je: equal / zero */

loc_006AC42D: ;
    PUSH32(esp, 0x8AE5A4);
    ecx = esi;
    PUSH32(esp, 0x006AC439u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AC439: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02C8) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC443: ;
    POP32(esp, esi);
    MEM8(0x8F02C8) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC470
 * Original: 0x006AC470 - 0x006AC4DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC470: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC4AD; /* jne: not equal / not zero */

loc_006AC47E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AC4AD: ;
    PUSH32(esp, 0x8AE5BC);
    esi = ecx;
    PUSH32(esp, 0x006AC4B9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AC4B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC4D3; /* je: equal / zero */

loc_006AC4BD: ;
    PUSH32(esp, 0x8AE5B4);
    ecx = esi;
    PUSH32(esp, 0x006AC4C9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AC4C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02BD) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC4D3: ;
    POP32(esp, esi);
    MEM8(0x8F02BD) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC500
 * Original: 0x006AC500 - 0x006AC56C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC500: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC53D; /* jne: not equal / not zero */

loc_006AC50E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AC53D: ;
    PUSH32(esp, 0x8AE5CC);
    esi = ecx;
    PUSH32(esp, 0x006AC549u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AC549: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC563; /* je: equal / zero */

loc_006AC54D: ;
    PUSH32(esp, 0x8AE5C4);
    ecx = esi;
    PUSH32(esp, 0x006AC559u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AC559: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02DD) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC563: ;
    POP32(esp, esi);
    MEM8(0x8F02DD) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC590
 * Original: 0x006AC590 - 0x006AC5FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC590: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC5CD; /* jne: not equal / not zero */

loc_006AC59E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AC5CD: ;
    PUSH32(esp, 0x8AE5DC);
    esi = ecx;
    PUSH32(esp, 0x006AC5D9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AC5D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC5F3; /* je: equal / zero */

loc_006AC5DD: ;
    PUSH32(esp, 0x8AE5D4);
    ecx = esi;
    PUSH32(esp, 0x006AC5E9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AC5E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02D5) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC5F3: ;
    POP32(esp, esi);
    MEM8(0x8F02D5) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC620
 * Original: 0x006AC620 - 0x006AC68C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC620: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC65D; /* jne: not equal / not zero */

loc_006AC62E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AC65D: ;
    PUSH32(esp, 0x8AE5EC);
    esi = ecx;
    PUSH32(esp, 0x006AC669u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AC669: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC683; /* je: equal / zero */

loc_006AC66D: ;
    PUSH32(esp, 0x8AE5E4);
    ecx = esi;
    PUSH32(esp, 0x006AC679u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AC679: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02B8) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC683: ;
    POP32(esp, esi);
    MEM8(0x8F02B8) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC6B0
 * Original: 0x006AC6B0 - 0x006AC71C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC6B0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC6ED; /* jne: not equal / not zero */

loc_006AC6BE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006AC6ED: ;
    PUSH32(esp, 0x8AE5FC);
    esi = ecx;
    PUSH32(esp, 0x006AC6F9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AC6F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC713; /* je: equal / zero */

loc_006AC6FD: ;
    PUSH32(esp, 0x8AE5F4);
    ecx = esi;
    PUSH32(esp, 0x006AC709u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AC709: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02BA) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC713: ;
    POP32(esp, esi);
    MEM8(0x8F02BA) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC740
 * Original: 0x006AC740 - 0x006AC7AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC740: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC77D; /* jne: not equal / not zero */

loc_006AC74E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006AC77D: ;
    PUSH32(esp, 0x8AE71C);
    esi = ecx;
    PUSH32(esp, 0x006AC789u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006AC789: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC7A3; /* je: equal / zero */

loc_006AC78D: ;
    PUSH32(esp, 0x8AE714);
    ecx = esi;
    PUSH32(esp, 0x006AC799u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006AC799: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02F0) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC7A3: ;
    POP32(esp, esi);
    MEM8(0x8F02F0) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC7D0
 * Original: 0x006AC7D0 - 0x006AC83C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC7D0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC80D; /* jne: not equal / not zero */

loc_006AC7DE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006AC80D: ;
    PUSH32(esp, 0x8AE72C);
    esi = ecx;
    PUSH32(esp, 0x006AC819u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006AC819: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC833; /* je: equal / zero */

loc_006AC81D: ;
    PUSH32(esp, 0x8AE724);
    ecx = esi;
    PUSH32(esp, 0x006AC829u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006AC829: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02EE) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC833: ;
    POP32(esp, esi);
    MEM8(0x8F02EE) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC860
 * Original: 0x006AC860 - 0x006AC8CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC860: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC89D; /* jne: not equal / not zero */

loc_006AC86E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006AC89D: ;
    PUSH32(esp, 0x8AE73C);
    esi = ecx;
    PUSH32(esp, 0x006AC8A9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006AC8A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC8C3; /* je: equal / zero */

loc_006AC8AD: ;
    PUSH32(esp, 0x8AE734);
    ecx = esi;
    PUSH32(esp, 0x006AC8B9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006AC8B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02EC) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC8C3: ;
    POP32(esp, esi);
    MEM8(0x8F02EC) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC8F0
 * Original: 0x006AC8F0 - 0x006AC95C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC8F0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC92D; /* jne: not equal / not zero */

loc_006AC8FE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006AC92D: ;
    PUSH32(esp, 0x8AE74C);
    esi = ecx;
    PUSH32(esp, 0x006AC939u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006AC939: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC953; /* je: equal / zero */

loc_006AC93D: ;
    PUSH32(esp, 0x8AE744);
    ecx = esi;
    PUSH32(esp, 0x006AC949u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006AC949: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02F6) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC953: ;
    POP32(esp, esi);
    MEM8(0x8F02F6) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AC980
 * Original: 0x006AC980 - 0x006AC9EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AC980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AC980: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006AC9BD; /* jne: not equal / not zero */

loc_006AC98E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006AC9BD: ;
    PUSH32(esp, 0x8AE75C);
    esi = ecx;
    PUSH32(esp, 0x006AC9C9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006AC9C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AC9E3; /* je: equal / zero */

loc_006AC9CD: ;
    PUSH32(esp, 0x8AE754);
    ecx = esi;
    PUSH32(esp, 0x006AC9D9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006AC9D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02F9) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006AC9E3: ;
    POP32(esp, esi);
    MEM8(0x8F02F9) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ACA10
 * Original: 0x006ACA10 - 0x006ACA7C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ACA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ACA10: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ACA4D; /* jne: not equal / not zero */

loc_006ACA1E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006ACA4D: ;
    PUSH32(esp, 0x8AE76C);
    esi = ecx;
    PUSH32(esp, 0x006ACA59u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006ACA59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ACA73; /* je: equal / zero */

loc_006ACA5D: ;
    PUSH32(esp, 0x8AE764);
    ecx = esi;
    PUSH32(esp, 0x006ACA69u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006ACA69: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02EF) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ACA73: ;
    POP32(esp, esi);
    MEM8(0x8F02EF) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ACAA0
 * Original: 0x006ACAA0 - 0x006ACB0C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ACAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ACAA0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ACADD; /* jne: not equal / not zero */

loc_006ACAAE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006ACADD: ;
    PUSH32(esp, 0x8AE77C);
    esi = ecx;
    PUSH32(esp, 0x006ACAE9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006ACAE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ACB03; /* je: equal / zero */

loc_006ACAED: ;
    PUSH32(esp, 0x8AE774);
    ecx = esi;
    PUSH32(esp, 0x006ACAF9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006ACAF9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02F3) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ACB03: ;
    POP32(esp, esi);
    MEM8(0x8F02F3) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ACB30
 * Original: 0x006ACB30 - 0x006ACB9C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ACB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ACB30: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ACB6D; /* jne: not equal / not zero */

loc_006ACB3E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006ACB6D: ;
    PUSH32(esp, 0x8AE78C);
    esi = ecx;
    PUSH32(esp, 0x006ACB79u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006ACB79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ACB93; /* je: equal / zero */

loc_006ACB7D: ;
    PUSH32(esp, 0x8AE784);
    ecx = esi;
    PUSH32(esp, 0x006ACB89u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006ACB89: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02F8) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ACB93: ;
    POP32(esp, esi);
    MEM8(0x8F02F8) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ACBC0
 * Original: 0x006ACBC0 - 0x006ACC2C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ACBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ACBC0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ACBFD; /* jne: not equal / not zero */

loc_006ACBCE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006ACBFD: ;
    PUSH32(esp, 0x8AE79C);
    esi = ecx;
    PUSH32(esp, 0x006ACC09u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006ACC09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ACC23; /* je: equal / zero */

loc_006ACC0D: ;
    PUSH32(esp, 0x8AE794);
    ecx = esi;
    PUSH32(esp, 0x006ACC19u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006ACC19: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02F1) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ACC23: ;
    POP32(esp, esi);
    MEM8(0x8F02F1) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ACC50
 * Original: 0x006ACC50 - 0x006ACCBC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ACC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ACC50: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ACC8D; /* jne: not equal / not zero */

loc_006ACC5E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006ACC8D: ;
    PUSH32(esp, 0x8AE7AC);
    esi = ecx;
    PUSH32(esp, 0x006ACC99u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006ACC99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ACCB3; /* je: equal / zero */

loc_006ACC9D: ;
    PUSH32(esp, 0x8AE7A4);
    ecx = esi;
    PUSH32(esp, 0x006ACCA9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006ACCA9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02F4) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ACCB3: ;
    POP32(esp, esi);
    MEM8(0x8F02F4) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ACCE0
 * Original: 0x006ACCE0 - 0x006ACD4C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ACCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ACCE0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ACD1D; /* jne: not equal / not zero */

loc_006ACCEE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006ACD1D: ;
    PUSH32(esp, 0x8AE7BC);
    esi = ecx;
    PUSH32(esp, 0x006ACD29u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006ACD29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ACD43; /* je: equal / zero */

loc_006ACD2D: ;
    PUSH32(esp, 0x8AE7B4);
    ecx = esi;
    PUSH32(esp, 0x006ACD39u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006ACD39: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02ED) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ACD43: ;
    POP32(esp, esi);
    MEM8(0x8F02ED) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ACD70
 * Original: 0x006ACD70 - 0x006ACDDC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ACD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ACD70: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ACDAD; /* jne: not equal / not zero */

loc_006ACD7E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006ACDAD: ;
    PUSH32(esp, 0x8AE7CC);
    esi = ecx;
    PUSH32(esp, 0x006ACDB9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006ACDB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ACDD3; /* je: equal / zero */

loc_006ACDBD: ;
    PUSH32(esp, 0x8AE7C4);
    ecx = esi;
    PUSH32(esp, 0x006ACDC9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006ACDC9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02F5) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ACDD3: ;
    POP32(esp, esi);
    MEM8(0x8F02F5) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ACE00
 * Original: 0x006ACE00 - 0x006ACE6C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ACE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ACE00: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ACE3D; /* jne: not equal / not zero */

loc_006ACE0E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006ACE3D: ;
    PUSH32(esp, 0x8AE7DC);
    esi = ecx;
    PUSH32(esp, 0x006ACE49u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006ACE49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ACE63; /* je: equal / zero */

loc_006ACE4D: ;
    PUSH32(esp, 0x8AE7D4);
    ecx = esi;
    PUSH32(esp, 0x006ACE59u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006ACE59: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02F2) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ACE63: ;
    POP32(esp, esi);
    MEM8(0x8F02F2) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ACE90
 * Original: 0x006ACE90 - 0x006ACEFC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ACE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ACE90: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006ACECD; /* jne: not equal / not zero */

loc_006ACE9E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006ACECD: ;
    PUSH32(esp, 0x8AE7EC);
    esi = ecx;
    PUSH32(esp, 0x006ACED9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006ACED9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006ACEF3; /* je: equal / zero */

loc_006ACEDD: ;
    PUSH32(esp, 0x8AE7E4);
    ecx = esi;
    PUSH32(esp, 0x006ACEE9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006ACEE9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F02F7) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006ACEF3: ;
    POP32(esp, esi);
    MEM8(0x8F02F7) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006ACF20
 * Original: 0x006ACF20 - 0x006ACF7E (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ACF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ACF20: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA254);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B1D9C)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0458);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006ACF70u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006ACF70: ;
    PUSH32(esp, 0x6B67E0);
    PUSH32(esp, 0x006ACF7Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006ACF7A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006ACFA0
 * Original: 0x006ACFA0 - 0x006ACFFE (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ACFA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ACFA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA27C);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7DA278)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F03E4);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006ACFF0u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006ACFF0: ;
    PUSH32(esp, 0x6B6580);
    PUSH32(esp, 0x006ACFFAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006ACFFA: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD020
 * Original: 0x006AD020 - 0x006AD071 (81 bytes, 21 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD020: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7DA2A0);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, 0x8F03F4);
    MEM32(esp + 0x28) = 0x32;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x24) = 0x19;
    PUSH32(esp, 0x006AD063u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD063: ;
    PUSH32(esp, 0x6B67F0);
    PUSH32(esp, 0x006AD06Du); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD06D: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD090
 * Original: 0x006AD090 - 0x006AD0F3 (99 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD090: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7AB1C8)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    PUSH32(esp, 0x7DA2C4);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0430);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD0E5u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD0E5: ;
    PUSH32(esp, 0x6B6590);
    PUSH32(esp, 0x006AD0EFu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD0EF: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD110
 * Original: 0x006AD110 - 0x006AD16E (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD110: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA2E0);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F041C);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD160u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD160: ;
    PUSH32(esp, 0x6B65A0);
    PUSH32(esp, 0x006AD16Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD16A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD190
 * Original: 0x006AD190 - 0x006AD1EE (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD190: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA2FC);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0428);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD1E0u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD1E0: ;
    PUSH32(esp, 0x6B65B0);
    PUSH32(esp, 0x006AD1EAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD1EA: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD210
 * Original: 0x006AD210 - 0x006AD26E (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD210: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA318);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD374)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F045C);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD260u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD260: ;
    PUSH32(esp, 0x6B65C0);
    PUSH32(esp, 0x006AD26Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD26A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD290
 * Original: 0x006AD290 - 0x006AD2EE (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD290: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA340);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7DA33C)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F043C);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD2E0u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD2E0: ;
    PUSH32(esp, 0x6B65D0);
    PUSH32(esp, 0x006AD2EAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD2EA: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD310
 * Original: 0x006AD310 - 0x006AD36E (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD310: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7B0478)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA364);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD448)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0438);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD360u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD360: ;
    PUSH32(esp, 0x6B65E0);
    PUSH32(esp, 0x006AD36Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD36A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD390
 * Original: 0x006AD390 - 0x006AD3EE (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD390: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7B0478)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA394);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0414);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD3E0u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD3E0: ;
    PUSH32(esp, 0x6B65F0);
    PUSH32(esp, 0x006AD3EAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD3EA: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD410
 * Original: 0x006AD410 - 0x006AD46E (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD410: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7AB8B0)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA3C4);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD318)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0448);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD460u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD460: ;
    PUSH32(esp, 0x6B6600);
    PUSH32(esp, 0x006AD46Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD46A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD490
 * Original: 0x006AD490 - 0x006AD4EE (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD490: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7AB8B0)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA3F0);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD318)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F03E0);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD4E0u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD4E0: ;
    PUSH32(esp, 0x6B6610);
    PUSH32(esp, 0x006AD4EAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD4EA: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD510
 * Original: 0x006AD510 - 0x006AD56E (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD510: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA420);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0400);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD560u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD560: ;
    PUSH32(esp, 0x6B6620);
    PUSH32(esp, 0x006AD56Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD56A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD590
 * Original: 0x006AD590 - 0x006AD5EE (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD590: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA454);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7DA450)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0418);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD5E0u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD5E0: ;
    PUSH32(esp, 0x6B6630);
    PUSH32(esp, 0x006AD5EAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD5EA: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD610
 * Original: 0x006AD610 - 0x006AD66E (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD610: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7B0478)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA484);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD44C)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F03EC);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD660u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD660: ;
    PUSH32(esp, 0x6B6640);
    PUSH32(esp, 0x006AD66Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD66A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD690
 * Original: 0x006AD690 - 0x006AD6EE (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD690: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7B0478)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA4B4);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD318)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F042C);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD6E0u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD6E0: ;
    PUSH32(esp, 0x6B6650);
    PUSH32(esp, 0x006AD6EAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD6EA: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD710
 * Original: 0x006AD710 - 0x006AD761 (81 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD710: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7DA4E4);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, 0x8F03DC);
    MEM32(esp + 0x28) = 0x384;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x24) = 0x78;
    PUSH32(esp, 0x006AD753u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD753: ;
    PUSH32(esp, 0x6B6660);
    PUSH32(esp, 0x006AD75Du); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD75D: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD780
 * Original: 0x006AD780 - 0x006AD7DE (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD780: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA518);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD438)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0410);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD7D0u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD7D0: ;
    PUSH32(esp, 0x6B6670);
    PUSH32(esp, 0x006AD7DAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD7DA: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD800
 * Original: 0x006AD800 - 0x006AD85E (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD800: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7B1DE4)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA544);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD44C)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F03D4);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD850u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD850: ;
    PUSH32(esp, 0x6B6680);
    PUSH32(esp, 0x006AD85Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD85A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD880
 * Original: 0x006AD880 - 0x006AD8DE (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD880: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7B0478)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA570);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B1DE4)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0454);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD8D0u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD8D0: ;
    PUSH32(esp, 0x6B6690);
    PUSH32(esp, 0x006AD8DAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD8DA: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD900
 * Original: 0x006AD900 - 0x006AD956 (86 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD900: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7DA59C);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F03F8);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD948u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD948: ;
    PUSH32(esp, 0x6B66A0);
    PUSH32(esp, 0x006AD952u); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD952: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD970
 * Original: 0x006AD970 - 0x006AD9CE (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD970: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7AD3D4)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA5D4);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD318)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0470);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AD9C0u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AD9C0: ;
    PUSH32(esp, 0x6B66B0);
    PUSH32(esp, 0x006AD9CAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AD9CA: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AD9F0
 * Original: 0x006AD9F0 - 0x006ADA4E (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AD9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AD9F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7AD3D4)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA600);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD318)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F03F0);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006ADA40u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006ADA40: ;
    PUSH32(esp, 0x6B66C0);
    PUSH32(esp, 0x006ADA4Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006ADA4A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006ADA70
 * Original: 0x006ADA70 - 0x006ADAD3 (99 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ADA70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ADA70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7B0478)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD448)); /* movss */
    PUSH32(esp, 0x7DA62C);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD328)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0450);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006ADAC5u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006ADAC5: ;
    PUSH32(esp, 0x6B66D0);
    PUSH32(esp, 0x006ADACFu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006ADACF: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006ADAF0
 * Original: 0x006ADAF0 - 0x006ADB4E (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ADAF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ADAF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA660);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD310)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0434);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006ADB40u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006ADB40: ;
    PUSH32(esp, 0x6B66E0);
    PUSH32(esp, 0x006ADB4Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006ADB4A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006ADB70
 * Original: 0x006ADB70 - 0x006ADBD3 (99 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ADB70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ADB70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9EC0)); /* movss */
    PUSH32(esp, 0x7DA6A8);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0468);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006ADBC5u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006ADBC5: ;
    PUSH32(esp, 0x6B66F0);
    PUSH32(esp, 0x006ADBCFu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006ADBCF: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006ADBF0
 * Original: 0x006ADBF0 - 0x006ADC53 (99 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ADBF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ADBF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9EC0)); /* movss */
    PUSH32(esp, 0x7DA6DC);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0464);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006ADC45u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006ADC45: ;
    PUSH32(esp, 0x6B6700);
    PUSH32(esp, 0x006ADC4Fu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006ADC4F: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006ADC70
 * Original: 0x006ADC70 - 0x006ADCD3 (99 bytes, 24 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ADC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ADC70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7AB1C8)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    PUSH32(esp, 0x7DA714);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0420);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006ADCC5u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006ADCC5: ;
    PUSH32(esp, 0x6B6710);
    PUSH32(esp, 0x006ADCCFu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006ADCCF: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006ADCF0
 * Original: 0x006ADCF0 - 0x006ADD41 (81 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ADCF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ADCF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7DA744);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, 0x8F044C);
    MEM32(esp + 0x28) = 0x3C;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x24) = 0xA;
    PUSH32(esp, 0x006ADD33u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006ADD33: ;
    PUSH32(esp, 0x6B6720);
    PUSH32(esp, 0x006ADD3Du); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006ADD3D: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006ADD60
 * Original: 0x006ADD60 - 0x006ADDB1 (81 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ADD60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ADD60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7DA75C);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, 0x8F0444);
    MEM32(esp + 0x28) = 0x3C;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x24) = 0xA;
    PUSH32(esp, 0x006ADDA3u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006ADDA3: ;
    PUSH32(esp, 0x6B6730);
    PUSH32(esp, 0x006ADDADu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006ADDAD: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006ADDD0
 * Original: 0x006ADDD0 - 0x006ADE1D (77 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ADDD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ADDD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x64;
    MEM32(esp + 4) = eax;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7DA774);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, 0x8F03E8);
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x006ADE0Fu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006ADE0F: ;
    PUSH32(esp, 0x6B6740);
    PUSH32(esp, 0x006ADE19u); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006ADE19: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006ADE30
 * Original: 0x006ADE30 - 0x006ADE8E (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ADE30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ADE30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7B0478)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA798);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD318)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0460);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006ADE80u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006ADE80: ;
    PUSH32(esp, 0x6B6750);
    PUSH32(esp, 0x006ADE8Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006ADE8A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006ADEB0
 * Original: 0x006ADEB0 - 0x006ADF0E (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ADEB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ADEB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7B0478)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA7B0);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD44C)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0408);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006ADF00u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006ADF00: ;
    PUSH32(esp, 0x6B6760);
    PUSH32(esp, 0x006ADF0Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006ADF0A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006ADF30
 * Original: 0x006ADF30 - 0x006ADF8E (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ADF30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ADF30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA7D8);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0424);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006ADF80u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006ADF80: ;
    PUSH32(esp, 0x6B6770);
    PUSH32(esp, 0x006ADF8Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006ADF8A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006ADFB0
 * Original: 0x006ADFB0 - 0x006AE00E (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006ADFB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006ADFB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA800);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0440);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AE000u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AE000: ;
    PUSH32(esp, 0x6B6780);
    PUSH32(esp, 0x006AE00Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AE00A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AE030
 * Original: 0x006AE030 - 0x006AE08E (94 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE030: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x7DA828);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB8B0)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F03FC);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AE080u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AE080: ;
    PUSH32(esp, 0x6B6790);
    PUSH32(esp, 0x006AE08Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AE08A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AE0B0
 * Original: 0x006AE0B0 - 0x006AE113 (99 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE0B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE0B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD340)); /* movss */
    PUSH32(esp, 0x7DA864);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7DA860)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F046C);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AE105u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AE105: ;
    PUSH32(esp, 0x6B67A0);
    PUSH32(esp, 0x006AE10Fu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AE10F: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AE130
 * Original: 0x006AE130 - 0x006AE193 (99 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE130: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD340)); /* movss */
    PUSH32(esp, 0x7DA890);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F040C);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AE185u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AE185: ;
    PUSH32(esp, 0x6B67B0);
    PUSH32(esp, 0x006AE18Fu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AE18F: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AE1B0
 * Original: 0x006AE1B0 - 0x006AE213 (99 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE1B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE1B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD340)); /* movss */
    PUSH32(esp, 0x7DA8B8);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F0404);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AE205u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AE205: ;
    PUSH32(esp, 0x6B67C0);
    PUSH32(esp, 0x006AE20Fu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AE20F: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AE230
 * Original: 0x006AE230 - 0x006AE293 (99 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE230: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB2D0)); /* movss */
    PUSH32(esp, 0x7DA8E8);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, 0x8F03D8);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x006AE285u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_006AE285: ;
    PUSH32(esp, 0x6B67D0);
    PUSH32(esp, 0x006AE28Fu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AE28F: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AE2B0
 * Original: 0x006AE2B0 - 0x006AE2C6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE2B0(void)
{

loc_006AE2B0: ;
    ecx = 0x8F057A;
    PUSH32(esp, 0x006AE2BAu); RECOMP_ABI_CALL(0x0002312Eu, sub_0002312E); /* call 0x0002312E */

loc_006AE2BA: ;
    PUSH32(esp, 0x6B6800);
    PUSH32(esp, 0x006AE2C4u); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AE2C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE2D0
 * Original: 0x006AE2D0 - 0x006AE2EA (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE2D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE2D0: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x7DB35C);
    PUSH32(esp, 0x7DB34C);
    PUSH32(esp, 0x006AE2E1u); RECOMP_ABI_CALL(0x00034339u, sub_00034339); /* call 0x00034339 */

loc_006AE2E1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F0648) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_006AE2F0
 * Original: 0x006AE2F0 - 0x006AE334 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE2F0: ;
    ecx = MEM32(0x8E8E14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006AE305; /* jne: not equal / not zero */

loc_006AE2FA: ;
    PUSH32(esp, 0x006AE2FFu); RECOMP_ABI_CALL(0x00015524u, sub_00015524); /* call 0x00015524 */

loc_006AE2FF: ;
    ecx = MEM32(0x8E8E14);

loc_006AE305: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AEB1C);
    esi = ecx;
    PUSH32(esp, 0x006AE312u); RECOMP_ABI_CALL(0x0001F28Bu, sub_0001F28B); /* call 0x0001F28B */

loc_006AE312: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AE32B; /* je: equal / zero */

loc_006AE316: ;
    PUSH32(esp, 0x8AEB14);
    ecx = esi;
    PUSH32(esp, 0x006AE322u); RECOMP_ABI_CALL(0x0001BF91u, sub_0001BF91); /* call 0x0001BF91 */

loc_006AE322: ;
    SET_LO8(eax, 1);
    MEM8(0x8F065D) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006AE32B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F065D) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE350
 * Original: 0x006AE350 - 0x006AE394 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE350: ;
    ecx = MEM32(0x8E8DB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006AE365; /* jne: not equal / not zero */

loc_006AE35A: ;
    PUSH32(esp, 0x006AE35Fu); RECOMP_ABI_CALL(0x00033961u, sub_00033961); /* call 0x00033961 */

loc_006AE35F: ;
    ecx = MEM32(0x8E8DB4);

loc_006AE365: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AEB2C);
    esi = ecx;
    PUSH32(esp, 0x006AE372u); RECOMP_ABI_CALL(0x00012897u, sub_00012897); /* call 0x00012897 */

loc_006AE372: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AE38B; /* je: equal / zero */

loc_006AE376: ;
    PUSH32(esp, 0x8AEB24);
    ecx = esi;
    PUSH32(esp, 0x006AE382u); RECOMP_ABI_CALL(0x00020A7Du, sub_00020A7D); /* call 0x00020A7D */

loc_006AE382: ;
    SET_LO8(eax, 1);
    MEM8(0x8F0661) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006AE38B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F0661) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE3B0
 * Original: 0x006AE3B0 - 0x006AE3F4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE3B0: ;
    ecx = MEM32(0x8E8DB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006AE3C5; /* jne: not equal / not zero */

loc_006AE3BA: ;
    PUSH32(esp, 0x006AE3BFu); RECOMP_ABI_CALL(0x00033961u, sub_00033961); /* call 0x00033961 */

loc_006AE3BF: ;
    ecx = MEM32(0x8E8DB4);

loc_006AE3C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AEB3C);
    esi = ecx;
    PUSH32(esp, 0x006AE3D2u); RECOMP_ABI_CALL(0x00012897u, sub_00012897); /* call 0x00012897 */

loc_006AE3D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AE3EB; /* je: equal / zero */

loc_006AE3D6: ;
    PUSH32(esp, 0x8AEB34);
    ecx = esi;
    PUSH32(esp, 0x006AE3E2u); RECOMP_ABI_CALL(0x00020A7Du, sub_00020A7D); /* call 0x00020A7D */

loc_006AE3E2: ;
    SET_LO8(eax, 1);
    MEM8(0x8F065F) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006AE3EB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F065F) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE410
 * Original: 0x006AE410 - 0x006AE454 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE410: ;
    ecx = MEM32(0x8E8DB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006AE425; /* jne: not equal / not zero */

loc_006AE41A: ;
    PUSH32(esp, 0x006AE41Fu); RECOMP_ABI_CALL(0x00033961u, sub_00033961); /* call 0x00033961 */

loc_006AE41F: ;
    ecx = MEM32(0x8E8DB4);

loc_006AE425: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AEB4C);
    esi = ecx;
    PUSH32(esp, 0x006AE432u); RECOMP_ABI_CALL(0x00012897u, sub_00012897); /* call 0x00012897 */

loc_006AE432: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AE44B; /* je: equal / zero */

loc_006AE436: ;
    PUSH32(esp, 0x8AEB44);
    ecx = esi;
    PUSH32(esp, 0x006AE442u); RECOMP_ABI_CALL(0x00020A7Du, sub_00020A7D); /* call 0x00020A7D */

loc_006AE442: ;
    SET_LO8(eax, 1);
    MEM8(0x8F0660) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006AE44B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F0660) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE470
 * Original: 0x006AE470 - 0x006AE4B4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE470: ;
    ecx = MEM32(0x8E8D54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006AE485; /* jne: not equal / not zero */

loc_006AE47A: ;
    PUSH32(esp, 0x006AE47Fu); RECOMP_ABI_CALL(0x0002CDFFu, sub_0002CDFF); /* call 0x0002CDFF */

loc_006AE47F: ;
    ecx = MEM32(0x8E8D54);

loc_006AE485: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AEB5C);
    esi = ecx;
    PUSH32(esp, 0x006AE492u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AE492: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AE4AB; /* je: equal / zero */

loc_006AE496: ;
    PUSH32(esp, 0x8AEB54);
    ecx = esi;
    PUSH32(esp, 0x006AE4A2u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AE4A2: ;
    SET_LO8(eax, 1);
    MEM8(0x8F065A) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006AE4AB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F065A) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE4D0
 * Original: 0x006AE4D0 - 0x006AE514 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE4D0: ;
    ecx = MEM32(0x8E8D54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006AE4E5; /* jne: not equal / not zero */

loc_006AE4DA: ;
    PUSH32(esp, 0x006AE4DFu); RECOMP_ABI_CALL(0x0002CDFFu, sub_0002CDFF); /* call 0x0002CDFF */

loc_006AE4DF: ;
    ecx = MEM32(0x8E8D54);

loc_006AE4E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AEB6C);
    esi = ecx;
    PUSH32(esp, 0x006AE4F2u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AE4F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AE50B; /* je: equal / zero */

loc_006AE4F6: ;
    PUSH32(esp, 0x8AEB64);
    ecx = esi;
    PUSH32(esp, 0x006AE502u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AE502: ;
    SET_LO8(eax, 1);
    MEM8(0x8F065E) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006AE50B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F065E) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE530
 * Original: 0x006AE530 - 0x006AE574 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE530: ;
    ecx = MEM32(0x8E8D54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006AE545; /* jne: not equal / not zero */

loc_006AE53A: ;
    PUSH32(esp, 0x006AE53Fu); RECOMP_ABI_CALL(0x0002CDFFu, sub_0002CDFF); /* call 0x0002CDFF */

loc_006AE53F: ;
    ecx = MEM32(0x8E8D54);

loc_006AE545: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AEB7C);
    esi = ecx;
    PUSH32(esp, 0x006AE552u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AE552: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AE56B; /* je: equal / zero */

loc_006AE556: ;
    PUSH32(esp, 0x8AEB74);
    ecx = esi;
    PUSH32(esp, 0x006AE562u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AE562: ;
    SET_LO8(eax, 1);
    MEM8(0x8F0657) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006AE56B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F0657) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE590
 * Original: 0x006AE590 - 0x006AE5D4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE590: ;
    ecx = MEM32(0x8E8E14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006AE5A5; /* jne: not equal / not zero */

loc_006AE59A: ;
    PUSH32(esp, 0x006AE59Fu); RECOMP_ABI_CALL(0x00015524u, sub_00015524); /* call 0x00015524 */

loc_006AE59F: ;
    ecx = MEM32(0x8E8E14);

loc_006AE5A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AEB8C);
    esi = ecx;
    PUSH32(esp, 0x006AE5B2u); RECOMP_ABI_CALL(0x0001F28Bu, sub_0001F28B); /* call 0x0001F28B */

loc_006AE5B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AE5CB; /* je: equal / zero */

loc_006AE5B6: ;
    PUSH32(esp, 0x8AEB84);
    ecx = esi;
    PUSH32(esp, 0x006AE5C2u); RECOMP_ABI_CALL(0x0001BF91u, sub_0001BF91); /* call 0x0001BF91 */

loc_006AE5C2: ;
    SET_LO8(eax, 1);
    MEM8(0x8F065C) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006AE5CB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F065C) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE5F0
 * Original: 0x006AE5F0 - 0x006AE634 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE5F0: ;
    ecx = MEM32(0x8E8D54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006AE605; /* jne: not equal / not zero */

loc_006AE5FA: ;
    PUSH32(esp, 0x006AE5FFu); RECOMP_ABI_CALL(0x0002CDFFu, sub_0002CDFF); /* call 0x0002CDFF */

loc_006AE5FF: ;
    ecx = MEM32(0x8E8D54);

loc_006AE605: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AEB9C);
    esi = ecx;
    PUSH32(esp, 0x006AE612u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AE612: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AE62B; /* je: equal / zero */

loc_006AE616: ;
    PUSH32(esp, 0x8AEB94);
    ecx = esi;
    PUSH32(esp, 0x006AE622u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AE622: ;
    SET_LO8(eax, 1);
    MEM8(0x8F0655) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006AE62B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F0655) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE650
 * Original: 0x006AE650 - 0x006AE694 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE650: ;
    ecx = MEM32(0x8E8D54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006AE665; /* jne: not equal / not zero */

loc_006AE65A: ;
    PUSH32(esp, 0x006AE65Fu); RECOMP_ABI_CALL(0x0002CDFFu, sub_0002CDFF); /* call 0x0002CDFF */

loc_006AE65F: ;
    ecx = MEM32(0x8E8D54);

loc_006AE665: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AEBAC);
    esi = ecx;
    PUSH32(esp, 0x006AE672u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006AE672: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AE68B; /* je: equal / zero */

loc_006AE676: ;
    PUSH32(esp, 0x8AEBA4);
    ecx = esi;
    PUSH32(esp, 0x006AE682u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006AE682: ;
    SET_LO8(eax, 1);
    MEM8(0x8F065B) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006AE68B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F065B) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE6B0
 * Original: 0x006AE6B0 - 0x006AE6F4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE6B0: ;
    ecx = MEM32(0x8E8D34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006AE6C5; /* jne: not equal / not zero */

loc_006AE6BA: ;
    PUSH32(esp, 0x006AE6BFu); RECOMP_ABI_CALL(0x000202B2u, sub_000202B2); /* call 0x000202B2 */

loc_006AE6BF: ;
    ecx = MEM32(0x8E8D34);

loc_006AE6C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AEBBC);
    esi = ecx;
    PUSH32(esp, 0x006AE6D2u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006AE6D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AE6EB; /* je: equal / zero */

loc_006AE6D6: ;
    PUSH32(esp, 0x8AEBB4);
    ecx = esi;
    PUSH32(esp, 0x006AE6E2u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006AE6E2: ;
    SET_LO8(eax, 1);
    MEM8(0x8F0658) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006AE6EB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F0658) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE710
 * Original: 0x006AE710 - 0x006AE754 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE710: ;
    ecx = MEM32(0x8E8DF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006AE725; /* jne: not equal / not zero */

loc_006AE71A: ;
    PUSH32(esp, 0x006AE71Fu); RECOMP_ABI_CALL(0x000331AAu, sub_000331AA); /* call 0x000331AA */

loc_006AE71F: ;
    ecx = MEM32(0x8E8DF4);

loc_006AE725: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AEBCC);
    esi = ecx;
    PUSH32(esp, 0x006AE732u); RECOMP_ABI_CALL(0x0002067Cu, sub_0002067C); /* call 0x0002067C */

loc_006AE732: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AE74B; /* je: equal / zero */

loc_006AE736: ;
    PUSH32(esp, 0x8AEBC4);
    ecx = esi;
    PUSH32(esp, 0x006AE742u); RECOMP_ABI_CALL(0x00021469u, sub_00021469); /* call 0x00021469 */

loc_006AE742: ;
    SET_LO8(eax, 1);
    MEM8(0x8F0662) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006AE74B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F0662) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE770
 * Original: 0x006AE770 - 0x006AE7B4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE770: ;
    ecx = MEM32(0x8E8D94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006AE785; /* jne: not equal / not zero */

loc_006AE77A: ;
    PUSH32(esp, 0x006AE77Fu); RECOMP_ABI_CALL(0x0001F538u, sub_0001F538); /* call 0x0001F538 */

loc_006AE77F: ;
    ecx = MEM32(0x8E8D94);

loc_006AE785: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AEBDC);
    esi = ecx;
    PUSH32(esp, 0x006AE792u); RECOMP_ABI_CALL(0x0002339Au, sub_0002339A); /* call 0x0002339A */

loc_006AE792: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AE7AB; /* je: equal / zero */

loc_006AE796: ;
    PUSH32(esp, 0x8AEBD4);
    ecx = esi;
    PUSH32(esp, 0x006AE7A2u); RECOMP_ABI_CALL(0x000307E3u, sub_000307E3); /* call 0x000307E3 */

loc_006AE7A2: ;
    SET_LO8(eax, 1);
    MEM8(0x8F0656) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006AE7AB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F0656) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE7D0
 * Original: 0x006AE7D0 - 0x006AE814 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE7D0: ;
    ecx = MEM32(0x8E8D94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006AE7E5; /* jne: not equal / not zero */

loc_006AE7DA: ;
    PUSH32(esp, 0x006AE7DFu); RECOMP_ABI_CALL(0x0001F538u, sub_0001F538); /* call 0x0001F538 */

loc_006AE7DF: ;
    ecx = MEM32(0x8E8D94);

loc_006AE7E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AEBEC);
    esi = ecx;
    PUSH32(esp, 0x006AE7F2u); RECOMP_ABI_CALL(0x0002339Au, sub_0002339A); /* call 0x0002339A */

loc_006AE7F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AE80B; /* je: equal / zero */

loc_006AE7F6: ;
    PUSH32(esp, 0x8AEBE4);
    ecx = esi;
    PUSH32(esp, 0x006AE802u); RECOMP_ABI_CALL(0x000307E3u, sub_000307E3); /* call 0x000307E3 */

loc_006AE802: ;
    SET_LO8(eax, 1);
    MEM8(0x8F0659) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006AE80B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F0659) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE830
 * Original: 0x006AE830 - 0x006AE874 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE830: ;
    ecx = MEM32(0x8E8D34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006AE845; /* jne: not equal / not zero */

loc_006AE83A: ;
    PUSH32(esp, 0x006AE83Fu); RECOMP_ABI_CALL(0x000202B2u, sub_000202B2); /* call 0x000202B2 */

loc_006AE83F: ;
    ecx = MEM32(0x8E8D34);

loc_006AE845: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AEBFC);
    esi = ecx;
    PUSH32(esp, 0x006AE852u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006AE852: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006AE86B; /* je: equal / zero */

loc_006AE856: ;
    PUSH32(esp, 0x8AEBF4);
    ecx = esi;
    PUSH32(esp, 0x006AE862u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006AE862: ;
    SET_LO8(eax, 1);
    MEM8(0x8F0654) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006AE86B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F0654) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE890
 * Original: 0x006AE890 - 0x006AE8AA (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE890: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x7DB35C);
    PUSH32(esp, 0x7DB34C);
    PUSH32(esp, 0x006AE8A1u); RECOMP_ABI_CALL(0x00034339u, sub_00034339); /* call 0x00034339 */

loc_006AE8A1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F077C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_006AE8B0
 * Original: 0x006AE8B0 - 0x006AE8BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE8B0(void)
{

loc_006AE8B0: ;
    PUSH32(esp, 0x6B6830);
    PUSH32(esp, 0x006AE8BAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AE8BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_006AE8C0
 * Original: 0x006AE8C0 - 0x006AE8E9 (41 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE8C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE8C0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esp + 2) = LO8(eax);
    MEM8(esp + 1) = LO8(eax);
    MEM8(esp) = LO8(eax);
    MEM8(esp + 3) = 0xFF;
    eax = MEM32(esp);
    PUSH32(esp, 0x6B6810);
    MEM32(0x8B09A8) = eax;
    PUSH32(esp, 0x006AE8E5u); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AE8E5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AE900
 * Original: 0x006AE900 - 0x006AE929 (41 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE900: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esp + 2) = LO8(eax);
    MEM8(esp + 1) = LO8(eax);
    MEM8(esp) = LO8(eax);
    MEM8(esp + 3) = 0xFF;
    eax = MEM32(esp);
    PUSH32(esp, 0x6B6820);
    MEM32(0x8B09C0) = eax;
    PUSH32(esp, 0x006AE925u); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_006AE925: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AE940
 * Original: 0x006AE940 - 0x006AE951 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE940(void)
{

loc_006AE940: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9EBC)); /* movss */
    MEMF(0x8F0C80) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_006AE960
 * Original: 0x006AE960 - 0x006AE971 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE960(void)
{

loc_006AE960: ;
    xmm0 = XMM_SCALAR(MEMF(0x7ECE30)); /* movss */
    MEMF(0x8F0C84) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_006AE980
 * Original: 0x006AE980 - 0x006AE992 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006AE980: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8B2148);
    PUSH32(esp, 0x006AE98Eu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_006AE98E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_006AE9A0
 * Original: 0x006AE9A0 - 0x006AE9AD (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE9A0(void)
{

loc_006AE9A0: ;
    eax = (uint32_t)(int32_t)SMEM16(0x896160);
    MEM32(0x8F0E04) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_006AE9B0
 * Original: 0x006AE9B0 - 0x006AE9BA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AE9B0: ;
    ecx = 0x8F16B8;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AE9C0
 * Original: 0x006AE9C0 - 0x006AE9CA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AE9C0: ;
    ecx = 0x8F1430;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AE9D0
 * Original: 0x006AE9D0 - 0x006AE9DA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AE9D0: ;
    ecx = 0x8F1838;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AE9E0
 * Original: 0x006AE9E0 - 0x006AE9EA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AE9E0: ;
    ecx = 0x8F16F8;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AE9F0
 * Original: 0x006AE9F0 - 0x006AE9FA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AE9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AE9F0: ;
    ecx = 0x8F1330;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEA00
 * Original: 0x006AEA00 - 0x006AEA0A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEA00: ;
    ecx = 0x8F1A88;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEA10
 * Original: 0x006AEA10 - 0x006AEA1A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEA10: ;
    ecx = 0x8F0FE8;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEA20
 * Original: 0x006AEA20 - 0x006AEA2A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEA20: ;
    ecx = 0x8F1588;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEA30
 * Original: 0x006AEA30 - 0x006AEA3A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEA30: ;
    ecx = 0x8F17A8;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEA40
 * Original: 0x006AEA40 - 0x006AEA4A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEA40: ;
    ecx = 0x8F1380;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEA50
 * Original: 0x006AEA50 - 0x006AEA5A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEA50: ;
    ecx = 0x8F1070;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEA60
 * Original: 0x006AEA60 - 0x006AEA6A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEA60: ;
    ecx = 0x8F1914;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEA70
 * Original: 0x006AEA70 - 0x006AEA7A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEA70: ;
    ecx = 0x8F1340;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEA80
 * Original: 0x006AEA80 - 0x006AEA8A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEA80: ;
    ecx = 0x8F10D0;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEA90
 * Original: 0x006AEA90 - 0x006AEA9A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEA90: ;
    ecx = 0x8F1348;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEAA0
 * Original: 0x006AEAA0 - 0x006AEAAA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEAA0: ;
    ecx = 0x8F16C0;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEAB0
 * Original: 0x006AEAB0 - 0x006AEABA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEAB0: ;
    ecx = 0x8F1640;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEAC0
 * Original: 0x006AEAC0 - 0x006AEACA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEAC0: ;
    ecx = 0x8F1620;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEAD0
 * Original: 0x006AEAD0 - 0x006AEADA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEAD0: ;
    ecx = 0x8F1028;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEAE0
 * Original: 0x006AEAE0 - 0x006AEAEA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEAE0: ;
    ecx = 0x8F1490;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEAF0
 * Original: 0x006AEAF0 - 0x006AEAFA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEAF0: ;
    ecx = 0x8F1738;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEB00
 * Original: 0x006AEB00 - 0x006AEB0A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEB00: ;
    ecx = 0x8F17B8;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEB10
 * Original: 0x006AEB10 - 0x006AEB1A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEB10: ;
    ecx = 0x8F1540;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEB20
 * Original: 0x006AEB20 - 0x006AEB2A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEB20: ;
    ecx = 0x8F0FF8;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEB30
 * Original: 0x006AEB30 - 0x006AEB3A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEB30: ;
    ecx = 0x8F1558;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEB40
 * Original: 0x006AEB40 - 0x006AEB4A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEB40: ;
    ecx = 0x8F1010;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEB50
 * Original: 0x006AEB50 - 0x006AEB5A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEB50: ;
    ecx = 0x8F1288;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEB60
 * Original: 0x006AEB60 - 0x006AEB6A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEB60: ;
    ecx = 0x8F1948;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEB70
 * Original: 0x006AEB70 - 0x006AEB7A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEB70: ;
    ecx = 0x8F0F30;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEB80
 * Original: 0x006AEB80 - 0x006AEB8A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEB80: ;
    ecx = 0x8F1138;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEB90
 * Original: 0x006AEB90 - 0x006AEB9A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEB90: ;
    ecx = 0x8F16B0;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEBA0
 * Original: 0x006AEBA0 - 0x006AEBAA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEBA0: ;
    ecx = 0x8F0EB8;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEBB0
 * Original: 0x006AEBB0 - 0x006AEBBA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEBB0: ;
    ecx = 0x8F1710;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEBC0
 * Original: 0x006AEBC0 - 0x006AEBCA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEBC0: ;
    ecx = 0x8F1668;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEBD0
 * Original: 0x006AEBD0 - 0x006AEBDA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEBD0: ;
    ecx = 0x8F1400;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEBE0
 * Original: 0x006AEBE0 - 0x006AEBEA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEBE0: ;
    ecx = 0x8F1000;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEBF0
 * Original: 0x006AEBF0 - 0x006AEBFA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEBF0: ;
    ecx = 0x8F1670;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEC00
 * Original: 0x006AEC00 - 0x006AEC0A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEC00: ;
    ecx = 0x8F11E8;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEC10
 * Original: 0x006AEC10 - 0x006AEC1A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEC10: ;
    ecx = 0x8F13B0;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEC20
 * Original: 0x006AEC20 - 0x006AEC2A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEC20: ;
    ecx = 0x8F12A8;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEC30
 * Original: 0x006AEC30 - 0x006AEC3A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEC30: ;
    ecx = 0x8F0F08;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEC40
 * Original: 0x006AEC40 - 0x006AEC4A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEC40: ;
    ecx = 0x8F0FB8;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEC50
 * Original: 0x006AEC50 - 0x006AEC5A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEC50: ;
    ecx = 0x8F13B8;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEC60
 * Original: 0x006AEC60 - 0x006AEC6A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEC60: ;
    ecx = 0x8F1208;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEC70
 * Original: 0x006AEC70 - 0x006AEC7A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEC70: ;
    ecx = 0x8F1060;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEC80
 * Original: 0x006AEC80 - 0x006AEC8A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEC80: ;
    ecx = 0x8F1130;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AEC90
 * Original: 0x006AEC90 - 0x006AEC9A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEC90: ;
    ecx = 0x8F1478;
    g_seh_ebp = ebp; sub_00596504(); return; /* tail jmp 0x00596504 */

}

/**
 * sub_006AECA0
 * Original: 0x006AECA0 - 0x006AECAA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AECA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AECA0: ;
    ecx = 0x8F1780;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AECB0
 * Original: 0x006AECB0 - 0x006AECBA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AECB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AECB0: ;
    ecx = 0x8F1368;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AECC0
 * Original: 0x006AECC0 - 0x006AECCA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AECC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AECC0: ;
    ecx = 0x8F1A68;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AECD0
 * Original: 0x006AECD0 - 0x006AECDA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AECD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AECD0: ;
    ecx = 0x8F1390;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AECE0
 * Original: 0x006AECE0 - 0x006AECEA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AECE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AECE0: ;
    ecx = 0x8F0FF0;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AECF0
 * Original: 0x006AECF0 - 0x006AECFA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AECF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AECF0: ;
    ecx = 0x8F1388;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AED00
 * Original: 0x006AED00 - 0x006AED0A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AED00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AED00: ;
    ecx = 0x8F1A50;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AED10
 * Original: 0x006AED10 - 0x006AED1A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AED10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AED10: ;
    ecx = 0x8F17F0;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AED20
 * Original: 0x006AED20 - 0x006AED2A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AED20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AED20: ;
    ecx = 0x8F1748;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AED30
 * Original: 0x006AED30 - 0x006AED3A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AED30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AED30: ;
    ecx = 0x8F0EE0;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AED40
 * Original: 0x006AED40 - 0x006AED4A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AED40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AED40: ;
    ecx = 0x8F12D8;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AED50
 * Original: 0x006AED50 - 0x006AED5A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AED50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AED50: ;
    ecx = 0x8F1158;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AED60
 * Original: 0x006AED60 - 0x006AED6A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AED60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AED60: ;
    ecx = 0x8F11A0;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AED70
 * Original: 0x006AED70 - 0x006AED7A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AED70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AED70: ;
    ecx = 0x8F14D8;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AED80
 * Original: 0x006AED80 - 0x006AED8A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AED80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AED80: ;
    ecx = 0x8F11C8;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AED90
 * Original: 0x006AED90 - 0x006AED9A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AED90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AED90: ;
    ecx = 0x8F1520;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEDA0
 * Original: 0x006AEDA0 - 0x006AEDAA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEDA0: ;
    ecx = 0x8F1A70;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEDB0
 * Original: 0x006AEDB0 - 0x006AEDBA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEDB0: ;
    ecx = 0x8F1810;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEDC0
 * Original: 0x006AEDC0 - 0x006AEDCA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEDC0: ;
    ecx = 0x8F1768;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEDD0
 * Original: 0x006AEDD0 - 0x006AEDDA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEDD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEDD0: ;
    ecx = 0x8F1230;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEDE0
 * Original: 0x006AEDE0 - 0x006AEDEA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEDE0: ;
    ecx = 0x8F0FA8;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEDF0
 * Original: 0x006AEDF0 - 0x006AEDFA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEDF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEDF0: ;
    ecx = 0x8F1140;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEE00
 * Original: 0x006AEE00 - 0x006AEE0A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEE00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEE00: ;
    ecx = 0x8F16C8;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEE10
 * Original: 0x006AEE10 - 0x006AEE1A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEE10: ;
    ecx = 0x8F1150;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEE20
 * Original: 0x006AEE20 - 0x006AEE2A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEE20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEE20: ;
    ecx = 0x8F1578;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEE30
 * Original: 0x006AEE30 - 0x006AEE3A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEE30: ;
    ecx = 0x8F1800;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEE40
 * Original: 0x006AEE40 - 0x006AEE4A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEE40: ;
    ecx = 0x8F1720;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEE50
 * Original: 0x006AEE50 - 0x006AEE5A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEE50: ;
    ecx = 0x8F1248;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEE60
 * Original: 0x006AEE60 - 0x006AEE6A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEE60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEE60: ;
    ecx = 0x8F13E0;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEE70
 * Original: 0x006AEE70 - 0x006AEE7A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEE70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEE70: ;
    ecx = 0x8F15D0;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEE80
 * Original: 0x006AEE80 - 0x006AEE8A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEE80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEE80: ;
    ecx = 0x8F14B8;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEE90
 * Original: 0x006AEE90 - 0x006AEE9A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEE90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEE90: ;
    ecx = 0x8F0EA8;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEEA0
 * Original: 0x006AEEA0 - 0x006AEEAA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEEA0: ;
    ecx = 0x8F1050;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEEB0
 * Original: 0x006AEEB0 - 0x006AEEBA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEEB0: ;
    ecx = 0x8F1488;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEEC0
 * Original: 0x006AEEC0 - 0x006AEECA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEEC0: ;
    ecx = 0x8F1690;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEED0
 * Original: 0x006AEED0 - 0x006AEEDA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEED0: ;
    ecx = 0x8F15A0;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEEE0
 * Original: 0x006AEEE0 - 0x006AEEEA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEEE0: ;
    ecx = 0x8F0EB0;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEEF0
 * Original: 0x006AEEF0 - 0x006AEEFA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEEF0: ;
    ecx = 0x8F1B10;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEF00
 * Original: 0x006AEF00 - 0x006AEF0A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEF00: ;
    ecx = 0x8F15B0;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEF10
 * Original: 0x006AEF10 - 0x006AEF1A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEF10: ;
    ecx = 0x8F1370;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEF20
 * Original: 0x006AEF20 - 0x006AEF2A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEF20: ;
    ecx = 0x8F1A40;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEF30
 * Original: 0x006AEF30 - 0x006AEF3A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEF30: ;
    ecx = 0x8F11D8;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEF40
 * Original: 0x006AEF40 - 0x006AEF4A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEF40: ;
    ecx = 0x8F1220;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEF50
 * Original: 0x006AEF50 - 0x006AEF5A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEF50: ;
    ecx = 0x8F1590;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEF60
 * Original: 0x006AEF60 - 0x006AEF6A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEF60: ;
    ecx = 0x8F15D8;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEF70
 * Original: 0x006AEF70 - 0x006AEF7A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEF70: ;
    ecx = 0x8F1530;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEF80
 * Original: 0x006AEF80 - 0x006AEF8A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEF80: ;
    ecx = 0x8F1AA0;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEF90
 * Original: 0x006AEF90 - 0x006AEF9A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEF90: ;
    ecx = 0x8F1238;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEFA0
 * Original: 0x006AEFA0 - 0x006AEFAA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEFA0: ;
    ecx = 0x8F1680;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEFB0
 * Original: 0x006AEFB0 - 0x006AEFBA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEFB0: ;
    ecx = 0x8F1718;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEFC0
 * Original: 0x006AEFC0 - 0x006AEFCA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEFC0: ;
    ecx = 0x8F1730;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEFD0
 * Original: 0x006AEFD0 - 0x006AEFDA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEFD0: ;
    ecx = 0x8F1068;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEFE0
 * Original: 0x006AEFE0 - 0x006AEFEA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEFE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEFE0: ;
    ecx = 0x8F0E98;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AEFF0
 * Original: 0x006AEFF0 - 0x006AEFFA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AEFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AEFF0: ;
    ecx = 0x8F190C;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AF000
 * Original: 0x006AF000 - 0x006AF00A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AF000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AF000: ;
    ecx = 0x8F0E60;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}

/**
 * sub_006AF010
 * Original: 0x006AF010 - 0x006AF01A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006AF010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006AF010: ;
    ecx = 0x8F1858;
    g_seh_ebp = ebp; sub_0059650E(); return; /* tail jmp 0x0059650E */

}
