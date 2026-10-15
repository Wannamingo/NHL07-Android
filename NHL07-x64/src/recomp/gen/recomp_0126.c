/**
 * nhl_07_recomp - Recompiled code chunk 126
 * Functions: 250 (0x001C1800 - 0x001CAC70)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001C1800
 * Original: 0x001C1800 - 0x001C1801 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1800(void)
{

loc_001C1800: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1810
 * Original: 0x001C1810 - 0x001C1843 (51 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1810: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x7F01B4;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 8) = 4;
    MEM32(eax + 0xC) = 0x64;
    MEM32(eax + 0x10) = 0x708;
    MEM32(eax + 4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1850
 * Original: 0x001C1850 - 0x001C1895 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001C1850: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001C186F; /* jge: greater or equal (signed >=) */

loc_001C1858: ;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001C186F; /* jge: greater or equal (signed >=) */

loc_001C1860: ;
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(0x896158);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001C1872; /* jle: less or equal (signed <=) */

loc_001C186F: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001C1872: ;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 2 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001C186F; /* jl: less (signed <) */

loc_001C187C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x12A);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C188Du); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C188D: ;
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
    esp += 4; return; /* ret */

}

/**
 * sub_001C18B0
 * Original: 0x001C18B0 - 0x001C18CA (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C18B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C18B0: ;
    eax = MEM32(esp + 4);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C18C2; /* jne: not equal / not zero */

loc_001C18BD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_001C18C2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C18C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C18C4u); } /* indirect call */
    }

loc_001C18C7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C18D0
 * Original: 0x001C18D0 - 0x001C18DF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C18D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C18D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C18F0
 * Original: 0x001C18F0 - 0x001C18F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C18F0(void)
{

loc_001C18F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1900
 * Original: 0x001C1900 - 0x001C194A (74 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001C1900: ;
    eax = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x7F01CC;
    MEM32(eax + 8) = 6;
    MEM32(eax + 0xC) = 0x64;
    SET_LO8(ecx, MEM8(0x8F6A24));
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    MEM32(eax + 4) = 0x32;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFEDD6u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1518) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x1518)) >> 32) & 1);
    ecx = ecx + 0x1518;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1960
 * Original: 0x001C1960 - 0x001C19D4 (116 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001C1960: ;
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C19C8; /* je: equal / zero */

loc_001C1970: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C19C8; /* jge: greater or equal (signed >=) */

loc_001C1978: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C19C8; /* jge: greater or equal (signed >=) */

loc_001C1980: ;
    eax = MEM32(ecx + 0x1C);
    edx = MEM32(0x896158);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C19C8; /* jg: greater (signed >) */

loc_001C1990: ;
    PUSH32(esp, esi);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C199Bu); RECOMP_ABI_CALL(0x0003741Cu, sub_0003741C); /* call 0x0003741C */

loc_001C199B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C19C8; /* je: equal / zero */

loc_001C199F: ;
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), 0x12C (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C19B4; /* jge: greater or equal (signed >=) */

loc_001C19AA: ;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C19C8; /* je: equal / zero */

loc_001C19B4: ;
    eax = MEM32(esi + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7EFFE4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C19CE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7EFFE4)) */

loc_001C19C8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001C19CE: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1A00
 * Original: 0x001C1A00 - 0x001C1A0F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1A00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1A20
 * Original: 0x001C1A20 - 0x001C1A21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1A20(void)
{

loc_001C1A20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1A30
 * Original: 0x001C1A30 - 0x001C1A5D (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1A30: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    ecx = 0x64;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    ecx = 0x1E;
    MEM32(eax) = 0x7F01E4;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1A70
 * Original: 0x001C1A70 - 0x001C1A7F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1A70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1A90
 * Original: 0x001C1A90 - 0x001C1A91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1A90(void)
{

loc_001C1A90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1AA0
 * Original: 0x001C1AA0 - 0x001C1ACD (45 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1AA0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    ecx = 0x64;
    MEM32(eax) = 0x7F01FC;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x546;
    MEM32(eax + 4) = 0x1E;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1AE0
 * Original: 0x001C1AE0 - 0x001C1AE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1AE0(void)
{

loc_001C1AE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1AF0
 * Original: 0x001C1AF0 - 0x001C1B1D (45 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1AF0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    ecx = 0x64;
    MEM32(eax) = 0x7F0214;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x2EE;
    MEM32(eax + 4) = 0x1E;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1B30
 * Original: 0x001C1B30 - 0x001C1BD2 (162 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1B30: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C1B35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1B32u); } /* indirect call */
    }

loc_001C1B35: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1B4E; /* je: equal / zero */

loc_001C1B39: ;
    eax = (uint32_t)(int32_t)SMEM16(0x8F6B74);
    ecx = (uint32_t)(int32_t)SMEM16(0x8F6BD0);
    edx = ecx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1B51; /* jne: not equal / not zero */

loc_001C1B4E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001C1B51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001C1B5D; /* jle: less or equal (signed <=) */

loc_001C1B59: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C1B72;

loc_001C1B5D: ;
    if (CMP_GE(_fas, _fbs)) goto loc_001C1B66; /* jge: greater or equal (signed >=) */

loc_001C1B5F: ;
    esi = 1;
    goto loc_001C1B72;

loc_001C1B66: ;
    PUSH32(esp, 0x001C1B6Bu); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_001C1B6B: ;
    esi = eax;
    esi = ~esi;
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001C1B72: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x16B);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C1B83u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C1B83: ;
    PUSH32(esp, esi);
    ecx = 0x8B23A8;
    edi = eax;
    PUSH32(esp, 0x001C1B90u); RECOMP_ABI_CALL(0x00013FB2u, sub_00013FB2); /* call 0x00013FB2 */

loc_001C1B90: ;
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C1B9Fu); RECOMP_ABI_CALL(0x000304D7u, sub_000304D7); /* call 0x000304D7 */

loc_001C1B9F: ;
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x001C1BA7u); RECOMP_ABI_CALL(0x000209CEu, sub_000209CE); /* call 0x000209CE */

loc_001C1BA7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x16B);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C1BBEu); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C1BBE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C1BC8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C1BC2u); } /* indirect call */
    }

loc_001C1BC8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1C00
 * Original: 0x001C1C00 - 0x001C1C01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1C00(void)
{

loc_001C1C00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1C10
 * Original: 0x001C1C10 - 0x001C1C3D (45 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1C10: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    ecx = 0x64;
    MEM32(eax) = 0x7F022C;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x12C;
    MEM32(eax + 4) = 0x1E;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1C50
 * Original: 0x001C1C50 - 0x001C1C80 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1C50: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C1C55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1C52u); } /* indirect call */
    }

loc_001C1C55: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1C5A; /* jne: not equal / not zero */

loc_001C1C59: ;
    esp += 4; return; /* ret */

loc_001C1C5A: ;
    PUSH32(esp, 0x001C1C5Fu); RECOMP_ABI_CALL(0x00036D19u, sub_00036D19); /* call 0x00036D19 */

loc_001C1C5F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x164);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C1C70u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C1C70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C1C7Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C1C74u); } /* indirect call */
    }

loc_001C1C7A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1C90
 * Original: 0x001C1C90 - 0x001C1C93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1C90: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C1CA0
 * Original: 0x001C1CA0 - 0x001C1CA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1CA0(void)
{

loc_001C1CA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1CB0
 * Original: 0x001C1CB0 - 0x001C1CDD (45 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1CB0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    ecx = 0x64;
    MEM32(eax) = 0x7F0244;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x12C;
    MEM32(eax + 4) = 0x1E;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1CF0
 * Original: 0x001C1CF0 - 0x001C1D1C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1CF0: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C1D0F; /* jge: greater or equal (signed >=) */

loc_001C1CF8: ;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C1D0F; /* jge: greater or equal (signed >=) */

loc_001C1D00: ;
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(0x896158);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C1D12; /* jle: less or equal (signed <=) */

loc_001C1D0F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001C1D12: ;
    ecx = 0x8E9D5C;
    g_seh_ebp = ebp; sub_00026C02(); return; /* tail jmp 0x00026C02 */

}

/**
 * sub_001C1D30
 * Original: 0x001C1D30 - 0x001C1D31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1D30(void)
{

loc_001C1D30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1D40
 * Original: 0x001C1D40 - 0x001C1DB3 (115 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1D40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C1D4Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C1D4B: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C1D54u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C1D54: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C1D5Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C1D5D: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C1D66u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C1D66: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C1D6Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C1D6F: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C1D78u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C1D78: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C1D81u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C1D81: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C1D8Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C1D8A: ;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C1D93u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C1D93: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C1D9Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C1D9C: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C1DA5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C1DA5: ;
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C1DAEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C1DAE: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1DD0
 * Original: 0x001C1DD0 - 0x001C1DEE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C1DD8u); RECOMP_ABI_CALL(0x0002D741u, sub_0002D741); /* call 0x0002D741 */

loc_001C1DD8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1DE8; /* je: equal / zero */

loc_001C1DDF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C1DE5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C1DE5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C1DE8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1E00
 * Original: 0x001C1E00 - 0x001C1E1B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001C1E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1E00: ;
    SET_LO8(eax, MEM8(0x8F20F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1E18; /* je: equal / zero */

loc_001C1E09: ;
    eax = MEM32(0x8F20F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1E18; /* je: equal / zero */

loc_001C1E12: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_001C1E18: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C1E30
 * Original: 0x001C1E30 - 0x001C1E36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1E30(void)
{

loc_001C1E30: ;
    eax = MEM32(0x8F20F4);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1E40
 * Original: 0x001C1E40 - 0x001C1E5A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1E40: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C1E43: ;
    eax = MEM32(0x8F20F4);
    ecx = MEM32(esi + eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C1E50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1E4Du); } /* indirect call */
    }

loc_001C1E50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1E43; /* jl: less (signed <) */

loc_001C1E58: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1E60
 * Original: 0x001C1E60 - 0x001C1EB3 (83 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1E60: ;
    SET_LO8(eax, MEM8(0x8F20F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1EB0; /* je: equal / zero */

loc_001C1E69: ;
    ecx = MEM32(0x8F20F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1EB0; /* je: equal / zero */

loc_001C1E73: ;
    SET_LO8(eax, MEM8(0x904B9D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1EB0; /* jne: not equal / not zero */

loc_001C1E7C: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1E99; /* jne: not equal / not zero */

loc_001C1E85: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C1E92u); RECOMP_ABI_CALL(0x0001BA6Eu, sub_0001BA6E); /* call 0x0001BA6E */

loc_001C1E92: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1EB0; /* je: equal / zero */

loc_001C1E96: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001C1E99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1EB0; /* jne: not equal / not zero */

loc_001C1E9D: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C1EA9u); RECOMP_ABI_CALL(0x00036369u, sub_00036369); /* call 0x00036369 */

loc_001C1EA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1EB0; /* je: equal / zero */

loc_001C1EAD: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001C1EB0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C1ED0
 * Original: 0x001C1ED0 - 0x001C1ED3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1ED0(void)
{

loc_001C1ED0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1EE0
 * Original: 0x001C1EE0 - 0x001C1F1F (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1EE0: ;
    SET_LO8(eax, MEM8(0x8F20F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1F1E; /* je: equal / zero */

loc_001C1EE9: ;
    eax = MEM32(0x8F20F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1F1E; /* je: equal / zero */

loc_001C1EF2: ;
    ecx = MEM32(0x896158);
    edx = MEM32(esp + 4);
    MEM32(eax + 0x38) = ecx;
    eax = MEM32(0x8F20F4);
    eax = MEM32(eax + edx * 4);
    edx = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x18);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(0x896158);
    MEM32(eax + 0x1C) = ecx;

loc_001C1F1E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1F30
 * Original: 0x001C1F30 - 0x001C1F4B (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1F30: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C1F4A; /* jle: less or equal (signed <=) */

loc_001C1F3C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);

loc_001C1F41: ;
    _fb = (uint32_t)(MEM32(esi + ecx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1F41; /* jl: less (signed <) */

loc_001C1F49: ;
    POP32(esp, esi);

loc_001C1F4A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1F60
 * Original: 0x001C1F60 - 0x001C1F9F (63 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1F60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1F6E; /* jne: not equal / not zero */

loc_001C1F6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001C1F6E: ;
    PUSH32(esp, 0x001C1F73u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_001C1F73: ;
    ecx = MEM32(esp + 0x10);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C1F9D; /* jle: less or equal (signed <=) */

loc_001C1F84: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    /* nop */

loc_001C1F90: ;
    _fb = (uint32_t)(MEM32(edi + eax * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(edi + eax * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C1F9C; /* jg: greater (signed >) */

loc_001C1F97: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1F90; /* jl: less (signed <) */

loc_001C1F9C: ;
    POP32(esp, edi);

loc_001C1F9D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1FB0
 * Original: 0x001C1FB0 - 0x001C204B (155 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1FB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_LE(_fas, _fbs)) goto loc_001C2046; /* jle: less or equal (signed <=) */

loc_001C1FC8: ;
    _fb = (uint32_t)(MEM32(edi + eax * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(edi + eax * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1FC8; /* jl: less (signed <) */

loc_001C1FD0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C2046; /* jle: less or equal (signed <=) */

loc_001C1FD4: ;
    eax = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = eax;

loc_001C1FE0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1FE9; /* jne: not equal / not zero */

loc_001C1FE5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C200C;

loc_001C1FE9: ;
    PUSH32(esp, 0x001C1FEEu); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_001C1FEE: ;
    ecx = ebp + -1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C200C; /* jle: less or equal (signed <=) */

loc_001C1FFD: ;
    /* nop */

loc_001C2000: ;
    _fb = (uint32_t)(MEM32(edi + eax * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(edi + eax * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C200C; /* jg: greater (signed >) */

loc_001C2007: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C2000; /* jl: less (signed <) */

loc_001C200C: ;
    edx = MEM32(ebx + eax * 4);
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = edx;
    ecx = MEM32(edi + eax * 4);
    edx = MEM32(ebx + eax * 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebx + esi * 4 + -4);
    MEM32(ebx + esi * 4 + -4) = edx;
    MEM32(ebx + eax * 4) = ecx;
    ecx = MEM32(edi + esi * 4 + -4);
    edx = MEM32(edi + eax * 4);
    MEM32(edi + esi * 4 + -4) = edx;
    MEM32(edi + eax * 4) = ecx;
    ecx = MEM32(esp + 0x20);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_001C1FE0; /* jg: greater (signed >) */

loc_001C2046: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2080
 * Original: 0x001C2080 - 0x001C2113 (147 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C2080: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x7C);
    ebp = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_001C20BA; /* jle: less or equal (signed <=) */

loc_001C2097: ;
    ebx = MEM32(esp + 0x78);
    eax = esp + 0x14;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001C20A1: ;
    ecx = ebx + esi * 4;
    edx = MEM32(esp + ecx + 0x14);
    ecx = MEM32(ebp + edx * 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001C20B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C20AEu); } /* indirect call */
    }

loc_001C20B1: ;
    MEM32(esp + esi * 4 + 0x14) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C20A1; /* jl: less (signed <) */

loc_001C20BA: ;
    eax = MEM32(esp + 0x78);
    PUSH32(esp, edi);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C20CFu); RECOMP_ABI_CALL(0x000221CAu, sub_000221CA); /* call 0x000221CA */

loc_001C20CF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C2107; /* jle: less or equal (signed <=) */

loc_001C20DA: ;
    /* nop */

loc_001C20E0: ;
    ecx = MEM32(esp + ebp * 4 + 0x44);
    edx = MEM32(esp + 0x10);
    esi = MEM32(edx + ecx * 4);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C20F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C20EFu); } /* indirect call */
    }

loc_001C20F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2102; /* je: equal / zero */

loc_001C20F6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C20FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C20FAu); } /* indirect call */
    }

loc_001C20FC: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C2107; /* jne: not equal / not zero */

loc_001C2102: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C20E0; /* jl: less (signed <) */

loc_001C2107: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C2140
 * Original: 0x001C2140 - 0x001C220A (202 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2140: ;
    SET_LO8(eax, MEM8(0x8F20F8));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2160; /* je: equal / zero */

loc_001C214E: ;
    ecx = MEM32(0x8F20F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2160; /* je: equal / zero */

loc_001C2158: ;
    _fa = (uint32_t)(MEM8(0x904B9D)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x904B9D), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2166; /* je: equal / zero */

loc_001C2160: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001C2166: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF7 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C21D4; /* jg: greater (signed >) */

loc_001C2171: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001C21B8; /* je: equal / zero */

loc_001C2173: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001C2194; /* je: equal / zero */

loc_001C2178: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001C21FB; /* jne: not equal / not zero */

loc_001C217D: ;
    MEM32(esp) = edx;
    edx = 1;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2190u); RECOMP_ABI_CALL(0x00014B15u, sub_00014B15); /* call 0x00014B15 */

loc_001C2190: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001C2194: ;
    edx = 2;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0xA;
    MEM32(esp + 0xC) = 0xB;
    PUSH32(esp, 0x001C21B4u); RECOMP_ABI_CALL(0x00014B15u, sub_00014B15); /* call 0x00014B15 */

loc_001C21B4: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001C21B8: ;
    edx = 1;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 7;
    PUSH32(esp, 0x001C21D0u); RECOMP_ABI_CALL(0x00014B15u, sub_00014B15); /* call 0x00014B15 */

loc_001C21D0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001C21D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x127) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x127 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C21FB; /* jne: not equal / not zero */

loc_001C21DB: ;
    edx = 4;
    MEM32(esp) = 3;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 5;
    MEM32(esp + 0xC) = 6;

loc_001C21FB: ;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2206u); RECOMP_ABI_CALL(0x00014B15u, sub_00014B15); /* call 0x00014B15 */

loc_001C2206: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C2240
 * Original: 0x001C2240 - 0x001C226C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2240: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    PUSH32(esp, 0xA0);
    eax = esi + 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2254u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001C2254: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xCC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C2267u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001C2267: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2280
 * Original: 0x001C2280 - 0x001C2281 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2280(void)
{

loc_001C2280: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2290
 * Original: 0x001C2290 - 0x001C2291 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2290(void)
{

loc_001C2290: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C22A0
 * Original: 0x001C22A0 - 0x001C2335 (149 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C22A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C22A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM16(0x8F6B78);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(0x896168);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(0x8F6B76);
    PUSH32(esp, eax);
    ecx = 0x8B23A8;
    MEM16(0x896168) = LO16(eax);
    MEM16(0x8F6B76) = LO16(eax);
    MEM16(0x8F6B78) = LO16(eax);
    PUSH32(esp, 0x001C22D9u); RECOMP_ABI_CALL(0x00013FB2u, sub_00013FB2); /* call 0x00013FB2 */

loc_001C22D9: ;
    PUSH32(esp, 0);
    ebp = eax;
    PUSH32(esp, 0x001C22E2u); RECOMP_ABI_CALL(0x00021261u, sub_00021261); /* call 0x00021261 */

loc_001C22E2: ;
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x001C22EDu); RECOMP_ABI_CALL(0x0003468Bu, sub_0003468B); /* call 0x0003468B */

loc_001C22ED: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C230Du); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C230D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C2317u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C2311u); } /* indirect call */
    }

loc_001C2317: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x8F6B76) = LO16(edi);
    POP32(esp, edi);
    MEM16(0x896168) = LO16(esi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(0x8F6B78) = LO16(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2360
 * Original: 0x001C2360 - 0x001C23C5 (101 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2360: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C2372u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C2372: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    ecx = 0x8B23A8;
    esi = eax;
    PUSH32(esp, 0x001C2382u); RECOMP_ABI_CALL(0x0001BD9Du, sub_0001BD9D); /* call 0x0001BD9D */

loc_001C2382: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x120);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C2398u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C2398: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C23A2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C239Cu); } /* indirect call */
    }

loc_001C23A2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C23B3u); RECOMP_ABI_CALL(0x0001BD9Du, sub_0001BD9D); /* call 0x0001BD9D */

loc_001C23B3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x120);
    ecx = 0x8F0D08;
    PUSH32(esp, 0x001C23C3u); RECOMP_ABI_CALL(0x00017167u, sub_00017167); /* call 0x00017167 */

loc_001C23C3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C23E0
 * Original: 0x001C23E0 - 0x001C244D (109 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C23E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C23E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C23F0u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C23F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0x8B23A8;
    esi = eax;
    PUSH32(esp, 0x001C2400u); RECOMP_ABI_CALL(0x0001BD9Du, sub_0001BD9D); /* call 0x0001BD9D */

loc_001C2400: ;
    PUSH32(esp, 0);
    ecx = 0x8B23A8;
    edi = eax;
    PUSH32(esp, 0x001C240Eu); RECOMP_ABI_CALL(0x00013FB2u, sub_00013FB2); /* call 0x00013FB2 */

loc_001C240E: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C2422u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C2422: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C242Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C2426u); } /* indirect call */
    }

loc_001C242C: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C243Du); RECOMP_ABI_CALL(0x0001BD9Du, sub_0001BD9D); /* call 0x0001BD9D */

loc_001C243D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x15);
    ecx = 0x8F0D08;
    PUSH32(esp, 0x001C244Au); RECOMP_ABI_CALL(0x00017167u, sub_00017167); /* call 0x00017167 */

loc_001C244A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2470
 * Original: 0x001C2470 - 0x001C24B5 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2470: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x123);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C2482u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C2482: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0x8B23A8;
    esi = eax;
    PUSH32(esp, 0x001C2492u); RECOMP_ABI_CALL(0x0001BD9Du, sub_0001BD9D); /* call 0x0001BD9D */

loc_001C2492: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x123);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C24A6u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C24A6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C24B0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C24AAu); } /* indirect call */
    }

loc_001C24B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C24D0
 * Original: 0x001C24D0 - 0x001C24E9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C24D0(void)
{

loc_001C24D0: ;
    PUSH32(esp, 0);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C24DCu); RECOMP_ABI_CALL(0x00030437u, sub_00030437); /* call 0x00030437 */

loc_001C24DC: ;
    PUSH32(esp, 0);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C24E8u); RECOMP_ABI_CALL(0x00030437u, sub_00030437); /* call 0x00030437 */

loc_001C24E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C24F0
 * Original: 0x001C24F0 - 0x001C2529 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C24F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C24F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C24FEu); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C24FE: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C251Bu); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C251B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C2525u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C251Fu); } /* indirect call */
    }

loc_001C2525: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C2540
 * Original: 0x001C2540 - 0x001C258E (78 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2540: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C254Eu); RECOMP_ABI_CALL(0x00013FB2u, sub_00013FB2); /* call 0x00013FB2 */

loc_001C254E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    ecx = 0x8B26F0;
    esi = eax;
    PUSH32(esp, 0x001C255Eu); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C255E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0x8B23A8;
    edi = eax;
    PUSH32(esp, 0x001C256Eu); RECOMP_ABI_CALL(0x0001BD9Du, sub_0001BD9D); /* call 0x0001BD9D */

loc_001C256E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C257Eu); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C257E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C2588u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C2582u); } /* indirect call */
    }

loc_001C2588: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C25B0
 * Original: 0x001C25B0 - 0x001C2626 (118 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C25B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C25B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C25BEu); RECOMP_ABI_CALL(0x00013FB2u, sub_00013FB2); /* call 0x00013FB2 */

loc_001C25BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0x8B23A8;
    esi = eax;
    PUSH32(esp, 0x001C25CEu); RECOMP_ABI_CALL(0x0001BD9Du, sub_0001BD9D); /* call 0x0001BD9D */

loc_001C25CE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF7);
    ecx = 0x8B26F0;
    edi = eax;
    PUSH32(esp, 0x001C25E1u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C25E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0xF7);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C25F8u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C25F8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C2602u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C25FCu); } /* indirect call */
    }

loc_001C2602: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C2613u); RECOMP_ABI_CALL(0x0001BD9Du, sub_0001BD9D); /* call 0x0001BD9D */

loc_001C2613: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF7);
    ecx = 0x8F0D08;
    PUSH32(esp, 0x001C2623u); RECOMP_ABI_CALL(0x00017167u, sub_00017167); /* call 0x00017167 */

loc_001C2623: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2650
 * Original: 0x001C2650 - 0x001C2686 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2650: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xDA);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C2661u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C2661: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0xDA);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C2678u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C2678: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C2682u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C267Cu); } /* indirect call */
    }

loc_001C2682: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C26A0
 * Original: 0x001C26A0 - 0x001C26DD (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C26A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C26A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C26ADu); RECOMP_ABI_CALL(0x00013FB2u, sub_00013FB2); /* call 0x00013FB2 */

loc_001C26AD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D);
    ecx = 0x8B26F0;
    esi = eax;
    PUSH32(esp, 0x001C26BDu); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C26BD: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C26CEu); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C26CE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C26D8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C26D2u); } /* indirect call */
    }

loc_001C26D8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C26F0
 * Original: 0x001C26F0 - 0x001C2730 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C26F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C26F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C272E; /* je: equal / zero */

loc_001C26F8: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2701u); RECOMP_ABI_CALL(0x00588356u, sub_00588356); /* call 0x00588356 */

loc_001C2701: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C270Au); RECOMP_ABI_CALL(0x005886F7u, sub_005886F7); /* call 0x005886F7 */

loc_001C270A: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C271Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C271A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM8(esi) = 0;

loc_001C272E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2740
 * Original: 0x001C2740 - 0x001C27A5 (101 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C2740: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C277F; /* je: equal / zero */

loc_001C2748: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C274Eu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C274E: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2757u); RECOMP_ABI_CALL(0x00588C10u, sub_00588C10); /* call 0x00588C10 */

loc_001C2757: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x001C2761u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C2761: ;
    SET_LO8(eax, MEM8(esi));
    edi = edi + edi * 2;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C277E; /* je: equal / zero */

loc_001C276C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C277E; /* jl: less (signed <) */

loc_001C2770: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2781; /* je: equal / zero */

loc_001C2777: ;
    MEM32(esi + 0x18) = 0;

loc_001C277E: ;
    POP32(esp, edi);

loc_001C277F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001C2781: ;
    MEM32(esi + 0x1C) = 0;
    PUSH32(esp, 0x001C278Du); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C278D: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C279Bu); RECOMP_ABI_CALL(0x00587C2Au, sub_00587C2A); /* call 0x00587C2A */

loc_001C279B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00587904(); return; /* tail jmp 0x00587904 */

}

/**
 * sub_001C27C0
 * Original: 0x001C27C0 - 0x001C280B (75 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C27C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C27C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2809; /* je: equal / zero */

loc_001C27C8: ;
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 0x18) = eax;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C27E2; /* je: equal / zero */

loc_001C27D5: ;
    MEM32(esi + 0x18) = 0;
    MEM8(esi + 2) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001C27E2: ;
    MEM32(esi + 0x1C) = 0;
    PUSH32(esp, 0x001C27EEu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C27EE: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C27FDu); RECOMP_ABI_CALL(0x00587C2Au, sub_00587C2A); /* call 0x00587C2A */

loc_001C27FD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001C2805u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C2805: ;
    MEM8(esi + 2) = 1;

