/**
 * nhl_07_recomp - Recompiled code chunk 77
 * Functions: 250 (0x00066EB0 - 0x000684D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00066EB0
 * Original: 0x00066EB0 - 0x00066F2A (122 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00066EB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066EE6; /* jne: not equal / not zero */

loc_00066EB9: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    MEM32(esi + 8) = eax;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00066EDC; /* je: equal / zero */

loc_00066ED3: ;
    MEM32(ecx) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00066EDC: ;
    MEM32(esi + 4) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00066EE6: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00066F00u); RECOMP_ABI_CALL(0x00013BD4u, sub_00013BD4); /* call 0x00013BD4 */

loc_00066F00: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00066F24; /* jne: not equal / not zero */

loc_00066F08: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_00066F1F; /* jge: greater or equal (signed >=) */

loc_00066F14: ;
    PUSH32(esp, 0x00066F19u); RECOMP_ABI_CALL(0x000303A1u, sub_000303A1); /* call 0x000303A1 */

loc_00066F19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00066F1F: ;
    PUSH32(esp, 0x00066F24u); RECOMP_ABI_CALL(0x000164FBu, sub_000164FB); /* call 0x000164FB */

loc_00066F24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00066F50
 * Original: 0x00066F50 - 0x00066F66 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00066F50: ;
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
 * sub_00066F70
 * Original: 0x00066F70 - 0x00066F78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00066F70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00023F5C(); return; /* tail jmp 0x00023F5C */

}

/**
 * sub_00066F80
 * Original: 0x00066F80 - 0x00066FAB (43 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00066F80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi + 8;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00066F91u); RECOMP_ABI_CALL(0x0001EEA8u, sub_0001EEA8); /* call 0x0001EEA8 */

loc_00066F91: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00066FA4; /* je: equal / zero */

loc_00066F95: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00066F9Du); RECOMP_ABI_CALL(0x00018571u, sub_00018571); /* call 0x00018571 */

loc_00066F9D: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00066FA4: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00066FC0
 * Original: 0x00066FC0 - 0x00066FD6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066FC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00066FC0: ;
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
 * sub_00066FE0
 * Original: 0x00066FE0 - 0x00067029 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00066FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00066FE0: ;
    eax = MEM32(0x8E8EB4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067027; /* jne: not equal / not zero */

loc_00066FEC: ;
    PUSH32(esp, 0x8E8E98);
    PUSH32(esp, 0x18);
    MEM32(0x8E8EB4) = 0x8E8E98;
    PUSH32(esp, 0x00067002u); RECOMP_ABI_CALL(0x000368C8u, sub_000368C8); /* call 0x000368C8 */

loc_00067002: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00067021; /* je: equal / zero */

loc_00067009: ;
    MEM32(eax) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(0x8E8EB4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00067021: ;
    MEM32(0x8E8EB4) = esi;

loc_00067027: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00067040
 * Original: 0x00067040 - 0x00067054 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067040: ;
    eax = MEM32(0x8E8EB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067053; /* jne: not equal / not zero */

loc_00067049: ;
    PUSH32(esp, 0x0006704Eu); RECOMP_ABI_CALL(0x0002BA2Cu, sub_0002BA2C); /* call 0x0002BA2C */

loc_0006704E: ;
    eax = MEM32(0x8E8EB4);

loc_00067053: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00067060
 * Original: 0x00067060 - 0x0006706B (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067060(void)
{

loc_00067060: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067070
 * Original: 0x00067070 - 0x00067079 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067070(void)
{

loc_00067070: ;
    eax = ecx;
    MEM32(eax) = 0x7B1124;
    esp += 4; return; /* ret */

}

/**
 * sub_00067080
 * Original: 0x00067080 - 0x00067089 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067080(void)
{

loc_00067080: ;
    eax = ecx;
    MEM32(eax) = 0x7B1134;
    esp += 4; return; /* ret */

}

/**
 * sub_00067090
 * Original: 0x00067090 - 0x00067093 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067090: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000670A0
 * Original: 0x000670A0 - 0x000670AD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000670A0(void)
{

loc_000670A0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1144;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000670B0
 * Original: 0x000670B0 - 0x000670C5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000670B0(void)
{

loc_000670B0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xB7;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000670D0
 * Original: 0x000670D0 - 0x000670D9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000670D0(void)
{

loc_000670D0: ;
    eax = ecx;
    MEM32(eax) = 0x7B115C;
    esp += 4; return; /* ret */

}

/**
 * sub_000670E0
 * Original: 0x000670E0 - 0x000670E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000670E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000670E0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000670F0
 * Original: 0x000670F0 - 0x000670FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000670F0(void)
{

loc_000670F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B116C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067100
 * Original: 0x00067100 - 0x00067115 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067100(void)
{

loc_00067100: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xB8;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067120
 * Original: 0x00067120 - 0x00067129 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067120(void)
{

loc_00067120: ;
    eax = ecx;
    MEM32(eax) = 0x7B1180;
    esp += 4; return; /* ret */

}

/**
 * sub_00067130
 * Original: 0x00067130 - 0x00067133 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067130: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067140
 * Original: 0x00067140 - 0x0006714D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067140(void)
{

loc_00067140: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1190;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067150
 * Original: 0x00067150 - 0x00067165 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067150(void)
{

loc_00067150: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xB1;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067170
 * Original: 0x00067170 - 0x00067179 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067170(void)
{

loc_00067170: ;
    eax = ecx;
    MEM32(eax) = 0x7B11A4;
    esp += 4; return; /* ret */

}

/**
 * sub_00067180
 * Original: 0x00067180 - 0x00067183 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067180: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067190
 * Original: 0x00067190 - 0x0006719D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067190(void)
{

loc_00067190: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B11B4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000671A0
 * Original: 0x000671A0 - 0x000671B5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000671A0(void)
{

loc_000671A0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xB2;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000671C0
 * Original: 0x000671C0 - 0x000671C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000671C0(void)
{

loc_000671C0: ;
    eax = ecx;
    MEM32(eax) = 0x7B11C8;
    esp += 4; return; /* ret */

}

