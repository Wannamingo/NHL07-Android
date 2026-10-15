/**
 * nhl_07_recomp - Recompiled code chunk 169
 * Functions: 250 (0x00360F20 - 0x00363480)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00360F20
 * Original: 0x00360F20 - 0x00360F31 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360F20: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x82F54C;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00360F40
 * Original: 0x00360F40 - 0x00360F47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360F40(void)
{

loc_00360F40: ;
    MEM32(ecx) = 0x82F528;
    esp += 4; return; /* ret */

}

/**
 * sub_00360F50
 * Original: 0x00360F50 - 0x00360FC6 (118 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360F50: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00360FB3; /* jne: not equal / not zero */

loc_00360F5D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00360F69u); RECOMP_ABI_CALL(0x00033C18u, sub_00033C18); /* call 0x00033C18 */

loc_00360F69: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00360F7Bu); RECOMP_ABI_CALL(0x00014444u, sub_00014444); /* call 0x00014444 */

loc_00360F7B: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00360F8Au); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00360F8A: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 8) = ecx;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = eax;
    MEM32(esi + 4) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, 0x00360FB2u); RECOMP_ABI_CALL(0x0002E2A4u, sub_0002E2A4); /* call 0x0002E2A4 */

loc_00360FB2: ;
    POP32(esp, edi);

loc_00360FB3: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 4);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360FF0
 * Original: 0x00360FF0 - 0x00361083 (147 bytes, 43 insns)
 * Category: game_io
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360FF0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x82F570);
    edx = MEM32(0x82F578);
    MEM32(esp + 8) = edx;
    edx = MEM32(0x82F584);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x82F574);
    MEM32(esp + 4) = eax;
    eax = MEM32(0x82F57C);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x82F580);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x24);
    edx = esi + 0xC;
    MEM32(esp + 0x14) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00361040: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361040; /* jne: not equal / not zero */

loc_0036104A: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 1);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00361058u); RECOMP_ABI_CALL(0x000128F1u, sub_000128F1); /* call 0x000128F1 */

loc_00361058: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00361065u); RECOMP_ABI_CALL(0x00035590u, sub_00035590); /* call 0x00035590 */

loc_00361065: ;
    ecx = eax;
    PUSH32(esp, 0x0036106Cu); RECOMP_ABI_CALL(0x000176C1u, sub_000176C1); /* call 0x000176C1 */

loc_0036106C: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036107C; /* je: equal / zero */

loc_00361073: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361079u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00361079: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036107C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003610B0
 * Original: 0x003610B0 - 0x003610B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003610B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003610B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003610C0
 * Original: 0x003610C0 - 0x003610CE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003610C0(void)
{

loc_003610C0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x8C4E08);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003610E0
 * Original: 0x003610E0 - 0x003610E3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003610E0(void)
{

loc_003610E0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003610F0
 * Original: 0x003610F0 - 0x003610F9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003610F0(void)
{

loc_003610F0: ;
    eax = ecx;
    MEM32(eax) = 0x82F58C;
    esp += 4; return; /* ret */

}

/**
 * sub_00361100
 * Original: 0x00361100 - 0x00361106 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361100(void)
{

loc_00361100: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00361110
 * Original: 0x00361110 - 0x00361117 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361110(void)
{

loc_00361110: ;
    MEM32(ecx) = 0x82F58C;
    esp += 4; return; /* ret */

}

/**
 * sub_00361120
 * Original: 0x00361120 - 0x0036113F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361120: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F58C;
    if (TEST_Z(_fa, _fb)) goto loc_00361139; /* je: equal / zero */

loc_00361130: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361136u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00361136: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361139: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361150
 * Original: 0x00361150 - 0x00361159 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361150(void)
{

loc_00361150: ;
    eax = ecx;
    MEM32(eax) = 0x82F598;
    esp += 4; return; /* ret */

}

/**
 * sub_00361160
 * Original: 0x00361160 - 0x00361167 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361160(void)
{

loc_00361160: ;
    MEM32(ecx) = 0x82F58C;
    esp += 4; return; /* ret */

}

/**
 * sub_00361170
 * Original: 0x00361170 - 0x00361179 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361170(void)
{

loc_00361170: ;
    eax = ecx;
    MEM32(eax) = 0x82F5A4;
    esp += 4; return; /* ret */

}

/**
 * sub_00361180
 * Original: 0x00361180 - 0x00361183 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00361180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361180: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00361190
 * Original: 0x00361190 - 0x00361196 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361190(void)
{

loc_00361190: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_003611A0
 * Original: 0x003611A0 - 0x003611A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003611A0(void)
{

loc_003611A0: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_003611B0
 * Original: 0x003611B0 - 0x003611B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003611B0(void)
{

loc_003611B0: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_003611C0
 * Original: 0x003611C0 - 0x003611C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003611C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003611C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003611D0
 * Original: 0x003611D0 - 0x003611D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003611D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003611D0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003611E0
 * Original: 0x003611E0 - 0x003611E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003611E0(void)
{

loc_003611E0: ;
    eax = MEM32(0x8631F4);
    esp += 4; return; /* ret */

}

/**
 * sub_003611F0
 * Original: 0x003611F0 - 0x003611F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003611F0(void)
{

loc_003611F0: ;
    MEM32(ecx) = 0x82F5A4;
    esp += 4; return; /* ret */

}

/**
 * sub_00361200
 * Original: 0x00361200 - 0x0036121F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361200: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F5A4;
    if (TEST_Z(_fa, _fb)) goto loc_00361219; /* je: equal / zero */

loc_00361210: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361216u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00361216: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361219: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361230
 * Original: 0x00361230 - 0x00361239 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361230(void)
{

loc_00361230: ;
    eax = ecx;
    MEM32(eax) = 0x82F5CC;
    esp += 4; return; /* ret */

}

/**
 * sub_00361240
 * Original: 0x00361240 - 0x00361247 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361240(void)
{

loc_00361240: ;
    MEM32(ecx) = 0x82F5A4;
    esp += 4; return; /* ret */

}

/**
 * sub_00361250
 * Original: 0x00361250 - 0x00361256 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361250(void)
{

loc_00361250: ;
    eax = 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00361260
 * Original: 0x00361260 - 0x00361266 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361260(void)
{

loc_00361260: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00361270
 * Original: 0x00361270 - 0x00361276 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361270(void)
{

loc_00361270: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00361280
 * Original: 0x00361280 - 0x00361286 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361280(void)
{

loc_00361280: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00361290
 * Original: 0x00361290 - 0x00361296 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361290(void)
{

loc_00361290: ;
    eax = 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_003612A0
 * Original: 0x003612A0 - 0x003612A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003612A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003612A0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003612B0
 * Original: 0x003612B0 - 0x003612B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003612B0(void)
{

loc_003612B0: ;
    eax = ecx;
    MEM32(eax) = 0x82F5F4;
    esp += 4; return; /* ret */

}

/**
 * sub_003612C0
 * Original: 0x003612C0 - 0x003612C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003612C0(void)
{

loc_003612C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003612D0
 * Original: 0x003612D0 - 0x003612D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003612D0(void)
{

loc_003612D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003612E0
 * Original: 0x003612E0 - 0x003612E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003612E0(void)
{

loc_003612E0: ;
    MEM32(ecx) = 0x82F5F4;
    esp += 4; return; /* ret */

}

/**
 * sub_003612F0
 * Original: 0x003612F0 - 0x0036130F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003612F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003612F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F5F4;
    if (TEST_Z(_fa, _fb)) goto loc_00361309; /* je: equal / zero */

loc_00361300: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361306u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00361306: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361309: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361320
 * Original: 0x00361320 - 0x00361329 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361320(void)
{

loc_00361320: ;
    eax = ecx;
    MEM32(eax) = 0x82F604;
    esp += 4; return; /* ret */

}

/**
 * sub_00361330
 * Original: 0x00361330 - 0x00361337 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361330(void)
{

loc_00361330: ;
    MEM32(ecx) = 0x82F604;
    esp += 4; return; /* ret */

}

/**
 * sub_00361340
 * Original: 0x00361340 - 0x0036135F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361340: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F604;
    if (TEST_Z(_fa, _fb)) goto loc_00361359; /* je: equal / zero */

loc_00361350: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361356u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00361356: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361359: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361370
 * Original: 0x00361370 - 0x00361379 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361370(void)
{

loc_00361370: ;
    eax = ecx;
    MEM32(eax) = 0x82F618;
    esp += 4; return; /* ret */

}

/**
 * sub_00361380
 * Original: 0x00361380 - 0x00361387 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361380(void)
{

loc_00361380: ;
    MEM32(ecx) = 0x82F618;
    esp += 4; return; /* ret */

}

/**
 * sub_00361390
 * Original: 0x00361390 - 0x003613AF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361390: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F618;
    if (TEST_Z(_fa, _fb)) goto loc_003613A9; /* je: equal / zero */

loc_003613A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003613A6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003613A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003613A9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003613C0
 * Original: 0x003613C0 - 0x003613C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003613C0(void)
{

loc_003613C0: ;
    eax = ecx;
    MEM32(eax) = 0x82F62C;
    esp += 4; return; /* ret */

}

/**
 * sub_003613D0
 * Original: 0x003613D0 - 0x003613D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003613D0(void)
{

loc_003613D0: ;
    MEM32(ecx) = 0x82F62C;
    esp += 4; return; /* ret */

}