loc_001C2809: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2820
 * Original: 0x001C2820 - 0x001C2863 (67 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C2820: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2861; /* je: equal / zero */

loc_001C2828: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 2) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_001C2837; /* jge: greater or equal (signed >=) */

loc_001C2833: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C2841;

loc_001C2837: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C2841; /* jle: less or equal (signed <=) */

loc_001C283C: ;
    eax = 0x7F;

loc_001C2841: ;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x001C2849u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C2849: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C2858u); RECOMP_ABI_CALL(0x00587C2Au, sub_00587C2A); /* call 0x00587C2A */

loc_001C2858: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00587904(); return; /* tail jmp 0x00587904 */

loc_001C2861: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2880
 * Original: 0x001C2880 - 0x001C28D2 (82 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2880: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C28CE; /* je: equal / zero */

loc_001C288C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C2894; /* jge: greater or equal (signed >=) */

loc_001C2890: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C289E;

loc_001C2894: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C289E; /* jle: less or equal (signed <=) */

loc_001C2899: ;
    eax = 0x7F;

loc_001C289E: ;
    SET_LO8(ecx, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C28AC; /* je: equal / zero */

loc_001C28A5: ;
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001C28AC: ;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x001C28B4u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C28B4: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFA);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C28C6u); RECOMP_ABI_CALL(0x00587C2Au, sub_00587C2A); /* call 0x00587C2A */

loc_001C28C6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001C28CEu); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C28CE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C28F0
 * Original: 0x001C28F0 - 0x001C298E (158 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C28F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C28F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x50));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C298B; /* je: equal / zero */

loc_001C2901: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C2908u); RECOMP_ABI_CALL(0x0002C972u, sub_0002C972); /* call 0x0002C972 */

loc_001C2908: ;
    eax = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C2915u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2912u); } /* indirect call */
    }

loc_001C2915: ;
    edx = MEM32(0x8BFE70);
    esi = eax;
    ecx = 0x8BFE70;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C2928u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2925u); } /* indirect call */
    }

loc_001C2928: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C2946; /* jle: less or equal (signed <=) */

loc_001C292C: ;
    /* nop */

loc_001C2930: ;
    PUSH32(esp, 0x001C2935u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_001C2935: ;
    eax = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C2942u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C293Fu); } /* indirect call */
    }

loc_001C2942: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C2930; /* jg: greater (signed >) */

loc_001C2946: ;
    esi = ebp + 0x14;
    edi = 2;
    edi = edi;

loc_001C2950: ;
    _fa = (uint32_t)(MEM8(esi + -20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + -20), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2980; /* je: equal / zero */

loc_001C2955: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C295Du); RECOMP_ABI_CALL(0x00588356u, sub_00588356); /* call 0x00588356 */

loc_001C295D: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C2965u); RECOMP_ABI_CALL(0x005886F7u, sub_005886F7); /* call 0x005886F7 */

loc_001C2965: ;
    eax = MEM32(esi + -16);
    PUSH32(esp, eax);
    MEM32(esi) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C2974u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C2974: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + -16) = ebx;
    MEM32(esi + -12) = ebx;
    MEM8(esi + -20) = LO8(ebx);

loc_001C2980: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C2950; /* jne: not equal / not zero */

loc_001C2986: ;
    POP32(esp, edi);
    MEM8(ebp + 0x50) = LO8(ebx);
    POP32(esp, esi);

loc_001C298B: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C29C0
 * Original: 0x001C29C0 - 0x001C2A85 (197 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C29C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C29C0: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2A83; /* je: equal / zero */

loc_001C29CE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp + 0x1C;
    edi = 2;

loc_001C29D8: ;
    SET_LO8(eax, MEM8(esi + -28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2A19; /* je: equal / zero */

loc_001C29DF: ;
    eax = MEM32(esi);
    MEM32(esi + -4) = eax;
    SET_LO8(eax, MEM8(esi + -26));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C29F4; /* je: equal / zero */

loc_001C29EB: ;
    MEM32(esi + -4) = 0;
    goto loc_001C2A15;

loc_001C29F4: ;
    MEM32(esi) = 0;
    PUSH32(esp, 0x001C29FFu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C29FF: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + -8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C2A0Du); RECOMP_ABI_CALL(0x00587C2Au, sub_00587C2A); /* call 0x00587C2A */

loc_001C2A0D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001C2A15u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C2A15: ;
    MEM8(esi + -26) = 1;

loc_001C2A19: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C29D8; /* jne: not equal / not zero */

loc_001C2A1F: ;
    eax = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C2A2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2A29u); } /* indirect call */
    }

loc_001C2A2C: ;
    edx = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C2A3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2A39u); } /* indirect call */
    }

loc_001C2A3C: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C2A5C; /* jg: greater (signed >) */

loc_001C2A43: ;
    PUSH32(esp, 0x001C2A48u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_001C2A48: ;
    eax = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C2A55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2A52u); } /* indirect call */
    }

loc_001C2A55: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C2A43; /* jle: less or equal (signed <=) */

loc_001C2A5C: ;
    esi = ebp + 0x14;
    edi = 2;

loc_001C2A64: ;
    PUSH32(esp, 0x001C2A69u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C2A69: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C2A73u); RECOMP_ABI_CALL(0x00588BC7u, sub_00588BC7); /* call 0x00588BC7 */

loc_001C2A73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001C2A7Bu); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C2A7B: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C2A64; /* jne: not equal / not zero */

loc_001C2A81: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001C2A83: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2AC0
 * Original: 0x001C2AC0 - 0x001C2B84 (196 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C2AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2AC0: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2B82; /* je: equal / zero */

loc_001C2ACE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp + 0x14;
    edi = 2;

loc_001C2AD8: ;
    PUSH32(esp, 0x001C2ADDu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C2ADD: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x1000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2AEAu); RECOMP_ABI_CALL(0x00588BC7u, sub_00588BC7); /* call 0x00588BC7 */

loc_001C2AEA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001C2AF2u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C2AF2: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C2AD8; /* jne: not equal / not zero */

loc_001C2AF8: ;
    esi = ebp + 0x1C;
    edi = 2;

loc_001C2B00: ;
    SET_LO8(eax, MEM8(esi + -28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2B3D; /* je: equal / zero */

loc_001C2B07: ;
    eax = MEM32(esi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + -26) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_001C2B16; /* jge: greater or equal (signed >=) */

loc_001C2B12: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C2B20;

loc_001C2B16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C2B20; /* jle: less or equal (signed <=) */

loc_001C2B1B: ;
    eax = 0x7F;

loc_001C2B20: ;
    MEM32(esi) = eax;
    PUSH32(esp, 0x001C2B27u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C2B27: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + -8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C2B35u); RECOMP_ABI_CALL(0x00587C2Au, sub_00587C2A); /* call 0x00587C2A */

loc_001C2B35: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001C2B3Du); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C2B3D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C2B00; /* jne: not equal / not zero */

loc_001C2B43: ;
    eax = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C2B50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2B4Du); } /* indirect call */
    }

loc_001C2B50: ;
    edx = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C2B60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2B5Du); } /* indirect call */
    }

loc_001C2B60: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C2B80; /* jg: greater (signed >) */

loc_001C2B67: ;
    PUSH32(esp, 0x001C2B6Cu); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_001C2B6C: ;
    eax = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C2B79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2B76u); } /* indirect call */
    }

loc_001C2B79: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C2B67; /* jle: less or equal (signed <=) */

loc_001C2B80: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001C2B82: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2BC0
 * Original: 0x001C2BC0 - 0x001C2C97 (215 bytes, 69 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2BC0: ;
    SET_LO8(eax, MEM8(ecx + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2C94; /* je: equal / zero */

loc_001C2BCB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x20;
    PUSH32(esp, edi);

loc_001C2BD6: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2BE8; /* je: equal / zero */

loc_001C2BDA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C2BD6; /* jl: less (signed <) */

loc_001C2BE3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001C2BE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2C92; /* je: equal / zero */

loc_001C2BF1: ;
    eax = eax + eax * 8;
    esi = ecx + eax * 4;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2C39; /* je: equal / zero */

loc_001C2BFC: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi + 0x1C);
    MEM32(esi + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C2C12; /* je: equal / zero */

loc_001C2C09: ;
    MEM32(esi + 0x18) = 0;
    goto loc_001C2C35;

loc_001C2C12: ;
    MEM32(esi + 0x1C) = 0;
    PUSH32(esp, 0x001C2C1Eu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C2C1E: ;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2C2Du); RECOMP_ABI_CALL(0x00587C2Au, sub_00587C2A); /* call 0x00587C2A */

loc_001C2C2D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001C2C35u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C2C35: ;
    MEM8(esi + 2) = 1;

loc_001C2C39: ;
    edx = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C2C47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2C44u); } /* indirect call */
    }

loc_001C2C47: ;
    edi = eax;
    eax = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C2C56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2C53u); } /* indirect call */
    }

loc_001C2C56: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C2C7A; /* jg: greater (signed >) */

loc_001C2C5D: ;
    /* nop */

loc_001C2C60: ;
    PUSH32(esp, 0x001C2C65u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_001C2C65: ;
    edx = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C2C73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2C70u); } /* indirect call */
    }

loc_001C2C73: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C2C60; /* jle: less or equal (signed <=) */

loc_001C2C7A: ;
    PUSH32(esp, 0x001C2C7Fu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C2C7F: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2C8Au); RECOMP_ABI_CALL(0x00588BC7u, sub_00588BC7); /* call 0x00588BC7 */

loc_001C2C8A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001C2C92u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C2C92: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001C2C94: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2CD0
 * Original: 0x001C2CD0 - 0x001C2DA5 (213 bytes, 70 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2CD0: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2DA1; /* je: equal / zero */

loc_001C2CDE: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + 0x20;

loc_001C2CE8: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2CFA; /* je: equal / zero */

loc_001C2CEC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C2CE8; /* jl: less (signed <) */

loc_001C2CF5: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_001C2CFA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2DA0; /* je: equal / zero */

loc_001C2D03: ;
    PUSH32(esp, 0x001C2D08u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C2D08: ;
    eax = esi + esi * 8;
    ecx = MEM32(edi + eax * 4 + 0x14);
    esi = edi + eax * 4;
    PUSH32(esp, 0x1000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C2D1Du); RECOMP_ABI_CALL(0x00588BC7u, sub_00588BC7); /* call 0x00588BC7 */

loc_001C2D1D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001C2D25u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C2D25: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2D62; /* je: equal / zero */

loc_001C2D2A: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 2) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_001C2D39; /* jge: greater or equal (signed >=) */

loc_001C2D35: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C2D43;

loc_001C2D39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C2D43; /* jle: less or equal (signed <=) */

loc_001C2D3E: ;
    eax = 0x7F;

loc_001C2D43: ;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x001C2D4Bu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C2D4B: ;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2D5Au); RECOMP_ABI_CALL(0x00587C2Au, sub_00587C2A); /* call 0x00587C2A */

loc_001C2D5A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001C2D62u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C2D62: ;
    edx = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C2D70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2D6Du); } /* indirect call */
    }

loc_001C2D70: ;
    esi = eax;
    eax = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C2D7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2D7Cu); } /* indirect call */
    }

loc_001C2D7F: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C2DA0; /* jg: greater (signed >) */

loc_001C2D86: ;
    PUSH32(esp, 0x001C2D8Bu); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_001C2D8B: ;
    edx = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C2D99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2D96u); } /* indirect call */
    }

loc_001C2D99: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C2D86; /* jle: less or equal (signed <=) */

loc_001C2DA0: ;
    POP32(esp, esi);

loc_001C2DA1: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2DE0
 * Original: 0x001C2DE0 - 0x001C2E00 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2DE0: ;
    SET_LO8(eax, MEM8(ecx + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2DFF; /* je: equal / zero */

loc_001C2DE7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 2;

loc_001C2DF0: ;
    ecx = esi;
    PUSH32(esp, 0x001C2DF7u); RECOMP_ABI_CALL(0x00013A26u, sub_00013A26); /* call 0x00013A26 */

loc_001C2DF7: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C2DF0; /* jne: not equal / not zero */

loc_001C2DFD: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001C2DFF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2E10
 * Original: 0x001C2E10 - 0x001C2FF4 (484 bytes, 171 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2E10(void)
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

loc_001C2E10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8F6A68);
    PUSH32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xC0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esp + 0xA) = 0;
    MEM32(esp + 0xC) = 0x1A;
    MEM8(esp + 0xB) = 0;
    ebx = 0x8B3838;
    if (CMP_EQ(_fa, _fb)) goto loc_001C2E44; /* je: equal / zero */

loc_001C2E3F: ;
    ebx = 0x8B36A8;

loc_001C2E44: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2E55; /* je: equal / zero */

loc_001C2E4B: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_001C2E55: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001C2FE8; /* jle: less or equal (signed <=) */

loc_001C2E64: ;
    ebp = MEM32(esp + 0x20);
    goto loc_001C2E70;

    /* nop */

loc_001C2E70: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(ebp + 4);
    ecx = MEM32(ebp);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebx)) >> 32) & 1);
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C2E89u); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C2E89: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C2EB0; /* jnp: not parity */

loc_001C2E9C: ;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001C2E70; /* jl: less (signed <) */

loc_001C2EA4: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_001C2EB0: ;
    edx = MEM32(esi + 0x10);
    edi = MEM32(edx + edi * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C2EBF; /* jne: not equal / not zero */

loc_001C2EBB: ;
    MEM32(esp + 0x14) = edi;

loc_001C2EBF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C2EC8; /* jne: not equal / not zero */

loc_001C2EC4: ;
    MEM32(esp + 0x14) = edi;

loc_001C2EC8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C2ED1; /* jne: not equal / not zero */

loc_001C2ECD: ;
    MEM32(esp + 0x14) = edi;

loc_001C2ED1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x15 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C2EDC; /* jne: not equal / not zero */

loc_001C2ED6: ;
    MEM32(esp + 0x14) = edi;
    goto loc_001C2EF3;

loc_001C2EDC: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C2EEE; /* jne: not equal / not zero */

loc_001C2EE5: ;
    MEM8(0x8B2263) = 1;
    goto loc_001C2EFA;

loc_001C2EEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C2EFA; /* jne: not equal / not zero */

loc_001C2EF3: ;
    MEM8(0x8B2264) = 1;

loc_001C2EFA: ;
    eax = MEM32(esi + 0xC);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001C2FA5; /* jle: less or equal (signed <=) */

loc_001C2F07: ;
    ebp = MEM32(esp + 0x1C);
    goto loc_001C2F10;

    /* nop */

loc_001C2F10: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ebp + 4);
    eax = MEM32(ebp);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2F29u); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C2F29: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C2F46; /* jnp: not parity */

loc_001C2F3C: ;
    eax = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001C2F10; /* jl: less (signed <) */

loc_001C2F44: ;
    goto loc_001C2FA0;

loc_001C2F46: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C2F6A; /* jne: not equal / not zero */

loc_001C2F4F: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(ecx + edi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edi * 4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C2F9B; /* jne: not equal / not zero */

loc_001C2F58: ;
    SET_LO8(eax, MEM8(0x8B368F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2F9B; /* je: equal / zero */

loc_001C2F61: ;
    MEM8(0x8B368D) = 1;
    goto loc_001C2F9B;

loc_001C2F6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C2F9B; /* jne: not equal / not zero */

loc_001C2F6F: ;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(edx + edi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + edi * 4), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C2F94; /* jne: not equal / not zero */

loc_001C2F78: ;
    SET_LO8(eax, MEM8(0x8B368D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2F94; /* je: equal / zero */

loc_001C2F81: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    MEM8(0x8B368E) = 1;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_001C2F94: ;
    MEM8(0x8B2265) = 1;

loc_001C2F9B: ;
    MEM8(esp + 0x12) = 1;

loc_001C2FA0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */

loc_001C2FA5: ;
    if (CMP_NE(_fa, _fb)) goto loc_001C2FAB; /* jne: not equal / not zero */

loc_001C2FA7: ;
    SET_LO8(eax, 1);
    goto loc_001C2FB7;

loc_001C2FAB: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2FD3; /* je: equal / zero */

loc_001C2FB3: ;
    SET_LO8(eax, MEM8(esp + 0x13));

loc_001C2FB7: ;
    SET_LO8(ecx, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esi + 4) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001C2FCF; /* je: equal / zero */

loc_001C2FC3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_001C2FCF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2FE8; /* je: equal / zero */

loc_001C2FD3: ;
    MEM8(0x8B368F) = 0;
    MEM8(0x8B368D) = 0;
    MEM8(0x8B368E) = 0;

loc_001C2FE8: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C3070
 * Original: 0x001C3070 - 0x001C30FD (141 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3070(void)
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

loc_001C3070: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C30F8; /* je: equal / zero */

loc_001C307B: ;
    eax = MEM32(0x8F6A68);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xC0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    MEM8(esp + 0xB) = 0;
    ebx = 0x8B3838;
    if (CMP_EQ(_fa, _fb)) goto loc_001C309C; /* je: equal / zero */

loc_001C3097: ;
    ebx = 0x8B36A8;

loc_001C309C: ;
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001C30F6; /* jle: less or equal (signed <=) */

loc_001C30A6: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    goto loc_001C30B0;

    /* nop */

loc_001C30B0: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(ecx + esi * 4);
    eax = MEM32(ebp + 4);
    ecx = MEM32(ebp);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebx)) >> 32) & 1);
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C30C9u); RECOMP_ABI_CALL(0x00036508u, sub_00036508); /* call 0x00036508 */

loc_001C30C9: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C30E1; /* jp: parity */

loc_001C30DC: ;
    MEM8(esp + 0x13) = 1;

loc_001C30E1: ;
    eax = MEM32(edi + 0x1C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001C30B0; /* jl: less (signed <) */

loc_001C30E9: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_001C30F6; /* je: equal / zero */

loc_001C30F2: ;
    MEM8(edi + 4) = 0;

loc_001C30F6: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001C30F8: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C3120
 * Original: 0x001C3120 - 0x001C3162 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3120: ;
    xmm0 = XMM_SCALAR(MEMF(0x7F0108)); /* movss */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x13) = LO8(ecx);
    MEM8(eax + 0x11) = LO8(ecx);
    MEM8(eax + 0x12) = LO8(ecx);
    edx = 0x1010101;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM8(eax + 0x10) = LO8(edx);
    MEM8(eax + 0x2A) = LO8(ecx);
    MEM8(eax + 0x2B) = LO8(ecx);
    MEM8(eax + 0x28) = LO8(ecx);
    MEM8(eax + 0x29) = LO8(ecx);
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x28) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001C3180
 * Original: 0x001C3180 - 0x001C3262 (226 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3180(void)
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

loc_001C3180: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C31A9; /* je: equal / zero */

loc_001C3196: ;
    ecx = MEM32(eax * 4 + 0x8E8EB8);
    ecx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C31D1; /* je: equal / zero */

loc_001C31A5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C31D1; /* je: equal / zero */

loc_001C31A9: ;
    xmm0 = XMM_SCALAR(MEMF(0x7F0260)); /* movss */
    MEM8(edi + 0x11) = 0;
    MEM8(edi + 0x12) = 0;
    MEM8(edi + 0x13) = 0;
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x14) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001C31D1: ;
    ecx = MEM32(eax * 4 + 0x8E8FA8);
    eax = MEM32(ecx + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7F025C)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C320B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C3207: ;
    MEM8(edi + 0x13) = 1;

loc_001C320B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x8B39C8;

loc_001C3214: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(edi + 0x14));
    eax = esp + 0x10;
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C3227u); RECOMP_ABI_CALL(0x00029A42u, sub_00029A42); /* call 0x00029A42 */

loc_001C3227: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C3239; /* jne: not equal / not zero */

loc_001C322B: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B3B30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B3B30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C3214; /* jl: less (signed <) */

loc_001C3237: ;
    goto loc_001C3240;

loc_001C3239: ;
    ebx = MEM32(ebp * 4 + 0x7F0018);

loc_001C3240: ;
    SET_LO8(eax, MEM8(edi + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_001C324D; /* jne: not equal / not zero */

loc_001C3249: ;
    MEM8(edi + 0x14) = 1;

loc_001C324D: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = ebx;
    POP32(esp, ebx);
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C32A0
 * Original: 0x001C32A0 - 0x001C32EE (78 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C32A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C32A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x20);
    edx = MEM32(eax + 0x30);
    MEM32(esp + 4) = edx;
    eax = MEM32(eax + 0x38);
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(ecx + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = esp + 0xC;
    eax = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C32D3u); RECOMP_ABI_CALL(0x0002F645u, sub_0002F645); /* call 0x0002F645 */

loc_001C32D3: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001C32E9u); RECOMP_ABI_CALL(0x00014B6Au, sub_00014B6A); /* call 0x00014B6A */

loc_001C32E9: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3310
 * Original: 0x001C3310 - 0x001C33D1 (193 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C3310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(ebx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_001C3340; /* je: equal / zero */

loc_001C332D: ;
    ecx = MEM32(eax * 4 + 0x8E8EB8);
    ecx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C336E; /* je: equal / zero */

loc_001C333C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C336E; /* je: equal / zero */

loc_001C3340: ;
    SET_LO16(eax, MEM16(0x8E9610));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C33CB; /* je: equal / zero */

loc_001C334E: ;
    ecx = SX16(LO16(eax));
    edx = MEM32(ecx * 4 + 0x8E8FA8);
    eax = MEM32(edx + 0xF0);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    goto loc_001C3389;

loc_001C336E: ;
    eax = MEM32(eax * 4 + 0x8E8FA8);
    ecx = MEM32(eax + 0xF0);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(ecx + 0x1C);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;

loc_001C3389: ;
    esi = 0x8B39C8;
    edi = edi;

loc_001C3390: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C339Cu); RECOMP_ABI_CALL(0x000360B2u, sub_000360B2); /* call 0x000360B2 */

loc_001C339C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C33C0; /* jne: not equal / not zero */

loc_001C33A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AACB4); /* mulss */
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C33C0u); RECOMP_ABI_CALL(0x000360B2u, sub_000360B2); /* call 0x000360B2 */

loc_001C33C0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B3B30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B3B30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C3390; /* jl: less (signed <) */

loc_001C33CB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3410
 * Original: 0x001C3410 - 0x001C342D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3410: ;
    eax = MEM32(0x8F20EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3422; /* je: equal / zero */

loc_001C3419: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C341Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C341F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C3422: ;
    MEM32(0x8F20EC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001C3440
 * Original: 0x001C3440 - 0x001C34B8 (120 bytes, 37 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001C3440(void)
{
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

loc_001C3440: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, esi);
    esi = eax + edx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C3457u); RECOMP_ABI_CALL(0x0001BB90u, sub_0001BB90); /* call 0x0001BB90 */

loc_001C3457: ;
    ecx = MEM32(esi + 0xC);
    edx = (uint32_t)(int32_t)SMEM8(ecx);
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB2D0)); /* fmul dword ptr [0x7ab2d0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    POP32(esp, esi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMD(0x7BA2D0)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_001C3491; /* jbe: below or equal (unsigned <=) */

loc_001C347F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_001C3491: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMD(0x7F0268)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_001C34B5; /* jbe: below or equal (unsigned <=) */

loc_001C34A1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_001C34B5: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C34E0
 * Original: 0x001C34E0 - 0x001C351E (62 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C34E0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001C34E0: ;
    eax = MEM32(esp + 4);
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C34F6u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C34F6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C3511; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C3509: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C3517; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C3511: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_001C3517: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C3530
 * Original: 0x001C3530 - 0x001C3593 (99 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3530: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    eax = 0x64;
    PUSH32(esp, 0xA0);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    eax = esi + 0x2C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi) = 0x7F0274;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x10) = 0x5A;
    MEM32(esi + 4) = 0x1E;
    PUSH32(esp, 0x001C3579u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001C3579: ;
    PUSH32(esp, 0xA0);
    ecx = esi + 0xCC;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C358Bu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001C358B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C35B0
 * Original: 0x001C35B0 - 0x001C35F5 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C35B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C35B0: ;
    eax = MEM32(0x8E8F84);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xA8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001C35DE; /* jl: less (signed <) */

loc_001C35C3: ;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C35DE; /* je: equal / zero */

loc_001C35C8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x12A);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C35D9u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C35D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C35E3; /* je: equal / zero */

loc_001C35DE: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001C35E3: ;
    ecx = MEM32(esi * 4 + 0x8E8EB8);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001C35F2u); RECOMP_ABI_CALL(0x0001BA6Eu, sub_0001BA6E); /* call 0x0001BA6E */

loc_001C35F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3610
 * Original: 0x001C3610 - 0x001C36B4 (164 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C3610: ;
    eax = MEM32(0x8E8F84);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0xA8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C3628; /* jge: greater or equal (signed >=) */

loc_001C3623: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C3628: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp * 4 + 0x8E8EB8);
    eax = MEM32(ebx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C363D; /* je: equal / zero */

loc_001C3637: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C363D: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001C3645u); RECOMP_ABI_CALL(0x0001BA6Eu, sub_0001BA6E); /* call 0x0001BA6E */

loc_001C3645: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3637; /* je: equal / zero */

loc_001C3649: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x39);
    PUSH32(esp, edi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x30);
    ecx = ecx + ecx * 4;
    edi = edx + ecx * 4;
    edx = MEM32(esi + edi * 4 + 0xCC);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12A);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C3679u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C3679: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C3685u); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001C3685: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C368Bu); RECOMP_ABI_CALL(0x00036D19u, sub_00036D19); /* call 0x00036D19 */

loc_001C368B: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + edi * 4 + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C3696u); RECOMP_ABI_CALL(0x000298EEu, sub_000298EE); /* call 0x000298EE */

loc_001C3696: ;
    MEM32(esi + 0x20) = ebp;
    ecx = MEM32(esi + edi * 4 + 0x2C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(esi + edi * 4 + 0xCC);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(esi + 0x28) = edx;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001C36E0
 * Original: 0x001C36E0 - 0x001C3722 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C36E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C36E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0xA0);
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    eax = esi + 0x2C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    PUSH32(esp, 0x001C370Au); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001C370A: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xCC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C371Cu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001C371C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3740
 * Original: 0x001C3740 - 0x001C37A2 (98 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C3740: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x8E9100;

loc_001C3752: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C3754: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x1B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C378A; /* jne: not equal / not zero */

loc_001C3760: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C3767u); RECOMP_ABI_CALL(0x0002576Cu, sub_0002576C); /* call 0x0002576C */

loc_001C3767: ;
    edx = MEM32(esp + 0x18);
    ecx = edi + esi;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(edx + ecx * 4 + 0x2C) = eax;
    PUSH32(esp, 0x001C3779u); RECOMP_ABI_CALL(0x00035112u, sub_00035112); /* call 0x00035112 */

loc_001C3779: ;
    edx = MEM32(esp + 0x20);
    ecx = edi + esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + ecx * 4 + 0xCC) = eax;