/**
 * sub_000671D0
 * Original: 0x000671D0 - 0x000671D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000671D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000671D0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000671E0
 * Original: 0x000671E0 - 0x000671ED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000671E0(void)
{

loc_000671E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B11D8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000671F0
 * Original: 0x000671F0 - 0x00067205 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000671F0(void)
{

loc_000671F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xB3;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067210
 * Original: 0x00067210 - 0x00067219 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067210(void)
{

loc_00067210: ;
    eax = ecx;
    MEM32(eax) = 0x7B11EC;
    esp += 4; return; /* ret */

}

/**
 * sub_00067220
 * Original: 0x00067220 - 0x00067223 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067220: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067230
 * Original: 0x00067230 - 0x0006723D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067230(void)
{

loc_00067230: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B11FC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067240
 * Original: 0x00067240 - 0x00067255 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067240(void)
{

loc_00067240: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xB4;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067260
 * Original: 0x00067260 - 0x00067269 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067260(void)
{

loc_00067260: ;
    eax = ecx;
    MEM32(eax) = 0x7B1210;
    esp += 4; return; /* ret */

}

/**
 * sub_00067270
 * Original: 0x00067270 - 0x00067273 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067270: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067280
 * Original: 0x00067280 - 0x0006728D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067280(void)
{

loc_00067280: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1220;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067290
 * Original: 0x00067290 - 0x000672A5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067290(void)
{

loc_00067290: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xB5;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000672B0
 * Original: 0x000672B0 - 0x000672B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000672B0(void)
{

loc_000672B0: ;
    eax = ecx;
    MEM32(eax) = 0x7B1234;
    esp += 4; return; /* ret */

}

/**
 * sub_000672C0
 * Original: 0x000672C0 - 0x000672C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000672C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000672C0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000672D0
 * Original: 0x000672D0 - 0x000672DD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000672D0(void)
{

loc_000672D0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1244;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000672E0
 * Original: 0x000672E0 - 0x000672F5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000672E0(void)
{

loc_000672E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xB9;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067300
 * Original: 0x00067300 - 0x00067309 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067300(void)
{

loc_00067300: ;
    eax = ecx;
    MEM32(eax) = 0x7B1258;
    esp += 4; return; /* ret */

}

/**
 * sub_00067310
 * Original: 0x00067310 - 0x00067313 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067310: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067320
 * Original: 0x00067320 - 0x0006732D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067320(void)
{

loc_00067320: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1268;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067330
 * Original: 0x00067330 - 0x00067345 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067330(void)
{

loc_00067330: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xBA;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067350
 * Original: 0x00067350 - 0x00067359 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067350(void)
{

loc_00067350: ;
    eax = ecx;
    MEM32(eax) = 0x7B127C;
    esp += 4; return; /* ret */

}

/**
 * sub_00067360
 * Original: 0x00067360 - 0x00067363 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067360: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067370
 * Original: 0x00067370 - 0x0006737D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067370(void)
{

loc_00067370: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B128C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067380
 * Original: 0x00067380 - 0x00067395 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067380(void)
{

loc_00067380: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xBB;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000673A0
 * Original: 0x000673A0 - 0x000673A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000673A0(void)
{

loc_000673A0: ;
    eax = ecx;
    MEM32(eax) = 0x7B12A0;
    esp += 4; return; /* ret */

}

/**
 * sub_000673B0
 * Original: 0x000673B0 - 0x000673B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000673B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000673B0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000673C0
 * Original: 0x000673C0 - 0x000673CD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000673C0(void)
{

loc_000673C0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B12B0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000673D0
 * Original: 0x000673D0 - 0x000673E5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000673D0(void)
{

loc_000673D0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xBC;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000673F0
 * Original: 0x000673F0 - 0x000673F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000673F0(void)
{

loc_000673F0: ;
    eax = ecx;
    MEM32(eax) = 0x7B12C4;
    esp += 4; return; /* ret */

}

/**
 * sub_00067400
 * Original: 0x00067400 - 0x00067403 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067400: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067410
 * Original: 0x00067410 - 0x0006741D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067410(void)
{

loc_00067410: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B12D4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067420
 * Original: 0x00067420 - 0x00067435 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067420(void)
{

loc_00067420: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xBD;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067440
 * Original: 0x00067440 - 0x00067449 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067440(void)
{

loc_00067440: ;
    eax = ecx;
    MEM32(eax) = 0x7B12E8;
    esp += 4; return; /* ret */

}