/**
 * sub_003613E0
 * Original: 0x003613E0 - 0x003613FF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003613E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003613E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F62C;
    if (TEST_Z(_fa, _fb)) goto loc_003613F9; /* je: equal / zero */

loc_003613F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003613F6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003613F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003613F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361410
 * Original: 0x00361410 - 0x00361419 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361410(void)
{

loc_00361410: ;
    eax = ecx;
    MEM32(eax) = 0x82F630;
    esp += 4; return; /* ret */

}

/**
 * sub_00361420
 * Original: 0x00361420 - 0x00361427 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361420(void)
{

loc_00361420: ;
    MEM32(ecx) = 0x82F62C;
    esp += 4; return; /* ret */

}

/**
 * sub_00361430
 * Original: 0x00361430 - 0x0036144F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361430: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F62C;
    if (TEST_Z(_fa, _fb)) goto loc_00361449; /* je: equal / zero */

loc_00361440: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361446u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00361446: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361449: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361460
 * Original: 0x00361460 - 0x00361469 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361460(void)
{

loc_00361460: ;
    eax = ecx;
    MEM32(eax) = 0x82F63C;
    esp += 4; return; /* ret */

}

/**
 * sub_00361470
 * Original: 0x00361470 - 0x00361477 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361470(void)
{

loc_00361470: ;
    MEM32(ecx) = 0x82F63C;
    esp += 4; return; /* ret */

}

/**
 * sub_00361480
 * Original: 0x00361480 - 0x0036149F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361480: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F63C;
    if (TEST_Z(_fa, _fb)) goto loc_00361499; /* je: equal / zero */

loc_00361490: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361496u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00361496: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361499: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003614B0
 * Original: 0x003614B0 - 0x003614B9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003614B0(void)
{

loc_003614B0: ;
    eax = ecx;
    MEM32(eax) = 0x82F640;
    esp += 4; return; /* ret */

}

/**
 * sub_003614C0
 * Original: 0x003614C0 - 0x003614C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003614C0(void)
{

loc_003614C0: ;
    MEM32(ecx) = 0x82F63C;
    esp += 4; return; /* ret */

}

/**
 * sub_003614D0
 * Original: 0x003614D0 - 0x003614EF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003614D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003614D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F63C;
    if (TEST_Z(_fa, _fb)) goto loc_003614E9; /* je: equal / zero */

loc_003614E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003614E6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003614E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003614E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361500
 * Original: 0x00361500 - 0x00361509 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361500(void)
{

loc_00361500: ;
    eax = ecx;
    MEM32(eax) = 0x82F64C;
    esp += 4; return; /* ret */

}

/**
 * sub_00361510
 * Original: 0x00361510 - 0x00361517 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361510(void)
{

loc_00361510: ;
    MEM32(ecx) = 0x82F64C;
    esp += 4; return; /* ret */

}

/**
 * sub_00361520
 * Original: 0x00361520 - 0x0036153F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361520: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F64C;
    if (TEST_Z(_fa, _fb)) goto loc_00361539; /* je: equal / zero */

loc_00361530: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361536u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00361536: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361539: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361550
 * Original: 0x00361550 - 0x00361559 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361550(void)
{

loc_00361550: ;
    eax = ecx;
    MEM32(eax) = 0x82F668;
    esp += 4; return; /* ret */

}

/**
 * sub_00361560
 * Original: 0x00361560 - 0x00361566 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361560(void)
{

loc_00361560: ;
    eax = 0x2710;
    esp += 4; return; /* ret */

}

/**
 * sub_00361570
 * Original: 0x00361570 - 0x00361580 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361570: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00361575u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361572u); } /* indirect call */
    }

loc_00361575: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00361590
 * Original: 0x00361590 - 0x00361597 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361590(void)
{

loc_00361590: ;
    MEM32(ecx) = 0x82F668;
    esp += 4; return; /* ret */

}

/**
 * sub_003615A0
 * Original: 0x003615A0 - 0x003615BF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003615A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003615A0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F668;
    if (TEST_Z(_fa, _fb)) goto loc_003615B9; /* je: equal / zero */

loc_003615B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003615B6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003615B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003615B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003615D0
 * Original: 0x003615D0 - 0x003615D9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003615D0(void)
{

loc_003615D0: ;
    eax = ecx;
    MEM32(eax) = 0x82F6BC;
    esp += 4; return; /* ret */

}

/**
 * sub_003615E0
 * Original: 0x003615E0 - 0x003615E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003615E0(void)
{

loc_003615E0: ;
    eax = MEM32(0x8D7C2C);
    esp += 4; return; /* ret */

}

/**
 * sub_003615F0
 * Original: 0x003615F0 - 0x003615F8 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003615F0(void)
{

loc_003615F0: ;
    eax = 0x4AB833;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361600
 * Original: 0x00361600 - 0x00361607 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361600(void)
{

loc_00361600: ;
    MEM32(ecx) = 0x82F6BC;
    esp += 4; return; /* ret */

}

/**
 * sub_00361610
 * Original: 0x00361610 - 0x0036162F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361610: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F6BC;
    if (TEST_Z(_fa, _fb)) goto loc_00361629; /* je: equal / zero */

loc_00361620: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361626u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00361626: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361629: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361640
 * Original: 0x00361640 - 0x00361649 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361640(void)
{

loc_00361640: ;
    eax = ecx;
    MEM32(eax) = 0x82F6E0;
    esp += 4; return; /* ret */

}

/**
 * sub_00361650
 * Original: 0x00361650 - 0x00361656 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361650(void)
{

loc_00361650: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00361660
 * Original: 0x00361660 - 0x00361666 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361660(void)
{

loc_00361660: ;
    eax = 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_00361670
 * Original: 0x00361670 - 0x00361676 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361670(void)
{

loc_00361670: ;
    eax = 0x20000;
    esp += 4; return; /* ret */

}

/**
 * sub_00361680
 * Original: 0x00361680 - 0x00361687 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361680(void)
{

loc_00361680: ;
    MEM32(ecx) = 0x82F6E0;
    esp += 4; return; /* ret */

}

/**
 * sub_00361690
 * Original: 0x00361690 - 0x003616AF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361690: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F6E0;
    if (TEST_Z(_fa, _fb)) goto loc_003616A9; /* je: equal / zero */

loc_003616A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003616A6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003616A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003616A9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003616C0
 * Original: 0x003616C0 - 0x003616C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003616C0(void)
{

loc_003616C0: ;
    eax = ecx;
    MEM32(eax) = 0x82F6F4;
    esp += 4; return; /* ret */

}

/**
 * sub_003616D0
 * Original: 0x003616D0 - 0x003616D5 (5 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003616D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003616D0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003616E0
 * Original: 0x003616E0 - 0x003616E7 (7 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003616E0(void)
{

loc_003616E0: ;
    eax = MEM32(esp + 8);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003616F0
 * Original: 0x003616F0 - 0x003616F7 (7 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003616F0(void)
{

loc_003616F0: ;
    eax = MEM32(esp + 0xC);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361700
 * Original: 0x00361700 - 0x00361703 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361700(void)
{

loc_00361700: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361710
 * Original: 0x00361710 - 0x00361717 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361710(void)
{

loc_00361710: ;
    MEM32(ecx) = 0x82F6F4;
    esp += 4; return; /* ret */

}

/**
 * sub_00361720
 * Original: 0x00361720 - 0x0036173F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361720: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F6F4;
    if (TEST_Z(_fa, _fb)) goto loc_00361739; /* je: equal / zero */

loc_00361730: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361736u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00361736: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361739: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361750
 * Original: 0x00361750 - 0x00361759 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361750(void)
{

loc_00361750: ;
    eax = ecx;
    MEM32(eax) = 0x82F718;
    esp += 4; return; /* ret */

}

/**
 * sub_00361760
 * Original: 0x00361760 - 0x00361763 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00361760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361760: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00361770
 * Original: 0x00361770 - 0x00361777 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361770(void)
{

loc_00361770: ;
    MEM32(ecx) = 0x82F718;
    esp += 4; return; /* ret */

}

/**
 * sub_00361780
 * Original: 0x00361780 - 0x0036179F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361780: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F718;
    if (TEST_Z(_fa, _fb)) goto loc_00361799; /* je: equal / zero */

loc_00361790: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361796u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00361796: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361799: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003617B0
 * Original: 0x003617B0 - 0x003617B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003617B0(void)
{

loc_003617B0: ;
    eax = ecx;
    MEM32(eax) = 0x82F72C;
    esp += 4; return; /* ret */

}

/**
 * sub_003617C0
 * Original: 0x003617C0 - 0x003617C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003617C0(void)
{

loc_003617C0: ;
    MEM32(ecx) = 0x82F72C;
    esp += 4; return; /* ret */

}

/**
 * sub_003617D0
 * Original: 0x003617D0 - 0x003617EF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003617D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003617D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F72C;
    if (TEST_Z(_fa, _fb)) goto loc_003617E9; /* je: equal / zero */

loc_003617E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003617E6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003617E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003617E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361800
 * Original: 0x00361800 - 0x00361809 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361800(void)
{

loc_00361800: ;
    eax = ecx;
    MEM32(eax) = 0x82F73C;
    esp += 4; return; /* ret */

}

/**
 * sub_00361810
 * Original: 0x00361810 - 0x00361816 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361810(void)
{

loc_00361810: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_00361820
 * Original: 0x00361820 - 0x00361826 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361820(void)
{

loc_00361820: ;
    eax = 0x400;
    esp += 4; return; /* ret */

}