loc_001C378A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C3754; /* jl: less (signed <) */

loc_001C3793: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x28 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C3752; /* jl: less (signed <) */

loc_001C379C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C37C0
 * Original: 0x001C37C0 - 0x001C3845 (133 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C37C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C37C0: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C37D2; /* jge: greater or equal (signed >=) */

loc_001C37CF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001C37D2: ;
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x8E8EB8);
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C3841; /* jne: not equal / not zero */

loc_001C37E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C37E7u); RECOMP_ABI_CALL(0x00011B36u, sub_00011B36); /* call 0x00011B36 */

loc_001C37E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3841; /* je: equal / zero */

loc_001C37EB: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    PUSH32(esp, edi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C3803u); RECOMP_ABI_CALL(0x00013BE3u, sub_00013BE3); /* call 0x00013BE3 */

loc_001C3803: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C3841; /* je: equal / zero */

loc_001C380B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12A);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C381Du); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C381D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C3829u); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001C3829: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C382Fu); RECOMP_ABI_CALL(0x00036D19u, sub_00036D19); /* call 0x00036D19 */

loc_001C382F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x800000);
    PUSH32(esp, 0x001C383Au); RECOMP_ABI_CALL(0x000298EEu, sub_000298EE); /* call 0x000298EE */

loc_001C383A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001C3841: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3870
 * Original: 0x001C3870 - 0x001C3909 (153 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C3870: ;
    eax = MEM32(0x8E8F84);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C3888; /* jge: greater or equal (signed >=) */

loc_001C3883: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C3888: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx * 4 + 0x8E8EB8);
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C3903; /* jne: not equal / not zero */

loc_001C3897: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3903; /* je: equal / zero */

loc_001C38A0: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C38A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C38A4u); } /* indirect call */
    }

loc_001C38A7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3903; /* je: equal / zero */

loc_001C38AB: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    PUSH32(esp, ebp);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebp = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C38C3u); RECOMP_ABI_CALL(0x0001C7CAu, sub_0001C7CA); /* call 0x0001C7CA */

loc_001C38C3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_001C3903; /* je: equal / zero */

loc_001C38CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12A);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C38DDu); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C38DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C38E9u); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001C38E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C38EFu); RECOMP_ABI_CALL(0x00036D19u, sub_00036D19); /* call 0x00036D19 */

loc_001C38EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C38F7u); RECOMP_ABI_CALL(0x000298EEu, sub_000298EE); /* call 0x000298EE */

loc_001C38F7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(edi + 0x20) = ebx;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C3903: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3930
 * Original: 0x001C3930 - 0x001C39C9 (153 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C3930: ;
    eax = MEM32(0x8E8F84);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C3948; /* jge: greater or equal (signed >=) */

loc_001C3943: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C3948: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx * 4 + 0x8E8EB8);
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C39C3; /* jne: not equal / not zero */

loc_001C3957: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C39C3; /* je: equal / zero */

loc_001C3960: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C3967u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3964u); } /* indirect call */
    }

loc_001C3967: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C39C3; /* je: equal / zero */

loc_001C396B: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    PUSH32(esp, ebp);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebp = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C3983u); RECOMP_ABI_CALL(0x00019D2Cu, sub_00019D2C); /* call 0x00019D2C */

loc_001C3983: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_001C39C3; /* je: equal / zero */

loc_001C398B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12A);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C399Du); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C399D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C39A9u); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001C39A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C39AFu); RECOMP_ABI_CALL(0x00036D19u, sub_00036D19); /* call 0x00036D19 */

loc_001C39AF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C39B7u); RECOMP_ABI_CALL(0x000298EEu, sub_000298EE); /* call 0x000298EE */

loc_001C39B7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(edi + 0x20) = ebx;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C39C3: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C39F0
 * Original: 0x001C39F0 - 0x001C3A74 (132 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C39F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C39F0: ;
    eax = MEM32(0x8E8F84);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C3A08; /* jge: greater or equal (signed >=) */

loc_001C3A03: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C3A08: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx * 4 + 0x8E8EB8);
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C3A6E; /* jne: not equal / not zero */

loc_001C3A17: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C3A1Fu); RECOMP_ABI_CALL(0x00036369u, sub_00036369); /* call 0x00036369 */

loc_001C3A1F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3A6E; /* je: equal / zero */

loc_001C3A23: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x40000);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = edx;
    ecx = MEM32(0x896158);
    PUSH32(esp, 0);
    MEM32(esi + 0x1C) = ecx;
    PUSH32(esp, 0x123);
    ecx = 0x8B26F0;
    MEM32(esi + 0x20) = ebx;
    PUSH32(esp, 0x001C3A53u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C3A53: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C3A5Fu); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001C3A5F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C3A65u); RECOMP_ABI_CALL(0x00013094u, sub_00013094); /* call 0x00013094 */

loc_001C3A65: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C3A6E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3AA0
 * Original: 0x001C3AA0 - 0x001C3B8D (237 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3AA0(void)
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

loc_001C3AA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C3AACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3AA9u); } /* indirect call */
    }

loc_001C3AAC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C3AB5; /* jne: not equal / not zero */

loc_001C3AB0: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001C3AB5: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0xA8);
    eax = MEM32(edx * 4 + 0x8E8EB8);
    ecx = MEM32(eax + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    PUSH32(esp, edi);
    edi = 1;
    if ((_fca > _fcb)) goto loc_001C3AE7; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_001C3AE2: ;
    edi = 2;

loc_001C3AE7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C3AF3u); RECOMP_ABI_CALL(0x0001FB32u, sub_0001FB32); /* call 0x0001FB32 */

loc_001C3AF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    ebx = eax;
    MEM8(esp + 0x14) = 0;
    MEM8(esp + 0x13) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001C3B13; /* jne: not equal / not zero */

loc_001C3B07: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C3B38; /* je: equal / zero */

loc_001C3B0C: ;
    MEM8(esp + 0x14) = 1;
    goto loc_001C3B33;

loc_001C3B13: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C3B38; /* jne: not equal / not zero */

loc_001C3B18: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0xC (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C3B38; /* je: equal / zero */

loc_001C3B1D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x129);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C3B2Eu); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C3B2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C3B38; /* jne: not equal / not zero */

loc_001C3B33: ;
    MEM8(esp + 0x13) = 1;

loc_001C3B38: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x20), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C3B83; /* jne: not equal / not zero */

loc_001C3B3D: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3B83; /* je: equal / zero */

loc_001C3B45: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x129);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C3B5Au); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C3B5A: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C3B66u); RECOMP_ABI_CALL(0x00013FB2u, sub_00013FB2); /* call 0x00013FB2 */

loc_001C3B66: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C3B6Cu); RECOMP_ABI_CALL(0x00036D19u, sub_00036D19); /* call 0x00036D19 */

loc_001C3B6C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C3B73u); RECOMP_ABI_CALL(0x000141C4u, sub_000141C4); /* call 0x000141C4 */

loc_001C3B73: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebp + 0x20) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001C3B83: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C3BD0
 * Original: 0x001C3BD0 - 0x001C3C34 (100 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001C3BD0: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001C3BEF; /* jge: greater or equal (signed >=) */

loc_001C3BD8: ;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001C3BEF; /* jge: greater or equal (signed >=) */

loc_001C3BE0: ;
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(0x896158);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001C3BF2; /* jle: less or equal (signed <=) */

loc_001C3BEF: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001C3BF2: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001C3BEF; /* je: equal / zero */

loc_001C3C03: ;
    edx = MEM32(eax * 4 + 0x8E8EB8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C3C14u); RECOMP_ABI_CALL(0x00012E6Eu, sub_00012E6E); /* call 0x00012E6E */

loc_001C3C14: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3BEF; /* je: equal / zero */

loc_001C3C1B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x16A);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C3C2Cu); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C3C2C: ;
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
    esp += 4; return; /* ret */

}

/**
 * sub_001C3C50
 * Original: 0x001C3C50 - 0x001C3CD4 (132 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3C50: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C3C55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3C52u); } /* indirect call */
    }

loc_001C3C55: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C3C5A; /* jne: not equal / not zero */

loc_001C3C59: ;
    esp += 4; return; /* ret */

loc_001C3C5A: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0xA8);
    eax = MEM32(edx * 4 + 0x8E8EB8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C3C79u); RECOMP_ABI_CALL(0x00012E6Eu, sub_00012E6E); /* call 0x00012E6E */

loc_001C3C79: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3CCF; /* je: equal / zero */

loc_001C3C82: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x16A);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C3C94u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C3C94: ;
    PUSH32(esp, edi);
    ecx = 0x8B23A8;
    esi = eax;
    PUSH32(esp, 0x001C3CA1u); RECOMP_ABI_CALL(0x00013FB2u, sub_00013FB2); /* call 0x00013FB2 */

loc_001C3CA1: ;
    edi = eax;
    PUSH32(esp, 0x001C3CA8u); RECOMP_ABI_CALL(0x00036D19u, sub_00036D19); /* call 0x00036D19 */

loc_001C3CA8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x16A);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C3CBCu); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C3CBC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C3CC6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C3CC0u); } /* indirect call */
    }

loc_001C3CC6: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C3CCF: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3D00
 * Original: 0x001C3D00 - 0x001C3DA5 (165 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001C3D00: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C3D12; /* jge: greater or equal (signed >=) */

loc_001C3D0F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001C3D12: ;
    PUSH32(esp, edi);
    edi = MEM32(eax * 4 + 0x8E8EB8);
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3D25; /* je: equal / zero */

loc_001C3D21: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001C3D25: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = 0x8E9D5C;
    PUSH32(esp, 0x001C3D32u); RECOMP_ABI_CALL(0x0002B46Eu, sub_0002B46E); /* call 0x0002B46E */

loc_001C3D32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3D3A; /* je: equal / zero */

loc_001C3D36: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C3D4F;

loc_001C3D3A: ;
    PUSH32(esp, 1);
    ecx = 0x8E9D5C;
    PUSH32(esp, 0x001C3D46u); RECOMP_ABI_CALL(0x0002B46Eu, sub_0002B46E); /* call 0x0002B46E */

loc_001C3D46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3DA0; /* je: equal / zero */

loc_001C3D4A: ;
    esi = 1;

loc_001C3D4F: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C3DA0; /* jne: not equal / not zero */

loc_001C3D57: ;
    edx = MEM32(edi + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(0x7EFFE4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x1C); /* comiss */
    if ((_fca > _fcb)) goto loc_001C3DA0; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx + 0x1C)) */

loc_001C3D6B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x108);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C3D7Cu); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C3D7C: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C3D88u); RECOMP_ABI_CALL(0x00013FB2u, sub_00013FB2); /* call 0x00013FB2 */

loc_001C3D88: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C3D8Fu); RECOMP_ABI_CALL(0x0002331Du, sub_0002331D); /* call 0x0002331D */

loc_001C3D8F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C3D98u); RECOMP_ABI_CALL(0x0001BAD7u, sub_0001BAD7); /* call 0x0001BAD7 */

loc_001C3D98: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001C3DA0: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3DD0
 * Original: 0x001C3DD0 - 0x001C40BD (749 bytes, 239 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C3DD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, esi);
    ebp = 0x1E;
    PUSH32(esp, 0x24);
    MEM32(edi + 0x34) = 0x96;
    MEM32(edi + 0x38) = esi;
    MEM32(edi + 0x3C) = esi;
    MEM32(edi + 0x40) = ebp;
    MEM32(edi + 0x44) = esi;
    PUSH32(esp, 0x001C3DF8u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C3DF8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = 0x64;
    if (CMP_EQ(_fa, _fb)) goto loc_001C3E47; /* je: equal / zero */

loc_001C3E04: ;
    MEM32(eax + 4) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax) = 0x7F01CC;
    MEM32(eax + 8) = 6;
    MEM32(eax + 0xC) = ebx;
    SET_LO8(ecx, MEM8(0x8F6A24));
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    MEM32(eax + 4) = 0x32;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFEDD6u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1518) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x1518)) >> 32) & 1);
    ecx = ecx + 0x1518;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = ecx;
    goto loc_001C3E49;

loc_001C3E47: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C3E49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    MEM32(edi) = eax;
    PUSH32(esp, 0x001C3E53u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C3E53: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001C3E7E; /* je: equal / zero */

loc_001C3E5A: ;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax) = 0x7F0154;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x2EE;
    MEM32(eax + 4) = ebp;
    goto loc_001C3E80;

loc_001C3E7E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C3E80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x001C3E8Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C3E8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001C3EBA; /* je: equal / zero */

loc_001C3E92: ;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax) = 0x7F016C;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x96;
    MEM32(eax + 4) = 0x3E8;
    goto loc_001C3EBC;

loc_001C3EBA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C3EBC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x16C);
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x001C3ECAu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C3ECA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001C3EDA; /* je: equal / zero */

loc_001C3ED1: ;
    ecx = eax;
    PUSH32(esp, 0x001C3ED8u); RECOMP_ABI_CALL(0x00022ABCu, sub_00022ABC); /* call 0x00022ABC */

loc_001C3ED8: ;
    goto loc_001C3EDC;

loc_001C3EDA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C3EDC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x28);
    MEM32(edi + 0xC) = eax;
    PUSH32(esp, 0x001C3EE7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C3EE7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    ebp = 5;
    if (CMP_EQ(_fa, _fb)) goto loc_001C3F22; /* je: equal / zero */

loc_001C3EF3: ;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax) = 0x7F0184;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 0x24) = 0xFFFFFFFFu;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x708;
    MEM32(eax + 4) = 0xA;
    goto loc_001C3F24;

loc_001C3F22: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C3F24: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    MEM32(edi + 0x10) = eax;
    PUSH32(esp, 0x001C3F2Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C3F2F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001C3F5E; /* je: equal / zero */

loc_001C3F36: ;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax) = 0x7F019C;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x708;
    MEM32(eax + 4) = 0xA;
    goto loc_001C3F60;

loc_001C3F5E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C3F60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    MEM32(edi + 0x14) = eax;
    PUSH32(esp, 0x001C3F6Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C3F6B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001C3F9E; /* je: equal / zero */

loc_001C3F72: ;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax) = 0x7F01B4;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 8) = 4;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x708;
    MEM32(eax + 4) = 0xA;
    goto loc_001C3FA0;

loc_001C3F9E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C3FA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    MEM32(edi + 0x18) = eax;
    PUSH32(esp, 0x001C3FABu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C3FAB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    ebp = 0x1E;
    if (CMP_EQ(_fa, _fb)) goto loc_001C3FD7; /* je: equal / zero */

loc_001C3FB7: ;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax) = 0x7F01E4;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebp;
    MEM32(eax + 4) = ebp;
    goto loc_001C3FD9;

loc_001C3FD7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C3FD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    MEM32(edi + 0x1C) = eax;
    PUSH32(esp, 0x001C3FE4u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C3FE4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001C400C; /* je: equal / zero */

loc_001C3FEB: ;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax) = 0x7F01FC;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x546;
    MEM32(eax + 4) = ebp;
    goto loc_001C400E;

loc_001C400C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C400E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    MEM32(edi + 0x20) = eax;
    PUSH32(esp, 0x001C4019u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C4019: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001C4041; /* je: equal / zero */

loc_001C4020: ;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax) = 0x7F0214;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x2EE;
    MEM32(eax + 4) = ebp;
    goto loc_001C4043;

loc_001C4041: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C4043: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    MEM32(edi + 0x24) = eax;
    PUSH32(esp, 0x001C404Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C404E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001C4076; /* je: equal / zero */

loc_001C4055: ;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax) = 0x7F022C;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x12C;
    MEM32(eax + 4) = ebp;
    goto loc_001C4078;

loc_001C4076: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C4078: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    MEM32(edi + 0x28) = eax;
    PUSH32(esp, 0x001C4083u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C4083: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001C40B3; /* je: equal / zero */

loc_001C408A: ;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 4) = ebp;
    MEM32(eax) = 0x7F0244;
    MEM32(eax + 0x10) = 0x12C;
    MEM32(edi + 0x2C) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C40B3: ;
    MEM32(edi + 0x2C) = esi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4180
 * Original: 0x001C4180 - 0x001C41AD (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4180: ;
    ecx = MEM32(0x8F20F4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C419E; /* je: equal / zero */

loc_001C4190: ;
    PUSH32(esp, 0x001C4195u); RECOMP_ABI_CALL(0x0002D741u, sub_0002D741); /* call 0x0002D741 */

loc_001C4195: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C419Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C419B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C419E: ;
    POP32(esp, esi);
    MEM32(0x8F20F4) = ebx;
    MEM8(0x8F20F8) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C41C0
 * Original: 0x001C41C0 - 0x001C42AB (235 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C41C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001C41C0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    MEM32(esp + 0xC) = 2;
    edi = 1;
    PUSH32(esp, 0x001C41DAu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001C41DA: ;
    ecx = eax;
    PUSH32(esp, 0x001C41E1u); RECOMP_ABI_CALL(0x0001457Fu, sub_0001457F); /* call 0x0001457F */

loc_001C41E1: ;
    esi = eax;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0x3C (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C4206; /* jl: less (signed <) */

loc_001C41E9: ;
    PUSH32(esp, 0x001C41EEu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001C41EE: ;
    ecx = eax;
    PUSH32(esp, 0x001C41F5u); RECOMP_ABI_CALL(0x0001FC9Au, sub_0001FC9A); /* call 0x0001FC9A */

loc_001C41F5: ;
    eax = SX16(LO16(eax));
    ecx = SX16(LO16(esi));
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C4297; /* jle: less or equal (signed <=) */

loc_001C4206: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C421F; /* jge: greater or equal (signed >=) */

loc_001C4216: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001C421F: ;
    eax = MEM32(eax * 4 + 0x8E8FA8);
    ecx = MEM32(eax + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(0x7EFFE4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x1C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C4257; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 0x1C)) */

loc_001C423A: ;
    MEM32(esp + 0x10) = 1;
    MEM32(esp + 0x14) = 8;
    MEM32(esp + 0x18) = 9;
    edi = 4;

loc_001C4257: ;
    PUSH32(esp, 0);
    ecx = 0x8E9D5C;
    PUSH32(esp, 0x001C4263u); RECOMP_ABI_CALL(0x0002B46Eu, sub_0002B46E); /* call 0x0002B46E */

loc_001C4263: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4277; /* jne: not equal / not zero */

loc_001C4267: ;
    PUSH32(esp, 1);
    ecx = 0x8E9D5C;
    PUSH32(esp, 0x001C4273u); RECOMP_ABI_CALL(0x0002B46Eu, sub_0002B46E); /* call 0x0002B46E */

loc_001C4273: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4280; /* je: equal / zero */

loc_001C4277: ;
    MEM32(esp + edi * 4 + 0xC) = 0xB;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C4280: ;
    ecx = 0x8E9D58;
    PUSH32(esp, 0x001C428Au); RECOMP_ABI_CALL(0x0001A66Eu, sub_0001A66E); /* call 0x0001A66E */

loc_001C428A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4297; /* je: equal / zero */

loc_001C428E: ;
    MEM32(esp + edi * 4 + 0xC) = 0xA;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C4297: ;
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x001C42A4u); RECOMP_ABI_CALL(0x00014B15u, sub_00014B15); /* call 0x00014B15 */

loc_001C42A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C42F0
 * Original: 0x001C42F0 - 0x001C4370 (128 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C42F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C42F0: ;
    SET_LO8(eax, MEM8(0x8F20F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C436F; /* je: equal / zero */

loc_001C42F9: ;
    eax = MEM32(0x8F20F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C436F; /* je: equal / zero */

loc_001C4302: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C4305: ;
    eax = MEM32(0x8F20F4);
    ecx = MEM32(esi + eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001C4312u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C430Fu); } /* indirect call */
    }

loc_001C4312: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C4305; /* jl: less (signed <) */

loc_001C431A: ;
    eax = MEM32(0x8F20F4);
    esi = MEM32(eax + 0xC);
    PUSH32(esp, 0xA0);
    ecx = esi + 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C4332u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001C4332: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xCC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C4345u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001C4345: ;
    edx = MEM32(0x8F20F4);
    MEM32(edx + 0x30) = 0;
    eax = MEM32(0x8F20F4);
    MEM32(eax + 0x38) = 0;
    ecx = MEM32(0x8F20F4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x3C) = 0;
    POP32(esp, esi);

loc_001C436F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C4390
 * Original: 0x001C4390 - 0x001C43AB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C4390: ;
    SET_LO8(eax, MEM8(0x8F20F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C43AA; /* je: equal / zero */

loc_001C4399: ;
    eax = MEM32(0x8F20F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C43AA; /* je: equal / zero */

loc_001C43A2: ;
    ecx = MEM32(eax + 0xC);
    g_seh_ebp = ebp; sub_0001A9F7(); return; /* tail jmp 0x0001A9F7 */

loc_001C43AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C43C0
 * Original: 0x001C43C0 - 0x001C44A3 (227 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C43C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C43C0: ;
    SET_LO8(eax, MEM8(0x8F20F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C44A2; /* je: equal / zero */

loc_001C43CD: ;
    eax = MEM32(0x8F20F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C44A2; /* je: equal / zero */

loc_001C43DA: ;
    PUSH32(esp, 0x001C43DFu); RECOMP_ABI_CALL(0x0001805Du, sub_0001805D); /* call 0x0001805D */

loc_001C43DF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C44A2; /* jne: not equal / not zero */

loc_001C43E7: ;
    PUSH32(esp, 0x001C43ECu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001C43EC: ;
    ecx = eax;
    PUSH32(esp, 0x001C43F3u); RECOMP_ABI_CALL(0x0002085Cu, sub_0002085C); /* call 0x0002085C */

loc_001C43F3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C44A2; /* jne: not equal / not zero */

loc_001C43FB: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C44A2; /* je: equal / zero */

loc_001C4408: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C44A2; /* je: equal / zero */

loc_001C4410: ;
    PUSH32(esp, 0x001C4415u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_001C4415: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C44A2; /* jne: not equal / not zero */

loc_001C441D: ;
    PUSH32(esp, 0x001C4422u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_001C4422: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C44A2; /* jne: not equal / not zero */

loc_001C4426: ;
    SET_LO8(eax, MEM8(0x904B9D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C44A2; /* jne: not equal / not zero */

loc_001C442F: ;
    eax = MEM32(0x8F20F4);
    ecx = MEM32(0x896158);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x30);
    edx = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_001C44A2; /* jle: less or equal (signed <=) */

loc_001C4448: ;
    MEM32(eax + 0x30) = ecx;
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C4455u); RECOMP_ABI_CALL(0x0001F6FAu, sub_0001F6FA); /* call 0x0001F6FA */

loc_001C4455: ;
    ecx = MEM32(0x8F20F4);
    _fa = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x40), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C446B; /* jg: greater (signed >) */

loc_001C4460: ;
    PUSH32(esp, 0x001C4465u); RECOMP_ABI_CALL(0x00029F33u, sub_00029F33); /* call 0x00029F33 */

loc_001C4465: ;
    ecx = MEM32(0x8F20F4);

loc_001C446B: ;
    eax = (uint32_t)(int32_t)SMEM16(0x896166);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x3C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C44A2; /* je: equal / zero */

loc_001C4477: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C4481;

loc_001C447B: ;
    ecx = MEM32(0x8F20F4);

loc_001C4481: ;
    ecx = MEM32(eax + ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    MEM32(ecx + 0x18) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_001C447B; /* jl: less (signed <) */

loc_001C4493: ;
    edx = (uint32_t)(int32_t)SMEM16(0x896166);
    eax = MEM32(0x8F20F4);
    MEM32(eax + 0x3C) = edx;

loc_001C44A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C44E0
 * Original: 0x001C44E0 - 0x001C4548 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C44E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C44E0: ;
    eax = MEM32(0x8E8FA8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C44F1u); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001C44F1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x127);
    ecx = 0x8B26F0;
    esi = eax;
    PUSH32(esp, 0x001C4504u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C4504: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x127);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C4518u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C4518: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C4522u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C451Cu); } /* indirect call */
    }

loc_001C4522: ;
    ecx = MEM32(0x8E8FA8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C4536u); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001C4536: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x127);
    ecx = 0x8F0D08;
    PUSH32(esp, 0x001C4546u); RECOMP_ABI_CALL(0x00017167u, sub_00017167); /* call 0x00017167 */

loc_001C4546: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4570
 * Original: 0x001C4570 - 0x001C45CA (90 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4570: ;
    eax = MEM32(0x8E8FA8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C4582u); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001C4582: ;
    PUSH32(esp, 1);
    ecx = 0x8B23A8;
    esi = eax;
    PUSH32(esp, 0x001C4590u); RECOMP_ABI_CALL(0x00013FB2u, sub_00013FB2); /* call 0x00013FB2 */

loc_001C4590: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1AF);
    ecx = 0x8B26F0;
    edi = eax;
    PUSH32(esp, 0x001C45A3u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C45A3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0x1AF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C45BAu); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C45BA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C45C4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C45BEu); } /* indirect call */
    }

loc_001C45C4: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C45E0
 * Original: 0x001C45E0 - 0x001C463F (95 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C45E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C45E0: ;
    eax = MEM32(0x8E8FA8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C45F1u); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001C45F1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B);
    ecx = 0x8B26F0;
    esi = eax;
    PUSH32(esp, 0x001C4601u); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C4601: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C4612u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C4612: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C461Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C4616u); } /* indirect call */
    }

loc_001C461C: ;
    ecx = MEM32(0x8E8FA8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C4630u); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001C4630: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    ecx = 0x8F0D08;
    PUSH32(esp, 0x001C463Du); RECOMP_ABI_CALL(0x00017167u, sub_00017167); /* call 0x00017167 */

loc_001C463D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4660
 * Original: 0x001C4660 - 0x001C4697 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4660: ;
    eax = MEM32(0x8E8FA8);
    PUSH32(esp, eax);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C4670u); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001C4670: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x12A);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C4689u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_001C4689: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x001C4693u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C468Du); } /* indirect call */
    }

loc_001C4693: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C46B0
 * Original: 0x001C46B0 - 0x001C46D0 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C46B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C46B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 0xC) = 0x59;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x7F028C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C46E0
 * Original: 0x001C46E0 - 0x001C46E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C46E0(void)
{

loc_001C46E0: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_001C46F0
 * Original: 0x001C46F0 - 0x001C46F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C46F0(void)
{

loc_001C46F0: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001C4700
 * Original: 0x001C4700 - 0x001C474C (76 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4700: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x001C470Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C470D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4747; /* je: equal / zero */

loc_001C4716: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C471Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_001C471E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4735; /* je: equal / zero */

loc_001C4722: ;
    eax = edi + 0x1C;
    eax = MEM32(eax);
    MEM32(esi + 0x1C) = eax;
    POP32(esp, edi);
    MEM32(esi) = 0x7F028C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001C4735: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(eax);
    MEM32(esi + 0x1C) = eax;
    POP32(esp, edi);
    MEM32(esi) = 0x7F028C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001C4747: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4760
 * Original: 0x001C4760 - 0x001C4780 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4760: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 0xC) = 0x59;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x7F029C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C4790
 * Original: 0x001C4790 - 0x001C47D0 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4790: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C47CE; /* je: equal / zero */

loc_001C4798: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C47A1u); RECOMP_ABI_CALL(0x00588356u, sub_00588356); /* call 0x00588356 */

loc_001C47A1: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C47AAu); RECOMP_ABI_CALL(0x005886F7u, sub_005886F7); /* call 0x005886F7 */