/**
 * sub_00067450
 * Original: 0x00067450 - 0x00067453 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067450: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067460
 * Original: 0x00067460 - 0x0006746D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067460(void)
{

loc_00067460: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B12F8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067470
 * Original: 0x00067470 - 0x00067485 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067470(void)
{

loc_00067470: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xBE;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067490
 * Original: 0x00067490 - 0x00067499 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067490(void)
{

loc_00067490: ;
    eax = ecx;
    MEM32(eax) = 0x7B130C;
    esp += 4; return; /* ret */

}

/**
 * sub_000674A0
 * Original: 0x000674A0 - 0x000674A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000674A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000674A0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000674B0
 * Original: 0x000674B0 - 0x000674BD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000674B0(void)
{

loc_000674B0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B131C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000674C0
 * Original: 0x000674C0 - 0x000674D5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000674C0(void)
{

loc_000674C0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xBF;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000674E0
 * Original: 0x000674E0 - 0x000674E9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000674E0(void)
{

loc_000674E0: ;
    eax = ecx;
    MEM32(eax) = 0x7B1330;
    esp += 4; return; /* ret */

}

/**
 * sub_000674F0
 * Original: 0x000674F0 - 0x000674F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000674F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000674F0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067500
 * Original: 0x00067500 - 0x0006750D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067500(void)
{

loc_00067500: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1340;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067510
 * Original: 0x00067510 - 0x00067525 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067510(void)
{

loc_00067510: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xC0;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067530
 * Original: 0x00067530 - 0x00067539 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067530(void)
{

loc_00067530: ;
    eax = ecx;
    MEM32(eax) = 0x7B1354;
    esp += 4; return; /* ret */

}

/**
 * sub_00067540
 * Original: 0x00067540 - 0x00067543 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067540: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067550
 * Original: 0x00067550 - 0x0006755D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067550(void)
{

loc_00067550: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1364;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067560
 * Original: 0x00067560 - 0x00067575 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067560(void)
{

loc_00067560: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xC1;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067580
 * Original: 0x00067580 - 0x00067589 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067580(void)
{

loc_00067580: ;
    eax = ecx;
    MEM32(eax) = 0x7B1378;
    esp += 4; return; /* ret */

}

/**
 * sub_00067590
 * Original: 0x00067590 - 0x00067593 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067590: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000675A0
 * Original: 0x000675A0 - 0x000675AD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000675A0(void)
{

loc_000675A0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1388;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000675B0
 * Original: 0x000675B0 - 0x000675C5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000675B0(void)
{

loc_000675B0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xC2;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000675D0
 * Original: 0x000675D0 - 0x000675D9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000675D0(void)
{

loc_000675D0: ;
    eax = ecx;
    MEM32(eax) = 0x7B139C;
    esp += 4; return; /* ret */

}

/**
 * sub_000675E0
 * Original: 0x000675E0 - 0x000675E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000675E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000675E0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000675F0
 * Original: 0x000675F0 - 0x000675FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000675F0(void)
{

loc_000675F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B13AC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067600
 * Original: 0x00067600 - 0x00067615 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067600(void)
{

loc_00067600: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xC3;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067620
 * Original: 0x00067620 - 0x00067629 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067620(void)
{

loc_00067620: ;
    eax = ecx;
    MEM32(eax) = 0x7B13C0;
    esp += 4; return; /* ret */

}

/**
 * sub_00067630
 * Original: 0x00067630 - 0x00067633 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067630: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067640
 * Original: 0x00067640 - 0x0006764D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067640(void)
{

loc_00067640: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B13D0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067650
 * Original: 0x00067650 - 0x00067665 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067650(void)
{

loc_00067650: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xC4;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067670
 * Original: 0x00067670 - 0x00067679 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067670(void)
{

loc_00067670: ;
    eax = ecx;
    MEM32(eax) = 0x7B13E4;
    esp += 4; return; /* ret */

}

/**
 * sub_00067680
 * Original: 0x00067680 - 0x00067683 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067680: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067690
 * Original: 0x00067690 - 0x0006769D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067690(void)
{

loc_00067690: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B13F4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000676A0
 * Original: 0x000676A0 - 0x000676B5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000676A0(void)
{

loc_000676A0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x10E;
    MEM32(eax + 0x30) = 2;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000676C0
 * Original: 0x000676C0 - 0x000676C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000676C0(void)
{

loc_000676C0: ;
    eax = ecx;
    MEM32(eax) = 0x7B1404;
    esp += 4; return; /* ret */

}

/**
 * sub_000676D0
 * Original: 0x000676D0 - 0x000676D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000676D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000676D0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000676E0
 * Original: 0x000676E0 - 0x000676ED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000676E0(void)
{

loc_000676E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1414;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000676F0
 * Original: 0x000676F0 - 0x00067705 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000676F0(void)
{

loc_000676F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x111;
    MEM32(eax + 0x30) = 2;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067710
 * Original: 0x00067710 - 0x00067719 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067710(void)
{

loc_00067710: ;
    eax = ecx;
    MEM32(eax) = 0x7B1424;
    esp += 4; return; /* ret */

}