/**
 * sub_00361830
 * Original: 0x00361830 - 0x00361837 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361830(void)
{

loc_00361830: ;
    MEM32(ecx) = 0x82F73C;
    esp += 4; return; /* ret */

}

/**
 * sub_00361840
 * Original: 0x00361840 - 0x0036185F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361840: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F73C;
    if (TEST_Z(_fa, _fb)) goto loc_00361859; /* je: equal / zero */

loc_00361850: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361856u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00361856: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361859: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361870
 * Original: 0x00361870 - 0x00361876 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361870(void)
{

loc_00361870: ;
    eax = MEM32(0x90E7B4);
    esp += 4; return; /* ret */

}

/**
 * sub_00361880
 * Original: 0x00361880 - 0x0036188E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361880(void)
{

loc_00361880: ;
    eax = ecx;
    MEM32(eax) = 0x82F788;
    MEM32(0x90E7B4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003618A0
 * Original: 0x003618A0 - 0x003618B1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003618A0(void)
{

loc_003618A0: ;
    MEM32(ecx) = 0x82F788;
    MEM32(0x90E7B4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003618C0
 * Original: 0x003618C0 - 0x003618E9 (41 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003618C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003618C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F788;
    MEM32(0x90E7B4) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_003618E3; /* je: equal / zero */

loc_003618DA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003618E0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003618E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003618E3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00361900
 * Original: 0x00361900 - 0x00361901 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361900(void)
{

loc_00361900: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00361910
 * Original: 0x00361910 - 0x00361913 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361910(void)
{

loc_00361910: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361920
 * Original: 0x00361920 - 0x00361929 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361920(void)
{

loc_00361920: ;
    eax = ecx;
    MEM32(eax) = 0x82F7F4;
    esp += 4; return; /* ret */

}

/**
 * sub_00361930
 * Original: 0x00361930 - 0x00361936 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361930(void)
{

loc_00361930: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_00361940
 * Original: 0x00361940 - 0x00361947 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361940(void)
{

loc_00361940: ;
    MEM32(ecx) = 0x82F6E0;
    esp += 4; return; /* ret */

}

/**
 * sub_00361950
 * Original: 0x00361950 - 0x00361959 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361950(void)
{

loc_00361950: ;
    eax = ecx;
    MEM32(eax) = 0x82F808;
    esp += 4; return; /* ret */

}

/**
 * sub_00361960
 * Original: 0x00361960 - 0x00361967 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361960(void)
{

loc_00361960: ;
    MEM32(ecx) = 0x82F808;
    esp += 4; return; /* ret */

}

/**
 * sub_00361970
 * Original: 0x00361970 - 0x0036198F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361970: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F808;
    if (TEST_Z(_fa, _fb)) goto loc_00361989; /* je: equal / zero */

loc_00361980: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361986u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00361986: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361989: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003619A0
 * Original: 0x003619A0 - 0x003619A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003619A0(void)
{

loc_003619A0: ;
    eax = ecx;
    MEM32(eax) = 0x82F81C;
    esp += 4; return; /* ret */

}

/**
 * sub_003619B0
 * Original: 0x003619B0 - 0x003619B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003619B0(void)
{

loc_003619B0: ;
    MEM32(ecx) = 0x82F808;
    esp += 4; return; /* ret */

}

/**
 * sub_003619C0
 * Original: 0x003619C0 - 0x003619F2 (50 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003619C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003619C0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003619EF; /* ja: above (unsigned >) */

loc_003619CB: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3619F4); /* switch: 7 entries, 4 targets */
    if (_jt == 0x003619D2u) goto loc_003619D2;
    if (_jt == 0x003619DAu) goto loc_003619DA;
    if (_jt == 0x003619E2u) goto loc_003619E2;
    if (_jt == 0x003619EAu) goto loc_003619EA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003619D2: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_003619DA: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

loc_003619E2: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

loc_003619EA: ;
    eax = 7;

loc_003619EF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003619F2
 * Original: 0x003619F2 - 0x00361B5D (363 bytes, 120 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003619F2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003619F2: ;
    edi = edi;
    RECOMP_UNIMPL("ljmp 0x3619:0xd2003619", 0x003619F4u); /* TODO: ljmp 0x3619:0xd2003619 */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(esi)) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(esi)) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + HI8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(esi)) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + HI8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(esi)) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + HI8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(esi)) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
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
    PUSH32(esp, esi);
    PUSH32(esp, 0x00361A36u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_00361A36: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00361A3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361A3Au); } /* indirect call */
    }

loc_00361A3D: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(eax));
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(eax + 1));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    edx = eax + eax * 2;
    eax = MEM32(esp + 8);
    eax = MEM32(eax * 4 + 0x8C4E10);
    eax = eax + edx * 8;
    edx = eax;
    esi = MEM32(edx);
    MEM32(0x900F20) = esi;
    esi = MEM32(edx + 4);
    MEM32(0x900F24) = esi;
    esi = MEM32(edx + 8);
    MEM32(0x900F28) = esi;
    esi = MEM32(edx + 0xC);
    MEM32(0x900F2C) = esi;
    esi = MEM32(edx + 0x10);
    MEM32(0x900F30) = esi;
    edx = MEM32(edx + 0x14);
    MEM32(0x900F34) = edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x72656364) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x72656364 (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00361AF8; /* jne: not equal / not zero */

loc_00361AA0: ;
    edx = ZX16(LO16(ecx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6669) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x6669 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00361AD6; /* jg: greater (signed >) */

loc_00361AAB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00361ACC; /* je: equal / zero */

loc_00361AAD: ;
    _fb = (uint32_t)(0x6373) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0x6373));
    edx = edx - 0x6373;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00361AF8; /* je: equal / zero */

loc_00361AB5: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(7));
    edx = edx - 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00361AF8; /* je: equal / zero */

loc_00361ABA: ;
    _fb = (uint32_t)(0xEB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0xEB));
    edx = edx - 0xEB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00361AF8; /* jne: not equal / not zero */

loc_00361AC2: ;
    _fb = (uint32_t)(3) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM16(0x900F2C)) + (uint64_t)(3)) >> 16) & 1);
    MEM16(0x900F2C) = MEM16(0x900F2C) + 3;
    _fa = (uint32_t)(MEM16(0x900F2C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_00361AF8;

loc_00361ACC: ;
    _fb = (uint32_t)(8) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM16(0x900F2C)) + (uint64_t)(8)) >> 16) & 1);
    MEM16(0x900F2C) = MEM16(0x900F2C) + 8;
    _fa = (uint32_t)(MEM16(0x900F2C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_00361AF8;

loc_00361AD6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6672) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x6672 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00361AF0; /* je: equal / zero */

loc_00361ADE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7376) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7376 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00361AF8; /* jne: not equal / not zero */

loc_00361AE6: ;
    _fb = (uint32_t)(0x17) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM16(0x900F2C)) + (uint64_t)(0x17)) >> 16) & 1);
    MEM16(0x900F2C) = MEM16(0x900F2C) + 0x17;
    _fa = (uint32_t)(MEM16(0x900F2C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_00361AF8;

loc_00361AF0: ;
    _fb = (uint32_t)(6) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM16(0x900F2C)) + (uint64_t)(6)) >> 16) & 1);
    MEM16(0x900F2C) = MEM16(0x900F2C) + 6;
    _fa = (uint32_t)(MEM16(0x900F2C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_00361AF8: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x646E6670) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x646E6670 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00361B55; /* jne: not equal / not zero */

loc_00361B00: ;
    eax = ZX16(LO16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6669) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6669 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00361B2F; /* jg: greater (signed >) */

loc_00361B0A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00361B3D; /* je: equal / zero */

loc_00361B0C: ;
    _fb = (uint32_t)(0x6373) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x6373));
    eax = eax - 0x6373;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00361B55; /* je: equal / zero */

loc_00361B13: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(7));
    eax = eax - 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00361B55; /* je: equal / zero */

loc_00361B18: ;
    _fb = (uint32_t)(0xEB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xEB));
    eax = eax - 0xEB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00361B55; /* jne: not equal / not zero */

loc_00361B1F: ;
    _fb = (uint32_t)(5) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM16(0x900F2C)) + (uint64_t)(5)) >> 16) & 1);
    MEM16(0x900F2C) = MEM16(0x900F2C) + 5;
    _fa = (uint32_t)(MEM16(0x900F2C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = 0x900F20;
    esp += 12; return; /* ret 8 */

loc_00361B2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6672) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6672 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00361B4D; /* je: equal / zero */

loc_00361B36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7376) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7376 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00361B55; /* jne: not equal / not zero */

loc_00361B3D: ;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM16(0x900F2C)) + (uint64_t)(0xFFFFFFFEu)) >> 16) & 1);
    MEM16(0x900F2C) = MEM16(0x900F2C) + 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM16(0x900F2C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = 0x900F20;
    esp += 12; return; /* ret 8 */

loc_00361B4D: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM16(0x900F2C)) + (uint64_t)(0xFFFFFFF8u)) >> 16) & 1);
    MEM16(0x900F2C) = MEM16(0x900F2C) + 0xFFFFFFF8u;
    _fa = (uint32_t)(MEM16(0x900F2C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_00361B55: ;
    eax = 0x900F20;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00361BB0
 * Original: 0x00361BB0 - 0x003621CD (1565 bytes, 444 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00361BB0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00361BC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361BBEu); } /* indirect call */
    }