loc_001C47AA: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C47BAu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C47BA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM8(esi) = 0;

loc_001C47CE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C47E0
 * Original: 0x001C47E0 - 0x001C486B (139 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C47E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C47E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4867; /* je: equal / zero */

loc_001C47E8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C47EEu); RECOMP_ABI_CALL(0x00021072u, sub_00021072); /* call 0x00021072 */

loc_001C47EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_001C4816; /* je: equal / zero */

loc_001C47F6: ;
    eax = MEM32(edi + 0x104);
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C4866; /* jl: less (signed <) */

loc_001C4803: ;
    if (CMP_LE(_fas, _fbs)) goto loc_001C4816; /* jle: less or equal (signed <=) */

loc_001C4805: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4816; /* je: equal / zero */

loc_001C480A: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C4813u); RECOMP_ABI_CALL(0x00588356u, sub_00588356); /* call 0x00588356 */

loc_001C4813: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C4816: ;
    ecx = MEM32(edi + 0x104);
    eax = MEM32(esi + 0x14);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(edi + 0x108);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C4832u); RECOMP_ABI_CALL(0x0058833Bu, sub_0058833B); /* call 0x0058833B */

loc_001C4832: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C4866; /* jl: less (signed <) */

loc_001C4839: ;
    PUSH32(esp, 0x001C483Eu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_001C483E: ;
    ecx = MEM32(edi + 0x110);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C4850u); RECOMP_ABI_CALL(0x00588C53u, sub_00588C53); /* call 0x00588C53 */

loc_001C4850: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001C4858u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_001C4858: ;
    eax = MEM32(edi + 0x10C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001C4866u); RECOMP_ABI_CALL(0x00025C99u, sub_00025C99); /* call 0x00025C99 */

loc_001C4866: ;
    POP32(esp, edi);

loc_001C4867: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C4890
 * Original: 0x001C4890 - 0x001C4924 (148 bytes, 57 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C4890: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x104);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001C48A6u); RECOMP_ABI_CALL(0x000195DEu, sub_000195DE); /* call 0x000195DE */

loc_001C48A6: ;
    ebx = eax;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C490C; /* je: equal / zero */

loc_001C48B0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4911; /* jne: not equal / not zero */

loc_001C48B5: ;
    eax = MEM32(ebp + 0x104);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C491D; /* jle: less or equal (signed <=) */

loc_001C48C1: ;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4901; /* je: equal / zero */

loc_001C48C8: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C48D0u); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C48D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4901; /* je: equal / zero */

loc_001C48D5: ;
    ecx = eax + eax * 8;
    ecx = esi + ecx * 4;
    PUSH32(esp, 0x001C48E0u); RECOMP_ABI_CALL(0x00021072u, sub_00021072); /* call 0x00021072 */

loc_001C48E0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4901; /* je: equal / zero */

loc_001C48E4: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C48ECu); RECOMP_ABI_CALL(0x00018283u, sub_00018283); /* call 0x00018283 */

loc_001C48EC: ;
    edx = MEM32(ebp + 0x104);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001C48FAu); RECOMP_ABI_CALL(0x000195DEu, sub_000195DE); /* call 0x000195DE */

loc_001C48FA: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4911; /* jne: not equal / not zero */

loc_001C4901: ;
    eax = MEM32(ebp + 0x104);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C48C1; /* jl: less (signed <) */

loc_001C490C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C491D; /* je: equal / zero */

loc_001C4911: ;
    eax = ebx + ebx * 8;
    PUSH32(esp, ebp);
    ecx = esi + eax * 4;
    PUSH32(esp, 0x001C491Du); RECOMP_ABI_CALL(0x000361E3u, sub_000361E3); /* call 0x000361E3 */

loc_001C491D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C4950
 * Original: 0x001C4950 - 0x001C4BE3 (659 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C4950: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x001C495Bu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_001C495B: ;
    ecx = eax;
    PUSH32(esp, 0x001C4962u); RECOMP_ABI_CALL(0x0002085Cu, sub_0002085C); /* call 0x0002085C */

loc_001C4962: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4BDE; /* jne: not equal / not zero */

loc_001C496A: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4BDE; /* je: equal / zero */

loc_001C4977: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4BDE; /* je: equal / zero */

loc_001C497F: ;
    PUSH32(esp, 0x001C4984u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_001C4984: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4BDE; /* jne: not equal / not zero */

loc_001C498C: ;
    PUSH32(esp, 0x001C4991u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_001C4991: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4BDE; /* jne: not equal / not zero */

loc_001C4999: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = 0x8E9CF0;
    PUSH32(esp, 0x001C49ABu); RECOMP_ABI_CALL(0x00028877u, sub_00028877); /* call 0x00028877 */

loc_001C49AB: ;
    edx = MEM32(edi + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, 0);
    ecx = 0x8E9CF0;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x001C49C2u); RECOMP_ABI_CALL(0x00028877u, sub_00028877); /* call 0x00028877 */

loc_001C49C2: ;
    _fb = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(edi + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C49D4; /* jle: less or equal (signed <=) */

loc_001C49CC: ;
    MEM8(edi + 0x28) = 1;
    MEM8(edi + 0x2A) = 1;

loc_001C49D4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = 0x8E9CF0;
    PUSH32(esp, 0x001C49E4u); RECOMP_ABI_CALL(0x00028877u, sub_00028877); /* call 0x00028877 */

loc_001C49E4: ;
    edx = MEM32(edi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, 0);
    ecx = 0x8E9CF0;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x001C49FBu); RECOMP_ABI_CALL(0x00028877u, sub_00028877); /* call 0x00028877 */

loc_001C49FB: ;
    _fb = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(edi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C4A0D; /* jle: less or equal (signed <=) */

loc_001C4A05: ;
    MEM8(edi + 0x29) = 1;
    MEM8(edi + 0x2B) = 1;

loc_001C4A0D: ;
    ecx = edi;
    PUSH32(esp, 0x001C4A14u); RECOMP_ABI_CALL(0x0001DAB2u, sub_0001DAB2); /* call 0x0001DAB2 */

loc_001C4A14: ;
    ecx = edi;
    PUSH32(esp, 0x001C4A1Bu); RECOMP_ABI_CALL(0x00021B85u, sub_00021B85); /* call 0x00021B85 */

loc_001C4A1B: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4BDC; /* je: equal / zero */

loc_001C4A25: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4BDC; /* je: equal / zero */

loc_001C4A3B: ;
    PUSH32(esp, ebp);
    ebp = MEM32(eax * 4 + 0x8E8EB8);
    ecx = ebp;
    PUSH32(esp, 0x001C4A4Au); RECOMP_ABI_CALL(0x00036DAFu, sub_00036DAF); /* call 0x00036DAF */

loc_001C4A4A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) esi = ebp; /* cmovne */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4A97; /* je: equal / zero */

loc_001C4A55: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4A5F; /* je: equal / zero */

loc_001C4A5A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4A97; /* jne: not equal / not zero */

loc_001C4A5F: ;
    SET_LO8(eax, MEM8(0x8F20F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4A72; /* je: equal / zero */

loc_001C4A68: ;
    ecx = MEM32(0x8F20F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4A76; /* jne: not equal / not zero */

loc_001C4A72: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_001C4A97;

loc_001C4A76: ;
    SET_LO8(eax, MEM8(0x904B9D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4A83; /* je: equal / zero */

loc_001C4A7F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_001C4A97;

loc_001C4A83: ;
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = 7;
    PUSH32(esp, 0x001C4A97u); RECOMP_ABI_CALL(0x00014B15u, sub_00014B15); /* call 0x00014B15 */

loc_001C4A97: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    SET_LO8(edx, MEM8(ecx + edi + 0x2A));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4AAA; /* jne: not equal / not zero */

loc_001C4AA3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4AAA; /* jne: not equal / not zero */

loc_001C4AA8: ;
    SET_LO8(eax, 1);

loc_001C4AAA: ;
    SET_LO8(edx, MEM8(ecx + edi + 0x28));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4ABB; /* jne: not equal / not zero */

loc_001C4AB2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4BDB; /* je: equal / zero */

loc_001C4ABB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4BDB; /* jne: not equal / not zero */

loc_001C4AC3: ;
    PUSH32(esp, ecx);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C4ACEu); RECOMP_ABI_CALL(0x00013FB2u, sub_00013FB2); /* call 0x00013FB2 */

loc_001C4ACE: ;
    PUSH32(esp, esi);
    ecx = 0x8B23A8;
    ebp = eax;
    PUSH32(esp, 0x001C4ADBu); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001C4ADB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001C4AEB; /* jne: not equal / not zero */

loc_001C4AE4: ;
    eax = 2;
    goto loc_001C4AFC;

loc_001C4AEB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF7);
    ecx = 0x8B26F0;
    PUSH32(esp, 0x001C4AFCu); RECOMP_ABI_CALL(0x000134E5u, sub_000134E5); /* call 0x000134E5 */

loc_001C4AFC: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C4B0Bu); RECOMP_ABI_CALL(0x00030400u, sub_00030400); /* call 0x00030400 */

loc_001C4B0B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = 0x8B23A8;
    PUSH32(esp, 0x001C4B19u); RECOMP_ABI_CALL(0x00020BEAu, sub_00020BEA); /* call 0x00020BEA */

loc_001C4B19: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF7);
    ecx = 0x8F0D08;
    PUSH32(esp, 0x001C4B29u); RECOMP_ABI_CALL(0x00017167u, sub_00017167); /* call 0x00017167 */

loc_001C4B29: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C4B76; /* je: equal / zero */

loc_001C4B2E: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = SX8(LO8(eax));
    MEM8(eax + edi + 0x28) = 0;
    ebp = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = 0x8E9CF0;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x001C4B57u); RECOMP_ABI_CALL(0x00028877u, sub_00028877); /* call 0x00028877 */

loc_001C4B57: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(edi + ebp * 4 + 0x18) = eax;
    ebp = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, 0);
    ecx = 0x8E9CF0;
    PUSH32(esp, 0x001C4B72u); RECOMP_ABI_CALL(0x00028877u, sub_00028877); /* call 0x00028877 */

loc_001C4B72: ;
    MEM32(edi + ebp * 4 + 0x20) = eax;

loc_001C4B76: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C4BC3; /* je: equal / zero */

loc_001C4B7B: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = SX8(LO8(eax));
    MEM8(eax + edi + 0x2A) = 0;
    ebp = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = 0x8E9CF0;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x001C4BA4u); RECOMP_ABI_CALL(0x00028877u, sub_00028877); /* call 0x00028877 */

loc_001C4BA4: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(edi + ebp * 4 + 0x18) = eax;
    ebp = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, 0);
    ecx = 0x8E9CF0;
    PUSH32(esp, 0x001C4BBFu); RECOMP_ABI_CALL(0x00028877u, sub_00028877); /* call 0x00028877 */

loc_001C4BBF: ;
    MEM32(edi + ebp * 4 + 0x20) = eax;

loc_001C4BC3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4BDB; /* jne: not equal / not zero */

loc_001C4BC8: ;
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x001C4BD2u); RECOMP_ABI_CALL(0x00029899u, sub_00029899); /* call 0x00029899 */

loc_001C4BD2: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x001C4BDBu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_001C4BDB: ;
    POP32(esp, ebp);

loc_001C4BDC: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001C4BDE: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C4C90
 * Original: 0x001C4C90 - 0x001C4CD3 (67 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4C90(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001C4C90: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 8); /* cvtsi2ss */
    PUSH32(esp, eax);
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C4CA6u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C4CA6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C4CC0; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C4CB8: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C4CC3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C4CC0: ;
    xmm0 = xmm1; /* movaps */

loc_001C4CC3: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 8); /* cvttss2si */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C4CF0
 * Original: 0x001C4CF0 - 0x001C4D33 (67 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4CF0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001C4CF0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 4); /* cvtsi2ss */
    PUSH32(esp, eax);
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C4D06u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C4D06: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C4D20; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C4D18: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C4D23; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C4D20: ;
    xmm0 = xmm1; /* movaps */

loc_001C4D23: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 8); /* cvttss2si */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C4D50
 * Original: 0x001C4D50 - 0x001C4DA7 (87 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4D50: ;
    eax = MEM32(0x8F20F4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4D86; /* jne: not equal / not zero */

loc_001C4D5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x001C4D64u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C4D64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4D79; /* je: equal / zero */

loc_001C4D6B: ;
    ecx = eax;
    PUSH32(esp, 0x001C4D72u); RECOMP_ABI_CALL(0x00019EF3u, sub_00019EF3); /* call 0x00019EF3 */

loc_001C4D72: ;
    MEM32(0x8F20F4) = eax;
    goto loc_001C4D7F;

loc_001C4D79: ;
    MEM32(0x8F20F4) = esi;

loc_001C4D7F: ;
    MEM8(0x8F20F8) = 1;

loc_001C4D86: ;
    PUSH32(esp, 0x001C4D8Bu); RECOMP_ABI_CALL(0x000113A2u, sub_000113A2); /* call 0x000113A2 */

loc_001C4D8B: ;
    goto loc_001C4D90;

    /* nop */

loc_001C4D90: ;
    eax = MEM32(0x8F20F4);
    ecx = MEM32(esi + eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C4D9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C4D9Au); } /* indirect call */
    }

loc_001C4D9D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C4D90; /* jl: less (signed <) */

loc_001C4DA5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4DC0
 * Original: 0x001C4DC0 - 0x001C4DDF (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4DC0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0x24) = LO8(ecx);
    MEM8(eax + 0x25) = LO8(ecx);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM8(eax + 0x50) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4DF0
 * Original: 0x001C4DF0 - 0x001C4E3E (78 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C4DF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx + 0x48;
    ebp = 2;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001C4E00: ;
    SET_LO8(eax, MEM8(esi + -36));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4E37; /* je: equal / zero */

loc_001C4E0A: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C4E13u); RECOMP_ABI_CALL(0x00588356u, sub_00588356); /* call 0x00588356 */

loc_001C4E13: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C4E1Cu); RECOMP_ABI_CALL(0x005886F7u, sub_005886F7); /* call 0x005886F7 */

loc_001C4E1C: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C4E2Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001C4E2C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM8(esi) = LO8(ebx);

loc_001C4E37: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C4E00; /* jne: not equal / not zero */

loc_001C4E3A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4E60
 * Original: 0x001C4E60 - 0x001C4EA8 (72 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4E60(void)
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

loc_001C4E60: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0xC);
    edx = MEM32(esp + 8);
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 8); /* cvtsi2ss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C4E7Bu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C4E7B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C4E95; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C4E8D: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C4E98; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C4E95: ;
    xmm0 = xmm1; /* movaps */

loc_001C4E98: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 8); /* cvttss2si */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C4EC0
 * Original: 0x001C4EC0 - 0x001C4FFF (319 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4EC0(void)
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

loc_001C4EC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001C4ECCu); RECOMP_ABI_CALL(0x00034E97u, sub_00034E97); /* call 0x00034E97 */

loc_001C4ECC: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4F13; /* je: equal / zero */

loc_001C4ED3: ;
    xmm1.f[0] = (float)(int32_t)MEM32(edi + 8); /* cvtsi2ss */
    PUSH32(esp, 0x63);
    ecx = edi;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C4EE7u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C4EE7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C4F02; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C4EFA: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C4F05; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C4F02: ;
    xmm0 = xmm1; /* movaps */

loc_001C4F05: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 8); /* cvttss2si */
    goto loc_001C4F8E;

loc_001C4F13: ;
    SET_LO8(eax, MEM8(0x8F2150));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4FFB; /* je: equal / zero */

loc_001C4F20: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001C4F2Cu); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C4F2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4F90; /* je: equal / zero */

loc_001C4F31: ;
    ecx = eax + eax * 8;
    ecx = ecx * 4 + 0x8F2100;
    PUSH32(esp, 0x001C4F40u); RECOMP_ABI_CALL(0x00021072u, sub_00021072); /* call 0x00021072 */

loc_001C4F40: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4F90; /* je: equal / zero */

loc_001C4F44: ;
    PUSH32(esp, 0x001C4F49u); RECOMP_ABI_CALL(0x0001805Du, sub_0001805D); /* call 0x0001805D */

loc_001C4F49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4F7C; /* je: equal / zero */

loc_001C4F4D: ;
    PUSH32(esp, 0x10);
    ecx = edi;
    PUSH32(esp, 0x001C4F56u); RECOMP_ABI_CALL(0x0002A0F5u, sub_0002A0F5); /* call 0x0002A0F5 */

loc_001C4F56: ;
    SET_LO8(edx, MEM8(0x904B91));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4F6C; /* je: equal / zero */

loc_001C4F62: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4F6C; /* je: equal / zero */

loc_001C4F67: ;
    ecx = 1;

loc_001C4F6C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x8F0CD0;
    PUSH32(esp, 0x001C4F7Au); RECOMP_ABI_CALL(0x00029BD7u, sub_00029BD7); /* call 0x00029BD7 */

loc_001C4F7A: ;
    goto loc_001C4F8E;

loc_001C4F7C: ;
    ecx = 0x8F1868;
    PUSH32(esp, 0x001C4F86u); RECOMP_ABI_CALL(0x00028606u, sub_00028606); /* call 0x00028606 */

loc_001C4F86: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001C4F8Eu); RECOMP_ABI_CALL(0x0002A0F5u, sub_0002A0F5); /* call 0x0002A0F5 */

loc_001C4F8E: ;
    esi = eax;

loc_001C4F90: ;
    SET_LO8(eax, MEM8(0x8F2150));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4FFB; /* je: equal / zero */

loc_001C4F99: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001C4FA5u); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C4FA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4FFB; /* je: equal / zero */

loc_001C4FAA: ;
    ecx = eax + eax * 8;
    ecx = ecx * 4 + 0x8F2100;
    PUSH32(esp, 0x001C4FB9u); RECOMP_ABI_CALL(0x00021072u, sub_00021072); /* call 0x00021072 */

loc_001C4FB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4FFB; /* je: equal / zero */

loc_001C4FBD: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001C4FC9u); RECOMP_ABI_CALL(0x00028B9Cu, sub_00028B9C); /* call 0x00028B9C */

loc_001C4FC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4FFB; /* je: equal / zero */

loc_001C4FCD: ;
    SET_LO8(eax, MEM8(0x8F2150));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = MEM32(edi + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_001C4FFB; /* je: equal / zero */

loc_001C4FD9: ;
    PUSH32(esp, 1);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001C4FE5u); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C4FE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4FFB; /* je: equal / zero */

loc_001C4FEA: ;
    PUSH32(esp, edi);
    ecx = eax + eax * 8;
    PUSH32(esp, esi);
    ecx = ecx * 4 + 0x8F2100;
    PUSH32(esp, 0x001C4FFBu); RECOMP_ABI_CALL(0x00031ADFu, sub_00031ADF); /* call 0x00031ADF */

loc_001C4FFB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C5050
 * Original: 0x001C5050 - 0x001C5BED (2973 bytes, 852 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5050(void)
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

loc_001C5050: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5069u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5069: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5084; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C507C: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5087; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5084: ;
    xmm0 = xmm1; /* movaps */

loc_001C5087: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    edi = 0x7FFF;
    if (CMP_GE(_fas, _fbs)) goto loc_001C50A6; /* jge: greater or equal (signed >=) */

loc_001C50A0: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C50AE;

loc_001C50A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C50AE; /* jle: less or equal (signed <=) */

loc_001C50AA: ;
    MEM32(esp + 0xC) = edi;

loc_001C50AE: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1088);
    PUSH32(esp, 0x001C50BDu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C50BD: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x26);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C50D4u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C50D4: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C50EF; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C50E7: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C50F2; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C50EF: ;
    xmm0 = xmm1; /* movaps */

loc_001C50F2: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C510C; /* jge: greater or equal (signed >=) */

loc_001C5106: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5114;

loc_001C510C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5114; /* jle: less or equal (signed <=) */

loc_001C5110: ;
    MEM32(esp + 0xC) = edi;

loc_001C5114: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1058);
    PUSH32(esp, 0x001C5123u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5123: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C513Au); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C513A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5155; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C514D: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5158; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5155: ;
    xmm0 = xmm1; /* movaps */

loc_001C5158: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C5172; /* jge: greater or equal (signed >=) */

loc_001C516C: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C517A;

loc_001C5172: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C517A; /* jle: less or equal (signed <=) */

loc_001C5176: ;
    MEM32(esp + 0xC) = edi;

loc_001C517A: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F16F0);
    PUSH32(esp, 0x001C5189u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5189: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C51A0u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C51A0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C51BB; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C51B3: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C51BE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C51BB: ;
    xmm0 = xmm1; /* movaps */

loc_001C51BE: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C51D8; /* jge: greater or equal (signed >=) */

loc_001C51D2: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C51E0;

loc_001C51D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C51E0; /* jle: less or equal (signed <=) */

loc_001C51DC: ;
    MEM32(esp + 0xC) = edi;

loc_001C51E0: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F58);
    PUSH32(esp, 0x001C51EFu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C51EF: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 6);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5206u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5206: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5221; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C5219: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5224; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5221: ;
    xmm0 = xmm1; /* movaps */

loc_001C5224: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C523E; /* jge: greater or equal (signed >=) */

loc_001C5238: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5246;

loc_001C523E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5246; /* jle: less or equal (signed <=) */

loc_001C5242: ;
    MEM32(esp + 0xC) = edi;

loc_001C5246: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F0FB0);
    PUSH32(esp, 0x001C5255u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5255: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 7);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C526Cu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C526C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5287; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C527F: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C528A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5287: ;
    xmm0 = xmm1; /* movaps */

loc_001C528A: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C52A4; /* jge: greater or equal (signed >=) */

loc_001C529E: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C52AC;

loc_001C52A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C52AC; /* jle: less or equal (signed <=) */

loc_001C52A8: ;
    MEM32(esp + 0xC) = edi;

loc_001C52AC: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F16A8);
    PUSH32(esp, 0x001C52BBu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C52BB: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C52D2u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C52D2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C52ED; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C52E5: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C52F0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C52ED: ;
    xmm0 = xmm1; /* movaps */

loc_001C52F0: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C530A; /* jge: greater or equal (signed >=) */

loc_001C5304: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5312;

loc_001C530A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5312; /* jle: less or equal (signed <=) */

loc_001C530E: ;
    MEM32(esp + 0xC) = edi;

loc_001C5312: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F17D0);
    PUSH32(esp, 0x001C5321u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5321: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 9);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5338u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5338: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5353; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C534B: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5356; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5353: ;
    xmm0 = xmm1; /* movaps */

loc_001C5356: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C5370; /* jge: greater or equal (signed >=) */

loc_001C536A: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5378;

loc_001C5370: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5378; /* jle: less or equal (signed <=) */

loc_001C5374: ;
    MEM32(esp + 0xC) = edi;

loc_001C5378: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1610);
    PUSH32(esp, 0x001C5387u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5387: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xA);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C539Eu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C539E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C53B9; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C53B1: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C53BC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C53B9: ;
    xmm0 = xmm1; /* movaps */

loc_001C53BC: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C53D6; /* jge: greater or equal (signed >=) */

loc_001C53D0: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C53DE;

loc_001C53D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C53DE; /* jle: less or equal (signed <=) */

loc_001C53DA: ;
    MEM32(esp + 0xC) = edi;

loc_001C53DE: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F10D8);
    PUSH32(esp, 0x001C53EDu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C53ED: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x22);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5404u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5404: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C541F; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C5417: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5422; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C541F: ;
    xmm0 = xmm1; /* movaps */

loc_001C5422: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C543C; /* jge: greater or equal (signed >=) */

loc_001C5436: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5444;

loc_001C543C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5444; /* jle: less or equal (signed <=) */

loc_001C5440: ;
    MEM32(esp + 0xC) = edi;

loc_001C5444: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1560);
    PUSH32(esp, 0x001C5453u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5453: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xB);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C546Au); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C546A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5485; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C547D: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5488; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5485: ;
    xmm0 = xmm1; /* movaps */

loc_001C5488: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C54A2; /* jge: greater or equal (signed >=) */

loc_001C549C: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C54AA;

loc_001C54A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C54AA; /* jle: less or equal (signed <=) */

loc_001C54A6: ;
    MEM32(esp + 0xC) = edi;

loc_001C54AA: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1B08);
    PUSH32(esp, 0x001C54B9u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C54B9: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xC);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C54D0u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C54D0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C54EB; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C54E3: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C54EE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C54EB: ;
    xmm0 = xmm1; /* movaps */

loc_001C54EE: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C5508; /* jge: greater or equal (signed >=) */

loc_001C5502: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5510;

loc_001C5508: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5510; /* jle: less or equal (signed <=) */

loc_001C550C: ;
    MEM32(esp + 0xC) = edi;

loc_001C5510: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F13F8);
    PUSH32(esp, 0x001C551Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C551F: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2E);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5536u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5536: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5551; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C5549: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5554; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5551: ;
    xmm0 = xmm1; /* movaps */

loc_001C5554: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C556E; /* jge: greater or equal (signed >=) */

loc_001C5568: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5576;

loc_001C556E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5576; /* jle: less or equal (signed <=) */

loc_001C5572: ;
    MEM32(esp + 0xC) = edi;

loc_001C5576: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0E58);
    PUSH32(esp, 0x001C5585u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5585: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x29);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C559Cu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C559C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C55B7; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C55AF: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C55BA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C55B7: ;
    xmm0 = xmm1; /* movaps */

loc_001C55BA: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C55D4; /* jge: greater or equal (signed >=) */

loc_001C55CE: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C55DC;

loc_001C55D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C55DC; /* jle: less or equal (signed <=) */

loc_001C55D8: ;
    MEM32(esp + 0xC) = edi;

loc_001C55DC: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1240);
    PUSH32(esp, 0x001C55EBu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C55EB: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x27);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5602u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5602: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C561D; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C5615: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5620; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C561D: ;
    xmm0 = xmm1; /* movaps */

loc_001C5620: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C563A; /* jge: greater or equal (signed >=) */

loc_001C5634: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5642;

loc_001C563A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5642; /* jle: less or equal (signed <=) */

loc_001C563E: ;
    MEM32(esp + 0xC) = edi;

loc_001C5642: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F12E8);
    PUSH32(esp, 0x001C5651u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5651: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x28);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5668u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5668: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5683; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C567B: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5686; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5683: ;
    xmm0 = xmm1; /* movaps */

loc_001C5686: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C56A0; /* jge: greater or equal (signed >=) */

loc_001C569A: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C56A8;

loc_001C56A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C56A8; /* jle: less or equal (signed <=) */