/**
 * sub_00067720
 * Original: 0x00067720 - 0x00067723 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067720: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067730
 * Original: 0x00067730 - 0x0006773D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067730(void)
{

loc_00067730: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1434;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067740
 * Original: 0x00067740 - 0x00067755 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067740(void)
{

loc_00067740: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x110;
    MEM32(eax + 0x30) = 2;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067760
 * Original: 0x00067760 - 0x00067769 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067760(void)
{

loc_00067760: ;
    eax = ecx;
    MEM32(eax) = 0x7B1444;
    esp += 4; return; /* ret */

}

/**
 * sub_00067770
 * Original: 0x00067770 - 0x00067773 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067770: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067780
 * Original: 0x00067780 - 0x0006778D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067780(void)
{

loc_00067780: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1454;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067790
 * Original: 0x00067790 - 0x000677A5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067790(void)
{

loc_00067790: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xA9;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000677B0
 * Original: 0x000677B0 - 0x000677B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000677B0(void)
{

loc_000677B0: ;
    eax = ecx;
    MEM32(eax) = 0x7B1468;
    esp += 4; return; /* ret */

}

/**
 * sub_000677C0
 * Original: 0x000677C0 - 0x000677C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000677C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000677C0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000677D0
 * Original: 0x000677D0 - 0x000677DD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000677D0(void)
{

loc_000677D0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1478;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000677E0
 * Original: 0x000677E0 - 0x000677F5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000677E0(void)
{

loc_000677E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xAA;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067800
 * Original: 0x00067800 - 0x00067809 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067800(void)
{

loc_00067800: ;
    eax = ecx;
    MEM32(eax) = 0x7B148C;
    esp += 4; return; /* ret */

}

/**
 * sub_00067810
 * Original: 0x00067810 - 0x00067813 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067810: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067820
 * Original: 0x00067820 - 0x0006782D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067820(void)
{

loc_00067820: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B149C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067830
 * Original: 0x00067830 - 0x00067845 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067830(void)
{

loc_00067830: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xAC;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067850
 * Original: 0x00067850 - 0x00067859 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067850(void)
{

loc_00067850: ;
    eax = ecx;
    MEM32(eax) = 0x7B14B0;
    esp += 4; return; /* ret */

}

/**
 * sub_00067860
 * Original: 0x00067860 - 0x00067863 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067860: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067870
 * Original: 0x00067870 - 0x0006787D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067870(void)
{

loc_00067870: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B14C0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067880
 * Original: 0x00067880 - 0x00067895 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067880(void)
{

loc_00067880: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xAD;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000678A0
 * Original: 0x000678A0 - 0x000678A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000678A0(void)
{

loc_000678A0: ;
    eax = ecx;
    MEM32(eax) = 0x7B14D4;
    esp += 4; return; /* ret */

}

/**
 * sub_000678B0
 * Original: 0x000678B0 - 0x000678B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000678B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000678B0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000678C0
 * Original: 0x000678C0 - 0x000678CD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000678C0(void)
{

loc_000678C0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B14E4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000678D0
 * Original: 0x000678D0 - 0x000678E5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000678D0(void)
{

loc_000678D0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x9B;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000678F0
 * Original: 0x000678F0 - 0x000678F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000678F0(void)
{

loc_000678F0: ;
    eax = ecx;
    MEM32(eax) = 0x7B14F8;
    esp += 4; return; /* ret */

}

/**
 * sub_00067900
 * Original: 0x00067900 - 0x00067903 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067900: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067910
 * Original: 0x00067910 - 0x0006791D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067910(void)
{

loc_00067910: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1508;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067920
 * Original: 0x00067920 - 0x00067935 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067920(void)
{

loc_00067920: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x9C;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067940
 * Original: 0x00067940 - 0x00067949 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067940(void)
{

loc_00067940: ;
    eax = ecx;
    MEM32(eax) = 0x7B151C;
    esp += 4; return; /* ret */

}

/**
 * sub_00067950
 * Original: 0x00067950 - 0x00067953 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067950: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067960
 * Original: 0x00067960 - 0x0006796D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067960(void)
{

loc_00067960: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B152C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067970
 * Original: 0x00067970 - 0x00067985 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067970(void)
{

loc_00067970: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x9D;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067990
 * Original: 0x00067990 - 0x00067999 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067990(void)
{

loc_00067990: ;
    eax = ecx;
    MEM32(eax) = 0x7B1540;
    esp += 4; return; /* ret */

}

/**
 * sub_000679A0
 * Original: 0x000679A0 - 0x000679A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000679A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000679A0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000679B0
 * Original: 0x000679B0 - 0x000679BD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000679B0(void)
{

loc_000679B0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1550;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000679C0
 * Original: 0x000679C0 - 0x000679D5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000679C0(void)
{

loc_000679C0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x9E;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000679E0
 * Original: 0x000679E0 - 0x000679E9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000679E0(void)
{

loc_000679E0: ;
    eax = ecx;
    MEM32(eax) = 0x7B1564;
    esp += 4; return; /* ret */

}