loc_00361BC1: ;
    ecx = eax;
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    PUSH32(esp, 0x82F99C);
    edi = edx;
    edx = MEM32(esi);
    PUSH32(esp, 0x24);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x00361BE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361BDFu); } /* indirect call */
    }

loc_00361BE5: ;
    eax = MEM32(esp + 0x3C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x706C766C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x706C766C (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00361ED5; /* ja: above (unsigned >) */

loc_00361BF6: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00361EC9; /* je: equal / zero */

loc_00361BFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x686F7374) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x686F7374 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00361D0E; /* ja: above (unsigned >) */

loc_00361C07: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00361C96; /* je: equal / zero */

loc_00361C0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x666C6772) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x666C6772 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00361C7F; /* ja: above (unsigned >) */

loc_00361C14: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00361C5A; /* je: equal / zero */

loc_00361C16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x646E6670) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x646E6670 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361C4B; /* je: equal / zero */

loc_00361C1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x666C6167) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x666C6167 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362037; /* jne: not equal / not zero */

loc_00361C28: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x900F40);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00361C37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361C31u); } /* indirect call */
    }

loc_00361C37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x900FBF) = LO8(ebx);
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00361C4B: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82F990);
    goto loc_003621AC;

loc_00361C5A: ;
    ecx = 0xB;
    esi = 0x82F95C;
    edi = 0x900F40;
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
    MEM8(0x900FBF) = LO8(ebx);
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00361C7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x676C766C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x676C766C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362037; /* jne: not equal / not zero */

loc_00361C8A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00361C91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361C8Eu); } /* indirect call */
    }

loc_00361C91: ;
    goto loc_003621A6;

loc_00361C96: ;
    MEM8(0x900F40) = LO8(ebx);
    PUSH32(esp, 0x00361CA1u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00361CA1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00361CA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361CA5u); } /* indirect call */
    }

loc_00361CA8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00361CAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361CACu); } /* indirect call */
    }

loc_00361CAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003621B9; /* je: equal / zero */

loc_00361CB7: ;
    PUSH32(esp, 0x00361CBCu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00361CBC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00361CC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361CC0u); } /* indirect call */
    }

loc_00361CC3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00361CCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361CC7u); } /* indirect call */
    }

loc_00361CCA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00361CD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361CCEu); } /* indirect call */
    }

loc_00361CD1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00361CD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361CD5u); } /* indirect call */
    }

loc_00361CD8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00361CDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361CDCu); } /* indirect call */
    }

loc_00361CDF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00361CE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361CE4u); } /* indirect call */
    }

loc_00361CE7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00361CEDu); RECOMP_ABI_CALL(0x004ABAD7u, sub_004ABAD7); /* call 0x004ABAD7 */

loc_00361CED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003621B9; /* je: equal / zero */

loc_00361CF8: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x82F950);
    PUSH32(esp, 0x900F40);
    PUSH32(esp, 0x00361D09u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00361D09: ;
    goto loc_003621B6;

loc_00361D0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F70706F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6F70706F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00361E26; /* ja: above (unsigned >) */

loc_00361D19: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00361D92; /* je: equal / zero */

loc_00361D1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C766C72) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C766C72 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361D66; /* je: equal / zero */

loc_00361D22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E616D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E616D65 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362037; /* jne: not equal / not zero */

loc_00361D2D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x00361D37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361D31u); } /* indirect call */
    }

loc_00361D37: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00361D3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361D3Cu); } /* indirect call */
    }

loc_00361D3F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82F944);
    PUSH32(esp, 0x900F40);
    PUSH32(esp, 0x00361D4Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00361D4F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x900FBF) = LO8(ebx);
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00361D66: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x82F910);
    PUSH32(esp, 0x8237D4);
    PUSH32(esp, 0x900F40);
    PUSH32(esp, 0x00361D7Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00361D7B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x900FBF) = LO8(ebx);
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00361D92: ;
    PUSH32(esp, 0x00361D97u); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_00361D97: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00361D9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361D9Bu); } /* indirect call */
    }

loc_00361D9E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00361DA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361DA2u); } /* indirect call */
    }

loc_00361DA5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362037; /* je: equal / zero */

loc_00361DAF: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00361DB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361DB3u); } /* indirect call */
    }

loc_00361DB6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00361DBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361DBBu); } /* indirect call */
    }

loc_00361DBE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00361DC4u); RECOMP_ABI_CALL(0x004ABAD7u, sub_004ABAD7); /* call 0x004ABAD7 */

loc_00361DC4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361DE1; /* je: equal / zero */

loc_00361DCB: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x82F904);
    PUSH32(esp, 0x900F40);
    PUSH32(esp, 0x00361DDCu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00361DDC: ;
    goto loc_003621B6;

loc_00361DE1: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00361DE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361DE5u); } /* indirect call */
    }

loc_00361DE8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362037; /* je: equal / zero */

loc_00361DF0: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00361DF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361DF4u); } /* indirect call */
    }

loc_00361DF7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00361DFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361DFCu); } /* indirect call */
    }

loc_00361DFF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00361E05u); RECOMP_ABI_CALL(0x004ABAD7u, sub_004ABAD7); /* call 0x004ABAD7 */

loc_00361E05: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362037; /* je: equal / zero */

loc_00361E10: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x82F8FC);
    PUSH32(esp, 0x900F40);
    PUSH32(esp, 0x00361E21u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00361E21: ;
    goto loc_003621B6;

loc_00361E26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70696E67) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70696E67 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362037; /* jne: not equal / not zero */

loc_00361E31: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00361E3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361E35u); } /* indirect call */
    }

loc_00361E3B: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00361EAB; /* je: equal / zero */

loc_00361E3F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00361E73; /* je: equal / zero */

loc_00361E42: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003621B9; /* jne: not equal / not zero */

loc_00361E49: ;
    eax = MEM32(0x82F8F4);
    SET_LO8(ecx, MEM8(0x82F8F8));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x900F40) = eax;
    MEM8(0x900FBF) = LO8(ebx);
    MEM8(0x900F44) = LO8(ecx);
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00361E73: ;
    SET_LO16(eax, MEM16(0x82F8F0));
    edx = MEM32(0x82F8EC);
    SET_LO8(ecx, MEM8(0x82F8F2));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(0x900F44) = LO16(eax);
    MEM8(0x900FBF) = LO8(ebx);
    MEM32(0x900F40) = edx;
    MEM8(0x900F46) = LO8(ecx);
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00361EAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x900FBF) = LO8(ebx);
    MEM32(0x900F40) = 0x776F6C;
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00361EC9: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00361ED0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361ECDu); } /* indirect call */
    }

loc_00361ED0: ;
    goto loc_003621A6;

loc_00361ED5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x72657075) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x72657075 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036201A; /* ja: above (unsigned >) */

loc_00361EE0: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0036200E; /* je: equal / zero */

loc_00361EE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x72656364) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x72656364 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00361FBB; /* ja: above (unsigned >) */

loc_00361EF1: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00361F58; /* je: equal / zero */

loc_00361EF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x706D7472) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x706D7472 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361F32; /* je: equal / zero */

loc_00361EFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x72616E6B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x72616E6B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362037; /* jne: not equal / not zero */

loc_00361F05: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00361F0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361F09u); } /* indirect call */
    }

loc_00361F0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003621A6; /* ja: above (unsigned >) */

loc_00361F14: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x900FBF) = LO8(ebx);
    MEM32(0x900F40) = 0x2D2D2D;
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00361F32: ;
    ecx = 0xA;
    esi = 0x82F8B8;
    edi = 0x900F40;
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
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x900FBF) = LO8(ebx);
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00361F58: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = eax + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00361F8F; /* jle: less or equal (signed <=) */

loc_00361F67: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82F8B0);
    PUSH32(esp, 0x900F40);
    PUSH32(esp, 0x00361F78u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00361F78: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x900FBF) = LO8(ebx);
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00361F8F: ;
    SET_LO16(eax, MEM16(0x82F8AC));
    SET_LO8(ecx, MEM8(0x82F8AE));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(0x900F40) = LO16(eax);
    MEM8(0x900FBF) = LO8(ebx);
    MEM8(0x900F42) = LO8(ecx);
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00361FBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x72657072) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x72657072 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362037; /* jne: not equal / not zero */

loc_00361FC2: ;
    eax = MEM32(0x82F89C);
    edx = MEM32(0x82F898);
    ecx = MEM32(0x82F8A0);
    MEM32(0x900F44) = eax;
    SET_LO8(eax, MEM8(0x82F8A8));
    POP32(esp, edi);
    MEM32(0x900F40) = edx;
    edx = MEM32(0x82F8A4);
    POP32(esp, esi);
    MEM8(0x900F50) = LO8(eax);
    MEM8(0x900FBF) = LO8(ebx);
    MEM32(0x900F48) = ecx;
    MEM32(0x900F4C) = edx;
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0036200E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00362015u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00362012u); } /* indirect call */
    }

loc_00362015: ;
    goto loc_003621A6;

loc_0036201A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x736C766C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x736C766C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036219F; /* je: equal / zero */

loc_00362025: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x76636F6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x76636F6E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362179; /* je: equal / zero */

loc_00362030: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x766F6970) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x766F6970 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362051; /* je: equal / zero */

loc_00362037: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x900F40) = LO8(ebx);
    MEM8(0x900FBF) = LO8(ebx);
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00362051: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x0036205Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00362055u); } /* indirect call */
    }

loc_0036205B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003621B9; /* ja: above (unsigned >) */