loc_001C56A4: ;
    MEM32(esp + 0xC) = edi;

loc_001C56A8: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1398);
    PUSH32(esp, 0x001C56B7u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C56B7: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2A);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C56CEu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C56CE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C56E9; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C56E1: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C56EC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C56E9: ;
    xmm0 = xmm1; /* movaps */

loc_001C56EC: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C5706; /* jge: greater or equal (signed >=) */

loc_001C5700: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C570E;

loc_001C5706: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C570E; /* jle: less or equal (signed <=) */

loc_001C570A: ;
    MEM32(esp + 0xC) = edi;

loc_001C570E: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F16E0);
    PUSH32(esp, 0x001C571Du); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C571D: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2B);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5734u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5734: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C574F; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C5747: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5752; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C574F: ;
    xmm0 = xmm1; /* movaps */

loc_001C5752: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C576C; /* jge: greater or equal (signed >=) */

loc_001C5766: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5774;

loc_001C576C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5774; /* jle: less or equal (signed <=) */

loc_001C5770: ;
    MEM32(esp + 0xC) = edi;

loc_001C5774: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F15F0);
    PUSH32(esp, 0x001C5783u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5783: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2C);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C579Au); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C579A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C57B5; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C57AD: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C57B8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C57B5: ;
    xmm0 = xmm1; /* movaps */

loc_001C57B8: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C57D2; /* jge: greater or equal (signed >=) */

loc_001C57CC: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C57DA;

loc_001C57D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C57DA; /* jle: less or equal (signed <=) */

loc_001C57D6: ;
    MEM32(esp + 0xC) = edi;

loc_001C57DA: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0E78);
    PUSH32(esp, 0x001C57E9u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C57E9: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x11);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5800u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5800: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C581B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C5813: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C581E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C581B: ;
    xmm0 = xmm1; /* movaps */

loc_001C581E: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C5838; /* jge: greater or equal (signed >=) */

loc_001C5832: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5840;

loc_001C5838: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5840; /* jle: less or equal (signed <=) */

loc_001C583C: ;
    MEM32(esp + 0xC) = edi;

loc_001C5840: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1358);
    PUSH32(esp, 0x001C584Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C584F: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5866u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5866: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5881; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C5879: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5884; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5881: ;
    xmm0 = xmm1; /* movaps */

loc_001C5884: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C589E; /* jge: greater or equal (signed >=) */

loc_001C5898: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C58A6;

loc_001C589E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C58A6; /* jle: less or equal (signed <=) */

loc_001C58A2: ;
    MEM32(esp + 0xC) = edi;

loc_001C58A6: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1270);
    PUSH32(esp, 0x001C58B5u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C58B5: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1D);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C58CCu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C58CC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C58E7; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C58DF: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C58EA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C58E7: ;
    xmm0 = xmm1; /* movaps */

loc_001C58EA: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C5904; /* jge: greater or equal (signed >=) */

loc_001C58FE: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C590C;

loc_001C5904: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C590C; /* jle: less or equal (signed <=) */

loc_001C5908: ;
    MEM32(esp + 0xC) = edi;

loc_001C590C: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AD0);
    PUSH32(esp, 0x001C591Bu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C591B: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1F);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5932u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5932: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C594D; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C5945: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5950; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C594D: ;
    xmm0 = xmm1; /* movaps */

loc_001C5950: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C596A; /* jge: greater or equal (signed >=) */

loc_001C5964: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5972;

loc_001C596A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5972; /* jle: less or equal (signed <=) */

loc_001C596E: ;
    MEM32(esp + 0xC) = edi;

loc_001C5972: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1850);
    PUSH32(esp, 0x001C5981u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5981: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x24);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5998u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5998: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C59B3; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C59AB: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C59B6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C59B3: ;
    xmm0 = xmm1; /* movaps */

loc_001C59B6: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C59D0; /* jge: greater or equal (signed >=) */

loc_001C59CA: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C59D8;

loc_001C59D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C59D8; /* jle: less or equal (signed <=) */

loc_001C59D4: ;
    MEM32(esp + 0xC) = edi;

loc_001C59D8: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1338);
    PUSH32(esp, 0x001C59E7u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C59E7: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2F);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C59FEu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C59FE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5A19; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C5A11: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5A1C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5A19: ;
    xmm0 = xmm1; /* movaps */

loc_001C5A1C: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C5A36; /* jge: greater or equal (signed >=) */

loc_001C5A30: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5A3E;

loc_001C5A36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5A3E; /* jle: less or equal (signed <=) */

loc_001C5A3A: ;
    MEM32(esp + 0xC) = edi;

loc_001C5A3E: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1B50);
    PUSH32(esp, 0x001C5A4Du); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5A4D: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x30);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5A64u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5A64: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5A7F; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C5A77: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5A82; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5A7F: ;
    xmm0 = xmm1; /* movaps */

loc_001C5A82: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C5A9C; /* jge: greater or equal (signed >=) */

loc_001C5A96: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5AA4;

loc_001C5A9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5AA4; /* jle: less or equal (signed <=) */

loc_001C5AA0: ;
    MEM32(esp + 0xC) = edi;

loc_001C5AA4: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F0EE8);
    PUSH32(esp, 0x001C5AB3u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5AB3: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x19);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5ACAu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5ACA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5AE5; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C5ADD: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5AE8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5AE5: ;
    xmm0 = xmm1; /* movaps */

loc_001C5AE8: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C5B02; /* jge: greater or equal (signed >=) */

loc_001C5AFC: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5B0A;

loc_001C5B02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5B0A; /* jle: less or equal (signed <=) */

loc_001C5B06: ;
    MEM32(esp + 0xC) = edi;

loc_001C5B0A: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1508);
    PUSH32(esp, 0x001C5B19u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5B19: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1A);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5B30u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5B30: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5B4B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C5B43: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5B4E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5B4B: ;
    xmm0 = xmm1; /* movaps */

loc_001C5B4E: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C5B68; /* jge: greater or equal (signed >=) */

loc_001C5B62: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5B70;

loc_001C5B68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5B70; /* jle: less or equal (signed <=) */

loc_001C5B6C: ;
    MEM32(esp + 0xC) = edi;

loc_001C5B70: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AC8);
    PUSH32(esp, 0x001C5B7Fu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5B7F: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2D);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5B96u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5B96: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5BB1; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C5BA9: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5BB4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5BB1: ;
    xmm0 = xmm1; /* movaps */

loc_001C5BB4: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C5BCE; /* jge: greater or equal (signed >=) */

loc_001C5BC8: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C5BD6;

loc_001C5BCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5BD6; /* jle: less or equal (signed <=) */

loc_001C5BD2: ;
    MEM32(esp + 0xC) = edi;

loc_001C5BD6: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F0F70);
    PUSH32(esp, 0x001C5BE5u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5BE5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C5EE0
 * Original: 0x001C5EE0 - 0x001C5FCF (239 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5EE0(void)
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

loc_001C5EE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    PUSH32(esp, 0x35);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5EF6u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5EF6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5F11; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C5F09: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5F14; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5F11: ;
    xmm0 = xmm1; /* movaps */

loc_001C5F14: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C5F32; /* jge: greater or equal (signed >=) */

loc_001C5F28: ;
    MEM32(esp + 4) = 0;
    goto loc_001C5F41;

loc_001C5F32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5F41; /* jle: less or equal (signed <=) */

loc_001C5F39: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001C5F41: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1228);
    PUSH32(esp, 0x001C5F50u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5F50: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x35);
    ecx = esi;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C5F67u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C5F67: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    POP32(esp, esi);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C5F81; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C5F79: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C5F84; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C5F81: ;
    xmm0 = xmm1; /* movaps */

loc_001C5F84: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C5FAF; /* jge: greater or equal (signed >=) */

loc_001C5F95: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F15F8);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x001C5FABu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5FAB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001C5FAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C5FBD; /* jle: less or equal (signed <=) */

loc_001C5FB6: ;
    MEM32(esp) = 0x7FFF;

loc_001C5FBD: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F15F8);
    PUSH32(esp, 0x001C5FCBu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C5FCB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C6010
 * Original: 0x001C6010 - 0x001C7340 (4912 bytes, 1403 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6010(void)
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

loc_001C6010: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    PUSH32(esp, 0x1B);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6028u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6028: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6043; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C603B: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6046; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6043: ;
    xmm0 = xmm1; /* movaps */

loc_001C6046: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    edi = 0x7FFF;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6067; /* jge: greater or equal (signed >=) */

loc_001C6061: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C606F;

loc_001C6067: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C606F; /* jle: less or equal (signed <=) */

loc_001C606B: ;
    MEM32(esp + 0xC) = edi;

loc_001C606F: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1830);
    PUSH32(esp, 0x001C607Eu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C607E: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x45);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6095u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6095: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C60B0; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C60A8: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C60B3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C60B0: ;
    xmm0 = xmm1; /* movaps */

loc_001C60B3: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C60CD; /* jge: greater or equal (signed >=) */

loc_001C60C7: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C60D5;

loc_001C60CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C60D5; /* jle: less or equal (signed <=) */

loc_001C60D1: ;
    MEM32(esp + 0xC) = edi;

loc_001C60D5: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1328);
    PUSH32(esp, 0x001C60E4u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C60E4: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x4D);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C60FBu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C60FB: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6116; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C610E: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6119; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6116: ;
    xmm0 = xmm1; /* movaps */

loc_001C6119: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6133; /* jge: greater or equal (signed >=) */

loc_001C612D: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C613B;

loc_001C6133: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C613B; /* jle: less or equal (signed <=) */

loc_001C6137: ;
    MEM32(esp + 0xC) = edi;

loc_001C613B: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1030);
    PUSH32(esp, 0x001C614Au); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C614A: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6161u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6161: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C617C; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6174: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C617F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C617C: ;
    xmm0 = xmm1; /* movaps */

loc_001C617F: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6199; /* jge: greater or equal (signed >=) */

loc_001C6193: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C61A1;

loc_001C6199: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C61A1; /* jle: less or equal (signed <=) */

loc_001C619D: ;
    MEM32(esp + 0xC) = edi;

loc_001C61A1: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1660);
    PUSH32(esp, 0x001C61B0u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C61B0: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C61C7u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C61C7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C61E2; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C61DA: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C61E5; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C61E2: ;
    xmm0 = xmm1; /* movaps */

loc_001C61E5: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C61FF; /* jge: greater or equal (signed >=) */

loc_001C61F9: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6207;

loc_001C61FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6207; /* jle: less or equal (signed <=) */

loc_001C6203: ;
    MEM32(esp + 0xC) = edi;

loc_001C6207: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F14F0);
    PUSH32(esp, 0x001C6216u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6216: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 5);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C622Du); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C622D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6248; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6240: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C624B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6248: ;
    xmm0 = xmm1; /* movaps */

loc_001C624B: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6265; /* jge: greater or equal (signed >=) */

loc_001C625F: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C626D;

loc_001C6265: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C626D; /* jle: less or equal (signed <=) */

loc_001C6269: ;
    MEM32(esp + 0xC) = edi;

loc_001C626D: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F14F8);
    PUSH32(esp, 0x001C627Cu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C627C: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xE);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6293u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6293: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C62AE; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C62A6: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C62B1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C62AE: ;
    xmm0 = xmm1; /* movaps */

loc_001C62B1: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C62CB; /* jge: greater or equal (signed >=) */

loc_001C62C5: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C62D3;

loc_001C62CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C62D3; /* jle: less or equal (signed <=) */

loc_001C62CF: ;
    MEM32(esp + 0xC) = edi;

loc_001C62D3: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F11E0);
    PUSH32(esp, 0x001C62E2u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C62E2: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1C);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C62F9u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C62F9: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6314; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C630C: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6317; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6314: ;
    xmm0 = xmm1; /* movaps */

loc_001C6317: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6331; /* jge: greater or equal (signed >=) */

loc_001C632B: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6339;

loc_001C6331: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6339; /* jle: less or equal (signed <=) */

loc_001C6335: ;
    MEM32(esp + 0xC) = edi;

loc_001C6339: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1568);
    PUSH32(esp, 0x001C6348u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6348: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x31);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C635Fu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C635F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C637A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6372: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C637D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C637A: ;
    xmm0 = xmm1; /* movaps */

loc_001C637D: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6397; /* jge: greater or equal (signed >=) */

loc_001C6391: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C639F;

loc_001C6397: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C639F; /* jle: less or equal (signed <=) */

loc_001C639B: ;
    MEM32(esp + 0xC) = edi;

loc_001C639F: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F0FA0);
    PUSH32(esp, 0x001C63AEu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C63AE: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x44);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C63C5u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C63C5: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C63E0; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C63D8: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C63E3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C63E0: ;
    xmm0 = xmm1; /* movaps */

loc_001C63E3: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C63FD; /* jge: greater or equal (signed >=) */

loc_001C63F7: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6405;

loc_001C63FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6405; /* jle: less or equal (signed <=) */

loc_001C6401: ;
    MEM32(esp + 0xC) = edi;

loc_001C6405: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1048);
    PUSH32(esp, 0x001C6414u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6414: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x44);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C642Bu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C642B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6446; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C643E: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6449; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6446: ;
    xmm0 = xmm1; /* movaps */

loc_001C6449: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6463; /* jge: greater or equal (signed >=) */

loc_001C645D: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C646B;

loc_001C6463: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C646B; /* jle: less or equal (signed <=) */

loc_001C6467: ;
    MEM32(esp + 0xC) = edi;

loc_001C646B: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F0EF0);
    PUSH32(esp, 0x001C647Au); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C647A: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x32);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6491u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6491: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C64AC; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C64A4: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C64AF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C64AC: ;
    xmm0 = xmm1; /* movaps */

loc_001C64AF: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C64C9; /* jge: greater or equal (signed >=) */

loc_001C64C3: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C64D1;

loc_001C64C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C64D1; /* jle: less or equal (signed <=) */

loc_001C64CD: ;
    MEM32(esp + 0xC) = edi;

loc_001C64D1: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1448);
    PUSH32(esp, 0x001C64E0u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C64E0: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x33);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C64F7u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C64F7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6512; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C650A: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6515; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6512: ;
    xmm0 = xmm1; /* movaps */

loc_001C6515: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C652F; /* jge: greater or equal (signed >=) */

loc_001C6529: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6537;

loc_001C652F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6537; /* jle: less or equal (signed <=) */

loc_001C6533: ;
    MEM32(esp + 0xC) = edi;

loc_001C6537: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1860);
    PUSH32(esp, 0x001C6546u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6546: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x36);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C655Du); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C655D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6578; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6570: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C657B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6578: ;
    xmm0 = xmm1; /* movaps */

loc_001C657B: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6595; /* jge: greater or equal (signed >=) */

loc_001C658F: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C659D;

loc_001C6595: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C659D; /* jle: less or equal (signed <=) */

loc_001C6599: ;
    MEM32(esp + 0xC) = edi;

loc_001C659D: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1160);
    PUSH32(esp, 0x001C65ACu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C65AC: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3A);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C65C3u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C65C3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C65DE; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C65D6: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C65E1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C65DE: ;
    xmm0 = xmm1; /* movaps */

loc_001C65E1: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C65FB; /* jge: greater or equal (signed >=) */

loc_001C65F5: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6603;

loc_001C65FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6603; /* jle: less or equal (signed <=) */

loc_001C65FF: ;
    MEM32(esp + 0xC) = edi;

loc_001C6603: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1698);
    PUSH32(esp, 0x001C6612u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6612: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x38);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6629u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6629: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6644; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C663C: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6647; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6644: ;
    xmm0 = xmm1; /* movaps */

loc_001C6647: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6661; /* jge: greater or equal (signed >=) */

loc_001C665B: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6669;

loc_001C6661: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6669; /* jle: less or equal (signed <=) */

loc_001C6665: ;
    MEM32(esp + 0xC) = edi;

loc_001C6669: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F14C8);
    PUSH32(esp, 0x001C6678u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6678: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x37);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C668Fu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C668F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C66AA; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C66A2: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C66AD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C66AA: ;
    xmm0 = xmm1; /* movaps */

loc_001C66AD: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C66C7; /* jge: greater or equal (signed >=) */

loc_001C66C1: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C66CF;

loc_001C66C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C66CF; /* jle: less or equal (signed <=) */

loc_001C66CB: ;
    MEM32(esp + 0xC) = edi;

loc_001C66CF: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F14B0);
    PUSH32(esp, 0x001C66DEu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C66DE: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x37);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C66F5u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C66F5: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6710; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6708: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6713; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6710: ;
    xmm0 = xmm1; /* movaps */

loc_001C6713: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C672D; /* jge: greater or equal (signed >=) */

loc_001C6727: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6735;

loc_001C672D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6735; /* jle: less or equal (signed <=) */

loc_001C6731: ;
    MEM32(esp + 0xC) = edi;

loc_001C6735: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1440);
    PUSH32(esp, 0x001C6744u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6744: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x39);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C675Bu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C675B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6776; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C676E: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6779; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6776: ;
    xmm0 = xmm1; /* movaps */

loc_001C6779: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6793; /* jge: greater or equal (signed >=) */

loc_001C678D: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C679B;

loc_001C6793: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C679B; /* jle: less or equal (signed <=) */

loc_001C6797: ;
    MEM32(esp + 0xC) = edi;

loc_001C679B: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1848);
    PUSH32(esp, 0x001C67AAu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C67AA: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3B);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C67C1u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C67C1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C67DC; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C67D4: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C67DF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C67DC: ;
    xmm0 = xmm1; /* movaps */

loc_001C67DF: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C67F9; /* jge: greater or equal (signed >=) */

loc_001C67F3: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6801;

loc_001C67F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6801; /* jle: less or equal (signed <=) */

loc_001C67FD: ;
    MEM32(esp + 0xC) = edi;

loc_001C6801: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1178);
    PUSH32(esp, 0x001C6810u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6810: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3C);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6827u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6827: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6842; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C683A: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6845; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6842: ;
    xmm0 = xmm1; /* movaps */

loc_001C6845: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C685F; /* jge: greater or equal (signed >=) */

loc_001C6859: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6867;

loc_001C685F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6867; /* jle: less or equal (signed <=) */

loc_001C6863: ;
    MEM32(esp + 0xC) = edi;

loc_001C6867: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1460);
    PUSH32(esp, 0x001C6876u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6876: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x17);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C688Du); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C688D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C68A8; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C68A0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C68AB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C68A8: ;
    xmm0 = xmm1; /* movaps */

loc_001C68AB: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C68C5; /* jge: greater or equal (signed >=) */

loc_001C68BF: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C68CD;

loc_001C68C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C68CD; /* jle: less or equal (signed <=) */

loc_001C68C9: ;
    MEM32(esp + 0xC) = edi;

loc_001C68CD: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1508);
    PUSH32(esp, 0x001C68DCu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C68DC: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x17);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C68F3u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C68F3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C690E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6906: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6911; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C690E: ;
    xmm0 = xmm1; /* movaps */

loc_001C6911: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C692B; /* jge: greater or equal (signed >=) */

loc_001C6925: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6933;

loc_001C692B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6933; /* jle: less or equal (signed <=) */

loc_001C692F: ;
    MEM32(esp + 0xC) = edi;

loc_001C6933: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1AC8);
    PUSH32(esp, 0x001C6942u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6942: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x14);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6959u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6959: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6974; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C696C: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6977; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6974: ;
    xmm0 = xmm1; /* movaps */

loc_001C6977: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6991; /* jge: greater or equal (signed >=) */

loc_001C698B: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6999;

loc_001C6991: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6999; /* jle: less or equal (signed <=) */

loc_001C6995: ;
    MEM32(esp + 0xC) = edi;

loc_001C6999: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1020);
    PUSH32(esp, 0x001C69A8u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C69A8: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x18);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C69BFu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C69BF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C69DA; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C69D2: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C69DD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C69DA: ;
    xmm0 = xmm1; /* movaps */

loc_001C69DD: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C69F7; /* jge: greater or equal (signed >=) */

loc_001C69F1: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C69FF;

loc_001C69F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C69FF; /* jle: less or equal (signed <=) */

loc_001C69FB: ;
    MEM32(esp + 0xC) = edi;

loc_001C69FF: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0FD0);
    PUSH32(esp, 0x001C6A0Eu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6A0E: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1E);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6A25u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6A25: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6A40; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6A38: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6A43; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6A40: ;
    xmm0 = xmm1; /* movaps */

loc_001C6A43: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6A5D; /* jge: greater or equal (signed >=) */

loc_001C6A57: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6A65;

loc_001C6A5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6A65; /* jle: less or equal (signed <=) */

loc_001C6A61: ;
    MEM32(esp + 0xC) = edi;

loc_001C6A65: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1AE0);
    PUSH32(esp, 0x001C6A74u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6A74: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3D);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6A8Bu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6A8B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6AA6; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6A9E: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6AA9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6AA6: ;
    xmm0 = xmm1; /* movaps */

loc_001C6AA9: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6AC3; /* jge: greater or equal (signed >=) */

loc_001C6ABD: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6ACB;

loc_001C6AC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6ACB; /* jle: less or equal (signed <=) */

loc_001C6AC7: ;
    MEM32(esp + 0xC) = edi;

loc_001C6ACB: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F12B0);
    PUSH32(esp, 0x001C6ADAu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6ADA: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3E);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6AF1u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6AF1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6B0C; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6B04: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6B0F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6B0C: ;
    xmm0 = xmm1; /* movaps */

loc_001C6B0F: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6B29; /* jge: greater or equal (signed >=) */

loc_001C6B23: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6B31;

loc_001C6B29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6B31; /* jle: less or equal (signed <=) */

loc_001C6B2D: ;
    MEM32(esp + 0xC) = edi;

loc_001C6B31: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1200);
    PUSH32(esp, 0x001C6B40u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6B40: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6B57u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6B57: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6B72; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6B6A: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6B75; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6B72: ;
    xmm0 = xmm1; /* movaps */

loc_001C6B75: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6B8F; /* jge: greater or equal (signed >=) */

loc_001C6B89: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6B97;

loc_001C6B8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6B97; /* jle: less or equal (signed <=) */

loc_001C6B93: ;
    MEM32(esp + 0xC) = edi;

loc_001C6B97: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1570);
    PUSH32(esp, 0x001C6BA6u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6BA6: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6BBDu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6BBD: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6BD8; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6BD0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6BDB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6BD8: ;
    xmm0 = xmm1; /* movaps */

loc_001C6BDB: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6BF5; /* jge: greater or equal (signed >=) */

loc_001C6BEF: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6BFD;

loc_001C6BF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6BFD; /* jle: less or equal (signed <=) */

loc_001C6BF9: ;
    MEM32(esp + 0xC) = edi;

loc_001C6BFD: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1A80);
    PUSH32(esp, 0x001C6C0Cu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6C0C: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x41);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6C23u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6C23: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6C3E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6C36: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6C41; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6C3E: ;
    xmm0 = xmm1; /* movaps */

loc_001C6C41: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6C5B; /* jge: greater or equal (signed >=) */

loc_001C6C55: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6C63;

loc_001C6C5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6C63; /* jle: less or equal (signed <=) */

loc_001C6C5F: ;
    MEM32(esp + 0xC) = edi;

loc_001C6C63: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0EC0);
    PUSH32(esp, 0x001C6C72u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6C72: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x42);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6C89u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6C89: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6CA4; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6C9C: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6CA7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6CA4: ;
    xmm0 = xmm1; /* movaps */

loc_001C6CA7: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6CC1; /* jge: greater or equal (signed >=) */

loc_001C6CBB: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6CC9;

loc_001C6CC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6CC9; /* jle: less or equal (signed <=) */

loc_001C6CC5: ;
    MEM32(esp + 0xC) = edi;

loc_001C6CC9: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1428);
    PUSH32(esp, 0x001C6CD8u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6CD8: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x43);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6CEFu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6CEF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6D0A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6D02: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6D0D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6D0A: ;
    xmm0 = xmm1; /* movaps */

loc_001C6D0D: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6D27; /* jge: greater or equal (signed >=) */

loc_001C6D21: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6D2F;

loc_001C6D27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6D2F; /* jle: less or equal (signed <=) */

loc_001C6D2B: ;
    MEM32(esp + 0xC) = edi;

loc_001C6D2F: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1038);
    PUSH32(esp, 0x001C6D3Eu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6D3E: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x46);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6D55u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6D55: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6D70; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6D68: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6D73; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6D70: ;
    xmm0 = xmm1; /* movaps */

loc_001C6D73: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6D8D; /* jge: greater or equal (signed >=) */

loc_001C6D87: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6D95;

loc_001C6D8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6D95; /* jle: less or equal (signed <=) */

loc_001C6D91: ;
    MEM32(esp + 0xC) = edi;

loc_001C6D95: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1100);
    PUSH32(esp, 0x001C6DA4u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6DA4: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x4A);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6DBBu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6DBB: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6DD6; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6DCE: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6DD9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6DD6: ;
    xmm0 = xmm1; /* movaps */

loc_001C6DD9: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6DF3; /* jge: greater or equal (signed >=) */

loc_001C6DED: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6DFB;

loc_001C6DF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6DFB; /* jle: less or equal (signed <=) */

loc_001C6DF7: ;
    MEM32(esp + 0xC) = edi;

loc_001C6DFB: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F12D0);
    PUSH32(esp, 0x001C6E0Au); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6E0A: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x4A);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6E21u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6E21: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6E3C; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6E34: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6E3F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6E3C: ;
    xmm0 = xmm1; /* movaps */

loc_001C6E3F: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6E59; /* jge: greater or equal (signed >=) */

loc_001C6E53: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6E61;

loc_001C6E59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6E61; /* jle: less or equal (signed <=) */

loc_001C6E5D: ;
    MEM32(esp + 0xC) = edi;

loc_001C6E61: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1AF8);
    PUSH32(esp, 0x001C6E70u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6E70: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x4C);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6E87u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6E87: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6EA2; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6E9A: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6EA5; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6EA2: ;
    xmm0 = xmm1; /* movaps */

loc_001C6EA5: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6EBF; /* jge: greater or equal (signed >=) */

loc_001C6EB9: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6EC7;

loc_001C6EBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6EC7; /* jle: less or equal (signed <=) */

loc_001C6EC3: ;
    MEM32(esp + 0xC) = edi;

loc_001C6EC7: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1350);
    PUSH32(esp, 0x001C6ED6u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6ED6: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x4E);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6EEDu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6EED: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6F08; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6F00: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6F0B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6F08: ;
    xmm0 = xmm1; /* movaps */

loc_001C6F0B: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6F25; /* jge: greater or equal (signed >=) */

loc_001C6F1F: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6F2D;

loc_001C6F25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6F2D; /* jle: less or equal (signed <=) */

loc_001C6F29: ;
    MEM32(esp + 0xC) = edi;

loc_001C6F2D: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1934);
    PUSH32(esp, 0x001C6F3Cu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6F3C: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x12);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6F53u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6F53: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6F6E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6F66: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6F71; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6F6E: ;
    xmm0 = xmm1; /* movaps */