/**
 * sub_000679F0
 * Original: 0x000679F0 - 0x000679F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000679F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000679F0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067A00
 * Original: 0x00067A00 - 0x00067A0D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067A00(void)
{

loc_00067A00: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1574;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067A10
 * Original: 0x00067A10 - 0x00067A25 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067A10(void)
{

loc_00067A10: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x9F;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067A30
 * Original: 0x00067A30 - 0x00067A39 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067A30(void)
{

loc_00067A30: ;
    eax = ecx;
    MEM32(eax) = 0x7B1588;
    esp += 4; return; /* ret */

}

/**
 * sub_00067A40
 * Original: 0x00067A40 - 0x00067A43 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067A40: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067A50
 * Original: 0x00067A50 - 0x00067A5D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067A50(void)
{

loc_00067A50: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1598;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067A60
 * Original: 0x00067A60 - 0x00067A75 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067A60(void)
{

loc_00067A60: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xA5;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067A80
 * Original: 0x00067A80 - 0x00067A89 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067A80(void)
{

loc_00067A80: ;
    eax = ecx;
    MEM32(eax) = 0x7B15AC;
    esp += 4; return; /* ret */

}

/**
 * sub_00067A90
 * Original: 0x00067A90 - 0x00067A93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067A90: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067AA0
 * Original: 0x00067AA0 - 0x00067AAD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067AA0(void)
{

loc_00067AA0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B15BC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067AB0
 * Original: 0x00067AB0 - 0x00067AC5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067AB0(void)
{

loc_00067AB0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xA7;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067AD0
 * Original: 0x00067AD0 - 0x00067AD9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067AD0(void)
{

loc_00067AD0: ;
    eax = ecx;
    MEM32(eax) = 0x7B15D4;
    esp += 4; return; /* ret */

}

/**
 * sub_00067AE0
 * Original: 0x00067AE0 - 0x00067AE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067AE0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067AF0
 * Original: 0x00067AF0 - 0x00067AFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067AF0(void)
{

loc_00067AF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B15E4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067B00
 * Original: 0x00067B00 - 0x00067B15 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067B00(void)
{

loc_00067B00: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xA0;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067B20
 * Original: 0x00067B20 - 0x00067B29 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067B20(void)
{

loc_00067B20: ;
    eax = ecx;
    MEM32(eax) = 0x7B15F8;
    esp += 4; return; /* ret */

}

/**
 * sub_00067B30
 * Original: 0x00067B30 - 0x00067B33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067B30: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067B40
 * Original: 0x00067B40 - 0x00067B4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067B40(void)
{

loc_00067B40: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1608;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067B50
 * Original: 0x00067B50 - 0x00067B65 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067B50(void)
{

loc_00067B50: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xA3;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067B70
 * Original: 0x00067B70 - 0x00067B79 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067B70(void)
{

loc_00067B70: ;
    eax = ecx;
    MEM32(eax) = 0x7B161C;
    esp += 4; return; /* ret */

}

/**
 * sub_00067B80
 * Original: 0x00067B80 - 0x00067B83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067B80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067B80: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067B90
 * Original: 0x00067B90 - 0x00067B9D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067B90(void)
{

loc_00067B90: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B162C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067BA0
 * Original: 0x00067BA0 - 0x00067BB5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067BA0(void)
{

loc_00067BA0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xA6;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067BC0
 * Original: 0x00067BC0 - 0x00067BC9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067BC0(void)
{

loc_00067BC0: ;
    eax = ecx;
    MEM32(eax) = 0x7B1640;
    esp += 4; return; /* ret */

}

/**
 * sub_00067BD0
 * Original: 0x00067BD0 - 0x00067BD3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067BD0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067BE0
 * Original: 0x00067BE0 - 0x00067BED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067BE0(void)
{

loc_00067BE0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1650;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067BF0
 * Original: 0x00067BF0 - 0x00067C05 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067BF0(void)
{

loc_00067BF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xA8;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067C10
 * Original: 0x00067C10 - 0x00067C19 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067C10(void)
{

loc_00067C10: ;
    eax = ecx;
    MEM32(eax) = 0x7B1664;
    esp += 4; return; /* ret */

}

/**
 * sub_00067C20
 * Original: 0x00067C20 - 0x00067C23 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067C20: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067C30
 * Original: 0x00067C30 - 0x00067C3D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067C30(void)
{

loc_00067C30: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1674;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067C40
 * Original: 0x00067C40 - 0x00067C55 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067C40(void)
{

loc_00067C40: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xAB;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067C60
 * Original: 0x00067C60 - 0x00067C69 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067C60(void)
{

loc_00067C60: ;
    eax = ecx;
    MEM32(eax) = 0x7B1688;
    esp += 4; return; /* ret */

}

/**
 * sub_00067C70
 * Original: 0x00067C70 - 0x00067C73 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067C70: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067C80
 * Original: 0x00067C80 - 0x00067C8D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067C80(void)
{

loc_00067C80: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1698;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067C90
 * Original: 0x00067C90 - 0x00067CA5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067C90(void)
{

loc_00067C90: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xA2;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067CB0
 * Original: 0x00067CB0 - 0x00067CB9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067CB0(void)
{

loc_00067CB0: ;
    eax = ecx;
    MEM32(eax) = 0x7B16AC;
    esp += 4; return; /* ret */

}