loc_00362064: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3621D0); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0036206Bu) goto loc_0036206B;
    if (_jt == 0x00362097u) goto loc_00362097;
    if (_jt == 0x003620C1u) goto loc_003620C1;
    if (_jt == 0x003620EBu) goto loc_003620EB;
    if (_jt == 0x00362123u) goto loc_00362123;
    if (_jt == 0x0036214Fu) goto loc_0036214F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0036206B: ;
    ecx = MEM32(0x826F20);
    SET_LO8(edx, MEM8(0x826F24));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x900FBF) = LO8(ebx);
    MEM32(0x900F40) = ecx;
    MEM8(0x900F44) = LO8(edx);
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00362097: ;
    eax = MEM32(0x82F88C);
    ecx = MEM32(0x82F890);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x900F40) = eax;
    MEM8(0x900FBF) = LO8(ebx);
    MEM32(0x900F44) = ecx;
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_003620C1: ;
    SET_LO8(eax, MEM8(0x82F888));
    edx = MEM32(0x82F884);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x900F44) = LO8(eax);
    MEM8(0x900FBF) = LO8(ebx);
    MEM32(0x900F40) = edx;
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_003620EB: ;
    SET_LO16(eax, MEM16(0x82F880));
    ecx = MEM32(0x82F878);
    edx = MEM32(0x82F87C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(0x900F48) = LO16(eax);
    MEM8(0x900FBF) = LO8(ebx);
    MEM32(0x900F40) = ecx;
    MEM32(0x900F44) = edx;
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00362123: ;
    ecx = MEM32(0x82F86C);
    edx = MEM32(0x82F870);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x900FBF) = LO8(ebx);
    MEM32(0x900F40) = ecx;
    MEM32(0x900F44) = edx;
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0036214F: ;
    eax = MEM32(0x82F864);
    SET_LO8(ecx, MEM8(0x82F868));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x900F40) = eax;
    MEM8(0x900FBF) = LO8(ebx);
    MEM8(0x900F44) = LO8(ecx);
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00362179: ;
    ecx = 0xA;
    esi = 0x82F830;
    edi = 0x900F40;
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
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x900FBF) = LO8(ebx);
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0036219F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x003621A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003621A3u); } /* indirect call */
    }

loc_003621A6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8238C8);

loc_003621AC: ;
    PUSH32(esp, 0x900F40);
    PUSH32(esp, 0x003621B6u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003621B6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003621B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x900FBF) = LO8(ebx);
    eax = 0x900F40;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00362390
 * Original: 0x00362390 - 0x00362397 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362390(void)
{

loc_00362390: ;
    MEM32(ecx) = 0x82F718;
    esp += 4; return; /* ret */

}

/**
 * sub_003623A0
 * Original: 0x003623A0 - 0x0036246C (204 bytes, 63 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003623A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003623A0: ;
    SET_LO8(eax, MEM8(ecx + 4));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx + 4;
    if (CMP_NE(_fa, _fb)) goto loc_00362465; /* jne: not equal / not zero */

loc_003623B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 5) = eax;
    MEM32(esp + 9) = eax;
    MEM32(esp + 0xD) = eax;
    MEM32(esp + 0x11) = eax;
    MEM32(esp + 0x15) = eax;
    MEM32(esp + 0x19) = eax;
    MEM32(esp + 0x1D) = eax;
    MEM16(esp + 0x21) = LO16(eax);
    MEM8(esp + 4) = 0;
    MEM8(esp + 0x23) = LO8(eax);
    PUSH32(esp, 0x003623E3u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_003623E3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x003623EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003623E7u); } /* indirect call */
    }

loc_003623EA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003623F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003623F5u); } /* indirect call */
    }

loc_003623F8: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362465; /* je: equal / zero */

loc_00362400: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x25) = edx;
    MEM32(esp + 0x29) = edx;
    MEM32(esp + 0x2D) = edx;
    MEM32(esp + 0x31) = edx;
    MEM32(esp + 0x35) = edx;
    MEM32(esp + 0x39) = edx;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x28;
    MEM32(esp + 0x41) = edx;
    PUSH32(esp, eax);
    MEM16(esp + 0x49) = LO16(edx);
    PUSH32(esp, 0x82F9B4);
    MEM8(esp + 0x30) = 0;
    MEM8(esp + 0x4F) = LO8(edx);
    PUSH32(esp, 0x0036243Du); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0036243D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00362446u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00362446: ;
    ecx = eax;
    PUSH32(esp, 0x0036244Du); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0036244D: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E0380);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00362462u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00362462: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00362465: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003624A0
 * Original: 0x003624A0 - 0x003624A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003624A0(void)
{

loc_003624A0: ;
    eax = 0x82F9D0;
    esp += 4; return; /* ret */

}

/**
 * sub_003624B0
 * Original: 0x003624B0 - 0x003624C2 (18 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003624B0(void)
{

loc_003624B0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x82F9D4;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003624D0
 * Original: 0x003624D0 - 0x003624D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003624D0(void)
{

loc_003624D0: ;
    MEM32(ecx) = 0x82F72C;
    esp += 4; return; /* ret */

}

/**
 * sub_003624E0
 * Original: 0x003624E0 - 0x00362548 (104 bytes, 30 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003624E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003624E0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00362543; /* ja: above (unsigned >) */

loc_003624E8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x362548); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003624EFu) goto loc_003624EF;
    if (_jt == 0x00362504u) goto loc_00362504;
    if (_jt == 0x00362519u) goto loc_00362519;
    if (_jt == 0x0036252Eu) goto loc_0036252E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003624EF: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x700);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003624FEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003624FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00362504: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x700);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00362513u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00362513: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00362519: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x700);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00362528u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00362528: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0036252E: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x600);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036253Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0036253D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00362543: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003625A0
 * Original: 0x003625A0 - 0x003625A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003625A0(void)
{

loc_003625A0: ;
    eax = ecx;
    MEM32(eax) = 0x82F9E4;
    esp += 4; return; /* ret */

}

/**
 * sub_003625B0
 * Original: 0x003625B0 - 0x003625B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003625B0(void)
{

loc_003625B0: ;
    eax = 0x2710;
    esp += 4; return; /* ret */

}

/**
 * sub_003625C0
 * Original: 0x003625C0 - 0x003625C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003625C0(void)
{

loc_003625C0: ;
    MEM32(ecx) = 0x82F9E4;
    esp += 4; return; /* ret */

}

/**
 * sub_003625D0
 * Original: 0x003625D0 - 0x003625EF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003625D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003625D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F9E4;
    if (TEST_Z(_fa, _fb)) goto loc_003625E9; /* je: equal / zero */

loc_003625E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003625E6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003625E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003625E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362600
 * Original: 0x00362600 - 0x00362609 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362600(void)
{

loc_00362600: ;
    eax = ecx;
    MEM32(eax) = 0x82F9F8;
    esp += 4; return; /* ret */

}

/**
 * sub_00362610
 * Original: 0x00362610 - 0x00362613 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00362610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362610: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00362620
 * Original: 0x00362620 - 0x00362627 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362620(void)
{

loc_00362620: ;
    MEM32(ecx) = 0x82F9E4;
    esp += 4; return; /* ret */

}

/**
 * sub_00362630
 * Original: 0x00362630 - 0x0036264F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362630: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F9E4;
    if (TEST_Z(_fa, _fb)) goto loc_00362649; /* je: equal / zero */

loc_00362640: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00362646u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00362646: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00362649: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362660
 * Original: 0x00362660 - 0x00362686 (38 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362660: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00362676; /* je: equal / zero */

loc_00362665: ;
    esi = ecx + 8;
    PUSH32(esp, 0x0036266Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036266D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00362674u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00362672u); } /* indirect call */
    }

loc_00362674: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00362676: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0036267Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036267D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00362684u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00362682u); } /* indirect call */
    }

loc_00362684: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00362690
 * Original: 0x00362690 - 0x003626B8 (40 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362690: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003626A7; /* je: equal / zero */

loc_00362695: ;
    esi = ecx + 8;
    PUSH32(esp, 0x0036269Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036269D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003626A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003626A2u); } /* indirect call */
    }

loc_003626A5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003626A7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x003626AEu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_003626AE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003626B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003626B3u); } /* indirect call */
    }