loc_001C6F71: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6F8B; /* jge: greater or equal (signed >=) */

loc_001C6F85: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6F93;

loc_001C6F8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6F93; /* jle: less or equal (signed <=) */

loc_001C6F8F: ;
    MEM32(esp + 0xC) = edi;

loc_001C6F93: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1AA8);
    PUSH32(esp, 0x001C6FA2u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C6FA2: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x34);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C6FB9u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C6FB9: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C6FD4; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C6FCC: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C6FD7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C6FD4: ;
    xmm0 = xmm1; /* movaps */

loc_001C6FD7: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C6FF1; /* jge: greater or equal (signed >=) */

loc_001C6FEB: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C6FF9;

loc_001C6FF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6FF9; /* jle: less or equal (signed <=) */

loc_001C6FF5: ;
    MEM32(esp + 0xC) = edi;

loc_001C6FF9: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1300);
    PUSH32(esp, 0x001C7008u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7008: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x34);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C701Fu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C701F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C703A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C7032: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C703D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C703A: ;
    xmm0 = xmm1; /* movaps */

loc_001C703D: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7057; /* jge: greater or equal (signed >=) */

loc_001C7051: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C705F;

loc_001C7057: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C705F; /* jle: less or equal (signed <=) */

loc_001C705B: ;
    MEM32(esp + 0xC) = edi;

loc_001C705F: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1778);
    PUSH32(esp, 0x001C706Eu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C706E: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x13);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C7085u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C7085: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C70A0; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C7098: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C70A3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C70A0: ;
    xmm0 = xmm1; /* movaps */

loc_001C70A3: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C70BD; /* jge: greater or equal (signed >=) */

loc_001C70B7: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C70C5;

loc_001C70BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C70C5; /* jle: less or equal (signed <=) */

loc_001C70C1: ;
    MEM32(esp + 0xC) = edi;

loc_001C70C5: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F0E90);
    PUSH32(esp, 0x001C70D4u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C70D4: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x4F);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C70EBu); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C70EB: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C7106; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C70FE: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C7109; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C7106: ;
    xmm0 = xmm1; /* movaps */

loc_001C7109: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7123; /* jge: greater or equal (signed >=) */

loc_001C711D: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C712B;

loc_001C7123: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C712B; /* jle: less or equal (signed <=) */

loc_001C7127: ;
    MEM32(esp + 0xC) = edi;

loc_001C712B: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F48);
    PUSH32(esp, 0x001C713Au); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C713A: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x50);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C7151u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C7151: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C716C; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C7164: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C716F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C716C: ;
    xmm0 = xmm1; /* movaps */

loc_001C716F: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7189; /* jge: greater or equal (signed >=) */

loc_001C7183: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C7191;

loc_001C7189: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7191; /* jle: less or equal (signed <=) */

loc_001C718D: ;
    MEM32(esp + 0xC) = edi;

loc_001C7191: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1678);
    PUSH32(esp, 0x001C71A0u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C71A0: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x51);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C71B7u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C71B7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C71D2; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C71CA: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C71D5; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C71D2: ;
    xmm0 = xmm1; /* movaps */

loc_001C71D5: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C71EF; /* jge: greater or equal (signed >=) */

loc_001C71E9: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C71F7;

loc_001C71EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C71F7; /* jle: less or equal (signed <=) */

loc_001C71F3: ;
    MEM32(esp + 0xC) = edi;

loc_001C71F7: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F0F38);
    PUSH32(esp, 0x001C7206u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7206: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x53);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C721Du); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C721D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C7238; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C7230: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C723B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C7238: ;
    xmm0 = xmm1; /* movaps */

loc_001C723B: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7255; /* jge: greater or equal (signed >=) */

loc_001C724F: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C725D;

loc_001C7255: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C725D; /* jle: less or equal (signed <=) */

loc_001C7259: ;
    MEM32(esp + 0xC) = edi;

loc_001C725D: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F40);
    PUSH32(esp, 0x001C726Cu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C726C: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x52);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C7283u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C7283: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C729E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C7296: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C72A1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C729E: ;
    xmm0 = xmm1; /* movaps */

loc_001C72A1: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C72BB; /* jge: greater or equal (signed >=) */

loc_001C72B5: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C72C3;

loc_001C72BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C72C3; /* jle: less or equal (signed <=) */

loc_001C72BF: ;
    MEM32(esp + 0xC) = edi;

loc_001C72C3: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1470);
    PUSH32(esp, 0x001C72D2u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C72D2: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x54);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C72E9u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C72E9: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C7304; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C72FC: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C7307; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C7304: ;
    xmm0 = xmm1; /* movaps */

loc_001C7307: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7321; /* jge: greater or equal (signed >=) */

loc_001C731B: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_001C7329;

loc_001C7321: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7329; /* jle: less or equal (signed <=) */

loc_001C7325: ;
    MEM32(esp + 0xC) = edi;

loc_001C7329: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1450);
    PUSH32(esp, 0x001C7338u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7338: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C7810
 * Original: 0x001C7810 - 0x001C78FF (239 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7810(void)
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

loc_001C7810: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    PUSH32(esp, 0x21);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C7826u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C7826: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C7841; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C7839: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C7844; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C7841: ;
    xmm0 = xmm1; /* movaps */

loc_001C7844: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7862; /* jge: greater or equal (signed >=) */

loc_001C7858: ;
    MEM32(esp + 4) = 0;
    goto loc_001C7871;

loc_001C7862: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7871; /* jle: less or equal (signed <=) */

loc_001C7869: ;
    MEM32(esp + 4) = 0x7FFF;

loc_001C7871: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1108);
    PUSH32(esp, 0x001C7880u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7880: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x23);
    ecx = esi;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C7897u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C7897: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    POP32(esp, esi);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C78B1; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C78A9: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C78B4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C78B1: ;
    xmm0 = xmm1; /* movaps */

loc_001C78B4: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C78DF; /* jge: greater or equal (signed >=) */

loc_001C78C5: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1AC0);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x001C78DBu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C78DB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001C78DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C78ED; /* jle: less or equal (signed <=) */

loc_001C78E6: ;
    MEM32(esp) = 0x7FFF;

loc_001C78ED: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1AC0);
    PUSH32(esp, 0x001C78FBu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C78FB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C7940
 * Original: 0x001C7940 - 0x001C7DD9 (1177 bytes, 382 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7940(void)
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

loc_001C7940: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    xmm1.f[0] = (float)(int32_t)MEM32(ebp + 4); /* cvtsi2ss */
    PUSH32(esp, 0x16);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C7959u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C7959: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C7974; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C796C: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C7977; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C7974: ;
    xmm0 = xmm1; /* movaps */

loc_001C7977: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    esi = eax;
    PUSH32(esp, 0x001C798Au); RECOMP_ABI_CALL(0x00034E97u, sub_00034E97); /* call 0x00034E97 */

loc_001C798A: ;
    ecx = MEM32(eax + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C79A8; /* je: equal / zero */

loc_001C7993: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C7999u); RECOMP_ABI_CALL(0x001BEA00u, sub_001BEA00); /* call 0x001BEA00 */

loc_001C7999: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C799Fu); RECOMP_ABI_CALL(0x001BED60u, sub_001BED60); /* call 0x001BED60 */

loc_001C799F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C79A5u); RECOMP_ABI_CALL(0x001BD380u, sub_001BD380); /* call 0x001BD380 */

loc_001C79A5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C79A8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    edi = 0x7FFF;
    if (CMP_GE(_fas, _fbs)) goto loc_001C79BB; /* jge: greater or equal (signed >=) */

loc_001C79B5: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C79C3;

loc_001C79BB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C79C3; /* jle: less or equal (signed <=) */

loc_001C79BF: ;
    MEM32(esp + 0x10) = edi;

loc_001C79C3: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F13F0);
    PUSH32(esp, 0x001C79D2u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C79D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C79E3; /* jge: greater or equal (signed >=) */

loc_001C79DD: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C79EB;

loc_001C79E3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C79EB; /* jle: less or equal (signed <=) */

loc_001C79E7: ;
    MEM32(esp + 0x10) = edi;

loc_001C79EB: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1A78);
    PUSH32(esp, 0x001C79FAu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C79FA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7A0B; /* jge: greater or equal (signed >=) */

loc_001C7A05: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7A13;

loc_001C7A0B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7A13; /* jle: less or equal (signed <=) */

loc_001C7A0F: ;
    MEM32(esp + 0x10) = edi;

loc_001C7A13: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1940);
    PUSH32(esp, 0x001C7A22u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7A22: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7A33; /* jge: greater or equal (signed >=) */

loc_001C7A2D: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7A3B;

loc_001C7A33: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7A3B; /* jle: less or equal (signed <=) */

loc_001C7A37: ;
    MEM32(esp + 0x10) = edi;

loc_001C7A3B: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F10B8);
    PUSH32(esp, 0x001C7A4Au); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7A4A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7A5B; /* jge: greater or equal (signed >=) */

loc_001C7A55: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7A63;

loc_001C7A5B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7A63; /* jle: less or equal (signed <=) */

loc_001C7A5F: ;
    MEM32(esp + 0x10) = edi;

loc_001C7A63: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1600);
    PUSH32(esp, 0x001C7A72u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7A72: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7A83; /* jge: greater or equal (signed >=) */

loc_001C7A7D: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7A8B;

loc_001C7A83: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7A8B; /* jle: less or equal (signed <=) */

loc_001C7A87: ;
    MEM32(esp + 0x10) = edi;

loc_001C7A8B: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1750);
    PUSH32(esp, 0x001C7A9Au); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7A9A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7AAB; /* jge: greater or equal (signed >=) */

loc_001C7AA5: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7AB3;

loc_001C7AAB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7AB3; /* jle: less or equal (signed <=) */

loc_001C7AAF: ;
    MEM32(esp + 0x10) = edi;

loc_001C7AB3: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1090);
    PUSH32(esp, 0x001C7AC2u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7AC2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7AD3; /* jge: greater or equal (signed >=) */

loc_001C7ACD: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7ADB;

loc_001C7AD3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7ADB; /* jle: less or equal (signed <=) */

loc_001C7AD7: ;
    MEM32(esp + 0x10) = edi;

loc_001C7ADB: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1708);
    PUSH32(esp, 0x001C7AEAu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7AEA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7AFB; /* jge: greater or equal (signed >=) */

loc_001C7AF5: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7B03;

loc_001C7AFB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7B03; /* jle: less or equal (signed <=) */

loc_001C7AFF: ;
    MEM32(esp + 0x10) = edi;

loc_001C7B03: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F0F80);
    PUSH32(esp, 0x001C7B12u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7B12: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7B23; /* jge: greater or equal (signed >=) */

loc_001C7B1D: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7B2B;

loc_001C7B23: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7B2B; /* jle: less or equal (signed <=) */

loc_001C7B27: ;
    MEM32(esp + 0x10) = edi;

loc_001C7B2B: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0FE0);
    PUSH32(esp, 0x001C7B3Au); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7B3A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7B4B; /* jge: greater or equal (signed >=) */

loc_001C7B45: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7B53;

loc_001C7B4B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7B53; /* jle: less or equal (signed <=) */

loc_001C7B4F: ;
    MEM32(esp + 0x10) = edi;

loc_001C7B53: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1418);
    PUSH32(esp, 0x001C7B62u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7B62: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7B73; /* jge: greater or equal (signed >=) */

loc_001C7B6D: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7B7B;

loc_001C7B73: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7B7B; /* jle: less or equal (signed <=) */

loc_001C7B77: ;
    MEM32(esp + 0x10) = edi;

loc_001C7B7B: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1120);
    PUSH32(esp, 0x001C7B8Au); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7B8A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7B9B; /* jge: greater or equal (signed >=) */

loc_001C7B95: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7BA3;

loc_001C7B9B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7BA3; /* jle: less or equal (signed <=) */

loc_001C7B9F: ;
    MEM32(esp + 0x10) = edi;

loc_001C7BA3: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1B40);
    PUSH32(esp, 0x001C7BB2u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7BB2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7BC3; /* jge: greater or equal (signed >=) */

loc_001C7BBD: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7BCB;

loc_001C7BC3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7BCB; /* jle: less or equal (signed <=) */

loc_001C7BC7: ;
    MEM32(esp + 0x10) = edi;

loc_001C7BCB: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1A58);
    PUSH32(esp, 0x001C7BDAu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7BDA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7BEB; /* jge: greater or equal (signed >=) */

loc_001C7BE5: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7BF3;

loc_001C7BEB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7BF3; /* jle: less or equal (signed <=) */

loc_001C7BEF: ;
    MEM32(esp + 0x10) = edi;

loc_001C7BF3: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F16A0);
    PUSH32(esp, 0x001C7C02u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7C02: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7C13; /* jge: greater or equal (signed >=) */

loc_001C7C0D: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7C1B;

loc_001C7C13: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7C1B; /* jle: less or equal (signed <=) */

loc_001C7C17: ;
    MEM32(esp + 0x10) = edi;

loc_001C7C1B: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0F20);
    PUSH32(esp, 0x001C7C2Au); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7C2A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7C3B; /* jge: greater or equal (signed >=) */

loc_001C7C35: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7C43;

loc_001C7C3B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7C43; /* jle: less or equal (signed <=) */

loc_001C7C3F: ;
    MEM32(esp + 0x10) = edi;

loc_001C7C43: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F0F98);
    PUSH32(esp, 0x001C7C52u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7C52: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7C63; /* jge: greater or equal (signed >=) */

loc_001C7C5D: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7C6B;

loc_001C7C63: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7C6B; /* jle: less or equal (signed <=) */

loc_001C7C67: ;
    MEM32(esp + 0x10) = edi;

loc_001C7C6B: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1658);
    PUSH32(esp, 0x001C7C7Au); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7C7A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7C8B; /* jge: greater or equal (signed >=) */

loc_001C7C85: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7C93;

loc_001C7C8B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7C93; /* jle: less or equal (signed <=) */

loc_001C7C8F: ;
    MEM32(esp + 0x10) = edi;

loc_001C7C93: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F15C0);
    PUSH32(esp, 0x001C7CA2u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7CA2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7CB3; /* jge: greater or equal (signed >=) */

loc_001C7CAD: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7CBB;

loc_001C7CB3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7CBB; /* jle: less or equal (signed <=) */

loc_001C7CB7: ;
    MEM32(esp + 0x10) = edi;

loc_001C7CBB: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1AB8);
    PUSH32(esp, 0x001C7CCAu); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7CCA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7CDB; /* jge: greater or equal (signed >=) */

loc_001C7CD5: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7CE3;

loc_001C7CDB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7CE3; /* jle: less or equal (signed <=) */

loc_001C7CDF: ;
    MEM32(esp + 0x10) = edi;

loc_001C7CE3: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1A98);
    PUSH32(esp, 0x001C7CF2u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7CF2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7D03; /* jge: greater or equal (signed >=) */

loc_001C7CFD: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7D0B;

loc_001C7D03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7D0B; /* jle: less or equal (signed <=) */

loc_001C7D07: ;
    MEM32(esp + 0x10) = edi;

loc_001C7D0B: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F11B8);
    PUSH32(esp, 0x001C7D1Au); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7D1A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7D2B; /* jge: greater or equal (signed >=) */

loc_001C7D25: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7D33;

loc_001C7D2B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7D33; /* jle: less or equal (signed <=) */

loc_001C7D2F: ;
    MEM32(esp + 0x10) = edi;

loc_001C7D33: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F0F18);
    PUSH32(esp, 0x001C7D42u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7D42: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7D53; /* jge: greater or equal (signed >=) */

loc_001C7D4D: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7D5B;

loc_001C7D53: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7D5B; /* jle: less or equal (signed <=) */

loc_001C7D57: ;
    MEM32(esp + 0x10) = edi;

loc_001C7D5B: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F1630);
    PUSH32(esp, 0x001C7D6Au); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7D6A: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ebp + 4); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x25);
    ecx = ebp;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C7D81u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C7D81: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C7D9C; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C7D94: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C7D9F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C7D9C: ;
    xmm0 = xmm1; /* movaps */

loc_001C7D9F: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7DB9; /* jge: greater or equal (signed >=) */

loc_001C7DB3: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_001C7DC1;

loc_001C7DB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7DC1; /* jle: less or equal (signed <=) */

loc_001C7DBD: ;
    MEM32(esp + 0x10) = edi;

loc_001C7DC1: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F15C8);
    PUSH32(esp, 0x001C7DD0u); RECOMP_ABI_CALL(0x005970FBu, sub_005970FB); /* call 0x005970FB */

loc_001C7DD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C7F00
 * Original: 0x001C7F00 - 0x001C8110 (528 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7F00(void)
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

loc_001C7F00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, 0x001C7F09u); RECOMP_ABI_CALL(0x00034E97u, sub_00034E97); /* call 0x00034E97 */

loc_001C7F09: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8105; /* jne: not equal / not zero */

loc_001C7F14: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ebx + 8); /* cvtsi2ss */
    PUSH32(esp, 0x77);
    ecx = ebx;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C7F28u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C7F28: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C7F43; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C7F3B: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C7F46; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C7F43: ;
    xmm0 = xmm1; /* movaps */

loc_001C7F46: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    edi = eax;
    SET_LO8(eax, MEM8(0x8F2150));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7FC1; /* je: equal / zero */

loc_001C7F5F: ;
    PUSH32(esp, 3);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001C7F6Bu); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C7F6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7FC1; /* je: equal / zero */

loc_001C7F70: ;
    ecx = eax + eax * 8;
    ecx = ecx * 4 + 0x8F2100;
    PUSH32(esp, 0x001C7F7Fu); RECOMP_ABI_CALL(0x00021072u, sub_00021072); /* call 0x00021072 */

loc_001C7F7F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7FC1; /* je: equal / zero */

loc_001C7F83: ;
    PUSH32(esp, 3);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001C7F8Fu); RECOMP_ABI_CALL(0x00028B9Cu, sub_00028B9C); /* call 0x00028B9C */

loc_001C7F8F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7FC1; /* je: equal / zero */

loc_001C7F93: ;
    SET_LO8(eax, MEM8(0x8F2150));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ebx + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_001C7FC1; /* je: equal / zero */

loc_001C7F9F: ;
    PUSH32(esp, 3);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001C7FABu); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C7FAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7FC1; /* je: equal / zero */

loc_001C7FB0: ;
    PUSH32(esp, esi);
    ecx = eax + eax * 8;
    PUSH32(esp, edi);
    ecx = ecx * 4 + 0x8F2100;
    PUSH32(esp, 0x001C7FC1u); RECOMP_ABI_CALL(0x00031ADFu, sub_00031ADF); /* call 0x00031ADF */

loc_001C7FC1: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ebx + 8); /* cvtsi2ss */
    PUSH32(esp, 0x76);
    ecx = ebx;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001C7FD5u); RECOMP_ABI_CALL(0x0002A1B8u, sub_0002A1B8); /* call 0x0002A1B8 */

loc_001C7FD5: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C7FF0; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C7FE8: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C7FF3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C7FF0: ;
    xmm0 = xmm1; /* movaps */

loc_001C7FF3: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    SET_LO8(edx, MEM8(0x904B91));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8015; /* je: equal / zero */

loc_001C800B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8015; /* je: equal / zero */

loc_001C8010: ;
    ecx = 1;

loc_001C8015: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = 0x8F0CD0;
    PUSH32(esp, 0x001C8023u); RECOMP_ABI_CALL(0x00029BD7u, sub_00029BD7); /* call 0x00029BD7 */

loc_001C8023: ;
    edi = eax;
    SET_LO8(eax, MEM8(0x8F2150));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8103; /* je: equal / zero */

loc_001C8032: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001C803Eu); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C803E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8098; /* je: equal / zero */

loc_001C8043: ;
    ecx = eax + eax * 8;
    ecx = ecx * 4 + 0x8F2100;
    PUSH32(esp, 0x001C8052u); RECOMP_ABI_CALL(0x00021072u, sub_00021072); /* call 0x00021072 */

loc_001C8052: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8098; /* je: equal / zero */

loc_001C8056: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001C8062u); RECOMP_ABI_CALL(0x00028B9Cu, sub_00028B9C); /* call 0x00028B9C */

loc_001C8062: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8098; /* je: equal / zero */

loc_001C8066: ;
    SET_LO8(eax, MEM8(0x8F2150));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ebx + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_001C8103; /* je: equal / zero */

loc_001C8076: ;
    PUSH32(esp, 2);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001C8082u); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C8082: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8098; /* je: equal / zero */

loc_001C8087: ;
    PUSH32(esp, esi);
    ecx = eax + eax * 8;
    PUSH32(esp, edi);
    ecx = ecx * 4 + 0x8F2100;
    PUSH32(esp, 0x001C8098u); RECOMP_ABI_CALL(0x00031ADFu, sub_00031ADF); /* call 0x00031ADF */

loc_001C8098: ;
    SET_LO8(eax, MEM8(0x8F2150));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8103; /* je: equal / zero */

loc_001C80A1: ;
    PUSH32(esp, 0);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001C80ADu); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C80AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8103; /* je: equal / zero */

loc_001C80B2: ;
    ecx = eax + eax * 8;
    ecx = ecx * 4 + 0x8F2100;
    PUSH32(esp, 0x001C80C1u); RECOMP_ABI_CALL(0x00021072u, sub_00021072); /* call 0x00021072 */

loc_001C80C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8103; /* je: equal / zero */

loc_001C80C5: ;
    PUSH32(esp, 0);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001C80D1u); RECOMP_ABI_CALL(0x00028B9Cu, sub_00028B9C); /* call 0x00028B9C */

loc_001C80D1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8103; /* je: equal / zero */

loc_001C80D5: ;
    SET_LO8(eax, MEM8(0x8F2150));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ebx + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_001C8103; /* je: equal / zero */

loc_001C80E1: ;
    PUSH32(esp, 0);
    ecx = 0x8F2100;
    PUSH32(esp, 0x001C80EDu); RECOMP_ABI_CALL(0x0002F28Fu, sub_0002F28F); /* call 0x0002F28F */

loc_001C80ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8103; /* je: equal / zero */

loc_001C80F2: ;
    PUSH32(esp, esi);
    ecx = eax + eax * 8;
    PUSH32(esp, edi);
    ecx = ecx * 4 + 0x8F2100;
    PUSH32(esp, 0x001C8103u); RECOMP_ABI_CALL(0x00031ADFu, sub_00031ADF); /* call 0x00031ADF */

loc_001C8103: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001C8105: ;
    ecx = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001D9B3(); return; /* tail jmp 0x0001D9B3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C81A0
 * Original: 0x001C81A0 - 0x001C81D3 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C81A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C81A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C81A8u); RECOMP_ABI_CALL(0x00034E97u, sub_00034E97); /* call 0x00034E97 */

loc_001C81A8: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C81CB; /* jne: not equal / not zero */

loc_001C81AF: ;
    ecx = esi;
    PUSH32(esp, 0x001C81B6u); RECOMP_ABI_CALL(0x000132FBu, sub_000132FB); /* call 0x000132FB */

loc_001C81B6: ;
    ecx = esi;
    PUSH32(esp, 0x001C81BDu); RECOMP_ABI_CALL(0x00035E5Fu, sub_00035E5F); /* call 0x00035E5F */

loc_001C81BD: ;
    ecx = esi;
    PUSH32(esp, 0x001C81C4u); RECOMP_ABI_CALL(0x00027409u, sub_00027409); /* call 0x00027409 */

loc_001C81C4: ;
    ecx = esi;
    PUSH32(esp, 0x001C81CBu); RECOMP_ABI_CALL(0x00033605u, sub_00033605); /* call 0x00033605 */

loc_001C81CB: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A258(); return; /* tail jmp 0x0002A258 */

}

/**
 * sub_001C81E0
 * Original: 0x001C81E0 - 0x001C8247 (103 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C81E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C81E0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001C81F4; /* jne: not equal / not zero */

loc_001C81EB: ;
    PUSH32(esp, 0x001C81F0u); RECOMP_ABI_CALL(0x0002AAF5u, sub_0002AAF5); /* call 0x0002AAF5 */

loc_001C81F0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8243; /* je: equal / zero */

loc_001C81F4: ;
    eax = MEM32(0x8F20EC);
    MEM32(eax + 0x14) = 0x8B2DE0;
    ecx = MEM32(0x8F20EC);
    MEM32(ecx + 0x18) = 0x8B2ED0;
    ecx = esi;
    PUSH32(esp, 0x001C8214u); RECOMP_ABI_CALL(0x00023CBEu, sub_00023CBE); /* call 0x00023CBE */

loc_001C8214: ;
    PUSH32(esp, 0x001C8219u); RECOMP_ABI_CALL(0x00034E97u, sub_00034E97); /* call 0x00034E97 */

loc_001C8219: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C823C; /* jne: not equal / not zero */

loc_001C8220: ;
    ecx = esi;
    PUSH32(esp, 0x001C8227u); RECOMP_ABI_CALL(0x000132FBu, sub_000132FB); /* call 0x000132FB */

loc_001C8227: ;
    ecx = esi;
    PUSH32(esp, 0x001C822Eu); RECOMP_ABI_CALL(0x00035E5Fu, sub_00035E5F); /* call 0x00035E5F */

loc_001C822E: ;
    ecx = esi;
    PUSH32(esp, 0x001C8235u); RECOMP_ABI_CALL(0x00027409u, sub_00027409); /* call 0x00027409 */

loc_001C8235: ;
    ecx = esi;
    PUSH32(esp, 0x001C823Cu); RECOMP_ABI_CALL(0x00033605u, sub_00033605); /* call 0x00033605 */

loc_001C823C: ;
    ecx = esi;
    PUSH32(esp, 0x001C8243u); RECOMP_ABI_CALL(0x0002A258u, sub_0002A258); /* call 0x0002A258 */