/**
 * sub_00067CC0
 * Original: 0x00067CC0 - 0x00067CC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067CC0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067CD0
 * Original: 0x00067CD0 - 0x00067CDD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067CD0(void)
{

loc_00067CD0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B16BC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067CE0
 * Original: 0x00067CE0 - 0x00067CF5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067CE0(void)
{

loc_00067CE0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xA4;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067D00
 * Original: 0x00067D00 - 0x00067D09 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067D00(void)
{

loc_00067D00: ;
    eax = ecx;
    MEM32(eax) = 0x7B16D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00067D10
 * Original: 0x00067D10 - 0x00067D13 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067D10: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067D20
 * Original: 0x00067D20 - 0x00067D2D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067D20(void)
{

loc_00067D20: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B16E0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067D30
 * Original: 0x00067D30 - 0x00067D45 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067D30(void)
{

loc_00067D30: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xA1;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067D50
 * Original: 0x00067D50 - 0x00067D59 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067D50(void)
{

loc_00067D50: ;
    eax = ecx;
    MEM32(eax) = 0x7B16F4;
    esp += 4; return; /* ret */

}

/**
 * sub_00067D60
 * Original: 0x00067D60 - 0x00067D63 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067D60: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067D70
 * Original: 0x00067D70 - 0x00067D7D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067D70(void)
{

loc_00067D70: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1704;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067D80
 * Original: 0x00067D80 - 0x00067D95 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067D80(void)
{

loc_00067D80: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x8C;
    MEM32(eax + 0x30) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067DA0
 * Original: 0x00067DA0 - 0x00067DA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067DA0(void)
{

loc_00067DA0: ;
    eax = ecx;
    MEM32(eax) = 0x7B1714;
    esp += 4; return; /* ret */

}

/**
 * sub_00067DB0
 * Original: 0x00067DB0 - 0x00067DB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067DB0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067DC0
 * Original: 0x00067DC0 - 0x00067DCD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067DC0(void)
{

loc_00067DC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1724;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067DD0
 * Original: 0x00067DD0 - 0x00067DE5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067DD0(void)
{

loc_00067DD0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x8D;
    MEM32(eax + 0x30) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067DF0
 * Original: 0x00067DF0 - 0x00067DF9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067DF0(void)
{

loc_00067DF0: ;
    eax = ecx;
    MEM32(eax) = 0x7B1734;
    esp += 4; return; /* ret */

}

/**
 * sub_00067E00
 * Original: 0x00067E00 - 0x00067E03 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067E00: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067E10
 * Original: 0x00067E10 - 0x00067E1D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067E10(void)
{

loc_00067E10: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1744;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067E20
 * Original: 0x00067E20 - 0x00067E35 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067E20(void)
{

loc_00067E20: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x94;
    MEM32(eax + 0x30) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067E40
 * Original: 0x00067E40 - 0x00067E49 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067E40(void)
{

loc_00067E40: ;
    eax = ecx;
    MEM32(eax) = 0x7B1758;
    esp += 4; return; /* ret */

}

/**
 * sub_00067E50
 * Original: 0x00067E50 - 0x00067E53 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067E50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067E50: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067E60
 * Original: 0x00067E60 - 0x00067E6D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067E60(void)
{

loc_00067E60: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B1768;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067E70
 * Original: 0x00067E70 - 0x00067E85 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067E70(void)
{

loc_00067E70: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x95;
    MEM32(eax + 0x30) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067E90
 * Original: 0x00067E90 - 0x00067E99 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067E90(void)
{

loc_00067E90: ;
    eax = ecx;
    MEM32(eax) = 0x7B177C;
    esp += 4; return; /* ret */

}

/**
 * sub_00067EA0
 * Original: 0x00067EA0 - 0x00067EA3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067EA0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067EB0
 * Original: 0x00067EB0 - 0x00067EBD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067EB0(void)
{

loc_00067EB0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B178C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067EC0
 * Original: 0x00067EC0 - 0x00067ED5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067EC0(void)
{

loc_00067EC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x6B;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067EE0
 * Original: 0x00067EE0 - 0x00067EE9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067EE0(void)
{

loc_00067EE0: ;
    eax = ecx;
    MEM32(eax) = 0x7B179C;
    esp += 4; return; /* ret */

}

/**
 * sub_00067EF0
 * Original: 0x00067EF0 - 0x00067EF3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067EF0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067F00
 * Original: 0x00067F00 - 0x00067F0D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067F00(void)
{

loc_00067F00: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B17AC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067F10
 * Original: 0x00067F10 - 0x00067F25 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067F10(void)
{

loc_00067F10: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x6C;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067F30
 * Original: 0x00067F30 - 0x00067F39 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067F30(void)
{

loc_00067F30: ;
    eax = ecx;
    MEM32(eax) = 0x7B17BC;
    esp += 4; return; /* ret */

}

/**
 * sub_00067F40
 * Original: 0x00067F40 - 0x00067F43 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067F40: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067F50
 * Original: 0x00067F50 - 0x00067F5D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067F50(void)
{

loc_00067F50: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B17CC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067F60
 * Original: 0x00067F60 - 0x00067F75 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067F60(void)
{

loc_00067F60: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x6D;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067F80
 * Original: 0x00067F80 - 0x00067F89 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067F80(void)
{

loc_00067F80: ;
    eax = ecx;
    MEM32(eax) = 0x7B17DC;
    esp += 4; return; /* ret */

}