loc_003626B6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003626D0
 * Original: 0x003626D0 - 0x003626D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003626D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003626D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003626E0
 * Original: 0x003626E0 - 0x003626E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003626E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003626E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003626F0
 * Original: 0x003626F0 - 0x00362727 (55 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003626F0(void)
{

loc_003626F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = edi;
    MEM32(esi) = 0x82F9F8;
    PUSH32(esp, 0x00362705u); RECOMP_ABI_CALL(0x004AD92Bu, sub_004AD92B); /* call 0x004AD92B */

loc_00362705: ;
    ebx = esi + 8;
    ecx = ebx;
    PUSH32(esp, 0x0036270Fu); RECOMP_ABI_CALL(0x004DCA26u, sub_004DCA26); /* call 0x004DCA26 */

loc_0036270F: ;
    MEM32(edi) = 0x82FA60;
    POP32(esp, edi);
    MEM32(esi) = 0x82FA24;
    eax = esi;
    POP32(esp, esi);
    MEM32(ebx) = 0x82FA14;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00362740
 * Original: 0x00362740 - 0x00362743 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362740(void)
{

loc_00362740: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362750
 * Original: 0x00362750 - 0x00362753 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362750(void)
{

loc_00362750: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362760
 * Original: 0x00362760 - 0x00362763 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362760(void)
{

loc_00362760: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362770
 * Original: 0x00362770 - 0x00362773 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362770(void)
{

loc_00362770: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362780
 * Original: 0x00362780 - 0x00362783 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362780(void)
{

loc_00362780: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362790
 * Original: 0x00362790 - 0x00362793 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362790(void)
{

loc_00362790: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003627A0
 * Original: 0x003627A0 - 0x003627A3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003627A0(void)
{

loc_003627A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003627B0
 * Original: 0x003627B0 - 0x003627B3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003627B0(void)
{

loc_003627B0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003627C0
 * Original: 0x003627C0 - 0x003627C3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003627C0(void)
{

loc_003627C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003627D0
 * Original: 0x003627D0 - 0x003627D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003627D0(void)
{

loc_003627D0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_003627E0
 * Original: 0x003627E0 - 0x003627F4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003627E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003627E0: ;
    SET_LO8(eax, MEM8(0x9001E0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x82FA90;
    if (CMP_NE(_fa, _fb)) goto loc_003627F3; /* jne: not equal / not zero */

loc_003627EE: ;
    eax = 0x82FA88;

loc_003627F3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00362800
 * Original: 0x00362800 - 0x00362831 (49 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362800(void)
{

loc_00362800: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 8;
    edi = esi + 4;
    MEM32(esi) = 0x82FA24;
    MEM32(edi) = 0x82FA60;
    MEM32(ecx) = 0x82FA14;
    PUSH32(esp, 0x00362821u); RECOMP_ABI_CALL(0x004DCA2Fu, sub_004DCA2F); /* call 0x004DCA2F */

loc_00362821: ;
    ecx = edi;
    PUSH32(esp, 0x00362828u); RECOMP_ABI_CALL(0x004AD93Du, sub_004AD93D); /* call 0x004AD93D */

loc_00362828: ;
    POP32(esp, edi);
    MEM32(esi) = 0x82F9E4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00362840
 * Original: 0x00362840 - 0x00362846 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362840(void)
{

loc_00362840: ;
    eax = 0x82FA94;
    esp += 4; return; /* ret */

}

/**
 * sub_00362850
 * Original: 0x00362850 - 0x00362856 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362850(void)
{

loc_00362850: ;
    eax = 0x2846;
    esp += 4; return; /* ret */

}

/**
 * sub_00362860
 * Original: 0x00362860 - 0x0036288C (44 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362860: ;
    ecx = MEM32(esp + 8);
    eax = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00362889; /* jl: less (signed <) */

loc_0036286D: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00362889; /* jge: greater or equal (signed >=) */

loc_00362873: ;
    PUSH32(esp, 1);
    ecx = 0x8B22D0;
    PUSH32(esp, 0x0036287Fu); RECOMP_ABI_CALL(0x000354FFu, sub_000354FF); /* call 0x000354FF */

loc_0036287F: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00362889u); RECOMP_ABI_CALL(0x0001D3CDu, sub_0001D3CD); /* call 0x0001D3CD */

loc_00362889: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003628A0
 * Original: 0x003628A0 - 0x003628C2 (34 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003628A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003628A0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003628BF; /* jne: not equal / not zero */

loc_003628A7: ;
    PUSH32(esp, 0x003628ACu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_003628AC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003628B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003628B0u); } /* indirect call */
    }

loc_003628B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1D4C0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x003628BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003628BCu); } /* indirect call */
    }

loc_003628BF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003628D0
 * Original: 0x003628D0 - 0x003628D3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003628D0(void)
{

loc_003628D0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003628E0
 * Original: 0x003628E0 - 0x003628E9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003628E0(void)
{

loc_003628E0: ;
    eax = ecx;
    MEM32(eax) = 0x82FAA8;
    esp += 4; return; /* ret */

}

/**
 * sub_003628F0
 * Original: 0x003628F0 - 0x003628F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003628F0(void)
{

loc_003628F0: ;
    eax = MEM32(0x8D7C38);
    esp += 4; return; /* ret */

}

/**
 * sub_00362900
 * Original: 0x00362900 - 0x00362907 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362900(void)
{

loc_00362900: ;
    MEM32(ecx) = 0x82FAA8;
    esp += 4; return; /* ret */

}

/**
 * sub_00362910
 * Original: 0x00362910 - 0x0036292F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362910: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FAA8;
    if (TEST_Z(_fa, _fb)) goto loc_00362929; /* je: equal / zero */

loc_00362920: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00362926u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00362926: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00362929: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362940
 * Original: 0x00362940 - 0x00362949 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362940(void)
{

loc_00362940: ;
    eax = ecx;
    MEM32(eax) = 0x82FAB8;
    esp += 4; return; /* ret */

}

/**
 * sub_00362950
 * Original: 0x00362950 - 0x00362957 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362950(void)
{

loc_00362950: ;
    MEM32(ecx) = 0x82FAA8;
    esp += 4; return; /* ret */

}

/**
 * sub_00362960
 * Original: 0x00362960 - 0x00362977 (23 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362960(void)
{

loc_00362960: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x8C5B30;
    MEM32(ecx) = 6;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00362980
 * Original: 0x00362980 - 0x00362986 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362980(void)
{

loc_00362980: ;
    eax = 0x82FC0C;
    esp += 4; return; /* ret */

}

/**
 * sub_00362990
 * Original: 0x00362990 - 0x00362999 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362990(void)
{

loc_00362990: ;
    eax = ecx;
    MEM32(eax) = 0x82FC20;
    esp += 4; return; /* ret */

}

/**
 * sub_003629A0
 * Original: 0x003629A0 - 0x003629A3 (3 bytes, 1 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003629A0(void)
{

loc_003629A0: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003629B0
 * Original: 0x003629B0 - 0x003629B5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003629B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003629B0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_003629C0
 * Original: 0x003629C0 - 0x003629C5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003629C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003629C0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x2C)); return; /* indirect tail jmp */

}

/**
 * sub_003629D0
 * Original: 0x003629D0 - 0x003629D5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003629D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003629D0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x30)); return; /* indirect tail jmp */

}

/**
 * sub_003629E0
 * Original: 0x003629E0 - 0x003629E5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003629E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003629E0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x34)); return; /* indirect tail jmp */

}

/**
 * sub_003629F0
 * Original: 0x003629F0 - 0x003629F5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003629F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003629F0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x38)); return; /* indirect tail jmp */

}

/**
 * sub_00362A00
 * Original: 0x00362A00 - 0x00362A05 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00362A00: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x3C)); return; /* indirect tail jmp */

}

/**
 * sub_00362A10
 * Original: 0x00362A10 - 0x00362A15 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00362A10: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x40)); return; /* indirect tail jmp */

}

/**
 * sub_00362A20
 * Original: 0x00362A20 - 0x00362A25 (5 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00362A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362A20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00362A30
 * Original: 0x00362A30 - 0x00362A37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362A30(void)
{

loc_00362A30: ;
    MEM32(ecx) = 0x82FC20;
    esp += 4; return; /* ret */

}

/**
 * sub_00362A40
 * Original: 0x00362A40 - 0x00362A5F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362A40: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FC20;
    if (TEST_Z(_fa, _fb)) goto loc_00362A59; /* je: equal / zero */

loc_00362A50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00362A56u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00362A56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00362A59: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362A70
 * Original: 0x00362A70 - 0x00362A79 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362A70(void)
{

loc_00362A70: ;
    eax = ecx;
    MEM32(eax) = 0x82FC78;
    esp += 4; return; /* ret */

}

/**
 * sub_00362A80
 * Original: 0x00362A80 - 0x00362A85 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00362A80: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_00362A90
 * Original: 0x00362A90 - 0x00362A95 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00362A90: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x2C)); return; /* indirect tail jmp */

}

/**
 * sub_00362AA0
 * Original: 0x00362AA0 - 0x00362AA5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00362AA0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x30)); return; /* indirect tail jmp */

}

/**
 * sub_00362AB0
 * Original: 0x00362AB0 - 0x00362AB5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00362AB0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x34)); return; /* indirect tail jmp */

}

/**
 * sub_00362AC0
 * Original: 0x00362AC0 - 0x00362AC5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00362AC0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x38)); return; /* indirect tail jmp */

}

/**
 * sub_00362AD0
 * Original: 0x00362AD0 - 0x00362AD5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00362AD0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x3C)); return; /* indirect tail jmp */

}

/**
 * sub_00362AE0
 * Original: 0x00362AE0 - 0x00362AE5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00362AE0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x40)); return; /* indirect tail jmp */

}

/**
 * sub_00362AF0
 * Original: 0x00362AF0 - 0x00362AF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362AF0(void)
{

loc_00362AF0: ;
    MEM32(ecx) = 0x82FC78;
    esp += 4; return; /* ret */

}

/**
 * sub_00362B00
 * Original: 0x00362B00 - 0x00362B1F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362B00: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FC78;
    if (TEST_Z(_fa, _fb)) goto loc_00362B19; /* je: equal / zero */