loc_001C8243: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C8260
 * Original: 0x001C8260 - 0x001C8305 (165 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8260: ;
    SET_LO8(eax, MEM8(0x8F20F0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C826E; /* jne: not equal / not zero */

loc_001C8269: ;
    PUSH32(esp, 0x001C826Eu); RECOMP_ABI_CALL(0x00029D21u, sub_00029D21); /* call 0x00029D21 */

loc_001C826E: ;
    eax = MEM32(0x8F20EC);
    MEM32(eax + 0x14) = 0x8B2DE0;
    ecx = MEM32(0x8F20EC);
    MEM32(ecx + 0x18) = 0x8B2ED0;
    ecx = MEM32(0x8F20EC);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C8295u); RECOMP_ABI_CALL(0x0002AAF5u, sub_0002AAF5); /* call 0x0002AAF5 */

loc_001C8295: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C82E8; /* je: equal / zero */

loc_001C8299: ;
    edx = MEM32(0x8F20EC);
    MEM32(edx + 0x14) = 0x8B2DE0;
    eax = MEM32(0x8F20EC);
    ecx = esi;
    MEM32(eax + 0x18) = 0x8B2ED0;
    PUSH32(esp, 0x001C82B9u); RECOMP_ABI_CALL(0x00023CBEu, sub_00023CBE); /* call 0x00023CBE */

loc_001C82B9: ;
    PUSH32(esp, 0x001C82BEu); RECOMP_ABI_CALL(0x00034E97u, sub_00034E97); /* call 0x00034E97 */

loc_001C82BE: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C82E1; /* jne: not equal / not zero */

loc_001C82C5: ;
    ecx = esi;
    PUSH32(esp, 0x001C82CCu); RECOMP_ABI_CALL(0x000132FBu, sub_000132FB); /* call 0x000132FB */

loc_001C82CC: ;
    ecx = esi;
    PUSH32(esp, 0x001C82D3u); RECOMP_ABI_CALL(0x00035E5Fu, sub_00035E5F); /* call 0x00035E5F */

loc_001C82D3: ;
    ecx = esi;
    PUSH32(esp, 0x001C82DAu); RECOMP_ABI_CALL(0x00027409u, sub_00027409); /* call 0x00027409 */

loc_001C82DA: ;
    ecx = esi;
    PUSH32(esp, 0x001C82E1u); RECOMP_ABI_CALL(0x00033605u, sub_00033605); /* call 0x00033605 */

loc_001C82E1: ;
    ecx = esi;
    PUSH32(esp, 0x001C82E8u); RECOMP_ABI_CALL(0x0002A258u, sub_0002A258); /* call 0x0002A258 */

loc_001C82E8: ;
    eax = MEM32(0x8F20EC);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C8300u); RECOMP_ABI_CALL(0x00588CEBu, sub_00588CEB); /* call 0x00588CEB */

loc_001C8300: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C8330
 * Original: 0x001C8330 - 0x001C83D5 (165 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8330: ;
    SET_LO8(eax, MEM8(0x8F20F0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C833E; /* jne: not equal / not zero */

loc_001C8339: ;
    PUSH32(esp, 0x001C833Eu); RECOMP_ABI_CALL(0x00029D21u, sub_00029D21); /* call 0x00029D21 */

loc_001C833E: ;
    eax = MEM32(0x8F20EC);
    MEM32(eax + 0x14) = 0x8B2DE0;
    ecx = MEM32(0x8F20EC);
    MEM32(ecx + 0x18) = 0x8B2ED0;
    ecx = MEM32(0x8F20EC);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C8365u); RECOMP_ABI_CALL(0x0002AAF5u, sub_0002AAF5); /* call 0x0002AAF5 */

loc_001C8365: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C83B8; /* je: equal / zero */

loc_001C8369: ;
    edx = MEM32(0x8F20EC);
    MEM32(edx + 0x14) = 0x8B2DE0;
    eax = MEM32(0x8F20EC);
    ecx = esi;
    MEM32(eax + 0x18) = 0x8B2ED0;
    PUSH32(esp, 0x001C8389u); RECOMP_ABI_CALL(0x00023CBEu, sub_00023CBE); /* call 0x00023CBE */

loc_001C8389: ;
    PUSH32(esp, 0x001C838Eu); RECOMP_ABI_CALL(0x00034E97u, sub_00034E97); /* call 0x00034E97 */

loc_001C838E: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C83B1; /* jne: not equal / not zero */

loc_001C8395: ;
    ecx = esi;
    PUSH32(esp, 0x001C839Cu); RECOMP_ABI_CALL(0x000132FBu, sub_000132FB); /* call 0x000132FB */

loc_001C839C: ;
    ecx = esi;
    PUSH32(esp, 0x001C83A3u); RECOMP_ABI_CALL(0x00035E5Fu, sub_00035E5F); /* call 0x00035E5F */

loc_001C83A3: ;
    ecx = esi;
    PUSH32(esp, 0x001C83AAu); RECOMP_ABI_CALL(0x00027409u, sub_00027409); /* call 0x00027409 */

loc_001C83AA: ;
    ecx = esi;
    PUSH32(esp, 0x001C83B1u); RECOMP_ABI_CALL(0x00033605u, sub_00033605); /* call 0x00033605 */

loc_001C83B1: ;
    ecx = esi;
    PUSH32(esp, 0x001C83B8u); RECOMP_ABI_CALL(0x0002A258u, sub_0002A258); /* call 0x0002A258 */

loc_001C83B8: ;
    eax = MEM32(0x8F20EC);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C83D0u); RECOMP_ABI_CALL(0x00588CEBu, sub_00588CEB); /* call 0x00588CEB */

loc_001C83D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C8400
 * Original: 0x001C8400 - 0x001C8404 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8400(void)
{

loc_001C8400: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001C8410
 * Original: 0x001C8410 - 0x001C8416 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8410(void)
{

loc_001C8410: ;
    eax = MEM32(0x909394);
    esp += 4; return; /* ret */

}

/**
 * sub_001C8420
 * Original: 0x001C8420 - 0x001C8456 (54 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8420(void)
{

loc_001C8420: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 8); /* divss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001C8470
 * Original: 0x001C8470 - 0x001C8495 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8470(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001C8470: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C84A0
 * Original: 0x001C84A0 - 0x001C84AE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C84A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C84A0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C84C0
 * Original: 0x001C84C0 - 0x001C84E3 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C84C0(void)
{

loc_001C84C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001C84F0
 * Original: 0x001C84F0 - 0x001C8541 (81 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001C84F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001C84F0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C853C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_001C84FE: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C853C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_001C8508: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C853C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_001C8513: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C853C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_001C851E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C853C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 8)) */

loc_001C8529: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C853C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_001C8534: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_001C853C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C8560
 * Original: 0x001C8560 - 0x001C856F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8560(void)
{

loc_001C8560: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax * 8 + 0x8FA2D0;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8580
 * Original: 0x001C8580 - 0x001C8583 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8580(void)
{

loc_001C8580: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8590
 * Original: 0x001C8590 - 0x001C8594 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8590(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001C8590: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C85A0
 * Original: 0x001C85A0 - 0x001C85A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C85A0(void)
{

loc_001C85A0: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001C85B0
 * Original: 0x001C85B0 - 0x001C85B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C85B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001C85B0: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C85C0
 * Original: 0x001C85C0 - 0x001C85C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C85C0(void)
{

loc_001C85C0: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001C85D0
 * Original: 0x001C85D0 - 0x001C85D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C85D0(void)
{

loc_001C85D0: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001C85E0
 * Original: 0x001C85E0 - 0x001C85EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C85E0(void)
{

loc_001C85E0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 7) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C85F0
 * Original: 0x001C85F0 - 0x001C85F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C85F0(void)
{

loc_001C85F0: ;
    SET_LO8(eax, MEM8(ecx + 7));
    esp += 4; return; /* ret */

}

/**
 * sub_001C8600
 * Original: 0x001C8600 - 0x001C8607 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8600(void)
{

loc_001C8600: ;
    MEM32(ecx) = 0x7F0728;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8610
 * Original: 0x001C8610 - 0x001C8615 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8610(void)
{

loc_001C8610: ;
    MEM8(ecx + 7) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8620
 * Original: 0x001C8620 - 0x001C8621 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8620(void)
{

loc_001C8620: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8630
 * Original: 0x001C8630 - 0x001C8634 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8630(void)
{

loc_001C8630: ;
    SET_LO8(eax, MEM8(ecx + 4));
    esp += 4; return; /* ret */

}

/**
 * sub_001C8640
 * Original: 0x001C8640 - 0x001C8644 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8640(void)
{

loc_001C8640: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8650
 * Original: 0x001C8650 - 0x001C8654 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8650(void)
{

loc_001C8650: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8660
 * Original: 0x001C8660 - 0x001C8664 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8660(void)
{

loc_001C8660: ;
    eax = ecx + 5;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8670
 * Original: 0x001C8670 - 0x001C8674 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8670(void)
{

loc_001C8670: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8680
 * Original: 0x001C8680 - 0x001C868A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8680(void)
{

loc_001C8680: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 6) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C8690
 * Original: 0x001C8690 - 0x001C8698 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8690(void)
{

loc_001C8690: ;
    MEM32(ecx + 0x44) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001C86A0
 * Original: 0x001C86A0 - 0x001C86A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C86A0(void)
{

loc_001C86A0: ;
    MEM32(ecx + 0x44) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001C86B0
 * Original: 0x001C86B0 - 0x001C8765 (181 bytes, 62 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C86B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001C86B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C875E; /* je: equal / zero */

loc_001C86BF: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C875E; /* je: equal / zero */

loc_001C86CE: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x2C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C875E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x2C)) */

loc_001C86DD: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x2C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C875E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x2C)) */

loc_001C86E8: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x3C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x30); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C875E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x30)) */

loc_001C86F3: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x30); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C875E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x30)) */

loc_001C86FE: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C875E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x34)) */

loc_001C8709: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C875E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x34)) */

loc_001C8714: ;
    SET_LO8(eax, MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C871F; /* jne: not equal / not zero */

loc_001C871B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C871Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C871Du); } /* indirect call */
    }

loc_001C871F: ;
    SET_LO8(eax, MEM8(edi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C872C; /* jne: not equal / not zero */

loc_001C8726: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C872Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C872Au); } /* indirect call */
    }

loc_001C872C: ;
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(ecx, MEM8(edi + 4));
    eax = ZX8(LO8(eax));
    ecx = ZX8(LO8(ecx));
    eax = eax + eax * 2;
    edx = ecx + eax * 4;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx * 4 + 0x8FA030); PUSH32(esp, 0x001C8756u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C874Fu); } /* indirect call */
    }

loc_001C8756: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001C875E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001C87A0
 * Original: 0x001C87A0 - 0x001C87C2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C87A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C87A0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F0728;
    if (TEST_Z(_fa, _fb)) goto loc_001C87BC; /* je: equal / zero */

loc_001C87B0: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C87BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C87B9u); } /* indirect call */
    }

loc_001C87BC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C87D0
 * Original: 0x001C87D0 - 0x001C87D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C87D0(void)
{

loc_001C87D0: ;
    eax = ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_001C87E0
 * Original: 0x001C87E0 - 0x001C87E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C87E0(void)
{

loc_001C87E0: ;
    eax = ecx + 0x60;
    esp += 4; return; /* ret */

}

/**
 * sub_001C87F0
 * Original: 0x001C87F0 - 0x001C87F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C87F0(void)
{

loc_001C87F0: ;
    eax = ecx + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8800
 * Original: 0x001C8800 - 0x001C8807 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8800(void)
{

loc_001C8800: ;
    eax = ecx + 0xA8;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8810
 * Original: 0x001C8810 - 0x001C887F (111 bytes, 30 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8810(void)
{

loc_001C8810: ;
    edx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(edx);
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = ecx + 0x50;
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0xC);
    esi = MEM32(edx);
    eax = ecx + 0x60;
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEMF(ecx + 0xA0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEM32(eax + 0xC) = edx;
    MEMF(ecx + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xAC) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001C88A0
 * Original: 0x001C88A0 - 0x001C88A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C88A0(void)
{

loc_001C88A0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001C88B0
 * Original: 0x001C88B0 - 0x001C88B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C88B0(void)
{

loc_001C88B0: ;
    eax = MEM32(ecx + 0x50);
    esp += 4; return; /* ret */

}

/**
 * sub_001C88C0
 * Original: 0x001C88C0 - 0x001C88CD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C88C0(void)
{

loc_001C88C0: ;
    eax = MEM32(ecx + 0x54);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C88D0
 * Original: 0x001C88D0 - 0x001C88D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C88D0(void)
{

loc_001C88D0: ;
    eax = MEM32(ecx + 0x50);
    esp += 4; return; /* ret */

}

/**
 * sub_001C88E0
 * Original: 0x001C88E0 - 0x001C88E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C88E0(void)
{

loc_001C88E0: ;
    eax = MEM32(ecx + 0x54);
    esp += 4; return; /* ret */

}

/**
 * sub_001C88F0
 * Original: 0x001C88F0 - 0x001C88F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C88F0(void)
{

loc_001C88F0: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8900
 * Original: 0x001C8900 - 0x001C8904 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8900(void)
{

loc_001C8900: ;
    eax = ecx + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8910
 * Original: 0x001C8910 - 0x001C8914 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8910(void)
{

loc_001C8910: ;
    eax = ecx + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8920
 * Original: 0x001C8920 - 0x001C8924 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8920(void)
{

loc_001C8920: ;
    eax = ecx + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8930
 * Original: 0x001C8930 - 0x001C8934 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8930(void)
{

loc_001C8930: ;
    eax = ecx + 0x58;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8940
 * Original: 0x001C8940 - 0x001C8944 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8940(void)
{

loc_001C8940: ;
    eax = ecx + 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8950
 * Original: 0x001C8950 - 0x001C8954 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8950(void)
{

loc_001C8950: ;
    eax = ecx + 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8960
 * Original: 0x001C8960 - 0x001C89E3 (131 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8960: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    edx = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] - MEMF(edx); /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 4); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 8); /* subss */
    eax = ecx + 0x28;
    PUSH32(esp, esi);
    esi = MEM32(esp + 4);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x5C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x6C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C8A10
 * Original: 0x001C8A10 - 0x001C8B42 (306 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8A10(void)
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

loc_001C8A10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x50);
    edx = MEM32(ecx + 0x54);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x58)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x5C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x58)); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x5C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_001C8AF4; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm7.f[0]) */

loc_001C8AE1: ;
    xmm7.f[0] = xmm7.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_001C8AF4: ;
    _fca = xmm3.f[0]; _fcb = MEMF(0x7AD42C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C8B25; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(0x7AD42C)) */

loc_001C8AFD: ;
    eax = MEM32(ecx + 0x50);
    ecx = MEM32(ecx + 0x54);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] - xmm2.f[0]; /* subss */

loc_001C8B25: ;
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm4.f[0]; /* movss */
    MEMF(eax + 4) = xmm5.f[0]; /* movss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm7.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_001C8B90
 * Original: 0x001C8B90 - 0x001C8BBD (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8B90: ;
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8BBC; /* jne: not equal / not zero */

loc_001C8B99: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x001C8BA1u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C8BA1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8BB5; /* je: equal / zero */

loc_001C8BA8: ;
    ecx = eax;
    PUSH32(esp, 0x001C8BAFu); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_001C8BAF: ;
    MEM32(0x8FA278) = eax;
    esp += 4; return; /* ret */

loc_001C8BB5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8FA278) = eax;

loc_001C8BBC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8BD0
 * Original: 0x001C8BD0 - 0x001C8BFD (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8BD0: ;
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8BFC; /* jne: not equal / not zero */

loc_001C8BD9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x001C8BE1u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001C8BE1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8BF5; /* je: equal / zero */

loc_001C8BE8: ;
    ecx = eax;
    PUSH32(esp, 0x001C8BEFu); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_001C8BEF: ;
    MEM32(0x8FA278) = eax;
    esp += 4; return; /* ret */

loc_001C8BF5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8FA278) = eax;

loc_001C8BFC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8C10
 * Original: 0x001C8C10 - 0x001C8C1D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8C10: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8C20
 * Original: 0x001C8C20 - 0x001C8C25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C8C20: ;
    g_seh_ebp = ebp; sub_0001F14B(); return; /* tail jmp 0x0001F14B */

}

/**
 * sub_001C8C30
 * Original: 0x001C8C30 - 0x001C8C34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8C30(void)
{

loc_001C8C30: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8C40
 * Original: 0x001C8C40 - 0x001C8C44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8C40(void)
{

loc_001C8C40: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8C50
 * Original: 0x001C8C50 - 0x001C8C56 (6 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8C50(void)
{

loc_001C8C50: ;
    eax = ecx + 0x2C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C8C60
 * Original: 0x001C8C60 - 0x001C8C7A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8C60: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C8C80
 * Original: 0x001C8C80 - 0x001C8C84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8C80(void)
{

loc_001C8C80: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001C8C90
 * Original: 0x001C8C90 - 0x001C8C94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8C90(void)
{

loc_001C8C90: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001C8CA0
 * Original: 0x001C8CA0 - 0x001C8CA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8CA0(void)
{

loc_001C8CA0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_001C8CB0
 * Original: 0x001C8CB0 - 0x001C8CB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8CB0(void)
{

loc_001C8CB0: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    esp += 4; return; /* ret */

}

/**
 * sub_001C8CC0
 * Original: 0x001C8CC0 - 0x001C8CC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8CC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001C8CC0: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C8CD0
 * Original: 0x001C8CD0 - 0x001C8CD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8CD0(void)
{

loc_001C8CD0: ;
    eax = MEM32(ecx + 0x124);
    esp += 4; return; /* ret */

}

/**
 * sub_001C8CE0
 * Original: 0x001C8CE0 - 0x001C8CED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8CE0(void)
{

loc_001C8CE0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x124) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C8CF0
 * Original: 0x001C8CF0 - 0x001C8CF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8CF0(void)
{

loc_001C8CF0: ;
    SET_LO8(eax, MEM8(ecx + 0x12C));
    esp += 4; return; /* ret */

}

/**
 * sub_001C8D00
 * Original: 0x001C8D00 - 0x001C8D08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8D00(void)
{

loc_001C8D00: ;
    MEM8(ecx + 0x12C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8D10
 * Original: 0x001C8D10 - 0x001C8D18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8D10(void)
{

loc_001C8D10: ;
    MEM8(ecx + 0x12C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8D20
 * Original: 0x001C8D20 - 0x001C8D27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8D20(void)
{

loc_001C8D20: ;
    eax = MEM32(ecx + 0x130);
    esp += 4; return; /* ret */

}

/**
 * sub_001C8D30
 * Original: 0x001C8D30 - 0x001C8D3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8D30(void)
{

loc_001C8D30: ;
    MEM32(ecx + 0x130) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8D40
 * Original: 0x001C8D40 - 0x001C8D47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8D40: ;
    MEM32(ecx + 0x130) = MEM32(ecx + 0x130) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x130)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001C8D50
 * Original: 0x001C8D50 - 0x001C8D63 (19 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8D50(void)
{

loc_001C8D50: ;
    SET_LO8(edx, MEM8(esp + 4));
    SET_LO8(eax, MEM8(ecx + 0x34D));
    MEM8(ecx + 0x34D) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C8D70
 * Original: 0x001C8D70 - 0x001C8D90 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8D70: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x7F0744;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001C8DA0
 * Original: 0x001C8DA0 - 0x001C8DD3 (51 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8DA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x7F0744;
    if (CMP_BE(_fa, _fb)) goto loc_001C8DD0; /* jbe: below or equal (unsigned <=) */

loc_001C8DB3: ;
    PUSH32(esp, esi);
    esi = edi + 8;

loc_001C8DB7: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8DC4; /* je: equal / zero */

loc_001C8DBD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C8DC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8DC1u); } /* indirect call */
    }

loc_001C8DC4: ;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C8DB7; /* jb: below (unsigned <) */

loc_001C8DCF: ;
    POP32(esp, esi);

loc_001C8DD0: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C8DE0
 * Original: 0x001C8DE0 - 0x001C8DFA (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8DE0: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 8) = edx;
    eax = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    ecx = eax;
    eax = ecx + -1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C8E00
 * Original: 0x001C8E00 - 0x001C8E0B (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8E00(void)
{

loc_001C8E00: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C8E10
 * Original: 0x001C8E10 - 0x001C8E1F (15 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8E10(void)
{

loc_001C8E10: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 8) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C8E30
 * Original: 0x001C8E30 - 0x001C8E97 (103 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C8E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8E3F; /* je: equal / zero */

loc_001C8E37: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8E45; /* jne: not equal / not zero */

loc_001C8E3F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001C8E45: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C8E4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8E4Au); } /* indirect call */
    }

loc_001C8E4D: ;
    eax = MEM32(esi + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C8E85; /* jle: less or equal (signed <=) */

loc_001C8E56: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    ebx = esi + 8;
    /* nop */

loc_001C8E60: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8E78; /* je: equal / zero */

loc_001C8E66: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C8E78u); RECOMP_ABI_CALL(0x00018A53u, sub_00018A53); /* call 0x00018A53 */

loc_001C8E78: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C8E60; /* jl: less (signed <) */

loc_001C8E83: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001C8E85: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001C8EB0
 * Original: 0x001C8EB0 - 0x001C8EB8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C8EB0: ;
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_001C8EC0
 * Original: 0x001C8EC0 - 0x001C8ECB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C8EC0: ;
    MEM32(ecx) = 0x7F0750;
    g_seh_ebp = ebp; sub_0001547A(); return; /* tail jmp 0x0001547A */

}

/**
 * sub_001C8ED0
 * Original: 0x001C8ED0 - 0x001C8FBA (234 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C8ED0: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001C8EE9u); RECOMP_ABI_CALL(0x0059EBE8u, sub_0059EBE8); /* call 0x0059EBE8 */

loc_001C8EE9: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 8) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_001C8F2D; /* jle: less or equal (signed <=) */

loc_001C8EFA: ;
    PUSH32(esp, ebp);
    ebp = esi + 8;
    edi = edi;

loc_001C8F00: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8F21; /* je: equal / zero */

loc_001C8F07: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C8F19u); RECOMP_ABI_CALL(0x00015F01u, sub_00015F01); /* call 0x00015F01 */

loc_001C8F19: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0xC) = 0;

loc_001C8F21: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C8F00; /* jl: less (signed <) */

loc_001C8F2C: ;
    POP32(esp, ebp);

loc_001C8F2D: ;
    MEM32(esi + 0x120) = 0;
    eax = 2;
    ecx = esp + 0x10;

loc_001C8F40: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C8F5A; /* jle: less or equal (signed <=) */

loc_001C8F47: ;
    edi = MEM32(esi + 0x120);
    edx = eax + -2;
    MEM32(esi + edi * 4 + 0x20) = edx;
    MEM32(esi + 0x120) = MEM32(esi + 0x120) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C8F5A: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C8F72; /* jle: less or equal (signed <=) */

loc_001C8F5F: ;
    edi = MEM32(esi + 0x120);
    edx = eax + -1;
    MEM32(esi + edi * 4 + 0x20) = edx;
    MEM32(esi + 0x120) = MEM32(esi + 0x120) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C8F72: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C8F89; /* jle: less or equal (signed <=) */

loc_001C8F79: ;
    edx = MEM32(esi + 0x120);
    MEM32(esi + edx * 4 + 0x20) = eax;
    MEM32(esi + 0x120) = MEM32(esi + 0x120) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C8F89: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C8FA3; /* jle: less or equal (signed <=) */

loc_001C8F90: ;
    edi = MEM32(esi + 0x120);
    edx = eax + 1;
    MEM32(esi + edi * 4 + 0x20) = edx;
    MEM32(esi + 0x120) = MEM32(esi + 0x120) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C8FA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + -2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C8F40; /* jl: less (signed <) */

loc_001C8FB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C9000
 * Original: 0x001C9000 - 0x001C92E7 (743 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C9000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_001C9000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x1074;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C9010u); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_001C9010: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x124);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C9025u); RECOMP_ABI_CALL(0x00026298u, sub_00026298); /* call 0x00026298 */

loc_001C9025: ;
    ecx = MEM32(edi + 0x120);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C92AD; /* jle: less or equal (signed <=) */

loc_001C9038: ;
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = edi;

loc_001C9047: ;
    ecx = MEM32(esp + 0xC);
    ecx = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm3 = XMM_SCALAR(MEMF(ecx + eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + eax + 0xC)); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    edx = ecx + eax + 0x30;
    MEMF(esp + 0x3C) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ecx + eax)); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x7C); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + eax + 4)); /* movss */
    ebx = MEM32(esp + 0x20);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + eax + 8); /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + eax + 0xC)); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    edi = esp + ecx + 0x80;
    MEM32(edi) = ebx;
    ebx = MEM32(esp + 0x24);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esp + 0x28);
    MEM32(edi + 8) = ebx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x2C);
    MEM32(edi + 0xC) = ebx;
    xmm3 = XMM_SCALAR(MEMF(ecx + eax + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + eax + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + eax + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + eax + 0x1C)); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ecx + eax + 0x10)); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x5C); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    ebx = MEM32(esp + 0x40);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + eax + 0x14); /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + eax + 0x1C)); /* movss */
    edi = esp + ecx + 0x90;
    MEM32(edi) = ebx;
    ebx = MEM32(esp + 0x44);
    MEM32(edi + 4) = ebx;
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    ebx = MEM32(esp + 0x48);
    MEM32(edi + 8) = ebx;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x4C);
    MEM32(edi + 0xC) = ebx;
    xmm3 = XMM_SCALAR(MEMF(ecx + eax + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + eax + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + eax + 0x28)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + eax + 0x2C)); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ecx + eax + 0x20)); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + eax + 0x24)); /* movss */
    ebx = MEM32(esp + 0x60);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edi = esp + ecx + 0xA0;
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + eax + 0x2C)); /* movss */
    MEM32(edi) = ebx;
    ebx = MEM32(esp + 0x64);
    MEM32(edi + 4) = ebx;
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    ebx = MEM32(esp + 0x68);
    MEM32(edi + 8) = ebx;
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x6C);
    MEM32(edi + 0xC) = ebx;
    edi = MEM32(edx);
    ecx = esp + ecx + 0xB0;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 8) = edi;
    edx = MEM32(edx + 0xC);
    edi = MEM32(esp + 0x18);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0x120);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(esp + 0xC) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001C9047; /* jl: less (signed <) */

loc_001C92AD: ;
    eax = MEM32(edi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C92E0; /* jle: less or equal (signed <=) */

loc_001C92B6: ;
    esi = edi + 8;
    /* nop */

loc_001C92C0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C92D5; /* je: equal / zero */

loc_001C92C6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C92D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C92D2u); } /* indirect call */
    }

loc_001C92D5: ;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C92C0; /* jl: less (signed <) */

loc_001C92E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_001C93A0
 * Original: 0x001C93A0 - 0x001C93BA (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001C93A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C93A0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x50) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C93B5; /* jge: greater or equal (signed >=) */

loc_001C93AC: ;
    eax = MEM32(eax + 0x54);
    eax = eax + ecx * 8;
    esp += 8; return; /* ret 4 */

loc_001C93B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C93C0
 * Original: 0x001C93C0 - 0x001C93E8 (40 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C93C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C93C0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x50) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C93DE; /* jge: greater or equal (signed >=) */

loc_001C93CC: ;
    eax = MEM32(eax + 0x54);
    eax = eax + ecx * 8;
    ecx = MEM32(eax);
    MEM32(ecx + 0x44) = 0;
    esp += 8; return; /* ret 4 */

loc_001C93DE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(eax);
    MEM32(edx + 0x44) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C9400
 * Original: 0x001C9400 - 0x001C942C (44 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C9400: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x50) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C941E; /* jge: greater or equal (signed >=) */

loc_001C940C: ;
    eax = MEM32(eax + 0x54);
    eax = eax + ecx * 8;
    ecx = MEM32(eax);
    MEM32(ecx + 0x44) = 1;
    esp += 8; return; /* ret 4 */