/**
 * sub_00067F90
 * Original: 0x00067F90 - 0x00067F93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067F90: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067FA0
 * Original: 0x00067FA0 - 0x00067FAD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067FA0(void)
{

loc_00067FA0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B17EC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067FB0
 * Original: 0x00067FB0 - 0x00067FC5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067FB0(void)
{

loc_00067FB0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x6E;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067FD0
 * Original: 0x00067FD0 - 0x00067FD3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067FD0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00067FE0
 * Original: 0x00067FE0 - 0x00067FE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067FE0(void)
{

loc_00067FE0: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00067FF0
 * Original: 0x00067FF0 - 0x00067FF9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067FF0(void)
{

loc_00067FF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068000
 * Original: 0x00068000 - 0x0006800A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068000(void)
{

loc_00068000: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068010
 * Original: 0x00068010 - 0x00068014 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068010(void)
{

loc_00068010: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00068020
 * Original: 0x00068020 - 0x00068024 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068020(void)
{

loc_00068020: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00068030
 * Original: 0x00068030 - 0x00068033 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068030(void)
{

loc_00068030: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00068040
 * Original: 0x00068040 - 0x00068044 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068040(void)
{

loc_00068040: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00068050
 * Original: 0x00068050 - 0x00068053 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068050(void)
{

loc_00068050: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00068060
 * Original: 0x00068060 - 0x00068064 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068060(void)
{

loc_00068060: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00068070
 * Original: 0x00068070 - 0x0006808F (31 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068070: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006808C; /* je: equal / zero */

loc_00068078: ;
    ecx = MEM32(esp + 8);
    /* nop */

loc_00068080: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006808C; /* jle: less or equal (signed <=) */

loc_00068084: ;
    eax = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00068080; /* jne: not equal / not zero */