loc_00362B10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00362B16u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00362B16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00362B19: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362B30
 * Original: 0x00362B30 - 0x00362B71 (65 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362B30(void)
{

loc_00362B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x82F6F4;
    edi = esi + 0xC;
    MEM32(esi + 4) = 0x82FC78;
    ecx = edi;
    MEM32(esi + 8) = 0x82FC20;
    PUSH32(esp, 0x00362B52u); RECOMP_ABI_CALL(0x004AD96Au, sub_004AD96A); /* call 0x004AD96A */

loc_00362B52: ;
    MEM32(edi) = 0x82FDA0;
    POP32(esp, edi);
    MEM32(esi) = 0x82FD7C;
    MEM32(esi + 4) = 0x82FD28;
    MEM32(esi + 8) = 0x82FCD0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00362B90
 * Original: 0x00362B90 - 0x00362BCB (59 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362B90(void)
{

loc_00362B90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x82FD7C;
    MEM32(esi + 4) = 0x82FD28;
    MEM32(esi + 8) = 0x82FCD0;
    MEM32(ecx) = 0x82FDA0;
    PUSH32(esp, 0x00362BB5u); RECOMP_ABI_CALL(0x004AD973u, sub_004AD973); /* call 0x004AD973 */

loc_00362BB5: ;
    MEM32(esi + 8) = 0x82FC20;
    MEM32(esi + 4) = 0x82FC78;
    MEM32(esi) = 0x82F6F4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00362BE0
 * Original: 0x00362BE0 - 0x00362C2F (79 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362BE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x82FD7C;
    MEM32(esi + 4) = 0x82FD28;
    MEM32(esi + 8) = 0x82FCD0;
    MEM32(ecx) = 0x82FDA0;
    PUSH32(esp, 0x00362C05u); RECOMP_ABI_CALL(0x004AD973u, sub_004AD973); /* call 0x004AD973 */

loc_00362C05: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi + 8) = 0x82FC20;
    MEM32(esi + 4) = 0x82FC78;
    MEM32(esi) = 0x82F6F4;
    if (TEST_Z(_fa, _fb)) goto loc_00362C29; /* je: equal / zero */

loc_00362C20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00362C26u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00362C26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00362C29: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362C50
 * Original: 0x00362C50 - 0x00362C56 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362C50(void)
{

loc_00362C50: ;
    eax = MEM32(0x90E424);
    esp += 4; return; /* ret */

}

/**
 * sub_00362C60
 * Original: 0x00362C60 - 0x00362C6E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362C60(void)
{

loc_00362C60: ;
    eax = ecx;
    MEM32(eax) = 0x82FDAC;
    MEM32(0x90E424) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00362C80
 * Original: 0x00362C80 - 0x00362C91 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362C80(void)
{

loc_00362C80: ;
    MEM32(ecx) = 0x82FDAC;
    MEM32(0x90E424) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00362CA0
 * Original: 0x00362CA0 - 0x00362CC9 (41 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362CA0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FDAC;
    MEM32(0x90E424) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00362CC3; /* je: equal / zero */

loc_00362CBA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00362CC0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00362CC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00362CC3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362CE0
 * Original: 0x00362CE0 - 0x00362CE9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362CE0(void)
{

loc_00362CE0: ;
    eax = ecx;
    MEM32(eax) = 0x82FDE8;
    esp += 4; return; /* ret */

}

/**
 * sub_00362CF0
 * Original: 0x00362CF0 - 0x00362CF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362CF0(void)
{

loc_00362CF0: ;
    MEM32(ecx) = 0x82FDE8;
    esp += 4; return; /* ret */

}

/**
 * sub_00362D00
 * Original: 0x00362D00 - 0x00362D1F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362D00: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FDE8;
    if (TEST_Z(_fa, _fb)) goto loc_00362D19; /* je: equal / zero */

loc_00362D10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00362D16u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00362D16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00362D19: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362D30
 * Original: 0x00362D30 - 0x00362D34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362D30(void)
{

loc_00362D30: ;
    SET_LO8(eax, MEM8(ecx + 0x40));
    esp += 4; return; /* ret */

}

/**
 * sub_00362D40
 * Original: 0x00362D40 - 0x00362D44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362D40(void)
{

loc_00362D40: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00362D50
 * Original: 0x00362D50 - 0x00362D5A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362D50(void)
{

loc_00362D50: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 9) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362D60
 * Original: 0x00362D60 - 0x00362D64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362D60(void)
{

loc_00362D60: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00362D70
 * Original: 0x00362D70 - 0x00362D74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362D70(void)
{

loc_00362D70: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00362D80
 * Original: 0x00362D80 - 0x00362D84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362D80(void)
{

loc_00362D80: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00362D90
 * Original: 0x00362D90 - 0x00362D99 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362D90(void)
{

loc_00362D90: ;
    eax = ecx;
    MEM32(eax) = 0x82FDF8;
    esp += 4; return; /* ret */

}

/**
 * sub_00362DA0
 * Original: 0x00362DA0 - 0x00362DA6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362DA0(void)
{

loc_00362DA0: ;
    eax = 7;
    esp += 4; return; /* ret */

}

/**
 * sub_00362DB0
 * Original: 0x00362DB0 - 0x00362DB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362DB0(void)
{

loc_00362DB0: ;
    MEM32(ecx) = 0x82FDF8;
    esp += 4; return; /* ret */

}

/**
 * sub_00362DC0
 * Original: 0x00362DC0 - 0x00362DDF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362DC0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FDF8;
    if (TEST_Z(_fa, _fb)) goto loc_00362DD9; /* je: equal / zero */

loc_00362DD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00362DD6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00362DD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00362DD9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362DF0
 * Original: 0x00362DF0 - 0x00362E00 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362DF0(void)
{

loc_00362DF0: ;
    eax = ecx;
    MEM32(eax) = 0x82FE08;
    MEM32(eax + 4) = 0x7DFC0C;
    esp += 4; return; /* ret */

}

/**
 * sub_00362E10
 * Original: 0x00362E10 - 0x00362E17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362E10(void)
{

loc_00362E10: ;
    MEM32(ecx) = 0x82F668;
    esp += 4; return; /* ret */

}

/**
 * sub_00362E20
 * Original: 0x00362E20 - 0x00362E3F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362E20: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F668;
    if (TEST_Z(_fa, _fb)) goto loc_00362E39; /* je: equal / zero */

loc_00362E30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00362E36u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00362E36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00362E39: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362E50
 * Original: 0x00362E50 - 0x00362E59 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362E50(void)
{

loc_00362E50: ;
    eax = ecx;
    MEM32(eax) = 0x82FE5C;
    esp += 4; return; /* ret */

}

/**
 * sub_00362E60
 * Original: 0x00362E60 - 0x00362E67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362E60(void)
{

loc_00362E60: ;
    MEM32(ecx) = 0x82FE5C;
    esp += 4; return; /* ret */

}

/**
 * sub_00362E70
 * Original: 0x00362E70 - 0x00362E8F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362E70: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FE5C;
    if (TEST_Z(_fa, _fb)) goto loc_00362E89; /* je: equal / zero */

loc_00362E80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00362E86u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00362E86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00362E89: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362EA0
 * Original: 0x00362EA0 - 0x00362EA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362EA0(void)
{

loc_00362EA0: ;
    eax = ecx;
    MEM32(eax) = 0x82FE68;
    esp += 4; return; /* ret */

}

/**
 * sub_00362EB0
 * Original: 0x00362EB0 - 0x00362EB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362EB0(void)
{

loc_00362EB0: ;
    MEM32(ecx) = 0x82FDE8;
    esp += 4; return; /* ret */

}

/**
 * sub_00362EC0
 * Original: 0x00362EC0 - 0x00362EDF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362EC0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FDE8;
    if (TEST_Z(_fa, _fb)) goto loc_00362ED9; /* je: equal / zero */

loc_00362ED0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00362ED6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00362ED6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00362ED9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362EF0
 * Original: 0x00362EF0 - 0x00362EF9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362EF0(void)
{

loc_00362EF0: ;
    eax = ecx;
    MEM32(eax) = 0x82FE78;
    esp += 4; return; /* ret */

}

/**
 * sub_00362F00
 * Original: 0x00362F00 - 0x00362F03 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00362F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362F00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00362F10
 * Original: 0x00362F10 - 0x00362F18 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362F10(void)
{

loc_00362F10: ;
    eax = 0x7B891F;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362F20
 * Original: 0x00362F20 - 0x00362F27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362F20(void)
{

loc_00362F20: ;
    MEM32(ecx) = 0x82FE78;
    esp += 4; return; /* ret */

}

/**
 * sub_00362F30
 * Original: 0x00362F30 - 0x00362F4F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362F30: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FE78;
    if (TEST_Z(_fa, _fb)) goto loc_00362F49; /* je: equal / zero */

loc_00362F40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00362F46u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00362F46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00362F49: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362F60
 * Original: 0x00362F60 - 0x00362F69 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362F60(void)
{

loc_00362F60: ;
    eax = ecx;
    MEM32(eax) = 0x82FEA8;
    esp += 4; return; /* ret */

}

/**
 * sub_00362F70
 * Original: 0x00362F70 - 0x00362F89 (25 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00362F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362F70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 4);
    PUSH32(esp, 0x7FA48C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00362F81u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_00362F81: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00362F90
 * Original: 0x00362F90 - 0x00362FB1 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00362F90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 4);
    PUSH32(esp, 0x7FA48C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00362FA1u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_00362FA1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00362FC0
 * Original: 0x00362FC0 - 0x00363004 (68 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00362FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362FC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 4);
    PUSH32(esp, 0x7FA48C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00362FD1u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_00362FD1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362FFF; /* jne: not equal / not zero */

loc_00362FD8: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00362FF7; /* je: equal / zero */

loc_00362FE1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00362FEF; /* je: equal / zero */