loc_001C941E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(eax);
    MEM32(edx + 0x44) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C9440
 * Original: 0x001C9440 - 0x001C94B6 (118 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C9440: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 4) = ebp;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(edi) = ebp;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x10) = ebp;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = ebp;
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi) = 0x7F075C;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8FA280);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001C9473u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9470u); } /* indirect call */
    }

loc_001C9473: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + ecx * 4 + 8) = eax;
    edx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 4) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001C94AD; /* jle: less or equal (signed <=) */

loc_001C9489: ;
    /* nop */

loc_001C9490: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C94A2; /* je: equal / zero */

loc_001C9496: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C94A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C949Fu); } /* indirect call */
    }

loc_001C94A2: ;
    eax = MEM32(esi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C9490; /* jl: less (signed <) */

loc_001C94AD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C94E0
 * Original: 0x001C94E0 - 0x001C94EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C94E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C94E0: ;
    MEM32(ecx) = 0x7F075C;
    g_seh_ebp = ebp; sub_0001547A(); return; /* tail jmp 0x0001547A */

}

/**
 * sub_001C94F0
 * Original: 0x001C94F0 - 0x001C94F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C94F0(void)
{

loc_001C94F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C9500
 * Original: 0x001C9500 - 0x001C9512 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9500(void)
{

loc_001C9500: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C9520
 * Original: 0x001C9520 - 0x001C9523 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9520(void)
{

loc_001C9520: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C9530
 * Original: 0x001C9530 - 0x001C9534 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9530(void)
{

loc_001C9530: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001C9540
 * Original: 0x001C9540 - 0x001C954C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9540(void)
{

loc_001C9540: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 8 + 0x8B3E28);
    esp += 4; return; /* ret */

}

/**
 * sub_001C9550
 * Original: 0x001C9550 - 0x001C9651 (257 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C9550: ;
    ecx = MEM32(esp + 4);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0));
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001C9638; /* je: equal / zero */

loc_001C955F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_001C95D1; /* je: equal / zero */

loc_001C9566: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C95CC; /* jne: not equal / not zero */

loc_001C9569: ;
    eax = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);
    MEM32(eax) = 0xFFFFFFFFu;
    edi = 0x8B3E28;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_001C9580: ;
    ecx = MEM32(edi);
    esi = ebx;

loc_001C9584: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C95A8; /* jne: not equal / not zero */

loc_001C958C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C95A4; /* je: equal / zero */

loc_001C9590: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C95A8; /* jne: not equal / not zero */

loc_001C959A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C9584; /* jne: not equal / not zero */

loc_001C95A4: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C95AD;

loc_001C95A8: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001C95AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C95C1; /* je: equal / zero */

loc_001C95B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(8)) >> 32) & 1);
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x29 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001C9580; /* jl: less (signed <) */

loc_001C95BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C95C1: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);

loc_001C95CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C95D1: ;
    edx = MEM32(esp + 0x18);
    edi = 0x8F21C8;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001C95E0: ;
    esi = edx;
    eax = edi;

loc_001C95E4: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C9608; /* jne: not equal / not zero */

loc_001C95EC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9604; /* je: equal / zero */

loc_001C95F0: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C9608; /* jne: not equal / not zero */

loc_001C95FA: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C95E4; /* jne: not equal / not zero */

loc_001C9604: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C960D;

loc_001C9608: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001C960D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C962B; /* je: equal / zero */

loc_001C9611: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x18)) >> 32) & 1);
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x1B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001C95E0; /* jl: less (signed <) */

loc_001C961A: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = 0x8F21C8;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C962B: ;
    eax = MEM32(esp + 0x20);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C9638: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C9642u); RECOMP_ABI_CALL(0x00033B9Bu, sub_00033B9B); /* call 0x00033B9B */

loc_001C9642: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ecx) = eax;
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    esp += 4; return; /* ret */

}

/**
 * sub_001C96A0
 * Original: 0x001C96A0 - 0x001C96F6 (86 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C96A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C96A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0x7F0768;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001C9710
 * Original: 0x001C9710 - 0x001C971E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C9710: ;
    MEM32(ecx) = 0x7F0768;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001F14B(); return; /* tail jmp 0x0001F14B */

}

/**
 * sub_001C9730
 * Original: 0x001C9730 - 0x001C9807 (215 bytes, 62 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9730(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001C9730: ;
    eax = MEM32(esp + 4);
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C976F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001C975C: ;
    _fca = xmm2.f[0]; _fcb = MEMF(ecx + 0x38); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C9769; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(ecx + 0x38)) */

loc_001C9762: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x38); /* addss */
    goto loc_001C9789;

loc_001C9769: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x38); /* comiss */
    goto loc_001C9787;

loc_001C976F: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C977F; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm2.f[0]) */

loc_001C9779: ;
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    goto loc_001C9789;

loc_001C977F: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */

loc_001C9787: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C978E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x38)) */

loc_001C9789: ;
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */

loc_001C978E: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C97AF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_001C9793: ;
    _fca = xmm2.f[0]; _fcb = MEMF(ecx + 0x3C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C97A9; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(ecx + 0x3C)) */

loc_001C9799: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    goto loc_001C97CE;

loc_001C97A9: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x3C); /* comiss */
    goto loc_001C97C7;

loc_001C97AF: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x3C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C97C4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001C97B9: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    goto loc_001C97CE;

loc_001C97C4: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */

loc_001C97C7: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C97CE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 0x3C)) */

loc_001C97C9: ;
    MEMF(ecx + 0x3C) = xmm1.f[0]; /* movss */

loc_001C97CE: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C97F0; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_001C97D3: ;
    _fca = xmm2.f[0]; _fcb = MEMF(ecx + 0x40); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C97EA; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(ecx + 0x40)) */

loc_001C97D9: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x40)); /* movss */

loc_001C97DE: ;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x40) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_001C97EA: ;
    _fca = xmm3.f[0]; _fcb = MEMF(ecx + 0x40); /* comiss */
    goto loc_001C97FD;

loc_001C97F0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001C97DE; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_001C97FA: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */

loc_001C97FD: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C9804; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_001C97FF: ;
    MEMF(ecx + 0x40) = xmm3.f[0]; /* movss */

loc_001C9804: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C9840
 * Original: 0x001C9840 - 0x001C9A48 (520 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C9840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001C9840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = esi + 8;
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C9A41; /* je: equal / zero */

loc_001C985C: ;
    edi = esi + 0x2C;
    eax = edi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C9881u); RECOMP_ABI_CALL(0x00031EC7u, sub_00031EC7); /* call 0x00031EC7 */

loc_001C9881: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9A3A; /* je: equal / zero */

loc_001C988B: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x20); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x24); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x28); /* subss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C98ED; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_001C98D1: ;
    _fca = xmm4.f[0]; _fcb = MEMF(esi + 0x38); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C98E7; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(esi + 0x38)) */

loc_001C98D7: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 0x38) = xmm3.f[0]; /* movss */
    goto loc_001C990C;

loc_001C98E7: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x38); /* comiss */
    goto loc_001C9905;

loc_001C98ED: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C9902; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_001C98F7: ;
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 0x38) = xmm3.f[0]; /* movss */
    goto loc_001C990C;

loc_001C9902: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */

loc_001C9905: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C990C; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_001C9907: ;
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */

loc_001C990C: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C992D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_001C9911: ;
    _fca = xmm4.f[0]; _fcb = MEMF(esi + 0x3C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C9927; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(esi + 0x3C)) */

loc_001C9917: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    goto loc_001C994C;

loc_001C9927: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x3C); /* comiss */
    goto loc_001C9945;

loc_001C992D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C9942; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_001C9937: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    goto loc_001C994C;

loc_001C9942: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */

loc_001C9945: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C994C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001C9947: ;
    MEMF(esi + 0x3C) = xmm1.f[0]; /* movss */

loc_001C994C: ;
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C995D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_001C9951: ;
    _fca = xmm4.f[0]; _fcb = MEMF(esi + 0x40); /* comiss */
    if ((_fca > _fcb)) goto loc_001C9967; /* ja: above (unsigned >) (xmm4.f[0] vs MEMF(esi + 0x40)) */

loc_001C9957: ;
    _fca = xmm2.f[0]; _fcb = MEMF(esi + 0x40); /* comiss */
    goto loc_001C9976;

loc_001C995D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C996E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_001C9967: ;
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x40); /* addss */
    goto loc_001C9978;

loc_001C996E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */

loc_001C9976: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C997D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001C9978: ;
    MEMF(esi + 0x40) = xmm2.f[0]; /* movss */

loc_001C997D: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8F95D0); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8F95D4); /* subss */
    esi = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8F95D8); /* subss */
    eax = ecx + 0x28;
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(esp + 0x1C);
    MEM32(edx + 4) = esi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x20);
    MEM32(edx + 8) = esi;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x5C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    eax = esp + 0x30;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, eax);
    MEMF(ecx + 0x6C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C9A02u); RECOMP_ABI_CALL(0x00019417u, sub_00019417); /* call 0x00019417 */

loc_001C9A02: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;

loc_001C9A3A: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C9A41u); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_001C9A41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001C9AD0
 * Original: 0x001C9AD0 - 0x001C9B1B (75 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9AD0(void)
{

loc_001C9AD0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x38); /* addss */
    eax = ecx + 0x38;
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x18); /* addss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x1C); /* addss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8F95D0);
    MEM32(eax) = ecx;
    edx = MEM32(0x8F95D4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x8F95D8);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001C9B30
 * Original: 0x001C9B30 - 0x001C9B38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C9B30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001F14B(); return; /* tail jmp 0x0001F14B */

}

/**
 * sub_001C9B40
 * Original: 0x001C9B40 - 0x001C9B60 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C9B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x50;
    MEM32(esi) = 0x7F076C;
    PUSH32(esp, 0x001C9B51u); RECOMP_ABI_CALL(0x00037962u, sub_00037962); /* call 0x00037962 */

loc_001C9B51: ;
    MEM32(esi) = 0x7F0768;
    ecx = esi + 8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001F14B(); return; /* tail jmp 0x0001F14B */

}

/**
 * sub_001C9B70
 * Original: 0x001C9B70 - 0x001C9CF5 (389 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C9B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_001C9B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x100));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C9CF0; /* jne: not equal / not zero */

loc_001C9B8A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x20); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x24); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x28); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    eax = esi + 0x2C;
    MEM32(eax) = ecx;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    xmm4 = xmm0; /* movaps */
    MEM32(eax + 4) = edx;
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEM32(eax + 8) = ecx;
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm6.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C9C33; /* jnp: not parity */

loc_001C9C18: ;
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] / xmm5.f[0]; /* divss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    goto loc_001C9C3B;

loc_001C9C33: ;
    xmm5 = XMM_SCALAR(MEMF(0x7AD340)); /* movss */

loc_001C9C3B: ;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    eax = MEM32(esp + 0x10);
    ecx = esi + 0x50;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF0)); /* movss */
    edx = ecx + 0x50;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 8) = eax;
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(edx + 0xC) = eax;
    eax = MEM32(esp + 0x20);
    edx = ecx + 0x60;
    MEM32(edx) = eax;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    MEM32(edx + 4) = eax;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(edx + 8) = eax;
    MEMF(esp + 0x2C) = xmm6.f[0]; /* movss */
    eax = MEM32(esp + 0x2C);
    xmm4.f[0] = xmm4.f[0] / xmm5.f[0]; /* divss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(edx + 0xC) = eax;
    MEMF(ecx + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xA8) = xmm5.f[0]; /* movss */
    MEMF(ecx + 0xAC) = xmm4.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, 0x8FA320);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C9CE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9CE6u); } /* indirect call */
    }

loc_001C9CE9: ;
    MEM8(esi + 0x100) = 1;

loc_001C9CF0: ;
    POP32(esp, esi);
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
 * sub_001C9D60
 * Original: 0x001C9D60 - 0x001C9D7E (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C9D60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C9D68u); RECOMP_ABI_CALL(0x0002A8A7u, sub_0002A8A7); /* call 0x0002A8A7 */

loc_001C9D68: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    eax = esi + 8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C9D7Au); RECOMP_ABI_CALL(0x00019458u, sub_00019458); /* call 0x00019458 */

loc_001C9D7A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C9D90
 * Original: 0x001C9D90 - 0x001C9EE3 (339 bytes, 88 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C9D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001C9D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM8(ebx) = 0;
    PUSH32(esp, esi);
    esi = ecx;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xD0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xD4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xD8)); /* movss */
    PUSH32(esp, edi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    edi = esi + 0x2C;
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    eax = edi;
    MEM32(eax) = ecx;
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C9E02u); RECOMP_ABI_CALL(0x0001A515u, sub_0001A515); /* call 0x0001A515 */

loc_001C9E02: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x14); /* addss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x18); /* addss */
    eax = esi + 0x14;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(0x8F95D0);
    xmm0 = XMM_SCALAR(MEMF(0x7F065C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x18); /* comiss */
    MEM32(esi + 0x38) = edx;
    ecx = MEM32(0x8F95D4);
    MEM32(esi + 0x3C) = ecx;
    edx = MEM32(0x8F95D8);
    MEM32(esi + 0x40) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C9EA7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x18)) */

loc_001C9E5B: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x8F95D0);
    edx = edi;
    MEM32(edx) = eax;
    ecx = MEM32(0x8F95D4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8F95D8);
    MEM32(edx + 8) = eax;
    MEM8(ebx) = 1;

loc_001C9EA7: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD42C)); /* movss */
    ecx = edi;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001C9ECE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001C9EC8: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_001C9ECE: ;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C9F40
 * Original: 0x001C9F40 - 0x001CA07D (317 bytes, 115 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C9F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C9F40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = 1;
    MEM8(esi + 0x10) = LO8(ecx);
    MEM8(esi + 0x11) = LO8(ecx);
    MEM32(esi) = 0x7F0770;
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    edi = esi + 0x30;
    if (CMP_EQ(_fa, _fb)) goto loc_001C9F9A; /* je: equal / zero */

loc_001C9F80: ;
    edx = MEM32(eax);
    ecx = edi;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    goto loc_001C9FB9;

loc_001C9F9A: ;
    ecx = MEM32(ebx + 0x20);
    edx = MEM32(ebx);
    MEM32(esp + 0xC) = ecx;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x001C9FA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9FA5u); } /* indirect call */
    }

loc_001C9FA8: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C9FAFu); RECOMP_ABI_CALL(0x00027369u, sub_00027369); /* call 0x00027369 */

loc_001C9FAF: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C9FB9u); RECOMP_ABI_CALL(0x0001AD35u, sub_0001AD35); /* call 0x0001AD35 */

loc_001C9FB9: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9FE4; /* je: equal / zero */

loc_001C9FC0: ;
    edx = MEM32(eax);
    ecx = esi + 0x20;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_001C9FE4: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x39);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ebx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 0xC) = ecx;
    ecx = ebx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x001CA016u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA013u); } /* indirect call */
    }

loc_001CA016: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA021u); RECOMP_ABI_CALL(0x00027369u, sub_00027369); /* call 0x00027369 */

loc_001CA021: ;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA02Cu); RECOMP_ABI_CALL(0x0002D359u, sub_0002D359); /* call 0x0002D359 */

loc_001CA02C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = esi + 0x20;
    if (CMP_EQ(_fa, _fb)) goto loc_001CA05C; /* je: equal / zero */

loc_001CA036: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_001CA05C: ;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    MEM32(edx) = eax;
    eax = MEM32(edi + 8);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(edi + 0xC);
    MEM32(edx + 8) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(edx + 0xC) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001CA0D0
 * Original: 0x001CA0D0 - 0x001CA0D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CA0D0: ;
    g_seh_ebp = ebp; sub_00029E25(); return; /* tail jmp 0x00029E25 */

}

/**
 * sub_001CA0E0
 * Original: 0x001CA0E0 - 0x001CA34C (620 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CA0E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_001CA0E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    PUSH32(esp, esi);
    esi = eax + 0x40;
    PUSH32(esp, edi);
    ecx = 0x10;
    edi = esp + 0x60;
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
    xmm1 = XMM_MEM(esp + 0x60); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_MEM(esp + 0x70); /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_MEM(esp + 0x80); /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp + 0x44) = edx;
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp + 0x54) = edx;
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x48); /* mulss */
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x40); /* mulss */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001CA27E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001CA276: ;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    goto loc_001CA28B;

loc_001CA27E: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */

loc_001CA28B: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x5C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001CA2CF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001CA2C7: ;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    goto loc_001CA2DC;

loc_001CA2CF: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */

loc_001CA2DC: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001CA330; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_001CA318: ;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001CA330: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
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
 * sub_001CA3F0
 * Original: 0x001CA3F0 - 0x001CA511 (289 bytes, 75 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CA3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA3F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xBC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA419u); RECOMP_ABI_CALL(0x0001E09Du, sub_0001E09D); /* call 0x0001E09D */

loc_001CA419: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    eax = MEM32(eax + 0x20);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = ecx;
    MEM8(esp + 0x30) = LO8(ecx);
    MEM8(esp + 0x31) = LO8(ecx);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = 1;
    MEM32(esp + 0x20) = 0x7B1D88;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x44) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 0x48) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x4C) = edx;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = eax;
    eax = esp + 0x28;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x6C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA4F3u); RECOMP_ABI_CALL(0x00015F4Cu, sub_00015F4C); /* call 0x00015F4C */

loc_001CA4F3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x20;
    SET_LO8(ebx, LO8(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA501u); RECOMP_ABI_CALL(0x00029E25u, sub_00029E25); /* call 0x00029E25 */

loc_001CA501: ;
    ecx = esp + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA50Au); RECOMP_ABI_CALL(0x00029E25u, sub_00029E25); /* call 0x00029E25 */

loc_001CA50A: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001CA560
 * Original: 0x001CA560 - 0x001CA655 (245 bytes, 75 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CA560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM8(esp + 0x2C) = LO8(eax);
    MEM8(esp + 0x2D) = LO8(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x20);
    ecx = esi;
    MEM32(esp + 0x2C) = 1;
    MEM32(esp + 0x20) = 0x7B1D88;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x001CA59Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA599u); } /* indirect call */
    }

loc_001CA59C: ;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA5AAu); RECOMP_ABI_CALL(0x0001AD35u, sub_0001AD35); /* call 0x0001AD35 */

loc_001CA5AA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esi);
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x001CA5D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA5D5u); } /* indirect call */
    }

loc_001CA5D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA5E5u); RECOMP_ABI_CALL(0x0002D359u, sub_0002D359); /* call 0x0002D359 */

loc_001CA5E5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA60E; /* je: equal / zero */

loc_001CA5EC: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = ecx;
    goto loc_001CA62E;

loc_001CA60E: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x58);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;

loc_001CA62E: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA640u); RECOMP_ABI_CALL(0x00015F4Cu, sub_00015F4C); /* call 0x00015F4C */

loc_001CA640: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x20;
    SET_LO8(ebx, LO8(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA64Eu); RECOMP_ABI_CALL(0x00029E25u, sub_00029E25); /* call 0x00029E25 */

loc_001CA64E: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001CA6A0
 * Original: 0x001CA6A0 - 0x001CA6B0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA6A0(void)
{

loc_001CA6A0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001CA6C0
 * Original: 0x001CA6C0 - 0x001CA6C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA6C0(void)
{

loc_001CA6C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CA6D0
 * Original: 0x001CA6D0 - 0x001CA6DB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA6D0: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_001CA6E0
 * Original: 0x001CA6E0 - 0x001CA6EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA6E0(void)
{

loc_001CA6E0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CA6F0
 * Original: 0x001CA6F0 - 0x001CA6FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA6F0(void)
{

loc_001CA6F0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CA700
 * Original: 0x001CA700 - 0x001CA701 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA700(void)
{

loc_001CA700: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CA710
 * Original: 0x001CA710 - 0x001CA734 (36 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA710: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001CA729; /* je: equal / zero */

loc_001CA71D: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

loc_001CA729: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CA740
 * Original: 0x001CA740 - 0x001CA74B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA740: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_001CA750
 * Original: 0x001CA750 - 0x001CA77B (43 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA750: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA75D; /* je: equal / zero */

loc_001CA757: ;
    eax = MEM32(eax + 4);
    MEM32(ecx + 8) = eax;

loc_001CA75D: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA770; /* je: equal / zero */

loc_001CA764: ;
    ecx = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    esp += 8; return; /* ret 4 */

loc_001CA770: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CA790
 * Original: 0x001CA790 - 0x001CA793 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA790(void)
{

loc_001CA790: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001CA7A0
 * Original: 0x001CA7A0 - 0x001CA7CC (44 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA7A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x8F4BE0;
    PUSH32(esp, 0x001CA7ADu); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_001CA7AD: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA7B6; /* je: equal / zero */

loc_001CA7B4: ;
    MEM32(ecx) = eax;

loc_001CA7B6: ;
    edx = MEM32(esp + 8);
    MEM32(eax) = esi;
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CA7E0
 * Original: 0x001CA7E0 - 0x001CA80C (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA7E0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA808; /* je: equal / zero */

loc_001CA7E7: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001CA7F5; /* je: equal / zero */

loc_001CA7F3: ;
    MEM32(ecx) = edx;

loc_001CA7F5: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, eax);
    ecx = 0x8F4BE0;
    PUSH32(esp, 0x001CA804u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_001CA804: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CA808: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001CA820
 * Original: 0x001CA820 - 0x001CA84B (43 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CA820: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA848; /* je: equal / zero */

loc_001CA828: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA848; /* je: equal / zero */

loc_001CA82C: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(edx);
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001CA83A; /* je: equal / zero */

loc_001CA838: ;
    MEM32(eax) = ecx;

loc_001CA83A: ;
    MEM32(esp + 4) = edx;
    ecx = 0x8F4BE0;
    g_seh_ebp = ebp; sub_0059CA4C(); return; /* tail jmp 0x0059CA4C */

loc_001CA848: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CA860
 * Original: 0x001CA860 - 0x001CA889 (41 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA860(void)
{

loc_001CA860: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001CA86Du); RECOMP_ABI_CALL(0x000175EAu, sub_000175EA); /* call 0x000175EA */

loc_001CA86D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CA8A0
 * Original: 0x001CA8A0 - 0x001CA910 (112 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA8A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA8A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0x7F0728;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 1;
    PUSH32(esp, esi);
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 8) = ecx;
    esi = MEM32(0x8C21CC);
    MEM32(eax + 0xC) = esi;
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 0x10) = 0x8FA2D0;
    MEM8(eax + 6) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CA930
 * Original: 0x001CA930 - 0x001CAA55 (293 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA930: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0x7F0728;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx = 1;
    MEM32(eax + 0x44) = edx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    PUSH32(esp, esi);
    esi = MEM32(0x8C21CC);
    MEM32(eax + 0xC) = esi;
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 0x10) = 0x8FA2D0;
    MEM8(eax + 6) = LO8(edx);
    MEM32(eax) = 0x7F0784;
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x78) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x84) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x8C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x94) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x9C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xA0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7D9DC4)); /* movss */
    MEMF(eax + 0xA8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7F0780)); /* movss */
    MEM8(eax + 4) = LO8(edx);
    MEMF(eax + 0xAC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CAAA0
 * Original: 0x001CAAA0 - 0x001CAAC1 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAAA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001CAAA8u); RECOMP_ABI_CALL(0x00037962u, sub_00037962); /* call 0x00037962 */

loc_001CAAA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CAABB; /* je: equal / zero */

loc_001CAAAF: ;
    ecx = MEM32(0x8FA274);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001CAABBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAAB8u); } /* indirect call */
    }

loc_001CAABB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CAAD0
 * Original: 0x001CAAD0 - 0x001CAB05 (53 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAAD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x50;
    MEM32(esi) = 0x7F076C;
    PUSH32(esp, 0x001CAAE1u); RECOMP_ABI_CALL(0x00037962u, sub_00037962); /* call 0x00037962 */

loc_001CAAE1: ;
    ecx = esi + 8;
    MEM32(esi) = 0x7F0768;
    PUSH32(esp, 0x001CAAEFu); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_001CAAEF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CAAFF; /* je: equal / zero */

loc_001CAAF6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CAAFCu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001CAAFC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CAAFF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CAB20
 * Original: 0x001CAB20 - 0x001CAB2C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAB20(void)
{

loc_001CAB20: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x8F2194);
    esp += 4; return; /* ret */

}

/**
 * sub_001CAB30
 * Original: 0x001CAB30 - 0x001CAB96 (102 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAB30: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CAB33: ;
    ecx = MEM32(esi + 0x8F2194);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAB44; /* je: equal / zero */

loc_001CAB3D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001CAB44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAB41u); } /* indirect call */
    }

loc_001CAB44: ;
    MEM32(esi + 0x8F2194) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x24 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CAB33; /* jl: less (signed <) */

loc_001CAB56: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001CAB60;

    /* nop */

loc_001CAB60: ;
    ecx = MEM32(esi + 0x8F217C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAB70; /* je: equal / zero */

loc_001CAB6A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001CAB70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAB6Eu); } /* indirect call */
    }

loc_001CAB70: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CAB60; /* jl: less (signed <) */

loc_001CAB78: ;
    eax = MEM32(0x8F21B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CAB83u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_001CAB83: ;
    ecx = eax;
    PUSH32(esp, 0x001CAB8Au); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_001CAB8A: ;
    MEM32(0x8F21B8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CABB0
 * Original: 0x001CABB0 - 0x001CABF7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CABB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CABB0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001CABC0: ;
    eax = MEM32(esi + 0x8F217C);
    _fa = (uint32_t)(MEM8(eax + 0x12C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CABD6; /* jne: not equal / not zero */

loc_001CABCE: ;
    MEM32(eax + 0x130) = MEM32(eax + 0x130) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x130)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001CABEC;

loc_001CABD6: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CABEC; /* jne: not equal / not zero */

loc_001CABDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CABEC; /* jne: not equal / not zero */

loc_001CABDE: ;
    MEM8(ecx + 0x12C) = LO8(ebx);
    MEM32(ecx + 0x130) = ebx;
    SET_LO8(edx, 1);

loc_001CABEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CABC0; /* jl: less (signed <) */

loc_001CABF4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CAC10
 * Original: 0x001CAC10 - 0x001CAC37 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001CAC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAC10: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x001CAC19u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001CAC19: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAC34; /* je: equal / zero */

loc_001CAC20: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x8F21B4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001CAC33u); RECOMP_ABI_CALL(0x00029948u, sub_00029948); /* call 0x00029948 */

loc_001CAC33: ;
    esp += 4; return; /* ret */

loc_001CAC34: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CAC40
 * Original: 0x001CAC40 - 0x001CAC5E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAC40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001CAC48u); RECOMP_ABI_CALL(0x0001547Au, sub_0001547A); /* call 0x0001547A */

loc_001CAC48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CAC58; /* je: equal / zero */

loc_001CAC4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CAC55u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001CAC55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CAC58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CAC70
 * Original: 0x001CAC70 - 0x001CACA6 (54 bytes, 15 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAC70: ;
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(eax + 0x10) = LO8(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x7F07A0;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 20; return; /* ret 16 */

}