loc_0006808C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000680A0
 * Original: 0x000680A0 - 0x000680BE (30 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000680A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000680A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000680BB; /* je: equal / zero */

loc_000680A8: ;
    ecx = MEM32(esp + 8);
    /* nop */

loc_000680B0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000680BB; /* jle: less or equal (signed <=) */

loc_000680B4: ;
    eax = MEM32(eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000680B0; /* jne: not equal / not zero */

loc_000680BB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000680D0
 * Original: 0x000680D0 - 0x000680DB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000680D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000680D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000680E0
 * Original: 0x000680E0 - 0x00068122 (66 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000680E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000680E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006811F; /* je: equal / zero */

loc_000680E8: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000680F6; /* je: equal / zero */

loc_000680F0: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_000680FB;

loc_000680F6: ;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;

loc_000680FB: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068109; /* je: equal / zero */

loc_00068101: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    goto loc_0006810F;

loc_00068109: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;

loc_0006810F: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_0006811F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068140
 * Original: 0x00068140 - 0x00068149 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068140(void)
{

loc_00068140: ;
    eax = ecx;
    MEM32(eax) = 0x7B17FC;
    esp += 4; return; /* ret */

}

/**
 * sub_00068150
 * Original: 0x00068150 - 0x00068153 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068150: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068160
 * Original: 0x00068160 - 0x0006816D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068160(void)
{

loc_00068160: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7B180C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068170
 * Original: 0x00068170 - 0x00068185 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068170(void)
{

loc_00068170: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0xB6;
    MEM32(eax + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068190
 * Original: 0x00068190 - 0x000681AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068190: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068199u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068199: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000681A7; /* je: equal / zero */

loc_000681A0: ;
    MEM32(eax) = 0x7B1134;
    esp += 4; return; /* ret */

loc_000681A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000681B0
 * Original: 0x000681B0 - 0x000681CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000681B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000681B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000681B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000681B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000681C7; /* je: equal / zero */

loc_000681C0: ;
    MEM32(eax) = 0x7B115C;
    esp += 4; return; /* ret */

loc_000681C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000681D0
 * Original: 0x000681D0 - 0x000681EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000681D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000681D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000681D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000681D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000681E7; /* je: equal / zero */

loc_000681E0: ;
    MEM32(eax) = 0x7B1180;
    esp += 4; return; /* ret */

loc_000681E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000681F0
 * Original: 0x000681F0 - 0x0006820A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000681F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000681F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000681F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000681F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068207; /* je: equal / zero */

loc_00068200: ;
    MEM32(eax) = 0x7B11A4;
    esp += 4; return; /* ret */

loc_00068207: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068210
 * Original: 0x00068210 - 0x0006822A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068210: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068219u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068219: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068227; /* je: equal / zero */

loc_00068220: ;
    MEM32(eax) = 0x7B11C8;
    esp += 4; return; /* ret */

loc_00068227: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068230
 * Original: 0x00068230 - 0x0006824A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068230: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068239u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068239: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068247; /* je: equal / zero */

loc_00068240: ;
    MEM32(eax) = 0x7B11EC;
    esp += 4; return; /* ret */

loc_00068247: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068250
 * Original: 0x00068250 - 0x0006826A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068250: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068259u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068259: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068267; /* je: equal / zero */

loc_00068260: ;
    MEM32(eax) = 0x7B1210;
    esp += 4; return; /* ret */

loc_00068267: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068270
 * Original: 0x00068270 - 0x0006828A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068270: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068279u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068279: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068287; /* je: equal / zero */

loc_00068280: ;
    MEM32(eax) = 0x7B1234;
    esp += 4; return; /* ret */

loc_00068287: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068290
 * Original: 0x00068290 - 0x000682AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068290: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068299u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068299: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000682A7; /* je: equal / zero */

loc_000682A0: ;
    MEM32(eax) = 0x7B1258;
    esp += 4; return; /* ret */

loc_000682A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000682B0
 * Original: 0x000682B0 - 0x000682CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000682B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000682B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000682B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000682B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000682C7; /* je: equal / zero */

loc_000682C0: ;
    MEM32(eax) = 0x7B127C;
    esp += 4; return; /* ret */

loc_000682C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000682D0
 * Original: 0x000682D0 - 0x000682EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000682D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000682D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000682D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000682D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000682E7; /* je: equal / zero */

loc_000682E0: ;
    MEM32(eax) = 0x7B12A0;
    esp += 4; return; /* ret */

loc_000682E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000682F0
 * Original: 0x000682F0 - 0x0006830A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000682F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000682F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000682F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000682F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068307; /* je: equal / zero */

loc_00068300: ;
    MEM32(eax) = 0x7B12C4;
    esp += 4; return; /* ret */

loc_00068307: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068310
 * Original: 0x00068310 - 0x0006832A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068310: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068319u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068319: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068327; /* je: equal / zero */

loc_00068320: ;
    MEM32(eax) = 0x7B12E8;
    esp += 4; return; /* ret */

loc_00068327: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068330
 * Original: 0x00068330 - 0x0006834A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068330: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068339u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068339: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068347; /* je: equal / zero */

loc_00068340: ;
    MEM32(eax) = 0x7B130C;
    esp += 4; return; /* ret */

loc_00068347: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068350
 * Original: 0x00068350 - 0x0006836A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068350: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068359u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068359: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068367; /* je: equal / zero */

loc_00068360: ;
    MEM32(eax) = 0x7B1330;
    esp += 4; return; /* ret */

loc_00068367: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068370
 * Original: 0x00068370 - 0x0006838A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068370: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068379u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068379: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068387; /* je: equal / zero */

loc_00068380: ;
    MEM32(eax) = 0x7B1354;
    esp += 4; return; /* ret */

loc_00068387: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068390
 * Original: 0x00068390 - 0x000683AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068390: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068399u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068399: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000683A7; /* je: equal / zero */

loc_000683A0: ;
    MEM32(eax) = 0x7B1378;
    esp += 4; return; /* ret */

loc_000683A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000683B0
 * Original: 0x000683B0 - 0x000683CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000683B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000683B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000683B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000683B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000683C7; /* je: equal / zero */

loc_000683C0: ;
    MEM32(eax) = 0x7B139C;
    esp += 4; return; /* ret */

loc_000683C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000683D0
 * Original: 0x000683D0 - 0x000683EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000683D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000683D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000683D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000683D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000683E7; /* je: equal / zero */

loc_000683E0: ;
    MEM32(eax) = 0x7B13C0;
    esp += 4; return; /* ret */

loc_000683E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000683F0
 * Original: 0x000683F0 - 0x0006840A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000683F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000683F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000683F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000683F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068407; /* je: equal / zero */

loc_00068400: ;
    MEM32(eax) = 0x7B13E4;
    esp += 4; return; /* ret */

loc_00068407: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068410
 * Original: 0x00068410 - 0x0006842A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068410: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068419u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068419: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068427; /* je: equal / zero */

loc_00068420: ;
    MEM32(eax) = 0x7B1404;
    esp += 4; return; /* ret */

loc_00068427: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068430
 * Original: 0x00068430 - 0x0006844A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068430: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068439u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068439: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068447; /* je: equal / zero */

loc_00068440: ;
    MEM32(eax) = 0x7B1424;
    esp += 4; return; /* ret */

loc_00068447: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068450
 * Original: 0x00068450 - 0x0006846A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068450: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068459u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068459: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068467; /* je: equal / zero */

loc_00068460: ;
    MEM32(eax) = 0x7B1444;
    esp += 4; return; /* ret */

loc_00068467: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068470
 * Original: 0x00068470 - 0x0006848A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068470: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068479u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068479: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068487; /* je: equal / zero */

loc_00068480: ;
    MEM32(eax) = 0x7B1468;
    esp += 4; return; /* ret */

loc_00068487: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00068490
 * Original: 0x00068490 - 0x000684AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00068490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068490: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00068499u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00068499: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000684A7; /* je: equal / zero */

loc_000684A0: ;
    MEM32(eax) = 0x7B148C;
    esp += 4; return; /* ret */

loc_000684A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000684B0
 * Original: 0x000684B0 - 0x000684CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000684B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000684B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000684B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000684B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000684C7; /* je: equal / zero */

loc_000684C0: ;
    MEM32(eax) = 0x7B14B0;
    esp += 4; return; /* ret */

loc_000684C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000684D0
 * Original: 0x000684D0 - 0x000684EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000684D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000684D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000684D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000684D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000684E7; /* je: equal / zero */

loc_000684E0: ;
    MEM32(eax) = 0x7B14D4;
    esp += 4; return; /* ret */

loc_000684E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}