loc_00362FE4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00362FFF; /* jne: not equal / not zero */

loc_00362FE7: ;
    eax = 0x82FF04;
    esp += 12; return; /* ret 8 */

loc_00362FEF: ;
    eax = 0x82FEF4;
    esp += 12; return; /* ret 8 */

loc_00362FF7: ;
    eax = 0x82FEE4;
    esp += 12; return; /* ret 8 */

loc_00362FFF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00363020
 * Original: 0x00363020 - 0x00363054 (52 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00363020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363020: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 4);
    PUSH32(esp, 0x7FA48C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00363031u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_00363031: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036304F; /* jne: not equal / not zero */

loc_00363038: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00363047; /* je: equal / zero */

loc_00363041: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00363047; /* je: equal / zero */

loc_00363044: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036304F; /* jne: not equal / not zero */

loc_00363047: ;
    eax = 2;
    esp += 12; return; /* ret 8 */

loc_0036304F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00363070
 * Original: 0x00363070 - 0x003630F0 (128 bytes, 44 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00363070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363070: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 4);
    PUSH32(esp, 0x7FA48C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00363081u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_00363081: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003630EB; /* jne: not equal / not zero */

loc_00363088: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003630CF; /* je: equal / zero */

loc_00363091: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003630B3; /* je: equal / zero */

loc_00363094: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003630EB; /* jne: not equal / not zero */

loc_00363097: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003630AB; /* je: equal / zero */

loc_003630A0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003630EB; /* jne: not equal / not zero */

loc_003630A3: ;
    eax = 0x82FF34;
    esp += 16; return; /* ret 12 */

loc_003630AB: ;
    eax = 0x7ED8FC;
    esp += 16; return; /* ret 12 */

loc_003630B3: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003630C7; /* je: equal / zero */

loc_003630BC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003630EB; /* jne: not equal / not zero */

loc_003630BF: ;
    eax = 0x82FF24;
    esp += 16; return; /* ret 12 */

loc_003630C7: ;
    eax = 0x7ED944;
    esp += 16; return; /* ret 12 */

loc_003630CF: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003630E3; /* je: equal / zero */

loc_003630D8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003630EB; /* jne: not equal / not zero */

loc_003630DB: ;
    eax = 0x82FF14;
    esp += 16; return; /* ret 12 */

loc_003630E3: ;
    eax = 0x7ED9C0;
    esp += 16; return; /* ret 12 */

loc_003630EB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363110
 * Original: 0x00363110 - 0x00363117 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363110(void)
{

loc_00363110: ;
    MEM32(ecx) = 0x82FEA8;
    esp += 4; return; /* ret */

}

/**
 * sub_00363120
 * Original: 0x00363120 - 0x0036313F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363120: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FEA8;
    if (TEST_Z(_fa, _fb)) goto loc_00363139; /* je: equal / zero */

loc_00363130: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00363136u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00363136: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00363139: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00363150
 * Original: 0x00363150 - 0x00363159 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363150(void)
{

loc_00363150: ;
    eax = ecx;
    MEM32(eax) = 0x82FF44;
    esp += 4; return; /* ret */

}

/**
 * sub_00363160
 * Original: 0x00363160 - 0x00363167 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363160(void)
{

loc_00363160: ;
    MEM32(ecx) = 0x82FF44;
    esp += 4; return; /* ret */

}

/**
 * sub_00363170
 * Original: 0x00363170 - 0x0036318F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363170: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FF44;
    if (TEST_Z(_fa, _fb)) goto loc_00363189; /* je: equal / zero */

loc_00363180: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00363186u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00363186: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00363189: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003631A0
 * Original: 0x003631A0 - 0x003631A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003631A0(void)
{

loc_003631A0: ;
    eax = ecx;
    MEM32(eax) = 0x82FF68;
    esp += 4; return; /* ret */

}

/**
 * sub_003631B0
 * Original: 0x003631B0 - 0x003631BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003631B0(void)
{

loc_003631B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003631C0
 * Original: 0x003631C0 - 0x003631CA (10 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003631C0(void)
{

loc_003631C0: ;
    MEM32(ecx + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003631D0
 * Original: 0x003631D0 - 0x003631D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003631D0(void)
{

loc_003631D0: ;
    MEM32(ecx) = 0x82FF68;
    esp += 4; return; /* ret */

}

/**
 * sub_003631E0
 * Original: 0x003631E0 - 0x003631FF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003631E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003631E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FF68;
    if (TEST_Z(_fa, _fb)) goto loc_003631F9; /* je: equal / zero */

loc_003631F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003631F6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003631F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003631F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00363210
 * Original: 0x00363210 - 0x0036321E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363210(void)
{

loc_00363210: ;
    eax = ecx;
    MEM32(eax) = 0x82FF84;
    MEM32(0x90E7F4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00363225
 * Original: 0x00363225 - 0x00363230 (11 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363225(void)
{

loc_00363225: ;
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

}

/**
 * sub_00363230
 * Original: 0x00363230 - 0x00363241 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363230(void)
{

loc_00363230: ;
    MEM32(ecx) = 0x82FF84;
    MEM32(0x90E7F4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00363250
 * Original: 0x00363250 - 0x00363279 (41 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363250: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FF84;
    MEM32(0x90E7F4) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00363273; /* je: equal / zero */

loc_0036326A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00363270u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00363270: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00363273: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00363290
 * Original: 0x00363290 - 0x0036329E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363290(void)
{

loc_00363290: ;
    eax = ecx;
    MEM32(eax) = 0x82FF90;
    MEM32(0x90E808) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003632B0
 * Original: 0x003632B0 - 0x003632C1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003632B0(void)
{

loc_003632B0: ;
    MEM32(ecx) = 0x82FF90;
    MEM32(0x90E808) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003632D0
 * Original: 0x003632D0 - 0x003632F9 (41 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003632D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003632D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FF90;
    MEM32(0x90E808) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_003632F3; /* je: equal / zero */

loc_003632EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003632F0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003632F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003632F3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00363310
 * Original: 0x00363310 - 0x00363319 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363310(void)
{

loc_00363310: ;
    eax = ecx;
    MEM32(eax) = 0x82FF9C;
    esp += 4; return; /* ret */

}

/**
 * sub_00363320
 * Original: 0x00363320 - 0x00363327 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363320(void)
{

loc_00363320: ;
    MEM32(ecx) = 0x82FF9C;
    esp += 4; return; /* ret */

}

/**
 * sub_00363330
 * Original: 0x00363330 - 0x0036334F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363330: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FF9C;
    if (TEST_Z(_fa, _fb)) goto loc_00363349; /* je: equal / zero */

loc_00363340: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00363346u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00363346: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00363349: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00363360
 * Original: 0x00363360 - 0x00363369 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363360(void)
{

loc_00363360: ;
    eax = ecx;
    MEM32(eax) = 0x82FFC0;
    esp += 4; return; /* ret */

}

/**
 * sub_00363370
 * Original: 0x00363370 - 0x00363377 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363370(void)
{

loc_00363370: ;
    MEM32(ecx) = 0x82F63C;
    esp += 4; return; /* ret */

}

/**
 * sub_00363380
 * Original: 0x00363380 - 0x0036339F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363380: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F63C;
    if (TEST_Z(_fa, _fb)) goto loc_00363399; /* je: equal / zero */

loc_00363390: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00363396u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00363396: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00363399: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003633B0
 * Original: 0x003633B0 - 0x003633B9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003633B0(void)
{

loc_003633B0: ;
    eax = ecx;
    MEM32(eax) = 0x82FFCC;
    esp += 4; return; /* ret */

}

/**
 * sub_003633C0
 * Original: 0x003633C0 - 0x003633C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003633C0(void)
{

loc_003633C0: ;
    MEM32(ecx) = 0x82F62C;
    esp += 4; return; /* ret */

}

/**
 * sub_003633D0
 * Original: 0x003633D0 - 0x003633EF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003633D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003633D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F62C;
    if (TEST_Z(_fa, _fb)) goto loc_003633E9; /* je: equal / zero */

loc_003633E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003633E6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003633E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003633E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00363400
 * Original: 0x00363400 - 0x00363409 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363400(void)
{

loc_00363400: ;
    eax = ecx;
    MEM32(eax) = 0x82FFD8;
    esp += 4; return; /* ret */

}

/**
 * sub_00363410
 * Original: 0x00363410 - 0x00363413 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00363410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363410: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00363420
 * Original: 0x00363420 - 0x00363423 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00363420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363420: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00363430
 * Original: 0x00363430 - 0x00363437 (7 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363430(void)
{

loc_00363430: ;
    eax = MEM32(esp + 8);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00363440
 * Original: 0x00363440 - 0x00363441 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363440(void)
{

loc_00363440: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00363450
 * Original: 0x00363450 - 0x00363451 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363450(void)
{

loc_00363450: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00363460
 * Original: 0x00363460 - 0x00363465 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00363460: ;
    g_seh_ebp = ebp; sub_004CBFA2(); return; /* tail jmp 0x004CBFA2 */

}

/**
 * sub_00363470
 * Original: 0x00363470 - 0x00363475 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00363470: ;
    g_seh_ebp = ebp; sub_004CC080(); return; /* tail jmp 0x004CC080 */

}

/**
 * sub_00363480
 * Original: 0x00363480 - 0x00363485 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00363480: ;
    g_seh_ebp = ebp; sub_004C2164(); return; /* tail jmp 0x004C2164 */

}
